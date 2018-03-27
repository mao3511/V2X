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

#include <base_log.h>

#include <BasicSafetyMessage.h>
#include <PathHistory.h>
#include <PathPrediction.h>

#include <base_log.h>

#include <msg_common.h>

#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

typedef BasicSafetyMessage_t tBasicSafetyMessage;

/**
 * TODO : Redefine 
 */
typedef PathHistory_t tPathHistory;

/**
 * TODO : Redefine
 */
typedef PathPrediction_t tPathPrediction;

typedef enum SpeedCfd {
    SpeedCfd_unavailable = 0,
    SpeedCfd_prec100ms   = 1,
    SpeedCfd_prec10ms    = 2,
    SpeedCfd_prec5ms = 3,
    SpeedCfd_prec1ms = 4,
    SpeedCfd_prec0_1ms   = 5,
    SpeedCfd_prec0_05ms  = 6,
    SpeedCfd_prec0_01ms  = 7
} eSpeedCfd;

typedef enum HeadingCfd {
    HeadingCfd_unavailable   = 0,
    HeadingCfd_prec10deg = 1,
    HeadingCfd_prec05deg = 2,
    HeadingCfd_prec01deg = 3,
    HeadingCfd_prec0_1deg    = 4,
    HeadingCfd_prec0_05deg   = 5,
    HeadingCfd_prec0_01deg   = 6,
    HeadingCfd_prec0_0125deg = 7
} eHeadingCfd;

typedef enum SteeringWheelAngleCfd {
    SteeringWheelAngleCfd_unavailable    = 0,
    SteeringWheelAngleCfd_prec2deg   = 1,
    SteeringWheelAngleCfd_prec1deg   = 2,
    SteeringWheelAngleCfd_prec0_02deg    = 3
} eSteeringWheelAngleCfd;

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

typedef enum PositionCfd {                                                                                                      
    PositionCfd_unavailable  = 0,                                                                                               
    PositionCfd_a500m    = 1,                                                                                                   
    PositionCfd_a200m    = 2,                                                                                                   
    PositionCfd_a100m    = 3,                                                                                                   
    PositionCfd_a50m = 4,                                                                                                       
    PositionCfd_a20m = 5,                                                                                                       
    PositionCfd_a10m = 6,                                                                                                       
    PositionCfd_a5m  = 7,                                                                                                       
    PositionCfd_a2m  = 8,                                                                                                       
    PositionCfd_a1m  = 9,                                                                                                       
    PositionCfd_a50cm    = 10,                                                                                                  
    PositionCfd_a20cm    = 11,                                                                                                  
    PositionCfd_a10cm    = 12,                                                                                                  
    PositionCfd_a5cm = 13,                                                                                                      
    PositionCfd_a2cm = 14,                                                                                                      
    PositionCfd_a1cm = 15                                                                                                       
}ePositionCfd;

typedef enum ElevationCfd {                                                                                                     
    ElevationCfd_unavailable = 0,                                                                                               
    ElevationCfd_elev_500_00 = 1,                                                                                               
    ElevationCfd_elev_200_00 = 2,                                                                                               
    ElevationCfd_elev_100_00 = 3,
    ElevationCfd_elev_050_00 = 4,
    ElevationCfd_elev_020_00 = 5,
    ElevationCfd_elev_010_00 = 6,
    ElevationCfd_elev_005_00 = 7,
    ElevationCfd_elev_002_00 = 8,
    ElevationCfd_elev_001_00 = 9,
    ElevationCfd_elev_000_50 = 10,
    ElevationCfd_elev_000_20 = 11,
    ElevationCfd_elev_000_10 = 12,
    ElevationCfd_elev_000_05 = 13,
    ElevationCfd_elev_000_02 = 14,                                                                                              
    ElevationCfd_elev_000_01 = 15
} eElevationCfd;

typedef enum TransState {
    TransState_neutral   = 0,
    TransState_park  = 1,
    TransState_forwardGears  = 2,
    TransState_reverseGears  = 3,
    TransState_reserved1 = 4,
    TransState_reserved2 = 5,
    TransState_reserved3 = 6,
    TransState_unavailable   = 7
} eTransState;

typedef enum BrakePedalState {
    BrakePedalState_unavailable    = 0,
    BrakePedalState_off    = 1,
    BrakePedalState_on = 2
} eBrakePedalState;


#define BrakeAppliedStatus_Unavailable 0x01
#define BrakeAppliedStatus_LeftFront 0x02
#define BrakeAppliedStatus_LeftRear 0x04
#define BrakeAppliedStatus_RightFront 0x08
#define BrakeAppliedStatus_RightRear 0x10

typedef enum TractionControlState {
    TractionControlState_unavailable   = 0,
    TractionControlState_off   = 1,
    TractionControlState_on    = 2,
    TractionControlState_engaged   = 3
} eTractionControlState;

typedef enum AntiLockBrakeState {
    AntiLockBrakeState_unavailable = 0,
    AntiLockBrakeState_off = 1,
    AntiLockBrakeState_on  = 2,
    AntiLockBrakeState_engaged = 3
} eAntiLockBrakeState;

typedef enum StabilityControlState {
    StabilityControlState_unavailable  = 0,
    StabilityControlState_off  = 1,
    StabilityControlState_on   = 2,
    StabilityControlState_engaged  = 3
} eStabilityControlState;

typedef enum BrakeBoostApply {
    BrakeBoostApply_unavailable   = 0,
    BrakeBoostApply_off   = 1,
    BrakeBoostApply_on    = 2
} eBrakeBoostApply;

typedef enum AuxiliaryBrakeState {
    AuxiliaryBrakeState_unavailable    = 0,
    AuxiliaryBrakeState_off    = 1,
    AuxiliaryBrakeState_on = 2,
    AuxiliaryBrakeState_reserved   = 3
} eAuxiliaryBrakeState;

/**
 * Create BSM Message.
 *
 * @param [in] ppBSM Address of BSM Pointer
 * @param [in] opt Create Operation
 * @return BSM Message Error Code
 */
eBSMMsgRetError BSM_Create(tBasicSafetyMessage **ppBSM);

eBSMMsgRetError BSM_Free(tBasicSafetyMessage *pBSM);


eBSMMsgRetError BSM_SetMsgCnt(tBasicSafetyMessage *pBSM, long count);

eBSMMsgRetError BSM_SetMsgID(tBasicSafetyMessage *pBSM, uint8_t *ID, uint32_t len);

eBSMMsgRetError BSM_SetSec(tBasicSafetyMessage *pBSM, long sec);

/**
 * Set BSM Position
 *
 * @param [in] BSM Message Pointer
 * @param [in] latitude
 * @param [in] longtitude
 * @param [in] elevation -4096 indicate invalid value
 * @return BSM Message Error Code
 */
eBSMMsgRetError BSM_SetPosition(tBasicSafetyMessage *pBSM, double latitude, double longtitude, double elevation);

/**
 * Set BSM Cfd
 *
 * @param [in] BSM Message Pointer
 * @param [in] pos_cfd
 * @param [in] elevation_cfd
 * @return BSM Message Error Code
 */
eBSMMsgRetError BSM_SetPositionCfd(tBasicSafetyMessage *pBSM, ePositionCfd pos_cfd, eElevationCfd elevation_cfd);

eBSMMsgRetError BSM_SetTransState(tBasicSafetyMessage *pBSM, eTransState state);

eBSMMsgRetError BSM_SetSpeed(tBasicSafetyMessage *pBSM, double speed);

eBSMMsgRetError BSM_SetHeading(tBasicSafetyMessage *pBSM, double heading);

eBSMMsgRetError BSM_SetAcceleration(tBasicSafetyMessage *pBSM, double acc_long, double acc_lat, double acc_vert, double yaw);

eBSMMsgRetError BSM_SetBrakeStatus(tBasicSafetyMessage *pBSM, eBrakePedalState brake_pedal, uint8_t brake_app, eTractionControlState control, eAntiLockBrakeState lock_brake, eStabilityControlState stability_control, eBrakeBoostApply boost_apply, eAuxiliaryBrakeState aux);

eBSMMsgRetError BSM_SetVehicleSize(tBasicSafetyMessage *pBSM, long width, long length, long height);

eBSMMsgRetError BSM_SetVehicleClass(tBasicSafetyMessage *pBSM, long vehicle_class);



eBSMMsgRetError BSM_SetPlatNo(tBasicSafetyMessage *pBSM, const char *plat_no);

eBSMMsgRetError BSM_SetSteeringWheelAngle(tBasicSafetyMessage *pBSM, long angle);

eBSMMsgRetError BSM_SetMotionSpeedCfd(tBasicSafetyMessage *pBSM, eSpeedCfd speed_cfd);

eBSMMsgRetError BSM_SetMotionHeadingCfd(tBasicSafetyMessage *pBSM, eHeadingCfd heading_cfd );

eBSMMsgRetError BSM_SetMotionAngleCfd(tBasicSafetyMessage *pBSM, eSteeringWheelAngleCfd angle_cfd);

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
