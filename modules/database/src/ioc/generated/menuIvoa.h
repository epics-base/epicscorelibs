/** @file menuIvoa.h
 * @brief Declarations generated from menuIvoa.dbd
 */

#ifndef INC_menuIvoa_H
#define INC_menuIvoa_H

#ifndef menuIvoa_NUM_CHOICES
/** @brief Enumerated type from menu menuIvoa */
typedef enum {
    menuIvoaContinue_normally       /**< @brief State string "Continue normally" */,
    menuIvoaDon_t_drive_outputs     /**< @brief State string "Don't drive outputs" */,
    menuIvoaSet_output_to_IVOV      /**< @brief State string "Set output to IVOV" */
} menuIvoa;
/** @brief Number of states defined for menu menuIvoa */
#define menuIvoa_NUM_CHOICES 3
#endif


#endif /* INC_menuIvoa_H */
