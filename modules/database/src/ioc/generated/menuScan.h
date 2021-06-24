/** @file menuScan.h
 * @brief Declarations generated from menuScan.dbd
 */

#ifndef INC_menuScan_H
#define INC_menuScan_H

#ifndef menuScan_NUM_CHOICES
/** @brief Enumerated type from menu menuScan */
typedef enum {
    menuScanPassive                 /**< @brief State string "Passive" */,
    menuScanEvent                   /**< @brief State string "Event" */,
    menuScanI_O_Intr                /**< @brief State string "I/O Intr" */,
    menuScan10_second               /**< @brief State string "10 second" */,
    menuScan5_second                /**< @brief State string "5 second" */,
    menuScan2_second                /**< @brief State string "2 second" */,
    menuScan1_second                /**< @brief State string "1 second" */,
    menuScan_5_second               /**< @brief State string ".5 second" */,
    menuScan_2_second               /**< @brief State string ".2 second" */,
    menuScan_1_second               /**< @brief State string ".1 second" */
} menuScan;
/** @brief Number of states defined for menu menuScan */
#define menuScan_NUM_CHOICES 10
#endif


#endif /* INC_menuScan_H */
