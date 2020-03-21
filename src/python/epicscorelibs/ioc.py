import ctypes
import code
import argparse
import os

from epicscorelibs import path


# The libraries we need to run up a soft IOC, don't load dbCore twice
dbCore = ctypes.CDLL(path.get_lib("dbCore"), mode=ctypes.RTLD_GLOBAL)
dbRecStd = ctypes.CDLL(path.get_lib("dbRecStd"), mode=ctypes.RTLD_GLOBAL)

# The functions we need from those libraries

# dbLoadDatabase(file, path, subs)
dbLoadDatabase = dbCore.dbLoadDatabase
dbLoadDatabase.argtypes = [ctypes.c_char_p, ctypes.c_char_p, ctypes.c_char_p]

# pdbbase is valid after the DBD is loaded
pdbbase = ctypes.c_void_p.in_dll(dbCore, "pdbbase")

# softIoc_registerRecordDeviceDriver(pdbbase)
#registerRecordDeviceDriver = dbRecStd.softIoc_registerRecordDeviceDriver
registerRecordDeviceDriver = dbCore.dynamic_registerRecordDeviceDriver
registerRecordDeviceDriver.argtypes = [ctypes.c_void_p]

# dbLoadRecords(file, subs)
dbLoadRecords = dbCore.dbLoadRecords
dbLoadRecords.argtypes = [ctypes.c_char_p, ctypes.c_char_p]

# iocInit()
iocInit = dbCore.iocInit

def start_ioc(database, macros):
    dbd = os.path.join(path.base_path, "dbd", "softIoc.dbd")
    dbLoadDatabase(dbd.encode(), None, None)
    registerRecordDeviceDriver(pdbbase)
    dbLoadRecords(database.encode(), macros.encode())
    iocInit()


def main():
    parser = argparse.ArgumentParser(
        description="Run a cut down softIoc by calling the functions from Python")
    parser.add_argument('-m', '--macros', default="",
        help="Macro definitions when expanding database, e.g. macro=value,macro2=value2")
    parser.add_argument('-d', '--database', default="",
        help="Path to database file to load")
    args = parser.parse_args()
    start_ioc(args.database, args.macros)
    code.interact()


# Run with python -m epicscorelibs.ioc -d /path/to/db -m macro=value,macro2=value2
if __name__ == "__main__":
    main()
