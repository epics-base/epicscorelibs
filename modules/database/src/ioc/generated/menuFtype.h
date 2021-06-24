/** @file menuFtype.h
 * @brief Declarations generated from menuFtype.dbd
 */

#ifndef INC_menuFtype_H
#define INC_menuFtype_H

#ifndef menuFtype_NUM_CHOICES
/** @brief Enumerated type from menu menuFtype */
typedef enum {
    menuFtypeSTRING                 /**< @brief State string "STRING" */,
    menuFtypeCHAR                   /**< @brief State string "CHAR" */,
    menuFtypeUCHAR                  /**< @brief State string "UCHAR" */,
    menuFtypeSHORT                  /**< @brief State string "SHORT" */,
    menuFtypeUSHORT                 /**< @brief State string "USHORT" */,
    menuFtypeLONG                   /**< @brief State string "LONG" */,
    menuFtypeULONG                  /**< @brief State string "ULONG" */,
    menuFtypeINT64                  /**< @brief State string "INT64" */,
    menuFtypeUINT64                 /**< @brief State string "UINT64" */,
    menuFtypeFLOAT                  /**< @brief State string "FLOAT" */,
    menuFtypeDOUBLE                 /**< @brief State string "DOUBLE" */,
    menuFtypeENUM                   /**< @brief State string "ENUM" */
} menuFtype;
/** @brief Number of states defined for menu menuFtype */
#define menuFtype_NUM_CHOICES 12
#endif


#endif /* INC_menuFtype_H */
