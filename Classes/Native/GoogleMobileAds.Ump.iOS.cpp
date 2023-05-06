#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<GoogleMobileAds.Ump.Api.FormError>
struct Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// GoogleMobileAds.Ump.Api.ConsentDebugSettings
struct ConsentDebugSettings_tD24EE37056952EBB93665D986A9A8F60629FE913;
// GoogleMobileAds.Ump.iOS.ConsentFormClient
struct ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D;
// GoogleMobileAds.Ump.iOS.ConsentInformationClient
struct ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088;
// GoogleMobileAds.Ump.Api.ConsentRequestParameters
struct ConsentRequestParameters_t9F181ADB0E172B0D739101A93A409048A6E334ED;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// GoogleMobileAds.Ump.iOS.Externs
struct Externs_t6EA997B2AEAAE00670C7DAF2CD57AB8E7BC032A7;
// GoogleMobileAds.Ump.Api.FormError
struct FormError_t19F992E18FAEA71801675569E82F828A3FDE2BC2;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// GoogleMobileAds.Ump.Common.IConsentFormClient
struct IConsentFormClient_t23BCD740C0D47739EE21971A2570A5878698AB3F;
// GoogleMobileAds.Ump.Common.IConsentInformationClient
struct IConsentInformationClient_t7B2446DC6DC531BCB3C304CAD14D3C1410E9D5E2;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// GoogleMobileAds.Ump.iOS.UmpClientFactory
struct UmpClientFactory_t58289FE962243D0624A26B6ABE29983880D64363;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormLoadCompletionHandler
struct GADUConsentFormLoadCompletionHandler_tB3B507F1E869845FC76649E532C4F97D74663171;
// GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormPresentCompletionHandler
struct GADUConsentFormPresentCompletionHandler_t3C7FFF82ED42EBEA369035452FF27037DC4B7AEC;
// GoogleMobileAds.Ump.iOS.ConsentInformationClient/GADUConsentInfoUpdateCallback
struct GADUConsentInfoUpdateCallback_t5A82716C66B2445B5E5AFE087C5BD547E9A1E43C;

IL2CPP_EXTERN_C RuntimeClass* ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EntryPointNotFoundException_tD0666CDCBD81C969BAAC14899569BFED2E05F9DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormError_t19F992E18FAEA71801675569E82F828A3FDE2BC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GADUConsentFormLoadCompletionHandler_tB3B507F1E869845FC76649E532C4F97D74663171_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GADUConsentFormPresentCompletionHandler_t3C7FFF82ED42EBEA369035452FF27037DC4B7AEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GADUConsentInfoUpdateCallback_t5A82716C66B2445B5E5AFE087C5BD547E9A1E43C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A42A54D7FD4D3A3A3F27FE6D9BA4765B168528A;
IL2CPP_EXTERN_C String_t* _stringLiteral3296FB3BF3E142D4895B55FBC5FB54361B9207CA;
IL2CPP_EXTERN_C String_t* _stringLiteral981AE4478E71C4EC026A30E7892E7C4381F95DB9;
IL2CPP_EXTERN_C String_t* _stringLiteralAB3C01CC2E6DD25665EFC9D45FBFCDDB7EE3F0B1;
IL2CPP_EXTERN_C String_t* _stringLiteralECB59AE03B3FE9DF44D788977626C01307347E50;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mF8AC470A68B80B49FA7A929715ACBC51A8839C05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsentFormClient_ConsentFormLoadCompletionHandler_m4B916C6E835EE6CB1F1FA098F7A4AA5688703CE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsentFormClient_ConsentFormPresentCompletionHandler_m6D30E7CE3B6EAD19E21A0ED8C96ABFB324CAB64D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsentInformationClient_ConsentInfoUpdateCallback_mF9521B6FE6F532FCCB18C9BE298D80E77E0D5C2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsentInformationClient_GetConsentStatus_mBDFD388BD66884ED176DA5B9ED29F184B2E7D0F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsentInformationClient_IsConsentFormAvailable_mF35F40A90EFE6128B0E9652A2E832E9F45966687_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsentInformationClient_Reset_m87AC0DFC9A3BC2AC34856F3554BAADC1CF7DD54E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_CopyTo_mD611B6BC5B58FB302960B5F130DDC7A82AA14A34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UmpClientFactory_ConsentFormClient_m8D7C730D24C9328A7C16447928F23949489CA69D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UmpClientFactory_ConsentInformationClient_m9065245E84E53EDCAA10F53B3A5C40D966B47D13_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC99AC775CE248B125B7569C550CBDE08EE73E891 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// GoogleMobileAds.Ump.Api.ConsentRequestParameters
struct ConsentRequestParameters_t9F181ADB0E172B0D739101A93A409048A6E334ED  : public RuntimeObject
{
public:
	// System.Boolean GoogleMobileAds.Ump.Api.ConsentRequestParameters::TagForUnderAgeOfConsent
	bool ___TagForUnderAgeOfConsent_0;
	// GoogleMobileAds.Ump.Api.ConsentDebugSettings GoogleMobileAds.Ump.Api.ConsentRequestParameters::ConsentDebugSettings
	ConsentDebugSettings_tD24EE37056952EBB93665D986A9A8F60629FE913 * ___ConsentDebugSettings_1;

public:
	inline static int32_t get_offset_of_TagForUnderAgeOfConsent_0() { return static_cast<int32_t>(offsetof(ConsentRequestParameters_t9F181ADB0E172B0D739101A93A409048A6E334ED, ___TagForUnderAgeOfConsent_0)); }
	inline bool get_TagForUnderAgeOfConsent_0() const { return ___TagForUnderAgeOfConsent_0; }
	inline bool* get_address_of_TagForUnderAgeOfConsent_0() { return &___TagForUnderAgeOfConsent_0; }
	inline void set_TagForUnderAgeOfConsent_0(bool value)
	{
		___TagForUnderAgeOfConsent_0 = value;
	}

	inline static int32_t get_offset_of_ConsentDebugSettings_1() { return static_cast<int32_t>(offsetof(ConsentRequestParameters_t9F181ADB0E172B0D739101A93A409048A6E334ED, ___ConsentDebugSettings_1)); }
	inline ConsentDebugSettings_tD24EE37056952EBB93665D986A9A8F60629FE913 * get_ConsentDebugSettings_1() const { return ___ConsentDebugSettings_1; }
	inline ConsentDebugSettings_tD24EE37056952EBB93665D986A9A8F60629FE913 ** get_address_of_ConsentDebugSettings_1() { return &___ConsentDebugSettings_1; }
	inline void set_ConsentDebugSettings_1(ConsentDebugSettings_tD24EE37056952EBB93665D986A9A8F60629FE913 * value)
	{
		___ConsentDebugSettings_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConsentDebugSettings_1), (void*)value);
	}
};


// GoogleMobileAds.Ump.iOS.Externs
struct Externs_t6EA997B2AEAAE00670C7DAF2CD57AB8E7BC032A7  : public RuntimeObject
{
public:

public:
};


// GoogleMobileAds.Ump.Api.FormError
struct FormError_t19F992E18FAEA71801675569E82F828A3FDE2BC2  : public RuntimeObject
{
public:
	// System.Int32 GoogleMobileAds.Ump.Api.FormError::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_0;
	// System.String GoogleMobileAds.Ump.Api.FormError::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FormError_t19F992E18FAEA71801675569E82F828A3FDE2BC2, ___U3CErrorCodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_0() const { return ___U3CErrorCodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_0() { return &___U3CErrorCodeU3Ek__BackingField_0; }
	inline void set_U3CErrorCodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FormError_t19F992E18FAEA71801675569E82F828A3FDE2BC2, ___U3CMessageU3Ek__BackingField_1)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_1() const { return ___U3CMessageU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_1() { return &___U3CMessageU3Ek__BackingField_1; }
	inline void set_U3CMessageU3Ek__BackingField_1(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_1), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
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


// GoogleMobileAds.Ump.iOS.UmpClientFactory
struct UmpClientFactory_t58289FE962243D0624A26B6ABE29983880D64363  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// GoogleMobileAds.Ump.iOS.ConsentFormClient
struct ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D  : public RuntimeObject
{
public:
	// System.IntPtr GoogleMobileAds.Ump.iOS.ConsentFormClient::_consentForm
	intptr_t ____consentForm_1;
	// System.IntPtr GoogleMobileAds.Ump.iOS.ConsentFormClient::_consentFormClientPtr
	intptr_t ____consentFormClientPtr_2;
	// System.Action GoogleMobileAds.Ump.iOS.ConsentFormClient::_loadCompleteAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____loadCompleteAction_3;
	// System.Action`1<GoogleMobileAds.Ump.Api.FormError> GoogleMobileAds.Ump.iOS.ConsentFormClient::_loadFailedAction
	Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF * ____loadFailedAction_4;
	// System.Action`1<GoogleMobileAds.Ump.Api.FormError> GoogleMobileAds.Ump.iOS.ConsentFormClient::_consentFormDismissedAction
	Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF * ____consentFormDismissedAction_5;

public:
	inline static int32_t get_offset_of__consentForm_1() { return static_cast<int32_t>(offsetof(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D, ____consentForm_1)); }
	inline intptr_t get__consentForm_1() const { return ____consentForm_1; }
	inline intptr_t* get_address_of__consentForm_1() { return &____consentForm_1; }
	inline void set__consentForm_1(intptr_t value)
	{
		____consentForm_1 = value;
	}

	inline static int32_t get_offset_of__consentFormClientPtr_2() { return static_cast<int32_t>(offsetof(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D, ____consentFormClientPtr_2)); }
	inline intptr_t get__consentFormClientPtr_2() const { return ____consentFormClientPtr_2; }
	inline intptr_t* get_address_of__consentFormClientPtr_2() { return &____consentFormClientPtr_2; }
	inline void set__consentFormClientPtr_2(intptr_t value)
	{
		____consentFormClientPtr_2 = value;
	}

	inline static int32_t get_offset_of__loadCompleteAction_3() { return static_cast<int32_t>(offsetof(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D, ____loadCompleteAction_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__loadCompleteAction_3() const { return ____loadCompleteAction_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__loadCompleteAction_3() { return &____loadCompleteAction_3; }
	inline void set__loadCompleteAction_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____loadCompleteAction_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____loadCompleteAction_3), (void*)value);
	}

	inline static int32_t get_offset_of__loadFailedAction_4() { return static_cast<int32_t>(offsetof(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D, ____loadFailedAction_4)); }
	inline Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF * get__loadFailedAction_4() const { return ____loadFailedAction_4; }
	inline Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF ** get_address_of__loadFailedAction_4() { return &____loadFailedAction_4; }
	inline void set__loadFailedAction_4(Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF * value)
	{
		____loadFailedAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____loadFailedAction_4), (void*)value);
	}

	inline static int32_t get_offset_of__consentFormDismissedAction_5() { return static_cast<int32_t>(offsetof(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D, ____consentFormDismissedAction_5)); }
	inline Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF * get__consentFormDismissedAction_5() const { return ____consentFormDismissedAction_5; }
	inline Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF ** get_address_of__consentFormDismissedAction_5() { return &____consentFormDismissedAction_5; }
	inline void set__consentFormDismissedAction_5(Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF * value)
	{
		____consentFormDismissedAction_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____consentFormDismissedAction_5), (void*)value);
	}
};

