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

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// AutomataTest
struct AutomataTest_t1971FB5D57493F0FC5495020EAAB1392EF69D5EC;
// DataUtil
struct DataUtil_t4CBC8B1CF72F3EECCB057A85504D13A0249E362E;
// Devcon.CellularAutomata.Grid
struct Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF;
// DisplayInfo
struct DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35;
// DisplayInfo[]
struct DisplayInfoU5BU5D_t6589483085C92EBE99C9E126A88E33CD401530E6;
// HashUtil
struct HashUtil_t063D25253CC6512933C4E7B925DEA9069AA65FF1;
// HashUtil/<>c
struct U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740;
// MathUtil
struct MathUtil_tF3B7CE936C43B4407BF619D58F37C5B552E282D6;
// MonitorInfo
struct MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F;
// MonitorUtil
struct MonitorUtil_tE00DF0FA60AB641923B797C2141739ED37E7F978;
// MonitorUtil/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tA6DFADE625C1338F8054C2248649C735EFDC76ED;
// MonitorUtil/MonitorEnumDelegate
struct MonitorEnumDelegate_tC1B7E51E6D53D1DA62AC34A1B6E21E17D605BB11;
// SerializableColor
struct SerializableColor_t9608B3A015BCA09726DA105E3C3C1692C005F5A3;
// SerializableQuaternion
struct SerializableQuaternion_tC344A30632ADF7D9716DE88475AEF84037D37D9E;
// SerializableVector2
struct SerializableVector2_t3895A430634378207E77A0FCF2FC3C7B58E54CC0;
// SerializableVector3
struct SerializableVector3_tEF515AFE855FB4AC1A5C55AFA21688D11668542B;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IEnumerable`1<System.Char>
struct IEnumerable_1_t19C1FBB7CDC6E809AD128A3F98DA68FB20CEB7B6;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t31EF1520A3A805598500BB6033C14ABDA7116D5E;
// System.Collections.Generic.List`1<DisplayInfo>
struct List_1_t8918F1EE9925B17AF507E2E2DF245FEF3AD666DF;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Func`2<System.Object,System.Char>
struct Func_2_t2D70A1E83FE3D8E90E0C5F0081A00A06BE52061A;
// System.Func`2<System.String,System.Char>
struct Func_2_tC5156A247A17ABDEF0A9166BF03FCCF704BD74CF;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Random
struct Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;

IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC5156A247A17ABDEF0A9166BF03FCCF704BD74CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashUtil_t063D25253CC6512933C4E7B925DEA9069AA65FF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8918F1EE9925B17AF507E2E2DF245FEF3AD666DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonitorEnumDelegate_tC1B7E51E6D53D1DA62AC34A1B6E21E17D605BB11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonitorUtil_tE00DF0FA60AB641923B797C2141739ED37E7F978_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_t35B976DE901B5423C11705E156938EA27AB402CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_tA6DFADE625C1338F8054C2248649C735EFDC76ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral10E97EA4C910C319F7F1E473F2968C4BEB50BA32;
IL2CPP_EXTERN_C String_t* _stringLiteral3032610DAD876B7F640E32A1498C8269E4A7FB3C;
IL2CPP_EXTERN_C String_t* _stringLiteral5F9144F352B6F15A6AEB3F0252183F7405866A7E;
IL2CPP_EXTERN_C String_t* _stringLiteral92099DB89A20D3B397EF4CE8CD781117B0A3DEEE;
IL2CPP_EXTERN_C String_t* _stringLiteralD62B6A50CB4F9D7B7899CDECC48C04ED79D5B342;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Repeat_TisString_t_m28B564F333BC53D2AC55BD715F5E743BDBD29826_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisString_t_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m645A87C7C54827207E37B5AE7EEC46F8EDA73375_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mB3C36D852FB5E2CDF51487D157540BFB3F4CBE94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m122D0ED731C0D00BA65EF8504F8D6C11902915CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobParallelForExtensions_Schedule_TisGridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E_mE8F4E901D2F22714396CEB73EE48B1B972BFC183_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobParallelForExtensions_Schedule_TisGridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9_mE9CB82392FC0B3001E2A9C2B4C93410C044A30FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobParallelForExtensions_Schedule_TisGridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB_m8B1F404DA653E3C21D23D682B5D02255DCC4C1EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m795D7BA059E917E170A352E685D18A9E9C4942F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF8C6F9270595DBC319F3D1CB6B5DDBD304F1DDBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_SizeOf_TisMonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_mD5C70A1F421AF8A282748E776317ACA01BF096B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_CopyTo_mD8E01A9987021BE63732C34471CA1AD9D3BF43A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m1898490F57EF28C43BE7C2EBF26A89D0E07AD378_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mC60A11143F8C0ACB8B65FEDAE62F3467BE4E75A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m0352506052E097EFF816B6AB3AA235CBA57C071B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m45871E99228D0D1472FE12292CCABAFF9C203A03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mC63D537E914104DE958E57B8AE27B3DBF44B90BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_SetPixelData_Tisfloat4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541_m9DB20F1F3F14D103E3DE941DD5FC68CF7AD534B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRandomStringU3Eb__2_0_m9237D2D6055F9E65D7C9D4DA7A8FDBCAFB1C738E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CQueryDisplaysU3Eb__0_mB6EBC5859587853A3AA485E366176EB0542757B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AutomataTest_OnEnable_m23FA3B1EA116998EEB26AA83AF18B36A1B343A1B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cell_GetAdjacentCell_mB517B66D1F6206F4DB292C3EBFE1726EA23E89B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cell_GetProjectedIndex_m1C74D32C8168507276233826D1DA4949EC902E22_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cell_HungerStage_mDAAFD06BB17B033895AD80F351A11AEDC0E3AB7C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Cell__cctor_m35EE717DDB0FBC5B7AB847230CC2A867CDF84BB4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DataUtil_ParseBool_m7C37114659CADA63E1377031D75E90346E95CCB3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Grid_BuildCells_m0C893084E257962B24AF74138F76E490B63D07C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Grid_Build_mEFEF960E58CCDBCFBAD789E9F933336FA540A45A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Grid_Dispose_m44C933DB1BDBEB6F67755A573441D63197F6E24A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Grid_Step_m8C474EFA70BBCAC3EEC9366E870EEBF8A50A1564_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Grid_UpdateTexture_mB5F5B53D0DA0FB59ADD7E8A974794238301713A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HashUtil_RandomString_mA0C5340E6D0D1E16EAA19795C503BCFFDC7D0255_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HashUtil__cctor_mE427E652D331F9FADDA24D7E055A772423A71757_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MathUtil_NextFloat_mB82DDD22D5C9BC7540C026D05566B374BC20EA77_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorEnumDelegate_BeginInvoke_m38706631D15C91CBADB6C3B289AC2BEEC5F8BE31_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorUtil_QueryDisplays_m9D06ACD2A7111BCF16F9FDAF5C83F8A7B9C55B0A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorUtil_Startup_mCC04EBCD564F01C1E915F5047FF2AFFD377AB1CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorUtil_get_ScreenCenter_mBD3255A9CBB77C81A4F3FA438DBB8E3E67D63FE8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorUtil_set_ScreenCenter_mF7D96455C1FFC00065C6F32BC41F3A09EC2D742CAssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorUtil_set_ScreenCenter_mF7D96455C1FFC00065C6F32BC41F3A09EC2D742C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRandomStringU3Eb__2_0_m9237D2D6055F9E65D7C9D4DA7A8FDBCAFB1C738E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass6_0_U3CQueryDisplaysU3Eb__0_mB6EBC5859587853A3AA485E366176EB0542757B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m5B7B408E17072DEA6E9AB4E5FF877B39EF5A2D8A_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F;;
struct MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshaled_pinvoke;
struct MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshaled_pinvoke;;

struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object


// DataUtil
struct  DataUtil_t4CBC8B1CF72F3EECCB057A85504D13A0249E362E  : public RuntimeObject
{
public:

public:
};


// EnumUtil
struct  EnumUtil_tA6BBD6A67D6BC6FE5492D720026EA939B761B6B9  : public RuntimeObject
{
public:

public:
};


// HashUtil
struct  HashUtil_t063D25253CC6512933C4E7B925DEA9069AA65FF1  : public RuntimeObject
{
public:

public:
};

struct HashUtil_t063D25253CC6512933C4E7B925DEA9069AA65FF1_StaticFields
{
public:
	// System.Random HashUtil::random
	Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * ___random_0;

public:
	inline static int32_t get_offset_of_random_0() { return static_cast<int32_t>(offsetof(HashUtil_t063D25253CC6512933C4E7B925DEA9069AA65FF1_StaticFields, ___random_0)); }
	inline Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * get_random_0() const { return ___random_0; }
	inline Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F ** get_address_of_random_0() { return &___random_0; }
	inline void set_random_0(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * value)
	{
		___random_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___random_0), (void*)value);
	}
};


// HashUtil_<>c
struct  U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740_StaticFields
{
public:
	// HashUtil_<>c HashUtil_<>c::<>9
	U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740 * ___U3CU3E9_0;
	// System.Func`2<System.String,System.Char> HashUtil_<>c::<>9__2_0
	Func_2_tC5156A247A17ABDEF0A9166BF03FCCF704BD74CF * ___U3CU3E9__2_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Func_2_tC5156A247A17ABDEF0A9166BF03FCCF704BD74CF * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Func_2_tC5156A247A17ABDEF0A9166BF03FCCF704BD74CF ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Func_2_tC5156A247A17ABDEF0A9166BF03FCCF704BD74CF * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_1), (void*)value);
	}
};


// MathUtil
struct  MathUtil_tF3B7CE936C43B4407BF619D58F37C5B552E282D6  : public RuntimeObject
{
public:

public:
};


// MonitorUtil_<>c__DisplayClass6_0
struct  U3CU3Ec__DisplayClass6_0_tA6DFADE625C1338F8054C2248649C735EFDC76ED  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<DisplayInfo> MonitorUtil_<>c__DisplayClass6_0::Monitors
	List_1_t8918F1EE9925B17AF507E2E2DF245FEF3AD666DF * ___Monitors_0;

public:
	inline static int32_t get_offset_of_Monitors_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tA6DFADE625C1338F8054C2248649C735EFDC76ED, ___Monitors_0)); }
	inline List_1_t8918F1EE9925B17AF507E2E2DF245FEF3AD666DF * get_Monitors_0() const { return ___Monitors_0; }
	inline List_1_t8918F1EE9925B17AF507E2E2DF245FEF3AD666DF ** get_address_of_Monitors_0() { return &___Monitors_0; }
	inline void set_Monitors_0(List_1_t8918F1EE9925B17AF507E2E2DF245FEF3AD666DF * value)
	{
		___Monitors_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Monitors_0), (void*)value);
	}
};


// SerializableColor
struct  SerializableColor_t9608B3A015BCA09726DA105E3C3C1692C005F5A3  : public RuntimeObject
{
public:
	// System.Single SerializableColor::r
	float ___r_0;
	// System.Single SerializableColor::g
	float ___g_1;
	// System.Single SerializableColor::b
	float ___b_2;
	// System.Single SerializableColor::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(SerializableColor_t9608B3A015BCA09726DA105E3C3C1692C005F5A3, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(SerializableColor_t9608B3A015BCA09726DA105E3C3C1692C005F5A3, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(SerializableColor_t9608B3A015BCA09726DA105E3C3C1692C005F5A3, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(SerializableColor_t9608B3A015BCA09726DA105E3C3C1692C005F5A3, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// SerializableQuaternion
struct  SerializableQuaternion_tC344A30632ADF7D9716DE88475AEF84037D37D9E  : public RuntimeObject
{
public:
	// System.Single SerializableQuaternion::x
	float ___x_0;
	// System.Single SerializableQuaternion::y
	float ___y_1;
	// System.Single SerializableQuaternion::z
	float ___z_2;
	// System.Single SerializableQuaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(SerializableQuaternion_tC344A30632ADF7D9716DE88475AEF84037D37D9E, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(SerializableQuaternion_tC344A30632ADF7D9716DE88475AEF84037D37D9E, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(SerializableQuaternion_tC344A30632ADF7D9716DE88475AEF84037D37D9E, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(SerializableQuaternion_tC344A30632ADF7D9716DE88475AEF84037D37D9E, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};


// SerializableVector2
struct  SerializableVector2_t3895A430634378207E77A0FCF2FC3C7B58E54CC0  : public RuntimeObject
{
public:
	// System.Single SerializableVector2::x
	float ___x_0;
	// System.Single SerializableVector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(SerializableVector2_t3895A430634378207E77A0FCF2FC3C7B58E54CC0, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(SerializableVector2_t3895A430634378207E77A0FCF2FC3C7B58E54CC0, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};


// SerializableVector3
struct  SerializableVector3_tEF515AFE855FB4AC1A5C55AFA21688D11668542B  : public RuntimeObject
{
public:
	// System.Single SerializableVector3::x
	float ___x_0;
	// System.Single SerializableVector3::y
	float ___y_1;
	// System.Single SerializableVector3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(SerializableVector3_tEF515AFE855FB4AC1A5C55AFA21688D11668542B, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(SerializableVector3_tEF515AFE855FB4AC1A5C55AFA21688D11668542B, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(SerializableVector3_tEF515AFE855FB4AC1A5C55AFA21688D11668542B, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<DisplayInfo>
struct  List_1_t8918F1EE9925B17AF507E2E2DF245FEF3AD666DF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DisplayInfoU5BU5D_t6589483085C92EBE99C9E126A88E33CD401530E6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8918F1EE9925B17AF507E2E2DF245FEF3AD666DF, ____items_1)); }
	inline DisplayInfoU5BU5D_t6589483085C92EBE99C9E126A88E33CD401530E6* get__items_1() const { return ____items_1; }
	inline DisplayInfoU5BU5D_t6589483085C92EBE99C9E126A88E33CD401530E6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DisplayInfoU5BU5D_t6589483085C92EBE99C9E126A88E33CD401530E6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8918F1EE9925B17AF507E2E2DF245FEF3AD666DF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8918F1EE9925B17AF507E2E2DF245FEF3AD666DF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8918F1EE9925B17AF507E2E2DF245FEF3AD666DF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8918F1EE9925B17AF507E2E2DF245FEF3AD666DF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DisplayInfoU5BU5D_t6589483085C92EBE99C9E126A88E33CD401530E6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8918F1EE9925B17AF507E2E2DF245FEF3AD666DF_StaticFields, ____emptyArray_5)); }
	inline DisplayInfoU5BU5D_t6589483085C92EBE99C9E126A88E33CD401530E6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DisplayInfoU5BU5D_t6589483085C92EBE99C9E126A88E33CD401530E6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DisplayInfoU5BU5D_t6589483085C92EBE99C9E126A88E33CD401530E6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Random
struct  Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___SeedArray_2)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_2), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


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

// RectNative
struct  RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6 
{
public:
	// System.Int32 RectNative::Left
	int32_t ___Left_0;
	// System.Int32 RectNative::Top
	int32_t ___Top_1;
	// System.Int32 RectNative::Right
	int32_t ___Right_2;
	// System.Int32 RectNative::Bottom
	int32_t ___Bottom_3;

public:
	inline static int32_t get_offset_of_Left_0() { return static_cast<int32_t>(offsetof(RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6, ___Left_0)); }
	inline int32_t get_Left_0() const { return ___Left_0; }
	inline int32_t* get_address_of_Left_0() { return &___Left_0; }
	inline void set_Left_0(int32_t value)
	{
		___Left_0 = value;
	}

	inline static int32_t get_offset_of_Top_1() { return static_cast<int32_t>(offsetof(RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6, ___Top_1)); }
	inline int32_t get_Top_1() const { return ___Top_1; }
	inline int32_t* get_address_of_Top_1() { return &___Top_1; }
	inline void set_Top_1(int32_t value)
	{
		___Top_1 = value;
	}

	inline static int32_t get_offset_of_Right_2() { return static_cast<int32_t>(offsetof(RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6, ___Right_2)); }
	inline int32_t get_Right_2() const { return ___Right_2; }
	inline int32_t* get_address_of_Right_2() { return &___Right_2; }
	inline void set_Right_2(int32_t value)
	{
		___Right_2 = value;
	}

	inline static int32_t get_offset_of_Bottom_3() { return static_cast<int32_t>(offsetof(RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6, ___Bottom_3)); }
	inline int32_t get_Bottom_3() const { return ___Bottom_3; }
	inline int32_t* get_address_of_Bottom_3() { return &___Bottom_3; }
	inline void set_Bottom_3(int32_t value)
	{
		___Bottom_3 = value;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
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


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
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


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct  Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_One_3)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Up_4)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Down_5)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Left_6)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Right_7)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// float4
struct  float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541 
{
public:
	// System.Single float4::_x
	float ____x_0;
	// System.Single float4::_y
	float ____y_1;
	// System.Single float4::_z
	float ____z_2;
	// System.Single float4::_w
	float ____w_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__z_2() { return static_cast<int32_t>(offsetof(float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541, ____z_2)); }
	inline float get__z_2() const { return ____z_2; }
	inline float* get_address_of__z_2() { return &____z_2; }
	inline void set__z_2(float value)
	{
		____z_2 = value;
	}

	inline static int32_t get_offset_of__w_3() { return static_cast<int32_t>(offsetof(float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541, ____w_3)); }
	inline float get__w_3() const { return ____w_3; }
	inline float* get_address_of__w_3() { return &____w_3; }
	inline void set__w_3(float value)
	{
		____w_3 = value;
	}
};


// Devcon.CellularAutomata.Cell
struct  Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE 
{
public:
	// System.Int32 Devcon.CellularAutomata.Cell::_index
	int32_t ____index_1;
	// System.Int32 Devcon.CellularAutomata.Cell::_organism
	int32_t ____organism_2;
	// System.Boolean Devcon.CellularAutomata.Cell::_active
	bool ____active_3;
	// System.Boolean Devcon.CellularAutomata.Cell::_alive
	bool ____alive_4;
	// System.Boolean Devcon.CellularAutomata.Cell::_consumable
	bool ____consumable_5;
	// float4 Devcon.CellularAutomata.Cell::_color
	float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  ____color_6;
	// System.Single Devcon.CellularAutomata.Cell::_magnitude
	float ____magnitude_7;
	// Unity.Mathematics.Random Devcon.CellularAutomata.Cell::_random
	Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69  ____random_8;

public:
	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__organism_2() { return static_cast<int32_t>(offsetof(Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE, ____organism_2)); }
	inline int32_t get__organism_2() const { return ____organism_2; }
	inline int32_t* get_address_of__organism_2() { return &____organism_2; }
	inline void set__organism_2(int32_t value)
	{
		____organism_2 = value;
	}

	inline static int32_t get_offset_of__active_3() { return static_cast<int32_t>(offsetof(Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE, ____active_3)); }
	inline bool get__active_3() const { return ____active_3; }
	inline bool* get_address_of__active_3() { return &____active_3; }
	inline void set__active_3(bool value)
	{
		____active_3 = value;
	}

	inline static int32_t get_offset_of__alive_4() { return static_cast<int32_t>(offsetof(Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE, ____alive_4)); }
	inline bool get__alive_4() const { return ____alive_4; }
	inline bool* get_address_of__alive_4() { return &____alive_4; }
	inline void set__alive_4(bool value)
	{
		____alive_4 = value;
	}

	inline static int32_t get_offset_of__consumable_5() { return static_cast<int32_t>(offsetof(Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE, ____consumable_5)); }
	inline bool get__consumable_5() const { return ____consumable_5; }
	inline bool* get_address_of__consumable_5() { return &____consumable_5; }
	inline void set__consumable_5(bool value)
	{
		____consumable_5 = value;
	}

	inline static int32_t get_offset_of__color_6() { return static_cast<int32_t>(offsetof(Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE, ____color_6)); }
	inline float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  get__color_6() const { return ____color_6; }
	inline float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541 * get_address_of__color_6() { return &____color_6; }
	inline void set__color_6(float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  value)
	{
		____color_6 = value;
	}

	inline static int32_t get_offset_of__magnitude_7() { return static_cast<int32_t>(offsetof(Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE, ____magnitude_7)); }
	inline float get__magnitude_7() const { return ____magnitude_7; }
	inline float* get_address_of__magnitude_7() { return &____magnitude_7; }
	inline void set__magnitude_7(float value)
	{
		____magnitude_7 = value;
	}

	inline static int32_t get_offset_of__random_8() { return static_cast<int32_t>(offsetof(Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE, ____random_8)); }
	inline Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69  get__random_8() const { return ____random_8; }
	inline Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * get_address_of__random_8() { return &____random_8; }
	inline void set__random_8(Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69  value)
	{
		____random_8 = value;
	}
};

struct Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE_StaticFields
{
public:
	// Devcon.CellularAutomata.Cell Devcon.CellularAutomata.Cell::INVALID_CELL
	Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  ___INVALID_CELL_0;

public:
	inline static int32_t get_offset_of_INVALID_CELL_0() { return static_cast<int32_t>(offsetof(Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE_StaticFields, ___INVALID_CELL_0)); }
	inline Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  get_INVALID_CELL_0() const { return ___INVALID_CELL_0; }
	inline Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * get_address_of_INVALID_CELL_0() { return &___INVALID_CELL_0; }
	inline void set_INVALID_CELL_0(Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  value)
	{
		___INVALID_CELL_0 = value;
	}
};

// Native definition for P/Invoke marshalling of Devcon.CellularAutomata.Cell
struct Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE_marshaled_pinvoke
{
	int32_t ____index_1;
	int32_t ____organism_2;
	int32_t ____active_3;
	int32_t ____alive_4;
	int32_t ____consumable_5;
	float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  ____color_6;
	float ____magnitude_7;
	Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69  ____random_8;
};
// Native definition for COM marshalling of Devcon.CellularAutomata.Cell
struct Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE_marshaled_com
{
	int32_t ____index_1;
	int32_t ____organism_2;
	int32_t ____active_3;
	int32_t ____alive_4;
	int32_t ____consumable_5;
	float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  ____color_6;
	float ____magnitude_7;
	Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69  ____random_8;
};

// DisplayInfo
struct  DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35  : public RuntimeObject
{
public:
	// System.String DisplayInfo::<Availability>k__BackingField
	String_t* ___U3CAvailabilityU3Ek__BackingField_0;
	// System.Int32 DisplayInfo::<ScreenHeight>k__BackingField
	int32_t ___U3CScreenHeightU3Ek__BackingField_1;
	// System.Int32 DisplayInfo::<ScreenWidth>k__BackingField
	int32_t ___U3CScreenWidthU3Ek__BackingField_2;
	// UnityEngine.Rect DisplayInfo::<MonitorArea>k__BackingField
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___U3CMonitorAreaU3Ek__BackingField_3;
	// System.Int32 DisplayInfo::<MonitorTop>k__BackingField
	int32_t ___U3CMonitorTopU3Ek__BackingField_4;
	// System.Int32 DisplayInfo::<MonitorLeft>k__BackingField
	int32_t ___U3CMonitorLeftU3Ek__BackingField_5;
	// System.String DisplayInfo::<DeviceName>k__BackingField
	String_t* ___U3CDeviceNameU3Ek__BackingField_6;
	// System.String DisplayInfo::<FriendlyName>k__BackingField
	String_t* ___U3CFriendlyNameU3Ek__BackingField_7;
	// System.String DisplayInfo::<VendorsName>k__BackingField
	String_t* ___U3CVendorsNameU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CAvailabilityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35, ___U3CAvailabilityU3Ek__BackingField_0)); }
	inline String_t* get_U3CAvailabilityU3Ek__BackingField_0() const { return ___U3CAvailabilityU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CAvailabilityU3Ek__BackingField_0() { return &___U3CAvailabilityU3Ek__BackingField_0; }
	inline void set_U3CAvailabilityU3Ek__BackingField_0(String_t* value)
	{
		___U3CAvailabilityU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAvailabilityU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CScreenHeightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35, ___U3CScreenHeightU3Ek__BackingField_1)); }
	inline int32_t get_U3CScreenHeightU3Ek__BackingField_1() const { return ___U3CScreenHeightU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CScreenHeightU3Ek__BackingField_1() { return &___U3CScreenHeightU3Ek__BackingField_1; }
	inline void set_U3CScreenHeightU3Ek__BackingField_1(int32_t value)
	{
		___U3CScreenHeightU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CScreenWidthU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35, ___U3CScreenWidthU3Ek__BackingField_2)); }
	inline int32_t get_U3CScreenWidthU3Ek__BackingField_2() const { return ___U3CScreenWidthU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CScreenWidthU3Ek__BackingField_2() { return &___U3CScreenWidthU3Ek__BackingField_2; }
	inline void set_U3CScreenWidthU3Ek__BackingField_2(int32_t value)
	{
		___U3CScreenWidthU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CMonitorAreaU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35, ___U3CMonitorAreaU3Ek__BackingField_3)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_U3CMonitorAreaU3Ek__BackingField_3() const { return ___U3CMonitorAreaU3Ek__BackingField_3; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_U3CMonitorAreaU3Ek__BackingField_3() { return &___U3CMonitorAreaU3Ek__BackingField_3; }
	inline void set_U3CMonitorAreaU3Ek__BackingField_3(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___U3CMonitorAreaU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CMonitorTopU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35, ___U3CMonitorTopU3Ek__BackingField_4)); }
	inline int32_t get_U3CMonitorTopU3Ek__BackingField_4() const { return ___U3CMonitorTopU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CMonitorTopU3Ek__BackingField_4() { return &___U3CMonitorTopU3Ek__BackingField_4; }
	inline void set_U3CMonitorTopU3Ek__BackingField_4(int32_t value)
	{
		___U3CMonitorTopU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CMonitorLeftU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35, ___U3CMonitorLeftU3Ek__BackingField_5)); }
	inline int32_t get_U3CMonitorLeftU3Ek__BackingField_5() const { return ___U3CMonitorLeftU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CMonitorLeftU3Ek__BackingField_5() { return &___U3CMonitorLeftU3Ek__BackingField_5; }
	inline void set_U3CMonitorLeftU3Ek__BackingField_5(int32_t value)
	{
		___U3CMonitorLeftU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CDeviceNameU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35, ___U3CDeviceNameU3Ek__BackingField_6)); }
	inline String_t* get_U3CDeviceNameU3Ek__BackingField_6() const { return ___U3CDeviceNameU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CDeviceNameU3Ek__BackingField_6() { return &___U3CDeviceNameU3Ek__BackingField_6; }
	inline void set_U3CDeviceNameU3Ek__BackingField_6(String_t* value)
	{
		___U3CDeviceNameU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDeviceNameU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFriendlyNameU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35, ___U3CFriendlyNameU3Ek__BackingField_7)); }
	inline String_t* get_U3CFriendlyNameU3Ek__BackingField_7() const { return ___U3CFriendlyNameU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CFriendlyNameU3Ek__BackingField_7() { return &___U3CFriendlyNameU3Ek__BackingField_7; }
	inline void set_U3CFriendlyNameU3Ek__BackingField_7(String_t* value)
	{
		___U3CFriendlyNameU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFriendlyNameU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVendorsNameU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35, ___U3CVendorsNameU3Ek__BackingField_8)); }
	inline String_t* get_U3CVendorsNameU3Ek__BackingField_8() const { return ___U3CVendorsNameU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CVendorsNameU3Ek__BackingField_8() { return &___U3CVendorsNameU3Ek__BackingField_8; }
	inline void set_U3CVendorsNameU3Ek__BackingField_8(String_t* value)
	{
		___U3CVendorsNameU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVendorsNameU3Ek__BackingField_8), (void*)value);
	}
};


// MonitorInfo
struct  MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F 
{
public:
	// System.UInt32 MonitorInfo::Size
	uint32_t ___Size_0;
	// RectNative MonitorInfo::Monitor
	RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6  ___Monitor_1;
	// RectNative MonitorInfo::WorkArea
	RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6  ___WorkArea_2;
	// System.UInt32 MonitorInfo::Flags
	uint32_t ___Flags_3;
	// System.String MonitorInfo::DeviceName
	String_t* ___DeviceName_4;

public:
	inline static int32_t get_offset_of_Size_0() { return static_cast<int32_t>(offsetof(MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F, ___Size_0)); }
	inline uint32_t get_Size_0() const { return ___Size_0; }
	inline uint32_t* get_address_of_Size_0() { return &___Size_0; }
	inline void set_Size_0(uint32_t value)
	{
		___Size_0 = value;
	}

	inline static int32_t get_offset_of_Monitor_1() { return static_cast<int32_t>(offsetof(MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F, ___Monitor_1)); }
	inline RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6  get_Monitor_1() const { return ___Monitor_1; }
	inline RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6 * get_address_of_Monitor_1() { return &___Monitor_1; }
	inline void set_Monitor_1(RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6  value)
	{
		___Monitor_1 = value;
	}

	inline static int32_t get_offset_of_WorkArea_2() { return static_cast<int32_t>(offsetof(MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F, ___WorkArea_2)); }
	inline RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6  get_WorkArea_2() const { return ___WorkArea_2; }
	inline RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6 * get_address_of_WorkArea_2() { return &___WorkArea_2; }
	inline void set_WorkArea_2(RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6  value)
	{
		___WorkArea_2 = value;
	}

	inline static int32_t get_offset_of_Flags_3() { return static_cast<int32_t>(offsetof(MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F, ___Flags_3)); }
	inline uint32_t get_Flags_3() const { return ___Flags_3; }
	inline uint32_t* get_address_of_Flags_3() { return &___Flags_3; }
	inline void set_Flags_3(uint32_t value)
	{
		___Flags_3 = value;
	}

