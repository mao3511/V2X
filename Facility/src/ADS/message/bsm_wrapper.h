/**
 * @addtogroup xxx
 * @{
 * @file  : bsm_wrapper.h
 * @brief : 
 * @author: Mark Mao
 * @email : 3511mao@163.com
 * @date  : Mon 26 Mar 2018 07:24:47 AM CEST
 * */
 
//--------------------------------------------------
// Copyright (c) xxx
//--------------------------------------------------

#ifndef XXX_BSM_WRAPPER_H
#define XXX_BSM_WRAPPER_H

#include <BasicSafetyMessage.h>
#include <PathHistory.h>
#include <PathPrediction.h>

#include <msg_common.h>

#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

typedef BasicSafetyMessage_t tBasicSafetyMessage;

typedef PathHistory_t tPathHistory;

typedef PathPrediction_t tPathPrediction;

typedef SpeedConfidence_t tSpeedConfidence;

typedef HeadingConfidence_t tHeadingConfidence;

typedef SteeringWheelAngleConfidence_t tSteeringWheelAngleConfidence;

#define VehicleEvent_HazardLights 0x0001
#define VehicleEvent_StopLineViolation 0x0002
#define VehicleEvent_ABSactivated 0x0004
#define VehicleEvent_TractionControlLoss 0x0008
#define VehicleEvent_StabilityControlactivated 0x0010
#define VehicleEvent_HazardousMaterials 0x0020
#define VehicleEvent_HardBraking 0x0040
#define VehicleEvent_LightsChanged 0x0080
#define VehicleEvent_WipersChanged 0x0100
#define VehcileEvent_FlatTire 0x0200
#define VehicleEvent_DisabledVehicle 0x0400
#define VehicleEvent_AirBagDeployment 0x0800

#define ExteriorLights_LowBeamHeadlightsOn 0x0001
#define ExteriorLights_HighBeamHeadlightsOn 0x0002
#define ExteriorLights_LeftTurnSignalOn 0x0004
#define ExteriorLights_RightTurnSignalOn 0x0008
#define ExteriorLights_HazardSignalOn 0x0010
#define ExteriorLights_AutomaticLightControlOn 0x0020
#define ExteriorLights_DaytimeRunningLightsOn 0x0040
#define ExteriorLights_FogLightOn 0x0080
#define ExteriorLights_ParkingLightsOn 0x0100

/**
 * Create BSM Message.
 *
 * @param [in] ppBSM Address of BSM Pointer
 * @param [in] opt Create Operation
 * @return BSM Message Error Code
 */
eBSMMsgRetError BSM_Create(tBasicSafetyMessage **ppBSM, eMsgCreateOpt opt);

eBSMMsgRetError BSM_Free(tBasicSafetyMessage *pBSM, eMsgFreeOpt opt);


eBSMMsgRetError BSM_SetPlatNo(tBasicSafetyMessage *pBSM, const char *plat_no);

eBSMMsgRetError BSM_SetSteeringWheelAngle(tBasicSafetyMessage *pBSM, long angle);

eBSMMsgRetError BSM_SetMotionSpeedCfd(tBasicSafetyMessage *pBSM, tSpeedConfidence speed_cfd);

eBSMMsgRetError BSM_SetMotionHeadingCfd(tBasicSafetyMessage *pBSM, tHeadingConfidence heading_cfd );

eBSMMsgRetError BSM_SetMotionAngleCfd(tBasicSafetyMessage *pBSM, tSteeringWheelAngleConfidence angle_cfd);

eBSMMsgRetError BSM_SetSafetyExtEvent(tBasicSafetyMessage *pBSM, uint16_t vehicle_event);

eBSMMsgRetError BSM_SetSafetyExtLights(tBasicSafetyMessage *pBSM, uint16_t exterior_lights);

eBSMMsgRetError BSM_SetSafetyExtPH(tBasicSafetyMessage *pBSM, tPathHistory path_history);

eBSMMsgRetError BSM_SetSafetyExtPP(tBasicSafetyMessage *pBSM, tPathPrediction path_prediction);


eBSMMsgRetError BSM_EncodeToNewBuffer(tBasicSafetyMessage *pBSM, void **buf, ssize_t *len);

eBSMMsgRetError BSM_EncodeToBuffer(tBasicSafetyMessage *pBSM, void *buf, ssize_t len);

eBSMMsgRetError BSM_Decode(tBasicSafetyMessage **ppBSM, const void *buf, size_t len);

#ifdef __cplusplus
}
#endif

#endif

/**
 * @}
 * */
