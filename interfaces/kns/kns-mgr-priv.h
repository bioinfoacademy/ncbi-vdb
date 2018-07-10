/*===========================================================================
*
*                            PUBLIC DOMAIN NOTICE
*               National Center for Biotechnology Information
*
*  This software/database is a "United States Government Work" under the
*  terms of the United States Copyright Act.  It was written as part of
*  the author's official duties as a United States Government employee and
*  thus cannot be copyrighted.  This software/database is freely available
*  to the public for use. The National Library of Medicine and the U.S.
*  Government have not placed any restriction on its use or reproduction.
*
*  Although all reasonable efforts have been taken to ensure the accuracy
*  and reliability of the software and data, the NLM and the U.S.
*  Government do not and cannot warrant the performance or results that
*  may be obtained by using this software or data. The NLM and the U.S.
*  Government disclaim all warranties, express or implied, including
*  warranties of performance, merchantability or fitness for any particular
*  purpose.
*
*  Please cite the author in any work or product based on this material.
*
* ===========================================================================
*
*/
#ifndef _h_kns_mgr_priv_
#define _h_kns_mgr_priv_

#ifndef _h_kns_extern_
#include <kns/extern.h>
#endif

#ifndef _h_klib_defs_
#include <klib/defs.h>
#endif

#ifndef _h_klib_text_
#include <klib/text.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

struct KStream;
struct KHttpFile;
struct KNSManager;
struct KFile;
struct KConfig;
struct KClientHttpRequest;

/************************** HTTP-retry-related stuff **************************/
struct HttpRetrySchedule;

struct HttpRetrySpecs
{
    struct HttpRetrySchedule** codes;
    uint8_t count;
};
typedef struct HttpRetrySpecs HttpRetrySpecs;

rc_t CC HttpRetrySpecsDestroy ( HttpRetrySpecs* self );

rc_t CC HttpRetrySpecsInit ( HttpRetrySpecs* self, struct KConfig* kfg);

bool HttpGetRetryCodes ( const HttpRetrySpecs* self, uint16_t code, uint8_t * max_retries, const uint16_t ** sleep_before_retry, bool * open_ended );

/* MakeConfig
 *  create a manager instance using a custom configuration, for testing
 */
KNS_EXTERN rc_t CC KNSManagerMakeConfig ( struct KNSManager **mgr, struct KConfig* kfg );

/** MakeReliableHttpFile, KNSManagerMakeReliableClientRequest:
 * Make HTTP file/request from a reliable URL:
 * we will try harder to recover upon any error
 * (make more retries)
 */
KNS_EXTERN rc_t CC KNSManagerMakeReliableHttpFile(
    struct KNSManager const *self, struct KFile const **file,
    struct KStream *conn, ver_t vers, const char *url, ...);
KNS_EXTERN rc_t CC KNSManagerMakeReliableClientRequest ( 
    struct KNSManager const *self, struct KClientHttpRequest **req, 
    ver_t version, struct KStream *conn, const char *url, ... );

typedef struct {
    const char *url;
    
    const struct KNSManager * kns; /* used to retrieve HttpRetrySpecs */
    uint32_t last_sleep;
    uint32_t total_wait_ms;
    uint32_t max_total_wait_ms;
    
    uint32_t last_status;
    
    uint8_t max_retries;    
    uint8_t retries_count;    
} KHttpRetrier;

rc_t KHttpRetrierInit ( KHttpRetrier * self, const char * url, const struct KNSManager * kns );
bool KHttpRetrierWait ( KHttpRetrier * self, uint32_t status );
rc_t KHttpRetrierDestroy ( KHttpRetrier * self );

/*----------------------------------------------------------------------------*/

//typedef struct HttpProxy HttpProxy;
struct KNSProxies * KNSManagerGetProxies ( const struct KNSManager * self,
                                           size_t * cnt );

/* N.B.: DO NOT WHACK THE RETURNED http_proxy String !!! */
bool KNSProxiesGet ( struct KNSProxies * self, const String ** http_proxy,
    uint16_t * http_proxy_port, size_t * cnt, bool * last );

/* allow to have multiple comma-separated proxies in a spec */
#define MULTIPLE_PROXIES 1

/*--------------------------------------------------------------------------
 * URLBlock
 *  RFC 3986
 */
typedef struct URLBlock URLBlock;
struct URLBlock
{
    String scheme;                     /* used in KClientHttpRequestFormatMsg */
    String host;                       /* used in KClientHttpRequestFormatMsg */
    String path; /* Path includes any parameter portion, ...KClientHttpReq... */
    String query;                      /* used in KClientHttpRequestFormatMsg */

    uint32_t port;      /* initialized in ParseUrl, used right after ParseUrl */

    bool tls; /* initialized in ParseUrl, used right after ParseUrl
               = true just when scheme == https ( _scheme_type == st_HTTPS ) */

/*  String fragment;                      not used anywhere */
/*  SchemeType scheme_type;               not used anywhere */
/*  bool port_dflt;                       not used anywhere */
};
extern void URLBlockInit ( URLBlock *self );
extern rc_t ParseUrl ( URLBlock * b, const char * url, size_t url_size );

#ifdef __cplusplus
}
#endif

#endif /* _h_kns_mgr_priv_ */
