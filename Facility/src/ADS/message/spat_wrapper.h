/**
 * @addtogroup xxx
 * @{
 * @file  : spat_wrapper.h
 * @brief : 
 * @author: Mark Mao
 * @email : 3511mao@163.com
 * @date  : Mon 26 Mar 2018 07:25:44 AM CEST
 * */
 
//--------------------------------------------------
// Copyright (c) xxx
//--------------------------------------------------

#ifndef XXX_SPAT_WRAPPER_H
#define XXX_SPAT_WRAPPER_H

#include <SPAT.h>
#include <msg_common.h>

#ifdef __cplusplus
extern "C"
{
#endif

typedef SPAT_t tSPAT;

typedef MinuteOfTheYear_t tMinuteOfTheYear;

typedef DescriptiveName_t tDescriptiveName;

eSPATMsgRetError SPAT_Create(tSPAT **ppSPAT);

eSPATMsgRetError SPAT_Free(tSPAT *pSPAT);

eSPATMsgRetError SPAT_SetTimeStamp(tSPAT *pSPAT, tMinuteOfTheYear minute_year);

eSPATMsgRetError SPAT_SetName(tSPAT *pSPAT, tDescriptiveName name);

eSPATMsgRetError SPAT_EncodeToNewBuffer(tSPAT *pSPAT, void **buf, ssize_t *len);

eSPATMsgRetError SPAT_EncodeToBuffer(tSPAT *pSPAT, void *buf, ssize_t *len);

eSPATMsgRetError SPAT_Decode(tSPAT **ppSPAT, const void *buf, size_t len);

#ifdef __cplusplus
}
#endif

#endif

 
/**
 * @}
 * */
