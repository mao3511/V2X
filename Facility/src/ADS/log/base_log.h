/**
 * @addtogroup xxx
 * @{
 * @file  : base_log.h
 * @brief : 
 * @author: Mark Mao
 * @email : 3511mao@163.com
 * @date  : Mon 26 Mar 2018 02:30:56 PM CEST
 * */
 
//--------------------------------------------------
// Copyright (c) xxx
//--------------------------------------------------

#ifndef XXX_BASE_LOG_H
#define XXX_BASE_LOG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlt/dlt.h>

#ifdef __cplusplus
extern "C"
{
#endif

DLT_DECLARE_CONTEXT(ADS_CONTEXT);

typedef enum BaseLogLevel
{
    VERBOSE = 0,
    DEBUG,
    INFO,
    WARN,
    ERROR
}eBaseLogLevel;

typedef enum BaseLogRetError
{
    BASE_LOG_RET_OKAY = 0,
    BASE_LOG_RET_MAX_ENUM_VALUE
} eBaseLogRetError;

eBaseLogRetError BaseLog_Init(void);
eBaseLogRetError BaseLog_Exit(void);

#define LOG_VERBOSE(format, args...) \
    { \
        char log_str[2048]; \
        memset(log_str, 0x00, sizeof(log_str)); \
        sprintf(log_str, "%s : " format, __FUNCTION__, ##args); \
        DLT_LOG(ADS_CONTEXT, DLT_LOG_VERBOSE, DLT_STRING(log_str)); \
    }

#define LOG_DEBUG(format, args...) \
    { \
        char log_str[2048]; \
        memset(log_str, 0x00, sizeof(log_str)); \
        sprintf(log_str, "%s : " format, __FUNCTION__, ##args); \
        DLT_LOG(ADS_CONTEXT, DLT_LOG_DEBUG, DLT_STRING(log_str)); \
    }

#define LOG_INFO(format, args...) \
    { \
        char log_str[2048]; \
        memset(log_str, 0x00, sizeof(log_str)); \
        sprintf(log_str, "%s : " format, __FUNCTION__, ##args); \
        DLT_LOG(ADS_CONTEXT, DLT_LOG_INFO, DLT_STRING(log_str)); \
    }

#define LOG_WARN(format, args...) \
    { \
        char log_str[2048]; \
        memset(log_str, 0x00, sizeof(log_str)); \
        sprintf(log_str, "%s : " format, __FUNCTION__, ##args); \
        DLT_LOG(ADS_CONTEXT, DLT_LOG_WARN, DLT_STRING(log_str)); \
    }

#define LOG_ERROR(format, args...) \
    { \
        char log_str[2048]; \
        memset(log_str, 0x00, sizeof(log_str)); \
        sprintf(log_str, "%s : " format, __FUNCTION__, ##args); \
        DLT_LOG(ADS_CONTEXT, DLT_LOG_ERROR, DLT_STRING(log_str)); \
    }

#ifdef __cplusplus
}
#endif

#endif

/**
 * @}
 * */
