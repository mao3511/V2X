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

#include <string.h>

#ifdef __cplusplus
extern "C"
{
#endif

#define BIT_ON 1

#define BOT_OFF 0    

#define IS_NULL(arg) \
    ((arg) == NULL)

#define ALLOC_OBJ(type, size) \
    (type *)calloc(1, (sizeof(type)*size))

#define FREE_OBJ(pointer) \
    free(pointer)

typedef enum BSMMsgRetError
{
    BSM_MSG_OKAY = 0,
    BSM_MSG_ERROR_PARAM,
    BSM_MSG_ERROR_ALLOC,
    BSM_MSG_MAX_ENUM_VALUE
}eBSMMsgRetError;

typedef enum MapMsgRetError                                                                                                            
{                                                                                                                                      
    MAP_MSG_OKAY = 0,
    MAP_MSG_MAX_ENUM_VALUE                                                                                                             
}eMapMsgRetError;

typedef enum RSIMsgRetError
{
    RSI_MSG_OKAY = 0,
    RSI_MSG_MAX_ENUM_VALUE
}eRSIMsgRetError;

typedef enum RSMMsgRetError
{
    RSM_MSG_OKAY = 0,
    RSM_MSG_MAX_ENUM_VALUE
}eRSMMsgRetError;

typedef enum SPATMsgRetError
{
    SPAT_MSG_OKAY = 0,
    SPAT_MSG_MAX_ENUM_VALUE
}eSPATMsgRetError;

#ifdef __cplusplus
}
#endif

#endif
 
/**
 * @}
 * */
