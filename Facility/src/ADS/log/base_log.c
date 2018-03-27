/**
 * @addtogroup xxx
 * @{
 * @file  : base_log.c
 * @brief : 
 * @author: Mark Mao
 * @email : 3511mao@163.com
 * @date  : Mon 26 Mar 2018 02:30:59 PM CEST
 * */
 
//--------------------------------------------------
// Copyright (c) xxx
//--------------------------------------------------

#include <base_log.h>

eBaseLogRetError BaseLog_Init(void)
{
    DLT_REGISTER_APP("ADS", "V2X Library");

    DLT_REGISTER_CONTEXT(ADS_CONTEXT,  "ADS",  "ADS Library");

    DLT_ENABLE_LOCAL_PRINT();
}

eBaseLogRetError BaseLog_Exit(void)
{
    DLT_UNREGISTER_CONTEXT(ADS_CONTEXT);

    DLT_UNREGISTER_APP();
}
 
/**
 * @}
 * */
