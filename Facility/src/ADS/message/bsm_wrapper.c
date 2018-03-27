/**
 * @addtogroup xxx
 * @{
 * @file  : bsm_wrapper.c
 * @brief : 
 * @author: Mark Mao
 * @email : 3511mao@163.com
 * @date  : Mon 26 Mar 2018 07:26:15 AM CEST
 * */
 
//--------------------------------------------------
// Copyright (c) xxx
//--------------------------------------------------

#include <bsm_wrapper.h>

eBSMMsgRetError BSM_Create(tBasicSafetyMessage **ppBSM)
{
    LOG_INFO("Enter");

    eBSMMsgRetError ret_val = BSM_MSG_OKAY;
    
    if(IS_NULL(ppBSM))
    {
        LOG_WARN("Paramater is NULL");
        ret_val = BSM_MSG_ERROR_PARAM;
        goto out;
    }
    
    *ppBSM = ALLOC_OBJ(tBasicSafetyMessage, 1);
    if(IS_NULL(*ppBSM))
    {
        LOG_WARN("Alloc BSM Message Error");
        ret_val = BSM_MSG_ERROR_ALLOC;
        goto out;
    }

    memset(*ppBSM, 0x00, sizeof(tBasicSafetyMessage));
out:
    return ret_val;
}

eBSMMsgRetError BSM_Free(tBasicSafetyMessage *pBSM)
{
    LOG_INFO("Enter");  

    eBSMMsgRetError ret_val = BSM_MSG_OKAY;

    if(IS_NULL(pBSM))
    {
        LOG_WARN("Paramater is NULL");
        ret_val = BSM_MSG_ERROR_PARAM;
        goto out;
    }

    ASN_STRUCT_FREE(asn_DEF_BasicSafetyMessage, pBSM);

    free(pBSM);

    pBSM = NULL;
out:
    return ret_val;
}

eBSMMsgRetError BSM_SetMsgCnt(tBasicSafetyMessage *pBSM, long count)
{
    LOG_INFO("Enter");

    eBSMMsgRetError ret_val = BSM_MSG_OKAY;
    
    if(IS_NULL(pBSM))
    {
        LOG_WARN("Paramater is NULL");
        ret_val = BSM_MSG_ERROR_PARAM;
        goto out;
    }

    pBSM->msgCnt = count;
out:
    return ret_val;
}

eBSMMsgRetError BSM_SetMsgID(tBasicSafetyMessage *pBSM, uint8_t *ID, uint32_t len)
{
    LOG_INFO("Enter");

    eBSMMsgRetError ret_val = BSM_MSG_OKAY;

    if(IS_NULL(pBSM))                                                                                                                  
    {                                                                                                                                  
        LOG_WARN("Paramater is NULL");                                                                                                 
        ret_val = BSM_MSG_ERROR_PARAM;                                                                                                 
        goto out;                                                                                                                      
    }

    pBSM->id.size = len;
    pBSM->id.buf = (uint8_t *)malloc(len);
    memset(pBSM->id.buf, 0x00, len);
    memcpy(pBSM->id.buf, ID, len);
out:
    return ret_val;
}

eBSMMsgRetError BSM_SetSec(tBasicSafetyMessage *pBSM, long sec)
{
    LOG_INFO("Enter");                                                                                                                 

    eBSMMsgRetError ret_val = BSM_MSG_OKAY;                                                                                            

    if(IS_NULL(pBSM))                                                                                                                  
    {                                                                                                                                  
        LOG_WARN("Paramater is NULL");                                                                                                 
        ret_val = BSM_MSG_ERROR_PARAM;                                                                                                 
        goto out;                                                                                                                      
    }
    
    pBSM->secMark = sec;
out:
    return ret_val;
}

eBSMMsgRetError BSM_SetPosition(tBasicSafetyMessage *pBSM, double latitude, double longtitude, double elevation)
{
    LOG_INFO("Enter");

    eBSMMsgRetError ret_val = BSM_MSG_OKAY;

    if(IS_NULL(pBSM))
    {                
        LOG_WARN("Paramater is NULL");
        ret_val = BSM_MSG_ERROR_PARAM;
        goto out;                     
    }

    pBSM->pos.lat = latitude*10000000;
    pBSM->pos.Long = longtitude*10000000;

    if(-4096 != elevation)
    {
        pBSM->pos.elevation = (long *)malloc(sizeof(long));
        *(pBSM->pos.elevation) = elevation*10;
    }
out:
    return ret_val;
}

