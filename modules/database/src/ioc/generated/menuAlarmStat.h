/** @file menuAlarmStat.h
 * @brief Declarations generated from menuAlarmStat.dbd
 */

#ifndef INC_menuAlarmStat_H
#define INC_menuAlarmStat_H

#ifndef menuAlarmStat_NUM_CHOICES
/** @brief Enumerated type from menu menuAlarmStat */
typedef enum {
    menuAlarmStatNO_ALARM           /**< @brief State string "NO_ALARM" */,
    menuAlarmStatREAD               /**< @brief State string "READ" */,
    menuAlarmStatWRITE              /**< @brief State string "WRITE" */,
    menuAlarmStatHIHI               /**< @brief State string "HIHI" */,
    menuAlarmStatHIGH               /**< @brief State string "HIGH" */,
    menuAlarmStatLOLO               /**< @brief State string "LOLO" */,
    menuAlarmStatLOW                /**< @brief State string "LOW" */,
    menuAlarmStatSTATE              /**< @brief State string "STATE" */,
    menuAlarmStatCOS                /**< @brief State string "COS" */,
    menuAlarmStatCOMM               /**< @brief State string "COMM" */,
    menuAlarmStatTIMEOUT            /**< @brief State string "TIMEOUT" */,
    menuAlarmStatHWLIMIT            /**< @brief State string "HWLIMIT" */,
    menuAlarmStatCALC               /**< @brief State string "CALC" */,
    menuAlarmStatSCAN               /**< @brief State string "SCAN" */,
    menuAlarmStatLINK               /**< @brief State string "LINK" */,
    menuAlarmStatSOFT               /**< @brief State string "SOFT" */,
    menuAlarmStatBAD_SUB            /**< @brief State string "BAD_SUB" */,
    menuAlarmStatUDF                /**< @brief State string "UDF" */,
    menuAlarmStatDISABLE            /**< @brief State string "DISABLE" */,
    menuAlarmStatSIMM               /**< @brief State string "SIMM" */,
    menuAlarmStatREAD_ACCESS        /**< @brief State string "READ_ACCESS" */,
    menuAlarmStatWRITE_ACCESS       /**< @brief State string "WRITE_ACCESS" */
} menuAlarmStat;
/** @brief Number of states defined for menu menuAlarmStat */
#define menuAlarmStat_NUM_CHOICES 22
#endif


#endif /* INC_menuAlarmStat_H */
