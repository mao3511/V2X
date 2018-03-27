/**
 * @addtogroup xxx
 * @{
 * @file  : rsi_wrapper.h
 * @brief : 
 * @author: Mark Mao
 * @email : 3511mao@163.com
 * @date  : Mon 26 Mar 2018 07:26:00 AM CEST
 * */
 
//--------------------------------------------------
// Copyright (c) xxx
//--------------------------------------------------

#ifndef XXX_RSI_WRAPPER_H
#define XXX_RSI_WRAPPER_H

#include <RoadSideInformation.h>
#include <msg_common.h>

#ifdef __cplusplus
extern "C"
{
#endif

typedef RoadSideInformation_t tRoadSideInformation;

typedef MinuteOfTheYear_t tMinuteOfTheYear;

typedef IA5String_t tIA5String;    

typedef Priority_t tPriority;
    
eRSIMsgRetError RSI_Create(tRoadSideInformation **ppRSI);

eRSIMsgRetError RSI_Free(tRoadSideInformation *pRSI);

eRSIMsgRetError RSI_SetTimeStamp(tRoadSideInformation *pRSI, tMinuteOfTheYear minute_year);

eRSIMsgRetError RSI_SetIA5String(tRoadSideInformation *pRSI, tIA5String ia5_str);

eRSIMsgRetError RSI_SetPriority(tRoadSideInformation *pRSI, tPriority priority);

eRSIMsgRetError RSI_EncodeToNewBuffer(tRoadSideInformation *pRSI, void **buf, ssize_t *len);

eRSIMsgRetError RSI_EncodeToBuffer(tRoadSideInformation *pRSI, void *buf, ssize_t len);

eRSIMsgRetError RSI_Decode(tRoadSideInformation **ppRSI, const void *buf, size_t len);

#ifdef __cplusplus
}
#endif

#endif

/**
 * @}
 * */
