
from Com cimport (epicsUInt8, epicsUInt16, epicsUInt32,
                  epicsInt8, epicsInt16, epicsInt32,
                  epicsFloat32, epicsFloat64,
                  epicsOldString,
                  epicsTimeStamp)

cdef extern from "<db_access.h>":
    enum: MAX_UNITS_SIZE
    enum: MAX_ENUM_STRING_SIZE
    enum: MAX_ENUM_STATES
    enum: DBF_STRING
    enum: DBF_INT
    enum: DBF_SHORT
    enum: DBF_FLOAT
    enum: DBF_ENUM
    enum: DBF_CHAR
    enum: DBF_LONG
    enum: DBF_DOUBLE
    enum: DBF_NO_ACCESS
    enum: LAST_TYPE

    enum: DBR_STRING
    enum: DBR_INT
    enum: DBR_SHORT
    enum: DBR_FLOAT
    enum: DBR_ENUM
    enum: DBR_CHAR
    enum: DBR_LONG
    enum: DBR_DOUBLE
    enum: DBR_STS_STRING
    enum: DBR_STS_SHORT
    enum: DBR_STS_INT
    enum: DBR_STS_FLOAT
    enum: DBR_STS_ENUM
    enum: DBR_STS_CHAR
    enum: DBR_STS_LONG
    enum: DBR_STS_DOUBLE
    enum: DBR_TIME_STRING
    enum: DBR_TIME_INT
    enum: DBR_TIME_SHORT
    enum: DBR_TIME_FLOAT
    enum: DBR_TIME_ENUM
    enum: DBR_TIME_CHAR
    enum: DBR_TIME_LONG
    enum: DBR_TIME_DOUBLE
    enum: DBR_GR_STRING
    enum: DBR_GR_SHORT
    enum: DBR_GR_INT
    enum: DBR_GR_FLOAT
    enum: DBR_GR_ENUM
    enum: DBR_GR_CHAR
    enum: DBR_GR_LONG
    enum: DBR_GR_DOUBLE
    enum: DBR_CTRL_STRING
    enum: DBR_CTRL_SHORT
    enum: DBR_CTRL_INT
    enum: DBR_CTRL_FLOAT
    enum: DBR_CTRL_ENUM
    enum: DBR_CTRL_CHAR
    enum: DBR_CTRL_LONG
    enum: DBR_CTRL_DOUBLE
    enum: DBR_PUT_ACKT
    enum: DBR_PUT_ACKS
    enum: DBR_STSACK_STRING
    enum: DBR_CLASS_NAME
    enum: LAST_BUFFER_TYPE

    # function type macros
    int VALID_DB_FIELD(int dbf)
    int INVALID_DB_FIELD(int dbf)
    int VALID_DB_REQ(int dbr)
    int INVALID_DB_REQ(int dbr)
    unsigned dbr_size_n(unsigned dbr, unsigned long count)
    void* dbr_value_ptr(void* buf, int dbr)
    int dbf_type_is_valid(int dbf)
    int dbr_type_is_valid(int dbr)
    int dbr_type_is_plain(int dbr)
    int dbr_type_is_STS(int dbr)
    int dbr_type_is_TIME(int dbr)
    int dbr_type_is_GR(int dbr)
    int dbr_type_is_CTRL(int dbr)
    int dbr_type_is_STRING(int dbr)
    int dbr_type_is_SHORT(int dbr)
    int dbr_type_is_FLOAT(int dbr)
    int dbr_type_is_ENUM(int dbr)
    int dbr_type_is_CHAR(int dbr)
    int dbr_type_is_LONG(int dbr)
    int dbr_type_is_DOUBLE(int dbr)
    const char* dbf_type_to_text(int dbf)
    const char* dbr_type_to_text(int dbr)
    int dbf_type_to_DBR(int dbr)
    int dbf_type_to_DBR_STS(int dbr)
    int dbf_type_to_DBR_TIME(int dbr)
    int dbf_type_to_DBR_GR(int dbr)
    int dbf_type_to_DBR_CTRL(int dbr)

    ctypedef epicsOldString dbr_string_t
    ctypedef epicsUInt8 dbr_char_t
    ctypedef epicsInt16 dbr_short_t
    ctypedef epicsUInt16 dbr_ushort_t
    ctypedef epicsInt16 dbr_int_t
    ctypedef epicsUInt16 dbr_enum_t
    ctypedef epicsInt32 dbr_long_t
    ctypedef epicsUInt32 dbr_ulong_t
    ctypedef epicsFloat32 dbr_float_t
    ctypedef epicsFloat64 dbr_double_t
    ctypedef epicsUInt16 dbr_put_ackt_t
    ctypedef epicsUInt16 dbr_put_acks_t
    ctypedef epicsOldString dbr_stsack_string_t
    ctypedef epicsOldString dbr_class_name_t

    cdef struct dbr_sts_string:
        dbr_short_t status
        dbr_short_t severity
        dbr_string_t value

    cdef struct dbr_stsack_string:
        dbr_ushort_t	status
        dbr_ushort_t	severity
        dbr_ushort_t	ackt
        dbr_ushort_t	acks
        dbr_string_t	value

    cdef struct dbr_sts_int:
        dbr_short_t	status
        dbr_short_t	severity
        dbr_short_t	value

    cdef struct dbr_sts_short:
        dbr_short_t	status
        dbr_short_t	severity
        dbr_short_t	value

    cdef struct dbr_sts_float:
        dbr_short_t	status
        dbr_short_t	severity
        dbr_float_t	value

    cdef struct dbr_sts_enum:
        dbr_short_t	status
        dbr_short_t	severity
        dbr_enum_t	value

    cdef struct dbr_sts_char:
        dbr_short_t	status
        dbr_short_t	severity
        dbr_char_t	RISC_pad
        dbr_char_t	value

    cdef struct dbr_sts_long:
        dbr_short_t	status
        dbr_short_t	severity
        dbr_long_t	value

    cdef struct dbr_sts_double:
        dbr_short_t	status
        dbr_short_t	severity
        dbr_long_t	RISC_pad
        dbr_double_t	value


    # VALUES WITH STATUS AND TIME STRUCTURES

    cdef struct dbr_time_string:
        dbr_short_t	status
        dbr_short_t	severity
        epicsTimeStamp	stamp
        dbr_string_t	value

    cdef struct dbr_time_short:
        dbr_short_t	status
        dbr_short_t	severity
        epicsTimeStamp	stamp
        dbr_short_t	RISC_pad
        dbr_short_t	value

    cdef struct dbr_time_float:
        dbr_short_t	status
        dbr_short_t	severity
        epicsTimeStamp	stamp
        dbr_float_t	value

    cdef struct dbr_time_enum:
        dbr_short_t	status
        dbr_short_t	severity
        epicsTimeStamp	stamp
        dbr_short_t	RISC_pad
        dbr_enum_t	value

    cdef struct dbr_time_char:
        dbr_short_t	status
        dbr_short_t	severity
        epicsTimeStamp	stamp
        dbr_short_t	RISC_pad0
        dbr_char_t	RISC_pad1
        dbr_char_t	value

    cdef struct dbr_time_long:
        dbr_short_t	status
        dbr_short_t	severity
        epicsTimeStamp	stamp
        dbr_long_t	value

    cdef struct dbr_time_double:
        dbr_short_t	status
        dbr_short_t	severity
        epicsTimeStamp	stamp
        dbr_long_t	RISC_pad
        dbr_double_t	value

    # VALUES WITH STATUS AND GRAPHIC STRUCTURES

    cdef struct dbr_gr_int:
        dbr_short_t	status
        dbr_short_t	severity
        char units[MAX_UNITS_SIZE]
        dbr_short_t	upper_disp_limit
        dbr_short_t	lower_disp_limit
        dbr_short_t	upper_alarm_limit
        dbr_short_t	upper_warning_limit
        dbr_short_t	lower_warning_limit
        dbr_short_t	lower_alarm_limit
        dbr_short_t	value

    cdef struct dbr_gr_short:
        dbr_short_t	status
        dbr_short_t	severity
        char units[MAX_UNITS_SIZE]
        dbr_short_t	upper_disp_limit
        dbr_short_t	lower_disp_limit
        dbr_short_t	upper_alarm_limit
        dbr_short_t	upper_warning_limit
        dbr_short_t	lower_warning_limit
        dbr_short_t	lower_alarm_limit
        dbr_short_t	value

    cdef struct dbr_gr_float:
        dbr_short_t	status
        dbr_short_t	severity
        dbr_short_t	precision
        dbr_short_t	RISC_pad0
        char units[MAX_UNITS_SIZE]
        dbr_float_t	upper_disp_limit
        dbr_float_t	lower_disp_limit
        dbr_float_t	upper_alarm_limit
        dbr_float_t	upper_warning_limit
        dbr_float_t	lower_warning_limit
        dbr_float_t	lower_alarm_limit
        dbr_float_t	value

    cdef struct dbr_gr_enum:
        dbr_short_t	status
        dbr_short_t	severity
        dbr_short_t	no_str
        char strs[MAX_ENUM_STATES][MAX_ENUM_STRING_SIZE]
        dbr_enum_t	value

    cdef struct dbr_gr_char:
        dbr_short_t	status
        dbr_short_t	severity
        char units[MAX_UNITS_SIZE]
        dbr_char_t	upper_disp_limit
        dbr_char_t	lower_disp_limit
        dbr_char_t	upper_alarm_limit
        dbr_char_t	upper_warning_limit
        dbr_char_t	lower_warning_limit
        dbr_char_t	lower_alarm_limit
        dbr_char_t	RISC_pad
        dbr_char_t	value

    cdef struct dbr_gr_long:
        dbr_short_t	status
        dbr_short_t	severity
        char units[MAX_UNITS_SIZE]
        dbr_long_t	upper_disp_limit
        dbr_long_t	lower_disp_limit
        dbr_long_t	upper_alarm_limit
        dbr_long_t	upper_warning_limit
        dbr_long_t	lower_warning_limit
        dbr_long_t	lower_alarm_limit
        dbr_long_t	value

    cdef struct dbr_gr_double:
        dbr_short_t	status
        dbr_short_t	severity
        dbr_short_t	precision
        dbr_short_t	RISC_pad0
        char units[MAX_UNITS_SIZE]
        dbr_double_t	upper_disp_limit
        dbr_double_t	lower_disp_limit
        dbr_double_t	upper_alarm_limit
        dbr_double_t	upper_warning_limit
        dbr_double_t	lower_warning_limit
        dbr_double_t	lower_alarm_limit
        dbr_double_t	value

    # VALUES WITH STATUS, GRAPHIC and CONTROL STRUCTURES */

    cdef struct dbr_ctrl_int:
        dbr_short_t	status
        dbr_short_t	severity
        char units[MAX_UNITS_SIZE]
        dbr_short_t	upper_disp_limit
        dbr_short_t	lower_disp_limit
        dbr_short_t	upper_alarm_limit
        dbr_short_t	upper_warning_limit
        dbr_short_t	lower_warning_limit
        dbr_short_t	lower_alarm_limit
        dbr_short_t	upper_ctrl_limit
        dbr_short_t	lower_ctrl_limit
        dbr_short_t	value

    cdef struct dbr_ctrl_short:
        dbr_short_t	status
        dbr_short_t	severity
        char units[MAX_UNITS_SIZE]
        dbr_short_t	upper_disp_limit
        dbr_short_t	lower_disp_limit
        dbr_short_t	upper_alarm_limit
        dbr_short_t	upper_warning_limit
        dbr_short_t	lower_warning_limit
        dbr_short_t	lower_alarm_limit
        dbr_short_t	upper_ctrl_limit
        dbr_short_t	lower_ctrl_limit
        dbr_short_t	value

    cdef struct dbr_ctrl_float:
        dbr_short_t	status
        dbr_short_t	severity
        dbr_short_t	precision
        dbr_short_t	RISC_pad
        char units[MAX_UNITS_SIZE]
        dbr_float_t	upper_disp_limit
        dbr_float_t	lower_disp_limit
        dbr_float_t	upper_alarm_limit
        dbr_float_t	upper_warning_limit
        dbr_float_t	lower_warning_limit
        dbr_float_t	lower_alarm_limit
        dbr_float_t	upper_ctrl_limit
        dbr_float_t	lower_ctrl_limit
        dbr_float_t	value

    cdef struct dbr_ctrl_enum:
        dbr_short_t	status
        dbr_short_t	severity
        dbr_short_t	no_str
        char strs[MAX_ENUM_STATES][MAX_ENUM_STRING_SIZE]
        dbr_enum_t	value

    cdef struct dbr_ctrl_char:
        dbr_short_t	status
        dbr_short_t	severity
        char units[MAX_UNITS_SIZE]
        dbr_char_t	upper_disp_limit
        dbr_char_t	lower_disp_limit
        dbr_char_t	upper_alarm_limit
        dbr_char_t	upper_warning_limit
        dbr_char_t	lower_warning_limit
        dbr_char_t	lower_alarm_limit
        dbr_char_t	upper_ctrl_limit
        dbr_char_t	lower_ctrl_limit
        dbr_char_t	RISC_pad
        dbr_char_t	value

    cdef struct dbr_ctrl_long:
        dbr_short_t	status
        dbr_short_t	severity
        char units[MAX_UNITS_SIZE]
        dbr_long_t	upper_disp_limit
        dbr_long_t	lower_disp_limit
        dbr_long_t	upper_alarm_limit
        dbr_long_t	upper_warning_limit
        dbr_long_t	lower_warning_limit
        dbr_long_t	lower_alarm_limit
        dbr_long_t	upper_ctrl_limit
        dbr_long_t	lower_ctrl_limit
        dbr_long_t	value

    cdef struct dbr_ctrl_double:
        dbr_short_t	status
        dbr_short_t	severity
        dbr_short_t	precision
        dbr_short_t	RISC_pad0
        char units[MAX_UNITS_SIZE]
        dbr_double_t	upper_disp_limit
        dbr_double_t	lower_disp_limit
        dbr_double_t	upper_alarm_limit
        dbr_double_t	upper_warning_limit
        dbr_double_t	lower_warning_limit
        dbr_double_t	lower_alarm_limit
        dbr_double_t	upper_ctrl_limit
        dbr_double_t	lower_ctrl_limit
        dbr_double_t	value

