/** @file menuConvert.h
 * @brief Declarations generated from menuConvert.dbd
 */

#ifndef INC_menuConvert_H
#define INC_menuConvert_H

#ifndef menuConvert_NUM_CHOICES
/** @brief Enumerated type from menu menuConvert */
typedef enum {
    menuConvertNO_CONVERSION        /**< @brief State string "NO CONVERSION" */,
    menuConvertSLOPE                /**< @brief State string "SLOPE" */,
    menuConvertLINEAR               /**< @brief State string "LINEAR" */,
    menuConverttypeKdegF            /**< @brief State string "typeKdegF" */,
    menuConverttypeKdegC            /**< @brief State string "typeKdegC" */,
    menuConverttypeJdegF            /**< @brief State string "typeJdegF" */,
    menuConverttypeJdegC            /**< @brief State string "typeJdegC" */,
    menuConverttypeEdegF            /**< @brief State string "typeEdegF(ixe only)" */,
    menuConverttypeEdegC            /**< @brief State string "typeEdegC(ixe only)" */,
    menuConverttypeTdegF            /**< @brief State string "typeTdegF" */,
    menuConverttypeTdegC            /**< @brief State string "typeTdegC" */,
    menuConverttypeRdegF            /**< @brief State string "typeRdegF" */,
    menuConverttypeRdegC            /**< @brief State string "typeRdegC" */,
    menuConverttypeSdegF            /**< @brief State string "typeSdegF" */,
    menuConverttypeSdegC            /**< @brief State string "typeSdegC" */
} menuConvert;
/** @brief Number of states defined for menu menuConvert */
#define menuConvert_NUM_CHOICES 15
#endif


#endif /* INC_menuConvert_H */
