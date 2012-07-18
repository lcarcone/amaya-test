/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern void InitAmayaDefEnv ( void );
extern int CleanDirSep ( char *name );
extern int CleanFirstLastSpace ( char *name );
extern void GetGeneralConf ( void );
extern void ValidateGeneralConf ( void );
extern void SetGeneralConf ( void );
extern void GetDefaultGeneralConf ( void );
extern void GeneralConfMenu ( Document document,
                              View view );
extern void GetEmailsConf ( void );
extern void SetEmailsConf ( void );
extern void GetDefaultEmailsConf ( void );
extern void GetBrowseConf ( void );
extern void SetBrowseConf ( void );
extern void ApplyConfigurationChanges ( void );
extern void GetDefaultBrowseConf ( void );
extern void BrowseConfMenu ( Document document,
                             View view );
extern void SetGeometryConf ( int document,
                              const char * view_name );
extern void AnnotConfMenu ( Document document,
                            View view );
extern void GetPasswordsConf ( void );
extern void SetPasswordsConf ( void );
extern void GetDefaultPasswordsConf ( void );
extern void* AllocRDFaNsListElement ( const char* path,
                                      void* prevElement );
extern void FreeRDFaNSList ( void* list );
extern void SetRDFaNsList ( const void* list );
extern void LoadRDFaNSList ( Prop_RDFa_Path** list );
extern void GetRDFaConf ( void );
extern void GetDefaultRDFaConf ( void );
extern int GetPrefGeneralBase ( void );
extern int GetPrefBrowseBase ( void );
extern int GetPrefCacheBase ( void );
extern int GetPrefProxyBase ( void );
extern int GetPrefPublishBase ( void );
extern int GetPrefColorBase ( void );
extern int GetPrefGeometryBase ( void );
extern int GetPrefAnnotBase ( void );
extern int GetPrefDAVBase ( void );
extern int GetPrefEmailsBase ( void );
extern int GetPrefPasswordsBase ( void );
extern int GetPrefRDFaBase ( void );
extern void SetProp_General ( const Prop_General * prop );
extern Prop_General GetProp_General ( void );
extern void SetProp_Browse ( const Prop_Browse * prop );
extern Prop_Browse GetProp_Browse ( void );
extern void SetProp_Publish ( const Prop_Publish * prop );
extern Prop_Publish GetProp_Publish ( void );
extern void SetProp_Cache ( const Prop_Cache * prop );
extern Prop_Cache GetProp_Cache ( void );
extern void SetProp_Proxy ( const Prop_Proxy * prop );
extern Prop_Proxy GetProp_Proxy ( void );
extern void SetProp_Color ( const Prop_Color * prop );
extern Prop_Color GetProp_Color ( void );
extern void SetProp_Geometry ( ThotBool prop );
extern ThotBool GetProp_Geometry ( void );
extern void SetProp_Annot ( const Prop_Annot * prop );
extern Prop_Annot GetProp_Annot ( void );
extern void SetProp_DAV ( const Prop_DAV * prop );
extern Prop_DAV GetProp_DAV ( void );
extern void SetProp_Emails ( const Prop_Emails * prop );
extern Prop_Emails GetProp_Emails ( void );
extern void SetProp_Passwords ( const Prop_Passwords * prop );
extern Prop_Passwords GetProp_Passwords ( void );
extern void SetProp_RDFa ( const Prop_RDFa * prop );
extern void SetProp_RDFaDef ( const Prop_RDFa * prop );
extern Prop_RDFa GetProp_RDFa ( void );
extern Prop_RDFa GetProp_RDFaDef ( void );
extern void PreferenceMenu ( Document document,
                             View view );
extern void InitConfMenu ( void );

#else /* __STDC__ */

extern void InitAmayaDefEnv ( void );
extern int CleanDirSep ( char *name );
extern int CleanFirstLastSpace ( char *name );
extern void GetGeneralConf ( void );
extern void ValidateGeneralConf ( void );
extern void SetGeneralConf ( void );
extern void GetDefaultGeneralConf ( void );
extern void GeneralConfMenu ( Document document,
                                View view );
extern void GetEmailsConf ( void );
extern void SetEmailsConf ( void );
extern void GetDefaultEmailsConf ( void );
extern void GetBrowseConf ( void );
extern void SetBrowseConf ( void );
extern void ApplyConfigurationChanges ( void );
extern void GetDefaultBrowseConf ( void );
extern void BrowseConfMenu ( Document document,
                               View view );
extern void SetGeometryConf ( int document,
                                const char * view_name );
extern void AnnotConfMenu ( Document document,
                              View view );
extern void GetPasswordsConf ( void );
extern void SetPasswordsConf ( void );
extern void GetDefaultPasswordsConf ( void );
extern void* AllocRDFaNsListElement ( const char* path,
                                        void* prevElement );
extern void FreeRDFaNSList ( void* list );
extern void SetRDFaNsList ( const void* list );
extern void LoadRDFaNSList ( Prop_RDFa_Path** list );
extern void GetRDFaConf ( void );
extern void GetDefaultRDFaConf ( void );
extern int GetPrefGeneralBase ( void );
extern int GetPrefBrowseBase ( void );
extern int GetPrefCacheBase ( void );
extern int GetPrefProxyBase ( void );
extern int GetPrefPublishBase ( void );
extern int GetPrefColorBase ( void );
extern int GetPrefGeometryBase ( void );
extern int GetPrefAnnotBase ( void );
extern int GetPrefDAVBase ( void );
extern int GetPrefEmailsBase ( void );
extern int GetPrefPasswordsBase ( void );
extern int GetPrefRDFaBase ( void );
extern void SetProp_General ( const Prop_General * prop );
extern Prop_General GetProp_General ( void );
extern void SetProp_Browse ( const Prop_Browse * prop );
extern Prop_Browse GetProp_Browse ( void );
extern void SetProp_Publish ( const Prop_Publish * prop );
extern Prop_Publish GetProp_Publish ( void );
extern void SetProp_Cache ( const Prop_Cache * prop );
extern Prop_Cache GetProp_Cache ( void );
extern void SetProp_Proxy ( const Prop_Proxy * prop );
extern Prop_Proxy GetProp_Proxy ( void );
extern void SetProp_Color ( const Prop_Color * prop );
extern Prop_Color GetProp_Color ( void );
extern void SetProp_Geometry ( ThotBool prop );
extern ThotBool GetProp_Geometry ( void );
extern void SetProp_Annot ( const Prop_Annot * prop );
extern Prop_Annot GetProp_Annot ( void );
extern void SetProp_DAV ( const Prop_DAV * prop );
extern Prop_DAV GetProp_DAV ( void );
extern void SetProp_Emails ( const Prop_Emails * prop );
extern Prop_Emails GetProp_Emails ( void );
extern void SetProp_Passwords ( const Prop_Passwords * prop );
extern Prop_Passwords GetProp_Passwords ( void );
extern void SetProp_RDFa ( const Prop_RDFa * prop );
extern void SetProp_RDFaDef ( const Prop_RDFa * prop );
extern Prop_RDFa GetProp_RDFa ( void );
extern Prop_RDFa GetProp_RDFaDef ( void );
extern void PreferenceMenu ( Document document,
                               View view );
extern void InitConfMenu ( void );

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */
