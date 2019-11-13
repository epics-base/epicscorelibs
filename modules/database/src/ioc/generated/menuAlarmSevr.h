/* menuAlarmSevr.h generated from menuAlarmSevr.dbd */

#ifndef INC_menuAlarmSevr_H
#define INC_menuAlarmSevr_H

#ifndef menuAlarmSevr_NUM_CHOICES
typedef enum {
    menuAlarmSevrNO_ALARM           /* NO_ALARM */,
    menuAlarmSevrMINOR              /* MINOR */,
    menuAlarmSevrMAJOR              /* MAJOR */,
    menuAlarmSevrINVALID            /* INVALID */
} menuAlarmSevr;
#define menuAlarmSevr_NUM_CHOICES 4
#endif


#endif /* INC_menuAlarmSevr_H */
