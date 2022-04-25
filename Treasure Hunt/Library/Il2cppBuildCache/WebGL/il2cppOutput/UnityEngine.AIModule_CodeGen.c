#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
extern void NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747 (void);
// 0x00000002 System.Single UnityEngine.AI.NavMeshAgent::get_stoppingDistance()
extern void NavMeshAgent_get_stoppingDistance_mE2F58A8DB9C8402F0373576AB91690E8B34C1EA6 (void);
// 0x00000003 System.Void UnityEngine.AI.NavMeshAgent::set_stoppingDistance(System.Single)
extern void NavMeshAgent_set_stoppingDistance_m9D26543E5329CE08A147EA11AECF8BB3996121C8 (void);
// 0x00000004 System.Void UnityEngine.AI.NavMeshAgent::ResetPath()
extern void NavMeshAgent_ResetPath_mEAB767048210D7EE16A3A765D41494D770D10A0C (void);
// 0x00000005 System.Single UnityEngine.AI.NavMeshAgent::get_speed()
extern void NavMeshAgent_get_speed_m5AA9A1B23412A8F5CE24A5312F6E6D4BA282B173 (void);
// 0x00000006 System.Void UnityEngine.AI.NavMeshAgent::set_speed(System.Single)
extern void NavMeshAgent_set_speed_mE71CB504B0CC1E977293722F9BA81B7060A99E14 (void);
// 0x00000007 System.Single UnityEngine.AI.NavMeshAgent::get_angularSpeed()
extern void NavMeshAgent_get_angularSpeed_mD38E53E3ECA7E21749A8546C8DC91C56908066AA (void);
// 0x00000008 System.Void UnityEngine.AI.NavMeshAgent::set_angularSpeed(System.Single)
extern void NavMeshAgent_set_angularSpeed_m5729B56BEEF8F863E5FA522135EC9B316A307F8D (void);
// 0x00000009 System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination_Injected(UnityEngine.Vector3&)
extern void NavMeshAgent_SetDestination_Injected_m41607AA111EE126BBBDCDDF76B7523B0BC369D9A (void);
// 0x0000000A UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::get_position()
extern void NavMeshHit_get_position_m66845935ED76B2480F72EE6628EFD9D6BF35B39A (void);
// 0x0000000B System.Void UnityEngine.AI.NavMesh::Internal_CallOnNavMeshPreUpdate()
extern void NavMesh_Internal_CallOnNavMeshPreUpdate_m5C0CEF0AEF92B6BE0368AA5ABC02B4CCDEFA9AD5 (void);
// 0x0000000C System.Boolean UnityEngine.AI.NavMesh::SamplePosition(UnityEngine.Vector3,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)
extern void NavMesh_SamplePosition_m9675E148D95E1D92ED75DC608CAA33E75ABCA05E (void);
// 0x0000000D System.Boolean UnityEngine.AI.NavMesh::SamplePosition_Injected(UnityEngine.Vector3&,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)
extern void NavMesh_SamplePosition_Injected_m080B714E6E15722B909226ADC8176F66A51E418A (void);
// 0x0000000E System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::.ctor(System.Object,System.IntPtr)
extern void OnNavMeshPreUpdate__ctor_mDBB85480C3EA968112EB3B356486B9C9FF387BD4 (void);
// 0x0000000F System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::Invoke()
extern void OnNavMeshPreUpdate_Invoke_m8950FEDFD3E07B272ED469FD1911AA98C60FC28D (void);
// 0x00000010 System.IAsyncResult UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::BeginInvoke(System.AsyncCallback,System.Object)
extern void OnNavMeshPreUpdate_BeginInvoke_m8B7FF1B745E38190A2B744775602508E77B291FA (void);
// 0x00000011 System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::EndInvoke(System.IAsyncResult)
extern void OnNavMeshPreUpdate_EndInvoke_mA263F64ADF01540E24327DDB24BD334539B1B4D2 (void);
static Il2CppMethodPointer s_methodPointers[17] = 
{
	NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747,
	NavMeshAgent_get_stoppingDistance_mE2F58A8DB9C8402F0373576AB91690E8B34C1EA6,
	NavMeshAgent_set_stoppingDistance_m9D26543E5329CE08A147EA11AECF8BB3996121C8,
	NavMeshAgent_ResetPath_mEAB767048210D7EE16A3A765D41494D770D10A0C,
	NavMeshAgent_get_speed_m5AA9A1B23412A8F5CE24A5312F6E6D4BA282B173,
	NavMeshAgent_set_speed_mE71CB504B0CC1E977293722F9BA81B7060A99E14,
	NavMeshAgent_get_angularSpeed_mD38E53E3ECA7E21749A8546C8DC91C56908066AA,
	NavMeshAgent_set_angularSpeed_m5729B56BEEF8F863E5FA522135EC9B316A307F8D,
	NavMeshAgent_SetDestination_Injected_m41607AA111EE126BBBDCDDF76B7523B0BC369D9A,
	NavMeshHit_get_position_m66845935ED76B2480F72EE6628EFD9D6BF35B39A,
	NavMesh_Internal_CallOnNavMeshPreUpdate_m5C0CEF0AEF92B6BE0368AA5ABC02B4CCDEFA9AD5,
	NavMesh_SamplePosition_m9675E148D95E1D92ED75DC608CAA33E75ABCA05E,
	NavMesh_SamplePosition_Injected_m080B714E6E15722B909226ADC8176F66A51E418A,
	OnNavMeshPreUpdate__ctor_mDBB85480C3EA968112EB3B356486B9C9FF387BD4,
	OnNavMeshPreUpdate_Invoke_m8950FEDFD3E07B272ED469FD1911AA98C60FC28D,
	OnNavMeshPreUpdate_BeginInvoke_m8B7FF1B745E38190A2B744775602508E77B291FA,
	OnNavMeshPreUpdate_EndInvoke_mA263F64ADF01540E24327DDB24BD334539B1B4D2,
};
extern void NavMeshHit_get_position_m66845935ED76B2480F72EE6628EFD9D6BF35B39A_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[1] = 
{
	{ 0x0600000A, NavMeshHit_get_position_m66845935ED76B2480F72EE6628EFD9D6BF35B39A_AdjustorThunk },
};
static const int32_t s_InvokerIndices[17] = 
{
	868,
	1095,
	966,
	1105,
	1095,
	966,
	1095,
	966,
	797,
	1103,
	1888,
	1365,
	1338,
	616,
	1105,
	471,
	948,
};
extern const CustomAttributesCacheGenerator g_UnityEngine_AIModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_AIModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_AIModule_CodeGenModule = 
{
	"UnityEngine.AIModule.dll",
	17,
	s_methodPointers,
	1,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_UnityEngine_AIModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
