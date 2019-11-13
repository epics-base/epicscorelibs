/* menuPini.h generated from menuPini.dbd */

#ifndef INC_menuPini_H
#define INC_menuPini_H

#ifndef menuPini_NUM_CHOICES
typedef enum {
    menuPiniNO                      /* NO */,
    menuPiniYES                     /* YES */,
    menuPiniRUN                     /* RUN */,
    menuPiniRUNNING                 /* RUNNING */,
    menuPiniPAUSE                   /* PAUSE */,
    menuPiniPAUSED                  /* PAUSED */
} menuPini;
#define menuPini_NUM_CHOICES 6
#endif


#endif /* INC_menuPini_H */
