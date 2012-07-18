/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern int GetFrameNumber ( ThotWindow win );
extern void FrameKilled ( int *w,
                          int frame,
                          int *info );
extern ThotBool KillFrameCallback ( int frame );
extern void FrameRedraw ( int frame,
                          unsigned int width,
                          unsigned int height );
extern ThotBool FrameExposeCallback ( int frame,
                                      int x,
                                      int y,
                                      int w,
                                      int h );
extern ThotBool FrameResizedCallback ( int frame,
                                       int new_width,
                                       int new_height );
extern void FrameHScrolledCallback ( int frame,
                                     int position,
                                     int page_size );
extern void FrameVScrolledCallback ( int frame,
                                     int position );
extern void TtcLineUp ( Document document,
                        View view );
extern void TtcLineDown ( Document document,
                          View view );
extern void TtcScrollLeft ( Document document,
                            View view );
extern void TtcScrollRight ( Document document,
                             View view );
extern void TtcPageUp ( Document document,
                        View view );
extern void TtcPageDown ( Document document,
                          View view );
extern void TtcPageTop ( Document document,
                         View view );
extern void TtcPageEnd ( Document document,
                         View view );
extern void InitializeOtherThings ( void );
extern void TtaRaiseView ( Document document,
                           View view );
extern void DisplaySelMessage ( char *text,
                                PtrDocument pDoc );
extern void TtaSetStatus ( Document document,
                           View view,
                           const char *text,
                           const char *name );
extern void TtaSetStatusSelectedElement ( Document document,
                                          View view,
                                          Element elem );
extern ThotBool FrameButtonDownCallback ( int frame,
                                          int thot_button_id,
                                          int thot_mod_mask,
                                          int x,
                                          int y );
extern ThotBool FrameButtonUpCallback ( int frame,
                                        int thot_button_id,
                                        int thot_mod_mask,
                                        int x,
                                        int y );
extern ThotBool FrameButtonDClickCallback ( int frame,
                                            int thot_button_id,
                                            int thot_mod_mask,
                                            int x,
                                            int y );
extern ThotBool FrameMotionCallback ( int frame,
                                      int thot_mod_mask,
                                      int x,
                                      int y );
extern ThotBool FrameMouseWheelCallback ( int frame,
                                          int thot_mod_mask,
                                          int direction,
                                          int delta,
                                          int x,
                                          int y );
extern ThotWindow TtaGetThotWindow ( int frame );
extern void SetCursorWatch ( int thotThotWindowid );
extern void ResetCursorWatch ( int thotThotWindowid );
extern void TtaSetCursorWatch ( Document document,
                                View view );
extern void TtaResetCursor ( Document document,
                             View view );
extern void GiveClickedAbsBox ( int *frame,
                                PtrAbstractBox *pAb );
extern void ChangeFrameTitle ( int frame,
                               unsigned char *text,
                               CHARSET encoding );
extern void ChangeSelFrame ( int frame );
extern void TtaSetFocusChange ( Proc1 procedure );
extern int GetWindowFrame ( ThotWindow w );
extern void GetSizesFrame ( int frame,
                            int *width,
                            int *height );
extern void DefineClipping ( int frame,
                             int orgx,
                             int orgy,
                             int *xd,
                             int *yd,
                             int *xf,
                             int *yf,
                             int raz );
extern void RemoveClipping ( int frame );
extern void UpdateScrollbars ( int frame );
extern const char * TtaGetAppVersion ( void );
extern const char * TtaGetAppName ( void );
extern const char * TtaGetAppDate ( void );
extern const char * TtaGetAppYear ( void );

#else /* __STDC__ */

extern int GetFrameNumber ( ThotWindow win );
extern void FrameKilled ( int *w,
                            int frame,
                            int *info );
extern ThotBool KillFrameCallback ( int frame );
extern void FrameRedraw ( int frame,
                            unsigned int width,
                            unsigned int height );
extern ThotBool FrameExposeCallback ( int frame,
                                        int x,
                                        int y,
                                        int w,
                                        int h );
extern ThotBool FrameResizedCallback ( int frame,
                                         int new_width,
                                         int new_height );
extern void FrameHScrolledCallback ( int frame,
                                       int position,
                                       int page_size );
extern void FrameVScrolledCallback ( int frame,
                                       int position );
extern void TtcLineUp ( Document document,
                          View view );
extern void TtcLineDown ( Document document,
                            View view );
extern void TtcScrollLeft ( Document document,
                              View view );
extern void TtcScrollRight ( Document document,
                               View view );
extern void TtcPageUp ( Document document,
                          View view );
extern void TtcPageDown ( Document document,
                            View view );
extern void TtcPageTop ( Document document,
                           View view );
extern void TtcPageEnd ( Document document,
                           View view );
extern void InitializeOtherThings ( void );
extern void TtaRaiseView ( Document document,
                             View view );
extern void DisplaySelMessage ( char *text,
                                  PtrDocument pDoc );
extern void TtaSetStatus ( Document document,
                             View view,
                             const char *text,
                             const char *name );
extern void TtaSetStatusSelectedElement ( Document document,
                                            View view,
                                            Element elem );
extern ThotBool FrameButtonDownCallback ( int frame,
                                            int thot_button_id,
                                            int thot_mod_mask,
                                            int x,
                                            int y );
extern ThotBool FrameButtonUpCallback ( int frame,
                                          int thot_button_id,
                                          int thot_mod_mask,
                                          int x,
                                          int y );
extern ThotBool FrameButtonDClickCallback ( int frame,
                                              int thot_button_id,
                                              int thot_mod_mask,
                                              int x,
                                              int y );
extern ThotBool FrameMotionCallback ( int frame,
                                        int thot_mod_mask,
                                        int x,
                                        int y );
extern ThotBool FrameMouseWheelCallback ( int frame,
                                            int thot_mod_mask,
                                            int direction,
                                            int delta,
                                            int x,
                                            int y );
extern ThotWindow TtaGetThotWindow ( int frame );
extern void SetCursorWatch ( int thotThotWindowid );
extern void ResetCursorWatch ( int thotThotWindowid );
extern void TtaSetCursorWatch ( Document document,
                                  View view );
extern void TtaResetCursor ( Document document,
                               View view );
extern void GiveClickedAbsBox ( int *frame,
                                  PtrAbstractBox *pAb );
extern void ChangeFrameTitle ( int frame,
                                 unsigned char *text,
                                 CHARSET encoding );
extern void ChangeSelFrame ( int frame );
extern void TtaSetFocusChange ( Proc1 procedure );
extern int GetWindowFrame ( ThotWindow w );
extern void GetSizesFrame ( int frame,
                              int *width,
                              int *height );
extern void DefineClipping ( int frame,
                               int orgx,
                               int orgy,
                               int *xd,
                               int *yd,
                               int *xf,
                               int *yf,
                               int raz );
extern void RemoveClipping ( int frame );
extern void UpdateScrollbars ( int frame );
extern const char * TtaGetAppVersion ( void );
extern const char * TtaGetAppName ( void );
extern const char * TtaGetAppDate ( void );
extern const char * TtaGetAppYear ( void );

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */
