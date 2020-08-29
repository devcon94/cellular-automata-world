#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t5169D1AAD059D79561E32000F03E47724D94C68A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Unity.Mathematics.math
struct  math_tA6CA6C6033EA580128C811BD06C8777AE1E241ED  : public RuntimeObject
{
public:

public:
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Unity.Mathematics.Random
struct  Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 
{
public:
	// System.UInt32 Unity.Mathematics.Random::state
	uint32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69, ___state_0)); }
	inline uint32_t get_state_0() const { return ___state_0; }
	inline uint32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(uint32_t value)
	{
		___state_0 = value;
	}
};


// Unity.Mathematics.math_IntFloatUnion
struct  IntFloatUnion_t7ECB2A03CE51B658B77F53B39547C3BDB8164CD7 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Mathematics.math_IntFloatUnion::intValue
			int32_t ___intValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___intValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Mathematics.math_IntFloatUnion::floatValue
			float ___floatValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___floatValue_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_intValue_0() { return static_cast<int32_t>(offsetof(IntFloatUnion_t7ECB2A03CE51B658B77F53B39547C3BDB8164CD7, ___intValue_0)); }
	inline int32_t get_intValue_0() const { return ___intValue_0; }
	inline int32_t* get_address_of_intValue_0() { return &___intValue_0; }
	inline void set_intValue_0(int32_t value)
	{
		___intValue_0 = value;
	}

	inline static int32_t get_offset_of_floatValue_1() { return static_cast<int32_t>(offsetof(IntFloatUnion_t7ECB2A03CE51B658B77F53B39547C3BDB8164CD7, ___floatValue_1)); }
	inline float get_floatValue_1() const { return ___floatValue_1; }
	inline float* get_address_of_floatValue_1() { return &___floatValue_1; }
	inline void set_floatValue_1(float value)
	{
		___floatValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.UInt32 Unity.Mathematics.Random::NextState()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t Random_NextState_m85CB9C212F8A7D1B3019410DA37BF6B19527825B_inline (Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * __this, const RuntimeMethod* method);
// System.Void Unity.Mathematics.Random::.ctor(System.UInt32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Random__ctor_mB8F3103AC2FE6457AFCAE458110E96E4D7B8166A_inline (Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * __this, uint32_t ___seed0, const RuntimeMethod* method);
// System.Single Unity.Mathematics.math::asfloat(System.UInt32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float math_asfloat_m82860A497358EFF17DCA50CFE6E2494D4296C0DF_inline (uint32_t ___x0, const RuntimeMethod* method);
// System.Single Unity.Mathematics.Random::NextFloat()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float Random_NextFloat_mBD6C6987D378294DD03888687B32661795AB7823_inline (Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * __this, const RuntimeMethod* method);
// System.Single Unity.Mathematics.Random::NextFloat(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float Random_NextFloat_m5E8992E408E68A861E8B651D4B2F5578FFF1EA2B_inline (Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * __this, float ___max0, const RuntimeMethod* method);
// System.Single Unity.Mathematics.math::asfloat(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float math_asfloat_m7DFA978A0EA36F1BCFDA274F88DF10C7FDE699E9_inline (int32_t ___x0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Mathematics.Random::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mB8F3103AC2FE6457AFCAE458110E96E4D7B8166A (Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * __this, uint32_t ___seed0, const RuntimeMethod* method)
{
	{
		// state = seed;
		uint32_t L_0 = ___seed0;
		__this->set_state_0(L_0);
		// NextState();
		Random_NextState_m85CB9C212F8A7D1B3019410DA37BF6B19527825B_inline((Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 *)__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Random__ctor_mB8F3103AC2FE6457AFCAE458110E96E4D7B8166A_AdjustorThunk (RuntimeObject * __this, uint32_t ___seed0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * _thisAdjusted = reinterpret_cast<Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 *>(__this + _offset);
	Random__ctor_mB8F3103AC2FE6457AFCAE458110E96E4D7B8166A_inline(_thisAdjusted, ___seed0, method);
}
// System.Single Unity.Mathematics.Random::NextFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_NextFloat_mBD6C6987D378294DD03888687B32661795AB7823 (Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * __this, const RuntimeMethod* method)
{
	{
		// return asfloat(0x3f800000 | (NextState() >> 9)) - 1.0f;
		uint32_t L_0 = Random_NextState_m85CB9C212F8A7D1B3019410DA37BF6B19527825B_inline((Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 *)__this, /*hidden argument*/NULL);
		float L_1 = math_asfloat_m82860A497358EFF17DCA50CFE6E2494D4296C0DF_inline(((int32_t)((int32_t)((int32_t)1065353216)|(int32_t)((int32_t)((uint32_t)L_0>>((int32_t)9))))), /*hidden argument*/NULL);
		return ((float)il2cpp_codegen_subtract((float)L_1, (float)(1.0f)));
	}
}
IL2CPP_EXTERN_C  float Random_NextFloat_mBD6C6987D378294DD03888687B32661795AB7823_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * _thisAdjusted = reinterpret_cast<Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 *>(__this + _offset);
	return Random_NextFloat_mBD6C6987D378294DD03888687B32661795AB7823_inline(_thisAdjusted, method);
}
// System.Single Unity.Mathematics.Random::NextFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_NextFloat_m5E8992E408E68A861E8B651D4B2F5578FFF1EA2B (Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * __this, float ___max0, const RuntimeMethod* method)
{
	{
		// public float NextFloat(float max) { return NextFloat() * max; }
		float L_0 = Random_NextFloat_mBD6C6987D378294DD03888687B32661795AB7823_inline((Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 *)__this, /*hidden argument*/NULL);
		float L_1 = ___max0;
		return ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
	}
}
IL2CPP_EXTERN_C  float Random_NextFloat_m5E8992E408E68A861E8B651D4B2F5578FFF1EA2B_AdjustorThunk (RuntimeObject * __this, float ___max0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * _thisAdjusted = reinterpret_cast<Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 *>(__this + _offset);
	return Random_NextFloat_m5E8992E408E68A861E8B651D4B2F5578FFF1EA2B_inline(_thisAdjusted, ___max0, method);
}
// System.UInt32 Unity.Mathematics.Random::NextState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Random_NextState_m85CB9C212F8A7D1B3019410DA37BF6B19527825B (Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * __this, const RuntimeMethod* method)
{
	{
		// uint t = state;
		uint32_t L_0 = __this->get_state_0();
		// state ^= state << 13;
		uint32_t L_1 = __this->get_state_0();
		uint32_t L_2 = __this->get_state_0();
		__this->set_state_0(((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_2<<(int32_t)((int32_t)13))))));
		// state ^= state >> 17;
		uint32_t L_3 = __this->get_state_0();
		uint32_t L_4 = __this->get_state_0();
		__this->set_state_0(((int32_t)((int32_t)L_3^(int32_t)((int32_t)((uint32_t)L_4>>((int32_t)17))))));
		// state ^= state << 5;
		uint32_t L_5 = __this->get_state_0();
		uint32_t L_6 = __this->get_state_0();
		__this->set_state_0(((int32_t)((int32_t)L_5^(int32_t)((int32_t)((int32_t)L_6<<(int32_t)5)))));
		// return t;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint32_t Random_NextState_m85CB9C212F8A7D1B3019410DA37BF6B19527825B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * _thisAdjusted = reinterpret_cast<Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 *>(__this + _offset);
	return Random_NextState_m85CB9C212F8A7D1B3019410DA37BF6B19527825B_inline(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Unity.Mathematics.math::asfloat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float math_asfloat_m7DFA978A0EA36F1BCFDA274F88DF10C7FDE699E9 (int32_t ___x0, const RuntimeMethod* method)
{
	IntFloatUnion_t7ECB2A03CE51B658B77F53B39547C3BDB8164CD7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// u.floatValue = 0;
		(&V_0)->set_floatValue_1((0.0f));
		// u.intValue = x;
		int32_t L_0 = ___x0;
		(&V_0)->set_intValue_0(L_0);
		// return u.floatValue;
		IntFloatUnion_t7ECB2A03CE51B658B77F53B39547C3BDB8164CD7  L_1 = V_0;
		float L_2 = L_1.get_floatValue_1();
		return L_2;
	}
}
// System.Single Unity.Mathematics.math::asfloat(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float math_asfloat_m82860A497358EFF17DCA50CFE6E2494D4296C0DF (uint32_t ___x0, const RuntimeMethod* method)
{
	{
		// public static float  asfloat(uint x) { return asfloat((int)x); }
		uint32_t L_0 = ___x0;
		float L_1 = math_asfloat_m7DFA978A0EA36F1BCFDA274F88DF10C7FDE699E9_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t Random_NextState_m85CB9C212F8A7D1B3019410DA37BF6B19527825B_inline (Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * __this, const RuntimeMethod* method)
{
	{
		// uint t = state;
		uint32_t L_0 = __this->get_state_0();
		// state ^= state << 13;
		uint32_t L_1 = __this->get_state_0();
		uint32_t L_2 = __this->get_state_0();
		__this->set_state_0(((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_2<<(int32_t)((int32_t)13))))));
		// state ^= state >> 17;
		uint32_t L_3 = __this->get_state_0();
		uint32_t L_4 = __this->get_state_0();
		__this->set_state_0(((int32_t)((int32_t)L_3^(int32_t)((int32_t)((uint32_t)L_4>>((int32_t)17))))));
		// state ^= state << 5;
		uint32_t L_5 = __this->get_state_0();
		uint32_t L_6 = __this->get_state_0();
		__this->set_state_0(((int32_t)((int32_t)L_5^(int32_t)((int32_t)((int32_t)L_6<<(int32_t)5)))));
		// return t;
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Random__ctor_mB8F3103AC2FE6457AFCAE458110E96E4D7B8166A_inline (Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * __this, uint32_t ___seed0, const RuntimeMethod* method)
{
	{
		// state = seed;
		uint32_t L_0 = ___seed0;
		__this->set_state_0(L_0);
		// NextState();
		Random_NextState_m85CB9C212F8A7D1B3019410DA37BF6B19527825B_inline((Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 *)__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float math_asfloat_m82860A497358EFF17DCA50CFE6E2494D4296C0DF_inline (uint32_t ___x0, const RuntimeMethod* method)
{
	{
		// public static float  asfloat(uint x) { return asfloat((int)x); }
		uint32_t L_0 = ___x0;
		float L_1 = math_asfloat_m7DFA978A0EA36F1BCFDA274F88DF10C7FDE699E9_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float Random_NextFloat_mBD6C6987D378294DD03888687B32661795AB7823_inline (Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * __this, const RuntimeMethod* method)
{
	{
		// return asfloat(0x3f800000 | (NextState() >> 9)) - 1.0f;
		uint32_t L_0 = Random_NextState_m85CB9C212F8A7D1B3019410DA37BF6B19527825B_inline((Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 *)__this, /*hidden argument*/NULL);
		float L_1 = math_asfloat_m82860A497358EFF17DCA50CFE6E2494D4296C0DF_inline(((int32_t)((int32_t)((int32_t)1065353216)|(int32_t)((int32_t)((uint32_t)L_0>>((int32_t)9))))), /*hidden argument*/NULL);
		return ((float)il2cpp_codegen_subtract((float)L_1, (float)(1.0f)));
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float Random_NextFloat_m5E8992E408E68A861E8B651D4B2F5578FFF1EA2B_inline (Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * __this, float ___max0, const RuntimeMethod* method)
{
	{
		// public float NextFloat(float max) { return NextFloat() * max; }
		float L_0 = Random_NextFloat_mBD6C6987D378294DD03888687B32661795AB7823_inline((Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 *)__this, /*hidden argument*/NULL);
		float L_1 = ___max0;
		return ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float math_asfloat_m7DFA978A0EA36F1BCFDA274F88DF10C7FDE699E9_inline (int32_t ___x0, const RuntimeMethod* method)
{
	IntFloatUnion_t7ECB2A03CE51B658B77F53B39547C3BDB8164CD7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// u.floatValue = 0;
		(&V_0)->set_floatValue_1((0.0f));
		// u.intValue = x;
		int32_t L_0 = ___x0;
		(&V_0)->set_intValue_0(L_0);
		// return u.floatValue;
		IntFloatUnion_t7ECB2A03CE51B658B77F53B39547C3BDB8164CD7  L_1 = V_0;
		float L_2 = L_1.get_floatValue_1();
		return L_2;
	}
}