struct ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_StaticFields
{
public:
	// GoogleMobileAds.Ump.iOS.ConsentFormClient GoogleMobileAds.Ump.iOS.ConsentFormClient::_instance
	ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * ____instance_0;
	// GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormLoadCompletionHandler GoogleMobileAds.Ump.iOS.ConsentFormClient::<>f__mg$cache0
	GADUConsentFormLoadCompletionHandler_tB3B507F1E869845FC76649E532C4F97D74663171 * ___U3CU3Ef__mgU24cache0_6;
	// GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormPresentCompletionHandler GoogleMobileAds.Ump.iOS.ConsentFormClient::<>f__mg$cache1
	GADUConsentFormPresentCompletionHandler_t3C7FFF82ED42EBEA369035452FF27037DC4B7AEC * ___U3CU3Ef__mgU24cache1_7;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_StaticFields, ____instance_0)); }
	inline ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * get__instance_0() const { return ____instance_0; }
	inline ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_6() { return static_cast<int32_t>(offsetof(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_StaticFields, ___U3CU3Ef__mgU24cache0_6)); }
	inline GADUConsentFormLoadCompletionHandler_tB3B507F1E869845FC76649E532C4F97D74663171 * get_U3CU3Ef__mgU24cache0_6() const { return ___U3CU3Ef__mgU24cache0_6; }
	inline GADUConsentFormLoadCompletionHandler_tB3B507F1E869845FC76649E532C4F97D74663171 ** get_address_of_U3CU3Ef__mgU24cache0_6() { return &___U3CU3Ef__mgU24cache0_6; }
	inline void set_U3CU3Ef__mgU24cache0_6(GADUConsentFormLoadCompletionHandler_tB3B507F1E869845FC76649E532C4F97D74663171 * value)
	{
		___U3CU3Ef__mgU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_7() { return static_cast<int32_t>(offsetof(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_StaticFields, ___U3CU3Ef__mgU24cache1_7)); }
	inline GADUConsentFormPresentCompletionHandler_t3C7FFF82ED42EBEA369035452FF27037DC4B7AEC * get_U3CU3Ef__mgU24cache1_7() const { return ___U3CU3Ef__mgU24cache1_7; }
	inline GADUConsentFormPresentCompletionHandler_t3C7FFF82ED42EBEA369035452FF27037DC4B7AEC ** get_address_of_U3CU3Ef__mgU24cache1_7() { return &___U3CU3Ef__mgU24cache1_7; }
	inline void set_U3CU3Ef__mgU24cache1_7(GADUConsentFormPresentCompletionHandler_t3C7FFF82ED42EBEA369035452FF27037DC4B7AEC * value)
	{
		___U3CU3Ef__mgU24cache1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache1_7), (void*)value);
	}
};


// GoogleMobileAds.Ump.iOS.ConsentInformationClient
struct ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088  : public RuntimeObject
{
public:
	// System.IntPtr GoogleMobileAds.Ump.iOS.ConsentInformationClient::_consentInformationClientPtr
	intptr_t ____consentInformationClientPtr_1;
	// System.IntPtr GoogleMobileAds.Ump.iOS.ConsentInformationClient::_consentInformationPtr
	intptr_t ____consentInformationPtr_2;
	// System.Action GoogleMobileAds.Ump.iOS.ConsentInformationClient::_consentInfoUpdateSuccessAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____consentInfoUpdateSuccessAction_3;
	// System.Action`1<GoogleMobileAds.Ump.Api.FormError> GoogleMobileAds.Ump.iOS.ConsentInformationClient::_consentInfoUpdateFailureAction
	Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF * ____consentInfoUpdateFailureAction_4;

public:
	inline static int32_t get_offset_of__consentInformationClientPtr_1() { return static_cast<int32_t>(offsetof(ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088, ____consentInformationClientPtr_1)); }
	inline intptr_t get__consentInformationClientPtr_1() const { return ____consentInformationClientPtr_1; }
	inline intptr_t* get_address_of__consentInformationClientPtr_1() { return &____consentInformationClientPtr_1; }
	inline void set__consentInformationClientPtr_1(intptr_t value)
	{
		____consentInformationClientPtr_1 = value;
	}

	inline static int32_t get_offset_of__consentInformationPtr_2() { return static_cast<int32_t>(offsetof(ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088, ____consentInformationPtr_2)); }
	inline intptr_t get__consentInformationPtr_2() const { return ____consentInformationPtr_2; }
	inline intptr_t* get_address_of__consentInformationPtr_2() { return &____consentInformationPtr_2; }
	inline void set__consentInformationPtr_2(intptr_t value)
	{
		____consentInformationPtr_2 = value;
	}

	inline static int32_t get_offset_of__consentInfoUpdateSuccessAction_3() { return static_cast<int32_t>(offsetof(ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088, ____consentInfoUpdateSuccessAction_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__consentInfoUpdateSuccessAction_3() const { return ____consentInfoUpdateSuccessAction_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__consentInfoUpdateSuccessAction_3() { return &____consentInfoUpdateSuccessAction_3; }
	inline void set__consentInfoUpdateSuccessAction_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____consentInfoUpdateSuccessAction_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____consentInfoUpdateSuccessAction_3), (void*)value);
	}

	inline static int32_t get_offset_of__consentInfoUpdateFailureAction_4() { return static_cast<int32_t>(offsetof(ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088, ____consentInfoUpdateFailureAction_4)); }
	inline Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF * get__consentInfoUpdateFailureAction_4() const { return ____consentInfoUpdateFailureAction_4; }
	inline Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF ** get_address_of__consentInfoUpdateFailureAction_4() { return &____consentInfoUpdateFailureAction_4; }
	inline void set__consentInfoUpdateFailureAction_4(Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF * value)
	{
		____consentInfoUpdateFailureAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____consentInfoUpdateFailureAction_4), (void*)value);
	}
};

struct ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_StaticFields
{
public:
	// GoogleMobileAds.Ump.iOS.ConsentInformationClient GoogleMobileAds.Ump.iOS.ConsentInformationClient::_instance
	ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * ____instance_0;
	// GoogleMobileAds.Ump.iOS.ConsentInformationClient/GADUConsentInfoUpdateCallback GoogleMobileAds.Ump.iOS.ConsentInformationClient::<>f__mg$cache0
	GADUConsentInfoUpdateCallback_t5A82716C66B2445B5E5AFE087C5BD547E9A1E43C * ___U3CU3Ef__mgU24cache0_5;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_StaticFields, ____instance_0)); }
	inline ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * get__instance_0() const { return ____instance_0; }
	inline ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_5() { return static_cast<int32_t>(offsetof(ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_StaticFields, ___U3CU3Ef__mgU24cache0_5)); }
	inline GADUConsentInfoUpdateCallback_t5A82716C66B2445B5E5AFE087C5BD547E9A1E43C * get_U3CU3Ef__mgU24cache0_5() const { return ___U3CU3Ef__mgU24cache0_5; }
	inline GADUConsentInfoUpdateCallback_t5A82716C66B2445B5E5AFE087C5BD547E9A1E43C ** get_address_of_U3CU3Ef__mgU24cache0_5() { return &___U3CU3Ef__mgU24cache0_5; }
	inline void set_U3CU3Ef__mgU24cache0_5(GADUConsentInfoUpdateCallback_t5A82716C66B2445B5E5AFE087C5BD547E9A1E43C * value)
	{
		___U3CU3Ef__mgU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_5), (void*)value);
	}
};


// GoogleMobileAds.Ump.Api.DebugGeography
struct DebugGeography_t9AD6ED511CB0EB2C2EE57BF74804FCFFD0848FD6 
{
public:
	// System.Int32 GoogleMobileAds.Ump.Api.DebugGeography::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugGeography_t9AD6ED511CB0EB2C2EE57BF74804FCFFD0848FD6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GoogleMobileAds.Ump.Api.ConsentDebugSettings
struct ConsentDebugSettings_tD24EE37056952EBB93665D986A9A8F60629FE913  : public RuntimeObject
{
public:
	// GoogleMobileAds.Ump.Api.DebugGeography GoogleMobileAds.Ump.Api.ConsentDebugSettings::DebugGeography
	int32_t ___DebugGeography_0;
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Ump.Api.ConsentDebugSettings::TestDeviceHashedIds
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___TestDeviceHashedIds_1;

public:
	inline static int32_t get_offset_of_DebugGeography_0() { return static_cast<int32_t>(offsetof(ConsentDebugSettings_tD24EE37056952EBB93665D986A9A8F60629FE913, ___DebugGeography_0)); }
	inline int32_t get_DebugGeography_0() const { return ___DebugGeography_0; }
	inline int32_t* get_address_of_DebugGeography_0() { return &___DebugGeography_0; }
	inline void set_DebugGeography_0(int32_t value)
	{
		___DebugGeography_0 = value;
	}

