/** @file menuAlarmSevr.h
 * @brief Declarations generated from menuAlarmSevr.dbd
 */

#ifndef INC_menuAlarmSevr_H
#define INC_menuAlarmSevr_H

#ifndef menuAlarmSevr_NUM_CHOICES
/** @brief Enumerated type from menu menuAlarmSevr */
typedef enum {
    menuAlarmSevrNO_ALARM           /**< @brief State string "NO_ALARM" */,
    menuAlarmSevrMINOR              /**< @brief State string "MINOR" */,
    menuAlarmSevrMAJOR              /**< @brief State string "MAJOR" */,
    menuAlarmSevrINVALID            /**< @brief State string "INVALID" */
} menuAlarmSevr;
/** @brief Number of states defined for menu menuAlarmSevr */
#define menuAlarmSevr_NUM_CHOICES 4
#endif


#endif /* INC_menuAlarmSevr_H */