	inline static int32_t get_offset_of_DeviceName_4() { return static_cast<int32_t>(offsetof(MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F, ___DeviceName_4)); }
	inline String_t* get_DeviceName_4() const { return ___DeviceName_4; }
	inline String_t** get_address_of_DeviceName_4() { return &___DeviceName_4; }
	inline void set_DeviceName_4(String_t* value)
	{
		___DeviceName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeviceName_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of MonitorInfo
struct MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshaled_pinvoke
{
	uint32_t ___Size_0;
	RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6  ___Monitor_1;
	RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6  ___WorkArea_2;
	uint32_t ___Flags_3;
	Il2CppChar ___DeviceName_4[32];
};
// Native definition for COM marshalling of MonitorInfo
struct MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshaled_com
{
	uint32_t ___Size_0;
	RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6  ___Monitor_1;
	RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6  ___WorkArea_2;
	uint32_t ___Flags_3;
	Il2CppChar ___DeviceName_4[32];
};

// MonitorUtil
struct  MonitorUtil_tE00DF0FA60AB641923B797C2141739ED37E7F978  : public RuntimeObject
{
public:

public:
};

struct MonitorUtil_tE00DF0FA60AB641923B797C2141739ED37E7F978_StaticFields
{
public:
	// UnityEngine.Vector2 MonitorUtil::<ScreenCenter>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CScreenCenterU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CScreenCenterU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MonitorUtil_tE00DF0FA60AB641923B797C2141739ED37E7F978_StaticFields, ___U3CScreenCenterU3Ek__BackingField_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CScreenCenterU3Ek__BackingField_0() const { return ___U3CScreenCenterU3Ek__BackingField_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CScreenCenterU3Ek__BackingField_0() { return &___U3CScreenCenterU3Ek__BackingField_0; }
	inline void set_U3CScreenCenterU3Ek__BackingField_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CScreenCenterU3Ek__BackingField_0 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArrayOptions
struct  NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Jobs.JobHandle
struct  JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 
{
public:
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;

public:
	inline static int32_t get_offset_of_jobGroup_0() { return static_cast<int32_t>(offsetof(JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1, ___jobGroup_0)); }
	inline intptr_t get_jobGroup_0() const { return ___jobGroup_0; }
	inline intptr_t* get_address_of_jobGroup_0() { return &___jobGroup_0; }
	inline void set_jobGroup_0(intptr_t value)
	{
		___jobGroup_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}
};


// UnityEngine.FilterMode
struct  FilterMode_t6590B4B0BAE2BBBCABA8E1E93FA07A052B3261AF 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FilterMode_t6590B4B0BAE2BBBCABA8E1E93FA07A052B3261AF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.TextureFormat
struct  TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell>
struct  NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<Unity.Mathematics.Random>
struct  NativeArray_1_t2C7E119FB1FEF352D407528DF0265179740FE3E8 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t2C7E119FB1FEF352D407528DF0265179740FE3E8, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t2C7E119FB1FEF352D407528DF0265179740FE3E8, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t2C7E119FB1FEF352D407528DF0265179740FE3E8, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<float4>
struct  NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Sprite
struct  Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// Devcon.CellularAutomata.Grid
struct  Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF  : public RuntimeObject
{
public:
	// System.Int32 Devcon.CellularAutomata.Grid::_size
	int32_t ____size_0;
	// Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell> Devcon.CellularAutomata.Grid::_cells
	NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ____cells_1;
	// UnityEngine.Texture2D Devcon.CellularAutomata.Grid::_texture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____texture_2;

public:
	inline static int32_t get_offset_of__size_0() { return static_cast<int32_t>(offsetof(Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF, ____size_0)); }
	inline int32_t get__size_0() const { return ____size_0; }
	inline int32_t* get_address_of__size_0() { return &____size_0; }
	inline void set__size_0(int32_t value)
	{
		____size_0 = value;
	}

	inline static int32_t get_offset_of__cells_1() { return static_cast<int32_t>(offsetof(Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF, ____cells_1)); }
	inline NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  get__cells_1() const { return ____cells_1; }
	inline NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B * get_address_of__cells_1() { return &____cells_1; }
	inline void set__cells_1(NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  value)
	{
		____cells_1 = value;
	}

	inline static int32_t get_offset_of__texture_2() { return static_cast<int32_t>(offsetof(Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF, ____texture_2)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get__texture_2() const { return ____texture_2; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of__texture_2() { return &____texture_2; }
	inline void set__texture_2(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		____texture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____texture_2), (void*)value);
	}
};


// Devcon.CellularAutomata.GridBuildJob
struct  GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E 
{
public:
	// Unity.Collections.NativeArray`1<Unity.Mathematics.Random> Devcon.CellularAutomata.GridBuildJob::rand
	NativeArray_1_t2C7E119FB1FEF352D407528DF0265179740FE3E8  ___rand_0;
	// Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell> Devcon.CellularAutomata.GridBuildJob::cells
	NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells_1;
	// System.Int32 Devcon.CellularAutomata.GridBuildJob::width
	int32_t ___width_2;

public:
	inline static int32_t get_offset_of_rand_0() { return static_cast<int32_t>(offsetof(GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E, ___rand_0)); }
	inline NativeArray_1_t2C7E119FB1FEF352D407528DF0265179740FE3E8  get_rand_0() const { return ___rand_0; }
	inline NativeArray_1_t2C7E119FB1FEF352D407528DF0265179740FE3E8 * get_address_of_rand_0() { return &___rand_0; }
	inline void set_rand_0(NativeArray_1_t2C7E119FB1FEF352D407528DF0265179740FE3E8  value)
	{
		___rand_0 = value;
	}

	inline static int32_t get_offset_of_cells_1() { return static_cast<int32_t>(offsetof(GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E, ___cells_1)); }
	inline NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  get_cells_1() const { return ___cells_1; }
	inline NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B * get_address_of_cells_1() { return &___cells_1; }
	inline void set_cells_1(NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  value)
	{
		___cells_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E, ___width_2)); }
	inline int32_t get_width_2() const { return ___width_2; }
	inline int32_t* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(int32_t value)
	{
		___width_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Devcon.CellularAutomata.GridBuildJob
struct GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E_marshaled_pinvoke
{
	NativeArray_1_t2C7E119FB1FEF352D407528DF0265179740FE3E8  ___rand_0;
	NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells_1;
	int32_t ___width_2;
};
// Native definition for COM marshalling of Devcon.CellularAutomata.GridBuildJob
struct GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E_marshaled_com
{
	NativeArray_1_t2C7E119FB1FEF352D407528DF0265179740FE3E8  ___rand_0;
	NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells_1;
	int32_t ___width_2;
};

// Devcon.CellularAutomata.GridStepJob
struct  GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9 
{
public:
	// Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell> Devcon.CellularAutomata.GridStepJob::cells
	NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells_0;

public:
	inline static int32_t get_offset_of_cells_0() { return static_cast<int32_t>(offsetof(GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9, ___cells_0)); }
	inline NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  get_cells_0() const { return ___cells_0; }
	inline NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B * get_address_of_cells_0() { return &___cells_0; }
	inline void set_cells_0(NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  value)
	{
		___cells_0 = value;
	}
};

// Native definition for P/Invoke marshalling of Devcon.CellularAutomata.GridStepJob
struct GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9_marshaled_pinvoke
{
	NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells_0;
};
// Native definition for COM marshalling of Devcon.CellularAutomata.GridStepJob
struct GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9_marshaled_com
{
	NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells_0;
};

// Devcon.CellularAutomata.GridUpdateTextureJob
struct  GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB 
{
public:
	// Unity.Collections.NativeArray`1<float4> Devcon.CellularAutomata.GridUpdateTextureJob::pixels
	NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6  ___pixels_0;
	// Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell> Devcon.CellularAutomata.GridUpdateTextureJob::cells
	NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells_1;

public:
	inline static int32_t get_offset_of_pixels_0() { return static_cast<int32_t>(offsetof(GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB, ___pixels_0)); }
	inline NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6  get_pixels_0() const { return ___pixels_0; }
	inline NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6 * get_address_of_pixels_0() { return &___pixels_0; }
	inline void set_pixels_0(NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6  value)
	{
		___pixels_0 = value;
	}

	inline static int32_t get_offset_of_cells_1() { return static_cast<int32_t>(offsetof(GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB, ___cells_1)); }
	inline NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  get_cells_1() const { return ___cells_1; }
	inline NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B * get_address_of_cells_1() { return &___cells_1; }
	inline void set_cells_1(NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  value)
	{
		___cells_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Devcon.CellularAutomata.GridUpdateTextureJob
struct GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB_marshaled_pinvoke
{
	NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6  ___pixels_0;
	NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells_1;
};
// Native definition for COM marshalling of Devcon.CellularAutomata.GridUpdateTextureJob
struct GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB_marshaled_com
{
	NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6  ___pixels_0;
	NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells_1;
};

// MonitorUtil_MonitorEnumDelegate
struct  MonitorEnumDelegate_tC1B7E51E6D53D1DA62AC34A1B6E21E17D605BB11  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.String,System.Char>
struct  Func_2_tC5156A247A17ABDEF0A9166BF03FCCF704BD74CF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct  SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// AutomataTest
struct  AutomataTest_t1971FB5D57493F0FC5495020EAAB1392EF69D5EC  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.SpriteRenderer AutomataTest::_spriteRenderer
	SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * ____spriteRenderer_6;
	// UnityEngine.Sprite AutomataTest::_sprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ____sprite_7;
	// Devcon.CellularAutomata.Grid AutomataTest::_grid
	Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF * ____grid_8;
	// System.Single AutomataTest::_nextStep
	float ____nextStep_9;

public:
	inline static int32_t get_offset_of__spriteRenderer_6() { return static_cast<int32_t>(offsetof(AutomataTest_t1971FB5D57493F0FC5495020EAAB1392EF69D5EC, ____spriteRenderer_6)); }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * get__spriteRenderer_6() const { return ____spriteRenderer_6; }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F ** get_address_of__spriteRenderer_6() { return &____spriteRenderer_6; }
	inline void set__spriteRenderer_6(SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * value)
	{
		____spriteRenderer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____spriteRenderer_6), (void*)value);
	}

	inline static int32_t get_offset_of__sprite_7() { return static_cast<int32_t>(offsetof(AutomataTest_t1971FB5D57493F0FC5495020EAAB1392EF69D5EC, ____sprite_7)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get__sprite_7() const { return ____sprite_7; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of__sprite_7() { return &____sprite_7; }
	inline void set__sprite_7(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		____sprite_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sprite_7), (void*)value);
	}

	inline static int32_t get_offset_of__grid_8() { return static_cast<int32_t>(offsetof(AutomataTest_t1971FB5D57493F0FC5495020EAAB1392EF69D5EC, ____grid_8)); }
	inline Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF * get__grid_8() const { return ____grid_8; }
	inline Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF ** get_address_of__grid_8() { return &____grid_8; }
	inline void set__grid_8(Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF * value)
	{
		____grid_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____grid_8), (void*)value);
	}

	inline static int32_t get_offset_of__nextStep_9() { return static_cast<int32_t>(offsetof(AutomataTest_t1971FB5D57493F0FC5495020EAAB1392EF69D5EC, ____nextStep_9)); }
	inline float get__nextStep_9() const { return ____nextStep_9; }
	inline float* get_address_of__nextStep_9() { return &____nextStep_9; }
	inline void set__nextStep_9(float value)
	{
		____nextStep_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshal_pinvoke(const MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F& unmarshaled, MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshal_pinvoke_back(const MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshaled_pinvoke& marshaled, MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F& unmarshaled);
IL2CPP_EXTERN_C void MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshal_pinvoke_cleanup(MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshaled_pinvoke& marshaled);

// System.Void Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m45871E99228D0D1472FE12292CCABAFF9C203A03_gshared (NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<Unity.Mathematics.Random>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m0352506052E097EFF816B6AB3AA235CBA57C071B_gshared (NativeArray_1_t2C7E119FB1FEF352D407528DF0265179740FE3E8 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<Devcon.CellularAutomata.GridBuildJob>(!!0,System.Int32,System.Int32,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobParallelForExtensions_Schedule_TisGridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E_mE8F4E901D2F22714396CEB73EE48B1B972BFC183_gshared (GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E  ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn3, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell>::CopyTo(Unity.Collections.NativeArray`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_CopyTo_mD8E01A9987021BE63732C34471CA1AD9D3BF43A5_gshared (NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___array0, const RuntimeMethod* method);
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<Devcon.CellularAutomata.GridStepJob>(!!0,System.Int32,System.Int32,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobParallelForExtensions_Schedule_TisGridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9_mE9CB82392FC0B3001E2A9C2B4C93410C044A30FD_gshared (GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9  ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn3, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<float4>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mC63D537E914104DE958E57B8AE27B3DBF44B90BD_gshared (NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<Devcon.CellularAutomata.GridUpdateTextureJob>(!!0,System.Int32,System.Int32,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobParallelForExtensions_Schedule_TisGridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB_m8B1F404DA653E3C21D23D682B5D02255DCC4C1EA_gshared (GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB  ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixelData<float4>(Unity.Collections.NativeArray`1<!!0>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixelData_Tisfloat4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541_m9DB20F1F3F14D103E3DE941DD5FC68CF7AD534B9_gshared (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6  ___data0, int32_t ___mipLevel1, int32_t ___sourceDataStartIndex2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<float4>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m1898490F57EF28C43BE7C2EBF26A89D0E07AD378_gshared (NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mC60A11143F8C0ACB8B65FEDAE62F3467BE4E75A6_gshared (NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Repeat<System.Object>(!!0,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Repeat_TisRuntimeObject_m89D06EE3889C8176F1FFA04D4BD4CFA37470C2E0_gshared (RuntimeObject * ___element0, int32_t ___count1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Char>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m890836F13C38A627BC9F35AD7E6EF745C5D3E843_gshared (Func_2_t2D70A1E83FE3D8E90E0C5F0081A00A06BE52061A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Char>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m562D112C67FC189E62AB62016DD11C82A90947C9_gshared (RuntimeObject* ___source0, Func_2_t2D70A1E83FE3D8E90E0C5F0081A00A06BE52061A * ___selector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Char>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* Enumerable_ToArray_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mB3C36D852FB5E2CDF51487D157540BFB3F4CBE94_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<MonitorInfo>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisMonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_mD5C70A1F421AF8A282748E776317ACA01BF096B3_gshared (MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F  ___structure0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Void Devcon.CellularAutomata.Grid::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid__ctor_mCB36DFD3A499F250ECBFDCB52959D803AAFF5015 (Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m5345ECFA25B7AC99D6D4223DA23BB9FB991B7193 (int32_t ___key0, const RuntimeMethod* method);
// System.Void AutomataTest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutomataTest_Reset_mB64224E9BD8835598CA85172554949E5C0F23276 (AutomataTest_t1971FB5D57493F0FC5495020EAAB1392EF69D5EC * __this, const RuntimeMethod* method);
// System.Void Devcon.CellularAutomata.Grid::Step()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_Step_m8C474EFA70BBCAC3EEC9366E870EEBF8A50A1564 (Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF * __this, const RuntimeMethod* method);
// System.Void AutomataTest::ApplyTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutomataTest_ApplyTexture_m7DF07F06493E625A07CE8863EBBC681C2D4149F6 (AutomataTest_t1971FB5D57493F0FC5495020EAAB1392EF69D5EC * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D Devcon.CellularAutomata.Grid::GetTexture()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * Grid_GetTexture_m378C6ABACF8901E6F67DD5CA1EF0A292EC0E3B1B_inline (Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * Sprite_Create_m84A724DB0F0D73AEBE5296B4324D61EBCA72A843 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___texture0, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___rect1, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___pivot2, float ___pixelsPerUnit3, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m9F5C8B2007AA03FAB66F0CB61260349DF1E28611 (SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * __this, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___value0, const RuntimeMethod* method);
// System.Void Devcon.CellularAutomata.Grid::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_Dispose_m44C933DB1BDBEB6F67755A573441D63197F6E24A (Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF * __this, const RuntimeMethod* method);
// System.Void Devcon.CellularAutomata.Grid::Build(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_Build_mEFEF960E58CCDBCFBAD789E9F933336FA540A45A (Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method);
// System.Boolean System.Single::TryParse(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_m548E9EC17193999C07717FECFAD0A907980D566C (String_t* ___s0, float* ___result1, const RuntimeMethod* method);
// System.Boolean System.Boolean::TryParse(System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_TryParse_m5EA8C5E47A3BF0223FD368503B36206256937A61 (String_t* ___value0, bool* ___result1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Devcon.CellularAutomata.Cell::.ctor(System.Int32,System.Boolean,System.Boolean,System.Boolean,float4,System.Single,Unity.Mathematics.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell__ctor_m799E45F018362DA5EAE1EDB9888F323476D57561 (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, int32_t ___index0, bool ___active1, bool ___alive2, bool ___consumable3, float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  ___color4, float ___magnitude5, Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69  ___random6, const RuntimeMethod* method);
// System.Void Devcon.CellularAutomata.Cell::HungerStage(Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_HungerStage_mDAAFD06BB17B033895AD80F351A11AEDC0E3AB7C (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells0, const RuntimeMethod* method);
// System.Void Devcon.CellularAutomata.Cell::MoveStage(Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_MoveStage_mF389571F21670F1673F984C395121C51A2EA3C86 (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells0, const RuntimeMethod* method);
// System.Void Devcon.CellularAutomata.Cell::Step(Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_Step_mE52FC12479CC08C7966A3D213F26B7A5D2FC71E8 (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells0, const RuntimeMethod* method);
// UnityEngine.Vector2Int UnityEngine.Vector2Int::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  Vector2Int_get_left_m54F59A8F139FB65663B816D44B81E4E9BAB23AF1 (const RuntimeMethod* method);
// Devcon.CellularAutomata.Cell Devcon.CellularAutomata.Cell::GetAdjacentCell(Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell>,UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  Cell_GetAdjacentCell_mB517B66D1F6206F4DB292C3EBFE1726EA23E89B3 (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells0, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___direction1, const RuntimeMethod* method);
// System.Boolean Devcon.CellularAutomata.Cell::CanEat(Devcon.CellularAutomata.Cell)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cell_CanEat_m5D89B3763C791087A880BF3A18C5254400A43447 (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  ___prey0, const RuntimeMethod* method);
// System.Void Devcon.CellularAutomata.Cell::Consume(Devcon.CellularAutomata.Cell,Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_Consume_mB8AEE5C552DA58F62F901432F50F67FA850BEBDB (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  ___prey0, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells1, const RuntimeMethod* method);
// UnityEngine.Vector2Int UnityEngine.Vector2Int::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  Vector2Int_get_right_mEA3F63567CECEAF2E6125067537391FA90234D8C (const RuntimeMethod* method);
// UnityEngine.Vector2Int UnityEngine.Vector2Int::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  Vector2Int_get_up_mBE4E89A7E0855BA45EAAF68328DBAE3AB66A919E (const RuntimeMethod* method);
// UnityEngine.Vector2Int UnityEngine.Vector2Int::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  Vector2Int_get_down_m069A6FF6C185B5531DFA15CAF675DD7E1BF884A7 (const RuntimeMethod* method);
// System.Single Unity.Mathematics.Random::NextFloat(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float Random_NextFloat_m5E8992E408E68A861E8B651D4B2F5578FFF1EA2B_inline (Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * __this, float ___max0, const RuntimeMethod* method);
// System.Void Devcon.CellularAutomata.Cell::SetCell(Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell>,System.Int32,Devcon.CellularAutomata.Cell)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_SetCell_mDCB5B944309CAA9AA5170D4E77CCE11EECC56DDA (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells0, int32_t ___index1, Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  ___cell2, const RuntimeMethod* method);
// System.Int32 Devcon.CellularAutomata.Cell::GetIndex()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Cell_GetIndex_m8050DC9D3D622E3DE900647F6112C4A286EB4E1B_inline (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, const RuntimeMethod* method);
// float4 Devcon.CellularAutomata.Cell::GetColor()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  Cell_GetColor_mDBC49FA6757F5A1A7D6E4DF5DE29E44FA8304017_inline (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, const RuntimeMethod* method);
// float4 float4::Lerp(float4,float4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  float4_Lerp_mA73F5BCA6ED6AC60CD18FBE4BDABC09D25AAE0AF (float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  ___a0, float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void Devcon.CellularAutomata.Cell::SetColor(float4)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cell_SetColor_m223464AF8341F7533CFD99EAAA73D2B81611F283_inline (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  ___color0, const RuntimeMethod* method);
// System.Void Devcon.CellularAutomata.Cell::BlendColor(Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell>,UnityEngine.Vector2Int,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_BlendColor_m41D3FC10E90C756035D97517FB30B479EE6F72E1 (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells0, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___dir1, float ___factor2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_m300C7C05CD66D24EE62D91CDC0C557A6C0ABF25E (Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m0D6E131AB5FA4AD532DEC377F981AADA189E680B (Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * __this, const RuntimeMethod* method);
// System.Int32 Devcon.CellularAutomata.Cell::GetProjectedIndex(Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell>,UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cell_GetProjectedIndex_m1C74D32C8168507276233826D1DA4949EC902E22 (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells0, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___direction1, const RuntimeMethod* method);
// System.Void Devcon.CellularAutomata.Cell::SetAdjacentCell(Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell>,UnityEngine.Vector2Int,Devcon.CellularAutomata.Cell&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_SetAdjacentCell_m155BFF687548EA8F7875A91EC5DCDCEA0A06C3ED (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells0, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___direction1, Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * ___cell2, const RuntimeMethod* method);
// System.Void Devcon.CellularAutomata.Cell::SetActive(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cell_SetActive_m9B3C57C88EAA13271A4C5689B81D04058A24B50F_inline (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, bool ___active0, const RuntimeMethod* method);
// System.Boolean Devcon.CellularAutomata.Cell::GetActive()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Cell_GetActive_mA9B97016403C5407073587691EF7D45CD9903582_inline (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, const RuntimeMethod* method);
// System.Void float4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void float4__ctor_mCF6AABE18C99CF91EC51BC92B6BC37BBFED0A2EC (float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Int32 MathUtil::NearestPowerOf2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MathUtil_NearestPowerOf2_m63C0714401F49BEF81DC639A2D06A5054C06FE78 (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mB9AC927A527EFE95771B9B438E2CFB9EDA84AF01 (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m45871E99228D0D1472FE12292CCABAFF9C203A03 (NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m45871E99228D0D1472FE12292CCABAFF9C203A03_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Devcon.CellularAutomata.Grid::BuildCells()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_BuildCells_m0C893084E257962B24AF74138F76E490B63D07C4 (Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF * __this, const RuntimeMethod* method);
// System.Void Devcon.CellularAutomata.Grid::UpdateTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_UpdateTexture_mB5F5B53D0DA0FB59ADD7E8A974794238301713A1 (Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<Unity.Mathematics.Random>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m0352506052E097EFF816B6AB3AA235CBA57C071B (NativeArray_1_t2C7E119FB1FEF352D407528DF0265179740FE3E8 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2C7E119FB1FEF352D407528DF0265179740FE3E8 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m0352506052E097EFF816B6AB3AA235CBA57C071B_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384 (float ___min0, float ___max1, const RuntimeMethod* method);
// System.Void Unity.Mathematics.Random::.ctor(System.UInt32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Random__ctor_mB8F3103AC2FE6457AFCAE458110E96E4D7B8166A_inline (Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * __this, uint32_t ___seed0, const RuntimeMethod* method);
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<Devcon.CellularAutomata.GridBuildJob>(!!0,System.Int32,System.Int32,Unity.Jobs.JobHandle)
inline JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobParallelForExtensions_Schedule_TisGridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E_mE8F4E901D2F22714396CEB73EE48B1B972BFC183 (GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E  ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn3, const RuntimeMethod* method)
{
	return ((  JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  (*) (GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E , int32_t, int32_t, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 , const RuntimeMethod*))IJobParallelForExtensions_Schedule_TisGridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E_mE8F4E901D2F22714396CEB73EE48B1B972BFC183_gshared)(___jobData0, ___arrayLength1, ___innerloopBatchCount2, ___dependsOn3, method);
}
// System.Void Unity.Jobs.JobHandle::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobHandle_Complete_m5EFD637001D6A9E0528E60C294FCA5354FD1E797 (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell>::CopyTo(Unity.Collections.NativeArray`1<!0>)
inline void NativeArray_1_CopyTo_mD8E01A9987021BE63732C34471CA1AD9D3BF43A5 (NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___array0, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B *, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B , const RuntimeMethod*))NativeArray_1_CopyTo_mD8E01A9987021BE63732C34471CA1AD9D3BF43A5_gshared)(__this, ___array0, method);
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<Devcon.CellularAutomata.GridStepJob>(!!0,System.Int32,System.Int32,Unity.Jobs.JobHandle)
inline JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobParallelForExtensions_Schedule_TisGridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9_mE9CB82392FC0B3001E2A9C2B4C93410C044A30FD (GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9  ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn3, const RuntimeMethod* method)
{
	return ((  JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  (*) (GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9 , int32_t, int32_t, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 , const RuntimeMethod*))IJobParallelForExtensions_Schedule_TisGridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9_mE9CB82392FC0B3001E2A9C2B4C93410C044A30FD_gshared)(___jobData0, ___arrayLength1, ___innerloopBatchCount2, ___dependsOn3, method);
}
// System.Void Unity.Collections.NativeArray`1<float4>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mC63D537E914104DE958E57B8AE27B3DBF44B90BD (NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mC63D537E914104DE958E57B8AE27B3DBF44B90BD_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<Devcon.CellularAutomata.GridUpdateTextureJob>(!!0,System.Int32,System.Int32,Unity.Jobs.JobHandle)
inline JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobParallelForExtensions_Schedule_TisGridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB_m8B1F404DA653E3C21D23D682B5D02255DCC4C1EA (GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB  ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn3, const RuntimeMethod* method)
{
	return ((  JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  (*) (GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB , int32_t, int32_t, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 , const RuntimeMethod*))IJobParallelForExtensions_Schedule_TisGridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB_m8B1F404DA653E3C21D23D682B5D02255DCC4C1EA_gshared)(___jobData0, ___arrayLength1, ___innerloopBatchCount2, ___dependsOn3, method);
}
// System.Void UnityEngine.Texture2D::SetPixelData<float4>(Unity.Collections.NativeArray`1<!!0>,System.Int32,System.Int32)
inline void Texture2D_SetPixelData_Tisfloat4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541_m9DB20F1F3F14D103E3DE941DD5FC68CF7AD534B9 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6  ___data0, int32_t ___mipLevel1, int32_t ___sourceDataStartIndex2, const RuntimeMethod* method)
{
	((  void (*) (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *, NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6 , int32_t, int32_t, const RuntimeMethod*))Texture2D_SetPixelData_Tisfloat4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541_m9DB20F1F3F14D103E3DE941DD5FC68CF7AD534B9_gshared)(__this, ___data0, ___mipLevel1, ___sourceDataStartIndex2, method);
}
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<float4>::Dispose()
inline void NativeArray_1_Dispose_m1898490F57EF28C43BE7C2EBF26A89D0E07AD378 (NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6 *, const RuntimeMethod*))NativeArray_1_Dispose_m1898490F57EF28C43BE7C2EBF26A89D0E07AD378_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell>::Dispose()
inline void NativeArray_1_Dispose_mC60A11143F8C0ACB8B65FEDAE62F3467BE4E75A6 (NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B *, const RuntimeMethod*))NativeArray_1_Dispose_mC60A11143F8C0ACB8B65FEDAE62F3467BE4E75A6_gshared)(__this, method);
}
// System.Single Devcon.CellularAutomata.GridBuildJob::NextFloat(Unity.Mathematics.Random&)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR float GridBuildJob_NextFloat_mFDEE80CB59AE18AED96D25DB28846787AA740182 (GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E * IL2CPP_PARAMETER_RESTRICT __this, Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * ___rand0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369 (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method);
// float4 float4::FromColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  float4_FromColor_mE7EC8DAC13E4EF01C495A43CBB019BFD9E11D4EB (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color0, const RuntimeMethod* method);
// System.Void Devcon.CellularAutomata.GridBuildJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GridBuildJob_Execute_m2F3F0210141F22A1F2FA347474508F05B8B467D4 (GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method);
// System.Single Unity.Mathematics.Random::NextFloat()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float Random_NextFloat_mBD6C6987D378294DD03888687B32661795AB7823_inline (Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * __this, const RuntimeMethod* method);
// System.Void Devcon.CellularAutomata.GridStepJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GridStepJob_Execute_m55A3C798EDC14CE2F17B9E9DD34490821B373729 (GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9 * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method);
// System.Void Devcon.CellularAutomata.GridUpdateTextureJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GridUpdateTextureJob_Execute_mDCF820EC819AB872897A4B9B8627325AE9900317 (GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Repeat<System.String>(!!0,System.Int32)
inline RuntimeObject* Enumerable_Repeat_TisString_t_m28B564F333BC53D2AC55BD715F5E743BDBD29826 (String_t* ___element0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (String_t*, int32_t, const RuntimeMethod*))Enumerable_Repeat_TisRuntimeObject_m89D06EE3889C8176F1FFA04D4BD4CFA37470C2E0_gshared)(___element0, ___count1, method);
}
// System.Void System.Func`2<System.String,System.Char>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m122D0ED731C0D00BA65EF8504F8D6C11902915CC (Func_2_tC5156A247A17ABDEF0A9166BF03FCCF704BD74CF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC5156A247A17ABDEF0A9166BF03FCCF704BD74CF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m890836F13C38A627BC9F35AD7E6EF745C5D3E843_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.String,System.Char>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisString_t_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m645A87C7C54827207E37B5AE7EEC46F8EDA73375 (RuntimeObject* ___source0, Func_2_tC5156A247A17ABDEF0A9166BF03FCCF704BD74CF * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tC5156A247A17ABDEF0A9166BF03FCCF704BD74CF *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m562D112C67FC189E62AB62016DD11C82A90947C9_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.Char>(System.Collections.Generic.IEnumerable`1<!!0>)
inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* Enumerable_ToArray_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mB3C36D852FB5E2CDF51487D157540BFB3F4CBE94 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mB3C36D852FB5E2CDF51487D157540BFB3F4CBE94_gshared)(___source0, method);
}
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m394C06654854ADD4C51FF957BE0CC72EF52BAA96 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___val0, const RuntimeMethod* method);
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mCD4B6E9DFD27A19F52FA441CD8CAEB687A9DD2F2 (Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * __this, const RuntimeMethod* method);
// System.Void HashUtil/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0725774A4DC25931BEB15AA9D69D87ED1AB2F6D9 (U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_m9CD842663B1A2FA4C66EEFFC6F0D705B40BE46F1 (double ___x0, double ___y1, const RuntimeMethod* method);
// System.Void MonitorUtil/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mC364DCE0BC9E37B60D203617C8290A100963FE84 (U3CU3Ec__DisplayClass6_0_tA6DFADE625C1338F8054C2248649C735EFDC76ED * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<DisplayInfo>::.ctor()
inline void List_1__ctor_mF8C6F9270595DBC319F3D1CB6B5DDBD304F1DDBB (List_1_t8918F1EE9925B17AF507E2E2DF245FEF3AD666DF * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8918F1EE9925B17AF507E2E2DF245FEF3AD666DF *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void MonitorUtil/MonitorEnumDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorEnumDelegate__ctor_mE75FCA9AB96B8BC768310C0F6C1A5DE36B5969AC (MonitorEnumDelegate_tC1B7E51E6D53D1DA62AC34A1B6E21E17D605BB11 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean MonitorUtil::EnumDisplayMonitors(System.IntPtr,System.IntPtr,MonitorUtil/MonitorEnumDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonitorUtil_EnumDisplayMonitors_mAEB1433250AE64F3D03AE5C0FB503D0DC9F183A0 (intptr_t ___hdc0, intptr_t ___lprcClip1, MonitorEnumDelegate_tC1B7E51E6D53D1DA62AC34A1B6E21E17D605BB11 * ___lpfnEnum2, intptr_t ___dwData3, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m1CBBA4989F15BA668EE24950D3C6B56E2ED20BD6 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150 (const RuntimeMethod* method);
// System.Void MonitorUtil::MoveWindow(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorUtil_MoveWindow_m153ACF99B7D1CF5EF7A2044B46227CBAC8794C6D (int32_t ___left0, int32_t ___top1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method);
// System.Int32 MonitorUtil::GetForegroundWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MonitorUtil_GetForegroundWindow_mCC1EAFD2553F367912B8AEC755B721DDBFAB7424 (const RuntimeMethod* method);
// System.Void MonitorUtil::SetScreenCenter(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorUtil_SetScreenCenter_m5ACB6C1034D3C54A3FD8A7BC7F6B3EC348AB768C (float ___x0, float ___y1, const RuntimeMethod* method);
// System.Int32 MonitorUtil::MoveWindow(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MonitorUtil_MoveWindow_m26D9D976E1FA4BB50E8026086DC33F582944E9B3 (int32_t ___hwnd0, int32_t ___x1, int32_t ___y2, int32_t ___nWidth3, int32_t ___nHeight4, int32_t ___bRepaint5, const RuntimeMethod* method);
// System.Boolean MonitorUtil::ShowWindowAsync(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonitorUtil_ShowWindowAsync_m3CE6B4C5E55EC9C66E089C4FC2E438BB90D92C9B (int32_t ___hWnd0, int32_t ___nCmdShow1, const RuntimeMethod* method);
// System.Void MonitorUtil::set_ScreenCenter(UnityEngine.Vector2)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MonitorUtil_set_ScreenCenter_mF7D96455C1FFC00065C6F32BC41F3A09EC2D742C_inline (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<MonitorInfo>(!!0)
inline int32_t Marshal_SizeOf_TisMonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_mD5C70A1F421AF8A282748E776317ACA01BF096B3 (MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F  ___structure0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F , const RuntimeMethod*))Marshal_SizeOf_TisMonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_mD5C70A1F421AF8A282748E776317ACA01BF096B3_gshared)(___structure0, method);
}
// System.Boolean MonitorUtil::GetMonitorInfo(System.IntPtr,MonitorInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonitorUtil_GetMonitorInfo_mAF902AA334CBB9B598BBDDFA8EE41C11C9814C9D (intptr_t ___hmon0, MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F * ___monitorinfo1, const RuntimeMethod* method);
// System.Void DisplayInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayInfo__ctor_mEAECF0B1CB5C5D47FADA81B8EF86D7B13FC3EFBC (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, const RuntimeMethod* method);
// System.Void DisplayInfo::set_ScreenWidth(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DisplayInfo_set_ScreenWidth_mAB796DB9F1E3C3699FD32F60443727194B77A9E8_inline (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void DisplayInfo::set_ScreenHeight(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DisplayInfo_set_ScreenHeight_mE0553AD7F25C177485DDB89C0A1FF4C1C89027D9_inline (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 DisplayInfo::get_ScreenWidth()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t DisplayInfo_get_ScreenWidth_mE37EC410BE19E8004E6BEF6648CA4CB845CE9018_inline (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, const RuntimeMethod* method);
// System.Int32 DisplayInfo::get_ScreenHeight()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t DisplayInfo_get_ScreenHeight_m35AE76661CF36F9D6B55525E17FBDE77BF013793_inline (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, const RuntimeMethod* method);
// System.Void DisplayInfo::set_MonitorArea(UnityEngine.Rect)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DisplayInfo_set_MonitorArea_mE41BE6541317D1170D203FD8F9BEDF357C31F5B3_inline (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___value0, const RuntimeMethod* method);
// System.Void DisplayInfo::set_MonitorTop(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DisplayInfo_set_MonitorTop_mE3174AD0E5FB8A7A995C8E504D137627F9E6B7F5_inline (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void DisplayInfo::set_MonitorLeft(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DisplayInfo_set_MonitorLeft_m059607F87012B9D3B2C4FB7DE65F92D07902F1EE_inline (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String System.UInt32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m7D8A934AF1D74C5C8194D1556AA71BBA0D4600F2 (uint32_t* __this, const RuntimeMethod* method);
// System.Void DisplayInfo::set_Availability(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DisplayInfo_set_Availability_m3E4BED1717B0F6FB41F39ABE897BCB17FE6EC012_inline (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void DisplayInfo::set_DeviceName(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DisplayInfo_set_DeviceName_m8746C0C457BEB2E2FA98EFAAAACCC2A67A08ABCF_inline (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String MonitorUtil::QueryDisplaysFriendlyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MonitorUtil_QueryDisplaysFriendlyName_m699EAE11D352C615A7B82BD715BB1711ABDD60AA (String_t* ___DeviceName0, const RuntimeMethod* method);
// System.Void DisplayInfo::set_FriendlyName(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DisplayInfo_set_FriendlyName_m2BE55A35FC38AEEDDB44ABF2A7CD8CE497AFCDF0_inline (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String MonitorUtil::QueryDisplaysVendorName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MonitorUtil_QueryDisplaysVendorName_m83B270AE0E9B9243CD31D05D848D07F29823C4DC (String_t* ___DeviceName0, const RuntimeMethod* method);
// System.Void DisplayInfo::set_VendorsName(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DisplayInfo_set_VendorsName_m810EB7D0FFA5F8D5715EB444AACEDE9CC0D79A70_inline (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<DisplayInfo>::Add(!0)
inline void List_1_Add_m795D7BA059E917E170A352E685D18A9E9C4942F6 (List_1_t8918F1EE9925B17AF507E2E2DF245FEF3AD666DF * __this, DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8918F1EE9925B17AF507E2E2DF245FEF3AD666DF *, DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Color float4::GetColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  float4_GetColor_m3004260B451BBEADD6A0FAD15A367EF33CA760F3 (float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541 * __this, const RuntimeMethod* method);
// System.UInt32 Unity.Mathematics.Random::NextState()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t Random_NextState_m85CB9C212F8A7D1B3019410DA37BF6B19527825B_inline (Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * __this, const RuntimeMethod* method);
// System.Single Unity.Mathematics.math::asfloat(System.UInt32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float math_asfloat_m82860A497358EFF17DCA50CFE6E2494D4296C0DF_inline (uint32_t ___x0, const RuntimeMethod* method);
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
// System.Void AutomataTest::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutomataTest_OnEnable_m23FA3B1EA116998EEB26AA83AF18B36A1B343A1B (AutomataTest_t1971FB5D57493F0FC5495020EAAB1392EF69D5EC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AutomataTest_OnEnable_m23FA3B1EA116998EEB26AA83AF18B36A1B343A1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _grid = new Grid(GRID_SIZE);
		Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF * L_0 = (Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF *)il2cpp_codegen_object_new(Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF_il2cpp_TypeInfo_var);
		Grid__ctor_mCB36DFD3A499F250ECBFDCB52959D803AAFF5015(L_0, ((int32_t)1024), /*hidden argument*/NULL);
		__this->set__grid_8(L_0);
		// _nextStep = Time.time + STEP_INTERVAL;
		float L_1 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		__this->set__nextStep_9(((float)il2cpp_codegen_add((float)L_1, (float)(0.05f))));
		// }
		return;
	}
}
// System.Void AutomataTest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutomataTest_Update_mA3B430DBE515F2CE84F74522803002BA4F6B89EE (AutomataTest_t1971FB5D57493F0FC5495020EAAB1392EF69D5EC * __this, const RuntimeMethod* method)
{
	{
		// if(Input.GetKeyUp(KeyCode.Space))
		bool L_0 = Input_GetKeyUp_m5345ECFA25B7AC99D6D4223DA23BB9FB991B7193(((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Reset();
		AutomataTest_Reset_mB64224E9BD8835598CA85172554949E5C0F23276(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0010:
	{
		// if (Time.time < _nextStep)
		float L_1 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_2 = __this->get__nextStep_9();
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		// return;
		return;
	}

IL_001e:
	{
		// _grid.Step();
		Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF * L_3 = __this->get__grid_8();
		NullCheck(L_3);
		Grid_Step_m8C474EFA70BBCAC3EEC9366E870EEBF8A50A1564(L_3, /*hidden argument*/NULL);
		// ApplyTexture();
		AutomataTest_ApplyTexture_m7DF07F06493E625A07CE8863EBBC681C2D4149F6(__this, /*hidden argument*/NULL);
		// _nextStep = Time.time + STEP_INTERVAL;
		float L_4 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		__this->set__nextStep_9(((float)il2cpp_codegen_add((float)L_4, (float)(0.05f))));
		// }
		return;
	}
}
// System.Void AutomataTest::ApplyTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutomataTest_ApplyTexture_m7DF07F06493E625A07CE8863EBBC681C2D4149F6 (AutomataTest_t1971FB5D57493F0FC5495020EAAB1392EF69D5EC * __this, const RuntimeMethod* method)
{
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * V_0 = NULL;
	{
		// Texture2D texture = _grid.GetTexture();
		Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF * L_0 = __this->get__grid_8();
		NullCheck(L_0);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_1 = Grid_GetTexture_m378C6ABACF8901E6F67DD5CA1EF0A292EC0E3B1B_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// _sprite = Sprite.Create(texture, new Rect(0.0f, 0.0f, texture.width, texture.height), new Vector2(0.5f, 0.5f), 64);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_2 = V_0;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_7), (0.0f), (0.0f), (((float)((float)L_4))), (((float)((float)L_6))), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_8), (0.5f), (0.5f), /*hidden argument*/NULL);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_9 = Sprite_Create_m84A724DB0F0D73AEBE5296B4324D61EBCA72A843(L_2, L_7, L_8, (64.0f), /*hidden argument*/NULL);
		__this->set__sprite_7(L_9);
		// _spriteRenderer.sprite = _sprite;
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_10 = __this->get__spriteRenderer_6();
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_11 = __this->get__sprite_7();
		NullCheck(L_10);
		SpriteRenderer_set_sprite_m9F5C8B2007AA03FAB66F0CB61260349DF1E28611(L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AutomataTest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutomataTest_Reset_mB64224E9BD8835598CA85172554949E5C0F23276 (AutomataTest_t1971FB5D57493F0FC5495020EAAB1392EF69D5EC * __this, const RuntimeMethod* method)
{
	{
		// _grid.Dispose();
		Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF * L_0 = __this->get__grid_8();
		NullCheck(L_0);
		Grid_Dispose_m44C933DB1BDBEB6F67755A573441D63197F6E24A(L_0, /*hidden argument*/NULL);
		// _grid.Build(GRID_SIZE);
		Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF * L_1 = __this->get__grid_8();
		NullCheck(L_1);
		Grid_Build_mEFEF960E58CCDBCFBAD789E9F933336FA540A45A(L_1, ((int32_t)1024), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AutomataTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutomataTest__ctor_m34D45810614178817A301C2422C37D239C0AAF57 (AutomataTest_t1971FB5D57493F0FC5495020EAAB1392EF69D5EC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
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
// System.Int32 DataUtil::ParseInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataUtil_ParseInt_m4D54D24F129D9299356D93FDA09ECDDDB4B79757 (String_t* ___Value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int.TryParse(Value, out Out);
		String_t* L_0 = ___Value0;
		Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00(L_0, (int32_t*)(&V_0), /*hidden argument*/NULL);
		// return Out;
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Single DataUtil::ParseFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DataUtil_ParseFloat_m5E7F6B91DEEF4469B9B4505229E1876EE5564EE1 (String_t* ___Value0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float.TryParse(Value, out Out);
		String_t* L_0 = ___Value0;
		Single_TryParse_m548E9EC17193999C07717FECFAD0A907980D566C(L_0, (float*)(&V_0), /*hidden argument*/NULL);
		// return Out;
		float L_1 = V_0;
		return L_1;
	}
}
// System.Boolean DataUtil::ParseBool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataUtil_ParseBool_m7C37114659CADA63E1377031D75E90346E95CCB3 (String_t* ___Value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataUtil_ParseBool_m7C37114659CADA63E1377031D75E90346E95CCB3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// bool.TryParse(Value, out Out);
		String_t* L_0 = ___Value0;
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var);
		Boolean_TryParse_m5EA8C5E47A3BF0223FD368503B36206256937A61(L_0, (bool*)(&V_0), /*hidden argument*/NULL);
		// return Out;
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void DataUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataUtil__ctor_mC5D2560509E68845B68BEBD1E843A8726EEC3385 (DataUtil_t4CBC8B1CF72F3EECCB057A85504D13A0249E362E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
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
// Conversion methods for marshalling of: Devcon.CellularAutomata.Cell
IL2CPP_EXTERN_C void Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE_marshal_pinvoke(const Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE& unmarshaled, Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE_marshaled_pinvoke& marshaled)
{
	marshaled.____index_1 = unmarshaled.get__index_1();
	marshaled.____organism_2 = unmarshaled.get__organism_2();
	marshaled.____active_3 = static_cast<int32_t>(unmarshaled.get__active_3());
	marshaled.____alive_4 = static_cast<int32_t>(unmarshaled.get__alive_4());
	marshaled.____consumable_5 = static_cast<int32_t>(unmarshaled.get__consumable_5());
	marshaled.____color_6 = unmarshaled.get__color_6();
	marshaled.____magnitude_7 = unmarshaled.get__magnitude_7();
	marshaled.____random_8 = unmarshaled.get__random_8();
}
IL2CPP_EXTERN_C void Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE_marshal_pinvoke_back(const Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE_marshaled_pinvoke& marshaled, Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE& unmarshaled)
{
	int32_t unmarshaled__index_temp_0 = 0;
	unmarshaled__index_temp_0 = marshaled.____index_1;
	unmarshaled.set__index_1(unmarshaled__index_temp_0);
	int32_t unmarshaled__organism_temp_1 = 0;
	unmarshaled__organism_temp_1 = marshaled.____organism_2;
	unmarshaled.set__organism_2(unmarshaled__organism_temp_1);
	bool unmarshaled__active_temp_2 = false;
	unmarshaled__active_temp_2 = static_cast<bool>(marshaled.____active_3);
	unmarshaled.set__active_3(unmarshaled__active_temp_2);
	bool unmarshaled__alive_temp_3 = false;
	unmarshaled__alive_temp_3 = static_cast<bool>(marshaled.____alive_4);
	unmarshaled.set__alive_4(unmarshaled__alive_temp_3);
	bool unmarshaled__consumable_temp_4 = false;
	unmarshaled__consumable_temp_4 = static_cast<bool>(marshaled.____consumable_5);
	unmarshaled.set__consumable_5(unmarshaled__consumable_temp_4);
	float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  unmarshaled__color_temp_5;
	memset((&unmarshaled__color_temp_5), 0, sizeof(unmarshaled__color_temp_5));
	unmarshaled__color_temp_5 = marshaled.____color_6;
	unmarshaled.set__color_6(unmarshaled__color_temp_5);
	float unmarshaled__magnitude_temp_6 = 0.0f;
	unmarshaled__magnitude_temp_6 = marshaled.____magnitude_7;
	unmarshaled.set__magnitude_7(unmarshaled__magnitude_temp_6);
	Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69  unmarshaled__random_temp_7;
	memset((&unmarshaled__random_temp_7), 0, sizeof(unmarshaled__random_temp_7));
	unmarshaled__random_temp_7 = marshaled.____random_8;
	unmarshaled.set__random_8(unmarshaled__random_temp_7);
}
// Conversion method for clean up from marshalling of: Devcon.CellularAutomata.Cell
IL2CPP_EXTERN_C void Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE_marshal_pinvoke_cleanup(Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Devcon.CellularAutomata.Cell
IL2CPP_EXTERN_C void Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE_marshal_com(const Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE& unmarshaled, Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE_marshaled_com& marshaled)
{
	marshaled.____index_1 = unmarshaled.get__index_1();
	marshaled.____organism_2 = unmarshaled.get__organism_2();
	marshaled.____active_3 = static_cast<int32_t>(unmarshaled.get__active_3());
	marshaled.____alive_4 = static_cast<int32_t>(unmarshaled.get__alive_4());
	marshaled.____consumable_5 = static_cast<int32_t>(unmarshaled.get__consumable_5());
	marshaled.____color_6 = unmarshaled.get__color_6();
	marshaled.____magnitude_7 = unmarshaled.get__magnitude_7();
	marshaled.____random_8 = unmarshaled.get__random_8();
}
IL2CPP_EXTERN_C void Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE_marshal_com_back(const Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE_marshaled_com& marshaled, Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE& unmarshaled)
{
	int32_t unmarshaled__index_temp_0 = 0;
	unmarshaled__index_temp_0 = marshaled.____index_1;
	unmarshaled.set__index_1(unmarshaled__index_temp_0);
	int32_t unmarshaled__organism_temp_1 = 0;
	unmarshaled__organism_temp_1 = marshaled.____organism_2;
	unmarshaled.set__organism_2(unmarshaled__organism_temp_1);
	bool unmarshaled__active_temp_2 = false;
	unmarshaled__active_temp_2 = static_cast<bool>(marshaled.____active_3);
	unmarshaled.set__active_3(unmarshaled__active_temp_2);
	bool unmarshaled__alive_temp_3 = false;
	unmarshaled__alive_temp_3 = static_cast<bool>(marshaled.____alive_4);
	unmarshaled.set__alive_4(unmarshaled__alive_temp_3);
	bool unmarshaled__consumable_temp_4 = false;
	unmarshaled__consumable_temp_4 = static_cast<bool>(marshaled.____consumable_5);
	unmarshaled.set__consumable_5(unmarshaled__consumable_temp_4);
	float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  unmarshaled__color_temp_5;
	memset((&unmarshaled__color_temp_5), 0, sizeof(unmarshaled__color_temp_5));
	unmarshaled__color_temp_5 = marshaled.____color_6;
	unmarshaled.set__color_6(unmarshaled__color_temp_5);
	float unmarshaled__magnitude_temp_6 = 0.0f;
	unmarshaled__magnitude_temp_6 = marshaled.____magnitude_7;
	unmarshaled.set__magnitude_7(unmarshaled__magnitude_temp_6);
	Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69  unmarshaled__random_temp_7;
	memset((&unmarshaled__random_temp_7), 0, sizeof(unmarshaled__random_temp_7));
	unmarshaled__random_temp_7 = marshaled.____random_8;
	unmarshaled.set__random_8(unmarshaled__random_temp_7);
}
// Conversion method for clean up from marshalling of: Devcon.CellularAutomata.Cell
IL2CPP_EXTERN_C void Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE_marshal_com_cleanup(Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE_marshaled_com& marshaled)
{
}
// System.Void Devcon.CellularAutomata.Cell::.ctor(System.Int32,System.Boolean,System.Boolean,System.Boolean,float4,System.Single,Unity.Mathematics.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell__ctor_m799E45F018362DA5EAE1EDB9888F323476D57561 (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, int32_t ___index0, bool ___active1, bool ___alive2, bool ___consumable3, float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  ___color4, float ___magnitude5, Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69  ___random6, const RuntimeMethod* method)
{
	{
		// _index = index;
		int32_t L_0 = ___index0;
		__this->set__index_1(L_0);
		// _organism = index;
		int32_t L_1 = ___index0;
		__this->set__organism_2(L_1);
		// _active = active;
		bool L_2 = ___active1;
		__this->set__active_3(L_2);
		// _alive = alive;
		bool L_3 = ___alive2;
		__this->set__alive_4(L_3);
		// _consumable = consumable;
		bool L_4 = ___consumable3;
		__this->set__consumable_5(L_4);
		// _color = color;
		float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  L_5 = ___color4;
		__this->set__color_6(L_5);
		// _magnitude = magnitude;
		float L_6 = ___magnitude5;
		__this->set__magnitude_7(L_6);
		// _random = random;
		Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69  L_7 = ___random6;
		__this->set__random_8(L_7);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Cell__ctor_m799E45F018362DA5EAE1EDB9888F323476D57561_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, bool ___active1, bool ___alive2, bool ___consumable3, float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  ___color4, float ___magnitude5, Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69  ___random6, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * _thisAdjusted = reinterpret_cast<Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *>(__this + _offset);
	Cell__ctor_m799E45F018362DA5EAE1EDB9888F323476D57561(_thisAdjusted, ___index0, ___active1, ___alive2, ___consumable3, ___color4, ___magnitude5, ___random6, method);
}
// System.Void Devcon.CellularAutomata.Cell::Step(Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_Step_mE52FC12479CC08C7966A3D213F26B7A5D2FC71E8 (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells0, const RuntimeMethod* method)
{
	{
		// if (_alive)
		bool L_0 = __this->get__alive_4();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// HungerStage(cells);
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  L_1 = ___cells0;
		Cell_HungerStage_mDAAFD06BB17B033895AD80F351A11AEDC0E3AB7C((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *)__this, L_1, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// MoveStage(cells);
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  L_2 = ___cells0;
		Cell_MoveStage_mF389571F21670F1673F984C395121C51A2EA3C86((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *)__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Cell_Step_mE52FC12479CC08C7966A3D213F26B7A5D2FC71E8_AdjustorThunk (RuntimeObject * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * _thisAdjusted = reinterpret_cast<Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *>(__this + _offset);
	Cell_Step_mE52FC12479CC08C7966A3D213F26B7A5D2FC71E8(_thisAdjusted, ___cells0, method);
}
// System.Void Devcon.CellularAutomata.Cell::HungerStage(Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_HungerStage_mDAAFD06BB17B033895AD80F351A11AEDC0E3AB7C (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cell_HungerStage_mDAAFD06BB17B033895AD80F351A11AEDC0E3AB7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2Int direction = Vector2Int.left;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_il2cpp_TypeInfo_var);
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_0 = Vector2Int_get_left_m54F59A8F139FB65663B816D44B81E4E9BAB23AF1(/*hidden argument*/NULL);
		V_0 = L_0;
		// Cell adjacentCell = GetAdjacentCell(cells, direction);
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  L_1 = ___cells0;
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_2 = V_0;
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_3 = Cell_GetAdjacentCell_mB517B66D1F6206F4DB292C3EBFE1726EA23E89B3((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *)__this, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// if (CanEat(adjacentCell))
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_4 = V_1;
		bool L_5 = Cell_CanEat_m5D89B3763C791087A880BF3A18C5254400A43447((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *)__this, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		// Consume(adjacentCell, cells);
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_6 = V_1;
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  L_7 = ___cells0;
		Cell_Consume_mB8AEE5C552DA58F62F901432F50F67FA850BEBDB((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *)__this, L_6, L_7, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0021:
	{
		// direction = Vector2Int.right;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_il2cpp_TypeInfo_var);
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_8 = Vector2Int_get_right_mEA3F63567CECEAF2E6125067537391FA90234D8C(/*hidden argument*/NULL);
		V_0 = L_8;
		// adjacentCell = GetAdjacentCell(cells, direction);
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  L_9 = ___cells0;
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_10 = V_0;
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_11 = Cell_GetAdjacentCell_mB517B66D1F6206F4DB292C3EBFE1726EA23E89B3((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *)__this, L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// if (CanEat(adjacentCell))
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_12 = V_1;
		bool L_13 = Cell_CanEat_m5D89B3763C791087A880BF3A18C5254400A43447((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *)__this, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		// Consume(adjacentCell, cells);
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_14 = V_1;
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  L_15 = ___cells0;
		Cell_Consume_mB8AEE5C552DA58F62F901432F50F67FA850BEBDB((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *)__this, L_14, L_15, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0042:
	{
		// direction = Vector2Int.up;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_il2cpp_TypeInfo_var);
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_16 = Vector2Int_get_up_mBE4E89A7E0855BA45EAAF68328DBAE3AB66A919E(/*hidden argument*/NULL);
		V_0 = L_16;
		// adjacentCell = GetAdjacentCell(cells, direction);
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  L_17 = ___cells0;
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_18 = V_0;
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_19 = Cell_GetAdjacentCell_mB517B66D1F6206F4DB292C3EBFE1726EA23E89B3((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *)__this, L_17, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		// if (CanEat(adjacentCell))
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_20 = V_1;
		bool L_21 = Cell_CanEat_m5D89B3763C791087A880BF3A18C5254400A43447((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *)__this, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0063;
		}
	}
	{
		// Consume(adjacentCell, cells);
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_22 = V_1;
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  L_23 = ___cells0;
		Cell_Consume_mB8AEE5C552DA58F62F901432F50F67FA850BEBDB((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *)__this, L_22, L_23, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0063:
	{
		// direction = Vector2Int.down;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_il2cpp_TypeInfo_var);
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_24 = Vector2Int_get_down_m069A6FF6C185B5531DFA15CAF675DD7E1BF884A7(/*hidden argument*/NULL);
		V_0 = L_24;
		// adjacentCell = GetAdjacentCell(cells, direction);
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  L_25 = ___cells0;
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_26 = V_0;
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_27 = Cell_GetAdjacentCell_mB517B66D1F6206F4DB292C3EBFE1726EA23E89B3((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *)__this, L_25, L_26, /*hidden argument*/NULL);
		V_1 = L_27;
		// if (CanEat(adjacentCell))
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_28 = V_1;
		bool L_29 = Cell_CanEat_m5D89B3763C791087A880BF3A18C5254400A43447((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *)__this, L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0084;
		}
	}
	{
		// Consume(adjacentCell, cells);
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_30 = V_1;
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  L_31 = ___cells0;
		Cell_Consume_mB8AEE5C552DA58F62F901432F50F67FA850BEBDB((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *)__this, L_30, L_31, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0084:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Cell_HungerStage_mDAAFD06BB17B033895AD80F351A11AEDC0E3AB7C_AdjustorThunk (RuntimeObject * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * _thisAdjusted = reinterpret_cast<Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *>(__this + _offset);
	Cell_HungerStage_mDAAFD06BB17B033895AD80F351A11AEDC0E3AB7C(_thisAdjusted, ___cells0, method);
}
// System.Boolean Devcon.CellularAutomata.Cell::CanEat(Devcon.CellularAutomata.Cell)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cell_CanEat_m5D89B3763C791087A880BF3A18C5254400A43447 (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  ___prey0, const RuntimeMethod* method)
{
	{
		// int index = prey._index;
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_0 = ___prey0;
		int32_t L_1 = L_0.get__index_1();
		// if (index > -1 && prey._consumable && prey._organism != _organism && _magnitude > prey._magnitude)
		if ((((int32_t)L_1) <= ((int32_t)(-1))))
		{
			goto IL_002f;
		}
	}
	{
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_2 = ___prey0;
		bool L_3 = L_2.get__consumable_5();
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_4 = ___prey0;
		int32_t L_5 = L_4.get__organism_2();
		int32_t L_6 = __this->get__organism_2();
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_002f;
		}
	}
	{
		float L_7 = __this->get__magnitude_7();
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_8 = ___prey0;
		float L_9 = L_8.get__magnitude_7();
		if ((!(((float)L_7) > ((float)L_9))))
		{
			goto IL_002f;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_002f:
	{
		// return false;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cell_CanEat_m5D89B3763C791087A880BF3A18C5254400A43447_AdjustorThunk (RuntimeObject * __this, Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  ___prey0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * _thisAdjusted = reinterpret_cast<Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *>(__this + _offset);
	return Cell_CanEat_m5D89B3763C791087A880BF3A18C5254400A43447(_thisAdjusted, ___prey0, method);
}
// System.Void Devcon.CellularAutomata.Cell::MoveStage(Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_MoveStage_mF389571F21670F1673F984C395121C51A2EA3C86 (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Cell_MoveStage_mF389571F21670F1673F984C395121C51A2EA3C86_AdjustorThunk (RuntimeObject * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * _thisAdjusted = reinterpret_cast<Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *>(__this + _offset);
	Cell_MoveStage_mF389571F21670F1673F984C395121C51A2EA3C86(_thisAdjusted, ___cells0, method);
}
// System.Void Devcon.CellularAutomata.Cell::Consume(Devcon.CellularAutomata.Cell,Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_Consume_mB8AEE5C552DA58F62F901432F50F67FA850BEBDB (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  ___prey0, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells1, const RuntimeMethod* method)
{
	{
		// prey._organism = _organism;
		int32_t L_0 = __this->get__organism_2();
		(&___prey0)->set__organism_2(L_0);
		// prey._magnitude = _magnitude * 1.0014f + _random.NextFloat(0.05f);
		float L_1 = __this->get__magnitude_7();
		Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * L_2 = __this->get_address_of__random_8();
		float L_3 = Random_NextFloat_m5E8992E408E68A861E8B651D4B2F5578FFF1EA2B_inline((Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 *)L_2, (0.05f), /*hidden argument*/NULL);
		(&___prey0)->set__magnitude_7(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)(1.0014f))), (float)L_3)));
		// prey._color = this._color;
		float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  L_4 = __this->get__color_6();
		(&___prey0)->set__color_6(L_4);
		// prey._alive = true;
		(&___prey0)->set__alive_4((bool)1);
		// SetCell(cells, prey._index, prey);
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  L_5 = ___cells1;
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_6 = ___prey0;
		int32_t L_7 = L_6.get__index_1();
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_8 = ___prey0;
		Cell_SetCell_mDCB5B944309CAA9AA5170D4E77CCE11EECC56DDA((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *)__this, L_5, L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Cell_Consume_mB8AEE5C552DA58F62F901432F50F67FA850BEBDB_AdjustorThunk (RuntimeObject * __this, Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  ___prey0, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * _thisAdjusted = reinterpret_cast<Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *>(__this + _offset);
	Cell_Consume_mB8AEE5C552DA58F62F901432F50F67FA850BEBDB(_thisAdjusted, ___prey0, ___cells1, method);
}
// System.Void Devcon.CellularAutomata.Cell::BlendColor(Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell>,UnityEngine.Vector2Int,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_BlendColor_m41D3FC10E90C756035D97517FB30B479EE6F72E1 (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells0, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___dir1, float ___factor2, const RuntimeMethod* method)
{
	Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Cell adjacentCell = GetAdjacentCell(cells, dir);
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  L_0 = ___cells0;
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_1 = ___dir1;
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_2 = Cell_GetAdjacentCell_mB517B66D1F6206F4DB292C3EBFE1726EA23E89B3((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *)__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// int adjacentIndex = adjacentCell.GetIndex();
		int32_t L_3 = Cell_GetIndex_m8050DC9D3D622E3DE900647F6112C4A286EB4E1B_inline((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_3;
		// if (adjacentIndex != -1 && adjacentCell._active)
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_5 = V_0;
		bool L_6 = L_5.get__active_3();
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		// float4 adjacentColor = float4.Lerp(adjacentCell.GetColor(), _color, factor);
		float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  L_7 = Cell_GetColor_mDBC49FA6757F5A1A7D6E4DF5DE29E44FA8304017_inline((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *)(&V_0), /*hidden argument*/NULL);
		float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  L_8 = __this->get__color_6();
		float L_9 = ___factor2;
		float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  L_10 = float4_Lerp_mA73F5BCA6ED6AC60CD18FBE4BDABC09D25AAE0AF(L_7, L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		// adjacentCell.SetColor(adjacentColor);
		float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  L_11 = V_2;
		Cell_SetColor_m223464AF8341F7533CFD99EAAA73D2B81611F283_inline((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *)(&V_0), L_11, /*hidden argument*/NULL);
		// SetCell(cells, adjacentIndex, adjacentCell);
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  L_12 = ___cells0;
		int32_t L_13 = V_1;
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_14 = V_0;
		Cell_SetCell_mDCB5B944309CAA9AA5170D4E77CCE11EECC56DDA((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *)__this, L_12, L_13, L_14, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Cell_BlendColor_m41D3FC10E90C756035D97517FB30B479EE6F72E1_AdjustorThunk (RuntimeObject * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells0, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___dir1, float ___factor2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * _thisAdjusted = reinterpret_cast<Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *>(__this + _offset);
	Cell_BlendColor_m41D3FC10E90C756035D97517FB30B479EE6F72E1(_thisAdjusted, ___cells0, ___dir1, ___factor2, method);
}
// System.Int32 Devcon.CellularAutomata.Cell::GetProjectedIndex(Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell>,UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cell_GetProjectedIndex_m1C74D32C8168507276233826D1DA4949EC902E22 (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells0, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___direction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cell_GetProjectedIndex_m1C74D32C8168507276233826D1DA4949EC902E22_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// int index = _index;
		int32_t L_0 = __this->get__index_1();
		V_0 = L_0;
		// int length = cells.Length;
		int32_t L_1 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B *)(&___cells0))->___m_Length_1);
		V_1 = L_1;
		// int width = (int)Math.Sqrt(length);
		int32_t L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_3 = sqrt((((double)((double)L_2))));
		V_2 = (((int32_t)((int32_t)L_3)));
		// int x = index % width;
		int32_t L_4 = V_0;
		int32_t L_5 = V_2;
		// int xGoal = x - direction.x;
		int32_t L_6 = Vector2Int_get_x_m300C7C05CD66D24EE62D91CDC0C557A6C0ABF25E((Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 *)(&___direction1), /*hidden argument*/NULL);
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_4%(int32_t)L_5)), (int32_t)L_6));
		// if (xGoal < 0 || xGoal > width - 1)
		int32_t L_7 = V_3;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_8 = V_3;
		int32_t L_9 = V_2;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)))))
		{
			goto IL_0030;
		}
	}

IL_002e:
	{
		// return -1;
		return (-1);
	}

IL_0030:
	{
		// index += direction.x;
		int32_t L_10 = V_0;
		int32_t L_11 = Vector2Int_get_x_m300C7C05CD66D24EE62D91CDC0C557A6C0ABF25E((Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 *)(&___direction1), /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11));
		// index -= direction.y * width;
		int32_t L_12 = V_0;
		int32_t L_13 = Vector2Int_get_y_m0D6E131AB5FA4AD532DEC377F981AADA189E680B((Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 *)(&___direction1), /*hidden argument*/NULL);
		int32_t L_14 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)L_14))));
		// if (index < 0 || index > length - 1)
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		if ((((int32_t)L_16) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)))))
		{
			goto IL_0052;
		}
	}

IL_0050:
	{
		// return -1;
		return (-1);
	}

IL_0052:
	{
		// return index;
		int32_t L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C  int32_t Cell_GetProjectedIndex_m1C74D32C8168507276233826D1DA4949EC902E22_AdjustorThunk (RuntimeObject * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells0, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___direction1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * _thisAdjusted = reinterpret_cast<Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *>(__this + _offset);
	return Cell_GetProjectedIndex_m1C74D32C8168507276233826D1DA4949EC902E22(_thisAdjusted, ___cells0, ___direction1, method);
}
// Devcon.CellularAutomata.Cell Devcon.CellularAutomata.Cell::GetAdjacentCell(Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell>,UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  Cell_GetAdjacentCell_mB517B66D1F6206F4DB292C3EBFE1726EA23E89B3 (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells0, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___direction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cell_GetAdjacentCell_mB517B66D1F6206F4DB292C3EBFE1726EA23E89B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int index = GetProjectedIndex(cells, direction);
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  L_0 = ___cells0;
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_1 = ___direction1;
		int32_t L_2 = Cell_GetProjectedIndex_m1C74D32C8168507276233826D1DA4949EC902E22((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *)__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (index == -1)
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0013;
		}
	}
	{
		// return INVALID_CELL;
		IL2CPP_RUNTIME_CLASS_INIT(Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE_il2cpp_TypeInfo_var);
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_4 = ((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE_StaticFields*)il2cpp_codegen_static_fields_for(Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE_il2cpp_TypeInfo_var))->get_INVALID_CELL_0();
		return L_4;
	}

IL_0013:
	{
		// return cells[index];
		int32_t L_5 = V_0;
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_6 = IL2CPP_NATIVEARRAY_GET_ITEM(Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE , ((NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B *)(&___cells0))->___m_Buffer_0, L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C  Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  Cell_GetAdjacentCell_mB517B66D1F6206F4DB292C3EBFE1726EA23E89B3_AdjustorThunk (RuntimeObject * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells0, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___direction1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * _thisAdjusted = reinterpret_cast<Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *>(__this + _offset);
	return Cell_GetAdjacentCell_mB517B66D1F6206F4DB292C3EBFE1726EA23E89B3(_thisAdjusted, ___cells0, ___direction1, method);
}
// System.Void Devcon.CellularAutomata.Cell::SetAdjacentCell(Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell>,UnityEngine.Vector2Int,Devcon.CellularAutomata.Cell&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_SetAdjacentCell_m155BFF687548EA8F7875A91EC5DCDCEA0A06C3ED (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells0, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___direction1, Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * ___cell2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int index = GetProjectedIndex(cells, direction);
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  L_0 = ___cells0;
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_1 = ___direction1;
		int32_t L_2 = Cell_GetProjectedIndex_m1C74D32C8168507276233826D1DA4949EC902E22((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *)__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (index == -1)
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// cells[index] = cell;
		int32_t L_4 = V_0;
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * L_5 = ___cell2;
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_6 = (*(Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *)L_5);
		IL2CPP_NATIVEARRAY_SET_ITEM(Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE , ((NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B *)(&___cells0))->___m_Buffer_0, L_4, L_6);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Cell_SetAdjacentCell_m155BFF687548EA8F7875A91EC5DCDCEA0A06C3ED_AdjustorThunk (RuntimeObject * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells0, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___direction1, Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * ___cell2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * _thisAdjusted = reinterpret_cast<Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *>(__this + _offset);
	Cell_SetAdjacentCell_m155BFF687548EA8F7875A91EC5DCDCEA0A06C3ED(_thisAdjusted, ___cells0, ___direction1, ___cell2, method);
}
// System.Void Devcon.CellularAutomata.Cell::SetCell(Unity.Collections.NativeArray`1<Devcon.CellularAutomata.Cell>,System.Int32,Devcon.CellularAutomata.Cell)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_SetCell_mDCB5B944309CAA9AA5170D4E77CCE11EECC56DDA (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells0, int32_t ___index1, Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  ___cell2, const RuntimeMethod* method)
{
	{
		// cells[index] = cell;
		int32_t L_0 = ___index1;
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_1 = ___cell2;
		IL2CPP_NATIVEARRAY_SET_ITEM(Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE , ((NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B *)(&___cells0))->___m_Buffer_0, L_0, L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Cell_SetCell_mDCB5B944309CAA9AA5170D4E77CCE11EECC56DDA_AdjustorThunk (RuntimeObject * __this, NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  ___cells0, int32_t ___index1, Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  ___cell2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * _thisAdjusted = reinterpret_cast<Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *>(__this + _offset);
	Cell_SetCell_mDCB5B944309CAA9AA5170D4E77CCE11EECC56DDA(_thisAdjusted, ___cells0, ___index1, ___cell2, method);
}
// System.Void Devcon.CellularAutomata.Cell::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_SetActive_m9B3C57C88EAA13271A4C5689B81D04058A24B50F (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, bool ___active0, const RuntimeMethod* method)
{
	{
		// _active = active;
		bool L_0 = ___active0;
		__this->set__active_3(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Cell_SetActive_m9B3C57C88EAA13271A4C5689B81D04058A24B50F_AdjustorThunk (RuntimeObject * __this, bool ___active0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * _thisAdjusted = reinterpret_cast<Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *>(__this + _offset);
	Cell_SetActive_m9B3C57C88EAA13271A4C5689B81D04058A24B50F_inline(_thisAdjusted, ___active0, method);
}
// System.Boolean Devcon.CellularAutomata.Cell::GetActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cell_GetActive_mA9B97016403C5407073587691EF7D45CD9903582 (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, const RuntimeMethod* method)
{
	{
		// return _active;
		bool L_0 = __this->get__active_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cell_GetActive_mA9B97016403C5407073587691EF7D45CD9903582_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * _thisAdjusted = reinterpret_cast<Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *>(__this + _offset);
	return Cell_GetActive_mA9B97016403C5407073587691EF7D45CD9903582_inline(_thisAdjusted, method);
}
// System.Int32 Devcon.CellularAutomata.Cell::GetIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cell_GetIndex_m8050DC9D3D622E3DE900647F6112C4A286EB4E1B (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, const RuntimeMethod* method)
{
	{
		// return _index;
		int32_t L_0 = __this->get__index_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Cell_GetIndex_m8050DC9D3D622E3DE900647F6112C4A286EB4E1B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * _thisAdjusted = reinterpret_cast<Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *>(__this + _offset);
	return Cell_GetIndex_m8050DC9D3D622E3DE900647F6112C4A286EB4E1B_inline(_thisAdjusted, method);
}
// System.Void Devcon.CellularAutomata.Cell::SetColor(float4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_SetColor_m223464AF8341F7533CFD99EAAA73D2B81611F283 (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  ___color0, const RuntimeMethod* method)
{
	{
		// _color = color;
		float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  L_0 = ___color0;
		__this->set__color_6(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Cell_SetColor_m223464AF8341F7533CFD99EAAA73D2B81611F283_AdjustorThunk (RuntimeObject * __this, float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  ___color0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * _thisAdjusted = reinterpret_cast<Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *>(__this + _offset);
	Cell_SetColor_m223464AF8341F7533CFD99EAAA73D2B81611F283_inline(_thisAdjusted, ___color0, method);
}
// float4 Devcon.CellularAutomata.Cell::GetColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  Cell_GetColor_mDBC49FA6757F5A1A7D6E4DF5DE29E44FA8304017 (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, const RuntimeMethod* method)
{
	{
		// return _color;
		float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  L_0 = __this->get__color_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  Cell_GetColor_mDBC49FA6757F5A1A7D6E4DF5DE29E44FA8304017_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * _thisAdjusted = reinterpret_cast<Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *>(__this + _offset);
	return Cell_GetColor_mDBC49FA6757F5A1A7D6E4DF5DE29E44FA8304017_inline(_thisAdjusted, method);
}
// System.Void Devcon.CellularAutomata.Cell::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell__cctor_m35EE717DDB0FBC5B7AB847230CC2A867CDF84BB4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cell__cctor_m35EE717DDB0FBC5B7AB847230CC2A867CDF84BB4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static readonly Cell INVALID_CELL = new Cell(-1, false, false, false, new float4(0, 0, 0, 0), 0f, new Random());
		float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  L_0;
		memset((&L_0), 0, sizeof(L_0));
		float4__ctor_mCF6AABE18C99CF91EC51BC92B6BC37BBFED0A2EC((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 ));
		Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69  L_1 = V_0;
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Cell__ctor_m799E45F018362DA5EAE1EDB9888F323476D57561((&L_2), (-1), (bool)0, (bool)0, (bool)0, L_0, (0.0f), L_1, /*hidden argument*/NULL);
		((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE_StaticFields*)il2cpp_codegen_static_fields_for(Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE_il2cpp_TypeInfo_var))->set_INVALID_CELL_0(L_2);
		return;
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
// System.Void Devcon.CellularAutomata.Grid::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid__ctor_mCB36DFD3A499F250ECBFDCB52959D803AAFF5015 (Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF * __this, int32_t ___size0, const RuntimeMethod* method)
{
	{
		// public Grid(int size)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// Build(size);
		int32_t L_0 = ___size0;
		Grid_Build_mEFEF960E58CCDBCFBAD789E9F933336FA540A45A(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Devcon.CellularAutomata.Grid::Build(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_Build_mEFEF960E58CCDBCFBAD789E9F933336FA540A45A (Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grid_Build_mEFEF960E58CCDBCFBAD789E9F933336FA540A45A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// size = MathUtil.NearestPowerOf2(size);
		int32_t L_0 = ___size0;
		int32_t L_1 = MathUtil_NearestPowerOf2_m63C0714401F49BEF81DC639A2D06A5054C06FE78(L_0, /*hidden argument*/NULL);
		___size0 = L_1;
		// _texture = new Texture2D(size, size, TextureFormat.RGBAFloat, false);
		int32_t L_2 = ___size0;
		int32_t L_3 = ___size0;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_4 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A(L_4, L_2, L_3, ((int32_t)20), (bool)0, /*hidden argument*/NULL);
		__this->set__texture_2(L_4);
		// _texture.filterMode = FilterMode.Point;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_5 = __this->get__texture_2();
		NullCheck(L_5);
		Texture_set_filterMode_mB9AC927A527EFE95771B9B438E2CFB9EDA84AF01(L_5, 0, /*hidden argument*/NULL);
		// _cells = new NativeArray<Cell>(size * size, Allocator.Persistent);
		int32_t L_6 = ___size0;
		int32_t L_7 = ___size0;
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  L_8;
		memset((&L_8), 0, sizeof(L_8));
		NativeArray_1__ctor_m45871E99228D0D1472FE12292CCABAFF9C203A03((&L_8), ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)L_7)), 4, 1, /*hidden argument*/NativeArray_1__ctor_m45871E99228D0D1472FE12292CCABAFF9C203A03_RuntimeMethod_var);
		__this->set__cells_1(L_8);
		// BuildCells();
		Grid_BuildCells_m0C893084E257962B24AF74138F76E490B63D07C4(__this, /*hidden argument*/NULL);
		// _size = size;
		int32_t L_9 = ___size0;
		__this->set__size_0(L_9);
		// UpdateTexture();
		Grid_UpdateTexture_mB5F5B53D0DA0FB59ADD7E8A974794238301713A1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Devcon.CellularAutomata.Grid::BuildCells()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_BuildCells_m0C893084E257962B24AF74138F76E490B63D07C4 (Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grid_BuildCells_m0C893084E257962B24AF74138F76E490B63D07C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t2C7E119FB1FEF352D407528DF0265179740FE3E8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// NativeArray<Random> nativeRandom = new NativeArray<Random>(_cells.Length, Allocator.TempJob);
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B * L_0 = __this->get_address_of__cells_1();
		int32_t L_1 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B *)L_0)->___m_Length_1);
		NativeArray_1__ctor_m0352506052E097EFF816B6AB3AA235CBA57C071B((NativeArray_1_t2C7E119FB1FEF352D407528DF0265179740FE3E8 *)(&V_0), L_1, 3, 1, /*hidden argument*/NativeArray_1__ctor_m0352506052E097EFF816B6AB3AA235CBA57C071B_RuntimeMethod_var);
		// for (int i = 0; i < _cells.Length; ++i)
		V_4 = 0;
		goto IL_003d;
	}

IL_0019:
	{
		// nativeRandom[i] = new Random((uint)UnityEngine.Random.Range(0, uint.MaxValue));
		int32_t L_2 = V_4;
		float L_3 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((0.0f), (4.2949673E+09f), /*hidden argument*/NULL);
		Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Random__ctor_mB8F3103AC2FE6457AFCAE458110E96E4D7B8166A_inline((&L_4), (il2cpp_codegen_cast_floating_point<uint32_t, int32_t, float>(L_3)), /*hidden argument*/NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 , ((NativeArray_1_t2C7E119FB1FEF352D407528DF0265179740FE3E8 *)(&V_0))->___m_Buffer_0, L_2, L_4);
		// for (int i = 0; i < _cells.Length; ++i)
		int32_t L_5 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_003d:
	{
		// for (int i = 0; i < _cells.Length; ++i)
		int32_t L_6 = V_4;
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B * L_7 = __this->get_address_of__cells_1();
		int32_t L_8 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B *)L_7)->___m_Length_1);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0019;
		}
	}
	{
		// int length = _cells.Length;
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B * L_9 = __this->get_address_of__cells_1();
		int32_t L_10 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B *)L_9)->___m_Length_1);
		// int width = (int)Math.Sqrt(length);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_11 = sqrt((((double)((double)L_10))));
		V_1 = (((int32_t)((int32_t)L_11)));
		// GridBuildJob gridBuildJob = new GridBuildJob()
		// {
		//     rand = nativeRandom,
		//     cells = _cells,
		//     width = width
		// };
		il2cpp_codegen_initobj((&V_5), sizeof(GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E ));
		NativeArray_1_t2C7E119FB1FEF352D407528DF0265179740FE3E8  L_12 = V_0;
		(&V_5)->set_rand_0(L_12);
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  L_13 = __this->get__cells_1();
		(&V_5)->set_cells_1(L_13);
		int32_t L_14 = V_1;
		(&V_5)->set_width_2(L_14);
		GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E  L_15 = V_5;
		V_2 = L_15;
		// JobHandle jobHandle = gridBuildJob.Schedule(_cells.Length, 4);
		GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E  L_16 = V_2;
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B * L_17 = __this->get_address_of__cells_1();
		int32_t L_18 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B *)L_17)->___m_Length_1);
		il2cpp_codegen_initobj((&V_6), sizeof(JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 ));
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_19 = V_6;
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_20 = IJobParallelForExtensions_Schedule_TisGridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E_mE8F4E901D2F22714396CEB73EE48B1B972BFC183(L_16, L_18, 4, L_19, /*hidden argument*/IJobParallelForExtensions_Schedule_TisGridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E_mE8F4E901D2F22714396CEB73EE48B1B972BFC183_RuntimeMethod_var);
		V_3 = L_20;
		// jobHandle.Complete();
		JobHandle_Complete_m5EFD637001D6A9E0528E60C294FCA5354FD1E797((JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 *)(&V_3), /*hidden argument*/NULL);
		// gridBuildJob.cells.CopyTo(_cells);
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B * L_21 = (&V_2)->get_address_of_cells_1();
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  L_22 = __this->get__cells_1();
		NativeArray_1_CopyTo_mD8E01A9987021BE63732C34471CA1AD9D3BF43A5((NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B *)L_21, L_22, /*hidden argument*/NativeArray_1_CopyTo_mD8E01A9987021BE63732C34471CA1AD9D3BF43A5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Devcon.CellularAutomata.Grid::Step()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_Step_m8C474EFA70BBCAC3EEC9366E870EEBF8A50A1564 (Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grid_Step_m8C474EFA70BBCAC3EEC9366E870EEBF8A50A1564_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// GridStepJob gridStepJob = new GridStepJob()
		// {
		//     cells = _cells
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9 ));
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  L_0 = __this->get__cells_1();
		(&V_1)->set_cells_0(L_0);
		GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9  L_1 = V_1;
		// JobHandle jobHandle = gridStepJob.Schedule(_cells.Length, 4);
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B * L_2 = __this->get_address_of__cells_1();
		int32_t L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B *)L_2)->___m_Length_1);
		il2cpp_codegen_initobj((&V_2), sizeof(JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 ));
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_4 = V_2;
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_5 = IJobParallelForExtensions_Schedule_TisGridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9_mE9CB82392FC0B3001E2A9C2B4C93410C044A30FD(L_1, L_3, 4, L_4, /*hidden argument*/IJobParallelForExtensions_Schedule_TisGridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9_mE9CB82392FC0B3001E2A9C2B4C93410C044A30FD_RuntimeMethod_var);
		V_0 = L_5;
		// jobHandle.Complete();
		JobHandle_Complete_m5EFD637001D6A9E0528E60C294FCA5354FD1E797((JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 *)(&V_0), /*hidden argument*/NULL);
		// UpdateTexture();
		Grid_UpdateTexture_mB5F5B53D0DA0FB59ADD7E8A974794238301713A1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Devcon.CellularAutomata.Grid::UpdateTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_UpdateTexture_mB5F5B53D0DA0FB59ADD7E8A974794238301713A1 (Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grid_UpdateTexture_mB5F5B53D0DA0FB59ADD7E8A974794238301713A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB  V_2;
	memset((&V_2), 0, sizeof(V_2));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// NativeArray<float4> nativePixels = new NativeArray<float4>(_cells.Length, Allocator.TempJob);
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B * L_0 = __this->get_address_of__cells_1();
		int32_t L_1 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B *)L_0)->___m_Length_1);
		NativeArray_1__ctor_mC63D537E914104DE958E57B8AE27B3DBF44B90BD((NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6 *)(&V_0), L_1, 3, 1, /*hidden argument*/NativeArray_1__ctor_mC63D537E914104DE958E57B8AE27B3DBF44B90BD_RuntimeMethod_var);
		// GridUpdateTextureJob gridUpdateTextureJob = new GridUpdateTextureJob()
		// {
		//     pixels = nativePixels,
		//     cells = _cells
		// };
		il2cpp_codegen_initobj((&V_2), sizeof(GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB ));
		NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6  L_2 = V_0;
		(&V_2)->set_pixels_0(L_2);
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  L_3 = __this->get__cells_1();
		(&V_2)->set_cells_1(L_3);
		GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB  L_4 = V_2;
		// JobHandle jobHandle = gridUpdateTextureJob.Schedule(_cells.Length, 4);
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B * L_5 = __this->get_address_of__cells_1();
		int32_t L_6 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B *)L_5)->___m_Length_1);
		il2cpp_codegen_initobj((&V_3), sizeof(JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 ));
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_7 = V_3;
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_8 = IJobParallelForExtensions_Schedule_TisGridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB_m8B1F404DA653E3C21D23D682B5D02255DCC4C1EA(L_4, L_6, 4, L_7, /*hidden argument*/IJobParallelForExtensions_Schedule_TisGridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB_m8B1F404DA653E3C21D23D682B5D02255DCC4C1EA_RuntimeMethod_var);
		V_1 = L_8;
		// jobHandle.Complete();
		JobHandle_Complete_m5EFD637001D6A9E0528E60C294FCA5354FD1E797((JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 *)(&V_1), /*hidden argument*/NULL);
		// _texture.SetPixelData(nativePixels, 0);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_9 = __this->get__texture_2();
		NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6  L_10 = V_0;
		NullCheck(L_9);
		Texture2D_SetPixelData_Tisfloat4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541_m9DB20F1F3F14D103E3DE941DD5FC68CF7AD534B9(L_9, L_10, 0, 0, /*hidden argument*/Texture2D_SetPixelData_Tisfloat4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541_m9DB20F1F3F14D103E3DE941DD5FC68CF7AD534B9_RuntimeMethod_var);
		// _texture.Apply();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_11 = __this->get__texture_2();
		NullCheck(L_11);
		Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA(L_11, /*hidden argument*/NULL);
		// nativePixels.Dispose();
		NativeArray_1_Dispose_m1898490F57EF28C43BE7C2EBF26A89D0E07AD378((NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6 *)(&V_0), /*hidden argument*/NativeArray_1_Dispose_m1898490F57EF28C43BE7C2EBF26A89D0E07AD378_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.Texture2D Devcon.CellularAutomata.Grid::GetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * Grid_GetTexture_m378C6ABACF8901E6F67DD5CA1EF0A292EC0E3B1B (Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF * __this, const RuntimeMethod* method)
{
	{
		// return _texture;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = __this->get__texture_2();
		return L_0;
	}
}
// System.Void Devcon.CellularAutomata.Grid::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_Dispose_m44C933DB1BDBEB6F67755A573441D63197F6E24A (Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grid_Dispose_m44C933DB1BDBEB6F67755A573441D63197F6E24A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _cells.Dispose();
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B * L_0 = __this->get_address_of__cells_1();
		NativeArray_1_Dispose_mC60A11143F8C0ACB8B65FEDAE62F3467BE4E75A6((NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B *)L_0, /*hidden argument*/NativeArray_1_Dispose_mC60A11143F8C0ACB8B65FEDAE62F3467BE4E75A6_RuntimeMethod_var);
		// }
		return;
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
// Conversion methods for marshalling of: Devcon.CellularAutomata.GridBuildJob
IL2CPP_EXTERN_C void GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E_marshal_pinvoke(const GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E& unmarshaled, GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___rand_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'rand' of type 'GridBuildJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___rand_0Exception, NULL);
}
IL2CPP_EXTERN_C void GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E_marshal_pinvoke_back(const GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E_marshaled_pinvoke& marshaled, GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E& unmarshaled)
{
	Exception_t* ___rand_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'rand' of type 'GridBuildJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___rand_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Devcon.CellularAutomata.GridBuildJob
IL2CPP_EXTERN_C void GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E_marshal_pinvoke_cleanup(GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Devcon.CellularAutomata.GridBuildJob
IL2CPP_EXTERN_C void GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E_marshal_com(const GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E& unmarshaled, GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E_marshaled_com& marshaled)
{
	Exception_t* ___rand_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'rand' of type 'GridBuildJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___rand_0Exception, NULL);
}
IL2CPP_EXTERN_C void GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E_marshal_com_back(const GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E_marshaled_com& marshaled, GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E& unmarshaled)
{
	Exception_t* ___rand_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'rand' of type 'GridBuildJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___rand_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Devcon.CellularAutomata.GridBuildJob
IL2CPP_EXTERN_C void GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E_marshal_com_cleanup(GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E_marshaled_com& marshaled)
{
}
// System.Void Devcon.CellularAutomata.GridBuildJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GridBuildJob_Execute_m2F3F0210141F22A1F2FA347474508F05B8B467D4 (GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	float V_6 = 0.0f;
	{
		// Random random = rand[i];
		NativeArray_1_t2C7E119FB1FEF352D407528DF0265179740FE3E8 * L_0 = __this->get_address_of_rand_0();
		int32_t L_1 = ___i0;
		Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69  L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 , ((NativeArray_1_t2C7E119FB1FEF352D407528DF0265179740FE3E8 *)L_0)->___m_Buffer_0, L_1);
		V_0 = L_2;
		// float rnd = NextFloat(ref random);
		float L_3 = GridBuildJob_NextFloat_mFDEE80CB59AE18AED96D25DB28846787AA740182((GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E *)__this, (Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_3;
		// bool active = false;
		V_3 = (bool)0;
		// bool alive = false;
		V_4 = (bool)0;
		// bool consumable = false;
		V_5 = (bool)0;
		// float magnitude = 0f;
		V_6 = (0.0f);
		// if (rnd > 0.95f)
		float L_4 = V_1;
		if ((!(((float)L_4) > ((float)(0.95f)))))
		{
			goto IL_0064;
		}
	}
	{
		// Color randomColor = new Color(
		//         NextFloat(ref random),
		//         NextFloat(ref random),
		//         NextFloat(ref random)
		//     );
		float L_5 = GridBuildJob_NextFloat_mFDEE80CB59AE18AED96D25DB28846787AA740182((GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E *)__this, (Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 *)(&V_0), /*hidden argument*/NULL);
		float L_6 = GridBuildJob_NextFloat_mFDEE80CB59AE18AED96D25DB28846787AA740182((GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E *)__this, (Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 *)(&V_0), /*hidden argument*/NULL);
		float L_7 = GridBuildJob_NextFloat_mFDEE80CB59AE18AED96D25DB28846787AA740182((GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E *)__this, (Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 *)(&V_0), /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369((&L_8), L_5, L_6, L_7, /*hidden argument*/NULL);
		// color = float4.FromColor(randomColor);
		float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  L_9 = float4_FromColor_mE7EC8DAC13E4EF01C495A43CBB019BFD9E11D4EB(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		// active = true;
		V_3 = (bool)1;
		// alive = true;
		V_4 = (bool)1;
		// consumable = true;
		V_5 = (bool)1;
		// magnitude = NextFloat(ref random);
		float L_10 = GridBuildJob_NextFloat_mFDEE80CB59AE18AED96D25DB28846787AA740182((GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E *)__this, (Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 *)(&V_0), /*hidden argument*/NULL);
		V_6 = L_10;
		// }
		goto IL_00bc;
	}

IL_0064:
	{
		// else if (rnd > 0.65f && rnd < 0.95f)
		float L_11 = V_1;
		if ((!(((float)L_11) > ((float)(0.65f)))))
		{
			goto IL_0099;
		}
	}
	{
		float L_12 = V_1;
		if ((!(((float)L_12) < ((float)(0.95f)))))
		{
			goto IL_0099;
		}
	}
	{
		// color = new float4(0, 0, 0, 255);
		float4__ctor_mCF6AABE18C99CF91EC51BC92B6BC37BBFED0A2EC((float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541 *)(&V_2), (0.0f), (0.0f), (0.0f), (255.0f), /*hidden argument*/NULL);
		// alive = false;
		V_4 = (bool)0;
		// active = false;
		V_3 = (bool)0;
		// consumable = false;
		V_5 = (bool)0;
		// }
		goto IL_00bc;
	}

IL_0099:
	{
		// color = new float4(0.4f, 0.4f, 0.55f, 1f);
		float4__ctor_mCF6AABE18C99CF91EC51BC92B6BC37BBFED0A2EC((float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541 *)(&V_2), (0.4f), (0.4f), (0.55f), (1.0f), /*hidden argument*/NULL);
		// alive = false;
		V_4 = (bool)0;
		// consumable = true;
		V_5 = (bool)1;
		// active = true;
		V_3 = (bool)1;
	}

IL_00bc:
	{
		// cells[i] = new Cell(i, active, alive, consumable, color, magnitude, random);
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B * L_13 = __this->get_address_of_cells_1();
		int32_t L_14 = ___i0;
		int32_t L_15 = ___i0;
		bool L_16 = V_3;
		bool L_17 = V_4;
		bool L_18 = V_5;
		float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  L_19 = V_2;
		float L_20 = V_6;
		Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69  L_21 = V_0;
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Cell__ctor_m799E45F018362DA5EAE1EDB9888F323476D57561((&L_22), L_15, L_16, L_17, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE , ((NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B *)L_13)->___m_Buffer_0, L_14, L_22);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GridBuildJob_Execute_m2F3F0210141F22A1F2FA347474508F05B8B467D4_AdjustorThunk (RuntimeObject * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E * _thisAdjusted = reinterpret_cast<GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E *>(__this + _offset);
	GridBuildJob_Execute_m2F3F0210141F22A1F2FA347474508F05B8B467D4(_thisAdjusted, ___i0, method);
}
// System.Single Devcon.CellularAutomata.GridBuildJob::NextFloat(Unity.Mathematics.Random&)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR float GridBuildJob_NextFloat_mFDEE80CB59AE18AED96D25DB28846787AA740182 (GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E * IL2CPP_PARAMETER_RESTRICT __this, Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * ___rand0, const RuntimeMethod* method)
{
	{
		// ++rand.state;
		Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * L_0 = ___rand0;
		uint32_t* L_1 = L_0->get_address_of_state_0();
		uint32_t* L_2 = L_1;
		int32_t L_3 = *((uint32_t*)L_2);
		*((int32_t*)L_2) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		// return rand.NextFloat();
		Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * L_4 = ___rand0;
		float L_5 = Random_NextFloat_mBD6C6987D378294DD03888687B32661795AB7823_inline((Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 *)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  float GridBuildJob_NextFloat_mFDEE80CB59AE18AED96D25DB28846787AA740182_AdjustorThunk (RuntimeObject * IL2CPP_PARAMETER_RESTRICT __this, Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * ___rand0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E * _thisAdjusted = reinterpret_cast<GridBuildJob_t1D455ABDBA3F0AC1D9141A39A0C3245E4BCC6F6E *>(__this + _offset);
	return GridBuildJob_NextFloat_mFDEE80CB59AE18AED96D25DB28846787AA740182(_thisAdjusted, ___rand0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Devcon.CellularAutomata.GridStepJob
IL2CPP_EXTERN_C void GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9_marshal_pinvoke(const GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9& unmarshaled, GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9_marshaled_pinvoke& marshaled)
{
	Exception_t* ___cells_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'cells' of type 'GridStepJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___cells_0Exception, NULL);
}
IL2CPP_EXTERN_C void GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9_marshal_pinvoke_back(const GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9_marshaled_pinvoke& marshaled, GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9& unmarshaled)
{
	Exception_t* ___cells_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'cells' of type 'GridStepJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___cells_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Devcon.CellularAutomata.GridStepJob
IL2CPP_EXTERN_C void GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9_marshal_pinvoke_cleanup(GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Devcon.CellularAutomata.GridStepJob
IL2CPP_EXTERN_C void GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9_marshal_com(const GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9& unmarshaled, GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9_marshaled_com& marshaled)
{
	Exception_t* ___cells_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'cells' of type 'GridStepJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___cells_0Exception, NULL);
}
IL2CPP_EXTERN_C void GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9_marshal_com_back(const GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9_marshaled_com& marshaled, GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9& unmarshaled)
{
	Exception_t* ___cells_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'cells' of type 'GridStepJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___cells_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Devcon.CellularAutomata.GridStepJob
IL2CPP_EXTERN_C void GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9_marshal_com_cleanup(GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9_marshaled_com& marshaled)
{
}
// System.Void Devcon.CellularAutomata.GridStepJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GridStepJob_Execute_m55A3C798EDC14CE2F17B9E9DD34490821B373729 (GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9 * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// cells[i].Step(cells);
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B * L_0 = __this->get_address_of_cells_0();
		int32_t L_1 = ___i0;
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE , ((NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B *)L_0)->___m_Buffer_0, L_1);
		V_0 = L_2;
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B  L_3 = __this->get_cells_0();
		Cell_Step_mE52FC12479CC08C7966A3D213F26B7A5D2FC71E8((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *)(&V_0), L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GridStepJob_Execute_m55A3C798EDC14CE2F17B9E9DD34490821B373729_AdjustorThunk (RuntimeObject * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9 * _thisAdjusted = reinterpret_cast<GridStepJob_tE40CDE73732C02FABE4AAC3D9BFF45615DA215B9 *>(__this + _offset);
	GridStepJob_Execute_m55A3C798EDC14CE2F17B9E9DD34490821B373729(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Devcon.CellularAutomata.GridUpdateTextureJob
IL2CPP_EXTERN_C void GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB_marshal_pinvoke(const GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB& unmarshaled, GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB_marshaled_pinvoke& marshaled)
{
	Exception_t* ___pixels_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'pixels' of type 'GridUpdateTextureJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___pixels_0Exception, NULL);
}
IL2CPP_EXTERN_C void GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB_marshal_pinvoke_back(const GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB_marshaled_pinvoke& marshaled, GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB& unmarshaled)
{
	Exception_t* ___pixels_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'pixels' of type 'GridUpdateTextureJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___pixels_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Devcon.CellularAutomata.GridUpdateTextureJob
IL2CPP_EXTERN_C void GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB_marshal_pinvoke_cleanup(GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Devcon.CellularAutomata.GridUpdateTextureJob
IL2CPP_EXTERN_C void GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB_marshal_com(const GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB& unmarshaled, GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB_marshaled_com& marshaled)
{
	Exception_t* ___pixels_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'pixels' of type 'GridUpdateTextureJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___pixels_0Exception, NULL);
}
IL2CPP_EXTERN_C void GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB_marshal_com_back(const GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB_marshaled_com& marshaled, GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB& unmarshaled)
{
	Exception_t* ___pixels_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'pixels' of type 'GridUpdateTextureJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___pixels_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Devcon.CellularAutomata.GridUpdateTextureJob
IL2CPP_EXTERN_C void GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB_marshal_com_cleanup(GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB_marshaled_com& marshaled)
{
}
// System.Void Devcon.CellularAutomata.GridUpdateTextureJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GridUpdateTextureJob_Execute_mDCF820EC819AB872897A4B9B8627325AE9900317 (GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// pixels[i] = cells[i].GetColor();
		NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6 * L_0 = __this->get_address_of_pixels_0();
		int32_t L_1 = ___i0;
		NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B * L_2 = __this->get_address_of_cells_1();
		int32_t L_3 = ___i0;
		Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE  L_4 = IL2CPP_NATIVEARRAY_GET_ITEM(Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE , ((NativeArray_1_tE0E1652C63DAD775DFCA99AD1BE3D590EFFFEC4B *)L_2)->___m_Buffer_0, L_3);
		V_0 = L_4;
		float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  L_5 = Cell_GetColor_mDBC49FA6757F5A1A7D6E4DF5DE29E44FA8304017_inline((Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541 , ((NativeArray_1_t6EA73D911BEF94FA8070734C1BF10A0BCECBF5A6 *)L_0)->___m_Buffer_0, L_1, L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GridUpdateTextureJob_Execute_mDCF820EC819AB872897A4B9B8627325AE9900317_AdjustorThunk (RuntimeObject * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB * _thisAdjusted = reinterpret_cast<GridUpdateTextureJob_tB1F6C5A2B74239B12C07E81910F987A1598365CB *>(__this + _offset);
	GridUpdateTextureJob_Execute_mDCF820EC819AB872897A4B9B8627325AE9900317(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String DisplayInfo::get_Availability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DisplayInfo_get_Availability_m4ED0991960C424FAFD2DAAA898BFAB03B50BADC7 (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, const RuntimeMethod* method)
{
	{
		// public string Availability { get; set; }
		String_t* L_0 = __this->get_U3CAvailabilityU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void DisplayInfo::set_Availability(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayInfo_set_Availability_m3E4BED1717B0F6FB41F39ABE897BCB17FE6EC012 (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Availability { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAvailabilityU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 DisplayInfo::get_ScreenHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DisplayInfo_get_ScreenHeight_m35AE76661CF36F9D6B55525E17FBDE77BF013793 (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, const RuntimeMethod* method)
{
	{
		// public int ScreenHeight { get; set; }
		int32_t L_0 = __this->get_U3CScreenHeightU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void DisplayInfo::set_ScreenHeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayInfo_set_ScreenHeight_mE0553AD7F25C177485DDB89C0A1FF4C1C89027D9 (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int ScreenHeight { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CScreenHeightU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 DisplayInfo::get_ScreenWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DisplayInfo_get_ScreenWidth_mE37EC410BE19E8004E6BEF6648CA4CB845CE9018 (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, const RuntimeMethod* method)
{
	{
		// public int ScreenWidth { get; set; }
		int32_t L_0 = __this->get_U3CScreenWidthU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void DisplayInfo::set_ScreenWidth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayInfo_set_ScreenWidth_mAB796DB9F1E3C3699FD32F60443727194B77A9E8 (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int ScreenWidth { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CScreenWidthU3Ek__BackingField_2(L_0);
		return;
	}
}
// UnityEngine.Rect DisplayInfo::get_MonitorArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  DisplayInfo_get_MonitorArea_m646D9E5FBBE6E9E65A4F600925744A3E59470BDD (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, const RuntimeMethod* method)
{
	{
		// public Rect MonitorArea { get; set; }
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_0 = __this->get_U3CMonitorAreaU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void DisplayInfo::set_MonitorArea(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayInfo_set_MonitorArea_mE41BE6541317D1170D203FD8F9BEDF357C31F5B3 (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___value0, const RuntimeMethod* method)
{
	{
		// public Rect MonitorArea { get; set; }
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_0 = ___value0;
		__this->set_U3CMonitorAreaU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 DisplayInfo::get_MonitorTop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DisplayInfo_get_MonitorTop_m925F30129471DDB565C487FF947D6BE77BA45744 (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, const RuntimeMethod* method)
{
	{
		// public int MonitorTop { get; set; }
		int32_t L_0 = __this->get_U3CMonitorTopU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void DisplayInfo::set_MonitorTop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayInfo_set_MonitorTop_mE3174AD0E5FB8A7A995C8E504D137627F9E6B7F5 (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MonitorTop { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CMonitorTopU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 DisplayInfo::get_MonitorLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DisplayInfo_get_MonitorLeft_m95089449F9ADBEA5CEE84E75CF9B9C096461ECDB (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, const RuntimeMethod* method)
{
	{
		// public int MonitorLeft { get; set; }
		int32_t L_0 = __this->get_U3CMonitorLeftU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void DisplayInfo::set_MonitorLeft(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayInfo_set_MonitorLeft_m059607F87012B9D3B2C4FB7DE65F92D07902F1EE (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MonitorLeft { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CMonitorLeftU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.String DisplayInfo::get_DeviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DisplayInfo_get_DeviceName_m390692C509FCD6BEDECF9C4548E8B099AEBCBCD2 (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, const RuntimeMethod* method)
{
	{
		// public string DeviceName { get; set; }
		String_t* L_0 = __this->get_U3CDeviceNameU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void DisplayInfo::set_DeviceName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayInfo_set_DeviceName_m8746C0C457BEB2E2FA98EFAAAACCC2A67A08ABCF (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string DeviceName { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CDeviceNameU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.String DisplayInfo::get_FriendlyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DisplayInfo_get_FriendlyName_m2A95CDB44B0F8E8BBADF7CEFA4413AA2B1DEBD14 (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, const RuntimeMethod* method)
{
	{
		// public string FriendlyName { get; set; }
		String_t* L_0 = __this->get_U3CFriendlyNameU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void DisplayInfo::set_FriendlyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayInfo_set_FriendlyName_m2BE55A35FC38AEEDDB44ABF2A7CD8CE497AFCDF0 (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string FriendlyName { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CFriendlyNameU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.String DisplayInfo::get_VendorsName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DisplayInfo_get_VendorsName_m1B5BFB8D46809D109CF9099742F7183413FD51AF (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, const RuntimeMethod* method)
{
	{
		// public string VendorsName { get; set; }
		String_t* L_0 = __this->get_U3CVendorsNameU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void DisplayInfo::set_VendorsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayInfo_set_VendorsName_m810EB7D0FFA5F8D5715EB444AACEDE9CC0D79A70 (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string VendorsName { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CVendorsNameU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void DisplayInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayInfo__ctor_mEAECF0B1CB5C5D47FADA81B8EF86D7B13FC3EFBC (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String HashUtil::RandomString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtil_RandomString_mA0C5340E6D0D1E16EAA19795C503BCFFDC7D0255 (int32_t ___length0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HashUtil_RandomString_mA0C5340E6D0D1E16EAA19795C503BCFFDC7D0255_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tC5156A247A17ABDEF0A9166BF03FCCF704BD74CF * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tC5156A247A17ABDEF0A9166BF03FCCF704BD74CF * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		// return new string(Enumerable.Repeat(chars, length)
		//   .Select(s => s[random.Next(s.Length)]).ToArray());
		int32_t L_0 = ___length0;
		RuntimeObject* L_1 = Enumerable_Repeat_TisString_t_m28B564F333BC53D2AC55BD715F5E743BDBD29826(_stringLiteral92099DB89A20D3B397EF4CE8CD781117B0A3DEEE, L_0, /*hidden argument*/Enumerable_Repeat_TisString_t_m28B564F333BC53D2AC55BD715F5E743BDBD29826_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740_il2cpp_TypeInfo_var);
		Func_2_tC5156A247A17ABDEF0A9166BF03FCCF704BD74CF * L_2 = ((U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740_il2cpp_TypeInfo_var))->get_U3CU3E9__2_0_1();
		Func_2_tC5156A247A17ABDEF0A9166BF03FCCF704BD74CF * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740_il2cpp_TypeInfo_var);
		U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740 * L_4 = ((U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tC5156A247A17ABDEF0A9166BF03FCCF704BD74CF * L_5 = (Func_2_tC5156A247A17ABDEF0A9166BF03FCCF704BD74CF *)il2cpp_codegen_object_new(Func_2_tC5156A247A17ABDEF0A9166BF03FCCF704BD74CF_il2cpp_TypeInfo_var);
		Func_2__ctor_m122D0ED731C0D00BA65EF8504F8D6C11902915CC(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CRandomStringU3Eb__2_0_m9237D2D6055F9E65D7C9D4DA7A8FDBCAFB1C738E_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m122D0ED731C0D00BA65EF8504F8D6C11902915CC_RuntimeMethod_var);
		Func_2_tC5156A247A17ABDEF0A9166BF03FCCF704BD74CF * L_6 = L_5;
		((U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740_il2cpp_TypeInfo_var))->set_U3CU3E9__2_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002a:
	{
		RuntimeObject* L_7 = Enumerable_Select_TisString_t_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m645A87C7C54827207E37B5AE7EEC46F8EDA73375(G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Select_TisString_t_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m645A87C7C54827207E37B5AE7EEC46F8EDA73375_RuntimeMethod_var);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_8 = Enumerable_ToArray_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mB3C36D852FB5E2CDF51487D157540BFB3F4CBE94(L_7, /*hidden argument*/Enumerable_ToArray_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mB3C36D852FB5E2CDF51487D157540BFB3F4CBE94_RuntimeMethod_var);
		String_t* L_9 = String_CreateString_m394C06654854ADD4C51FF957BE0CC72EF52BAA96(NULL, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Single HashUtil::FromCoordinates(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HashUtil_FromCoordinates_m16902EF2FFC077D4868A364C8AE61B5E487A8842 (float ___X0, float ___Y1, const RuntimeMethod* method)
{
	{
		// int Result = (int)(X * 1000);
		float L_0 = ___X0;
		// Result *= 0xabcdef | 1;
		// Result += 0xfedcba;
		// Result = (Result >> 32) + (Result << 32);
		int32_t L_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_0, (float)(1000.0f)))))), (int32_t)((int32_t)11259375))), (int32_t)((int32_t)16702650)));
		// Result ^= 0x800813;
		// Result += (int)(Y * 1000);
		float L_2 = ___Y1;
		// Result *= 0x318008 | 1;
		// Result += 0x45555;
		// Result = (Result >> 32) + (Result << 32);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_1))^(int32_t)((int32_t)8390675))), (int32_t)(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_2, (float)(1000.0f)))))))), (int32_t)((int32_t)3244041))), (int32_t)((int32_t)283989)));
		// Result ^= 0x12345;
		// Result *= 0x54321 | 1;
		// return (float)(Result) / (float)int.MaxValue;
		return ((float)((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_3))^(int32_t)((int32_t)74565))), (int32_t)((int32_t)344865))))))/(float)(2.14748365E+09f)));
	}
}
// System.Void HashUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashUtil__ctor_m4C95FEE75C32AA7B453088A6FD23020D56895109 (HashUtil_t063D25253CC6512933C4E7B925DEA9069AA65FF1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HashUtil::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashUtil__cctor_mE427E652D331F9FADDA24D7E055A772423A71757 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HashUtil__cctor_mE427E652D331F9FADDA24D7E055A772423A71757_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Random random = new Random();
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_0 = (Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F *)il2cpp_codegen_object_new(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F_il2cpp_TypeInfo_var);
		Random__ctor_mCD4B6E9DFD27A19F52FA441CD8CAEB687A9DD2F2(L_0, /*hidden argument*/NULL);
		((HashUtil_t063D25253CC6512933C4E7B925DEA9069AA65FF1_StaticFields*)il2cpp_codegen_static_fields_for(HashUtil_t063D25253CC6512933C4E7B925DEA9069AA65FF1_il2cpp_TypeInfo_var))->set_random_0(L_0);
		return;
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
// System.Void HashUtil_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5B7B408E17072DEA6E9AB4E5FF877B39EF5A2D8A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m5B7B408E17072DEA6E9AB4E5FF877B39EF5A2D8A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740 * L_0 = (U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740 *)il2cpp_codegen_object_new(U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0725774A4DC25931BEB15AA9D69D87ED1AB2F6D9(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void HashUtil_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0725774A4DC25931BEB15AA9D69D87ED1AB2F6D9 (U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Char HashUtil_<>c::<RandomString>b__2_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar U3CU3Ec_U3CRandomStringU3Eb__2_0_m9237D2D6055F9E65D7C9D4DA7A8FDBCAFB1C738E (U3CU3Ec_tE1850FC03FA392377D76C2EC60C279528136B740 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRandomStringU3Eb__2_0_m9237D2D6055F9E65D7C9D4DA7A8FDBCAFB1C738E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Select(s => s[random.Next(s.Length)]).ToArray());
		String_t* L_0 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(HashUtil_t063D25253CC6512933C4E7B925DEA9069AA65FF1_il2cpp_TypeInfo_var);
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_1 = ((HashUtil_t063D25253CC6512933C4E7B925DEA9069AA65FF1_StaticFields*)il2cpp_codegen_static_fields_for(HashUtil_t063D25253CC6512933C4E7B925DEA9069AA65FF1_il2cpp_TypeInfo_var))->get_random_0();
		String_t* L_2 = ___s0;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_4 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32) */, L_1, L_3);
		NullCheck(L_0);
		Il2CppChar L_5 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_0, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Int32 MathUtil::NearestPowerOf2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MathUtil_NearestPowerOf2_m63C0714401F49BEF81DC639A2D06A5054C06FE78 (int32_t ___value0, const RuntimeMethod* method)
{
	{
		// --value;
		int32_t L_0 = ___value0;
		___value0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1));
		// value |= value >> 1;
		int32_t L_1 = ___value0;
		int32_t L_2 = ___value0;
		___value0 = ((int32_t)((int32_t)L_1|(int32_t)((int32_t)((int32_t)L_2>>(int32_t)1))));
		// value |= value >> 2;
		int32_t L_3 = ___value0;
		int32_t L_4 = ___value0;
		___value0 = ((int32_t)((int32_t)L_3|(int32_t)((int32_t)((int32_t)L_4>>(int32_t)2))));
		// value |= value >> 4;
		int32_t L_5 = ___value0;
		int32_t L_6 = ___value0;
		___value0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)((int32_t)L_6>>(int32_t)4))));
		// value |= value >> 8;
		int32_t L_7 = ___value0;
		int32_t L_8 = ___value0;
		___value0 = ((int32_t)((int32_t)L_7|(int32_t)((int32_t)((int32_t)L_8>>(int32_t)8))));
		// value |= value >> 16;
		int32_t L_9 = ___value0;
		int32_t L_10 = ___value0;
		___value0 = ((int32_t)((int32_t)L_9|(int32_t)((int32_t)((int32_t)L_10>>(int32_t)((int32_t)16)))));
		// ++value;
		int32_t L_11 = ___value0;
		___value0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		// return value;
		int32_t L_12 = ___value0;
		return L_12;
	}
}
// System.Single MathUtil::NextFloat(System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathUtil_NextFloat_mB82DDD22D5C9BC7540C026D05566B374BC20EA77 (Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * ___random0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtil_NextFloat_mB82DDD22D5C9BC7540C026D05566B374BC20EA77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// double mantissa = (random.NextDouble() * 2.0) - 1.0;
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_0 = ___random0;
		NullCheck(L_0);
		double L_1 = VirtFuncInvoker0< double >::Invoke(7 /* System.Double System.Random::NextDouble() */, L_0);
		// double exponent = Math.Pow(2.0, random.Next(-126, 128));
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_2 = ___random0;
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_2, ((int32_t)-126), ((int32_t)128));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_4 = Math_Pow_m9CD842663B1A2FA4C66EEFFC6F0D705B40BE46F1((2.0), (((double)((double)L_3))), /*hidden argument*/NULL);
		V_0 = L_4;
		// return (float)(mantissa * exponent);
		double L_5 = V_0;
		return (((float)((float)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_1, (double)(2.0))), (double)(1.0))), (double)L_5)))));
	}
}
// System.Void MathUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathUtil__ctor_mB079B6E1138DA5DF19B94C630B525920D25A8E15 (MathUtil_tF3B7CE936C43B4407BF619D58F37C5B552E282D6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
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
// Conversion methods for marshalling of: MonitorInfo
IL2CPP_EXTERN_C void MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshal_pinvoke(const MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F& unmarshaled, MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshaled_pinvoke& marshaled)
{
	marshaled.___Size_0 = unmarshaled.get_Size_0();
	marshaled.___Monitor_1 = unmarshaled.get_Monitor_1();
	marshaled.___WorkArea_2 = unmarshaled.get_WorkArea_2();
	marshaled.___Flags_3 = unmarshaled.get_Flags_3();
	il2cpp_codegen_marshal_wstring_fixed(unmarshaled.get_DeviceName_4(), (Il2CppChar*)&marshaled.___DeviceName_4, 32);
}
IL2CPP_EXTERN_C void MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshal_pinvoke_back(const MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshaled_pinvoke& marshaled, MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F& unmarshaled)
{
	uint32_t unmarshaled_Size_temp_0 = 0;
	unmarshaled_Size_temp_0 = marshaled.___Size_0;
	unmarshaled.set_Size_0(unmarshaled_Size_temp_0);
	RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6  unmarshaled_Monitor_temp_1;
	memset((&unmarshaled_Monitor_temp_1), 0, sizeof(unmarshaled_Monitor_temp_1));
	unmarshaled_Monitor_temp_1 = marshaled.___Monitor_1;
	unmarshaled.set_Monitor_1(unmarshaled_Monitor_temp_1);
	RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6  unmarshaled_WorkArea_temp_2;
	memset((&unmarshaled_WorkArea_temp_2), 0, sizeof(unmarshaled_WorkArea_temp_2));
	unmarshaled_WorkArea_temp_2 = marshaled.___WorkArea_2;
	unmarshaled.set_WorkArea_2(unmarshaled_WorkArea_temp_2);
	uint32_t unmarshaled_Flags_temp_3 = 0;
	unmarshaled_Flags_temp_3 = marshaled.___Flags_3;
	unmarshaled.set_Flags_3(unmarshaled_Flags_temp_3);
	unmarshaled.set_DeviceName_4(il2cpp_codegen_marshal_wstring_result(marshaled.___DeviceName_4));
}
// Conversion method for clean up from marshalling of: MonitorInfo
IL2CPP_EXTERN_C void MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshal_pinvoke_cleanup(MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: MonitorInfo
IL2CPP_EXTERN_C void MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshal_com(const MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F& unmarshaled, MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshaled_com& marshaled)
{
	marshaled.___Size_0 = unmarshaled.get_Size_0();
	marshaled.___Monitor_1 = unmarshaled.get_Monitor_1();
	marshaled.___WorkArea_2 = unmarshaled.get_WorkArea_2();
	marshaled.___Flags_3 = unmarshaled.get_Flags_3();
	il2cpp_codegen_marshal_wstring_fixed(unmarshaled.get_DeviceName_4(), (Il2CppChar*)&marshaled.___DeviceName_4, 32);
}
IL2CPP_EXTERN_C void MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshal_com_back(const MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshaled_com& marshaled, MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F& unmarshaled)
{
	uint32_t unmarshaled_Size_temp_0 = 0;
	unmarshaled_Size_temp_0 = marshaled.___Size_0;
	unmarshaled.set_Size_0(unmarshaled_Size_temp_0);
	RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6  unmarshaled_Monitor_temp_1;
	memset((&unmarshaled_Monitor_temp_1), 0, sizeof(unmarshaled_Monitor_temp_1));
	unmarshaled_Monitor_temp_1 = marshaled.___Monitor_1;
	unmarshaled.set_Monitor_1(unmarshaled_Monitor_temp_1);
	RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6  unmarshaled_WorkArea_temp_2;
	memset((&unmarshaled_WorkArea_temp_2), 0, sizeof(unmarshaled_WorkArea_temp_2));
	unmarshaled_WorkArea_temp_2 = marshaled.___WorkArea_2;
	unmarshaled.set_WorkArea_2(unmarshaled_WorkArea_temp_2);
	uint32_t unmarshaled_Flags_temp_3 = 0;
	unmarshaled_Flags_temp_3 = marshaled.___Flags_3;
	unmarshaled.set_Flags_3(unmarshaled_Flags_temp_3);
	unmarshaled.set_DeviceName_4(il2cpp_codegen_marshal_wstring_result(marshaled.___DeviceName_4));
}
// Conversion method for clean up from marshalling of: MonitorInfo
IL2CPP_EXTERN_C void MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshal_com_cleanup(MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL EnumDisplayMonitors(intptr_t, intptr_t, Il2CppMethodPointer, intptr_t);
#endif
// System.Boolean MonitorUtil::EnumDisplayMonitors(System.IntPtr,System.IntPtr,MonitorUtil_MonitorEnumDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonitorUtil_EnumDisplayMonitors_mAEB1433250AE64F3D03AE5C0FB503D0DC9F183A0 (intptr_t ___hdc0, intptr_t ___lprcClip1, MonitorEnumDelegate_tC1B7E51E6D53D1DA62AC34A1B6E21E17D605BB11 * ___lpfnEnum2, intptr_t ___dwData3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("user32.dll"), "EnumDisplayMonitors", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___lpfnEnum2' to native representation
	Il2CppMethodPointer ____lpfnEnum2_marshaled = NULL;
	____lpfnEnum2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___lpfnEnum2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(EnumDisplayMonitors)(___hdc0, ___lprcClip1, ____lpfnEnum2_marshaled, ___dwData3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___hdc0, ___lprcClip1, ____lpfnEnum2_marshaled, ___dwData3);
	#endif

	return static_cast<bool>(returnValue);
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetMonitorInfo(intptr_t, MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshaled_pinvoke*);
#endif
// System.Boolean MonitorUtil::GetMonitorInfo(System.IntPtr,MonitorInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonitorUtil_GetMonitorInfo_mAF902AA334CBB9B598BBDDFA8EE41C11C9814C9D (intptr_t ___hmon0, MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F * ___monitorinfo1, const RuntimeMethod* method)
{


	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("user32.dll"), "GetMonitorInfo", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___monitorinfo1' to native representation
	MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshaled_pinvoke* ____monitorinfo1_marshaled = NULL;
	MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshaled_pinvoke ____monitorinfo1_marshaled_dereferenced = {};
	MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshal_pinvoke(*___monitorinfo1, ____monitorinfo1_marshaled_dereferenced);
	____monitorinfo1_marshaled = &____monitorinfo1_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetMonitorInfo)(___hmon0, ____monitorinfo1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___hmon0, ____monitorinfo1_marshaled);
	#endif

	// Marshaling of parameter '___monitorinfo1' back from native representation
	MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F  _____monitorinfo1_marshaled_unmarshaled_dereferenced;
	memset((&_____monitorinfo1_marshaled_unmarshaled_dereferenced), 0, sizeof(_____monitorinfo1_marshaled_unmarshaled_dereferenced));
	MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshal_pinvoke_back(*____monitorinfo1_marshaled, _____monitorinfo1_marshaled_unmarshaled_dereferenced);
	MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_marshal_pinvoke_cleanup(*____monitorinfo1_marshaled);
	*___monitorinfo1 = _____monitorinfo1_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___monitorinfo1)->___DeviceName_4), (void*)NULL);

	return static_cast<bool>(returnValue);
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MoveWindow(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
#endif
// System.Int32 MonitorUtil::MoveWindow(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MonitorUtil_MoveWindow_m26D9D976E1FA4BB50E8026086DC33F582944E9B3 (int32_t ___hwnd0, int32_t ___x1, int32_t ___y2, int32_t ___nWidth3, int32_t ___nHeight4, int32_t ___bRepaint5, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("user32.dll"), "MoveWindow", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MoveWindow)(___hwnd0, ___x1, ___y2, ___nWidth3, ___nHeight4, ___bRepaint5);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___hwnd0, ___x1, ___y2, ___nWidth3, ___nHeight4, ___bRepaint5);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetForegroundWindow();
#endif
// System.Int32 MonitorUtil::GetForegroundWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MonitorUtil_GetForegroundWindow_mCC1EAFD2553F367912B8AEC755B721DDBFAB7424 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("user32.dll"), "GetForegroundWindow", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetForegroundWindow)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ShowWindowAsync(int32_t, int32_t);
#endif
// System.Boolean MonitorUtil::ShowWindowAsync(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonitorUtil_ShowWindowAsync_m3CE6B4C5E55EC9C66E089C4FC2E438BB90D92C9B (int32_t ___hWnd0, int32_t ___nCmdShow1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("user32.dll"), "ShowWindowAsync", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ShowWindowAsync)(___hWnd0, ___nCmdShow1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___hWnd0, ___nCmdShow1);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Collections.Generic.List`1<DisplayInfo> MonitorUtil::QueryDisplays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8918F1EE9925B17AF507E2E2DF245FEF3AD666DF * MonitorUtil_QueryDisplays_m9D06ACD2A7111BCF16F9FDAF5C83F8A7B9C55B0A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorUtil_QueryDisplays_m9D06ACD2A7111BCF16F9FDAF5C83F8A7B9C55B0A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_tA6DFADE625C1338F8054C2248649C735EFDC76ED * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_tA6DFADE625C1338F8054C2248649C735EFDC76ED * L_0 = (U3CU3Ec__DisplayClass6_0_tA6DFADE625C1338F8054C2248649C735EFDC76ED *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_tA6DFADE625C1338F8054C2248649C735EFDC76ED_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass6_0__ctor_mC364DCE0BC9E37B60D203617C8290A100963FE84(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// var Monitors = new List<DisplayInfo>();
		U3CU3Ec__DisplayClass6_0_tA6DFADE625C1338F8054C2248649C735EFDC76ED * L_1 = V_0;
		List_1_t8918F1EE9925B17AF507E2E2DF245FEF3AD666DF * L_2 = (List_1_t8918F1EE9925B17AF507E2E2DF245FEF3AD666DF *)il2cpp_codegen_object_new(List_1_t8918F1EE9925B17AF507E2E2DF245FEF3AD666DF_il2cpp_TypeInfo_var);
		List_1__ctor_mF8C6F9270595DBC319F3D1CB6B5DDBD304F1DDBB(L_2, /*hidden argument*/List_1__ctor_mF8C6F9270595DBC319F3D1CB6B5DDBD304F1DDBB_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->set_Monitors_0(L_2);
		// EnumDisplayMonitors(IntPtr.Zero, IntPtr.Zero,
		//     delegate (IntPtr hMonitor, IntPtr hdcMonitor, ref Rect lprcMonitor, IntPtr dwData)
		//     {
		//         MonitorInfo monitor = new MonitorInfo();
		//         monitor.Size = (uint)Marshal.SizeOf(monitor);
		//         monitor.DeviceName = null;
		//         bool Success = GetMonitorInfo(hMonitor, ref monitor);
		//         if (Success)
		//         {
		//             DisplayInfo displayinfo = new DisplayInfo();
		//             displayinfo.ScreenWidth = monitor.Monitor.Right - monitor.Monitor.Left;
		//             displayinfo.ScreenHeight = monitor.Monitor.Bottom - monitor.Monitor.Top;
		//             displayinfo.MonitorArea = new Rect(monitor.Monitor.Left, monitor.Monitor.Top, displayinfo.ScreenWidth, displayinfo.ScreenHeight);
		//             displayinfo.MonitorTop = monitor.Monitor.Top;
		//             displayinfo.MonitorLeft = monitor.Monitor.Left;
		//             displayinfo.Availability = monitor.Flags.ToString();
		//             displayinfo.DeviceName = monitor.DeviceName;
		//             displayinfo.FriendlyName = QueryDisplaysFriendlyName(monitor.DeviceName);
		//             displayinfo.VendorsName = QueryDisplaysVendorName(monitor.DeviceName);
		//             Monitors.Add(displayinfo);
		//         }
		//         return true;
		//     }, IntPtr.Zero);
		U3CU3Ec__DisplayClass6_0_tA6DFADE625C1338F8054C2248649C735EFDC76ED * L_3 = V_0;
		MonitorEnumDelegate_tC1B7E51E6D53D1DA62AC34A1B6E21E17D605BB11 * L_4 = (MonitorEnumDelegate_tC1B7E51E6D53D1DA62AC34A1B6E21E17D605BB11 *)il2cpp_codegen_object_new(MonitorEnumDelegate_tC1B7E51E6D53D1DA62AC34A1B6E21E17D605BB11_il2cpp_TypeInfo_var);
		MonitorEnumDelegate__ctor_mE75FCA9AB96B8BC768310C0F6C1A5DE36B5969AC(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass6_0_U3CQueryDisplaysU3Eb__0_mB6EBC5859587853A3AA485E366176EB0542757B6_RuntimeMethod_var), /*hidden argument*/NULL);
		MonitorUtil_EnumDisplayMonitors_mAEB1433250AE64F3D03AE5C0FB503D0DC9F183A0((intptr_t)(0), (intptr_t)(0), L_4, (intptr_t)(0), /*hidden argument*/NULL);
		// return Monitors;
		U3CU3Ec__DisplayClass6_0_tA6DFADE625C1338F8054C2248649C735EFDC76ED * L_5 = V_0;
		NullCheck(L_5);
		List_1_t8918F1EE9925B17AF507E2E2DF245FEF3AD666DF * L_6 = L_5->get_Monitors_0();
		return L_6;
	}
}
// System.String MonitorUtil::QueryDisplaysFriendlyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MonitorUtil_QueryDisplaysFriendlyName_m699EAE11D352C615A7B82BD715BB1711ABDD60AA (String_t* ___DeviceName0, const RuntimeMethod* method)
{
	{
		// string FriendlyName = null;
		// return FriendlyName;
		return (String_t*)NULL;
	}
}
// System.String MonitorUtil::QueryDisplaysVendorName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MonitorUtil_QueryDisplaysVendorName_m83B270AE0E9B9243CD31D05D848D07F29823C4DC (String_t* ___DeviceName0, const RuntimeMethod* method)
{
	{
		// string VendorName = null;
		// return VendorName;
		return (String_t*)NULL;
	}
}
// System.Void MonitorUtil::Startup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorUtil_Startup_mCC04EBCD564F01C1E915F5047FF2AFFD377AB1CC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorUtil_Startup_mCC04EBCD564F01C1E915F5047FF2AFFD377AB1CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int left = PlayerPrefs.GetInt("screenLeft", 0);
		int32_t L_0 = PlayerPrefs_GetInt_m1CBBA4989F15BA668EE24950D3C6B56E2ED20BD6(_stringLiteral10E97EA4C910C319F7F1E473F2968C4BEB50BA32, 0, /*hidden argument*/NULL);
		// int top = PlayerPrefs.GetInt("screenTop", 0);
		int32_t L_1 = PlayerPrefs_GetInt_m1CBBA4989F15BA668EE24950D3C6B56E2ED20BD6(_stringLiteralD62B6A50CB4F9D7B7899CDECC48C04ED79D5B342, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		// int width = PlayerPrefs.GetInt("screenWidth", Screen.width);
		int32_t L_2 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_3 = PlayerPrefs_GetInt_m1CBBA4989F15BA668EE24950D3C6B56E2ED20BD6(_stringLiteral5F9144F352B6F15A6AEB3F0252183F7405866A7E, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// int height = PlayerPrefs.GetInt("screenHeight", Screen.height);
		int32_t L_4 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		int32_t L_5 = PlayerPrefs_GetInt_m1CBBA4989F15BA668EE24950D3C6B56E2ED20BD6(_stringLiteral3032610DAD876B7F640E32A1498C8269E4A7FB3C, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// MoveWindow(left, top, width, height);
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		MonitorUtil_MoveWindow_m153ACF99B7D1CF5EF7A2044B46227CBAC8794C6D(L_0, L_6, L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MonitorUtil::MoveWindow(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorUtil_MoveWindow_m153ACF99B7D1CF5EF7A2044B46227CBAC8794C6D (int32_t ___left0, int32_t ___top1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// int handle = GetForegroundWindow();
		int32_t L_0 = MonitorUtil_GetForegroundWindow_mCC1EAFD2553F367912B8AEC755B721DDBFAB7424(/*hidden argument*/NULL);
		// float centerX = width * 0.5f;
		int32_t L_1 = ___width2;
		// float centerY = height * 0.5f;
		int32_t L_2 = ___height3;
		V_0 = ((float)il2cpp_codegen_multiply((float)(((float)((float)L_2))), (float)(0.5f)));
		// SetScreenCenter(centerX, centerY);
		float L_3 = V_0;
		MonitorUtil_SetScreenCenter_m5ACB6C1034D3C54A3FD8A7BC7F6B3EC348AB768C(((float)il2cpp_codegen_multiply((float)(((float)((float)L_1))), (float)(0.5f))), L_3, /*hidden argument*/NULL);
		// MoveWindow(handle, left, top, width, height, 1);
		int32_t L_4 = L_0;
		int32_t L_5 = ___left0;
		int32_t L_6 = ___top1;
		int32_t L_7 = ___width2;
		int32_t L_8 = ___height3;
		MonitorUtil_MoveWindow_m26D9D976E1FA4BB50E8026086DC33F582944E9B3(L_4, L_5, L_6, L_7, L_8, 1, /*hidden argument*/NULL);
		// ShowWindowAsync(handle, 3);
		MonitorUtil_ShowWindowAsync_m3CE6B4C5E55EC9C66E089C4FC2E438BB90D92C9B(L_4, 3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MonitorUtil::SetScreenCenter(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorUtil_SetScreenCenter_m5ACB6C1034D3C54A3FD8A7BC7F6B3EC348AB768C (float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		// ScreenCenter = new Vector2(x, y);
		float L_0 = ___x0;
		float L_1 = ___y1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_2), L_0, L_1, /*hidden argument*/NULL);
		MonitorUtil_set_ScreenCenter_mF7D96455C1FFC00065C6F32BC41F3A09EC2D742C_inline(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 MonitorUtil::get_ScreenCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MonitorUtil_get_ScreenCenter_mBD3255A9CBB77C81A4F3FA438DBB8E3E67D63FE8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorUtil_get_ScreenCenter_mBD3255A9CBB77C81A4F3FA438DBB8E3E67D63FE8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Vector2 ScreenCenter { get; set; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ((MonitorUtil_tE00DF0FA60AB641923B797C2141739ED37E7F978_StaticFields*)il2cpp_codegen_static_fields_for(MonitorUtil_tE00DF0FA60AB641923B797C2141739ED37E7F978_il2cpp_TypeInfo_var))->get_U3CScreenCenterU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void MonitorUtil::set_ScreenCenter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorUtil_set_ScreenCenter_mF7D96455C1FFC00065C6F32BC41F3A09EC2D742C (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorUtil_set_ScreenCenter_mF7D96455C1FFC00065C6F32BC41F3A09EC2D742C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Vector2 ScreenCenter { get; set; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		((MonitorUtil_tE00DF0FA60AB641923B797C2141739ED37E7F978_StaticFields*)il2cpp_codegen_static_fields_for(MonitorUtil_tE00DF0FA60AB641923B797C2141739ED37E7F978_il2cpp_TypeInfo_var))->set_U3CScreenCenterU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void MonitorUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorUtil__ctor_mC2CECEE69601971F5B53108367382875B89CC5BF (MonitorUtil_tE00DF0FA60AB641923B797C2141739ED37E7F978 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
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
// System.Void MonitorUtil_<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mC364DCE0BC9E37B60D203617C8290A100963FE84 (U3CU3Ec__DisplayClass6_0_tA6DFADE625C1338F8054C2248649C735EFDC76ED * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MonitorUtil_<>c__DisplayClass6_0::<QueryDisplays>b__0(System.IntPtr,System.IntPtr,UnityEngine.Rect&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass6_0_U3CQueryDisplaysU3Eb__0_mB6EBC5859587853A3AA485E366176EB0542757B6 (U3CU3Ec__DisplayClass6_0_tA6DFADE625C1338F8054C2248649C735EFDC76ED * __this, intptr_t ___hMonitor0, intptr_t ___hdcMonitor1, Rect_t35B976DE901B5423C11705E156938EA27AB402CE * ___lprcMonitor2, intptr_t ___dwData3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass6_0_U3CQueryDisplaysU3Eb__0_mB6EBC5859587853A3AA485E366176EB0542757B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * V_1 = NULL;
	{
		// MonitorInfo monitor = new MonitorInfo();
		il2cpp_codegen_initobj((&V_0), sizeof(MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F ));
		// monitor.Size = (uint)Marshal.SizeOf(monitor);
		MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F  L_0 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		int32_t L_1 = Marshal_SizeOf_TisMonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_mD5C70A1F421AF8A282748E776317ACA01BF096B3(L_0, /*hidden argument*/Marshal_SizeOf_TisMonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F_mD5C70A1F421AF8A282748E776317ACA01BF096B3_RuntimeMethod_var);
		(&V_0)->set_Size_0(L_1);
		// monitor.DeviceName = null;
		(&V_0)->set_DeviceName_4((String_t*)NULL);
		// bool Success = GetMonitorInfo(hMonitor, ref monitor);
		intptr_t L_2 = ___hMonitor0;
		bool L_3 = MonitorUtil_GetMonitorInfo_mAF902AA334CBB9B598BBDDFA8EE41C11C9814C9D((intptr_t)L_2, (MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F *)(&V_0), /*hidden argument*/NULL);
		// if (Success)
		if (!L_3)
		{
			goto IL_0109;
		}
	}
	{
		// DisplayInfo displayinfo = new DisplayInfo();
		DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * L_4 = (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 *)il2cpp_codegen_object_new(DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35_il2cpp_TypeInfo_var);
		DisplayInfo__ctor_mEAECF0B1CB5C5D47FADA81B8EF86D7B13FC3EFBC(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		// displayinfo.ScreenWidth = monitor.Monitor.Right - monitor.Monitor.Left;
		DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * L_5 = V_1;
		MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F  L_6 = V_0;
		RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6  L_7 = L_6.get_Monitor_1();
		int32_t L_8 = L_7.get_Right_2();
		MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F  L_9 = V_0;
		RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6  L_10 = L_9.get_Monitor_1();
		int32_t L_11 = L_10.get_Left_0();
		NullCheck(L_5);
		DisplayInfo_set_ScreenWidth_mAB796DB9F1E3C3699FD32F60443727194B77A9E8_inline(L_5, ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_11)), /*hidden argument*/NULL);
		// displayinfo.ScreenHeight = monitor.Monitor.Bottom - monitor.Monitor.Top;
		DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * L_12 = V_1;
		MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F  L_13 = V_0;
		RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6  L_14 = L_13.get_Monitor_1();
		int32_t L_15 = L_14.get_Bottom_3();
		MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F  L_16 = V_0;
		RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6  L_17 = L_16.get_Monitor_1();
		int32_t L_18 = L_17.get_Top_1();
		NullCheck(L_12);
		DisplayInfo_set_ScreenHeight_mE0553AD7F25C177485DDB89C0A1FF4C1C89027D9_inline(L_12, ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_18)), /*hidden argument*/NULL);
		// displayinfo.MonitorArea = new Rect(monitor.Monitor.Left, monitor.Monitor.Top, displayinfo.ScreenWidth, displayinfo.ScreenHeight);
		DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * L_19 = V_1;
		MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F  L_20 = V_0;
		RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6  L_21 = L_20.get_Monitor_1();
		int32_t L_22 = L_21.get_Left_0();
		MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F  L_23 = V_0;
		RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6  L_24 = L_23.get_Monitor_1();
		int32_t L_25 = L_24.get_Top_1();
		DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = DisplayInfo_get_ScreenWidth_mE37EC410BE19E8004E6BEF6648CA4CB845CE9018_inline(L_26, /*hidden argument*/NULL);
		DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = DisplayInfo_get_ScreenHeight_m35AE76661CF36F9D6B55525E17FBDE77BF013793_inline(L_28, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_30;
		memset((&L_30), 0, sizeof(L_30));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_30), (((float)((float)L_22))), (((float)((float)L_25))), (((float)((float)L_27))), (((float)((float)L_29))), /*hidden argument*/NULL);
		NullCheck(L_19);
		DisplayInfo_set_MonitorArea_mE41BE6541317D1170D203FD8F9BEDF357C31F5B3_inline(L_19, L_30, /*hidden argument*/NULL);
		// displayinfo.MonitorTop = monitor.Monitor.Top;
		DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * L_31 = V_1;
		MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F  L_32 = V_0;
		RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6  L_33 = L_32.get_Monitor_1();
		int32_t L_34 = L_33.get_Top_1();
		NullCheck(L_31);
		DisplayInfo_set_MonitorTop_mE3174AD0E5FB8A7A995C8E504D137627F9E6B7F5_inline(L_31, L_34, /*hidden argument*/NULL);
		// displayinfo.MonitorLeft = monitor.Monitor.Left;
		DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * L_35 = V_1;
		MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F  L_36 = V_0;
		RectNative_t62BB1864B5CBFA584BBD7C7EAECF5C7646B6B5D6  L_37 = L_36.get_Monitor_1();
		int32_t L_38 = L_37.get_Left_0();
		NullCheck(L_35);
		DisplayInfo_set_MonitorLeft_m059607F87012B9D3B2C4FB7DE65F92D07902F1EE_inline(L_35, L_38, /*hidden argument*/NULL);
		// displayinfo.Availability = monitor.Flags.ToString();
		DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * L_39 = V_1;
		uint32_t* L_40 = (&V_0)->get_address_of_Flags_3();
		String_t* L_41 = UInt32_ToString_m7D8A934AF1D74C5C8194D1556AA71BBA0D4600F2((uint32_t*)L_40, /*hidden argument*/NULL);
		NullCheck(L_39);
		DisplayInfo_set_Availability_m3E4BED1717B0F6FB41F39ABE897BCB17FE6EC012_inline(L_39, L_41, /*hidden argument*/NULL);
		// displayinfo.DeviceName = monitor.DeviceName;
		DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * L_42 = V_1;
		MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F  L_43 = V_0;
		String_t* L_44 = L_43.get_DeviceName_4();
		NullCheck(L_42);
		DisplayInfo_set_DeviceName_m8746C0C457BEB2E2FA98EFAAAACCC2A67A08ABCF_inline(L_42, L_44, /*hidden argument*/NULL);
		// displayinfo.FriendlyName = QueryDisplaysFriendlyName(monitor.DeviceName);
		DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * L_45 = V_1;
		MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F  L_46 = V_0;
		String_t* L_47 = L_46.get_DeviceName_4();
		String_t* L_48 = MonitorUtil_QueryDisplaysFriendlyName_m699EAE11D352C615A7B82BD715BB1711ABDD60AA(L_47, /*hidden argument*/NULL);
		NullCheck(L_45);
		DisplayInfo_set_FriendlyName_m2BE55A35FC38AEEDDB44ABF2A7CD8CE497AFCDF0_inline(L_45, L_48, /*hidden argument*/NULL);
		// displayinfo.VendorsName = QueryDisplaysVendorName(monitor.DeviceName);
		DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * L_49 = V_1;
		MonitorInfo_t9550E20B9AE9AE26F8DE97A2612D491CDBE5F73F  L_50 = V_0;
		String_t* L_51 = L_50.get_DeviceName_4();
		String_t* L_52 = MonitorUtil_QueryDisplaysVendorName_m83B270AE0E9B9243CD31D05D848D07F29823C4DC(L_51, /*hidden argument*/NULL);
		NullCheck(L_49);
		DisplayInfo_set_VendorsName_m810EB7D0FFA5F8D5715EB444AACEDE9CC0D79A70_inline(L_49, L_52, /*hidden argument*/NULL);
		// Monitors.Add(displayinfo);
		List_1_t8918F1EE9925B17AF507E2E2DF245FEF3AD666DF * L_53 = __this->get_Monitors_0();
		DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * L_54 = V_1;
		NullCheck(L_53);
		List_1_Add_m795D7BA059E917E170A352E685D18A9E9C4942F6(L_53, L_54, /*hidden argument*/List_1_Add_m795D7BA059E917E170A352E685D18A9E9C4942F6_RuntimeMethod_var);
	}

IL_0109:
	{
		// return true;
		return (bool)1;
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
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_MonitorEnumDelegate_tC1B7E51E6D53D1DA62AC34A1B6E21E17D605BB11 (MonitorEnumDelegate_tC1B7E51E6D53D1DA62AC34A1B6E21E17D605BB11 * __this, intptr_t ___hMonitor0, intptr_t ___hdcMonitor1, Rect_t35B976DE901B5423C11705E156938EA27AB402CE * ___lprcMonitor2, intptr_t ___dwData3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, Rect_t35B976DE901B5423C11705E156938EA27AB402CE *, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___hMonitor0, ___hdcMonitor1, ___lprcMonitor2, ___dwData3);

	return static_cast<bool>(returnValue);
}
// System.Void MonitorUtil_MonitorEnumDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorEnumDelegate__ctor_mE75FCA9AB96B8BC768310C0F6C1A5DE36B5969AC (MonitorEnumDelegate_tC1B7E51E6D53D1DA62AC34A1B6E21E17D605BB11 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean MonitorUtil_MonitorEnumDelegate::Invoke(System.IntPtr,System.IntPtr,UnityEngine.Rect&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonitorEnumDelegate_Invoke_m988799DDE2C75017C1AC5E83FAB7B9CAD3FA9D4C (MonitorEnumDelegate_tC1B7E51E6D53D1DA62AC34A1B6E21E17D605BB11 * __this, intptr_t ___hMonitor0, intptr_t ___hdcMonitor1, Rect_t35B976DE901B5423C11705E156938EA27AB402CE * ___lprcMonitor2, intptr_t ___dwData3, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef bool (*FunctionPointerType) (intptr_t, intptr_t, Rect_t35B976DE901B5423C11705E156938EA27AB402CE *, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___hMonitor0, ___hdcMonitor1, ___lprcMonitor2, ___dwData3, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, intptr_t, intptr_t, Rect_t35B976DE901B5423C11705E156938EA27AB402CE *, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___hMonitor0, ___hdcMonitor1, ___lprcMonitor2, ___dwData3, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (intptr_t, intptr_t, Rect_t35B976DE901B5423C11705E156938EA27AB402CE *, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___hMonitor0, ___hdcMonitor1, ___lprcMonitor2, ___dwData3, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker4< bool, intptr_t, intptr_t, Rect_t35B976DE901B5423C11705E156938EA27AB402CE *, intptr_t >::Invoke(targetMethod, targetThis, ___hMonitor0, ___hdcMonitor1, ___lprcMonitor2, ___dwData3);
					else
						result = GenericVirtFuncInvoker4< bool, intptr_t, intptr_t, Rect_t35B976DE901B5423C11705E156938EA27AB402CE *, intptr_t >::Invoke(targetMethod, targetThis, ___hMonitor0, ___hdcMonitor1, ___lprcMonitor2, ___dwData3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< bool, intptr_t, intptr_t, Rect_t35B976DE901B5423C11705E156938EA27AB402CE *, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___hMonitor0, ___hdcMonitor1, ___lprcMonitor2, ___dwData3);
					else
						result = VirtFuncInvoker4< bool, intptr_t, intptr_t, Rect_t35B976DE901B5423C11705E156938EA27AB402CE *, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___hMonitor0, ___hdcMonitor1, ___lprcMonitor2, ___dwData3);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, intptr_t, Rect_t35B976DE901B5423C11705E156938EA27AB402CE *, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___hMonitor0) - 1), ___hdcMonitor1, ___lprcMonitor2, ___dwData3, targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, intptr_t, intptr_t, Rect_t35B976DE901B5423C11705E156938EA27AB402CE *, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___hMonitor0, ___hdcMonitor1, ___lprcMonitor2, ___dwData3, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult MonitorUtil_MonitorEnumDelegate::BeginInvoke(System.IntPtr,System.IntPtr,UnityEngine.Rect&,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MonitorEnumDelegate_BeginInvoke_m38706631D15C91CBADB6C3B289AC2BEEC5F8BE31 (MonitorEnumDelegate_tC1B7E51E6D53D1DA62AC34A1B6E21E17D605BB11 * __this, intptr_t ___hMonitor0, intptr_t ___hdcMonitor1, Rect_t35B976DE901B5423C11705E156938EA27AB402CE * ___lprcMonitor2, intptr_t ___dwData3, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorEnumDelegate_BeginInvoke_m38706631D15C91CBADB6C3B289AC2BEEC5F8BE31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___hMonitor0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___hdcMonitor1);
	__d_args[2] = Box(Rect_t35B976DE901B5423C11705E156938EA27AB402CE_il2cpp_TypeInfo_var, &*___lprcMonitor2);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___dwData3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Boolean MonitorUtil_MonitorEnumDelegate::EndInvoke(UnityEngine.Rect&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonitorEnumDelegate_EndInvoke_mB8A573BF8563E34F2FE19E65A60B95542781BB1B (MonitorEnumDelegate_tC1B7E51E6D53D1DA62AC34A1B6E21E17D605BB11 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE * ___lprcMonitor0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___lprcMonitor0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SerializableColor::.ctor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableColor__ctor_m0996856C54C4C2B6100EEF8BB9D469264919A7C2 (SerializableColor_t9608B3A015BCA09726DA105E3C3C1692C005F5A3 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color0, const RuntimeMethod* method)
{
	{
		// public SerializableColor(Color color)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// r = color.r;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = ___color0;
		float L_1 = L_0.get_r_0();
		__this->set_r_0(L_1);
		// g = color.g;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = ___color0;
		float L_3 = L_2.get_g_1();
		__this->set_g_1(L_3);
		// b = color.b;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_4 = ___color0;
		float L_5 = L_4.get_b_2();
		__this->set_b_2(L_5);
		// a = color.a;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_6 = ___color0;
		float L_7 = L_6.get_a_3();
		__this->set_a_3(L_7);
		// }
		return;
	}
}
// UnityEngine.Color SerializableColor::GetColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  SerializableColor_GetColor_m3D8FD2CFF3709DA1260885230C8BCD861C1158D7 (SerializableColor_t9608B3A015BCA09726DA105E3C3C1692C005F5A3 * __this, const RuntimeMethod* method)
{
	{
		// return new Color(r, g, b, a);
		float L_0 = __this->get_r_0();
		float L_1 = __this->get_g_1();
		float L_2 = __this->get_b_2();
		float L_3 = __this->get_a_3();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void SerializableQuaternion::.ctor(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableQuaternion__ctor_m20981D89BF014FAD5B7D0193FEE070D266042070 (SerializableQuaternion_tC344A30632ADF7D9716DE88475AEF84037D37D9E * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___quaternion0, const RuntimeMethod* method)
{
	{
		// public SerializableQuaternion(Quaternion quaternion)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// w = quaternion.w;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___quaternion0;
		float L_1 = L_0.get_w_3();
		__this->set_w_3(L_1);
		// x = quaternion.x;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = ___quaternion0;
		float L_3 = L_2.get_x_0();
		__this->set_x_0(L_3);
		// y = quaternion.y;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___quaternion0;
		float L_5 = L_4.get_y_1();
		__this->set_y_1(L_5);
		// z = quaternion.z;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = ___quaternion0;
		float L_7 = L_6.get_z_2();
		__this->set_z_2(L_7);
		// }
		return;
	}
}
// UnityEngine.Quaternion SerializableQuaternion::GetQuaternion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SerializableQuaternion_GetQuaternion_mBC7CF72B1AF5103D7315DB5502DDF2398B718C51 (SerializableQuaternion_tC344A30632ADF7D9716DE88475AEF84037D37D9E * __this, const RuntimeMethod* method)
{
	{
		// return new Quaternion(x, y, z, w);
		float L_0 = __this->get_x_0();
		float L_1 = __this->get_y_1();
		float L_2 = __this->get_z_2();
		float L_3 = __this->get_w_3();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void SerializableVector2::.ctor(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableVector2__ctor_m4687B7CC0897DE39DDECC7292FBF7FADCCB9989F (SerializableVector2_t3895A430634378207E77A0FCF2FC3C7B58E54CC0 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___vector0, const RuntimeMethod* method)
{
	{
		// public SerializableVector2(Vector2 vector)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// x = vector.x;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___vector0;
		float L_1 = L_0.get_x_0();
		__this->set_x_0(L_1);
		// y = vector.y;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___vector0;
		float L_3 = L_2.get_y_1();
		__this->set_y_1(L_3);
		// }
		return;
	}
}
// UnityEngine.Vector2 SerializableVector2::GetVector2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  SerializableVector2_GetVector2_m69DD9CE7040304354AFF36F798DD2CD1B88E35F5 (SerializableVector2_t3895A430634378207E77A0FCF2FC3C7B58E54CC0 * __this, const RuntimeMethod* method)
{
	{
		// return new Vector2(x, y);
		float L_0 = __this->get_x_0();
		float L_1 = __this->get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void SerializableVector3::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableVector3__ctor_m1DBF43F26676A1530ECD79A8E9045CE715128619 (SerializableVector3_tEF515AFE855FB4AC1A5C55AFA21688D11668542B * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vector0, const RuntimeMethod* method)
{
	{
		// public SerializableVector3(Vector3 vector)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// x = vector.x;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___vector0;
		float L_1 = L_0.get_x_2();
		__this->set_x_0(L_1);
		// y = vector.y;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___vector0;
		float L_3 = L_2.get_y_3();
		__this->set_y_1(L_3);
		// z = vector.z;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___vector0;
		float L_5 = L_4.get_z_4();
		__this->set_z_2(L_5);
		// }
		return;
	}
}
// UnityEngine.Vector3 SerializableVector3::GetVector3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SerializableVector3_GetVector3_m64F42739E4C6E0D3625CA3C541082D5A21BE02B2 (SerializableVector3_tEF515AFE855FB4AC1A5C55AFA21688D11668542B * __this, const RuntimeMethod* method)
{
	{
		// return new Vector3(x, y, z);
		float L_0 = __this->get_x_0();
		float L_1 = __this->get_y_1();
		float L_2 = __this->get_z_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void float4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void float4__ctor_mCF6AABE18C99CF91EC51BC92B6BC37BBFED0A2EC (float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	{
		// _x = x;
		float L_0 = ___x0;
		__this->set__x_0(L_0);
		// _y = y;
		float L_1 = ___y1;
		__this->set__y_1(L_1);
		// _z = z;
		float L_2 = ___z2;
		__this->set__z_2(L_2);
		// _w = w;
		float L_3 = ___w3;
		__this->set__w_3(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void float4__ctor_mCF6AABE18C99CF91EC51BC92B6BC37BBFED0A2EC_AdjustorThunk (RuntimeObject * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541 * _thisAdjusted = reinterpret_cast<float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541 *>(__this + _offset);
	float4__ctor_mCF6AABE18C99CF91EC51BC92B6BC37BBFED0A2EC(_thisAdjusted, ___x0, ___y1, ___z2, ___w3, method);
}
// float4 float4::Lerp(float4,float4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  float4_Lerp_mA73F5BCA6ED6AC60CD18FBE4BDABC09D25AAE0AF (float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  ___a0, float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  ___b1, float ___t2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float x = a._x * (1 - t) + b._x * t;
		float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  L_0 = ___a0;
		float L_1 = L_0.get__x_0();
		float L_2 = ___t2;
		float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  L_3 = ___b1;
		float L_4 = L_3.get__x_0();
		float L_5 = ___t2;
		// float y = a._y * (1 - t) + b._y * t;
		float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  L_6 = ___a0;
		float L_7 = L_6.get__y_1();
		float L_8 = ___t2;
		float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  L_9 = ___b1;
		float L_10 = L_9.get__y_1();
		float L_11 = ___t2;
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_7, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_8)))), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11))));
		// float z = a._z * (1 - t) + b._z * t;
		float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  L_12 = ___a0;
		float L_13 = L_12.get__z_2();
		float L_14 = ___t2;
		float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  L_15 = ___b1;
		float L_16 = L_15.get__z_2();
		float L_17 = ___t2;
		V_1 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_13, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_14)))), (float)((float)il2cpp_codegen_multiply((float)L_16, (float)L_17))));
		// float w = a._w * (1 - t) + b._w * t;
		float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  L_18 = ___a0;
		float L_19 = L_18.get__w_3();
		float L_20 = ___t2;
		float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  L_21 = ___b1;
		float L_22 = L_21.get__w_3();
		float L_23 = ___t2;
		V_2 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_19, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_20)))), (float)((float)il2cpp_codegen_multiply((float)L_22, (float)L_23))));
		// return new float4(x, y, z, w);
		float L_24 = V_0;
		float L_25 = V_1;
		float L_26 = V_2;
		float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  L_27;
		memset((&L_27), 0, sizeof(L_27));
		float4__ctor_mCF6AABE18C99CF91EC51BC92B6BC37BBFED0A2EC((&L_27), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_2)))), (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)))), L_24, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}
}
// float4 float4::FromColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  float4_FromColor_mE7EC8DAC13E4EF01C495A43CBB019BFD9E11D4EB (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color0, const RuntimeMethod* method)
{
	{
		// return new float4(color.r, color.g, color.b, color.a);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = ___color0;
		float L_1 = L_0.get_r_0();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = ___color0;
		float L_3 = L_2.get_g_1();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_4 = ___color0;
		float L_5 = L_4.get_b_2();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_6 = ___color0;
		float L_7 = L_6.get_a_3();
		float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  L_8;
		memset((&L_8), 0, sizeof(L_8));
		float4__ctor_mCF6AABE18C99CF91EC51BC92B6BC37BBFED0A2EC((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Color float4::GetColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  float4_GetColor_m3004260B451BBEADD6A0FAD15A367EF33CA760F3 (float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541 * __this, const RuntimeMethod* method)
{
	{
		// return new Color(_x, _y, _z, _w);
		float L_0 = __this->get__x_0();
		float L_1 = __this->get__y_1();
		float L_2 = __this->get__z_2();
		float L_3 = __this->get__w_3();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  float4_GetColor_m3004260B451BBEADD6A0FAD15A367EF33CA760F3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541 * _thisAdjusted = reinterpret_cast<float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541 *>(__this + _offset);
	return float4_GetColor_m3004260B451BBEADD6A0FAD15A367EF33CA760F3(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * Grid_GetTexture_m378C6ABACF8901E6F67DD5CA1EF0A292EC0E3B1B_inline (Grid_t7D103D147C63ADC56BB5E4749D2A546BFE9E8BDF * __this, const RuntimeMethod* method)
{
	{
		// return _texture;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = __this->get__texture_2();
		return L_0;
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Cell_GetIndex_m8050DC9D3D622E3DE900647F6112C4A286EB4E1B_inline (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, const RuntimeMethod* method)
{
	{
		// return _index;
		int32_t L_0 = __this->get__index_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  Cell_GetColor_mDBC49FA6757F5A1A7D6E4DF5DE29E44FA8304017_inline (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, const RuntimeMethod* method)
{
	{
		// return _color;
		float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  L_0 = __this->get__color_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cell_SetColor_m223464AF8341F7533CFD99EAAA73D2B81611F283_inline (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  ___color0, const RuntimeMethod* method)
{
	{
		// _color = color;
		float4_tE23C2DE9AC2F11D1050C9C540E92EA0CA2D9A541  L_0 = ___color0;
		__this->set__color_6(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cell_SetActive_m9B3C57C88EAA13271A4C5689B81D04058A24B50F_inline (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, bool ___active0, const RuntimeMethod* method)
{
	{
		// _active = active;
		bool L_0 = ___active0;
		__this->set__active_3(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Cell_GetActive_mA9B97016403C5407073587691EF7D45CD9903582_inline (Cell_t95312ADEB2744D74F82487924033FFA20C0D74AE * __this, const RuntimeMethod* method)
{
	{
		// return _active;
		bool L_0 = __this->get__active_3();
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float Random_NextFloat_mBD6C6987D378294DD03888687B32661795AB7823_inline (Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 * __this, const RuntimeMethod* method)
{
	{
		// return asfloat(0x3f800000 | (NextState() >> 9)) - 1.0f;
		uint32_t L_0 = Random_NextState_m85CB9C212F8A7D1B3019410DA37BF6B19527825B_inline((Random_t3396F9B4823F44C4DE035EB1435DE62A7362FA69 *)__this, /*hidden argument*/NULL);
		float L_1 = math_asfloat_m82860A497358EFF17DCA50CFE6E2494D4296C0DF_inline(((int32_t)((int32_t)((int32_t)1065353216)|(int32_t)((int32_t)((uint32_t)L_0>>((int32_t)9))))), /*hidden argument*/NULL);
		return ((float)il2cpp_codegen_subtract((float)L_1, (float)(1.0f)));
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MonitorUtil_set_ScreenCenter_mF7D96455C1FFC00065C6F32BC41F3A09EC2D742C_inline (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorUtil_set_ScreenCenter_mF7D96455C1FFC00065C6F32BC41F3A09EC2D742CAssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Vector2 ScreenCenter { get; set; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		((MonitorUtil_tE00DF0FA60AB641923B797C2141739ED37E7F978_StaticFields*)il2cpp_codegen_static_fields_for(MonitorUtil_tE00DF0FA60AB641923B797C2141739ED37E7F978_il2cpp_TypeInfo_var))->set_U3CScreenCenterU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DisplayInfo_set_ScreenWidth_mAB796DB9F1E3C3699FD32F60443727194B77A9E8_inline (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int ScreenWidth { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CScreenWidthU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DisplayInfo_set_ScreenHeight_mE0553AD7F25C177485DDB89C0A1FF4C1C89027D9_inline (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int ScreenHeight { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CScreenHeightU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t DisplayInfo_get_ScreenWidth_mE37EC410BE19E8004E6BEF6648CA4CB845CE9018_inline (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, const RuntimeMethod* method)
{
	{
		// public int ScreenWidth { get; set; }
		int32_t L_0 = __this->get_U3CScreenWidthU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t DisplayInfo_get_ScreenHeight_m35AE76661CF36F9D6B55525E17FBDE77BF013793_inline (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, const RuntimeMethod* method)
{
	{
		// public int ScreenHeight { get; set; }
		int32_t L_0 = __this->get_U3CScreenHeightU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DisplayInfo_set_MonitorArea_mE41BE6541317D1170D203FD8F9BEDF357C31F5B3_inline (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___value0, const RuntimeMethod* method)
{
	{
		// public Rect MonitorArea { get; set; }
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_0 = ___value0;
		__this->set_U3CMonitorAreaU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DisplayInfo_set_MonitorTop_mE3174AD0E5FB8A7A995C8E504D137627F9E6B7F5_inline (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MonitorTop { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CMonitorTopU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DisplayInfo_set_MonitorLeft_m059607F87012B9D3B2C4FB7DE65F92D07902F1EE_inline (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MonitorLeft { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CMonitorLeftU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DisplayInfo_set_Availability_m3E4BED1717B0F6FB41F39ABE897BCB17FE6EC012_inline (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Availability { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAvailabilityU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DisplayInfo_set_DeviceName_m8746C0C457BEB2E2FA98EFAAAACCC2A67A08ABCF_inline (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string DeviceName { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CDeviceNameU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DisplayInfo_set_FriendlyName_m2BE55A35FC38AEEDDB44ABF2A7CD8CE497AFCDF0_inline (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string FriendlyName { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CFriendlyNameU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DisplayInfo_set_VendorsName_m810EB7D0FFA5F8D5715EB444AACEDE9CC0D79A70_inline (DisplayInfo_tD40E1EB37822869A9F40B57A16A4D56C88EEAD35 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string VendorsName { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CVendorsNameU3Ek__BackingField_8(L_0);
		return;
	}
}
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float math_asfloat_m82860A497358EFF17DCA50CFE6E2494D4296C0DF_inline (uint32_t ___x0, const RuntimeMethod* method)
{
	{
		// public static float  asfloat(uint x) { return asfloat((int)x); }
		uint32_t L_0 = ___x0;
		float L_1 = math_asfloat_m7DFA978A0EA36F1BCFDA274F88DF10C7FDE699E9_inline(L_0, /*hidden argument*/NULL);
		return L_1;
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
