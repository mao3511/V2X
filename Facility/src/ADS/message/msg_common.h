/**
 * @addtogroup xxx
 * @{
 * @file  : msg_common.h
 * @brief : 
 * @author: Mark Mao
 * @email : 3511mao@163.com
 * @date  : Mon 26 Mar 2018 07:31:38 AM CEST
 * */
 
//--------------------------------------------------
// Copyright (c) xxx
//--------------------------------------------------

#ifndef XXX_MSG_COMMON_H
#define XXX_MSG_COMMON_H

#ifdef __cplusplus
extern "C"
{
#endif

typedef enum MsgCreateOpt
{
    MSG_CREATE_ALL = 0,
    MSG_CREATE_CONTEXT,
    MSG_CREATE_MAX_ENUM_VALUE
}eMsgCreateOpt;

typedef enum MsgFreeOpt
{
    MSG_FREE_ALL = 0,
    MSG_FREE_CONTEXT,
    MSG_FREE_MAX_ENUM_VALUE
}eMsgFreeOpt;

typedef enum BSMMsgRetError
{
    BSM_MSG_OKAY = 0,
    BSM_MSG_MAX_ENUM_VALUE
}eBSMMsgRetError;

typedef enum MapMsgRetError                                                                                                            
{                                                                                                                                      
    MAP_MSG_OKAY = 0,
    MAP_MSG_MAX_ENUM_VALUE                                                                                                             
}eMapMsgRetError;

#ifdef __cplusplus
}
#endif

#endif
 
/**
 * @}
 * */