cdef extern from "<cadef.h>":
    enum: CA_OP_GET
    enum: CA_OP_PUT
    enum: CA_OP_CREATE_CHANNEL
    enum: CA_OP_ADD_EVENT
    enum: CA_OP_CLEAR_EVENT
    enum: CA_OP_OTHER
    enum: CA_OP_CONN_UP
    enum: CA_OP_CONN_DOWN
    enum: TYPENOTCONN

    cdef struct oldChannelNotify:
        pass # opaque
    cdef struct oldSubscription:
        pass # opaque

    ctypedef oldChannelNotify* chid
    ctypedef chid                    chanId
    ctypedef long                    chtype
    ctypedef oldSubscription * evid
    ctypedef double                  ca_real
    ctypedef unsigned capri

    cdef struct connection_handler_args:
        chanId chid
        long op
    ctypedef void caCh (connection_handler_args args)

    cdef struct ca_access_rights:
        unsigned read_access
        unsigned write_access
    ctypedef access_rights_handler_args caar

    cdef struct access_rights_handler_args:
        chanId chid
        caar ar
    ctypedef void caArh (access_rights_handler_args args)

    cdef struct event_handler_args:
        void            *usr
        chanId          chid
        long            type
        long            count
        const void      *dbr
        int             status
    ctypedef void caEventCallBackFunc (event_handler_args)

    cdef struct exception_handler_args:
        void            *usr
        chanId          chid
        long            type
        long            count
        void            *addr
        long            stat
        long            op
        const char      *ctx
        const char      *pFile
        unsigned        lineNo
    ctypedef void caExceptionHandler (exception_handler_args)

    cdef struct ca_client_context:
        pass # opaque

    short ca_field_type (chid chan)
    unsigned long ca_element_count (chid chan)
    const char * ca_name (chid chan)
    void ca_set_puser (chid chan, void *puser)
    void * ca_puser (chid chan)
    unsigned ca_read_access (chid chan)
    unsigned ca_write_access (chid chan)

    cdef enum channel_state:
        cs_never_conn
        cs_prev_conn
        cs_conn
        cs_closed

    channel_state ca_state (chid chan)

    int ca_task_initialize ()

    cdef enum ca_preemptive_callback_select:
        ca_disable_preemptive_callback
        ca_enable_preemptive_callback

    int ca_context_create (ca_preemptive_callback_select select)
    void ca_detach_context () 

    int ca_task_exit ()
    void ca_context_destroy ()

    int ca_create_channel(const char *pChanName, caCh *pConnStateCallback, void *pUserPrivate, capri priority, chid *pChanID)

    int ca_change_connection_event(chid chan, caCh * pfunc)

    int ca_replace_access_rights_event (chid chan, caArh *pfunc)

    int ca_add_exception_event(caExceptionHandler *pfunc, void *pArg)

    int ca_clear_channel(chid chanId)

    int ca_array_put(chtype type, unsigned long count, chid chanId, const void * pValue)

    int ca_array_put_callback(chtype type, unsigned long count, chid chanId, const void * pValue, caEventCallBackFunc * pFunc, void * pArg)

    int ca_array_get( chtype type, unsigned long count, chid chanId, void * pValue)

    int ca_array_get_callback( chtype type, unsigned long count, chid chanId, caEventCallBackFunc * pFunc, void * pArg)

    int ca_create_subscription( chtype type, unsigned long count, chid chanId, long mask, caEventCallBackFunc * pFunc, void * pArg, evid * pEventID)

    int ca_clear_subscription( evid eventID)

    chid ca_evid_to_chid ( evid id )

    int ca_pend_event (ca_real timeOut)
    int ca_poll()

    int ca_pend_io (ca_real timeOut)

    int ca_pend (ca_real timeout, int early)

    int ca_test_io ()

    int ca_flush_io ()

    const char * ca_host_name (chid channel)
    # thread safe version
    unsigned ca_get_host_name ( chid pChan, char *pBuf, unsigned bufLength )

    int ca_v42_ok (chid chan)

    const char* ca_version ()

    ca_client_context* ca_current_context ()
    int ca_attach_context ( ca_client_context * context )

    int ca_client_status ( unsigned level )
    int ca_context_status ( ca_client_context *, unsigned level )


    int ca_modify_user_name ( const char *pUserName )
    int ca_modify_host_name ( const char *pHostName )
