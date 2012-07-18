/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern AHTDocId_Status *GetDocIdStatus ( int docid,
                                         HTList * documents );
extern void HTTP_headers_set ( HTRequest *request,
                               HTResponse *response,
                               void *context,
                               int status );
extern char *HTTP_headers ( AHTHeaders *me,
                            AHTHeaderName param );
extern AHTReqContext *AHTReqContext_new ( int docid );
extern ThotBool AHTReqContext_delete ( AHTReqContext * me );
extern int AHTOpen_file ( HTRequest * request );
extern ThotBool SafePut_query ( char *url );
extern int AHTLoadTerminate_handler ( HTRequest *request,
                                      HTResponse *response,
                                      void *param,
                                      int status );
extern void libwww_CleanCache ( void );
extern void QueryInit ( void );
extern void QueryClose ( void );
extern void AHTRequest_setRefererHeader ( AHTReqContext *me );
extern void AHTRequest_setCustomAcceptHeader ( HTRequest *request,
                                               const char *value );
extern void InvokeGetObjectWWW_callback ( int docid,
                                          char *urlName,
                                          char *outputfile,
                                          TTcbf *terminate_cbf,
                                          void *context_tcbf,
                                          int status );
extern int GetObjectWWW ( int docid,
                          int refdoc,
                          char *urlName,
                          const char *formdata,
                          char *outputfile,
                          int mode,
                          TIcbf *incremental_cbf,
                          void *context_icbf,
                          TTcbf *terminate_cbf,
                          void *context_tcbf,
                          ThotBool error_html,
                          const char *content_type );
extern int PutObjectWWW ( int docid,
                          char *fileName,
                          char *urlName,
                          const char *contentType,
                          char *outputfile,
                          int mode,
                          TTcbf *terminate_cbf,
                          void *context_tcbf );
extern void StopRequest ( int docid );
extern void StopAllRequests ( int docid );
extern ThotBool AmayaIsAlive ( void );
extern ThotBool CanDoStop ( void );
extern void CanDoStop_set ( ThotBool value );
extern void libwww_updateNetworkConf ( int status );
extern void AHTFTPURL_flag_set ( ThotBool value );
extern ThotBool AHTFTPURL_flag ( void );
extern void FreeAmayaCache ( void );
extern void InitAmayaCache ( void );
extern void ClearCacheEntry ( char *url );

#else /* __STDC__ */

extern AHTDocId_Status *GetDocIdStatus ( int docid,
                                           HTList * documents );
extern void HTTP_headers_set ( HTRequest *request,
                                 HTResponse *response,
                                 void *context,
                                 int status );
extern char *HTTP_headers ( AHTHeaders *me,
                              AHTHeaderName param );
extern AHTReqContext *AHTReqContext_new ( int docid );
extern ThotBool AHTReqContext_delete ( AHTReqContext * me );
extern int AHTOpen_file ( HTRequest * request );
extern ThotBool SafePut_query ( char *url );
extern int AHTLoadTerminate_handler ( HTRequest *request,
                                        HTResponse *response,
                                        void *param,
                                        int status );
extern void libwww_CleanCache ( void );
extern void QueryInit ( void );
extern void QueryClose ( void );
extern void AHTRequest_setRefererHeader ( AHTReqContext *me );
extern void AHTRequest_setCustomAcceptHeader ( HTRequest *request,
                                                 const char *value );
extern void InvokeGetObjectWWW_callback ( int docid,
                                            char *urlName,
                                            char *outputfile,
                                            TTcbf *terminate_cbf,
                                            void *context_tcbf,
                                            int status );
extern int GetObjectWWW ( int docid,
                            int refdoc,
                            char *urlName,
                            const char *formdata,
                            char *outputfile,
                            int mode,
                            TIcbf *incremental_cbf,
                            void *context_icbf,
                            TTcbf *terminate_cbf,
                            void *context_tcbf,
                            ThotBool error_html,
                            const char *content_type );
extern int PutObjectWWW ( int docid,
                            char *fileName,
                            char *urlName,
                            const char *contentType,
                            char *outputfile,
                            int mode,
                            TTcbf *terminate_cbf,
                            void *context_tcbf );
extern void StopRequest ( int docid );
extern void StopAllRequests ( int docid );
extern ThotBool AmayaIsAlive ( void );
extern ThotBool CanDoStop ( void );
extern void CanDoStop_set ( ThotBool value );
extern void libwww_updateNetworkConf ( int status );
extern void AHTFTPURL_flag_set ( ThotBool value );
extern ThotBool AHTFTPURL_flag ( void );
extern void FreeAmayaCache ( void );
extern void InitAmayaCache ( void );
extern void ClearCacheEntry ( char *url );

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */
