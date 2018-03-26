/**
 * @addtogroup xxx
 * @{
 * @file  : map_wrapper.h
 * @brief : 
 * @author: Mark Mao
 * @email : 3511mao@163.com
 * @date  : Mon 26 Mar 2018 07:25:39 AM CEST
 * */
 
//--------------------------------------------------
// Copyright (c) xxx
//--------------------------------------------------

#ifndef XXX_MAP_WRAPPER_H
#define XXX_MAP_WRAPPER_H

#include <MapData.h>
#include <msg_common.h>

#ifdef __cplusplus
extern "C"
{
#endif

typedef MapData_t tMapData;

typedef MinuteOfTheYear_t tMinuteOfTheYear;    

eMapMsgRetError Map_Create(tMapData **ppMap, eMsgCreateOpt opt);

eMapMsgRetError Map_Free(tMapData *pMap, eMsgFreeOpt opt);

eMapMsgRetError Map_SetTimeStamp(tMapData *pMap, tMinuteOfTheYear minute_year);

eMapMsgRetError Map_EncodeToNewBuffer(tMapData *pMap, void **buf, ssize_t *len);

eMapMsgRetError Map_EncodeToBuffer(tMapData *pMap, void *buf, ssize_t len);

eMapMsgRetError Map_Decode(tMapData **ppMap, const void *buf, size_t len);

#ifdef __cplusplus
}
#endif

#endif
 
/**
 * @}
 * */
