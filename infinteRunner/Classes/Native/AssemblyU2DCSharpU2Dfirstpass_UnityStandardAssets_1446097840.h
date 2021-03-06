﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets._2D.Camera2DFollow
struct  Camera2DFollow_t1446097840  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform UnityStandardAssets._2D.Camera2DFollow::target
	Transform_t284553113 * ___target_2;
	// System.Single UnityStandardAssets._2D.Camera2DFollow::damping
	float ___damping_3;
	// System.Single UnityStandardAssets._2D.Camera2DFollow::lookAheadFactor
	float ___lookAheadFactor_4;
	// System.Single UnityStandardAssets._2D.Camera2DFollow::lookAheadReturnSpeed
	float ___lookAheadReturnSpeed_5;
	// System.Single UnityStandardAssets._2D.Camera2DFollow::lookAheadMoveThreshold
	float ___lookAheadMoveThreshold_6;
	// System.Single UnityStandardAssets._2D.Camera2DFollow::m_OffsetZ
	float ___m_OffsetZ_7;
	// UnityEngine.Vector3 UnityStandardAssets._2D.Camera2DFollow::m_LastTargetPosition
	Vector3_t3525329789  ___m_LastTargetPosition_8;
	// UnityEngine.Vector3 UnityStandardAssets._2D.Camera2DFollow::m_CurrentVelocity
	Vector3_t3525329789  ___m_CurrentVelocity_9;
	// UnityEngine.Vector3 UnityStandardAssets._2D.Camera2DFollow::m_LookAheadPos
	Vector3_t3525329789  ___m_LookAheadPos_10;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(Camera2DFollow_t1446097840, ___target_2)); }
	inline Transform_t284553113 * get_target_2() const { return ___target_2; }
	inline Transform_t284553113 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t284553113 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_damping_3() { return static_cast<int32_t>(offsetof(Camera2DFollow_t1446097840, ___damping_3)); }
	inline float get_damping_3() const { return ___damping_3; }
	inline float* get_address_of_damping_3() { return &___damping_3; }
	inline void set_damping_3(float value)
	{
		___damping_3 = value;
	}

	inline static int32_t get_offset_of_lookAheadFactor_4() { return static_cast<int32_t>(offsetof(Camera2DFollow_t1446097840, ___lookAheadFactor_4)); }
	inline float get_lookAheadFactor_4() const { return ___lookAheadFactor_4; }
	inline float* get_address_of_lookAheadFactor_4() { return &___lookAheadFactor_4; }
	inline void set_lookAheadFactor_4(float value)
	{
		___lookAheadFactor_4 = value;
	}

	inline static int32_t get_offset_of_lookAheadReturnSpeed_5() { return static_cast<int32_t>(offsetof(Camera2DFollow_t1446097840, ___lookAheadReturnSpeed_5)); }
	inline float get_lookAheadReturnSpeed_5() const { return ___lookAheadReturnSpeed_5; }
	inline float* get_address_of_lookAheadReturnSpeed_5() { return &___lookAheadReturnSpeed_5; }
	inline void set_lookAheadReturnSpeed_5(float value)
	{
		___lookAheadReturnSpeed_5 = value;
	}

	inline static int32_t get_offset_of_lookAheadMoveThreshold_6() { return static_cast<int32_t>(offsetof(Camera2DFollow_t1446097840, ___lookAheadMoveThreshold_6)); }
	inline float get_lookAheadMoveThreshold_6() const { return ___lookAheadMoveThreshold_6; }
	inline float* get_address_of_lookAheadMoveThreshold_6() { return &___lookAheadMoveThreshold_6; }
	inline void set_lookAheadMoveThreshold_6(float value)
	{
		___lookAheadMoveThreshold_6 = value;
	}

	inline static int32_t get_offset_of_m_OffsetZ_7() { return static_cast<int32_t>(offsetof(Camera2DFollow_t1446097840, ___m_OffsetZ_7)); }
	inline float get_m_OffsetZ_7() const { return ___m_OffsetZ_7; }
	inline float* get_address_of_m_OffsetZ_7() { return &___m_OffsetZ_7; }
	inline void set_m_OffsetZ_7(float value)
	{
		___m_OffsetZ_7 = value;
	}

	inline static int32_t get_offset_of_m_LastTargetPosition_8() { return static_cast<int32_t>(offsetof(Camera2DFollow_t1446097840, ___m_LastTargetPosition_8)); }
	inline Vector3_t3525329789  get_m_LastTargetPosition_8() const { return ___m_LastTargetPosition_8; }
	inline Vector3_t3525329789 * get_address_of_m_LastTargetPosition_8() { return &___m_LastTargetPosition_8; }
	inline void set_m_LastTargetPosition_8(Vector3_t3525329789  value)
	{
		___m_LastTargetPosition_8 = value;
	}

	inline static int32_t get_offset_of_m_CurrentVelocity_9() { return static_cast<int32_t>(offsetof(Camera2DFollow_t1446097840, ___m_CurrentVelocity_9)); }
	inline Vector3_t3525329789  get_m_CurrentVelocity_9() const { return ___m_CurrentVelocity_9; }
	inline Vector3_t3525329789 * get_address_of_m_CurrentVelocity_9() { return &___m_CurrentVelocity_9; }
	inline void set_m_CurrentVelocity_9(Vector3_t3525329789  value)
	{
		___m_CurrentVelocity_9 = value;
	}

	inline static int32_t get_offset_of_m_LookAheadPos_10() { return static_cast<int32_t>(offsetof(Camera2DFollow_t1446097840, ___m_LookAheadPos_10)); }
	inline Vector3_t3525329789  get_m_LookAheadPos_10() const { return ___m_LookAheadPos_10; }
	inline Vector3_t3525329789 * get_address_of_m_LookAheadPos_10() { return &___m_LookAheadPos_10; }
	inline void set_m_LookAheadPos_10(Vector3_t3525329789  value)
	{
		___m_LookAheadPos_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