eBSMMsgRetError BSM_SetPositionCfd(tBasicSafetyMessage *pBSM, ePositionCfd pos_cfd, eElevationCfd elevation_cfd)
{
    LOG_INFO("Enter");

    eBSMMsgRetError ret_val = BSM_MSG_OKAY;

    if(IS_NULL(pBSM))
    {
        LOG_WARN("Paramater is NULL");
        ret_val = BSM_MSG_ERROR_PARAM;
        goto out;
    }

    pBSM->accuracy.pos = pos_cfd;
    if (HeadingCfd_unavailable != elevation_cfd)
    {
        pBSM->accuracy.elevation = (long *)malloc(sizeof(long));
        *(pBSM->accuracy.elevation) = elevation_cfd;
    }
out:
    return ret_val;
}

eBSMMsgRetError BSM_SetTransState(tBasicSafetyMessage *pBSM, eTransState state)
{
    LOG_INFO("Enter");

    eBSMMsgRetError ret_val = BSM_MSG_OKAY;

    if(IS_NULL(pBSM))                                                                                                                  
    {                                                                                                                                  
        LOG_WARN("Paramater is NULL");                                                                                                 
        ret_val = BSM_MSG_ERROR_PARAM;                                                                                                 
        goto out;                                                                                                                      
    }

    pBSM->transmission = state;
out:
    return ret_val;
}

eBSMMsgRetError BSiM_SetSpeed(tBasicSafetyMessage *pBSM, double speed)
{
    LOG_INFO("Enter");                                                                                                                 

    eBSMMsgRetError ret_val = BSM_MSG_OKAY;                                                                                            

    if(IS_NULL(pBSM))                                                                                                                  
    {                                                                                                                                  
        LOG_WARN("Paramater is NULL");                                                                                                 
        ret_val = BSM_MSG_ERROR_PARAM;                                                                                                 
        goto out;                                                                                                                      
    }

    pBSM->speed = (long)speed*50; 
out:
    return ret_val;
}

eBSMMsgRetError BSM_SetHeading(tBasicSafetyMessage *pBSM, double heading)
{
    LOG_INFO("Enter");                                                                                                                 

    eBSMMsgRetError ret_val = BSM_MSG_OKAY;                                                                                            

    if(IS_NULL(pBSM))                                                                                                                  
    {                                                                                                                                  
        LOG_WARN("Paramater is NULL");                                                                                                 
        ret_val = BSM_MSG_ERROR_PARAM;                                                                                                 
        goto out;                                                                                                                      
    }
    
    pBSM->heading = (long)heading*80;
out:
    return ret_val;
}

eBSMMsgRetError BSM_SetAcceleration(tBasicSafetyMessage *pBSM, double acc_long, double acc_lat, double acc_vert, double yaw)
{
    LOG_INFO("Enter");

    eBSMMsgRetError ret_val = BSM_MSG_OKAY;

    if(IS_NULL(pBSM))
    {
        LOG_WARN("Paramater is NULL");
        ret_val = BSM_MSG_ERROR_PARAM;
        goto out;                   
    }

    pBSM->accelSet.Long = (long)acc_long*100;
    pBSM->accelSet.lat = (long)acc_lat*100;
    pBSM->accelSet.vert = (long)acc_vert*50;
    pBSM->accelSet.yaw = (long)yaw*100;
out:
    return ret_val;
}

eBSMMsgRetError BSM_SetBrakeStatus(tBasicSafetyMessage *pBSM, eBrakePedalState brake_pedal, uint8_t brake_app, eTractionControlState control, eAntiLockBrakeState lock_brake, eStabilityControlState stability_control, eBrakeBoostApply boost_apply, eAuxiliaryBrakeState aux)
{
    LOG_INFO("Enter");

    eBSMMsgRetError ret_val = BSM_MSG_OKAY;

    if(IS_NULL(pBSM))
    {
        LOG_WARN("Paramater is NULL");
        ret_val = BSM_MSG_ERROR_PARAM;
        goto out;                   
    }

out:
    return ret_val;
}



/**
 * @}
 * */
