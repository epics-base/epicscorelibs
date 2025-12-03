
cdef extern from "<epicsMutex.h>" nogil:
    cdef cppclass epicsMutex:
        void lock() except+
        void tryLock() except+
        void unlock()
