/**
 * @addtogroup xxx
 * @{
 * @file  : rsm_wrapper.h
 * @brief : 
 * @author: Mark Mao
 * @email : 3511mao@163.com
 * @date  : Mon 26 Mar 2018 07:25:56 AM CEST
 * */
 
//--------------------------------------------------
// Copyright (c) xxx
//--------------------------------------------------

#ifndef XXX_RSM_WRAPPER_H
#define XXX_RSM_WRAPPER_H

#include <RoadsideSafetyMessage.h>
#include <msg_common.h>

#ifdef __cplusplus
extern "C"
{
#endif

typedef RoadsideSafetyMessage_t tRoadsideSafetyMessage;

eRSMMsgRetError RSM_Create(tRoadsideSafetyMessage **ppRSM);

eRSMMsgRetError RSM_Free(tRoadsideSafetyMessage *pRSM);

eRSMMsgRetError RSM_EncodeToNewBuffer(tRoadsideSafetyMessage *pRSM, void **buf, ssize_t *len);

eRSMMsgRetError RSM_EncodeToBuffer(tRoadsideSafetyMessage *pRSM, void *buf, ssize_t *len);

eRSMMsgRetError RSM_Decode(tRoadsideSafetyMessage **ppRSM, const void *buf, size_t len);

#ifdef __cplusplus
}
#endif

#endif
 
/**
 * @}
 * */
