/* menuIvoa.h generated from menuIvoa.dbd */

#ifndef INC_menuIvoa_H
#define INC_menuIvoa_H

#ifndef menuIvoa_NUM_CHOICES
typedef enum {
    menuIvoaContinue_normally       /* Continue normally */,
    menuIvoaDon_t_drive_outputs     /* Don't drive outputs */,
    menuIvoaSet_output_to_IVOV      /* Set output to IVOV */
} menuIvoa;
#define menuIvoa_NUM_CHOICES 3
#endif


#endif /* INC_menuIvoa_H */
