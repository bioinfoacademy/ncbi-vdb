#ifndef _h_vfs_services_
#define _h_vfs_services_


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


#include <kfg/kart.h>     /* EObjectType */
#include <vfs/resolver.h> /* VRemoteProtocols */


#ifdef __cplusplus
extern "C" {
#endif


struct Kart;
struct KNSManager;

typedef struct KService KService;
typedef struct KSrvError KSrvError;
typedef struct KSrvResponse KSrvResponse;


/******************************************************************************/
/* KService - EXTERNAL Service */

/* Make KService object */
rc_t KServiceMake ( KService ** self );

/* Release KService object */
rc_t KServiceRelease ( KService * self );

/* Add an Id ( Accession or Object-Id ) to service request */
rc_t KServiceAddId     ( KService * self, const char * id );

/* Add a dbGaP Project to service request */
rc_t KServiceAddProject ( KService * self, uint32_t id );


/************************** name service - version 3 **************************/
/* Execute Names Service Call using current default protocol version;
 * get KSrvResponse - it contains:
 *   - remote/local/cache location for every requested Id
 *   - or KSrvError
 */
rc_t KServiceNamesQuery ( KService * self, VRemoteProtocols protocols, 
                          const KSrvResponse ** response );

/************************** search service - version 1 ************************/
/* Execute Search Service Call; get Kart response */
rc_t KServiceSearchExecute ( KService * self,
                             const struct Kart ** response );


/************************** KSrvResponse **************************/
/* Release:
 * Release KSrvResponse object */
rc_t     KSrvResponseRelease ( const KSrvResponse * self );

/* Length:
 * Number of elements in KSrvResponse */
uint32_t KSrvResponseLength  ( const KSrvResponse * self );

/* GetPath:
 * Get KSrvResponse element number "idx" for "protocol":
 * - remote "path"/"vdbcache",
 * or "error"
 */
rc_t KSrvResponseGetPath ( const KSrvResponse * self, uint32_t idx,
    VRemoteProtocols p, const struct VPath ** path,
    const struct VPath ** vdbcache, const KSrvError ** error );

/* GetLocal:
 *  get local path
 */
rc_t KSrvResponseGetLocal ( const KSrvResponse * self, uint32_t idx,
                            const struct VPath ** local );

/* GetCache:
 *  get cache path
 */
rc_t KSrvResponseGetCache ( const KSrvResponse * self, uint32_t idx,
                            const struct VPath ** cache );

/************************** KSrvError ******************************
 * KSrvError is generated for Id-s from request that produced an error response
 */
rc_t KSrvErrorRelease ( const KSrvError * self );
rc_t KSrvErrorAddRef  ( const KSrvError * self );

/* Rc - rc code corresponding to this Error */
rc_t KSrvErrorRc      ( const KSrvError * self, rc_t     * rc   );

/* Code - Status-Code returned by server */
rc_t KSrvErrorCode    ( const KSrvError * self, uint32_t * code );

/*  returns pointers to internal String data
 *  Strings remain valid while "self" is valid
 */
/* Message - message returned by server */
rc_t KSrvErrorMessage ( const KSrvError * self, String * message );
/* Object - Object-Id/Object-Type that produced this Error */
rc_t KSrvErrorObject  ( const KSrvError * self,
                        String * id, EObjectType * type );
/******************************************************************************/


#ifdef __cplusplus
}
#endif


#endif /* _h_vfs_services_ */