	inline static int32_t get_offset_of_TestDeviceHashedIds_1() { return static_cast<int32_t>(offsetof(ConsentDebugSettings_tD24EE37056952EBB93665D986A9A8F60629FE913, ___TestDeviceHashedIds_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_TestDeviceHashedIds_1() const { return ___TestDeviceHashedIds_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_TestDeviceHashedIds_1() { return &___TestDeviceHashedIds_1; }
	inline void set_TestDeviceHashedIds_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___TestDeviceHashedIds_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TestDeviceHashedIds_1), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Action`1<GoogleMobileAds.Ump.Api.FormError>
struct Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.TypeLoadException
struct TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_17;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_18;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_19;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_20;

public:
	inline static int32_t get_offset_of_ClassName_17() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___ClassName_17)); }
	inline String_t* get_ClassName_17() const { return ___ClassName_17; }
	inline String_t** get_address_of_ClassName_17() { return &___ClassName_17; }
	inline void set_ClassName_17(String_t* value)
	{
		___ClassName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassName_17), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyName_18() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___AssemblyName_18)); }
	inline String_t* get_AssemblyName_18() const { return ___AssemblyName_18; }
	inline String_t** get_address_of_AssemblyName_18() { return &___AssemblyName_18; }
	inline void set_AssemblyName_18(String_t* value)
	{
		___AssemblyName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyName_18), (void*)value);
	}

	inline static int32_t get_offset_of_MessageArg_19() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___MessageArg_19)); }
	inline String_t* get_MessageArg_19() const { return ___MessageArg_19; }
	inline String_t** get_address_of_MessageArg_19() { return &___MessageArg_19; }
	inline void set_MessageArg_19(String_t* value)
	{
		___MessageArg_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageArg_19), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceId_20() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___ResourceId_20)); }
	inline int32_t get_ResourceId_20() const { return ___ResourceId_20; }
	inline int32_t* get_address_of_ResourceId_20() { return &___ResourceId_20; }
	inline void set_ResourceId_20(int32_t value)
	{
		___ResourceId_20 = value;
	}
};


// GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormLoadCompletionHandler
struct GADUConsentFormLoadCompletionHandler_tB3B507F1E869845FC76649E532C4F97D74663171  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormPresentCompletionHandler
struct GADUConsentFormPresentCompletionHandler_t3C7FFF82ED42EBEA369035452FF27037DC4B7AEC  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.Ump.iOS.ConsentInformationClient/GADUConsentInfoUpdateCallback
struct GADUConsentInfoUpdateCallback_t5A82716C66B2445B5E5AFE087C5BD547E9A1E43C  : public MulticastDelegate_t
{
public:

public:
};


// System.EntryPointNotFoundException
struct EntryPointNotFoundException_tD0666CDCBD81C969BAAC14899569BFED2E05F9DC  : public TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
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


// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(!0[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mC5E1C7D45426A545720C4B0E300A6142AB811980_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, const RuntimeMethod* method);

// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient::ConsentFormLoadCompletionHandler(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormClient_ConsentFormLoadCompletionHandler_m4B916C6E835EE6CB1F1FA098F7A4AA5688703CE2 (intptr_t ___clientRef0, intptr_t ___errorRef1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient::ConsentFormPresentCompletionHandler(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormClient_ConsentFormPresentCompletionHandler_m6D30E7CE3B6EAD19E21A0ED8C96ABFB324CAB64D (intptr_t ___clientRef0, intptr_t ___errorRef1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_m937829FAD1C69F168CF045B9406228AC9F8B9389 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::op_Explicit(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_op_Explicit_m0A74179B3DD6D87F0863EF55176F924D641E42BF (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___value0, const RuntimeMethod* method);
// System.IntPtr GoogleMobileAds.Ump.iOS.Externs::GADUCreateConsentForm(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateConsentForm_m84C8627BE538B6BEA5CD097E2C46F302CF198ECE (intptr_t ___clientRef0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormLoadCompletionHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUConsentFormLoadCompletionHandler__ctor_m17D111E0DB13154A5F1DFBE7C371B867B16B427D (GADUConsentFormLoadCompletionHandler_tB3B507F1E869845FC76649E532C4F97D74663171 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADULoadConsentForm(System.IntPtr,GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormLoadCompletionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADULoadConsentForm_m26BA61BF519CC8AB61D662CA781FE3ECC242446A (intptr_t ___formRef0, GADUConsentFormLoadCompletionHandler_tB3B507F1E869845FC76649E532C4F97D74663171 * ___consentFormLoadCallback1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormPresentCompletionHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUConsentFormPresentCompletionHandler__ctor_mC0496391B8F712C7E964B9B952724B4929ED65E4 (GADUConsentFormPresentCompletionHandler_t3C7FFF82ED42EBEA369035452FF27037DC4B7AEC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADUPresentConsentForm(System.IntPtr,GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormPresentCompletionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUPresentConsentForm_mD6949A65B34DC25371D97EFC748461592EA91478 (intptr_t ___formRef0, GADUConsentFormPresentCompletionHandler_t3C7FFF82ED42EBEA369035452FF27037DC4B7AEC * ___consentFormPresentCallback1, const RuntimeMethod* method);
// GoogleMobileAds.Ump.iOS.ConsentFormClient GoogleMobileAds.Ump.iOS.ConsentFormClient::IntPtrToConsentFormClient(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * ConsentFormClient_IntPtrToConsentFormClient_mBCE35122B228A66111B2A0BD69B0E4A85BB02A6F (intptr_t ___clientRef0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Int32 GoogleMobileAds.Ump.iOS.Externs::GADUGetFormErrorCode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Externs_GADUGetFormErrorCode_m2D594D80A909EEFD3911365A99E3F655EBC59F6D (intptr_t ___error0, const RuntimeMethod* method);
// System.String GoogleMobileAds.Ump.iOS.Externs::GADUGetFormErrorMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Externs_GADUGetFormErrorMessage_m807BA496676E82FF7D662F3B24AB411ECA6E9F78 (intptr_t ___error0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Ump.Api.FormError::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormError__ctor_mE6EB5389ED289203D684FAC56CFB1F5F75B7AAB4 (FormError_t19F992E18FAEA71801675569E82F828A3FDE2BC2 * __this, int32_t ___errorCode0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.Action`1<GoogleMobileAds.Ump.Api.FormError>::Invoke(!0)
inline void Action_1_Invoke_mF8AC470A68B80B49FA7A929715ACBC51A8839C05 (Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF * __this, FormError_t19F992E18FAEA71801675569E82F828A3FDE2BC2 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF *, FormError_t19F992E18FAEA71801675569E82F828A3FDE2BC2 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_op_Explicit_mD2A800A063FDBDAB31CD7EC97DD63A896A3568A6 (intptr_t ___value0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormClient_Dispose_m0A7A9B505839983D8DA35F5B577869641C3B152F (ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormClient__ctor_mDD54E675358C2BCB88981D3FFB413E8663574BA0 (ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient::ConsentInfoUpdateCallback(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInformationClient_ConsentInfoUpdateCallback_mF9521B6FE6F532FCCB18C9BE298D80E77E0D5C2A (intptr_t ___clientRef0, intptr_t ___errorRef1, const RuntimeMethod* method);
// System.IntPtr GoogleMobileAds.Ump.iOS.Externs::GADUCreateConsentInformation(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateConsentInformation_m748AB19D96117DFD6867803B7B92DBAB171FAE1D (intptr_t ___clientRef0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient::set_ConsentInformationPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInformationClient_set_ConsentInformationPtr_mAC1E203BC4F19981656F99E6C07ECF9D7CB1A523 (ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * __this, intptr_t ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADURelease(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADURelease_mAC8FE44EFBB0E79C5111C4A374381FD51F5E51D6 (intptr_t ___obj0, const RuntimeMethod* method);
// System.IntPtr GoogleMobileAds.Ump.iOS.Externs::GADUCreateRequestParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateRequestParameters_mA9705253408FD452414FB37F4175429735F5BB01 (const RuntimeMethod* method);
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADUSetRequestParametersTagForUnderAgeOfConsent(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetRequestParametersTagForUnderAgeOfConsent_m1A415F973C96206A91CA39BF794FF43C167C32C6 (intptr_t ___requestParametersRef0, bool ___tagForUnderAgeOfConsent1, const RuntimeMethod* method);
// System.IntPtr GoogleMobileAds.Ump.iOS.Externs::GADUCreateDebugSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateDebugSettings_mD53C6E6B4629911346F367D4E6CCB5F0C64C8DCE (const RuntimeMethod* method);
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADUSetDebugSettingsDebugGeography(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetDebugSettingsDebugGeography_mF6CDCD05C6BEAE13D3ADDE5F0EAE245B8509E991 (intptr_t ___debugSettingsRef0, int32_t ___debugGeography1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::CopyTo(!0[])
inline void List_1_CopyTo_mD611B6BC5B58FB302960B5F130DDC7A82AA14A34 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___array0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, const RuntimeMethod*))List_1_CopyTo_mC5E1C7D45426A545720C4B0E300A6142AB811980_gshared)(__this, ___array0, method);
}
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADUSetDebugSettingsTestDeviceIdentifiers(System.IntPtr,System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetDebugSettingsTestDeviceIdentifiers_mBDDE57BAA26BF42BCDB4B85D98BE8B3DA3DBA72E (intptr_t ___debugSettingsRef0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___testDeviceIDs1, int32_t ___testDeviceIDLength2, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADUSetRequestParametersDebugSettings(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetRequestParametersDebugSettings_m828DA3D3E06F601CA57A8AFFC0E25E2A5E2C48D1 (intptr_t ___requestParametersRef0, intptr_t ___debugSettingsRef1, const RuntimeMethod* method);
// System.IntPtr GoogleMobileAds.Ump.iOS.ConsentInformationClient::get_ConsentInformationPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ConsentInformationClient_get_ConsentInformationPtr_m4963DEC66A1AA7821C6F8147F9DC15CF07620A63_inline (ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient/GADUConsentInfoUpdateCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUConsentInfoUpdateCallback__ctor_m046208D0200081111E42781DA0595E7BD9DADB34 (GADUConsentInfoUpdateCallback_t5A82716C66B2445B5E5AFE087C5BD547E9A1E43C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADURequestConsentInfoUpdate(System.IntPtr,System.IntPtr,GoogleMobileAds.Ump.iOS.ConsentInformationClient/GADUConsentInfoUpdateCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADURequestConsentInfoUpdate_mB5AB4E0F850AF2227ED4DBF2C1B8E2A09DE854A0 (intptr_t ___clientRef0, intptr_t ___parameters1, GADUConsentInfoUpdateCallback_t5A82716C66B2445B5E5AFE087C5BD547E9A1E43C * ___callback2, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADUResetConsentInformation(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUResetConsentInformation_mD4533679E4D5538CA02899777E619A7349482144 (intptr_t ___consentInfoRef0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 GoogleMobileAds.Ump.iOS.Externs::GADUGetConsentStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Externs_GADUGetConsentStatus_m354B0BEA4260E5C8FFDC5438E53F415AF43882EC (intptr_t ___consentInfoRef0, const RuntimeMethod* method);
// System.Boolean GoogleMobileAds.Ump.iOS.Externs::GADUIsConsentFormAvailable(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Externs_GADUIsConsentFormAvailable_mEABC7D6360149EB5ABDF28F560B3989222B29DC6 (intptr_t ___consentInfoRef0, const RuntimeMethod* method);
// GoogleMobileAds.Ump.iOS.ConsentInformationClient GoogleMobileAds.Ump.iOS.ConsentInformationClient::IntPtrToConsentInformationClient(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * ConsentInformationClient_IntPtrToConsentInformationClient_m765D09FB6FC10FD9157B11D611BC0441DE7F325A (intptr_t ___clientRef0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInformationClient_Dispose_mFF4B7F966433B60B10A4C0F3DFECCF52DCE31958 (ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInformationClient__ctor_mF548CA29D8F108B088948F906BA287555949C022 (ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * __this, const RuntimeMethod* method);
// GoogleMobileAds.Ump.iOS.ConsentFormClient GoogleMobileAds.Ump.iOS.ConsentFormClient::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * ConsentFormClient_get_Instance_mD4C56CE35B5DAE6767CAC06EE3145A21A2483A18_inline (const RuntimeMethod* method);
// GoogleMobileAds.Ump.iOS.ConsentInformationClient GoogleMobileAds.Ump.iOS.ConsentInformationClient::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * ConsentInformationClient_get_Instance_mEFF3C438EFE0A9030E3FB7438EA2B9DE2B2B61AB_inline (const RuntimeMethod* method);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GADUGetFormErrorCode(intptr_t);
IL2CPP_EXTERN_C char* DEFAULT_CALL GADUGetFormErrorMessage(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GADUCreateRequestParameters();
IL2CPP_EXTERN_C void DEFAULT_CALL GADUSetRequestParametersTagForUnderAgeOfConsent(intptr_t, int32_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GADUCreateDebugSettings();
IL2CPP_EXTERN_C void DEFAULT_CALL GADUSetDebugSettingsDebugGeography(intptr_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL GADUSetDebugSettingsTestDeviceIdentifiers(intptr_t, char**, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL GADUSetRequestParametersDebugSettings(intptr_t, intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GADUCreateConsentInformation(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL GADUResetConsentInformation(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GADUGetConsentStatus(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GADUIsConsentFormAvailable(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL GADURequestConsentInfoUpdate(intptr_t, intptr_t, Il2CppMethodPointer);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GADUCreateConsentForm(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL GADULoadConsentForm(intptr_t, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL GADUPresentConsentForm(intptr_t, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL GADURelease(intptr_t);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ConsentFormClient_ConsentFormLoadCompletionHandler_m4B916C6E835EE6CB1F1FA098F7A4AA5688703CE2(intptr_t ___clientRef0, intptr_t ___errorRef1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	ConsentFormClient_ConsentFormLoadCompletionHandler_m4B916C6E835EE6CB1F1FA098F7A4AA5688703CE2(___clientRef0, ___errorRef1, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ConsentFormClient_ConsentFormPresentCompletionHandler_m6D30E7CE3B6EAD19E21A0ED8C96ABFB324CAB64D(intptr_t ___clientRef0, intptr_t ___errorRef1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	ConsentFormClient_ConsentFormPresentCompletionHandler_m6D30E7CE3B6EAD19E21A0ED8C96ABFB324CAB64D(___clientRef0, ___errorRef1, NULL);

}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormClient__ctor_mDD54E675358C2BCB88981D3FFB413E8663574BA0 (ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0033;
		}
	}
	{
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
		L_1 = GCHandle_Alloc_m937829FAD1C69F168CF045B9406228AC9F8B9389(__this, /*hidden argument*/NULL);
		intptr_t L_2;
		L_2 = GCHandle_op_Explicit_m0A74179B3DD6D87F0863EF55176F924D641E42BF(L_1, /*hidden argument*/NULL);
		__this->set__consentFormClientPtr_2((intptr_t)L_2);
		intptr_t L_3 = __this->get__consentFormClientPtr_2();
		intptr_t L_4;
		L_4 = Externs_GADUCreateConsentForm_m84C8627BE538B6BEA5CD097E2C46F302CF198ECE((intptr_t)L_3, /*hidden argument*/NULL);
		__this->set__consentForm_1((intptr_t)L_4);
	}

IL_0033:
	{
		return;
	}
}
// GoogleMobileAds.Ump.iOS.ConsentFormClient GoogleMobileAds.Ump.iOS.ConsentFormClient::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * ConsentFormClient_get_Instance_mD4C56CE35B5DAE6767CAC06EE3145A21A2483A18 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var);
		ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * L_0 = ((ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_StaticFields*)il2cpp_codegen_static_fields_for(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var))->get__instance_0();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient::Load(System.Action,System.Action`1<GoogleMobileAds.Ump.Api.FormError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormClient_Load_m373FD1D6DE657A6B8B7F7D05D962B2004FCF36F7 (ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onFormLoaded0, Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF * ___onError1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentFormClient_ConsentFormLoadCompletionHandler_m4B916C6E835EE6CB1F1FA098F7A4AA5688703CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GADUConsentFormLoadCompletionHandler_tB3B507F1E869845FC76649E532C4F97D74663171_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___onFormLoaded0;
		__this->set__loadCompleteAction_3(L_0);
		Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF * L_1 = ___onError1;
		__this->set__loadFailedAction_4(L_1);
		int32_t L_2;
		L_2 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)8))))
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_3 = __this->get__consentForm_1();
		IL2CPP_RUNTIME_CLASS_INIT(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var);
		GADUConsentFormLoadCompletionHandler_tB3B507F1E869845FC76649E532C4F97D74663171 * L_4 = ((ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_StaticFields*)il2cpp_codegen_static_fields_for(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_6();
		G_B2_0 = L_3;
		if (L_4)
		{
			G_B3_0 = L_3;
			goto IL_0037;
		}
	}
	{
		GADUConsentFormLoadCompletionHandler_tB3B507F1E869845FC76649E532C4F97D74663171 * L_5 = (GADUConsentFormLoadCompletionHandler_tB3B507F1E869845FC76649E532C4F97D74663171 *)il2cpp_codegen_object_new(GADUConsentFormLoadCompletionHandler_tB3B507F1E869845FC76649E532C4F97D74663171_il2cpp_TypeInfo_var);
		GADUConsentFormLoadCompletionHandler__ctor_m17D111E0DB13154A5F1DFBE7C371B867B16B427D(L_5, NULL, (intptr_t)((intptr_t)ConsentFormClient_ConsentFormLoadCompletionHandler_m4B916C6E835EE6CB1F1FA098F7A4AA5688703CE2_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var);
		((ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_StaticFields*)il2cpp_codegen_static_fields_for(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_6(L_5);
		G_B3_0 = G_B2_0;
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var);
		GADUConsentFormLoadCompletionHandler_tB3B507F1E869845FC76649E532C4F97D74663171 * L_6 = ((ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_StaticFields*)il2cpp_codegen_static_fields_for(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_6();
		Externs_GADULoadConsentForm_m26BA61BF519CC8AB61D662CA781FE3ECC242446A((intptr_t)G_B3_0, L_6, /*hidden argument*/NULL);
	}

IL_0041:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient::Show(System.Action`1<GoogleMobileAds.Ump.Api.FormError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormClient_Show_m2D7D66555FF6625DD721983696D162BC7DCA682E (ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * __this, Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF * ___onDismissed0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentFormClient_ConsentFormPresentCompletionHandler_m6D30E7CE3B6EAD19E21A0ED8C96ABFB324CAB64D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GADUConsentFormPresentCompletionHandler_t3C7FFF82ED42EBEA369035452FF27037DC4B7AEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	{
		Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF * L_0 = ___onDismissed0;
		__this->set__consentFormDismissedAction_5(L_0);
		int32_t L_1;
		L_1 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_003a;
		}
	}
	{
		intptr_t L_2 = __this->get__consentForm_1();
		IL2CPP_RUNTIME_CLASS_INIT(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var);
		GADUConsentFormPresentCompletionHandler_t3C7FFF82ED42EBEA369035452FF27037DC4B7AEC * L_3 = ((ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_StaticFields*)il2cpp_codegen_static_fields_for(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_7();
		G_B2_0 = L_2;
		if (L_3)
		{
			G_B3_0 = L_2;
			goto IL_0030;
		}
	}
	{
		GADUConsentFormPresentCompletionHandler_t3C7FFF82ED42EBEA369035452FF27037DC4B7AEC * L_4 = (GADUConsentFormPresentCompletionHandler_t3C7FFF82ED42EBEA369035452FF27037DC4B7AEC *)il2cpp_codegen_object_new(GADUConsentFormPresentCompletionHandler_t3C7FFF82ED42EBEA369035452FF27037DC4B7AEC_il2cpp_TypeInfo_var);
		GADUConsentFormPresentCompletionHandler__ctor_mC0496391B8F712C7E964B9B952724B4929ED65E4(L_4, NULL, (intptr_t)((intptr_t)ConsentFormClient_ConsentFormPresentCompletionHandler_m6D30E7CE3B6EAD19E21A0ED8C96ABFB324CAB64D_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var);
		((ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_StaticFields*)il2cpp_codegen_static_fields_for(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_7(L_4);
		G_B3_0 = G_B2_0;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var);
		GADUConsentFormPresentCompletionHandler_t3C7FFF82ED42EBEA369035452FF27037DC4B7AEC * L_5 = ((ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_StaticFields*)il2cpp_codegen_static_fields_for(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_7();
		Externs_GADUPresentConsentForm_mD6949A65B34DC25371D97EFC748461592EA91478((intptr_t)G_B3_0, L_5, /*hidden argument*/NULL);
	}

IL_003a:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient::ConsentFormLoadCompletionHandler(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormClient_ConsentFormLoadCompletionHandler_m4B916C6E835EE6CB1F1FA098F7A4AA5688703CE2 (intptr_t ___clientRef0, intptr_t ___errorRef1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF8AC470A68B80B49FA7A929715ACBC51A8839C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormError_t19F992E18FAEA71801675569E82F828A3FDE2BC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3296FB3BF3E142D4895B55FBC5FB54361B9207CA);
		s_Il2CppMethodInitialized = true;
	}
	ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	EntryPointNotFoundException_tD0666CDCBD81C969BAAC14899569BFED2E05F9DC * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		intptr_t L_0 = ___clientRef0;
		IL2CPP_RUNTIME_CLASS_INIT(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var);
		ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * L_1;
		L_1 = ConsentFormClient_IntPtrToConsentFormClient_mBCE35122B228A66111B2A0BD69B0E4A85BB02A6F((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		intptr_t L_2 = ___errorRef1;
		bool L_3;
		L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * L_4 = V_0;
		NullCheck(L_4);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = L_4->get__loadCompleteAction_3();
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * L_6 = V_0;
		NullCheck(L_6);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = L_6->get__loadCompleteAction_3();
		NullCheck(L_7);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_7, /*hidden argument*/NULL);
	}

IL_002d:
	{
		goto IL_0094;
	}

IL_0032:
	{
		ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * L_8 = V_0;
		NullCheck(L_8);
		Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF * L_9 = L_8->get__loadFailedAction_4();
		if (!L_9)
		{
			goto IL_0094;
		}
	}
	{
		V_1 = 7;
		V_2 = _stringLiteral3296FB3BF3E142D4895B55FBC5FB54361B9207CA;
	}

IL_0045:
	try
	{ // begin try (depth: 1)
		intptr_t L_10 = ___errorRef1;
		int32_t L_11;
		L_11 = Externs_GADUGetFormErrorCode_m2D594D80A909EEFD3911365A99E3F655EBC59F6D((intptr_t)L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		intptr_t L_12 = ___errorRef1;
		String_t* L_13;
		L_13 = Externs_GADUGetFormErrorMessage_m807BA496676E82FF7D662F3B24AB411ECA6E9F78((intptr_t)L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		goto IL_0082;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EntryPointNotFoundException_tD0666CDCBD81C969BAAC14899569BFED2E05F9DC_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0058;
		}
		throw e;
	}

CATCH_0058:
	{ // begin catch(System.EntryPointNotFoundException)
		V_3 = ((EntryPointNotFoundException_tD0666CDCBD81C969BAAC14899569BFED2E05F9DC *)IL2CPP_GET_ACTIVE_EXCEPTION(EntryPointNotFoundException_tD0666CDCBD81C969BAAC14899569BFED2E05F9DC *));
		MethodBase_t * L_14;
		L_14 = il2cpp_codegen_get_method_object(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentFormClient_ConsentFormLoadCompletionHandler_m4B916C6E835EE6CB1F1FA098F7A4AA5688703CE2_RuntimeMethod_var)));
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_14);
		EntryPointNotFoundException_tD0666CDCBD81C969BAAC14899569BFED2E05F9DC * L_16 = V_3;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_16);
		String_t* L_18;
		L_18 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A42A54D7FD4D3A3A3F27FE6D9BA4765B168528A)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB3C01CC2E6DD25665EFC9D45FBFCDDB7EE3F0B1)), L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_18, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0082;
	} // end catch (depth: 1)

IL_0082:
	{
		ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * L_19 = V_0;
		NullCheck(L_19);
		Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF * L_20 = L_19->get__loadFailedAction_4();
		int32_t L_21 = V_1;
		String_t* L_22 = V_2;
		FormError_t19F992E18FAEA71801675569E82F828A3FDE2BC2 * L_23 = (FormError_t19F992E18FAEA71801675569E82F828A3FDE2BC2 *)il2cpp_codegen_object_new(FormError_t19F992E18FAEA71801675569E82F828A3FDE2BC2_il2cpp_TypeInfo_var);
		FormError__ctor_mE6EB5389ED289203D684FAC56CFB1F5F75B7AAB4(L_23, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		Action_1_Invoke_mF8AC470A68B80B49FA7A929715ACBC51A8839C05(L_20, L_23, /*hidden argument*/Action_1_Invoke_mF8AC470A68B80B49FA7A929715ACBC51A8839C05_RuntimeMethod_var);
	}

IL_0094:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient::ConsentFormPresentCompletionHandler(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormClient_ConsentFormPresentCompletionHandler_m6D30E7CE3B6EAD19E21A0ED8C96ABFB324CAB64D (intptr_t ___clientRef0, intptr_t ___errorRef1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF8AC470A68B80B49FA7A929715ACBC51A8839C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormError_t19F992E18FAEA71801675569E82F828A3FDE2BC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral981AE4478E71C4EC026A30E7892E7C4381F95DB9);
		s_Il2CppMethodInitialized = true;
	}
	ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * V_0 = NULL;
	FormError_t19F992E18FAEA71801675569E82F828A3FDE2BC2 * V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	EntryPointNotFoundException_tD0666CDCBD81C969BAAC14899569BFED2E05F9DC * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		intptr_t L_0 = ___clientRef0;
		IL2CPP_RUNTIME_CLASS_INIT(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var);
		ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * L_1;
		L_1 = ConsentFormClient_IntPtrToConsentFormClient_mBCE35122B228A66111B2A0BD69B0E4A85BB02A6F((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * L_2 = V_0;
		NullCheck(L_2);
		Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF * L_3 = L_2->get__consentFormDismissedAction_5();
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		V_1 = (FormError_t19F992E18FAEA71801675569E82F828A3FDE2BC2 *)NULL;
		intptr_t L_4 = ___errorRef1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0074;
		}
	}
	{
		V_2 = 5;
		V_3 = _stringLiteral981AE4478E71C4EC026A30E7892E7C4381F95DB9;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		intptr_t L_6 = ___errorRef1;
		int32_t L_7;
		L_7 = Externs_GADUGetFormErrorCode_m2D594D80A909EEFD3911365A99E3F655EBC59F6D((intptr_t)L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		intptr_t L_8 = ___errorRef1;
		String_t* L_9;
		L_9 = Externs_GADUGetFormErrorMessage_m807BA496676E82FF7D662F3B24AB411ECA6E9F78((intptr_t)L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		goto IL_006c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EntryPointNotFoundException_tD0666CDCBD81C969BAAC14899569BFED2E05F9DC_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0040;
		}
		throw e;
	}

CATCH_0040:
	{ // begin catch(System.EntryPointNotFoundException)
		V_4 = ((EntryPointNotFoundException_tD0666CDCBD81C969BAAC14899569BFED2E05F9DC *)IL2CPP_GET_ACTIVE_EXCEPTION(EntryPointNotFoundException_tD0666CDCBD81C969BAAC14899569BFED2E05F9DC *));
		MethodBase_t * L_10;
		L_10 = il2cpp_codegen_get_method_object(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentFormClient_ConsentFormPresentCompletionHandler_m6D30E7CE3B6EAD19E21A0ED8C96ABFB324CAB64D_RuntimeMethod_var)));
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_10);
		EntryPointNotFoundException_tD0666CDCBD81C969BAAC14899569BFED2E05F9DC * L_12 = V_4;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		String_t* L_14;
		L_14 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A42A54D7FD4D3A3A3F27FE6D9BA4765B168528A)), L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB3C01CC2E6DD25665EFC9D45FBFCDDB7EE3F0B1)), L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_14, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_006c;
	} // end catch (depth: 1)

IL_006c:
	{
		int32_t L_15 = V_2;
		String_t* L_16 = V_3;
		FormError_t19F992E18FAEA71801675569E82F828A3FDE2BC2 * L_17 = (FormError_t19F992E18FAEA71801675569E82F828A3FDE2BC2 *)il2cpp_codegen_object_new(FormError_t19F992E18FAEA71801675569E82F828A3FDE2BC2_il2cpp_TypeInfo_var);
		FormError__ctor_mE6EB5389ED289203D684FAC56CFB1F5F75B7AAB4(L_17, L_15, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
	}

IL_0074:
	{
		ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * L_18 = V_0;
		NullCheck(L_18);
		Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF * L_19 = L_18->get__consentFormDismissedAction_5();
		FormError_t19F992E18FAEA71801675569E82F828A3FDE2BC2 * L_20 = V_1;
		NullCheck(L_19);
		Action_1_Invoke_mF8AC470A68B80B49FA7A929715ACBC51A8839C05(L_19, L_20, /*hidden argument*/Action_1_Invoke_mF8AC470A68B80B49FA7A929715ACBC51A8839C05_RuntimeMethod_var);
		return;
	}
}
// GoogleMobileAds.Ump.iOS.ConsentFormClient GoogleMobileAds.Ump.iOS.ConsentFormClient::IntPtrToConsentFormClient(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * ConsentFormClient_IntPtrToConsentFormClient_mBCE35122B228A66111B2A0BD69B0E4A85BB02A6F (intptr_t ___clientRef0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___clientRef0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
		L_1 = GCHandle_op_Explicit_mD2A800A063FDBDAB31CD7EC97DD63A896A3568A6((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2;
		L_2 = GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		return ((ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D *)IsInstClass((RuntimeObject*)L_2, ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var));
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormClient_Dispose_m0A7A9B505839983D8DA35F5B577869641C3B152F (ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * __this, const RuntimeMethod* method)
{
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get__consentFormClientPtr_2();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
		L_1 = GCHandle_op_Explicit_mD2A800A063FDBDAB31CD7EC97DD63A896A3568A6((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormClient_Finalize_m22C7CB870BDE065A8360B1E6ADD4D6016087F814 (ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		ConsentFormClient_Dispose_m0A7A9B505839983D8DA35F5B577869641C3B152F(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x12, IL_0012)
	}

IL_0012:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormClient__cctor_m6FD621F77E54313327961B7E1D5487C08008ADEA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * L_0 = (ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D *)il2cpp_codegen_object_new(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var);
		ConsentFormClient__ctor_mDD54E675358C2BCB88981D3FFB413E8663574BA0(L_0, /*hidden argument*/NULL);
		((ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_StaticFields*)il2cpp_codegen_static_fields_for(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var))->set__instance_0(L_0);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ConsentInformationClient_ConsentInfoUpdateCallback_mF9521B6FE6F532FCCB18C9BE298D80E77E0D5C2A(intptr_t ___clientRef0, intptr_t ___errorRef1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	ConsentInformationClient_ConsentInfoUpdateCallback_mF9521B6FE6F532FCCB18C9BE298D80E77E0D5C2A(___clientRef0, ___errorRef1, NULL);

}
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInformationClient__ctor_mF548CA29D8F108B088948F906BA287555949C022 (ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0033;
		}
	}
	{
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
		L_1 = GCHandle_Alloc_m937829FAD1C69F168CF045B9406228AC9F8B9389(__this, /*hidden argument*/NULL);
		intptr_t L_2;
		L_2 = GCHandle_op_Explicit_m0A74179B3DD6D87F0863EF55176F924D641E42BF(L_1, /*hidden argument*/NULL);
		__this->set__consentInformationClientPtr_1((intptr_t)L_2);
		intptr_t L_3 = __this->get__consentInformationClientPtr_1();
		intptr_t L_4;
		L_4 = Externs_GADUCreateConsentInformation_m748AB19D96117DFD6867803B7B92DBAB171FAE1D((intptr_t)L_3, /*hidden argument*/NULL);
		ConsentInformationClient_set_ConsentInformationPtr_mAC1E203BC4F19981656F99E6C07ECF9D7CB1A523(__this, (intptr_t)L_4, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.IntPtr GoogleMobileAds.Ump.iOS.ConsentInformationClient::get_ConsentInformationPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ConsentInformationClient_get_ConsentInformationPtr_m4963DEC66A1AA7821C6F8147F9DC15CF07620A63 (ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__consentInformationPtr_2();
		return (intptr_t)L_0;
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient::set_ConsentInformationPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInformationClient_set_ConsentInformationPtr_mAC1E203BC4F19981656F99E6C07ECF9D7CB1A523 (ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * __this, intptr_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__consentInformationPtr_2();
		Externs_GADURelease_mAC8FE44EFBB0E79C5111C4A374381FD51F5E51D6((intptr_t)L_0, /*hidden argument*/NULL);
		intptr_t L_1 = ___value0;
		__this->set__consentInformationPtr_2((intptr_t)L_1);
		return;
	}
}
// GoogleMobileAds.Ump.iOS.ConsentInformationClient GoogleMobileAds.Ump.iOS.ConsentInformationClient::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * ConsentInformationClient_get_Instance_mEFF3C438EFE0A9030E3FB7438EA2B9DE2B2B61AB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_il2cpp_TypeInfo_var);
		ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * L_0 = ((ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_StaticFields*)il2cpp_codegen_static_fields_for(ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_il2cpp_TypeInfo_var))->get__instance_0();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient::Update(GoogleMobileAds.Ump.Api.ConsentRequestParameters,System.Action,System.Action`1<GoogleMobileAds.Ump.Api.FormError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInformationClient_Update_m75186F81955E671599F0556332DA4A37B2EFDAF7 (ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * __this, ConsentRequestParameters_t9F181ADB0E172B0D739101A93A409048A6E334ED * ___request0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onConsentInfoUpdateSuccessCallback1, Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF * ___onConsentInfoUpdateFailureCallback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentInformationClient_ConsentInfoUpdateCallback_mF9521B6FE6F532FCCB18C9BE298D80E77E0D5C2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GADUConsentInfoUpdateCallback_t5A82716C66B2445B5E5AFE087C5BD547E9A1E43C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_CopyTo_mD611B6BC5B58FB302960B5F130DDC7A82AA14A34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_3 = NULL;
	intptr_t G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	intptr_t G_B5_1;
	memset((&G_B5_1), 0, sizeof(G_B5_1));
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B4_1;
	memset((&G_B4_1), 0, sizeof(G_B4_1));
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___onConsentInfoUpdateSuccessCallback1;
		__this->set__consentInfoUpdateSuccessAction_3(L_0);
		Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF * L_1 = ___onConsentInfoUpdateFailureCallback2;
		__this->set__consentInfoUpdateFailureAction_4(L_1);
		int32_t L_2;
		L_2 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)8))))
		{
			goto IL_00aa;
		}
	}
	{
		intptr_t L_3;
		L_3 = Externs_GADUCreateRequestParameters_mA9705253408FD452414FB37F4175429735F5BB01(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		intptr_t L_4 = V_0;
		ConsentRequestParameters_t9F181ADB0E172B0D739101A93A409048A6E334ED * L_5 = ___request0;
		NullCheck(L_5);
		bool L_6 = L_5->get_TagForUnderAgeOfConsent_0();
		Externs_GADUSetRequestParametersTagForUnderAgeOfConsent_m1A415F973C96206A91CA39BF794FF43C167C32C6((intptr_t)L_4, L_6, /*hidden argument*/NULL);
		intptr_t L_7;
		L_7 = Externs_GADUCreateDebugSettings_mD53C6E6B4629911346F367D4E6CCB5F0C64C8DCE(/*hidden argument*/NULL);
		V_1 = (intptr_t)L_7;
		intptr_t L_8 = V_1;
		ConsentRequestParameters_t9F181ADB0E172B0D739101A93A409048A6E334ED * L_9 = ___request0;
		NullCheck(L_9);
		ConsentDebugSettings_tD24EE37056952EBB93665D986A9A8F60629FE913 * L_10 = L_9->get_ConsentDebugSettings_1();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_DebugGeography_0();
		Externs_GADUSetDebugSettingsDebugGeography_mF6CDCD05C6BEAE13D3ADDE5F0EAE245B8509E991((intptr_t)L_8, L_11, /*hidden argument*/NULL);
		ConsentRequestParameters_t9F181ADB0E172B0D739101A93A409048A6E334ED * L_12 = ___request0;
		NullCheck(L_12);
		ConsentDebugSettings_tD24EE37056952EBB93665D986A9A8F60629FE913 * L_13 = L_12->get_ConsentDebugSettings_1();
		NullCheck(L_13);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_14 = L_13->get_TestDeviceHashedIds_1();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_14, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		V_2 = L_15;
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_17 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_17);
		V_3 = L_18;
		ConsentRequestParameters_t9F181ADB0E172B0D739101A93A409048A6E334ED * L_19 = ___request0;
		NullCheck(L_19);
		ConsentDebugSettings_tD24EE37056952EBB93665D986A9A8F60629FE913 * L_20 = L_19->get_ConsentDebugSettings_1();
		NullCheck(L_20);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_21 = L_20->get_TestDeviceHashedIds_1();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = V_3;
		NullCheck(L_21);
		List_1_CopyTo_mD611B6BC5B58FB302960B5F130DDC7A82AA14A34(L_21, L_22, /*hidden argument*/List_1_CopyTo_mD611B6BC5B58FB302960B5F130DDC7A82AA14A34_RuntimeMethod_var);
		intptr_t L_23 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = V_3;
		int32_t L_25 = V_2;
		Externs_GADUSetDebugSettingsTestDeviceIdentifiers_mBDDE57BAA26BF42BCDB4B85D98BE8B3DA3DBA72E((intptr_t)L_23, L_24, L_25, /*hidden argument*/NULL);
	}

IL_007a:
	{
		intptr_t L_26 = V_0;
		intptr_t L_27 = V_1;
		Externs_GADUSetRequestParametersDebugSettings_m828DA3D3E06F601CA57A8AFFC0E25E2A5E2C48D1((intptr_t)L_26, (intptr_t)L_27, /*hidden argument*/NULL);
		intptr_t L_28;
		L_28 = ConsentInformationClient_get_ConsentInformationPtr_m4963DEC66A1AA7821C6F8147F9DC15CF07620A63_inline(__this, /*hidden argument*/NULL);
		intptr_t L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_il2cpp_TypeInfo_var);
		GADUConsentInfoUpdateCallback_t5A82716C66B2445B5E5AFE087C5BD547E9A1E43C * L_30 = ((ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_StaticFields*)il2cpp_codegen_static_fields_for(ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_5();
		G_B4_0 = L_29;
		G_B4_1 = L_28;
		if (L_30)
		{
			G_B5_0 = L_29;
			G_B5_1 = L_28;
			goto IL_00a0;
		}
	}
	{
		GADUConsentInfoUpdateCallback_t5A82716C66B2445B5E5AFE087C5BD547E9A1E43C * L_31 = (GADUConsentInfoUpdateCallback_t5A82716C66B2445B5E5AFE087C5BD547E9A1E43C *)il2cpp_codegen_object_new(GADUConsentInfoUpdateCallback_t5A82716C66B2445B5E5AFE087C5BD547E9A1E43C_il2cpp_TypeInfo_var);
		GADUConsentInfoUpdateCallback__ctor_m046208D0200081111E42781DA0595E7BD9DADB34(L_31, NULL, (intptr_t)((intptr_t)ConsentInformationClient_ConsentInfoUpdateCallback_mF9521B6FE6F532FCCB18C9BE298D80E77E0D5C2A_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_il2cpp_TypeInfo_var);
		((ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_StaticFields*)il2cpp_codegen_static_fields_for(ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_5(L_31);
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
	}

IL_00a0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_il2cpp_TypeInfo_var);
		GADUConsentInfoUpdateCallback_t5A82716C66B2445B5E5AFE087C5BD547E9A1E43C * L_32 = ((ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_StaticFields*)il2cpp_codegen_static_fields_for(ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_5();
		Externs_GADURequestConsentInfoUpdate_mB5AB4E0F850AF2227ED4DBF2C1B8E2A09DE854A0((intptr_t)G_B5_1, (intptr_t)G_B5_0, L_32, /*hidden argument*/NULL);
	}

IL_00aa:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInformationClient_Reset_m87AC0DFC9A3BC2AC34856F3554BAADC1CF7DD54E (ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_001b;
		}
	}
	{
		intptr_t L_1;
		L_1 = ConsentInformationClient_get_ConsentInformationPtr_m4963DEC66A1AA7821C6F8147F9DC15CF07620A63_inline(__this, /*hidden argument*/NULL);
		Externs_GADUResetConsentInformation_mD4533679E4D5538CA02899777E619A7349482144((intptr_t)L_1, /*hidden argument*/NULL);
		goto IL_003a;
	}

IL_001b:
	{
		MethodBase_t * L_2;
		L_2 = il2cpp_codegen_get_method_object(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentInformationClient_Reset_m87AC0DFC9A3BC2AC34856F3554BAADC1CF7DD54E_RuntimeMethod_var)));
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A42A54D7FD4D3A3A3F27FE6D9BA4765B168528A)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECB59AE03B3FE9DF44D788977626C01307347E50)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_5 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentInformationClient_Reset_m87AC0DFC9A3BC2AC34856F3554BAADC1CF7DD54E_RuntimeMethod_var)));
	}

IL_003a:
	{
		return;
	}
}
// System.Int32 GoogleMobileAds.Ump.iOS.ConsentInformationClient::GetConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConsentInformationClient_GetConsentStatus_mBDFD388BD66884ED176DA5B9ED29F184B2E7D0F3 (ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0038;
		}
	}
	{
		intptr_t L_1;
		L_1 = ConsentInformationClient_get_ConsentInformationPtr_m4963DEC66A1AA7821C6F8147F9DC15CF07620A63_inline(__this, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Externs_GADUGetConsentStatus_m354B0BEA4260E5C8FFDC5438E53F415AF43882EC((intptr_t)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_0032;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_0036;
			}
		}
	}
	{
		goto IL_0036;
	}

IL_0032:
	{
		return 2;
	}

IL_0034:
	{
		return 1;
	}

IL_0036:
	{
		int32_t L_4 = V_0;
		return L_4;
	}

IL_0038:
	{
		MethodBase_t * L_5;
		L_5 = il2cpp_codegen_get_method_object(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentInformationClient_GetConsentStatus_mBDFD388BD66884ED176DA5B9ED29F184B2E7D0F3_RuntimeMethod_var)));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		String_t* L_7;
		L_7 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A42A54D7FD4D3A3A3F27FE6D9BA4765B168528A)), L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECB59AE03B3FE9DF44D788977626C01307347E50)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_8 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentInformationClient_GetConsentStatus_mBDFD388BD66884ED176DA5B9ED29F184B2E7D0F3_RuntimeMethod_var)));
	}
}
// System.Boolean GoogleMobileAds.Ump.iOS.ConsentInformationClient::IsConsentFormAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentInformationClient_IsConsentFormAvailable_mF35F40A90EFE6128B0E9652A2E832E9F45966687 (ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0017;
		}
	}
	{
		intptr_t L_1;
		L_1 = ConsentInformationClient_get_ConsentInformationPtr_m4963DEC66A1AA7821C6F8147F9DC15CF07620A63_inline(__this, /*hidden argument*/NULL);
		bool L_2;
		L_2 = Externs_GADUIsConsentFormAvailable_mEABC7D6360149EB5ABDF28F560B3989222B29DC6((intptr_t)L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		MethodBase_t * L_3;
		L_3 = il2cpp_codegen_get_method_object(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentInformationClient_IsConsentFormAvailable_mF35F40A90EFE6128B0E9652A2E832E9F45966687_RuntimeMethod_var)));
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A42A54D7FD4D3A3A3F27FE6D9BA4765B168528A)), L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECB59AE03B3FE9DF44D788977626C01307347E50)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_6 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentInformationClient_IsConsentFormAvailable_mF35F40A90EFE6128B0E9652A2E832E9F45966687_RuntimeMethod_var)));
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient::ConsentInfoUpdateCallback(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInformationClient_ConsentInfoUpdateCallback_mF9521B6FE6F532FCCB18C9BE298D80E77E0D5C2A (intptr_t ___clientRef0, intptr_t ___errorRef1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF8AC470A68B80B49FA7A929715ACBC51A8839C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormError_t19F992E18FAEA71801675569E82F828A3FDE2BC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral981AE4478E71C4EC026A30E7892E7C4381F95DB9);
		s_Il2CppMethodInitialized = true;
	}
	ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	EntryPointNotFoundException_tD0666CDCBD81C969BAAC14899569BFED2E05F9DC * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		intptr_t L_0 = ___clientRef0;
		IL2CPP_RUNTIME_CLASS_INIT(ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_il2cpp_TypeInfo_var);
		ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * L_1;
		L_1 = ConsentInformationClient_IntPtrToConsentInformationClient_m765D09FB6FC10FD9157B11D611BC0441DE7F325A((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		intptr_t L_2 = ___errorRef1;
		bool L_3;
		L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * L_4 = V_0;
		NullCheck(L_4);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = L_4->get__consentInfoUpdateSuccessAction_3();
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * L_6 = V_0;
		NullCheck(L_6);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = L_6->get__consentInfoUpdateSuccessAction_3();
		NullCheck(L_7);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_7, /*hidden argument*/NULL);
	}

IL_002d:
	{
		goto IL_0094;
	}

IL_0032:
	{
		ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * L_8 = V_0;
		NullCheck(L_8);
		Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF * L_9 = L_8->get__consentInfoUpdateFailureAction_4();
		if (!L_9)
		{
			goto IL_0094;
		}
	}
	{
		V_1 = 5;
		V_2 = _stringLiteral981AE4478E71C4EC026A30E7892E7C4381F95DB9;
	}

IL_0045:
	try
	{ // begin try (depth: 1)
		intptr_t L_10 = ___errorRef1;
		int32_t L_11;
		L_11 = Externs_GADUGetFormErrorCode_m2D594D80A909EEFD3911365A99E3F655EBC59F6D((intptr_t)L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		intptr_t L_12 = ___errorRef1;
		String_t* L_13;
		L_13 = Externs_GADUGetFormErrorMessage_m807BA496676E82FF7D662F3B24AB411ECA6E9F78((intptr_t)L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		goto IL_0082;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EntryPointNotFoundException_tD0666CDCBD81C969BAAC14899569BFED2E05F9DC_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0058;
		}
		throw e;
	}

CATCH_0058:
	{ // begin catch(System.EntryPointNotFoundException)
		V_3 = ((EntryPointNotFoundException_tD0666CDCBD81C969BAAC14899569BFED2E05F9DC *)IL2CPP_GET_ACTIVE_EXCEPTION(EntryPointNotFoundException_tD0666CDCBD81C969BAAC14899569BFED2E05F9DC *));
		MethodBase_t * L_14;
		L_14 = il2cpp_codegen_get_method_object(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentInformationClient_ConsentInfoUpdateCallback_mF9521B6FE6F532FCCB18C9BE298D80E77E0D5C2A_RuntimeMethod_var)));
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_14);
		EntryPointNotFoundException_tD0666CDCBD81C969BAAC14899569BFED2E05F9DC * L_16 = V_3;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_16);
		String_t* L_18;
		L_18 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A42A54D7FD4D3A3A3F27FE6D9BA4765B168528A)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB3C01CC2E6DD25665EFC9D45FBFCDDB7EE3F0B1)), L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_18, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0082;
	} // end catch (depth: 1)

IL_0082:
	{
		ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * L_19 = V_0;
		NullCheck(L_19);
		Action_1_t67BBD769306035166F1945390CD72FB6DCEAE7CF * L_20 = L_19->get__consentInfoUpdateFailureAction_4();
		int32_t L_21 = V_1;
		String_t* L_22 = V_2;
		FormError_t19F992E18FAEA71801675569E82F828A3FDE2BC2 * L_23 = (FormError_t19F992E18FAEA71801675569E82F828A3FDE2BC2 *)il2cpp_codegen_object_new(FormError_t19F992E18FAEA71801675569E82F828A3FDE2BC2_il2cpp_TypeInfo_var);
		FormError__ctor_mE6EB5389ED289203D684FAC56CFB1F5F75B7AAB4(L_23, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		Action_1_Invoke_mF8AC470A68B80B49FA7A929715ACBC51A8839C05(L_20, L_23, /*hidden argument*/Action_1_Invoke_mF8AC470A68B80B49FA7A929715ACBC51A8839C05_RuntimeMethod_var);
	}

IL_0094:
	{
		return;
	}
}
// GoogleMobileAds.Ump.iOS.ConsentInformationClient GoogleMobileAds.Ump.iOS.ConsentInformationClient::IntPtrToConsentInformationClient(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * ConsentInformationClient_IntPtrToConsentInformationClient_m765D09FB6FC10FD9157B11D611BC0441DE7F325A (intptr_t ___clientRef0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___clientRef0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
		L_1 = GCHandle_op_Explicit_mD2A800A063FDBDAB31CD7EC97DD63A896A3568A6((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2;
		L_2 = GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		return ((ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 *)IsInstClass((RuntimeObject*)L_2, ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_il2cpp_TypeInfo_var));
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInformationClient_Dispose_mFF4B7F966433B60B10A4C0F3DFECCF52DCE31958 (ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * __this, const RuntimeMethod* method)
{
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get__consentInformationClientPtr_1();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
		L_1 = GCHandle_op_Explicit_mD2A800A063FDBDAB31CD7EC97DD63A896A3568A6((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInformationClient_Finalize_mE8D12755161F43260A1569DE84C7B29E5255E331 (ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		ConsentInformationClient_Dispose_mFF4B7F966433B60B10A4C0F3DFECCF52DCE31958(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x12, IL_0012)
	}

IL_0012:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInformationClient__cctor_m7BBCBFC8C770E9EF4AC48B27E3B2FE3C3A08DCDD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * L_0 = (ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 *)il2cpp_codegen_object_new(ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_il2cpp_TypeInfo_var);
		ConsentInformationClient__ctor_mF548CA29D8F108B088948F906BA287555949C022(L_0, /*hidden argument*/NULL);
		((ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_StaticFields*)il2cpp_codegen_static_fields_for(ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_il2cpp_TypeInfo_var))->set__instance_0(L_0);
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
// System.Void GoogleMobileAds.Ump.iOS.Externs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs__ctor_m1F99D8BE759DC82467B9B7B242DB416B20EEC2E0 (Externs_t6EA997B2AEAAE00670C7DAF2CD57AB8E7BC032A7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 GoogleMobileAds.Ump.iOS.Externs::GADUGetFormErrorCode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Externs_GADUGetFormErrorCode_m2D594D80A909EEFD3911365A99E3F655EBC59F6D (intptr_t ___error0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GADUGetFormErrorCode)(___error0);

	return returnValue;
}
// System.String GoogleMobileAds.Ump.iOS.Externs::GADUGetFormErrorMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Externs_GADUGetFormErrorMessage_m807BA496676E82FF7D662F3B24AB411ECA6E9F78 (intptr_t ___error0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(GADUGetFormErrorMessage)(___error0);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr GoogleMobileAds.Ump.iOS.Externs::GADUCreateRequestParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateRequestParameters_mA9705253408FD452414FB37F4175429735F5BB01 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GADUCreateRequestParameters)();

	return returnValue;
}
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADUSetRequestParametersTagForUnderAgeOfConsent(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetRequestParametersTagForUnderAgeOfConsent_m1A415F973C96206A91CA39BF794FF43C167C32C6 (intptr_t ___requestParametersRef0, bool ___tagForUnderAgeOfConsent1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GADUSetRequestParametersTagForUnderAgeOfConsent)(___requestParametersRef0, static_cast<int32_t>(___tagForUnderAgeOfConsent1));

}
// System.IntPtr GoogleMobileAds.Ump.iOS.Externs::GADUCreateDebugSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateDebugSettings_mD53C6E6B4629911346F367D4E6CCB5F0C64C8DCE (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GADUCreateDebugSettings)();

	return returnValue;
}
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADUSetDebugSettingsDebugGeography(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetDebugSettingsDebugGeography_mF6CDCD05C6BEAE13D3ADDE5F0EAE245B8509E991 (intptr_t ___debugSettingsRef0, int32_t ___debugGeography1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GADUSetDebugSettingsDebugGeography)(___debugSettingsRef0, ___debugGeography1);

}
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADUSetDebugSettingsTestDeviceIdentifiers(System.IntPtr,System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetDebugSettingsTestDeviceIdentifiers_mBDDE57BAA26BF42BCDB4B85D98BE8B3DA3DBA72E (intptr_t ___debugSettingsRef0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___testDeviceIDs1, int32_t ___testDeviceIDLength2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char**, int32_t);

	// Marshaling of parameter '___testDeviceIDs1' to native representation
	char** ____testDeviceIDs1_marshaled = NULL;
	if (___testDeviceIDs1 != NULL)
	{
		il2cpp_array_size_t ____testDeviceIDs1_Length = (___testDeviceIDs1)->max_length;
		____testDeviceIDs1_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____testDeviceIDs1_Length + 1);
		(____testDeviceIDs1_marshaled)[____testDeviceIDs1_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____testDeviceIDs1_Length); i++)
		{
			(____testDeviceIDs1_marshaled)[i] = il2cpp_codegen_marshal_string((___testDeviceIDs1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____testDeviceIDs1_marshaled = NULL;
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GADUSetDebugSettingsTestDeviceIdentifiers)(___debugSettingsRef0, ____testDeviceIDs1_marshaled, ___testDeviceIDLength2);

	// Marshaling cleanup of parameter '___testDeviceIDs1' native representation
	if (____testDeviceIDs1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____testDeviceIDs1_marshaled_CleanupLoopCount = (___testDeviceIDs1 != NULL) ? (___testDeviceIDs1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____testDeviceIDs1_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____testDeviceIDs1_marshaled)[i]);
			(____testDeviceIDs1_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____testDeviceIDs1_marshaled);
		____testDeviceIDs1_marshaled = NULL;
	}

}
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADUSetRequestParametersDebugSettings(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetRequestParametersDebugSettings_m828DA3D3E06F601CA57A8AFFC0E25E2A5E2C48D1 (intptr_t ___requestParametersRef0, intptr_t ___debugSettingsRef1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GADUSetRequestParametersDebugSettings)(___requestParametersRef0, ___debugSettingsRef1);

}
// System.IntPtr GoogleMobileAds.Ump.iOS.Externs::GADUCreateConsentInformation(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateConsentInformation_m748AB19D96117DFD6867803B7B92DBAB171FAE1D (intptr_t ___clientRef0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GADUCreateConsentInformation)(___clientRef0);

	return returnValue;
}
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADUResetConsentInformation(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUResetConsentInformation_mD4533679E4D5538CA02899777E619A7349482144 (intptr_t ___consentInfoRef0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GADUResetConsentInformation)(___consentInfoRef0);

}
// System.Int32 GoogleMobileAds.Ump.iOS.Externs::GADUGetConsentStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Externs_GADUGetConsentStatus_m354B0BEA4260E5C8FFDC5438E53F415AF43882EC (intptr_t ___consentInfoRef0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GADUGetConsentStatus)(___consentInfoRef0);

	return returnValue;
}
// System.Boolean GoogleMobileAds.Ump.iOS.Externs::GADUIsConsentFormAvailable(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Externs_GADUIsConsentFormAvailable_mEABC7D6360149EB5ABDF28F560B3989222B29DC6 (intptr_t ___consentInfoRef0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GADUIsConsentFormAvailable)(___consentInfoRef0);

	return static_cast<bool>(returnValue);
}
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADURequestConsentInfoUpdate(System.IntPtr,System.IntPtr,GoogleMobileAds.Ump.iOS.ConsentInformationClient/GADUConsentInfoUpdateCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADURequestConsentInfoUpdate_mB5AB4E0F850AF2227ED4DBF2C1B8E2A09DE854A0 (intptr_t ___clientRef0, intptr_t ___parameters1, GADUConsentInfoUpdateCallback_t5A82716C66B2445B5E5AFE087C5BD547E9A1E43C * ___callback2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer);

	// Marshaling of parameter '___callback2' to native representation
	Il2CppMethodPointer ____callback2_marshaled = NULL;
	____callback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback2));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GADURequestConsentInfoUpdate)(___clientRef0, ___parameters1, ____callback2_marshaled);

}
// System.IntPtr GoogleMobileAds.Ump.iOS.Externs::GADUCreateConsentForm(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateConsentForm_m84C8627BE538B6BEA5CD097E2C46F302CF198ECE (intptr_t ___clientRef0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GADUCreateConsentForm)(___clientRef0);

	return returnValue;
}
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADULoadConsentForm(System.IntPtr,GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormLoadCompletionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADULoadConsentForm_m26BA61BF519CC8AB61D662CA781FE3ECC242446A (intptr_t ___formRef0, GADUConsentFormLoadCompletionHandler_tB3B507F1E869845FC76649E532C4F97D74663171 * ___consentFormLoadCallback1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);

	// Marshaling of parameter '___consentFormLoadCallback1' to native representation
	Il2CppMethodPointer ____consentFormLoadCallback1_marshaled = NULL;
	____consentFormLoadCallback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___consentFormLoadCallback1));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GADULoadConsentForm)(___formRef0, ____consentFormLoadCallback1_marshaled);

}
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADUPresentConsentForm(System.IntPtr,GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormPresentCompletionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUPresentConsentForm_mD6949A65B34DC25371D97EFC748461592EA91478 (intptr_t ___formRef0, GADUConsentFormPresentCompletionHandler_t3C7FFF82ED42EBEA369035452FF27037DC4B7AEC * ___consentFormPresentCallback1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);

	// Marshaling of parameter '___consentFormPresentCallback1' to native representation
	Il2CppMethodPointer ____consentFormPresentCallback1_marshaled = NULL;
	____consentFormPresentCallback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___consentFormPresentCallback1));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GADUPresentConsentForm)(___formRef0, ____consentFormPresentCallback1_marshaled);

}
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADURelease(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADURelease_mAC8FE44EFBB0E79C5111C4A374381FD51F5E51D6 (intptr_t ___obj0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GADURelease)(___obj0);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Ump.iOS.UmpClientFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UmpClientFactory__ctor_m48CD2FE69D324EE5ECDC070D35179E900E9F5E41 (UmpClientFactory_t58289FE962243D0624A26B6ABE29983880D64363 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.Ump.Common.IConsentFormClient GoogleMobileAds.Ump.iOS.UmpClientFactory::ConsentFormClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UmpClientFactory_ConsentFormClient_m8D7C730D24C9328A7C16447928F23949489CA69D (UmpClientFactory_t58289FE962243D0624A26B6ABE29983880D64363 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var);
		ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * L_1;
		L_1 = ConsentFormClient_get_Instance_mD4C56CE35B5DAE6767CAC06EE3145A21A2483A18_inline(/*hidden argument*/NULL);
		return L_1;
	}

IL_0011:
	{
		MethodBase_t * L_2;
		L_2 = il2cpp_codegen_get_method_object(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UmpClientFactory_ConsentFormClient_m8D7C730D24C9328A7C16447928F23949489CA69D_RuntimeMethod_var)));
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A42A54D7FD4D3A3A3F27FE6D9BA4765B168528A)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECB59AE03B3FE9DF44D788977626C01307347E50)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_5 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UmpClientFactory_ConsentFormClient_m8D7C730D24C9328A7C16447928F23949489CA69D_RuntimeMethod_var)));
	}
}
// GoogleMobileAds.Ump.Common.IConsentInformationClient GoogleMobileAds.Ump.iOS.UmpClientFactory::ConsentInformationClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UmpClientFactory_ConsentInformationClient_m9065245E84E53EDCAA10F53B3A5C40D966B47D13 (UmpClientFactory_t58289FE962243D0624A26B6ABE29983880D64363 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_il2cpp_TypeInfo_var);
		ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * L_1;
		L_1 = ConsentInformationClient_get_Instance_mEFF3C438EFE0A9030E3FB7438EA2B9DE2B2B61AB_inline(/*hidden argument*/NULL);
		return L_1;
	}

IL_0011:
	{
		MethodBase_t * L_2;
		L_2 = il2cpp_codegen_get_method_object(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UmpClientFactory_ConsentInformationClient_m9065245E84E53EDCAA10F53B3A5C40D966B47D13_RuntimeMethod_var)));
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A42A54D7FD4D3A3A3F27FE6D9BA4765B168528A)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECB59AE03B3FE9DF44D788977626C01307347E50)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_5 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UmpClientFactory_ConsentInformationClient_m9065245E84E53EDCAA10F53B3A5C40D966B47D13_RuntimeMethod_var)));
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADUConsentFormLoadCompletionHandler_tB3B507F1E869845FC76649E532C4F97D74663171 (GADUConsentFormLoadCompletionHandler_tB3B507F1E869845FC76649E532C4F97D74663171 * __this, intptr_t ___clientRef0, intptr_t ___errorRef1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___clientRef0, ___errorRef1);

}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormLoadCompletionHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUConsentFormLoadCompletionHandler__ctor_m17D111E0DB13154A5F1DFBE7C371B867B16B427D (GADUConsentFormLoadCompletionHandler_tB3B507F1E869845FC76649E532C4F97D74663171 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormLoadCompletionHandler::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUConsentFormLoadCompletionHandler_Invoke_mFB389DB53865928A6806D075C0902D8DC24156BB (GADUConsentFormLoadCompletionHandler_tB3B507F1E869845FC76649E532C4F97D74663171 * __this, intptr_t ___clientRef0, intptr_t ___errorRef1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___clientRef0, ___errorRef1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientRef0, ___errorRef1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___clientRef0, ___errorRef1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___clientRef0, ___errorRef1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___clientRef0, ___errorRef1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___clientRef0, ___errorRef1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientRef0, ___errorRef1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormLoadCompletionHandler::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADUConsentFormLoadCompletionHandler_BeginInvoke_mE8A73175C64F3B06955287C40BC038B68E57781E (GADUConsentFormLoadCompletionHandler_tB3B507F1E869845FC76649E532C4F97D74663171 * __this, intptr_t ___clientRef0, intptr_t ___errorRef1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___clientRef0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___errorRef1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormLoadCompletionHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUConsentFormLoadCompletionHandler_EndInvoke_m56E7FE4AD2B6658870A558156798523A19D70DD8 (GADUConsentFormLoadCompletionHandler_tB3B507F1E869845FC76649E532C4F97D74663171 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADUConsentFormPresentCompletionHandler_t3C7FFF82ED42EBEA369035452FF27037DC4B7AEC (GADUConsentFormPresentCompletionHandler_t3C7FFF82ED42EBEA369035452FF27037DC4B7AEC * __this, intptr_t ___clientRef0, intptr_t ___errorRef1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___clientRef0, ___errorRef1);

}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormPresentCompletionHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUConsentFormPresentCompletionHandler__ctor_mC0496391B8F712C7E964B9B952724B4929ED65E4 (GADUConsentFormPresentCompletionHandler_t3C7FFF82ED42EBEA369035452FF27037DC4B7AEC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormPresentCompletionHandler::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUConsentFormPresentCompletionHandler_Invoke_m5509B8E7AA413F40E5FBBA066EC89F055A18EA96 (GADUConsentFormPresentCompletionHandler_t3C7FFF82ED42EBEA369035452FF27037DC4B7AEC * __this, intptr_t ___clientRef0, intptr_t ___errorRef1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___clientRef0, ___errorRef1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientRef0, ___errorRef1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___clientRef0, ___errorRef1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___clientRef0, ___errorRef1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___clientRef0, ___errorRef1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___clientRef0, ___errorRef1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientRef0, ___errorRef1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormPresentCompletionHandler::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADUConsentFormPresentCompletionHandler_BeginInvoke_mDB9E51A97AAC41CC8C0105618F92D8AE1CC0F7AA (GADUConsentFormPresentCompletionHandler_t3C7FFF82ED42EBEA369035452FF27037DC4B7AEC * __this, intptr_t ___clientRef0, intptr_t ___errorRef1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___clientRef0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___errorRef1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormPresentCompletionHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUConsentFormPresentCompletionHandler_EndInvoke_m740BD245A4BBC16F3111ECC41F33CA4CFEDB9316 (GADUConsentFormPresentCompletionHandler_t3C7FFF82ED42EBEA369035452FF27037DC4B7AEC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADUConsentInfoUpdateCallback_t5A82716C66B2445B5E5AFE087C5BD547E9A1E43C (GADUConsentInfoUpdateCallback_t5A82716C66B2445B5E5AFE087C5BD547E9A1E43C * __this, intptr_t ___clientRef0, intptr_t ___errorRef1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___clientRef0, ___errorRef1);

}
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient/GADUConsentInfoUpdateCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUConsentInfoUpdateCallback__ctor_m046208D0200081111E42781DA0595E7BD9DADB34 (GADUConsentInfoUpdateCallback_t5A82716C66B2445B5E5AFE087C5BD547E9A1E43C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient/GADUConsentInfoUpdateCallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUConsentInfoUpdateCallback_Invoke_mCF4249500543D767CEE935D43DC4811CE432A7E7 (GADUConsentInfoUpdateCallback_t5A82716C66B2445B5E5AFE087C5BD547E9A1E43C * __this, intptr_t ___clientRef0, intptr_t ___errorRef1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___clientRef0, ___errorRef1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientRef0, ___errorRef1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___clientRef0, ___errorRef1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___clientRef0, ___errorRef1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___clientRef0, ___errorRef1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___clientRef0, ___errorRef1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientRef0, ___errorRef1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.Ump.iOS.ConsentInformationClient/GADUConsentInfoUpdateCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADUConsentInfoUpdateCallback_BeginInvoke_m3BBC81037E8A10838884A5AB4CF5C9A9E085AF90 (GADUConsentInfoUpdateCallback_t5A82716C66B2445B5E5AFE087C5BD547E9A1E43C * __this, intptr_t ___clientRef0, intptr_t ___errorRef1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___clientRef0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___errorRef1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient/GADUConsentInfoUpdateCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUConsentInfoUpdateCallback_EndInvoke_mB48FCF5B03AC76DDA2B305F4AA62E55BE4B85E24 (GADUConsentInfoUpdateCallback_t5A82716C66B2445B5E5AFE087C5BD547E9A1E43C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ConsentInformationClient_get_ConsentInformationPtr_m4963DEC66A1AA7821C6F8147F9DC15CF07620A63_inline (ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__consentInformationPtr_2();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * ConsentFormClient_get_Instance_mD4C56CE35B5DAE6767CAC06EE3145A21A2483A18_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var);
		ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D * L_0 = ((ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_StaticFields*)il2cpp_codegen_static_fields_for(ConsentFormClient_tADF21B1333E6997B426F60D4DB1F9A57BC3C6C4D_il2cpp_TypeInfo_var))->get__instance_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * ConsentInformationClient_get_Instance_mEFF3C438EFE0A9030E3FB7438EA2B9DE2B2B61AB_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_il2cpp_TypeInfo_var);
		ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088 * L_0 = ((ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_StaticFields*)il2cpp_codegen_static_fields_for(ConsentInformationClient_tFDD6FC21926AD24788AEEC5F04136ECF71FF3088_il2cpp_TypeInfo_var))->get__instance_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
