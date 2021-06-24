/** @file menuPini.h
 * @brief Declarations generated from menuPini.dbd
 */

#ifndef INC_menuPini_H
#define INC_menuPini_H

#ifndef menuPini_NUM_CHOICES
/** @brief Enumerated type from menu menuPini */
typedef enum {
    menuPiniNO                      /**< @brief State string "NO" */,
    menuPiniYES                     /**< @brief State string "YES" */,
    menuPiniRUN                     /**< @brief State string "RUN" */,
    menuPiniRUNNING                 /**< @brief State string "RUNNING" */,
    menuPiniPAUSE                   /**< @brief State string "PAUSE" */,
    menuPiniPAUSED                  /**< @brief State string "PAUSED" */
} menuPini;
/** @brief Number of states defined for menu menuPini */
#define menuPini_NUM_CHOICES 6
#endif


#endif /* INC_menuPini_H */
