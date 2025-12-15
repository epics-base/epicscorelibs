### pvAccess Module

Changes to this module since the previous release:

#### Release 7.1.8

- Compatible changes
  - Capped the number and age of PVA beacons to avoid a resource leak. Beacons
    older than 360 seconds will be destroyed automatically, new beacons will be
    ignored if >=2048 exist already.
  - Various Clang, MSVC and GCC compiler warnings cleaned up.
