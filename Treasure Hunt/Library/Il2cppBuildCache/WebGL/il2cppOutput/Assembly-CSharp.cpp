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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Func`2<UnityEngine.GameObject,System.Int32>
struct Func_2_tFA3D86D150CCC78E800EC5AC7D7E87E0E601B2AA;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t59A95566E6FBF6B195B841B400D0A6B7264A738B;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Linq.IOrderedEnumerable`1<UnityEngine.GameObject>
struct IOrderedEnumerable_1_t22EC0CAEE4317637119C1FC0200D53D8C0B80083;
// System.Linq.IOrderedEnumerable`1<System.Object>
struct IOrderedEnumerable_1_tB9F2319177B9E63FFCBB89F9E57F8529A97CC77B;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<Item>
struct List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// InventorySlot[]
struct InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C;
// Item[]
struct ItemU5BU5D_tEE54AD0D4D72299A508C229F13FAFD80E118048F;
// UnityEngine.Light[]
struct LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// Boar
struct Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8;
// BoarBehaviour
struct BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC;
// BoatTimer
struct BoatTimer_tCA778F4123D8111C121A88F0695D0D4A3FF98920;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635;
// UnityEngine.CharacterController
struct CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Counter
struct Counter_t6A281326FFA8D37BB4BCEBAD26FC34A124B9A24D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DisableInteractable
struct DisableInteractable_t5EE6E5532A0AFB30BD54E817519C4B929BFFDDC2;
// FallingPlatform
struct FallingPlatform_t20EB211BBB886A69DE45F91B5599AB5D9B219F75;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GetKeyFromChest
struct GetKeyFromChest_t85839C120AAD3BF6DD2B6663B22721EC13D5F091;
// UnityEngine.Gradient
struct Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// HideUIElement
struct HideUIElement_tCA67B50019E091EA5E882A6D0D036E342402805C;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// Interactable
struct Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7;
// Inventory
struct Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805;
// InventorySlot
struct InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB;
// InventoryUI
struct InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723;
// Item
struct Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C;
// ItemPickup
struct ItemPickup_tCF50D7D3F9C5087BA2DAD6A0050A371122BFC99D;
// KeyGate
struct KeyGate_tC3213FC72E772EA5EB437202761263444A72813D;
// KeyItem
struct KeyItem_t6695234C1CAC1337A19E0A7D387ED40BC972EFDA;
// KeyScriptObj
struct KeyScriptObj_t1FB4BDB12CBEB2A49C817CFE6EAD9BDBD4D9DF17;
// KillPlayer
struct KillPlayer_t782E9864FD2A7ECB006230962195BDFD5AAC2828;
// Lever
struct Lever_t559FF56549B63EABA962E89FF3171BB19837BB20;
// LeverManager
struct LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5;
// LeverSystem
struct LeverSystem_tB6C04315E26455D5B4206D71C5A0C2F1989D98B1;
// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275;
// LightingManager
struct LightingManager_t27E73623988870F6B46F81B087B57195C324BF57;
// LightingPreset
struct LightingPreset_t876E1A4F9CC2E1FDBD13A0E0832B4F5F1D464886;
// MainMenu
struct MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C;
// ManualInteract
struct ManualInteract_t0D54E613F38B0073F35C1F038AB966DCF7B74D5E;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MouseLook
struct MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// OpenChest
struct OpenChest_tD4D9212C5347F9967767E19512EAEF98BFDA81BB;
// PlayerManager
struct PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48;
// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09;
// PlayerSpawnManager
struct PlayerSpawnManager_tFC047824493C90A22DE376ABDFA12793F30A7A4C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SceneChanger
struct SceneChanger_t6A30EA4853DA52DBD1479ADCBE7B3B6952D1E068;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// StateCheck
struct StateCheck_t7EA9F2D982B62F1A81F99E936C15D2CE42282DBE;
// System.String
struct String_t;
// TeleportToStart
struct TeleportToStart_t918088C7C366239FDA03C15C2382A291AE667E6D;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// WheelInteractable
struct WheelInteractable_t6F7057EAC4915BFEE0BAB95158D866D7BCC40A28;
// BoarBehaviour/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Inventory/OnItemChanged
struct OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3;
// LeverManager/<>c
struct U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// BoarBehaviour/<>c__DisplayClass14_0/<<Update>g__Bulldozing|0>d
struct U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed_t2F5FBD0261094D34389FC1D7AA08D2C324C3313A;

IL2CPP_EXTERN_C RuntimeClass* BoarState_t7DB5C4D187A437EE6D9123138BA2F670397C52CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tFA3D86D150CCC78E800EC5AC7D7E87E0E601B2AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* State_tE0EF6010F74D25C6255DCC8E09FD66A76D493EF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed_t2F5FBD0261094D34389FC1D7AA08D2C324C3313A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0ACB4197238671AD12F012F824B105991DBD657F;
IL2CPP_EXTERN_C String_t* _stringLiteral0FD7FCFC83DB6C416148DB05FAE11D7EE84C7278;
IL2CPP_EXTERN_C String_t* _stringLiteral1140F06D6EAF4456700412F39897EE6E04E76190;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1932BF2D0333922961DFB5137987D61D515FC869;
IL2CPP_EXTERN_C String_t* _stringLiteral196509ADC515B14CBC44B0F51355C98E76304A70;
IL2CPP_EXTERN_C String_t* _stringLiteral1E338A945A7FDFC3F17A20234E3E5376827B4A4B;
IL2CPP_EXTERN_C String_t* _stringLiteral201C3C2901BE6217B6F2F30CB7F26586D2D42FCF;
IL2CPP_EXTERN_C String_t* _stringLiteral24E00C1D538A95E7E0F2716D52F935EFBD3C458F;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral30107E6D371F2F2CBDCACDE503F611D1B0EEB811;
IL2CPP_EXTERN_C String_t* _stringLiteral35505F66F89B1647899A272C74E8F7D242E4433E;
IL2CPP_EXTERN_C String_t* _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53;
IL2CPP_EXTERN_C String_t* _stringLiteral393A7BB8EFC0A20A4DFBAF2E73BA0AD2B19D314A;
IL2CPP_EXTERN_C String_t* _stringLiteral47C491F7C16C238075D5799EFAF4FE60AF08400F;
IL2CPP_EXTERN_C String_t* _stringLiteral4CF3EA1AAC4EA6BD9FE635430890A13648321B70;
IL2CPP_EXTERN_C String_t* _stringLiteral54B682DDD43AB553E0C13FFB2191D76059575F7E;
IL2CPP_EXTERN_C String_t* _stringLiteral59EB63BE5C6BC32054EDAD2CC5DF51BD464D921A;
IL2CPP_EXTERN_C String_t* _stringLiteral5C82E3F5A8FFA914E63E677300449A2713BC6EAC;
IL2CPP_EXTERN_C String_t* _stringLiteral644C1B88BEB45C8D3FFB6324167C42412E95C883;
IL2CPP_EXTERN_C String_t* _stringLiteral68B8DEBED212A277911E2A4827C5A0E30BF70D94;
IL2CPP_EXTERN_C String_t* _stringLiteral6B14CA2AAF7BE0609A25C5D82AFA1D4B219A51F6;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral758395C01F148CA2101DD081F4B75BABD194CFA5;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8239DDE7DBC91495DACC42B52FAF15E9C617D4D7;
IL2CPP_EXTERN_C String_t* _stringLiteral83C90ECF019479DBBD8EF17BFB5490B4D88F9C6A;
IL2CPP_EXTERN_C String_t* _stringLiteral86FDB40EE370227DD86C7E8214B2D9CD5C115C58;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8DA4443C1AC292D3039602DB23352CA5C19771EF;
IL2CPP_EXTERN_C String_t* _stringLiteral925D5A465A3C2834006CB8C794643A086E23AF38;
IL2CPP_EXTERN_C String_t* _stringLiteral98A5AFA4F978588B9B87D6E32E6E8F73B84EC96A;
IL2CPP_EXTERN_C String_t* _stringLiteral9CEB4D81FE1382FF120AEE05E403D6F7BCE690D2;
IL2CPP_EXTERN_C String_t* _stringLiteral9F44A281D855777FFD8C8471BE5CD419DCE89E17;
IL2CPP_EXTERN_C String_t* _stringLiteralA787B2F90B6DB394AA87BD57BB47C7D0F302E573;
IL2CPP_EXTERN_C String_t* _stringLiteralAD293AF5C15D42F279F4B887FCDF23BBA1698F79;
IL2CPP_EXTERN_C String_t* _stringLiteralAEEBA7495CA0294DE03DF896E36AA819936CCBF4;
IL2CPP_EXTERN_C String_t* _stringLiteralB20CB7C836C9DE5EFB05530B07BE880F17773818;
IL2CPP_EXTERN_C String_t* _stringLiteralB6D795FBD58CC7592D955A219374339A323801A9;
IL2CPP_EXTERN_C String_t* _stringLiteralBA0D32FABCEE121EF637D4EAE27256409720AC76;
IL2CPP_EXTERN_C String_t* _stringLiteralC22B5CCFAFE0FB00D59600C7AB6785D1FF3855AA;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCFB47CC81B59CF4F9EA9E69DED4118CCFBD5163C;
IL2CPP_EXTERN_C String_t* _stringLiteralDD537A33D036F915A5CC479F6B54DD13D8A75E90;
IL2CPP_EXTERN_C String_t* _stringLiteralDF068AF54BD730F64BB51B79385DC48A78E0D04F;
IL2CPP_EXTERN_C String_t* _stringLiteralE1C5E26CCED33A4216DB0711C082A140109AC82F;
IL2CPP_EXTERN_C String_t* _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6;
IL2CPP_EXTERN_C String_t* _stringLiteralEBDBC50D2936EB055C189294F87BC5382BA29F0C;
IL2CPP_EXTERN_C String_t* _stringLiteralEDB0C1C16F121F2565D2B40BB2A7021957151B83;
IL2CPP_EXTERN_C String_t* _stringLiteralF90E98EB00101C68C435BF3576C2895BD1046C8C;
IL2CPP_EXTERN_C String_t* _stringLiteralFED43703CA4391B71599484589EC0178515FA663;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m2B9A09217489CB456933DEA112CA70C10AD3B9F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisInteractable_tEEFC60C29F907276ABC0BDA6621F8089144774E7_mA9D91B6B22CFF4699E2D47FC3CF49F863AC61657_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisInventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB_m40A768682731E05905E4B78D9E461952D679C673_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mBEF921B3D7B132210E365BD5746CC06415D63FEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m7B392C9EB4F3B2B75D972095BD5F04FD238EDED1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m1B3BB556C077708C2DDE87E8CAF6B6A35AA04162_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLeverSystem_tB6C04315E26455D5B4206D71C5A0C2F1989D98B1_m8C79CA499EDB18F9D0DA4C4BE4946536357F57C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA_m47214CA52006E08D48EB50CF1F5FA6B7D805D78D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InventoryUI_UpdateUI_m13EFCE80FB111CA41FF0224B7F9E1ECFE9C3D513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m17382E73E27D945DEC6B9BD38A447B638D0D7C0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m822464A408DB63746E72190B3527E4283A6B3E11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6D4334AF3C7C3FD8F6D2CAA35357F341CC13EAA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF132E1A0C2CC6DD4CA89DBE3493C69CB4E94BCAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m2BF548B32973BBCDBA15A4D77FA81652608878B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed_System_Collections_IEnumerator_Reset_mBC5DF503C5A848710D140C2D06CBC75B7FA1F62E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__12_0_mDA5AB7505C0BCE988AC14138FF7D14057680C319_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C;
struct LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Item>
struct List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ItemU5BU5D_tEE54AD0D4D72299A508C229F13FAFD80E118048F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657, ____items_1)); }
	inline ItemU5BU5D_tEE54AD0D4D72299A508C229F13FAFD80E118048F* get__items_1() const { return ____items_1; }
	inline ItemU5BU5D_tEE54AD0D4D72299A508C229F13FAFD80E118048F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ItemU5BU5D_tEE54AD0D4D72299A508C229F13FAFD80E118048F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ItemU5BU5D_tEE54AD0D4D72299A508C229F13FAFD80E118048F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657_StaticFields, ____emptyArray_5)); }
	inline ItemU5BU5D_tEE54AD0D4D72299A508C229F13FAFD80E118048F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ItemU5BU5D_tEE54AD0D4D72299A508C229F13FAFD80E118048F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ItemU5BU5D_tEE54AD0D4D72299A508C229F13FAFD80E118048F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


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

struct Il2CppArrayBounds;

// System.Array


// GameVariables
struct GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA  : public RuntimeObject
{
public:

public:
};

struct GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_StaticFields
{
public:
	// System.Int32 GameVariables::keyCount
	int32_t ___keyCount_0;
	// System.Int32 GameVariables::currentSpawnPoint
	int32_t ___currentSpawnPoint_1;

public:
	inline static int32_t get_offset_of_keyCount_0() { return static_cast<int32_t>(offsetof(GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_StaticFields, ___keyCount_0)); }
	inline int32_t get_keyCount_0() const { return ___keyCount_0; }
	inline int32_t* get_address_of_keyCount_0() { return &___keyCount_0; }
	inline void set_keyCount_0(int32_t value)
	{
		___keyCount_0 = value;
	}

	inline static int32_t get_offset_of_currentSpawnPoint_1() { return static_cast<int32_t>(offsetof(GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_StaticFields, ___currentSpawnPoint_1)); }
	inline int32_t get_currentSpawnPoint_1() const { return ___currentSpawnPoint_1; }
	inline int32_t* get_address_of_currentSpawnPoint_1() { return &___currentSpawnPoint_1; }
	inline void set_currentSpawnPoint_1(int32_t value)
	{
		___currentSpawnPoint_1 = value;
	}
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// BoarBehaviour/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167  : public RuntimeObject
{
public:
	// System.Single BoarBehaviour/<>c__DisplayClass14_0::distance
	float ___distance_0;
	// BoarBehaviour BoarBehaviour/<>c__DisplayClass14_0::<>4__this
	BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_distance_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167, ___distance_0)); }
	inline float get_distance_0() const { return ___distance_0; }
	inline float* get_address_of_distance_0() { return &___distance_0; }
	inline void set_distance_0(float value)
	{
		___distance_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167, ___U3CU3E4__this_1)); }
	inline BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// LeverManager/<>c
struct U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034_StaticFields
{
public:
	// LeverManager/<>c LeverManager/<>c::<>9
	U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.GameObject,System.Int32> LeverManager/<>c::<>9__12_0
	Func_2_tFA3D86D150CCC78E800EC5AC7D7E87E0E601B2AA * ___U3CU3E9__12_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Func_2_tFA3D86D150CCC78E800EC5AC7D7E87E0E601B2AA * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Func_2_tFA3D86D150CCC78E800EC5AC7D7E87E0E601B2AA ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Func_2_tFA3D86D150CCC78E800EC5AC7D7E87E0E601B2AA * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
	}
};


// BoarBehaviour/<>c__DisplayClass14_0/<<Update>g__Bulldozing|0>d
struct U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed_t2F5FBD0261094D34389FC1D7AA08D2C324C3313A  : public RuntimeObject
{
public:
	// System.Int32 BoarBehaviour/<>c__DisplayClass14_0/<<Update>g__Bulldozing|0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BoarBehaviour/<>c__DisplayClass14_0/<<Update>g__Bulldozing|0>d::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// BoarBehaviour/<>c__DisplayClass14_0 BoarBehaviour/<>c__DisplayClass14_0/<<Update>g__Bulldozing|0>d::<>4__this
	U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed_t2F5FBD0261094D34389FC1D7AA08D2C324C3313A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed_t2F5FBD0261094D34389FC1D7AA08D2C324C3313A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed_t2F5FBD0261094D34389FC1D7AA08D2C324C3313A, ___U3CU3E4__this_2)); }
	inline U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___list_0)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_list_0() const { return ___list_0; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___current_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_current_3() const { return ___current_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
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


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.CollisionFlags
struct CollisionFlags_t435530D092E80B20FFD0DA008B4F298BF224B903 
{
public:
	// System.Int32 UnityEngine.CollisionFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CollisionFlags_t435530D092E80B20FFD0DA008B4F298BF224B903, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.CursorLockMode
struct CursorLockMode_t247B41EE9632E4AD759EDADDB351AE0075162D04 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CursorLockMode_t247B41EE9632E4AD759EDADDB351AE0075162D04, ___value___2)); }
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

// UnityEngine.Gradient
struct Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.LightType
struct LightType_tAD5FBE55DEE7A9C38A42323701B0BDD716761B14 
{
public:
	// System.Int32 UnityEngine.LightType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_tAD5FBE55DEE7A9C38A42323701B0BDD716761B14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AI.NavMeshHit
struct NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D 
{
public:
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::m_Position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.Single UnityEngine.AI.NavMeshHit::m_Distance
	float ___m_Distance_2;
	// System.Int32 UnityEngine.AI.NavMeshHit::m_Mask
	int32_t ___m_Mask_3;
	// System.Int32 UnityEngine.AI.NavMeshHit::m_Hit
	int32_t ___m_Hit_4;

public:
	inline static int32_t get_offset_of_m_Position_0() { return static_cast<int32_t>(offsetof(NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D, ___m_Position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Position_0() const { return ___m_Position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Position_0() { return &___m_Position_0; }
	inline void set_m_Position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Position_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Distance_2() { return static_cast<int32_t>(offsetof(NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D, ___m_Distance_2)); }
	inline float get_m_Distance_2() const { return ___m_Distance_2; }
	inline float* get_address_of_m_Distance_2() { return &___m_Distance_2; }
	inline void set_m_Distance_2(float value)
	{
		___m_Distance_2 = value;
	}

	inline static int32_t get_offset_of_m_Mask_3() { return static_cast<int32_t>(offsetof(NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D, ___m_Mask_3)); }
	inline int32_t get_m_Mask_3() const { return ___m_Mask_3; }
	inline int32_t* get_address_of_m_Mask_3() { return &___m_Mask_3; }
	inline void set_m_Mask_3(int32_t value)
	{
		___m_Mask_3 = value;
	}

	inline static int32_t get_offset_of_m_Hit_4() { return static_cast<int32_t>(offsetof(NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D, ___m_Hit_4)); }
	inline int32_t get_m_Hit_4() const { return ___m_Hit_4; }
	inline int32_t* get_address_of_m_Hit_4() { return &___m_Hit_4; }
	inline void set_m_Hit_4(int32_t value)
	{
		___m_Hit_4 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// Boar/BoarState
struct BoarState_t7DB5C4D187A437EE6D9123138BA2F670397C52CC 
{
public:
	// System.Int32 Boar/BoarState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BoarState_t7DB5C4D187A437EE6D9123138BA2F670397C52CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// BoarBehaviour/State
struct State_tE0EF6010F74D25C6255DCC8E09FD66A76D493EF6 
{
public:
	// System.Int32 BoarBehaviour/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_tE0EF6010F74D25C6255DCC8E09FD66A76D493EF6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Func`2<UnityEngine.GameObject,System.Int32>
struct Func_2_tFA3D86D150CCC78E800EC5AC7D7E87E0E601B2AA  : public MulticastDelegate_t
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


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Item
struct Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String Item::name
	String_t* ___name_4;
	// System.String Item::description
	String_t* ___description_5;
	// UnityEngine.Sprite Item::icon
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___icon_6;
	// UnityEngine.Sprite Item::FrontImage
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___FrontImage_7;
	// UnityEngine.Sprite Item::BackImage
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___BackImage_8;
	// System.Boolean Item::isDefaultItem
	bool ___isDefaultItem_9;

public:
	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___name_4)); }
	inline String_t* get_name_4() const { return ___name_4; }
	inline String_t** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(String_t* value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_4), (void*)value);
	}

	inline static int32_t get_offset_of_description_5() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___description_5)); }
	inline String_t* get_description_5() const { return ___description_5; }
	inline String_t** get_address_of_description_5() { return &___description_5; }
	inline void set_description_5(String_t* value)
	{
		___description_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_5), (void*)value);
	}

	inline static int32_t get_offset_of_icon_6() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___icon_6)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_icon_6() const { return ___icon_6; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_icon_6() { return &___icon_6; }
	inline void set_icon_6(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___icon_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___icon_6), (void*)value);
	}

	inline static int32_t get_offset_of_FrontImage_7() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___FrontImage_7)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_FrontImage_7() const { return ___FrontImage_7; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_FrontImage_7() { return &___FrontImage_7; }
	inline void set_FrontImage_7(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___FrontImage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FrontImage_7), (void*)value);
	}

	inline static int32_t get_offset_of_BackImage_8() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___BackImage_8)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_BackImage_8() const { return ___BackImage_8; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_BackImage_8() { return &___BackImage_8; }
	inline void set_BackImage_8(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___BackImage_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BackImage_8), (void*)value);
	}

	inline static int32_t get_offset_of_isDefaultItem_9() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___isDefaultItem_9)); }
	inline bool get_isDefaultItem_9() const { return ___isDefaultItem_9; }
	inline bool* get_address_of_isDefaultItem_9() { return &___isDefaultItem_9; }
	inline void set_isDefaultItem_9(bool value)
	{
		___isDefaultItem_9 = value;
	}
};


// KeyScriptObj
struct KeyScriptObj_t1FB4BDB12CBEB2A49C817CFE6EAD9BDBD4D9DF17  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Int32 KeyScriptObj::value
	int32_t ___value_4;

public:
	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(KeyScriptObj_t1FB4BDB12CBEB2A49C817CFE6EAD9BDBD4D9DF17, ___value_4)); }
	inline int32_t get_value_4() const { return ___value_4; }
	inline int32_t* get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(int32_t value)
	{
		___value_4 = value;
	}
};


// Lever
struct Lever_t559FF56549B63EABA962E89FF3171BB19837BB20  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String Lever::name
	String_t* ___name_4;
	// System.Boolean Lever::defaultSwitchActive
	bool ___defaultSwitchActive_5;

public:
	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(Lever_t559FF56549B63EABA962E89FF3171BB19837BB20, ___name_4)); }
	inline String_t* get_name_4() const { return ___name_4; }
	inline String_t** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(String_t* value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_4), (void*)value);
	}

	inline static int32_t get_offset_of_defaultSwitchActive_5() { return static_cast<int32_t>(offsetof(Lever_t559FF56549B63EABA962E89FF3171BB19837BB20, ___defaultSwitchActive_5)); }
	inline bool get_defaultSwitchActive_5() const { return ___defaultSwitchActive_5; }
	inline bool* get_address_of_defaultSwitchActive_5() { return &___defaultSwitchActive_5; }
	inline void set_defaultSwitchActive_5(bool value)
	{
		___defaultSwitchActive_5 = value;
	}
};


// LightingPreset
struct LightingPreset_t876E1A4F9CC2E1FDBD13A0E0832B4F5F1D464886  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.Gradient LightingPreset::AmbientColor
	Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ___AmbientColor_4;
	// UnityEngine.Gradient LightingPreset::DirectionalColor
	Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ___DirectionalColor_5;
	// UnityEngine.Gradient LightingPreset::FogColor
	Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ___FogColor_6;

public:
	inline static int32_t get_offset_of_AmbientColor_4() { return static_cast<int32_t>(offsetof(LightingPreset_t876E1A4F9CC2E1FDBD13A0E0832B4F5F1D464886, ___AmbientColor_4)); }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * get_AmbientColor_4() const { return ___AmbientColor_4; }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 ** get_address_of_AmbientColor_4() { return &___AmbientColor_4; }
	inline void set_AmbientColor_4(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * value)
	{
		___AmbientColor_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AmbientColor_4), (void*)value);
	}

	inline static int32_t get_offset_of_DirectionalColor_5() { return static_cast<int32_t>(offsetof(LightingPreset_t876E1A4F9CC2E1FDBD13A0E0832B4F5F1D464886, ___DirectionalColor_5)); }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * get_DirectionalColor_5() const { return ___DirectionalColor_5; }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 ** get_address_of_DirectionalColor_5() { return &___DirectionalColor_5; }
	inline void set_DirectionalColor_5(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * value)
	{
		___DirectionalColor_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DirectionalColor_5), (void*)value);
	}

	inline static int32_t get_offset_of_FogColor_6() { return static_cast<int32_t>(offsetof(LightingPreset_t876E1A4F9CC2E1FDBD13A0E0832B4F5F1D464886, ___FogColor_6)); }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * get_FogColor_6() const { return ___FogColor_6; }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 ** get_address_of_FogColor_6() { return &___FogColor_6; }
	inline void set_FogColor_6(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * value)
	{
		___FogColor_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FogColor_6), (void*)value);
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Inventory/OnItemChanged
struct OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.CapsuleCollider
struct CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.CharacterController
struct CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;

public:
	inline static int32_t get_offset_of_m_BakedIndex_4() { return static_cast<int32_t>(offsetof(Light_tA2F349FE839781469A0344CF6039B51512394275, ___m_BakedIndex_4)); }
	inline int32_t get_m_BakedIndex_4() const { return ___m_BakedIndex_4; }
	inline int32_t* get_address_of_m_BakedIndex_4() { return &___m_BakedIndex_4; }
	inline void set_m_BakedIndex_4(int32_t value)
	{
		___m_BakedIndex_4 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Boar
struct Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Boar::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_4;
	// UnityEngine.Rigidbody Boar::rb
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rb_5;
	// System.Int32 Boar::speed
	int32_t ___speed_6;
	// System.Single Boar::nextPositionTimer
	float ___nextPositionTimer_7;
	// System.Single Boar::attackRange
	float ___attackRange_8;
	// System.Single Boar::detectionRange
	float ___detectionRange_9;
	// System.Single Boar::roamingDistance
	float ___roamingDistance_10;
	// System.Single Boar::distanceFromTarget
	float ___distanceFromTarget_11;
	// System.Single Boar::timer
	float ___timer_12;
	// System.Single Boar::angleChangingSpeed
	float ___angleChangingSpeed_13;
	// System.Single Boar::attackCooldown
	float ___attackCooldown_14;
	// System.Single Boar::chargingDuration
	float ___chargingDuration_15;
	// UnityEngine.GameObject Boar::designatedLocation
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___designatedLocation_16;
	// Boar/BoarState Boar::state
	int32_t ___state_17;
	// UnityEngine.AI.NavMeshAgent Boar::agent
	NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * ___agent_18;
	// System.Boolean Boar::isCharging
	bool ___isCharging_19;
	// System.Boolean Boar::playerDetected
	bool ___playerDetected_20;

public:
	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8, ___target_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_4() const { return ___target_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_4), (void*)value);
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8, ___rb_5)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rb_5() const { return ___rb_5; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_5), (void*)value);
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8, ___speed_6)); }
	inline int32_t get_speed_6() const { return ___speed_6; }
	inline int32_t* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(int32_t value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_nextPositionTimer_7() { return static_cast<int32_t>(offsetof(Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8, ___nextPositionTimer_7)); }
	inline float get_nextPositionTimer_7() const { return ___nextPositionTimer_7; }
	inline float* get_address_of_nextPositionTimer_7() { return &___nextPositionTimer_7; }
	inline void set_nextPositionTimer_7(float value)
	{
		___nextPositionTimer_7 = value;
	}

	inline static int32_t get_offset_of_attackRange_8() { return static_cast<int32_t>(offsetof(Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8, ___attackRange_8)); }
	inline float get_attackRange_8() const { return ___attackRange_8; }
	inline float* get_address_of_attackRange_8() { return &___attackRange_8; }
	inline void set_attackRange_8(float value)
	{
		___attackRange_8 = value;
	}

	inline static int32_t get_offset_of_detectionRange_9() { return static_cast<int32_t>(offsetof(Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8, ___detectionRange_9)); }
	inline float get_detectionRange_9() const { return ___detectionRange_9; }
	inline float* get_address_of_detectionRange_9() { return &___detectionRange_9; }
	inline void set_detectionRange_9(float value)
	{
		___detectionRange_9 = value;
	}

	inline static int32_t get_offset_of_roamingDistance_10() { return static_cast<int32_t>(offsetof(Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8, ___roamingDistance_10)); }
	inline float get_roamingDistance_10() const { return ___roamingDistance_10; }
	inline float* get_address_of_roamingDistance_10() { return &___roamingDistance_10; }
	inline void set_roamingDistance_10(float value)
	{
		___roamingDistance_10 = value;
	}

	inline static int32_t get_offset_of_distanceFromTarget_11() { return static_cast<int32_t>(offsetof(Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8, ___distanceFromTarget_11)); }
	inline float get_distanceFromTarget_11() const { return ___distanceFromTarget_11; }
	inline float* get_address_of_distanceFromTarget_11() { return &___distanceFromTarget_11; }
	inline void set_distanceFromTarget_11(float value)
	{
		___distanceFromTarget_11 = value;
	}

	inline static int32_t get_offset_of_timer_12() { return static_cast<int32_t>(offsetof(Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8, ___timer_12)); }
	inline float get_timer_12() const { return ___timer_12; }
	inline float* get_address_of_timer_12() { return &___timer_12; }
	inline void set_timer_12(float value)
	{
		___timer_12 = value;
	}

	inline static int32_t get_offset_of_angleChangingSpeed_13() { return static_cast<int32_t>(offsetof(Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8, ___angleChangingSpeed_13)); }
	inline float get_angleChangingSpeed_13() const { return ___angleChangingSpeed_13; }
	inline float* get_address_of_angleChangingSpeed_13() { return &___angleChangingSpeed_13; }
	inline void set_angleChangingSpeed_13(float value)
	{
		___angleChangingSpeed_13 = value;
	}

	inline static int32_t get_offset_of_attackCooldown_14() { return static_cast<int32_t>(offsetof(Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8, ___attackCooldown_14)); }
	inline float get_attackCooldown_14() const { return ___attackCooldown_14; }
	inline float* get_address_of_attackCooldown_14() { return &___attackCooldown_14; }
	inline void set_attackCooldown_14(float value)
	{
		___attackCooldown_14 = value;
	}

	inline static int32_t get_offset_of_chargingDuration_15() { return static_cast<int32_t>(offsetof(Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8, ___chargingDuration_15)); }
	inline float get_chargingDuration_15() const { return ___chargingDuration_15; }
	inline float* get_address_of_chargingDuration_15() { return &___chargingDuration_15; }
	inline void set_chargingDuration_15(float value)
	{
		___chargingDuration_15 = value;
	}

	inline static int32_t get_offset_of_designatedLocation_16() { return static_cast<int32_t>(offsetof(Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8, ___designatedLocation_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_designatedLocation_16() const { return ___designatedLocation_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_designatedLocation_16() { return &___designatedLocation_16; }
	inline void set_designatedLocation_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___designatedLocation_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___designatedLocation_16), (void*)value);
	}

	inline static int32_t get_offset_of_state_17() { return static_cast<int32_t>(offsetof(Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8, ___state_17)); }
	inline int32_t get_state_17() const { return ___state_17; }
	inline int32_t* get_address_of_state_17() { return &___state_17; }
	inline void set_state_17(int32_t value)
	{
		___state_17 = value;
	}

	inline static int32_t get_offset_of_agent_18() { return static_cast<int32_t>(offsetof(Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8, ___agent_18)); }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * get_agent_18() const { return ___agent_18; }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B ** get_address_of_agent_18() { return &___agent_18; }
	inline void set_agent_18(NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * value)
	{
		___agent_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___agent_18), (void*)value);
	}

	inline static int32_t get_offset_of_isCharging_19() { return static_cast<int32_t>(offsetof(Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8, ___isCharging_19)); }
	inline bool get_isCharging_19() const { return ___isCharging_19; }
	inline bool* get_address_of_isCharging_19() { return &___isCharging_19; }
	inline void set_isCharging_19(bool value)
	{
		___isCharging_19 = value;
	}

	inline static int32_t get_offset_of_playerDetected_20() { return static_cast<int32_t>(offsetof(Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8, ___playerDetected_20)); }
	inline bool get_playerDetected_20() const { return ___playerDetected_20; }
	inline bool* get_address_of_playerDetected_20() { return &___playerDetected_20; }
	inline void set_playerDetected_20(bool value)
	{
		___playerDetected_20 = value;
	}
};


// BoarBehaviour
struct BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// BoarBehaviour/State BoarBehaviour::state
	int32_t ___state_4;
	// System.Single BoarBehaviour::wanderRadius
	float ___wanderRadius_5;
	// System.Single BoarBehaviour::wanderTimer
	float ___wanderTimer_6;
	// System.Single BoarBehaviour::windUpDistance
	float ___windUpDistance_7;
	// System.Single BoarBehaviour::speed
	float ___speed_8;
	// System.Single BoarBehaviour::turnSpeed
	float ___turnSpeed_9;
	// System.Single BoarBehaviour::visionRadius
	float ___visionRadius_10;
	// UnityEngine.Transform BoarBehaviour::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_11;
	// UnityEngine.AI.NavMeshAgent BoarBehaviour::agent
	NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * ___agent_12;
	// System.Single BoarBehaviour::timer
	float ___timer_13;
	// System.Single BoarBehaviour::RegTurnSpeed
	float ___RegTurnSpeed_14;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC, ___state_4)); }
	inline int32_t get_state_4() const { return ___state_4; }
	inline int32_t* get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(int32_t value)
	{
		___state_4 = value;
	}

	inline static int32_t get_offset_of_wanderRadius_5() { return static_cast<int32_t>(offsetof(BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC, ___wanderRadius_5)); }
	inline float get_wanderRadius_5() const { return ___wanderRadius_5; }
	inline float* get_address_of_wanderRadius_5() { return &___wanderRadius_5; }
	inline void set_wanderRadius_5(float value)
	{
		___wanderRadius_5 = value;
	}

	inline static int32_t get_offset_of_wanderTimer_6() { return static_cast<int32_t>(offsetof(BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC, ___wanderTimer_6)); }
	inline float get_wanderTimer_6() const { return ___wanderTimer_6; }
	inline float* get_address_of_wanderTimer_6() { return &___wanderTimer_6; }
	inline void set_wanderTimer_6(float value)
	{
		___wanderTimer_6 = value;
	}

	inline static int32_t get_offset_of_windUpDistance_7() { return static_cast<int32_t>(offsetof(BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC, ___windUpDistance_7)); }
	inline float get_windUpDistance_7() const { return ___windUpDistance_7; }
	inline float* get_address_of_windUpDistance_7() { return &___windUpDistance_7; }
	inline void set_windUpDistance_7(float value)
	{
		___windUpDistance_7 = value;
	}

	inline static int32_t get_offset_of_speed_8() { return static_cast<int32_t>(offsetof(BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC, ___speed_8)); }
	inline float get_speed_8() const { return ___speed_8; }
	inline float* get_address_of_speed_8() { return &___speed_8; }
	inline void set_speed_8(float value)
	{
		___speed_8 = value;
	}

	inline static int32_t get_offset_of_turnSpeed_9() { return static_cast<int32_t>(offsetof(BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC, ___turnSpeed_9)); }
	inline float get_turnSpeed_9() const { return ___turnSpeed_9; }
	inline float* get_address_of_turnSpeed_9() { return &___turnSpeed_9; }
	inline void set_turnSpeed_9(float value)
	{
		___turnSpeed_9 = value;
	}

	inline static int32_t get_offset_of_visionRadius_10() { return static_cast<int32_t>(offsetof(BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC, ___visionRadius_10)); }
	inline float get_visionRadius_10() const { return ___visionRadius_10; }
	inline float* get_address_of_visionRadius_10() { return &___visionRadius_10; }
	inline void set_visionRadius_10(float value)
	{
		___visionRadius_10 = value;
	}

	inline static int32_t get_offset_of_target_11() { return static_cast<int32_t>(offsetof(BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC, ___target_11)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_11() const { return ___target_11; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_11() { return &___target_11; }
	inline void set_target_11(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_11), (void*)value);
	}

	inline static int32_t get_offset_of_agent_12() { return static_cast<int32_t>(offsetof(BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC, ___agent_12)); }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * get_agent_12() const { return ___agent_12; }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B ** get_address_of_agent_12() { return &___agent_12; }
	inline void set_agent_12(NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * value)
	{
		___agent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___agent_12), (void*)value);
	}

	inline static int32_t get_offset_of_timer_13() { return static_cast<int32_t>(offsetof(BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC, ___timer_13)); }
	inline float get_timer_13() const { return ___timer_13; }
	inline float* get_address_of_timer_13() { return &___timer_13; }
	inline void set_timer_13(float value)
	{
		___timer_13 = value;
	}

	inline static int32_t get_offset_of_RegTurnSpeed_14() { return static_cast<int32_t>(offsetof(BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC, ___RegTurnSpeed_14)); }
	inline float get_RegTurnSpeed_14() const { return ___RegTurnSpeed_14; }
	inline float* get_address_of_RegTurnSpeed_14() { return &___RegTurnSpeed_14; }
	inline void set_RegTurnSpeed_14(float value)
	{
		___RegTurnSpeed_14 = value;
	}
};


// BoatTimer
struct BoatTimer_tCA778F4123D8111C121A88F0695D0D4A3FF98920  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single BoatTimer::timer
	float ___timer_4;
	// System.Int32 BoatTimer::timeTillEngineStops
	int32_t ___timeTillEngineStops_5;
	// UnityEngine.GameObject BoatTimer::greenLight
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___greenLight_6;
	// UnityEngine.GameObject BoatTimer::redLight
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___redLight_7;
	// UnityEngine.GameObject BoatTimer::realButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___realButton_8;
	// UnityEngine.GameObject BoatTimer::fakeButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___fakeButton_9;

public:
	inline static int32_t get_offset_of_timer_4() { return static_cast<int32_t>(offsetof(BoatTimer_tCA778F4123D8111C121A88F0695D0D4A3FF98920, ___timer_4)); }
	inline float get_timer_4() const { return ___timer_4; }
	inline float* get_address_of_timer_4() { return &___timer_4; }
	inline void set_timer_4(float value)
	{
		___timer_4 = value;
	}

	inline static int32_t get_offset_of_timeTillEngineStops_5() { return static_cast<int32_t>(offsetof(BoatTimer_tCA778F4123D8111C121A88F0695D0D4A3FF98920, ___timeTillEngineStops_5)); }
	inline int32_t get_timeTillEngineStops_5() const { return ___timeTillEngineStops_5; }
	inline int32_t* get_address_of_timeTillEngineStops_5() { return &___timeTillEngineStops_5; }
	inline void set_timeTillEngineStops_5(int32_t value)
	{
		___timeTillEngineStops_5 = value;
	}

	inline static int32_t get_offset_of_greenLight_6() { return static_cast<int32_t>(offsetof(BoatTimer_tCA778F4123D8111C121A88F0695D0D4A3FF98920, ___greenLight_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_greenLight_6() const { return ___greenLight_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_greenLight_6() { return &___greenLight_6; }
	inline void set_greenLight_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___greenLight_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___greenLight_6), (void*)value);
	}

	inline static int32_t get_offset_of_redLight_7() { return static_cast<int32_t>(offsetof(BoatTimer_tCA778F4123D8111C121A88F0695D0D4A3FF98920, ___redLight_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_redLight_7() const { return ___redLight_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_redLight_7() { return &___redLight_7; }
	inline void set_redLight_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___redLight_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___redLight_7), (void*)value);
	}

	inline static int32_t get_offset_of_realButton_8() { return static_cast<int32_t>(offsetof(BoatTimer_tCA778F4123D8111C121A88F0695D0D4A3FF98920, ___realButton_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_realButton_8() const { return ___realButton_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_realButton_8() { return &___realButton_8; }
	inline void set_realButton_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___realButton_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___realButton_8), (void*)value);
	}

	inline static int32_t get_offset_of_fakeButton_9() { return static_cast<int32_t>(offsetof(BoatTimer_tCA778F4123D8111C121A88F0695D0D4A3FF98920, ___fakeButton_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_fakeButton_9() const { return ___fakeButton_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_fakeButton_9() { return &___fakeButton_9; }
	inline void set_fakeButton_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___fakeButton_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fakeButton_9), (void*)value);
	}
};


// Counter
struct Counter_t6A281326FFA8D37BB4BCEBAD26FC34A124B9A24D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// DisableInteractable
struct DisableInteractable_t5EE6E5532A0AFB30BD54E817519C4B929BFFDDC2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single DisableInteractable::timer
	float ___timer_4;

public:
	inline static int32_t get_offset_of_timer_4() { return static_cast<int32_t>(offsetof(DisableInteractable_t5EE6E5532A0AFB30BD54E817519C4B929BFFDDC2, ___timer_4)); }
	inline float get_timer_4() const { return ___timer_4; }
	inline float* get_address_of_timer_4() { return &___timer_4; }
	inline void set_timer_4(float value)
	{
		___timer_4 = value;
	}
};


// FallingPlatform
struct FallingPlatform_t20EB211BBB886A69DE45F91B5599AB5D9B219F75  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody FallingPlatform::rb
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rb_4;

public:
	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(FallingPlatform_t20EB211BBB886A69DE45F91B5599AB5D9B219F75, ___rb_4)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rb_4() const { return ___rb_4; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_4), (void*)value);
	}
};


// GetKeyFromChest
struct GetKeyFromChest_t85839C120AAD3BF6DD2B6663B22721EC13D5F091  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// KeyScriptObj GetKeyFromChest::KeyInt
	KeyScriptObj_t1FB4BDB12CBEB2A49C817CFE6EAD9BDBD4D9DF17 * ___KeyInt_4;
	// UnityEngine.UI.Text GetKeyFromChest::pressE
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___pressE_5;

public:
	inline static int32_t get_offset_of_KeyInt_4() { return static_cast<int32_t>(offsetof(GetKeyFromChest_t85839C120AAD3BF6DD2B6663B22721EC13D5F091, ___KeyInt_4)); }
	inline KeyScriptObj_t1FB4BDB12CBEB2A49C817CFE6EAD9BDBD4D9DF17 * get_KeyInt_4() const { return ___KeyInt_4; }
	inline KeyScriptObj_t1FB4BDB12CBEB2A49C817CFE6EAD9BDBD4D9DF17 ** get_address_of_KeyInt_4() { return &___KeyInt_4; }
	inline void set_KeyInt_4(KeyScriptObj_t1FB4BDB12CBEB2A49C817CFE6EAD9BDBD4D9DF17 * value)
	{
		___KeyInt_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyInt_4), (void*)value);
	}

	inline static int32_t get_offset_of_pressE_5() { return static_cast<int32_t>(offsetof(GetKeyFromChest_t85839C120AAD3BF6DD2B6663B22721EC13D5F091, ___pressE_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_pressE_5() const { return ___pressE_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_pressE_5() { return &___pressE_5; }
	inline void set_pressE_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___pressE_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pressE_5), (void*)value);
	}
};


// HideUIElement
struct HideUIElement_tCA67B50019E091EA5E882A6D0D036E342402805C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject HideUIElement::manualUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___manualUI_4;

public:
	inline static int32_t get_offset_of_manualUI_4() { return static_cast<int32_t>(offsetof(HideUIElement_tCA67B50019E091EA5E882A6D0D036E342402805C, ___manualUI_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_manualUI_4() const { return ___manualUI_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_manualUI_4() { return &___manualUI_4; }
	inline void set_manualUI_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___manualUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manualUI_4), (void*)value);
	}
};


// Interactable
struct Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Interactable::pickUpText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___pickUpText_4;
	// System.Boolean Interactable::pickUpAllowed
	bool ___pickUpAllowed_5;
	// System.Boolean Interactable::hitByRayCast
	bool ___hitByRayCast_6;

public:
	inline static int32_t get_offset_of_pickUpText_4() { return static_cast<int32_t>(offsetof(Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7, ___pickUpText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_pickUpText_4() const { return ___pickUpText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_pickUpText_4() { return &___pickUpText_4; }
	inline void set_pickUpText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___pickUpText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pickUpText_4), (void*)value);
	}

	inline static int32_t get_offset_of_pickUpAllowed_5() { return static_cast<int32_t>(offsetof(Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7, ___pickUpAllowed_5)); }
	inline bool get_pickUpAllowed_5() const { return ___pickUpAllowed_5; }
	inline bool* get_address_of_pickUpAllowed_5() { return &___pickUpAllowed_5; }
	inline void set_pickUpAllowed_5(bool value)
	{
		___pickUpAllowed_5 = value;
	}

	inline static int32_t get_offset_of_hitByRayCast_6() { return static_cast<int32_t>(offsetof(Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7, ___hitByRayCast_6)); }
	inline bool get_hitByRayCast_6() const { return ___hitByRayCast_6; }
	inline bool* get_address_of_hitByRayCast_6() { return &___hitByRayCast_6; }
	inline void set_hitByRayCast_6(bool value)
	{
		___hitByRayCast_6 = value;
	}
};


// Inventory
struct Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Inventory/OnItemChanged Inventory::onItemChangedCallBack
	OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3 * ___onItemChangedCallBack_5;
	// System.Int32 Inventory::space
	int32_t ___space_6;
	// System.Collections.Generic.List`1<Item> Inventory::items
	List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * ___items_7;

public:
	inline static int32_t get_offset_of_onItemChangedCallBack_5() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___onItemChangedCallBack_5)); }
	inline OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3 * get_onItemChangedCallBack_5() const { return ___onItemChangedCallBack_5; }
	inline OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3 ** get_address_of_onItemChangedCallBack_5() { return &___onItemChangedCallBack_5; }
	inline void set_onItemChangedCallBack_5(OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3 * value)
	{
		___onItemChangedCallBack_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onItemChangedCallBack_5), (void*)value);
	}

	inline static int32_t get_offset_of_space_6() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___space_6)); }
	inline int32_t get_space_6() const { return ___space_6; }
	inline int32_t* get_address_of_space_6() { return &___space_6; }
	inline void set_space_6(int32_t value)
	{
		___space_6 = value;
	}

	inline static int32_t get_offset_of_items_7() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___items_7)); }
	inline List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * get_items_7() const { return ___items_7; }
	inline List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 ** get_address_of_items_7() { return &___items_7; }
	inline void set_items_7(List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * value)
	{
		___items_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_7), (void*)value);
	}
};

struct Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields
{
public:
	// Inventory Inventory::instance
	Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields, ___instance_4)); }
	inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * get_instance_4() const { return ___instance_4; }
	inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// InventorySlot
struct InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image InventorySlot::icon
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___icon_4;
	// UnityEngine.UI.Button InventorySlot::removeButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___removeButton_5;
	// UnityEngine.UI.Text InventorySlot::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_6;
	// UnityEngine.GameObject InventorySlot::imageGUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___imageGUI_7;
	// UnityEngine.UI.Image InventorySlot::frontImageGUI
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___frontImageGUI_8;
	// UnityEngine.UI.Image InventorySlot::backImageGUI
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___backImageGUI_9;
	// Item InventorySlot::item
	Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item_10;

public:
	inline static int32_t get_offset_of_icon_4() { return static_cast<int32_t>(offsetof(InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB, ___icon_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_icon_4() const { return ___icon_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_icon_4() { return &___icon_4; }
	inline void set_icon_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___icon_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___icon_4), (void*)value);
	}

	inline static int32_t get_offset_of_removeButton_5() { return static_cast<int32_t>(offsetof(InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB, ___removeButton_5)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_removeButton_5() const { return ___removeButton_5; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_removeButton_5() { return &___removeButton_5; }
	inline void set_removeButton_5(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___removeButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___removeButton_5), (void*)value);
	}

	inline static int32_t get_offset_of_text_6() { return static_cast<int32_t>(offsetof(InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB, ___text_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_6() const { return ___text_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_6() { return &___text_6; }
	inline void set_text_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_6), (void*)value);
	}

	inline static int32_t get_offset_of_imageGUI_7() { return static_cast<int32_t>(offsetof(InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB, ___imageGUI_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_imageGUI_7() const { return ___imageGUI_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_imageGUI_7() { return &___imageGUI_7; }
	inline void set_imageGUI_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___imageGUI_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___imageGUI_7), (void*)value);
	}

	inline static int32_t get_offset_of_frontImageGUI_8() { return static_cast<int32_t>(offsetof(InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB, ___frontImageGUI_8)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_frontImageGUI_8() const { return ___frontImageGUI_8; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_frontImageGUI_8() { return &___frontImageGUI_8; }
	inline void set_frontImageGUI_8(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___frontImageGUI_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frontImageGUI_8), (void*)value);
	}

	inline static int32_t get_offset_of_backImageGUI_9() { return static_cast<int32_t>(offsetof(InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB, ___backImageGUI_9)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_backImageGUI_9() const { return ___backImageGUI_9; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_backImageGUI_9() { return &___backImageGUI_9; }
	inline void set_backImageGUI_9(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___backImageGUI_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backImageGUI_9), (void*)value);
	}

	inline static int32_t get_offset_of_item_10() { return static_cast<int32_t>(offsetof(InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB, ___item_10)); }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * get_item_10() const { return ___item_10; }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C ** get_address_of_item_10() { return &___item_10; }
	inline void set_item_10(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * value)
	{
		___item_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___item_10), (void*)value);
	}
};


// InventoryUI
struct InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform InventoryUI::itemsParent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___itemsParent_5;
	// UnityEngine.GameObject InventoryUI::inventoryUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___inventoryUI_6;
	// UnityEngine.GameObject InventoryUI::ImageGUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ImageGUI_7;
	// Inventory InventoryUI::inventory
	Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * ___inventory_8;
	// InventorySlot[] InventoryUI::slots
	InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C* ___slots_9;

public:
	inline static int32_t get_offset_of_itemsParent_5() { return static_cast<int32_t>(offsetof(InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723, ___itemsParent_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_itemsParent_5() const { return ___itemsParent_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_itemsParent_5() { return &___itemsParent_5; }
	inline void set_itemsParent_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___itemsParent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemsParent_5), (void*)value);
	}

	inline static int32_t get_offset_of_inventoryUI_6() { return static_cast<int32_t>(offsetof(InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723, ___inventoryUI_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_inventoryUI_6() const { return ___inventoryUI_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_inventoryUI_6() { return &___inventoryUI_6; }
	inline void set_inventoryUI_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___inventoryUI_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inventoryUI_6), (void*)value);
	}

	inline static int32_t get_offset_of_ImageGUI_7() { return static_cast<int32_t>(offsetof(InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723, ___ImageGUI_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ImageGUI_7() const { return ___ImageGUI_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ImageGUI_7() { return &___ImageGUI_7; }
	inline void set_ImageGUI_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ImageGUI_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ImageGUI_7), (void*)value);
	}

	inline static int32_t get_offset_of_inventory_8() { return static_cast<int32_t>(offsetof(InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723, ___inventory_8)); }
	inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * get_inventory_8() const { return ___inventory_8; }
	inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 ** get_address_of_inventory_8() { return &___inventory_8; }
	inline void set_inventory_8(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * value)
	{
		___inventory_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inventory_8), (void*)value);
	}

	inline static int32_t get_offset_of_slots_9() { return static_cast<int32_t>(offsetof(InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723, ___slots_9)); }
	inline InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C* get_slots_9() const { return ___slots_9; }
	inline InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C** get_address_of_slots_9() { return &___slots_9; }
	inline void set_slots_9(InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C* value)
	{
		___slots_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slots_9), (void*)value);
	}
};

struct InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_StaticFields
{
public:
	// InventoryUI InventoryUI::inventoryControl
	InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723 * ___inventoryControl_4;
	// MouseLook InventoryUI::mouseLook
	MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA * ___mouseLook_10;

public:
	inline static int32_t get_offset_of_inventoryControl_4() { return static_cast<int32_t>(offsetof(InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_StaticFields, ___inventoryControl_4)); }
	inline InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723 * get_inventoryControl_4() const { return ___inventoryControl_4; }
	inline InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723 ** get_address_of_inventoryControl_4() { return &___inventoryControl_4; }
	inline void set_inventoryControl_4(InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723 * value)
	{
		___inventoryControl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inventoryControl_4), (void*)value);
	}

	inline static int32_t get_offset_of_mouseLook_10() { return static_cast<int32_t>(offsetof(InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_StaticFields, ___mouseLook_10)); }
	inline MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA * get_mouseLook_10() const { return ___mouseLook_10; }
	inline MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA ** get_address_of_mouseLook_10() { return &___mouseLook_10; }
	inline void set_mouseLook_10(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA * value)
	{
		___mouseLook_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseLook_10), (void*)value);
	}
};


// KeyGate
struct KeyGate_tC3213FC72E772EA5EB437202761263444A72813D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// KeyItem
struct KeyItem_t6695234C1CAC1337A19E0A7D387ED40BC972EFDA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// KillPlayer
struct KillPlayer_t782E9864FD2A7ECB006230962195BDFD5AAC2828  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// LightingManager
struct LightingManager_t27E73623988870F6B46F81B087B57195C324BF57  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Light LightingManager::DirectionalLight
	Light_tA2F349FE839781469A0344CF6039B51512394275 * ___DirectionalLight_4;
	// LightingPreset LightingManager::Preset
	LightingPreset_t876E1A4F9CC2E1FDBD13A0E0832B4F5F1D464886 * ___Preset_5;
	// System.Single LightingManager::TimeOfDay
	float ___TimeOfDay_6;

public:
	inline static int32_t get_offset_of_DirectionalLight_4() { return static_cast<int32_t>(offsetof(LightingManager_t27E73623988870F6B46F81B087B57195C324BF57, ___DirectionalLight_4)); }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * get_DirectionalLight_4() const { return ___DirectionalLight_4; }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** get_address_of_DirectionalLight_4() { return &___DirectionalLight_4; }
	inline void set_DirectionalLight_4(Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		___DirectionalLight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DirectionalLight_4), (void*)value);
	}

	inline static int32_t get_offset_of_Preset_5() { return static_cast<int32_t>(offsetof(LightingManager_t27E73623988870F6B46F81B087B57195C324BF57, ___Preset_5)); }
	inline LightingPreset_t876E1A4F9CC2E1FDBD13A0E0832B4F5F1D464886 * get_Preset_5() const { return ___Preset_5; }
	inline LightingPreset_t876E1A4F9CC2E1FDBD13A0E0832B4F5F1D464886 ** get_address_of_Preset_5() { return &___Preset_5; }
	inline void set_Preset_5(LightingPreset_t876E1A4F9CC2E1FDBD13A0E0832B4F5F1D464886 * value)
	{
		___Preset_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Preset_5), (void*)value);
	}

	inline static int32_t get_offset_of_TimeOfDay_6() { return static_cast<int32_t>(offsetof(LightingManager_t27E73623988870F6B46F81B087B57195C324BF57, ___TimeOfDay_6)); }
	inline float get_TimeOfDay_6() const { return ___TimeOfDay_6; }
	inline float* get_address_of_TimeOfDay_6() { return &___TimeOfDay_6; }
	inline void set_TimeOfDay_6(float value)
	{
		___TimeOfDay_6 = value;
	}
};


// MainMenu
struct MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// MouseLook
struct MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single MouseLook::mouseSensitivity
	float ___mouseSensitivity_4;
	// UnityEngine.Transform MouseLook::playerBody
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___playerBody_5;
	// System.Single MouseLook::range
	float ___range_6;
	// System.Single MouseLook::xRotation
	float ___xRotation_7;
	// UnityEngine.Camera MouseLook::cam
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam_8;
	// Interactable MouseLook::interactableObject
	Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * ___interactableObject_9;

public:
	inline static int32_t get_offset_of_mouseSensitivity_4() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ___mouseSensitivity_4)); }
	inline float get_mouseSensitivity_4() const { return ___mouseSensitivity_4; }
	inline float* get_address_of_mouseSensitivity_4() { return &___mouseSensitivity_4; }
	inline void set_mouseSensitivity_4(float value)
	{
		___mouseSensitivity_4 = value;
	}

	inline static int32_t get_offset_of_playerBody_5() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ___playerBody_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_playerBody_5() const { return ___playerBody_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_playerBody_5() { return &___playerBody_5; }
	inline void set_playerBody_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___playerBody_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerBody_5), (void*)value);
	}

	inline static int32_t get_offset_of_range_6() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ___range_6)); }
	inline float get_range_6() const { return ___range_6; }
	inline float* get_address_of_range_6() { return &___range_6; }
	inline void set_range_6(float value)
	{
		___range_6 = value;
	}

	inline static int32_t get_offset_of_xRotation_7() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ___xRotation_7)); }
	inline float get_xRotation_7() const { return ___xRotation_7; }
	inline float* get_address_of_xRotation_7() { return &___xRotation_7; }
	inline void set_xRotation_7(float value)
	{
		___xRotation_7 = value;
	}

	inline static int32_t get_offset_of_cam_8() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ___cam_8)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_cam_8() const { return ___cam_8; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_cam_8() { return &___cam_8; }
	inline void set_cam_8(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___cam_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_8), (void*)value);
	}

	inline static int32_t get_offset_of_interactableObject_9() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ___interactableObject_9)); }
	inline Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * get_interactableObject_9() const { return ___interactableObject_9; }
	inline Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 ** get_address_of_interactableObject_9() { return &___interactableObject_9; }
	inline void set_interactableObject_9(Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * value)
	{
		___interactableObject_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interactableObject_9), (void*)value);
	}
};


// PlayerManager
struct PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject PlayerManager::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_5;

public:
	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___player_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_5() const { return ___player_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_5), (void*)value);
	}
};

struct PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_StaticFields
{
public:
	// PlayerManager PlayerManager::instance
	PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_StaticFields, ___instance_4)); }
	inline PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * get_instance_4() const { return ___instance_4; }
	inline PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.CharacterController PlayerMovement::controller
	CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * ___controller_4;
	// System.Single PlayerMovement::speed
	float ___speed_5;
	// System.Single PlayerMovement::jumpheight
	float ___jumpheight_6;
	// UnityEngine.Vector3 PlayerMovement::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_7;
	// System.Single PlayerMovement::gravity
	float ___gravity_8;
	// UnityEngine.Transform PlayerMovement::groundCheck
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___groundCheck_9;
	// System.Single PlayerMovement::groundDistance
	float ___groundDistance_10;
	// UnityEngine.LayerMask PlayerMovement::groundMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___groundMask_11;
	// System.Boolean PlayerMovement::isGrounded
	bool ___isGrounded_12;
	// UnityEngine.CapsuleCollider PlayerMovement::coll
	CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * ___coll_13;
	// UnityEngine.Rigidbody PlayerMovement::playerRb
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___playerRb_14;

public:
	inline static int32_t get_offset_of_controller_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___controller_4)); }
	inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * get_controller_4() const { return ___controller_4; }
	inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E ** get_address_of_controller_4() { return &___controller_4; }
	inline void set_controller_4(CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * value)
	{
		___controller_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_4), (void*)value);
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_jumpheight_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___jumpheight_6)); }
	inline float get_jumpheight_6() const { return ___jumpheight_6; }
	inline float* get_address_of_jumpheight_6() { return &___jumpheight_6; }
	inline void set_jumpheight_6(float value)
	{
		___jumpheight_6 = value;
	}

	inline static int32_t get_offset_of_velocity_7() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___velocity_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_7() const { return ___velocity_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_7() { return &___velocity_7; }
	inline void set_velocity_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_7 = value;
	}

	inline static int32_t get_offset_of_gravity_8() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___gravity_8)); }
	inline float get_gravity_8() const { return ___gravity_8; }
	inline float* get_address_of_gravity_8() { return &___gravity_8; }
	inline void set_gravity_8(float value)
	{
		___gravity_8 = value;
	}

	inline static int32_t get_offset_of_groundCheck_9() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___groundCheck_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_groundCheck_9() const { return ___groundCheck_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_groundCheck_9() { return &___groundCheck_9; }
	inline void set_groundCheck_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___groundCheck_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groundCheck_9), (void*)value);
	}

	inline static int32_t get_offset_of_groundDistance_10() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___groundDistance_10)); }
	inline float get_groundDistance_10() const { return ___groundDistance_10; }
	inline float* get_address_of_groundDistance_10() { return &___groundDistance_10; }
	inline void set_groundDistance_10(float value)
	{
		___groundDistance_10 = value;
	}

	inline static int32_t get_offset_of_groundMask_11() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___groundMask_11)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_groundMask_11() const { return ___groundMask_11; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_groundMask_11() { return &___groundMask_11; }
	inline void set_groundMask_11(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___groundMask_11 = value;
	}

	inline static int32_t get_offset_of_isGrounded_12() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___isGrounded_12)); }
	inline bool get_isGrounded_12() const { return ___isGrounded_12; }
	inline bool* get_address_of_isGrounded_12() { return &___isGrounded_12; }
	inline void set_isGrounded_12(bool value)
	{
		___isGrounded_12 = value;
	}

	inline static int32_t get_offset_of_coll_13() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___coll_13)); }
	inline CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * get_coll_13() const { return ___coll_13; }
	inline CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 ** get_address_of_coll_13() { return &___coll_13; }
	inline void set_coll_13(CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * value)
	{
		___coll_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coll_13), (void*)value);
	}

	inline static int32_t get_offset_of_playerRb_14() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___playerRb_14)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_playerRb_14() const { return ___playerRb_14; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_playerRb_14() { return &___playerRb_14; }
	inline void set_playerRb_14(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___playerRb_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerRb_14), (void*)value);
	}
};


// PlayerSpawnManager
struct PlayerSpawnManager_tFC047824493C90A22DE376ABDFA12793F30A7A4C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject PlayerSpawnManager::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_4;
	// UnityEngine.Vector3 PlayerSpawnManager::DockSpawn
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___DockSpawn_5;
	// UnityEngine.Vector3 PlayerSpawnManager::JamesSpawn
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___JamesSpawn_6;
	// UnityEngine.Vector3 PlayerSpawnManager::CyrusSpawn
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___CyrusSpawn_7;
	// UnityEngine.Vector3 PlayerSpawnManager::SnakePitSpawn
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___SnakePitSpawn_8;
	// UnityEngine.Vector3 PlayerSpawnManager::FinalLevelSpawn
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___FinalLevelSpawn_9;
	// UnityEngine.Vector3 PlayerSpawnManager::KaiLevelSpawn
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___KaiLevelSpawn_10;
	// UnityEngine.Vector3 PlayerSpawnManager::BoarLevelSpawn
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___BoarLevelSpawn_11;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(PlayerSpawnManager_tFC047824493C90A22DE376ABDFA12793F30A7A4C, ___player_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_4() const { return ___player_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_DockSpawn_5() { return static_cast<int32_t>(offsetof(PlayerSpawnManager_tFC047824493C90A22DE376ABDFA12793F30A7A4C, ___DockSpawn_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_DockSpawn_5() const { return ___DockSpawn_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_DockSpawn_5() { return &___DockSpawn_5; }
	inline void set_DockSpawn_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___DockSpawn_5 = value;
	}

	inline static int32_t get_offset_of_JamesSpawn_6() { return static_cast<int32_t>(offsetof(PlayerSpawnManager_tFC047824493C90A22DE376ABDFA12793F30A7A4C, ___JamesSpawn_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_JamesSpawn_6() const { return ___JamesSpawn_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_JamesSpawn_6() { return &___JamesSpawn_6; }
	inline void set_JamesSpawn_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___JamesSpawn_6 = value;
	}

	inline static int32_t get_offset_of_CyrusSpawn_7() { return static_cast<int32_t>(offsetof(PlayerSpawnManager_tFC047824493C90A22DE376ABDFA12793F30A7A4C, ___CyrusSpawn_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_CyrusSpawn_7() const { return ___CyrusSpawn_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_CyrusSpawn_7() { return &___CyrusSpawn_7; }
	inline void set_CyrusSpawn_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___CyrusSpawn_7 = value;
	}

	inline static int32_t get_offset_of_SnakePitSpawn_8() { return static_cast<int32_t>(offsetof(PlayerSpawnManager_tFC047824493C90A22DE376ABDFA12793F30A7A4C, ___SnakePitSpawn_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_SnakePitSpawn_8() const { return ___SnakePitSpawn_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_SnakePitSpawn_8() { return &___SnakePitSpawn_8; }
	inline void set_SnakePitSpawn_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___SnakePitSpawn_8 = value;
	}

	inline static int32_t get_offset_of_FinalLevelSpawn_9() { return static_cast<int32_t>(offsetof(PlayerSpawnManager_tFC047824493C90A22DE376ABDFA12793F30A7A4C, ___FinalLevelSpawn_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_FinalLevelSpawn_9() const { return ___FinalLevelSpawn_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_FinalLevelSpawn_9() { return &___FinalLevelSpawn_9; }
	inline void set_FinalLevelSpawn_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___FinalLevelSpawn_9 = value;
	}

	inline static int32_t get_offset_of_KaiLevelSpawn_10() { return static_cast<int32_t>(offsetof(PlayerSpawnManager_tFC047824493C90A22DE376ABDFA12793F30A7A4C, ___KaiLevelSpawn_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_KaiLevelSpawn_10() const { return ___KaiLevelSpawn_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_KaiLevelSpawn_10() { return &___KaiLevelSpawn_10; }
	inline void set_KaiLevelSpawn_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___KaiLevelSpawn_10 = value;
	}

	inline static int32_t get_offset_of_BoarLevelSpawn_11() { return static_cast<int32_t>(offsetof(PlayerSpawnManager_tFC047824493C90A22DE376ABDFA12793F30A7A4C, ___BoarLevelSpawn_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_BoarLevelSpawn_11() const { return ___BoarLevelSpawn_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_BoarLevelSpawn_11() { return &___BoarLevelSpawn_11; }
	inline void set_BoarLevelSpawn_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___BoarLevelSpawn_11 = value;
	}
};


// SceneChanger
struct SceneChanger_t6A30EA4853DA52DBD1479ADCBE7B3B6952D1E068  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String SceneChanger::nameOfScene
	String_t* ___nameOfScene_4;
	// System.Int32 SceneChanger::newSpawnPoint
	int32_t ___newSpawnPoint_5;

public:
	inline static int32_t get_offset_of_nameOfScene_4() { return static_cast<int32_t>(offsetof(SceneChanger_t6A30EA4853DA52DBD1479ADCBE7B3B6952D1E068, ___nameOfScene_4)); }
	inline String_t* get_nameOfScene_4() const { return ___nameOfScene_4; }
	inline String_t** get_address_of_nameOfScene_4() { return &___nameOfScene_4; }
	inline void set_nameOfScene_4(String_t* value)
	{
		___nameOfScene_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameOfScene_4), (void*)value);
	}

	inline static int32_t get_offset_of_newSpawnPoint_5() { return static_cast<int32_t>(offsetof(SceneChanger_t6A30EA4853DA52DBD1479ADCBE7B3B6952D1E068, ___newSpawnPoint_5)); }
	inline int32_t get_newSpawnPoint_5() const { return ___newSpawnPoint_5; }
	inline int32_t* get_address_of_newSpawnPoint_5() { return &___newSpawnPoint_5; }
	inline void set_newSpawnPoint_5(int32_t value)
	{
		___newSpawnPoint_5 = value;
	}
};


// StateCheck
struct StateCheck_t7EA9F2D982B62F1A81F99E936C15D2CE42282DBE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean StateCheck::normal
	bool ___normal_4;
	// System.Boolean StateCheck::climb
	bool ___climb_5;

public:
	inline static int32_t get_offset_of_normal_4() { return static_cast<int32_t>(offsetof(StateCheck_t7EA9F2D982B62F1A81F99E936C15D2CE42282DBE, ___normal_4)); }
	inline bool get_normal_4() const { return ___normal_4; }
	inline bool* get_address_of_normal_4() { return &___normal_4; }
	inline void set_normal_4(bool value)
	{
		___normal_4 = value;
	}

	inline static int32_t get_offset_of_climb_5() { return static_cast<int32_t>(offsetof(StateCheck_t7EA9F2D982B62F1A81F99E936C15D2CE42282DBE, ___climb_5)); }
	inline bool get_climb_5() const { return ___climb_5; }
	inline bool* get_address_of_climb_5() { return &___climb_5; }
	inline void set_climb_5(bool value)
	{
		___climb_5 = value;
	}
};


// TeleportToStart
struct TeleportToStart_t918088C7C366239FDA03C15C2382A291AE667E6D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject TeleportToStart::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_4;
	// UnityEngine.Transform TeleportToStart::Spawnpoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Spawnpoint_5;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(TeleportToStart_t918088C7C366239FDA03C15C2382A291AE667E6D, ___player_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_4() const { return ___player_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_Spawnpoint_5() { return static_cast<int32_t>(offsetof(TeleportToStart_t918088C7C366239FDA03C15C2382A291AE667E6D, ___Spawnpoint_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Spawnpoint_5() const { return ___Spawnpoint_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Spawnpoint_5() { return &___Spawnpoint_5; }
	inline void set_Spawnpoint_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Spawnpoint_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Spawnpoint_5), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// ItemPickup
struct ItemPickup_tCF50D7D3F9C5087BA2DAD6A0050A371122BFC99D  : public Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7
{
public:
	// Item ItemPickup::item
	Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item_7;

public:
	inline static int32_t get_offset_of_item_7() { return static_cast<int32_t>(offsetof(ItemPickup_tCF50D7D3F9C5087BA2DAD6A0050A371122BFC99D, ___item_7)); }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * get_item_7() const { return ___item_7; }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C ** get_address_of_item_7() { return &___item_7; }
	inline void set_item_7(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * value)
	{
		___item_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___item_7), (void*)value);
	}
};


// LeverManager
struct LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5  : public Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> LeverManager::switches
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___switches_8;
	// UnityEngine.GameObject LeverManager::Door
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Door_9;
	// UnityEngine.GameObject LeverManager::Light1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Light1_10;
	// UnityEngine.GameObject LeverManager::Light2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Light2_11;
	// UnityEngine.GameObject LeverManager::fakeWheel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___fakeWheel_12;
	// UnityEngine.GameObject LeverManager::realWheel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___realWheel_13;
	// System.Int32 LeverManager::currentSwitch
	int32_t ___currentSwitch_14;
	// System.Single LeverManager::waitForPullingSwitch
	float ___waitForPullingSwitch_15;
	// System.Boolean LeverManager::isDoor
	bool ___isDoor_16;
	// System.Boolean LeverManager::isLight
	bool ___isLight_17;

public:
	inline static int32_t get_offset_of_switches_8() { return static_cast<int32_t>(offsetof(LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5, ___switches_8)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_switches_8() const { return ___switches_8; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_switches_8() { return &___switches_8; }
	inline void set_switches_8(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___switches_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___switches_8), (void*)value);
	}

	inline static int32_t get_offset_of_Door_9() { return static_cast<int32_t>(offsetof(LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5, ___Door_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Door_9() const { return ___Door_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Door_9() { return &___Door_9; }
	inline void set_Door_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Door_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Door_9), (void*)value);
	}

	inline static int32_t get_offset_of_Light1_10() { return static_cast<int32_t>(offsetof(LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5, ___Light1_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Light1_10() const { return ___Light1_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Light1_10() { return &___Light1_10; }
	inline void set_Light1_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Light1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Light1_10), (void*)value);
	}

	inline static int32_t get_offset_of_Light2_11() { return static_cast<int32_t>(offsetof(LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5, ___Light2_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Light2_11() const { return ___Light2_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Light2_11() { return &___Light2_11; }
	inline void set_Light2_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Light2_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Light2_11), (void*)value);
	}

	inline static int32_t get_offset_of_fakeWheel_12() { return static_cast<int32_t>(offsetof(LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5, ___fakeWheel_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_fakeWheel_12() const { return ___fakeWheel_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_fakeWheel_12() { return &___fakeWheel_12; }
	inline void set_fakeWheel_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___fakeWheel_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fakeWheel_12), (void*)value);
	}

	inline static int32_t get_offset_of_realWheel_13() { return static_cast<int32_t>(offsetof(LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5, ___realWheel_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_realWheel_13() const { return ___realWheel_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_realWheel_13() { return &___realWheel_13; }
	inline void set_realWheel_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___realWheel_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___realWheel_13), (void*)value);
	}

	inline static int32_t get_offset_of_currentSwitch_14() { return static_cast<int32_t>(offsetof(LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5, ___currentSwitch_14)); }
	inline int32_t get_currentSwitch_14() const { return ___currentSwitch_14; }
	inline int32_t* get_address_of_currentSwitch_14() { return &___currentSwitch_14; }
	inline void set_currentSwitch_14(int32_t value)
	{
		___currentSwitch_14 = value;
	}

	inline static int32_t get_offset_of_waitForPullingSwitch_15() { return static_cast<int32_t>(offsetof(LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5, ___waitForPullingSwitch_15)); }
	inline float get_waitForPullingSwitch_15() const { return ___waitForPullingSwitch_15; }
	inline float* get_address_of_waitForPullingSwitch_15() { return &___waitForPullingSwitch_15; }
	inline void set_waitForPullingSwitch_15(float value)
	{
		___waitForPullingSwitch_15 = value;
	}

	inline static int32_t get_offset_of_isDoor_16() { return static_cast<int32_t>(offsetof(LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5, ___isDoor_16)); }
	inline bool get_isDoor_16() const { return ___isDoor_16; }
	inline bool* get_address_of_isDoor_16() { return &___isDoor_16; }
	inline void set_isDoor_16(bool value)
	{
		___isDoor_16 = value;
	}

	inline static int32_t get_offset_of_isLight_17() { return static_cast<int32_t>(offsetof(LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5, ___isLight_17)); }
	inline bool get_isLight_17() const { return ___isLight_17; }
	inline bool* get_address_of_isLight_17() { return &___isLight_17; }
	inline void set_isLight_17(bool value)
	{
		___isLight_17 = value;
	}
};

struct LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5_StaticFields
{
public:
	// LeverManager LeverManager::instance
	LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5 * ___instance_7;

public:
	inline static int32_t get_offset_of_instance_7() { return static_cast<int32_t>(offsetof(LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5_StaticFields, ___instance_7)); }
	inline LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5 * get_instance_7() const { return ___instance_7; }
	inline LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5 ** get_address_of_instance_7() { return &___instance_7; }
	inline void set_instance_7(LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5 * value)
	{
		___instance_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_7), (void*)value);
	}
};


// LeverSystem
struct LeverSystem_tB6C04315E26455D5B4206D71C5A0C2F1989D98B1  : public Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7
{
public:
	// System.Int32 LeverSystem::OrderOfSwitch
	int32_t ___OrderOfSwitch_7;
	// System.Boolean LeverSystem::switchActivated
	bool ___switchActivated_8;

public:
	inline static int32_t get_offset_of_OrderOfSwitch_7() { return static_cast<int32_t>(offsetof(LeverSystem_tB6C04315E26455D5B4206D71C5A0C2F1989D98B1, ___OrderOfSwitch_7)); }
	inline int32_t get_OrderOfSwitch_7() const { return ___OrderOfSwitch_7; }
	inline int32_t* get_address_of_OrderOfSwitch_7() { return &___OrderOfSwitch_7; }
	inline void set_OrderOfSwitch_7(int32_t value)
	{
		___OrderOfSwitch_7 = value;
	}

	inline static int32_t get_offset_of_switchActivated_8() { return static_cast<int32_t>(offsetof(LeverSystem_tB6C04315E26455D5B4206D71C5A0C2F1989D98B1, ___switchActivated_8)); }
	inline bool get_switchActivated_8() const { return ___switchActivated_8; }
	inline bool* get_address_of_switchActivated_8() { return &___switchActivated_8; }
	inline void set_switchActivated_8(bool value)
	{
		___switchActivated_8 = value;
	}
};


// ManualInteract
struct ManualInteract_t0D54E613F38B0073F35C1F038AB966DCF7B74D5E  : public Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7
{
public:
	// UnityEngine.GameObject ManualInteract::manualUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___manualUI_7;
	// UnityEngine.UI.Button ManualInteract::closeButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___closeButton_8;

public:
	inline static int32_t get_offset_of_manualUI_7() { return static_cast<int32_t>(offsetof(ManualInteract_t0D54E613F38B0073F35C1F038AB966DCF7B74D5E, ___manualUI_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_manualUI_7() const { return ___manualUI_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_manualUI_7() { return &___manualUI_7; }
	inline void set_manualUI_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___manualUI_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manualUI_7), (void*)value);
	}

	inline static int32_t get_offset_of_closeButton_8() { return static_cast<int32_t>(offsetof(ManualInteract_t0D54E613F38B0073F35C1F038AB966DCF7B74D5E, ___closeButton_8)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_closeButton_8() const { return ___closeButton_8; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_closeButton_8() { return &___closeButton_8; }
	inline void set_closeButton_8(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___closeButton_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___closeButton_8), (void*)value);
	}
};


// OpenChest
struct OpenChest_tD4D9212C5347F9967767E19512EAEF98BFDA81BB  : public Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7
{
public:
	// UnityEngine.GameObject OpenChest::chestClosed
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___chestClosed_7;
	// UnityEngine.GameObject OpenChest::chestOpen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___chestOpen_8;

public:
	inline static int32_t get_offset_of_chestClosed_7() { return static_cast<int32_t>(offsetof(OpenChest_tD4D9212C5347F9967767E19512EAEF98BFDA81BB, ___chestClosed_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_chestClosed_7() const { return ___chestClosed_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_chestClosed_7() { return &___chestClosed_7; }
	inline void set_chestClosed_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___chestClosed_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chestClosed_7), (void*)value);
	}

	inline static int32_t get_offset_of_chestOpen_8() { return static_cast<int32_t>(offsetof(OpenChest_tD4D9212C5347F9967767E19512EAEF98BFDA81BB, ___chestOpen_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_chestOpen_8() const { return ___chestOpen_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_chestOpen_8() { return &___chestOpen_8; }
	inline void set_chestOpen_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___chestOpen_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chestOpen_8), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// WheelInteractable
struct WheelInteractable_t6F7057EAC4915BFEE0BAB95158D866D7BCC40A28  : public Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7
{
public:

public:
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// InventorySlot[]
struct InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * m_Items[1];

public:
	inline InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Light[]
struct LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Light_tA2F349FE839781469A0344CF6039B51512394275 * m_Items[1];

public:
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m93714777F9B026912C289C05D92630AB14704A92_gshared (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderBy<System.Object,System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisRuntimeObject_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE35BA7647B5FEF577D73CD793BB0EB148594C98C_gshared (RuntimeObject* ___source0, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___keySelector1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3 (String_t* ___tag0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void Boar::Patrol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boar_Patrol_m08D8A5FC9433654EBA76AE01C261672D5A1C3B0A (Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8 * __this, const RuntimeMethod* method);
// System.Void Boar::DetectedPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boar_DetectedPlayer_m601068029D82FA7F56750FA20D4E070C9C872C0A (Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8 * __this, const RuntimeMethod* method);
// System.Void Boar::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boar_Attack_m48C7C878AEC20A80683DA5DCB417D6DDA60ADAD7 (Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.AI.NavMesh::SamplePosition(UnityEngine.Vector3,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_SamplePosition_m9675E148D95E1D92ED75DC608CAA33E75ABCA05E (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___sourcePosition0, NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D * ___hit1, float ___maxDistance2, int32_t ___areaMask3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  NavMeshHit_get_position_m66845935ED76B2480F72EE6628EFD9D6BF35B39A (NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::set_stoppingDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_stoppingDistance_m9D26543E5329CE08A147EA11AECF8BB3996121C8 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, float ___value0, const RuntimeMethod* method);
// System.Void Boar::FaceTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boar_FaceTarget_m97CF82F93E10B999C390A55226DE173853D65B98 (Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::ResetPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_ResetPath_mEAB767048210D7EE16A3A765D41494D770D10A0C (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m3A40B7F195E9E217AE29A0964D7E7540E2E23080 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AI.NavMeshAgent::get_speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_speed_m5AA9A1B23412A8F5CE24A5312F6E6D4BA282B173 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AI.NavMeshAgent::get_angularSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_angularSpeed_mD38E53E3ECA7E21749A8546C8DC91C56908066AA (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, const RuntimeMethod* method);
// System.Void BoarBehaviour/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m7E89707D880A580AE76AC3D8DCD831E6D24D6AAC (U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * __this, const RuntimeMethod* method);
// System.Void BoarBehaviour::FaceTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoarBehaviour_FaceTarget_m12A94DDB8B141D803881817390CA3B186B869D71 (BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AI.NavMeshAgent::get_stoppingDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_stoppingDistance_mE2F58A8DB9C8402F0373576AB91690E8B34C1EA6 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator BoarBehaviour/<>c__DisplayClass14_0::<Update>g__Bulldozing|0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass14_0_U3CUpdateU3Eg__BulldozingU7C0_m4A111276F34826C8A49980B959D5EB507B3C4652 (U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// UnityEngine.Vector3 BoarBehaviour::RandomNavSphere(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BoarBehaviour_RandomNavSphere_m30A8B607C53D54406EBE650E7767F048A051DC00 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, float ___distance1, int32_t ___layerMask2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m96C425145BBD85CF0192F9DDB3D1A8C69429B78B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, float ___radius1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Interactable>()
inline Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * Component_GetComponent_TisInteractable_tEEFC60C29F907276ABC0BDA6621F8089144774E7_mA9D91B6B22CFF4699E2D47FC3CF49F863AC61657 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Item>::get_Count()
inline int32_t List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_inline (List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Item>::Add(!0)
inline void List_1_Add_m17382E73E27D945DEC6B9BD38A447B638D0D7C0D (List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 *, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Inventory/OnItemChanged::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnItemChanged_Invoke_m0930392CB320C062C256845E08A48954607A13E0 (OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<Item>::Remove(!0)
inline bool List_1_Remove_m822464A408DB63746E72190B3527E4283A6B3E11 (List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 *, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Item>::.ctor()
inline void List_1__ctor_m6D4334AF3C7C3FD8F6D2CAA35357F341CC13EAA4 (List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Inventory::Remove(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_Remove_m4293C0BA4C52C082DB2045B0F528219B576BCDD0 (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void Inventory/OnItemChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnItemChanged__ctor_m1D1B000321D4BBC44BDE3AD3631B1F79F3AC65C1 (OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<InventorySlot>()
inline InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C* Component_GetComponentsInChildren_TisInventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB_m40A768682731E05905E4B78D9E461952D679C673 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<MouseLook>()
inline MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA * GameObject_GetComponent_TisMouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA_m47214CA52006E08D48EB50CF1F5FA6B7D805D78D (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Void InventoryUI::SetCursorLock(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryUI_SetCursorLock_mF50AA129590BD290CB0C0008D21B4481ED7B7C44 (InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723 * __this, bool ___isLocked0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Item>::get_Item(System.Int32)
inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * List_1_get_Item_mF132E1A0C2CC6DD4CA89DBE3493C69CB4E94BCAD_inline (List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * (*) (List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void InventorySlot::AddItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySlot_AddItem_m91A6A876842281A0D5E70BE28461563BCE22A09B (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___newItem0, const RuntimeMethod* method);
// System.Void InventorySlot::ClearSlot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySlot_ClearSlot_mF66AACCE4767645187E765BC79A946ED97372681 (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D (bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217 (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void Interactable::Interact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interactable_Interact_m3F5E63F6B8A0875E44D9714F17C06BD2FC2962EA (Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * __this, const RuntimeMethod* method);
// System.Void ItemPickup::PickUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemPickup_PickUp_m83953FCD6CF48C90585D25EC26418978BAA5FECD (ItemPickup_tCF50D7D3F9C5087BA2DAD6A0050A371122BFC99D * __this, const RuntimeMethod* method);
// System.Boolean Inventory::Add(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inventory_Add_m6065EB5DC8F28902E44A528BF67A42A3240B06F0 (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item0, const RuntimeMethod* method);
// System.Void Interactable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interactable__ctor_m14A127716816AD709C7F0004EEC27A89E8EAE8D3 (Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Func`2<UnityEngine.GameObject,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m1B3BB556C077708C2DDE87E8CAF6B6A35AA04162 (Func_2_tFA3D86D150CCC78E800EC5AC7D7E87E0E601B2AA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tFA3D86D150CCC78E800EC5AC7D7E87E0E601B2AA *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m93714777F9B026912C289C05D92630AB14704A92_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderBy<UnityEngine.GameObject,System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_OrderBy_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mBEF921B3D7B132210E365BD5746CC06415D63FEF (RuntimeObject* ___source0, Func_2_tFA3D86D150CCC78E800EC5AC7D7E87E0E601B2AA * ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tFA3D86D150CCC78E800EC5AC7D7E87E0E601B2AA *, const RuntimeMethod*))Enumerable_OrderBy_TisRuntimeObject_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE35BA7647B5FEF577D73CD793BB0EB148594C98C_gshared)(___source0, ___keySelector1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UnityEngine.GameObject>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * Enumerable_ToList_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m7B392C9EB4F3B2B75D972095BD5F04FD238EDED1 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared)(___source0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<LeverSystem>()
inline LeverSystem_tB6C04315E26455D5B4206D71C5A0C2F1989D98B1 * GameObject_GetComponent_TisLeverSystem_tB6C04315E26455D5B4206D71C5A0C2F1989D98B1_m8C79CA499EDB18F9D0DA4C4BE4946536357F57C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  LeverSystem_tB6C04315E26455D5B4206D71C5A0C2F1989D98B1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void LeverManager::AllSwitchesActivated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeverManager_AllSwitchesActivated_mE0C28E9F22F82D1A99A4866DD1F9917DA9AB0ADE (LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5 * __this, const RuntimeMethod* method);
// System.Void LeverSystem::UseLever()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeverSystem_UseLever_m6A45B7EDC756E098331868511E8E44C5019B84DE (LeverSystem_tB6C04315E26455D5B4206D71C5A0C2F1989D98B1 * __this, const RuntimeMethod* method);
// System.Boolean LeverManager::ActivateSwitch(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LeverManager_ActivateSwitch_m3A38D0F673DEDC62BD099355ABF33DF99A0383A8 (LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5 * __this, bool ___lever0, int32_t ___orderOfLever1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// System.Void LightingManager::UpdateLighting(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightingManager_UpdateLighting_mBF87842990D9B32CD93F27029E71036B08A3E3AB (LightingManager_t27E73623988870F6B46F81B087B57195C324BF57 * __this, float ___timePercent0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Gradient::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Gradient_Evaluate_m02EA0BFD41864C8673A29333EBC4569C9DAA3E37 (Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * __this, float ___time0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_ambientLight(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_ambientLight_m0BD3CBB34DDA694D6459FB5A68859A4C070670D2 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_fogColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_fogColor_mC46154762710EFAA869A4E972C16D1FE9B0EA01F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_color_mB33E961A7CF25D0EBE410EE22444B4B8D4317C6C (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Light UnityEngine.RenderSettings::get_sun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Light_tA2F349FE839781469A0344CF6039B51512394275 * RenderSettings_get_sun_mF349095D8EFEFFDD6450A02732B0881411F5AE9D (const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.Light>()
inline LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* Object_FindObjectsOfType_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m2BF548B32973BBCDBA15A4D77FA81652608878B3 (const RuntimeMethod* method)
{
	return ((  LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// UnityEngine.LightType UnityEngine.Light::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Light_get_type_mDBBEC33D93952330EED5B02B15865C59D5C355A0 (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m918D1131BACEBD7CCEA9D9BFDF3279F6CD56E121 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void Interactable::LookingAtInteractable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interactable_LookingAtInteractable_mD0A3EDDDC16A0C0ECDE09751211D8AD9D738BD27 (Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * __this, const RuntimeMethod* method);
// System.Void OpenChest::OpenTheChest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenChest_OpenTheChest_m13899E03BF61C8A31395D3BB714FE2CC47617C4F (OpenChest_tD4D9212C5347F9967767E19512EAEF98BFDA81BB * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider>()
inline CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * Component_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m2B9A09217489CB456933DEA112CA70C10AD3B9F9 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_CheckSphere_m6DFD61C841CEBFDE6645689279AA6E31297B002B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE0EBC32C72A0BEC18EDEBE748D44309A4BA32E60 (CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___motion0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m9D556E728119BEB64AA624EBE82931367B6573A5 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void WheelInteractable::changeLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelInteractable_changeLevel_mA3D710856287EBBB877CEB0753EE98EE9D3D54DC (WheelInteractable_t6F7057EAC4915BFEE0BAB95158D866D7BCC40A28 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void BoarBehaviour/<>c__DisplayClass14_0/<<Update>g__Bulldozing|0>d::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed__ctor_m502D6C0F26455FA5BE72331E8B4D763100754466 (U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed_t2F5FBD0261094D34389FC1D7AA08D2C324C3313A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void LeverManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3F9B6099591DAC080EAFAF8A954C80A1FD241239 (U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::set_angularSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_angularSpeed_m5729B56BEEF8F863E5FA522135EC9B316A307F8D (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_speed_mE71CB504B0CC1E977293722F9BA81B7060A99E14 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void Boar::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boar_Awake_mEC4B61B7D98C12999EA40381A609AA5571BF7099 (Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// agent = GetComponent<NavMeshAgent>();
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_0;
		L_0 = Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F(__this, /*hidden argument*/Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var);
		__this->set_agent_18(L_0);
		// state = BoarState.Idle; //AI will initially be roaming;
		__this->set_state_17(0);
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_1;
		L_1 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set_rb_5(L_1);
		// target = GameObject.FindWithTag("Player").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		__this->set_target_4(L_3);
		// }
		return;
	}
}
// System.Void Boar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boar_Update_m4CA200BA8A897F5869056D144C85298B89B415A3 (Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// distanceFromTarget = Vector3.Distance(target.position, transform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_target_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4;
		L_4 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_1, L_3, /*hidden argument*/NULL);
		__this->set_distanceFromTarget_11(L_4);
		// switch (state)
		int32_t L_5 = __this->get_state_17();
		V_0 = L_5;
		int32_t L_6 = V_0;
		switch (L_6)
		{
			case 0:
			{
				goto IL_003b;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_0049;
			}
		}
	}
	{
		return;
	}

IL_003b:
	{
		// case BoarState.Idle: Patrol(); break;
		Boar_Patrol_m08D8A5FC9433654EBA76AE01C261672D5A1C3B0A(__this, /*hidden argument*/NULL);
		// case BoarState.Idle: Patrol(); break;
		return;
	}

IL_0042:
	{
		// case BoarState.Chase: DetectedPlayer(); break;
		Boar_DetectedPlayer_m601068029D82FA7F56750FA20D4E070C9C872C0A(__this, /*hidden argument*/NULL);
		// case BoarState.Chase: DetectedPlayer(); break;
		return;
	}

IL_0049:
	{
		// case BoarState.Charge: Attack(); break;
		Boar_Attack_m48C7C878AEC20A80683DA5DCB417D6DDA60ADAD7(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Boar::Patrol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boar_Patrol_m08D8A5FC9433654EBA76AE01C261672D5A1C3B0A (Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoarState_t7DB5C4D187A437EE6D9123138BA2F670397C52CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral644C1B88BEB45C8D3FFB6324167C42412E95C883);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral925D5A465A3C2834006CB8C794643A086E23AF38);
		s_Il2CppMethodInitialized = true;
	}
	NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// timer += Time.deltaTime;
		float L_0 = __this->get_timer_12();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_12(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if ((timer >= nextPositionTimer) && (playerDetected == false))
		float L_2 = __this->get_timer_12();
		float L_3 = __this->get_nextPositionTimer_7();
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_009a;
		}
	}
	{
		bool L_4 = __this->get_playerDetected_20();
		if (L_4)
		{
			goto IL_009a;
		}
	}
	{
		// Debug.Log("Boar is currently " + state);
		int32_t* L_5 = __this->get_address_of_state_17();
		RuntimeObject * L_6 = Box(BoarState_t7DB5C4D187A437EE6D9123138BA2F670397C52CC_il2cpp_TypeInfo_var, L_5);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		*L_5 = *(int32_t*)UnBox(L_6);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral644C1B88BEB45C8D3FFB6324167C42412E95C883, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_8, /*hidden argument*/NULL);
		// Vector3 randomDirection = Random.insideUnitSphere * roamingDistance; //Vector3 that will get a random position within a sphere
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90(/*hidden argument*/NULL);
		float L_10 = __this->get_roamingDistance_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, L_10, /*hidden argument*/NULL);
		// randomDirection += designatedLocation.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_designatedLocation_16();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_11, L_14, /*hidden argument*/NULL);
		// NavMesh.SamplePosition(randomDirection, out navhit, roamingDistance, -1);
		float L_16 = __this->get_roamingDistance_10();
		bool L_17;
		L_17 = NavMesh_SamplePosition_m9675E148D95E1D92ED75DC608CAA33E75ABCA05E(L_15, (NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D *)(&V_0), L_16, (-1), /*hidden argument*/NULL);
		// agent.SetDestination(navhit.position);
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_18 = __this->get_agent_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = NavMeshHit_get_position_m66845935ED76B2480F72EE6628EFD9D6BF35B39A((NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D *)(&V_0), /*hidden argument*/NULL);
		bool L_20;
		L_20 = NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747(L_18, L_19, /*hidden argument*/NULL);
		// timer = 0;
		__this->set_timer_12((0.0f));
	}

IL_009a:
	{
		// if (distanceFromTarget <= detectionRange) //If target is within the boar's detection range...
		float L_21 = __this->get_distanceFromTarget_11();
		float L_22 = __this->get_detectionRange_9();
		if ((!(((float)L_21) <= ((float)L_22))))
		{
			goto IL_00cb;
		}
	}
	{
		// timer = 0;
		__this->set_timer_12((0.0f));
		// playerDetected = true;
		__this->set_playerDetected_20((bool)1);
		// state = BoarState.Chase;
		__this->set_state_17(1);
		// Debug.Log("Chasing Player");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral925D5A465A3C2834006CB8C794643A086E23AF38, /*hidden argument*/NULL);
	}

IL_00cb:
	{
		// }
		return;
	}
}
// System.Void Boar::DetectedPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boar_DetectedPlayer_m601068029D82FA7F56750FA20D4E070C9C872C0A (Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59EB63BE5C6BC32054EDAD2CC5DF51BD464D921A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1C5E26CCED33A4216DB0711C082A140109AC82F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// agent.stoppingDistance = attackRange;
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_0 = __this->get_agent_18();
		float L_1 = __this->get_attackRange_8();
		NavMeshAgent_set_stoppingDistance_m9D26543E5329CE08A147EA11AECF8BB3996121C8(L_0, L_1, /*hidden argument*/NULL);
		// agent.SetDestination(target.position);
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_2 = __this->get_agent_18();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_target_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747(L_2, L_4, /*hidden argument*/NULL);
		// FaceTarget();
		Boar_FaceTarget_m97CF82F93E10B999C390A55226DE173853D65B98(__this, /*hidden argument*/NULL);
		// if (distanceFromTarget <= attackRange)
		float L_6 = __this->get_distanceFromTarget_11();
		float L_7 = __this->get_attackRange_8();
		if ((!(((float)L_6) <= ((float)L_7))))
		{
			goto IL_0059;
		}
	}
	{
		// Debug.Log("Is is in attack mode");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralE1C5E26CCED33A4216DB0711C082A140109AC82F, /*hidden argument*/NULL);
		// agent.ResetPath();
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_8 = __this->get_agent_18();
		NavMeshAgent_ResetPath_mEAB767048210D7EE16A3A765D41494D770D10A0C(L_8, /*hidden argument*/NULL);
		// state = BoarState.Charge;
		__this->set_state_17(2);
		// }
		return;
	}

IL_0059:
	{
		// else if (distanceFromTarget > detectionRange)//if target goes out of detection range...
		float L_9 = __this->get_distanceFromTarget_11();
		float L_10 = __this->get_detectionRange_9();
		if ((!(((float)L_9) > ((float)L_10))))
		{
			goto IL_009a;
		}
	}
	{
		// playerDetected = false;
		__this->set_playerDetected_20((bool)0);
		// agent.stoppingDistance = 0;
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_11 = __this->get_agent_18();
		NavMeshAgent_set_stoppingDistance_m9D26543E5329CE08A147EA11AECF8BB3996121C8(L_11, (0.0f), /*hidden argument*/NULL);
		// agent.ResetPath(); //nullifies current set destination
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_12 = __this->get_agent_18();
		NavMeshAgent_ResetPath_mEAB767048210D7EE16A3A765D41494D770D10A0C(L_12, /*hidden argument*/NULL);
		// Debug.Log("Going back to roaming");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral59EB63BE5C6BC32054EDAD2CC5DF51BD464D921A, /*hidden argument*/NULL);
		// state = BoarState.Idle;
		__this->set_state_17(0);
	}

IL_009a:
	{
		// }
		return;
	}
}
// System.Void Boar::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boar_Attack_m48C7C878AEC20A80683DA5DCB417D6DDA60ADAD7 (Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54B682DDD43AB553E0C13FFB2191D76059575F7E);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// timer += Time.deltaTime;
		float L_0 = __this->get_timer_12();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_12(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if (timer >= attackCooldown)
		float L_2 = __this->get_timer_12();
		float L_3 = __this->get_attackCooldown_14();
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_00e0;
		}
	}
	{
		// isCharging = true;
		__this->set_isCharging_19((bool)1);
		// Vector3 direction = target.position - rb.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_target_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_6 = __this->get_rb_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// direction.Normalize();
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		// float rotateAmount = Vector3.Cross(direction, transform.forward).y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(L_9, L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_y_3();
		V_1 = L_13;
		// rb.angularVelocity = new Vector3(0, -angleChangingSpeed, 0) * rotateAmount;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_14 = __this->get_rb_5();
		float L_15 = __this->get_angleChangingSpeed_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_16), (0.0f), ((-L_15)), (0.0f), /*hidden argument*/NULL);
		float L_17 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_16, L_17, /*hidden argument*/NULL);
		Rigidbody_set_angularVelocity_m3A40B7F195E9E217AE29A0964D7E7540E2E23080(L_14, L_18, /*hidden argument*/NULL);
		// rb.velocity = transform.forward * speed;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_19 = __this->get_rb_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_20, /*hidden argument*/NULL);
		int32_t L_22 = __this->get_speed_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_21, ((float)((float)L_22)), /*hidden argument*/NULL);
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_19, L_23, /*hidden argument*/NULL);
		// if (timer >= chargingDuration + attackCooldown)
		float L_24 = __this->get_timer_12();
		float L_25 = __this->get_chargingDuration_15();
		float L_26 = __this->get_attackCooldown_14();
		if ((!(((float)L_24) >= ((float)((float)il2cpp_codegen_add((float)L_25, (float)L_26))))))
		{
			goto IL_00e6;
		}
	}
	{
		// isCharging = false;
		__this->set_isCharging_19((bool)0);
		// Debug.Log("Boar has stopped charging forward");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral54B682DDD43AB553E0C13FFB2191D76059575F7E, /*hidden argument*/NULL);
		// timer = 0; //Boar attack is on cooldown
		__this->set_timer_12((0.0f));
		// }
		goto IL_00e6;
	}

IL_00e0:
	{
		// FaceTarget();
		Boar_FaceTarget_m97CF82F93E10B999C390A55226DE173853D65B98(__this, /*hidden argument*/NULL);
	}

IL_00e6:
	{
		// if (!isCharging && (distanceFromTarget > detectionRange)) //If boar isn't charging and the target is too far within its detection range
		bool L_27 = __this->get_isCharging_19();
		if (L_27)
		{
			goto IL_0115;
		}
	}
	{
		float L_28 = __this->get_distanceFromTarget_11();
		float L_29 = __this->get_detectionRange_9();
		if ((!(((float)L_28) > ((float)L_29))))
		{
			goto IL_0115;
		}
	}
	{
		// timer = 0;
		__this->set_timer_12((0.0f));
		// playerDetected = false;
		__this->set_playerDetected_20((bool)0);
		// state = BoarState.Idle;
		__this->set_state_17(0);
	}

IL_0115:
	{
		// }
		return;
	}
}
// System.Void Boar::FaceTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boar_FaceTarget_m97CF82F93E10B999C390A55226DE173853D65B98 (Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector3 direction = (target.position - transform.position).normalized;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_target_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_1, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		V_0 = L_5;
		// Quaternion lookRotation = Quaternion.LookRotation(new Vector3(direction.x, 0, direction.z));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		float L_7 = L_6.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), L_7, (0.0f), L_9, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * 5f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_13, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15 = V_1;
		float L_16;
		L_16 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17;
		L_17 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_14, L_15, ((float)il2cpp_codegen_multiply((float)L_16, (float)(5.0f))), /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_12, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Boar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boar__ctor_mCD2C934D7FD36EA87811738DB189B6267CF6E4CF (Boar_t96DF2BDB5DED1702AC9100547E734C3CFB1C02D8 * __this, const RuntimeMethod* method)
{
	{
		// public int speed = 4;
		__this->set_speed_6(4);
		// public float nextPositionTimer = 5; //timer til AI goes into nextPosition
		__this->set_nextPositionTimer_7((5.0f));
		// public float attackRange = 7f;
		__this->set_attackRange_8((7.0f));
		// public float detectionRange = 10f;
		__this->set_detectionRange_9((10.0f));
		// public float roamingDistance = 5.0f;
		__this->set_roamingDistance_10((5.0f));
		// public float attackCooldown = 2f;
		__this->set_attackCooldown_14((2.0f));
		// public float chargingDuration = 3;
		__this->set_chargingDuration_15((3.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void BoarBehaviour::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoarBehaviour_OnEnable_m2CA01DDFA3E3264F9BD4E65315080D35ECB07187 (BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// agent = GetComponent<NavMeshAgent>();
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_0;
		L_0 = Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F(__this, /*hidden argument*/Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var);
		__this->set_agent_12(L_0);
		// timer = wanderTimer;
		float L_1 = __this->get_wanderTimer_6();
		__this->set_timer_13(L_1);
		// target = PlayerManager.instance.player.transform;
		PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * L_2 = ((PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_StaticFields*)il2cpp_codegen_static_fields_for(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_2->get_player_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		__this->set_target_11(L_4);
		// speed = agent.speed;
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_5 = __this->get_agent_12();
		float L_6;
		L_6 = NavMeshAgent_get_speed_m5AA9A1B23412A8F5CE24A5312F6E6D4BA282B173(L_5, /*hidden argument*/NULL);
		__this->set_speed_8(L_6);
		// RegTurnSpeed = agent.angularSpeed;
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_7 = __this->get_agent_12();
		float L_8;
		L_8 = NavMeshAgent_get_angularSpeed_mD38E53E3ECA7E21749A8546C8DC91C56908066AA(L_7, /*hidden argument*/NULL);
		__this->set_RegTurnSpeed_14(L_8);
		// }
		return;
	}
}
// System.Void BoarBehaviour::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoarBehaviour_Start_mA672C662FF5228C0FA96AB23F1EC3EE57C424C30 (BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BoarBehaviour::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoarBehaviour_Update_mE5767CA1984FF6C1005E41D5925A06624AFDB484 (BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_tE0EF6010F74D25C6255DCC8E09FD66A76D493EF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEEBA7495CA0294DE03DF896E36AA819936CCBF4);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * L_0 = (U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass14_0__ctor_m7E89707D880A580AE76AC3D8DCD831E6D24D6AAC(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * L_1 = V_0;
		L_1->set_U3CU3E4__this_1(__this);
		// float distance = Vector3.Distance(target.position, transform.position); //distance from this object to target
		U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * L_2 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_target_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7;
		L_7 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_4, L_6, /*hidden argument*/NULL);
		L_2->set_distance_0(L_7);
		// if (distance <= visionRadius) //if player is within 'visionRadius'...
		U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * L_8 = V_0;
		float L_9 = L_8->get_distance_0();
		float L_10 = __this->get_visionRadius_10();
		if ((!(((float)L_9) <= ((float)L_10))))
		{
			goto IL_00a2;
		}
	}
	{
		// state = State.Follow;
		__this->set_state_4(1);
		// agent.stoppingDistance = windUpDistance; //Boar will stop within a certain distance, which leads to the next state (Charge)
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_11 = __this->get_agent_12();
		float L_12 = __this->get_windUpDistance_7();
		NavMeshAgent_set_stoppingDistance_m9D26543E5329CE08A147EA11AECF8BB3996121C8(L_11, L_12, /*hidden argument*/NULL);
		// agent.SetDestination(target.position);
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_13 = __this->get_agent_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = __this->get_target_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		bool L_16;
		L_16 = NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747(L_13, L_15, /*hidden argument*/NULL);
		// FaceTarget();
		BoarBehaviour_FaceTarget_m12A94DDB8B141D803881817390CA3B186B869D71(__this, /*hidden argument*/NULL);
		// if(distance <= agent.stoppingDistance)
		U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * L_17 = V_0;
		float L_18 = L_17->get_distance_0();
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_19 = __this->get_agent_12();
		float L_20;
		L_20 = NavMeshAgent_get_stoppingDistance_mE2F58A8DB9C8402F0373576AB91690E8B34C1EA6(L_19, /*hidden argument*/NULL);
		if ((!(((float)L_18) <= ((float)L_20))))
		{
			goto IL_00a2;
		}
	}
	{
		// Debug.Log("Charging up at player");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralAEEBA7495CA0294DE03DF896E36AA819936CCBF4, /*hidden argument*/NULL);
		// state = State.Charge;
		__this->set_state_4(2);
		// StartCoroutine(Bulldozing());
		U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * L_21 = V_0;
		RuntimeObject* L_22;
		L_22 = U3CU3Ec__DisplayClass14_0_U3CUpdateU3Eg__BulldozingU7C0_m4A111276F34826C8A49980B959D5EB507B3C4652(L_21, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_23;
		L_23 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_22, /*hidden argument*/NULL);
	}

IL_00a2:
	{
		// if(state == State.FreeRoam)
		int32_t L_24 = __this->get_state_4();
		if (L_24)
		{
			goto IL_010a;
		}
	}
	{
		// timer += Time.deltaTime;
		float L_25 = __this->get_timer_13();
		float L_26;
		L_26 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_13(((float)il2cpp_codegen_add((float)L_25, (float)L_26)));
		// if (timer >= wanderTimer)
		float L_27 = __this->get_timer_13();
		float L_28 = __this->get_wanderTimer_6();
		if ((!(((float)L_27) >= ((float)L_28))))
		{
			goto IL_010a;
		}
	}
	{
		// Debug.Log(state);
		int32_t L_29 = __this->get_state_4();
		int32_t L_30 = L_29;
		RuntimeObject * L_31 = Box(State_tE0EF6010F74D25C6255DCC8E09FD66A76D493EF6_il2cpp_TypeInfo_var, &L_30);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_31, /*hidden argument*/NULL);
		// Vector3 newPos = RandomNavSphere(transform.position, wanderRadius, -1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
		float L_34 = __this->get_wanderRadius_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = BoarBehaviour_RandomNavSphere_m30A8B607C53D54406EBE650E7767F048A051DC00(L_33, L_34, (-1), /*hidden argument*/NULL);
		V_1 = L_35;
		// agent.SetDestination(newPos);
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_36 = __this->get_agent_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = V_1;
		bool L_38;
		L_38 = NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747(L_36, L_37, /*hidden argument*/NULL);
		// timer = 0;
		__this->set_timer_13((0.0f));
	}

IL_010a:
	{
		// }
		return;
	}
}
// System.Void BoarBehaviour::FaceTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoarBehaviour_FaceTarget_m12A94DDB8B141D803881817390CA3B186B869D71 (BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector3 direction = (target.position - transform.position).normalized;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_target_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_1, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		V_0 = L_5;
		// Quaternion lookRotation = Quaternion.LookRotation(new Vector3(direction.x, 0, direction.z));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		float L_7 = L_6.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), L_7, (0.0f), L_9, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * 5f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_13, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15 = V_1;
		float L_16;
		L_16 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17;
		L_17 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_14, L_15, ((float)il2cpp_codegen_multiply((float)L_16, (float)(5.0f))), /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_12, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 BoarBehaviour::RandomNavSphere(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BoarBehaviour_RandomNavSphere_m30A8B607C53D54406EBE650E7767F048A051DC00 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, float ___distance1, int32_t ___layerMask2, const RuntimeMethod* method)
{
	NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 randDirection = Random.insideUnitSphere * distance;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90(/*hidden argument*/NULL);
		float L_1 = ___distance1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_0, L_1, /*hidden argument*/NULL);
		// randDirection += origin;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___origin0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_3, /*hidden argument*/NULL);
		// NavMesh.SamplePosition(randDirection, out navHit, distance, layerMask);
		float L_5 = ___distance1;
		int32_t L_6 = ___layerMask2;
		bool L_7;
		L_7 = NavMesh_SamplePosition_m9675E148D95E1D92ED75DC608CAA33E75ABCA05E(L_4, (NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D *)(&V_0), L_5, L_6, /*hidden argument*/NULL);
		// return navHit.position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = NavMeshHit_get_position_m66845935ED76B2480F72EE6628EFD9D6BF35B39A((NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D *)(&V_0), /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void BoarBehaviour::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoarBehaviour_OnDrawGizmos_m3465622F209E4156DDC72839132A60B9E873A320 (BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC * __this, const RuntimeMethod* method)
{
	{
		// Gizmos.color = Color.red;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_0, /*hidden argument*/NULL);
		// Gizmos.DrawWireSphere(transform.position, visionRadius);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_visionRadius_10();
		Gizmos_DrawWireSphere_m96C425145BBD85CF0192F9DDB3D1A8C69429B78B(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BoarBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoarBehaviour__ctor_mAB98E2E6A8020781C163336D80619C952B3855C6 (BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC * __this, const RuntimeMethod* method)
{
	{
		// public float windUpDistance = 3f;
		__this->set_windUpDistance_7((3.0f));
		// public float turnSpeed = 80f;
		__this->set_turnSpeed_9((80.0f));
		// public float visionRadius = 10f;
		__this->set_visionRadius_10((10.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void BoatTimer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoatTimer_Update_m307EDB2BC40A95C5AFA624D9E4F77DC970005E29 (BoatTimer_tCA778F4123D8111C121A88F0695D0D4A3FF98920 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF068AF54BD730F64BB51B79385DC48A78E0D04F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (timer <= (timeTillEngineStops + 1))
		float L_0 = __this->get_timer_4();
		int32_t L_1 = __this->get_timeTillEngineStops_5();
		if ((!(((float)L_0) <= ((float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1))))))))
		{
			goto IL_0023;
		}
	}
	{
		// timer += Time.deltaTime;
		float L_2 = __this->get_timer_4();
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_4(((float)il2cpp_codegen_add((float)L_2, (float)L_3)));
	}

IL_0023:
	{
		// if (timer >= timeTillEngineStops && timer <=(timeTillEngineStops + 1))
		float L_4 = __this->get_timer_4();
		int32_t L_5 = __this->get_timeTillEngineStops_5();
		if ((!(((float)L_4) >= ((float)((float)((float)L_5))))))
		{
			goto IL_007d;
		}
	}
	{
		float L_6 = __this->get_timer_4();
		int32_t L_7 = __this->get_timeTillEngineStops_5();
		if ((!(((float)L_6) <= ((float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1))))))))
		{
			goto IL_007d;
		}
	}
	{
		// Debug.Log("timer");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralDF068AF54BD730F64BB51B79385DC48A78E0D04F, /*hidden argument*/NULL);
		// greenLight.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_greenLight_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// redLight.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_redLight_7();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
		// realButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_realButton_8();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// fakeButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_fakeButton_9();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)0, /*hidden argument*/NULL);
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void BoatTimer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoatTimer__ctor_mC8AB7CFD4E9C8664689067D1FC7EC0F7FA4CDB3B (BoatTimer_tCA778F4123D8111C121A88F0695D0D4A3FF98920 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Counter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Counter_Start_m77A2B23760AA7DA12C9BBEE742221AC01B67AFB3 (Counter_t6A281326FFA8D37BB4BCEBAD26FC34A124B9A24D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Counter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Counter_Update_m750B99E43903C32501752EDB091B76D4D8591063 (Counter_t6A281326FFA8D37BB4BCEBAD26FC34A124B9A24D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(GameVariables.currentSpawnPoint);
		int32_t L_0 = ((GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_StaticFields*)il2cpp_codegen_static_fields_for(GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_il2cpp_TypeInfo_var))->get_currentSpawnPoint_1();
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Counter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Counter__ctor_m12F27AA8C9EDE176E9543076DB214639246AAC73 (Counter_t6A281326FFA8D37BB4BCEBAD26FC34A124B9A24D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DisableInteractable::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableInteractable_Start_mF69FCFD82350CBE9A67F27D8EE5313E42DB9ED83 (DisableInteractable_t5EE6E5532A0AFB30BD54E817519C4B929BFFDDC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFED43703CA4391B71599484589EC0178515FA663);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("turnOnInteractability", timer);
		float L_0 = __this->get_timer_4();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralFED43703CA4391B71599484589EC0178515FA663, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DisableInteractable::turnOnInteractability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableInteractable_turnOnInteractability_mD102A3AA11DB57BE3D18FE3BFAD698883EF559BE (DisableInteractable_t5EE6E5532A0AFB30BD54E817519C4B929BFFDDC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisInteractable_tEEFC60C29F907276ABC0BDA6621F8089144774E7_mA9D91B6B22CFF4699E2D47FC3CF49F863AC61657_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30107E6D371F2F2CBDCACDE503F611D1B0EEB811);
		s_Il2CppMethodInitialized = true;
	}
	Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * G_B2_0 = NULL;
	Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// this.GetComponent<Interactable>().enabled = false;
		Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * L_0;
		L_0 = Component_GetComponent_TisInteractable_tEEFC60C29F907276ABC0BDA6621F8089144774E7_mA9D91B6B22CFF4699E2D47FC3CF49F863AC61657(__this, /*hidden argument*/Component_GetComponent_TisInteractable_tEEFC60C29F907276ABC0BDA6621F8089144774E7_mA9D91B6B22CFF4699E2D47FC3CF49F863AC61657_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)0, /*hidden argument*/NULL);
		// Debug.Log(this.GetComponent<Interactable>() + ": Turning off the interactability script.");
		Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * L_1;
		L_1 = Component_GetComponent_TisInteractable_tEEFC60C29F907276ABC0BDA6621F8089144774E7_mA9D91B6B22CFF4699E2D47FC3CF49F863AC61657(__this, /*hidden argument*/Component_GetComponent_TisInteractable_tEEFC60C29F907276ABC0BDA6621F8089144774E7_mA9D91B6B22CFF4699E2D47FC3CF49F863AC61657_RuntimeMethod_var);
		Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0019;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_001e;
	}

IL_0019:
	{
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_3;
	}

IL_001e:
	{
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B3_0, _stringLiteral30107E6D371F2F2CBDCACDE503F611D1B0EEB811, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DisableInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableInteractable__ctor_m483E5FDC99121012CA61188D9879CE727BA53096 (DisableInteractable_t5EE6E5532A0AFB30BD54E817519C4B929BFFDDC2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void FallingPlatform::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallingPlatform_Start_mFAF0B9E189E3754460000D1BB910CFE9603B2281 (FallingPlatform_t20EB211BBB886A69DE45F91B5599AB5D9B219F75 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0;
		L_0 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set_rb_4(L_0);
		// }
		return;
	}
}
// System.Void FallingPlatform::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallingPlatform_Update_mDFA743317F31CDE96445DFC52725D58B8E2925D1 (FallingPlatform_t20EB211BBB886A69DE45F91B5599AB5D9B219F75 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void FallingPlatform::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallingPlatform_OnTriggerEnter_m95D876EFF9F13318B82C1D5E0FF779A172D0444D (FallingPlatform_t20EB211BBB886A69DE45F91B5599AB5D9B219F75 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFB47CC81B59CF4F9EA9E69DED4118CCFBD5163C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Equals("Player"))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		// Debug.Log("Hello World");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralCFB47CC81B59CF4F9EA9E69DED4118CCFBD5163C, /*hidden argument*/NULL);
		// this.gameObject.GetComponent<Rigidbody>().isKinematic = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_5;
		L_5 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_4, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311(L_5, (bool)0, /*hidden argument*/NULL);
		// Destroy(gameObject, 3.0f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_6, (3.0f), /*hidden argument*/NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void FallingPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallingPlatform__ctor_mDB81FE970CEFD3554EE74B628C31BB9B28F4FED6 (FallingPlatform_t20EB211BBB886A69DE45F91B5599AB5D9B219F75 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GetKeyFromChest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetKeyFromChest_Start_m78D368BE54C220F299EC99C12F0D7D209319DA75 (GetKeyFromChest_t85839C120AAD3BF6DD2B6663B22721EC13D5F091 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GetKeyFromChest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetKeyFromChest_Update_mC345B4B1432852EFBEE99DB74689F1E1CDDE5BC4 (GetKeyFromChest_t85839C120AAD3BF6DD2B6663B22721EC13D5F091 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GetKeyFromChest::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetKeyFromChest_OnTriggerEnter_mE8111A041980B52DEB39D62E1FA1184DC9111020 (GetKeyFromChest_t85839C120AAD3BF6DD2B6663B22721EC13D5F091 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GetKeyFromChest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetKeyFromChest__ctor_mC83A472413174516EAC5264551AB48CA926E7C03 (GetKeyFromChest_t85839C120AAD3BF6DD2B6663B22721EC13D5F091 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void HideUIElement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideUIElement_Update_m54E9761EC138F7EE4923DA89F525671F0642FF59 (HideUIElement_tCA67B50019E091EA5E882A6D0D036E342402805C * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)27), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// manualUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_manualUI_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void HideUIElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideUIElement__ctor_mC6970C67D80108D461DB67DF275C4DA63C12C901 (HideUIElement_tCA67B50019E091EA5E882A6D0D036E342402805C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Interactable::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interactable_Start_mCD3DB76ECF5B01A9E9AE400DFC3CA7ED95B89844 (Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Interactable::Interact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interactable_Interact_m3F5E63F6B8A0875E44D9714F17C06BD2FC2962EA (Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA0D32FABCEE121EF637D4EAE27256409720AC76);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Interacting with " + transform.name);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralBA0D32FABCEE121EF637D4EAE27256409720AC76, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Interactable::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interactable_Update_m17566E103461BED9EAC7E69D2B6BF5396FCD392A (Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * __this, const RuntimeMethod* method)
{
	{
		// if (pickUpAllowed && Input.GetKeyDown(KeyCode.E))
		bool L_0 = __this->get_pickUpAllowed_5();
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)101), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// pickUpText.gameObject.SetActive(false);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_pickUpText_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// Interact();
		VirtActionInvoker0::Invoke(4 /* System.Void Interactable::Interact() */, __this);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void Interactable::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interactable_OnTriggerEnter_m8E92451112F42A77C91AB839422CA59D0FC012F9 (Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name.Equals("Player"))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// pickUpText.gameObject.SetActive(true);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_pickUpText_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// pickUpAllowed = true;
		__this->set_pickUpAllowed_5((bool)1);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Interactable::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interactable_OnTriggerExit_m35500A891694EDF6516A997208F5A02949D58C21 (Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name.Equals("Player"))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// pickUpText.gameObject.SetActive(false);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_pickUpText_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// pickUpAllowed = false;
		__this->set_pickUpAllowed_5((bool)0);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Interactable::LookingAtInteractable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interactable_LookingAtInteractable_mD0A3EDDDC16A0C0ECDE09751211D8AD9D738BD27 (Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * __this, const RuntimeMethod* method)
{
	{
		// pickUpText.gameObject.SetActive(hitByRayCast);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_pickUpText_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		bool L_2 = __this->get_hitByRayCast_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, L_2, /*hidden argument*/NULL);
		// pickUpAllowed = hitByRayCast;
		bool L_3 = __this->get_hitByRayCast_6();
		__this->set_pickUpAllowed_5(L_3);
		// }
		return;
	}
}
// System.Void Interactable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interactable__ctor_m14A127716816AD709C7F0004EEC27A89E8EAE8D3 (Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Inventory::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_Awake_m2040A4C75E81B9580543F04EFA2364F3F1B9EEE0 (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86FDB40EE370227DD86C7E8214B2D9CD5C115C58);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_0 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Debug.LogWarning("More than one instance of Inventory found!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral86FDB40EE370227DD86C7E8214B2D9CD5C115C58, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// instance = this;
		((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// }
		return;
	}
}
// System.Boolean Inventory::Add(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inventory_Add_m6065EB5DC8F28902E44A528BF67A42A3240B06F0 (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m17382E73E27D945DEC6B9BD38A447B638D0D7C0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C491F7C16C238075D5799EFAF4FE60AF08400F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!item.isDefaultItem)
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_0 = ___item0;
		bool L_1 = L_0->get_isDefaultItem_9();
		if (L_1)
		{
			goto IL_0046;
		}
	}
	{
		// if (items.Count >= space)
		List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * L_2 = __this->get_items_7();
		int32_t L_3;
		L_3 = List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_inline(L_2, /*hidden argument*/List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_RuntimeMethod_var);
		int32_t L_4 = __this->get_space_6();
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		// Debug.Log("Not enough room.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral47C491F7C16C238075D5799EFAF4FE60AF08400F, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0027:
	{
		// items.Add(item);
		List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * L_5 = __this->get_items_7();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_6 = ___item0;
		List_1_Add_m17382E73E27D945DEC6B9BD38A447B638D0D7C0D(L_5, L_6, /*hidden argument*/List_1_Add_m17382E73E27D945DEC6B9BD38A447B638D0D7C0D_RuntimeMethod_var);
		// if (onItemChangedCallBack != null)
		OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3 * L_7 = __this->get_onItemChangedCallBack_5();
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		// onItemChangedCallBack.Invoke();
		OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3 * L_8 = __this->get_onItemChangedCallBack_5();
		OnItemChanged_Invoke_m0930392CB320C062C256845E08A48954607A13E0(L_8, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Inventory::Remove(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_Remove_m4293C0BA4C52C082DB2045B0F528219B576BCDD0 (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m822464A408DB63746E72190B3527E4283A6B3E11_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// items.Remove(item);
		List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * L_0 = __this->get_items_7();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_1 = ___item0;
		bool L_2;
		L_2 = List_1_Remove_m822464A408DB63746E72190B3527E4283A6B3E11(L_0, L_1, /*hidden argument*/List_1_Remove_m822464A408DB63746E72190B3527E4283A6B3E11_RuntimeMethod_var);
		// if (onItemChangedCallBack != null)
		OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3 * L_3 = __this->get_onItemChangedCallBack_5();
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// onItemChangedCallBack.Invoke();
		OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3 * L_4 = __this->get_onItemChangedCallBack_5();
		OnItemChanged_Invoke_m0930392CB320C062C256845E08A48954607A13E0(L_4, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Inventory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory__ctor_mF2ACBF005FF40F23F68AE8E9E416A4870EC4B27C (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6D4334AF3C7C3FD8F6D2CAA35357F341CC13EAA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int space = 20;
		__this->set_space_6(((int32_t)20));
		// public List<Item> items = new List<Item>();
		List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * L_0 = (List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 *)il2cpp_codegen_object_new(List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657_il2cpp_TypeInfo_var);
		List_1__ctor_m6D4334AF3C7C3FD8F6D2CAA35357F341CC13EAA4(L_0, /*hidden argument*/List_1__ctor_m6D4334AF3C7C3FD8F6D2CAA35357F341CC13EAA4_RuntimeMethod_var);
		__this->set_items_7(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void InventorySlot::AddItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySlot_AddItem_m91A6A876842281A0D5E70BE28461563BCE22A09B (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___newItem0, const RuntimeMethod* method)
{
	{
		// item = newItem;
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_0 = ___newItem0;
		__this->set_item_10(L_0);
		// icon.sprite = item.icon;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_icon_4();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_2 = __this->get_item_10();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3 = L_2->get_icon_6();
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_1, L_3, /*hidden argument*/NULL);
		// icon.enabled = true;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_icon_4();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_4, (bool)1, /*hidden argument*/NULL);
		// removeButton.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_5 = __this->get_removeButton_5();
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_5, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InventorySlot::ClearSlot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySlot_ClearSlot_mF66AACCE4767645187E765BC79A946ED97372681 (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, const RuntimeMethod* method)
{
	{
		// item = null;
		__this->set_item_10((Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C *)NULL);
		// icon.sprite = null;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_icon_4();
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_0, (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *)NULL, /*hidden argument*/NULL);
		// icon.enabled = false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_icon_4();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)0, /*hidden argument*/NULL);
		// removeButton.interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2 = __this->get_removeButton_5();
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InventorySlot::OnRemoveButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySlot_OnRemoveButton_m53E290D92417C8EA61BC9611DDC7290212255BF2 (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Inventory.instance.Remove(item);
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_0 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_4();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_1 = __this->get_item_10();
		Inventory_Remove_m4293C0BA4C52C082DB2045B0F528219B576BCDD0(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InventorySlot::UseItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySlot_UseItem_m3F970D5B3712C2AEDFDEED4080D8D9D7CF8593D1 (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(item != null)
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_0 = __this->get_item_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// item.Use();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_2 = __this->get_item_10();
		VirtActionInvoker0::Invoke(4 /* System.Void Item::Use() */, L_2);
	}

IL_0019:
	{
		// frontImageGUI.sprite = item.FrontImage;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = __this->get_frontImageGUI_8();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_4 = __this->get_item_10();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_5 = L_4->get_FrontImage_7();
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_3, L_5, /*hidden argument*/NULL);
		// backImageGUI.sprite = item.BackImage;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6 = __this->get_backImageGUI_9();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_7 = __this->get_item_10();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_8 = L_7->get_BackImage_8();
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_6, L_8, /*hidden argument*/NULL);
		// if(item.FrontImage != null)
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_9 = __this->get_item_10();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_10 = L_9->get_FrontImage_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		// imageGUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_imageGUI_7();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0065:
	{
		// else if(item.BackImage != null)
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_13 = __this->get_item_10();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_14 = L_13->get_BackImage_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0084;
		}
	}
	{
		// imageGUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_imageGUI_7();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)1, /*hidden argument*/NULL);
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void InventorySlot::DisplayDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySlot_DisplayDescription_m52E57528F6BAD385677C43DFF6BCE1DC6F4A2C12 (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(item != null)
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_0 = __this->get_item_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// text.text = item.description;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_text_6();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_3 = __this->get_item_10();
		String_t* L_4 = L_3->get_description_5();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void InventorySlot::RemoveDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySlot_RemoveDescription_m037A1B307718E6D1500E41B8ECE34A287ABE06B7 (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, const RuntimeMethod* method)
{
	{
		// text.text = null;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_text_6();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, (String_t*)NULL);
		// }
		return;
	}
}
// System.Void InventorySlot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySlot__ctor_m62F1FA815F99E2E9F5586382BCCAED76385C4C92 (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void InventoryUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryUI_Start_mBA9265B722C514BB1A663CF5D0726FC41388C979 (InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisInventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB_m40A768682731E05905E4B78D9E461952D679C673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA_m47214CA52006E08D48EB50CF1F5FA6B7D805D78D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InventoryUI_UpdateUI_m13EFCE80FB111CA41FF0224B7F9E1ECFE9C3D513_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(inventoryControl == null)
		InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723 * L_0 = ((InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_StaticFields*)il2cpp_codegen_static_fields_for(InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_il2cpp_TypeInfo_var))->get_inventoryControl_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_2, /*hidden argument*/NULL);
		// inventoryControl = this;
		((InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_StaticFields*)il2cpp_codegen_static_fields_for(InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_il2cpp_TypeInfo_var))->set_inventoryControl_4(__this);
		// }
		goto IL_0038;
	}

IL_0020:
	{
		// else if(inventoryControl != this){
		InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723 * L_3 = ((InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_StaticFields*)il2cpp_codegen_static_fields_for(InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_il2cpp_TypeInfo_var))->get_inventoryControl_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, __this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// inventory = Inventory.instance;
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_6 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_4();
		__this->set_inventory_8(L_6);
		// inventory.onItemChangedCallBack += UpdateUI;
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_7 = __this->get_inventory_8();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_8 = L_7;
		OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3 * L_9 = L_8->get_onItemChangedCallBack_5();
		OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3 * L_10 = (OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3 *)il2cpp_codegen_object_new(OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3_il2cpp_TypeInfo_var);
		OnItemChanged__ctor_m1D1B000321D4BBC44BDE3AD3631B1F79F3AC65C1(L_10, __this, (intptr_t)((intptr_t)InventoryUI_UpdateUI_m13EFCE80FB111CA41FF0224B7F9E1ECFE9C3D513_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_11;
		L_11 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_9, L_10, /*hidden argument*/NULL);
		L_8->set_onItemChangedCallBack_5(((OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3 *)CastclassSealed((RuntimeObject*)L_11, OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3_il2cpp_TypeInfo_var)));
		// slots = itemsParent.GetComponentsInChildren<InventorySlot>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = __this->get_itemsParent_5();
		InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C* L_13;
		L_13 = Component_GetComponentsInChildren_TisInventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB_m40A768682731E05905E4B78D9E461952D679C673(L_12, /*hidden argument*/Component_GetComponentsInChildren_TisInventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB_m40A768682731E05905E4B78D9E461952D679C673_RuntimeMethod_var);
		__this->set_slots_9(L_13);
		// mouseLook = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<MouseLook>(); //The main camera's Mouselook will be assigned to this.
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, /*hidden argument*/NULL);
		MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA * L_15;
		L_15 = GameObject_GetComponent_TisMouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA_m47214CA52006E08D48EB50CF1F5FA6B7D805D78D(L_14, /*hidden argument*/GameObject_GetComponent_TisMouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA_m47214CA52006E08D48EB50CF1F5FA6B7D805D78D_RuntimeMethod_var);
		((InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_StaticFields*)il2cpp_codegen_static_fields_for(InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_il2cpp_TypeInfo_var))->set_mouseLook_10(L_15);
		// }
		return;
	}
}
// System.Void InventoryUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryUI_Update_m33C2131F4756C1EA0AEE90294EF276D0A657F519 (InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68B8DEBED212A277911E2A4827C5A0E30BF70D94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6D795FBD58CC7592D955A219374339A323801A9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetButtonDown("Inventory") && !ImageGUI.activeSelf) //you can only turn on/off the inventory when the image GUI is not present
		bool L_0;
		L_0 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(_stringLiteral68B8DEBED212A277911E2A4827C5A0E30BF70D94, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0059;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_ImageGUI_7();
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0059;
		}
	}
	{
		// inventoryUI.SetActive(!inventoryUI.activeSelf);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_inventoryUI_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_inventoryUI_6();
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_4, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// mouseLook.enabled = !mouseLook.isActiveAndEnabled;
		MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA * L_6 = ((InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_StaticFields*)il2cpp_codegen_static_fields_for(InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_il2cpp_TypeInfo_var))->get_mouseLook_10();
		MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA * L_7 = ((InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_StaticFields*)il2cpp_codegen_static_fields_for(InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_il2cpp_TypeInfo_var))->get_mouseLook_10();
		bool L_8;
		L_8 = Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA(L_7, /*hidden argument*/NULL);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_6, (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// SetCursorLock(mouseLook.enabled);
		MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA * L_9 = ((InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_StaticFields*)il2cpp_codegen_static_fields_for(InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_il2cpp_TypeInfo_var))->get_mouseLook_10();
		bool L_10;
		L_10 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_9, /*hidden argument*/NULL);
		InventoryUI_SetCursorLock_mF50AA129590BD290CB0C0008D21B4481ED7B7C44(__this, L_10, /*hidden argument*/NULL);
	}

IL_0059:
	{
		// if (!ImageGUI.activeSelf && inventoryUI.activeSelf && Input.GetKeyDown(KeyCode.Escape)) //if the ImageGUI is off and you inventory is on, when you press escape it turns off inventory
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_ImageGUI_7();
		bool L_12;
		L_12 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_00c6;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_inventoryUI_6();
		bool L_14;
		L_14 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00c6;
		}
	}
	{
		bool L_15;
		L_15 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)27), /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00c6;
		}
	}
	{
		// Debug.Log("hello");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB6D795FBD58CC7592D955A219374339A323801A9, /*hidden argument*/NULL);
		// inventoryUI.SetActive(!inventoryUI.activeSelf);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_inventoryUI_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_inventoryUI_6();
		bool L_18;
		L_18 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_17, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// mouseLook.enabled = !mouseLook.isActiveAndEnabled;
		MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA * L_19 = ((InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_StaticFields*)il2cpp_codegen_static_fields_for(InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_il2cpp_TypeInfo_var))->get_mouseLook_10();
		MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA * L_20 = ((InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_StaticFields*)il2cpp_codegen_static_fields_for(InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_il2cpp_TypeInfo_var))->get_mouseLook_10();
		bool L_21;
		L_21 = Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA(L_20, /*hidden argument*/NULL);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_19, (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// SetCursorLock(mouseLook.enabled);
		MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA * L_22 = ((InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_StaticFields*)il2cpp_codegen_static_fields_for(InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723_il2cpp_TypeInfo_var))->get_mouseLook_10();
		bool L_23;
		L_23 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_22, /*hidden argument*/NULL);
		InventoryUI_SetCursorLock_mF50AA129590BD290CB0C0008D21B4481ED7B7C44(__this, L_23, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		// if (ImageGUI.activeSelf && Input.GetKeyDown(KeyCode.Escape)) //if ImageGUI is open...
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_ImageGUI_7();
		bool L_25;
		L_25 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00e8;
		}
	}
	{
		bool L_26;
		L_26 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)27), /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00e8;
		}
	}
	{
		// ImageGUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_ImageGUI_7();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_27, (bool)0, /*hidden argument*/NULL);
	}

IL_00e8:
	{
		// }
		return;
	}
}
// System.Void InventoryUI::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryUI_UpdateUI_m13EFCE80FB111CA41FF0224B7F9E1ECFE9C3D513 (InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF132E1A0C2CC6DD4CA89DBE3493C69CB4E94BCAD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for(int i = 0; i <slots.Length; i++)
		V_0 = 0;
		goto IL_0048;
	}

IL_0004:
	{
		// if(i < inventory.items.Count)
		int32_t L_0 = V_0;
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_1 = __this->get_inventory_8();
		List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * L_2 = L_1->get_items_7();
		int32_t L_3;
		L_3 = List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_inline(L_2, /*hidden argument*/List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)L_3)))
		{
			goto IL_0037;
		}
	}
	{
		// slots[i].AddItem(inventory.items[i]);
		InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C* L_4 = __this->get_slots_9();
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_8 = __this->get_inventory_8();
		List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * L_9 = L_8->get_items_7();
		int32_t L_10 = V_0;
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_11;
		L_11 = List_1_get_Item_mF132E1A0C2CC6DD4CA89DBE3493C69CB4E94BCAD_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_mF132E1A0C2CC6DD4CA89DBE3493C69CB4E94BCAD_RuntimeMethod_var);
		InventorySlot_AddItem_m91A6A876842281A0D5E70BE28461563BCE22A09B(L_7, L_11, /*hidden argument*/NULL);
		// }
		goto IL_0044;
	}

IL_0037:
	{
		// slots[i].ClearSlot();
		InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C* L_12 = __this->get_slots_9();
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		InventorySlot_ClearSlot_mF66AACCE4767645187E765BC79A946ED97372681(L_15, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// for(int i = 0; i <slots.Length; i++)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0048:
	{
		// for(int i = 0; i <slots.Length; i++)
		int32_t L_17 = V_0;
		InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C* L_18 = __this->get_slots_9();
		if ((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void InventoryUI::SetCursorLock(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryUI_SetCursorLock_mF50AA129590BD290CB0C0008D21B4481ED7B7C44 (InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723 * __this, bool ___isLocked0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E338A945A7FDFC3F17A20234E3E5376827B4A4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB20CB7C836C9DE5EFB05530B07BE880F17773818);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Cursor.visible = !isLocked;
		bool L_0 = ___isLocked0;
		Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// if (!isLocked) //if mouseLook script is not active (false)
		bool L_1 = ___isLocked0;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		// Debug.Log("Cursos is free roam");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB20CB7C836C9DE5EFB05530B07BE880F17773818, /*hidden argument*/NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217(0, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// if (isLocked) //if mouseLook script is active (true)
		bool L_2 = ___isLocked0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// Debug.Log("Cursos is locked");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral1E338A945A7FDFC3F17A20234E3E5376827B4A4B, /*hidden argument*/NULL);
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217(1, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void InventoryUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryUI__ctor_m5C090BC9C2888F79ECDCDD9669D37282DBE18748 (InventoryUI_t1121BE95221D0548E0D777A07668DD9C39761723 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Item::Use()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_Use_m5997F50DDBA73069DDFC93B2AF076EAFC2A2C1C2 (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758395C01F148CA2101DD081F4B75BABD194CFA5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Using " + name);
		String_t* L_0 = __this->get_name_4();
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral758395C01F148CA2101DD081F4B75BABD194CFA5, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Item::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m51C5ECE57526347477E1E2A4CF519CF555BC8147 (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral201C3C2901BE6217B6F2F30CB7F26586D2D42FCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD293AF5C15D42F279F4B887FCDF23BBA1698F79);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new public string name = "New Item";
		__this->set_name_4(_stringLiteralAD293AF5C15D42F279F4B887FCDF23BBA1698F79);
		// public string description = "Description of the item's function";
		__this->set_description_5(_stringLiteral201C3C2901BE6217B6F2F30CB7F26586D2D42FCF);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void ItemPickup::Interact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemPickup_Interact_mF9D45A679F7AB78E4F1133B99AA706C63C9D7DDB (ItemPickup_tCF50D7D3F9C5087BA2DAD6A0050A371122BFC99D * __this, const RuntimeMethod* method)
{
	{
		// base.Interact(); //Uses the code within the Interact function
		Interactable_Interact_m3F5E63F6B8A0875E44D9714F17C06BD2FC2962EA(__this, /*hidden argument*/NULL);
		// PickUp();
		ItemPickup_PickUp_m83953FCD6CF48C90585D25EC26418978BAA5FECD(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ItemPickup::PickUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemPickup_PickUp_m83953FCD6CF48C90585D25EC26418978BAA5FECD (ItemPickup_tCF50D7D3F9C5087BA2DAD6A0050A371122BFC99D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C82E3F5A8FFA914E63E677300449A2713BC6EAC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Picking up "+ item.name);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_0 = __this->get_item_7();
		String_t* L_1 = L_0->get_name_4();
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5C82E3F5A8FFA914E63E677300449A2713BC6EAC, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// bool wasPickedUp = Inventory.instance.Add(item);
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_3 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_4();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_4 = __this->get_item_7();
		bool L_5;
		L_5 = Inventory_Add_m6065EB5DC8F28902E44A528BF67A42A3240B06F0(L_3, L_4, /*hidden argument*/NULL);
		// if (wasPickedUp == true)
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void ItemPickup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemPickup__ctor_mC08160D27810202259A9C0B5A0C33BFAD96DD6BD (ItemPickup_tCF50D7D3F9C5087BA2DAD6A0050A371122BFC99D * __this, const RuntimeMethod* method)
{
	{
		Interactable__ctor_m14A127716816AD709C7F0004EEC27A89E8EAE8D3(__this, /*hidden argument*/NULL);
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
// System.Void KeyGate::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyGate_OnTriggerEnter_m0BD6CC6738E04C502A455E38EAC6EBD0CB6B49A9 (KeyGate_tC3213FC72E772EA5EB437202761263444A72813D * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F44A281D855777FFD8C8471BE5CD419DCE89E17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("player Entered");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9F44A281D855777FFD8C8471BE5CD419DCE89E17, /*hidden argument*/NULL);
		// Debug.Log(GameVariables.keyCount);
		int32_t L_0 = ((GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_StaticFields*)il2cpp_codegen_static_fields_for(GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_il2cpp_TypeInfo_var))->get_keyCount_0();
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_1);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// if (collider.gameObject.name == "Player" && GameVariables.keyCount>0)
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_3 = ___collider0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = ((GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_StaticFields*)il2cpp_codegen_static_fields_for(GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_il2cpp_TypeInfo_var))->get_keyCount_0();
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		// GameVariables.keyCount--;
		int32_t L_8 = ((GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_StaticFields*)il2cpp_codegen_static_fields_for(GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_il2cpp_TypeInfo_var))->get_keyCount_0();
		((GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_StaticFields*)il2cpp_codegen_static_fields_for(GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_il2cpp_TypeInfo_var))->set_keyCount_0(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)));
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_9, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void KeyGate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyGate__ctor_mE0C634E234BB12BD8E7170ADAA2445C6D28B503D (KeyGate_tC3213FC72E772EA5EB437202761263444A72813D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void KeyItem::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyItem_OnTriggerEnter_m67B97FCCC3CBB17FF01CAC6CCFE6E2ED3C097EA0 (KeyItem_t6695234C1CAC1337A19E0A7D387ED40BC972EFDA * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collider .gameObject.name == "Player")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___collider0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// GameVariables.keyCount += 1;
		int32_t L_4 = ((GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_StaticFields*)il2cpp_codegen_static_fields_for(GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_il2cpp_TypeInfo_var))->get_keyCount_0();
		((GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_StaticFields*)il2cpp_codegen_static_fields_for(GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_il2cpp_TypeInfo_var))->set_keyCount_0(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void KeyItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyItem__ctor_m906C1D6D0F264F9BDDBE23782440F6B1A33FF847 (KeyItem_t6695234C1CAC1337A19E0A7D387ED40BC972EFDA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void KeyScriptObj::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyScriptObj__ctor_m4597BBFAE5320B17CA56184472FBE9CEAA8F92D1 (KeyScriptObj_t1FB4BDB12CBEB2A49C817CFE6EAD9BDBD4D9DF17 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void KillPlayer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KillPlayer_Start_m43EAB778CEE3388BE5A2DA2F8CBC07E6A9AABA83 (KillPlayer_t782E9864FD2A7ECB006230962195BDFD5AAC2828 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void KillPlayer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KillPlayer_Update_m2257D9C0ABD791CBE24623DB7EE1312824F60DD8 (KillPlayer_t782E9864FD2A7ECB006230962195BDFD5AAC2828 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void KillPlayer::OnTriggerEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KillPlayer_OnTriggerEnter_mDB1B701A3C931FF4D32BF93788A88B394C4B10DC (KillPlayer_t782E9864FD2A7ECB006230962195BDFD5AAC2828 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA787B2F90B6DB394AA87BD57BB47C7D0F302E573);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("is dead");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA787B2F90B6DB394AA87BD57BB47C7D0F302E573, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void KillPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KillPlayer__ctor_m1DD64A730B4FEA51EC1352D3B84B388505860844 (KillPlayer_t782E9864FD2A7ECB006230962195BDFD5AAC2828 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Lever::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lever__ctor_m31B1F57756D8B76160FD66D81C2F020DF150DA4B (Lever_t559FF56549B63EABA962E89FF3171BB19837BB20 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC22B5CCFAFE0FB00D59600C7AB6785D1FF3855AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new public string name = "Lever";
		__this->set_name_4(_stringLiteralC22B5CCFAFE0FB00D59600C7AB6785D1FF3855AA);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void LeverManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeverManager_Awake_m6E3A987FBAF4051D423CB715FA53C66D7C300766 (LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral196509ADC515B14CBC44B0F51355C98E76304A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5 * L_0 = ((LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5_StaticFields*)il2cpp_codegen_static_fields_for(LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5_il2cpp_TypeInfo_var))->get_instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Debug.LogWarning("More than one instance of LeverManager found!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral196509ADC515B14CBC44B0F51355C98E76304A70, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// instance = this;
		((LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5_StaticFields*)il2cpp_codegen_static_fields_for(LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5_il2cpp_TypeInfo_var))->set_instance_7(__this);
		// }
		return;
	}
}
// System.Void LeverManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeverManager_Start_m8EFAC7C9096D8D3204BF651D4DA1434C0CC04B74 (LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mBEF921B3D7B132210E365BD5746CC06415D63FEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m7B392C9EB4F3B2B75D972095BD5F04FD238EDED1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m1B3BB556C077708C2DDE87E8CAF6B6A35AA04162_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tFA3D86D150CCC78E800EC5AC7D7E87E0E601B2AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__12_0_mDA5AB7505C0BCE988AC14138FF7D14057680C319_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tFA3D86D150CCC78E800EC5AC7D7E87E0E601B2AA * G_B2_0 = NULL;
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * G_B2_1 = NULL;
	LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5 * G_B2_2 = NULL;
	Func_2_tFA3D86D150CCC78E800EC5AC7D7E87E0E601B2AA * G_B1_0 = NULL;
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * G_B1_1 = NULL;
	LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5 * G_B1_2 = NULL;
	{
		// switches = switches.OrderBy(x=>x.GetComponent<LeverSystem>().OrderOfSwitch).ToList();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_switches_8();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034_il2cpp_TypeInfo_var);
		Func_2_tFA3D86D150CCC78E800EC5AC7D7E87E0E601B2AA * L_1 = ((U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034_il2cpp_TypeInfo_var))->get_U3CU3E9__12_0_1();
		Func_2_tFA3D86D150CCC78E800EC5AC7D7E87E0E601B2AA * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034_il2cpp_TypeInfo_var);
		U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034 * L_3 = ((U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tFA3D86D150CCC78E800EC5AC7D7E87E0E601B2AA * L_4 = (Func_2_tFA3D86D150CCC78E800EC5AC7D7E87E0E601B2AA *)il2cpp_codegen_object_new(Func_2_tFA3D86D150CCC78E800EC5AC7D7E87E0E601B2AA_il2cpp_TypeInfo_var);
		Func_2__ctor_m1B3BB556C077708C2DDE87E8CAF6B6A35AA04162(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CStartU3Eb__12_0_mDA5AB7505C0BCE988AC14138FF7D14057680C319_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m1B3BB556C077708C2DDE87E8CAF6B6A35AA04162_RuntimeMethod_var);
		Func_2_tFA3D86D150CCC78E800EC5AC7D7E87E0E601B2AA * L_5 = L_4;
		((U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034_il2cpp_TypeInfo_var))->set_U3CU3E9__12_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0026:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_OrderBy_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mBEF921B3D7B132210E365BD5746CC06415D63FEF(G_B2_1, G_B2_0, /*hidden argument*/Enumerable_OrderBy_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mBEF921B3D7B132210E365BD5746CC06415D63FEF_RuntimeMethod_var);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_7;
		L_7 = Enumerable_ToList_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m7B392C9EB4F3B2B75D972095BD5F04FD238EDED1(L_6, /*hidden argument*/Enumerable_ToList_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m7B392C9EB4F3B2B75D972095BD5F04FD238EDED1_RuntimeMethod_var);
		G_B2_2->set_switches_8(L_7);
		// }
		return;
	}
}
// System.Void LeverManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeverManager_Update_m21BED00E8ED68D3DBAE5A0F12184DC26988890F4 (LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Boolean LeverManager::ActivateSwitch(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LeverManager_ActivateSwitch_m3A38D0F673DEDC62BD099355ABF33DF99A0383A8 (LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5 * __this, bool ___lever0, int32_t ___orderOfLever1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLeverSystem_tB6C04315E26455D5B4206D71C5A0C2F1989D98B1_m8C79CA499EDB18F9D0DA4C4BE4946536357F57C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1932BF2D0333922961DFB5137987D61D515FC869);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DA4443C1AC292D3039602DB23352CA5C19771EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBDBC50D2936EB055C189294F87BC5382BA29F0C);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if(orderOfLever != currentSwitch) //if the lever you're referencing is not the one that the current switch is looking for... it will not turn on the lever
		int32_t L_0 = ___orderOfLever1;
		int32_t L_1 = __this->get_currentSwitch_14();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_007c;
		}
	}
	{
		// currentSwitch = 0; //resets the sequence you need to pull the switch
		__this->set_currentSwitch_14(0);
		// foreach (GameObject ActivatedSwitch in switches) //This loop will turn off ALL the levers.
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_2 = __this->get_switches_8();
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_3;
		L_3 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_2, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0057;
		}

IL_001e:
		{
			// foreach (GameObject ActivatedSwitch in switches) //This loop will turn off ALL the levers.
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
			L_4 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			V_1 = L_4;
			// ActivatedSwitch.GetComponent<LeverSystem>().switchActivated = false;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_1;
			LeverSystem_tB6C04315E26455D5B4206D71C5A0C2F1989D98B1 * L_6;
			L_6 = GameObject_GetComponent_TisLeverSystem_tB6C04315E26455D5B4206D71C5A0C2F1989D98B1_m8C79CA499EDB18F9D0DA4C4BE4946536357F57C1(L_5, /*hidden argument*/GameObject_GetComponent_TisLeverSystem_tB6C04315E26455D5B4206D71C5A0C2F1989D98B1_m8C79CA499EDB18F9D0DA4C4BE4946536357F57C1_RuntimeMethod_var);
			L_6->set_switchActivated_8((bool)0);
			// Debug.Log("The switch is " + ActivatedSwitch.name + ActivatedSwitch.GetComponent<LeverSystem>().switchActivated);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_1;
			String_t* L_8;
			L_8 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_7, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_1;
			LeverSystem_tB6C04315E26455D5B4206D71C5A0C2F1989D98B1 * L_10;
			L_10 = GameObject_GetComponent_TisLeverSystem_tB6C04315E26455D5B4206D71C5A0C2F1989D98B1_m8C79CA499EDB18F9D0DA4C4BE4946536357F57C1(L_9, /*hidden argument*/GameObject_GetComponent_TisLeverSystem_tB6C04315E26455D5B4206D71C5A0C2F1989D98B1_m8C79CA499EDB18F9D0DA4C4BE4946536357F57C1_RuntimeMethod_var);
			bool* L_11 = L_10->get_address_of_switchActivated_8();
			String_t* L_12;
			L_12 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)L_11, /*hidden argument*/NULL);
			String_t* L_13;
			L_13 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral1932BF2D0333922961DFB5137987D61D515FC869, L_8, L_12, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_13, /*hidden argument*/NULL);
		}

IL_0057:
		{
			// foreach (GameObject ActivatedSwitch in switches) //This loop will turn off ALL the levers.
			bool L_14;
			L_14 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_001e;
			}
		}

IL_0060:
		{
			IL2CPP_LEAVE(0x70, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(98)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x70, IL_0070)
	}

IL_0070:
	{
		// Debug.Log("The switch in which you have pulled in sequence is incorrect");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralEBDBC50D2936EB055C189294F87BC5382BA29F0C, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_007c:
	{
		// currentSwitch++; //increments current switch onto the next sequence within the list
		int32_t L_15 = __this->get_currentSwitch_14();
		__this->set_currentSwitch_14(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)));
		// lever = !lever; //activates switch
		bool L_16 = ___lever0;
		___lever0 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		// Debug.Log("Switching the lever to " + lever);
		String_t* L_17;
		L_17 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&___lever0), /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8DA4443C1AC292D3039602DB23352CA5C19771EF, L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_18, /*hidden argument*/NULL);
		// if(switches.Count <= currentSwitch)//When all switches are activated...
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_19 = __this->get_switches_8();
		int32_t L_20;
		L_20 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_19, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		int32_t L_21 = __this->get_currentSwitch_14();
		if ((((int32_t)L_20) > ((int32_t)L_21)))
		{
			goto IL_00bf;
		}
	}
	{
		// AllSwitchesActivated();
		LeverManager_AllSwitchesActivated_mE0C28E9F22F82D1A99A4866DD1F9917DA9AB0ADE(__this, /*hidden argument*/NULL);
	}

IL_00bf:
	{
		// return lever;
		bool L_22 = ___lever0;
		return L_22;
	}
}
// System.Void LeverManager::AllSwitchesActivated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeverManager_AllSwitchesActivated_mE0C28E9F22F82D1A99A4866DD1F9917DA9AB0ADE (LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35505F66F89B1647899A272C74E8F7D242E4433E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isDoor == true)
		bool L_0 = __this->get_isDoor_16();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// Debug.Log("All switches are activated");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral35505F66F89B1647899A272C74E8F7D242E4433E, /*hidden argument*/NULL);
		// Door.SetActive(false); //We can change replace this by having a script where the door is animated to open
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_Door_9();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// if (isLight == true)
		bool L_2 = __this->get_isLight_17();
		if (!L_2)
		{
			goto IL_0060;
		}
	}
	{
		// Debug.Log("All switches are activated");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral35505F66F89B1647899A272C74E8F7D242E4433E, /*hidden argument*/NULL);
		// Light1.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_Light1_10();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// Light2.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_Light2_11();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// fakeWheel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_fakeWheel_12();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// realWheel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_realWheel_13();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void LeverManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeverManager__ctor_m327AE6DECCD2F1EE95B422FC640CA922BA423A95 (LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5 * __this, const RuntimeMethod* method)
{
	{
		Interactable__ctor_m14A127716816AD709C7F0004EEC27A89E8EAE8D3(__this, /*hidden argument*/NULL);
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
// System.Void LeverSystem::Interact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeverSystem_Interact_mBE3C3648C46A36CA2EB0D71635230B4F28347B0D (LeverSystem_tB6C04315E26455D5B4206D71C5A0C2F1989D98B1 * __this, const RuntimeMethod* method)
{
	{
		// base.Interact(); //uses the code within the Interact function
		Interactable_Interact_m3F5E63F6B8A0875E44D9714F17C06BD2FC2962EA(__this, /*hidden argument*/NULL);
		// UseLever();
		LeverSystem_UseLever_m6A45B7EDC756E098331868511E8E44C5019B84DE(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LeverSystem::UseLever()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeverSystem_UseLever_m6A45B7EDC756E098331868511E8E44C5019B84DE (LeverSystem_tB6C04315E26455D5B4206D71C5A0C2F1989D98B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(switchActivated);
		bool L_0 = __this->get_switchActivated_8();
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// switchActivated = LeverManager.instance.ActivateSwitch(switchActivated, OrderOfSwitch);
		LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5 * L_3 = ((LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5_StaticFields*)il2cpp_codegen_static_fields_for(LeverManager_t579FCC5B0591885DA52B999DE9D78D20074238D5_il2cpp_TypeInfo_var))->get_instance_7();
		bool L_4 = __this->get_switchActivated_8();
		int32_t L_5 = __this->get_OrderOfSwitch_7();
		bool L_6;
		L_6 = LeverManager_ActivateSwitch_m3A38D0F673DEDC62BD099355ABF33DF99A0383A8(L_3, L_4, L_5, /*hidden argument*/NULL);
		__this->set_switchActivated_8(L_6);
		// }
		return;
	}
}
// System.Void LeverSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeverSystem__ctor_mFF200280D64835D34B3B2A03A41F4120FD81A59A (LeverSystem_tB6C04315E26455D5B4206D71C5A0C2F1989D98B1 * __this, const RuntimeMethod* method)
{
	{
		Interactable__ctor_m14A127716816AD709C7F0004EEC27A89E8EAE8D3(__this, /*hidden argument*/NULL);
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
// System.Void LightingManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightingManager_Update_mB6FB444D7F468FCB80A047795C7F7F9D7BD661DE (LightingManager_t27E73623988870F6B46F81B087B57195C324BF57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Preset == null)
		LightingPreset_t876E1A4F9CC2E1FDBD13A0E0832B4F5F1D464886 * L_0 = __this->get_Preset_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (Application.isPlaying)
		bool L_2;
		L_2 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		// TimeOfDay += (Time.deltaTime)/6;
		float L_3 = __this->get_TimeOfDay_6();
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_TimeOfDay_6(((float)il2cpp_codegen_add((float)L_3, (float)((float)((float)L_4/(float)(6.0f))))));
		// TimeOfDay %= 24; //Clamp between 0-24
		float L_5 = __this->get_TimeOfDay_6();
		__this->set_TimeOfDay_6((fmodf(L_5, (24.0f))));
		// UpdateLighting(TimeOfDay / 24f);
		float L_6 = __this->get_TimeOfDay_6();
		LightingManager_UpdateLighting_mBF87842990D9B32CD93F27029E71036B08A3E3AB(__this, ((float)((float)L_6/(float)(24.0f))), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0053:
	{
		// UpdateLighting(TimeOfDay / 24f);
		float L_7 = __this->get_TimeOfDay_6();
		LightingManager_UpdateLighting_mBF87842990D9B32CD93F27029E71036B08A3E3AB(__this, ((float)((float)L_7/(float)(24.0f))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LightingManager::UpdateLighting(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightingManager_UpdateLighting_mBF87842990D9B32CD93F27029E71036B08A3E3AB (LightingManager_t27E73623988870F6B46F81B087B57195C324BF57 * __this, float ___timePercent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RenderSettings.ambientLight = Preset.AmbientColor.Evaluate(timePercent);
		LightingPreset_t876E1A4F9CC2E1FDBD13A0E0832B4F5F1D464886 * L_0 = __this->get_Preset_5();
		Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * L_1 = L_0->get_AmbientColor_4();
		float L_2 = ___timePercent0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = Gradient_Evaluate_m02EA0BFD41864C8673A29333EBC4569C9DAA3E37(L_1, L_2, /*hidden argument*/NULL);
		RenderSettings_set_ambientLight_m0BD3CBB34DDA694D6459FB5A68859A4C070670D2(L_3, /*hidden argument*/NULL);
		// RenderSettings.fogColor = Preset.FogColor.Evaluate(timePercent);
		LightingPreset_t876E1A4F9CC2E1FDBD13A0E0832B4F5F1D464886 * L_4 = __this->get_Preset_5();
		Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * L_5 = L_4->get_FogColor_6();
		float L_6 = ___timePercent0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		L_7 = Gradient_Evaluate_m02EA0BFD41864C8673A29333EBC4569C9DAA3E37(L_5, L_6, /*hidden argument*/NULL);
		RenderSettings_set_fogColor_mC46154762710EFAA869A4E972C16D1FE9B0EA01F(L_7, /*hidden argument*/NULL);
		// if(DirectionalLight != null)
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_8 = __this->get_DirectionalLight_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0087;
		}
	}
	{
		// DirectionalLight.color = Preset.DirectionalColor.Evaluate(timePercent);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_10 = __this->get_DirectionalLight_4();
		LightingPreset_t876E1A4F9CC2E1FDBD13A0E0832B4F5F1D464886 * L_11 = __this->get_Preset_5();
		Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * L_12 = L_11->get_DirectionalColor_5();
		float L_13 = ___timePercent0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14;
		L_14 = Gradient_Evaluate_m02EA0BFD41864C8673A29333EBC4569C9DAA3E37(L_12, L_13, /*hidden argument*/NULL);
		Light_set_color_mB33E961A7CF25D0EBE410EE22444B4B8D4317C6C(L_10, L_14, /*hidden argument*/NULL);
		// DirectionalLight.transform.localRotation = Quaternion.Euler(new Vector3((timePercent * 360f) - 90f, 170f, 0));
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_15 = __this->get_DirectionalLight_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		float L_17 = ___timePercent0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_17, (float)(360.0f))), (float)(90.0f))), (170.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
		L_19 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_18, /*hidden argument*/NULL);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_16, L_19, /*hidden argument*/NULL);
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void LightingManager::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightingManager_OnValidate_m3CB727D123A384186EA5598CAD718DEF11665BB8 (LightingManager_t27E73623988870F6B46F81B087B57195C324BF57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m2BF548B32973BBCDBA15A4D77FA81652608878B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* V_0 = NULL;
	int32_t V_1 = 0;
	Light_tA2F349FE839781469A0344CF6039B51512394275 * V_2 = NULL;
	{
		// if (DirectionalLight != null)
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_0 = __this->get_DirectionalLight_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (RenderSettings.sun != null)
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_2;
		L_2 = RenderSettings_get_sun_mF349095D8EFEFFDD6450A02732B0881411F5AE9D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// DirectionalLight = RenderSettings.sun;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_4;
		L_4 = RenderSettings_get_sun_mF349095D8EFEFFDD6450A02732B0881411F5AE9D(/*hidden argument*/NULL);
		__this->set_DirectionalLight_4(L_4);
		// }
		return;
	}

IL_0028:
	{
		// Light[] lights = GameObject.FindObjectsOfType<Light>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* L_5;
		L_5 = Object_FindObjectsOfType_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m2BF548B32973BBCDBA15A4D77FA81652608878B3(/*hidden argument*/Object_FindObjectsOfType_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m2BF548B32973BBCDBA15A4D77FA81652608878B3_RuntimeMethod_var);
		// foreach(Light light in lights)
		V_0 = L_5;
		V_1 = 0;
		goto IL_004b;
	}

IL_0032:
	{
		// foreach(Light light in lights)
		LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// if(light.type == LightType.Directional)
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_10 = V_2;
		int32_t L_11;
		L_11 = Light_get_type_mDBBEC33D93952330EED5B02B15865C59D5C355A0(L_10, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_0047;
		}
	}
	{
		// DirectionalLight = light;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_12 = V_2;
		__this->set_DirectionalLight_4(L_12);
		// return;
		return;
	}

IL_0047:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004b:
	{
		// foreach(Light light in lights)
		int32_t L_14 = V_1;
		LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_0032;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LightingManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightingManager__ctor_mDBDBC24E1D8CFD0D4CF69B5CB05DE9071A0C3538 (LightingManager_t27E73623988870F6B46F81B087B57195C324BF57 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void LightingPreset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightingPreset__ctor_m49FDC3E5CF1B2F2A698A7EBCB1D421B823F853E0 (LightingPreset_t876E1A4F9CC2E1FDBD13A0E0832B4F5F1D464886 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void MainMenu::LoadtheGame(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_LoadtheGame_mF295C7146FF4CD619683B32281357969F7002EC7 (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, String_t* ___sceneName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = ___sceneName0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::EndTheGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_EndTheGame_mFBCCB2298CB577C23D20A30A52FDF3BDF448FE67 (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu__ctor_m4D77CEC8F91682A2D9492AE815F89B178BF9717D (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ManualInteract::Interact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualInteract_Interact_mA971D019F2F161ADB033D576E5968F4D045C27F2 (ManualInteract_t0D54E613F38B0073F35C1F038AB966DCF7B74D5E * __this, const RuntimeMethod* method)
{
	{
		// base.Interact();
		Interactable_Interact_m3F5E63F6B8A0875E44D9714F17C06BD2FC2962EA(__this, /*hidden argument*/NULL);
		// manualUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_manualUI_7();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// closeButton.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1 = __this->get_closeButton_8();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ManualInteract::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualInteract__ctor_m31591FA7BB364B6A83FA87D88A281DB715790CF8 (ManualInteract_t0D54E613F38B0073F35C1F038AB966DCF7B74D5E * __this, const RuntimeMethod* method)
{
	{
		Interactable__ctor_m14A127716816AD709C7F0004EEC27A89E8EAE8D3(__this, /*hidden argument*/NULL);
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
// System.Void MouseLook::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Start_m699B23D66C4F21B566C48A524BC40A828F5E3541 (MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cam = GetComponent<Camera>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		__this->set_cam_8(L_0);
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217(1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MouseLook::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Update_m3D49361C94E0433BB35499708EE783B4543D83D5 (MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisInteractable_tEEFC60C29F907276ABC0BDA6621F8089144774E7_mA9D91B6B22CFF4699E2D47FC3CF49F863AC61657_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ACB4197238671AD12F012F824B105991DBD657F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1140F06D6EAF4456700412F39897EE6E04E76190);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24E00C1D538A95E7E0F2716D52F935EFBD3C458F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B14CA2AAF7BE0609A25C5D82AFA1D4B219A51F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8239DDE7DBC91495DACC42B52FAF15E9C617D4D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD537A33D036F915A5CC479F6B54DD13D8A75E90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF90E98EB00101C68C435BF3576C2895BD1046C8C);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	String_t* G_B12_2 = NULL;
	String_t* G_B12_3 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	String_t* G_B11_2 = NULL;
	String_t* G_B11_3 = NULL;
	String_t* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	String_t* G_B13_2 = NULL;
	String_t* G_B13_3 = NULL;
	{
		// float mouseX = Input.GetAxis("Mouse X") * mouseSensitivity; //used for the movement of entire player body
		float L_0;
		L_0 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, /*hidden argument*/NULL);
		float L_1 = __this->get_mouseSensitivity_4();
		V_0 = ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
		// float mouseY = Input.GetAxis("Mouse Y") * mouseSensitivity;
		float L_2;
		L_2 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, /*hidden argument*/NULL);
		float L_3 = __this->get_mouseSensitivity_4();
		V_1 = ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3));
		// xRotation -= mouseY;
		float L_4 = __this->get_xRotation_7();
		float L_5 = V_1;
		__this->set_xRotation_7(((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)));
		// xRotation = Mathf.Clamp(xRotation, -90f, 90f); //Prevents overrotation where player rotates their head all the way behind them in the y-axis
		float L_6 = __this->get_xRotation_7();
		float L_7;
		L_7 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_6, (-90.0f), (90.0f), /*hidden argument*/NULL);
		__this->set_xRotation_7(L_7);
		// transform.localRotation = Quaternion.Euler(xRotation, 0f, 0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_9 = __this->get_xRotation_7();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_9, (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_8, L_10, /*hidden argument*/NULL);
		// playerBody.Rotate(Vector3.up * mouseX);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = __this->get_playerBody_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_13 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_12, L_13, /*hidden argument*/NULL);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_11, L_14, /*hidden argument*/NULL);
		// Debug.DrawRay(cam.transform.position, cam.transform.forward * range, Color.red);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15 = __this->get_cam_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_18 = __this->get_cam_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_19, /*hidden argument*/NULL);
		float L_21 = __this->get_range_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_20, L_21, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_23;
		L_23 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawRay_m918D1131BACEBD7CCEA9D9BFDF3279F6CD56E121(L_17, L_22, L_23, /*hidden argument*/NULL);
		// if(Physics.Raycast(cam.transform.position, cam.transform.forward, out hit, range))
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_24 = __this->get_cam_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_27 = __this->get_cam_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_27, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_28, /*hidden argument*/NULL);
		float L_30 = __this->get_range_6();
		bool L_31;
		L_31 = Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12(L_26, L_29, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_2), L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_024c;
		}
	}
	{
		// Debug.Log(hit.transform.name);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_2), /*hidden argument*/NULL);
		String_t* L_33;
		L_33 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_33, /*hidden argument*/NULL);
		// if(hit.collider.GetComponent<Interactable>() != null) //if the object hit has the component or derived from "Interactable"...
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_34;
		L_34 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_2), /*hidden argument*/NULL);
		Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * L_35;
		L_35 = Component_GetComponent_TisInteractable_tEEFC60C29F907276ABC0BDA6621F8089144774E7_mA9D91B6B22CFF4699E2D47FC3CF49F863AC61657(L_34, /*hidden argument*/Component_GetComponent_TisInteractable_tEEFC60C29F907276ABC0BDA6621F8089144774E7_mA9D91B6B22CFF4699E2D47FC3CF49F863AC61657_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_35, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0215;
		}
	}
	{
		// if(interactableObject != null) //if interactableObject HAS BEEN ASSIGNED WITH A COMPONENT...
		Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * L_37 = __this->get_interactableObject_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_37, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_01e1;
		}
	}
	{
		// if(interactableObject.gameObject != hit.collider.gameObject) //and that assigned component is different from the current collider hit...
		Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * L_39 = __this->get_interactableObject_9();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_39, /*hidden argument*/NULL);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_41;
		L_41 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_2), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42;
		L_42 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_41, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_40, L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_0282;
		}
	}
	{
		// interactableObject.hitByRayCast = false; //Stops player from interacting with an object when they immediately look at another interactable object
		Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * L_44 = __this->get_interactableObject_9();
		L_44->set_hitByRayCast_6((bool)0);
		// Debug.Log("The current local interactableObject is: " + interactableObject.gameObject + " and its hitByRayCast is... " + interactableObject.hitByRayCast);
		Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * L_45 = __this->get_interactableObject_9();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46;
		L_46 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_45, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47 = L_46;
		G_B5_0 = L_47;
		G_B5_1 = _stringLiteralDD537A33D036F915A5CC479F6B54DD13D8A75E90;
		if (L_47)
		{
			G_B6_0 = L_47;
			G_B6_1 = _stringLiteralDD537A33D036F915A5CC479F6B54DD13D8A75E90;
			goto IL_0167;
		}
	}
	{
		G_B7_0 = ((String_t*)(NULL));
		G_B7_1 = G_B5_1;
		goto IL_016c;
	}

IL_0167:
	{
		String_t* L_48;
		L_48 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B6_0);
		G_B7_0 = L_48;
		G_B7_1 = G_B6_1;
	}

IL_016c:
	{
		Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * L_49 = __this->get_interactableObject_9();
		bool* L_50 = L_49->get_address_of_hitByRayCast_6();
		String_t* L_51;
		L_51 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)L_50, /*hidden argument*/NULL);
		String_t* L_52;
		L_52 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(G_B7_1, G_B7_0, _stringLiteralF90E98EB00101C68C435BF3576C2895BD1046C8C, L_51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_52, /*hidden argument*/NULL);
		// Debug.Log("Chagning local interactable component from " + interactableObject.gameObject + " to " + hit.collider.gameObject);
		Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * L_53 = __this->get_interactableObject_9();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54;
		L_54 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_53, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55 = L_54;
		G_B8_0 = L_55;
		G_B8_1 = _stringLiteral0ACB4197238671AD12F012F824B105991DBD657F;
		if (L_55)
		{
			G_B9_0 = L_55;
			G_B9_1 = _stringLiteral0ACB4197238671AD12F012F824B105991DBD657F;
			goto IL_01a2;
		}
	}
	{
		G_B10_0 = ((String_t*)(NULL));
		G_B10_1 = G_B8_1;
		goto IL_01a7;
	}

IL_01a2:
	{
		String_t* L_56;
		L_56 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B9_0);
		G_B10_0 = L_56;
		G_B10_1 = G_B9_1;
	}

IL_01a7:
	{
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_57;
		L_57 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_2), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58;
		L_58 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_57, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59 = L_58;
		G_B11_0 = L_59;
		G_B11_1 = _stringLiteral8239DDE7DBC91495DACC42B52FAF15E9C617D4D7;
		G_B11_2 = G_B10_0;
		G_B11_3 = G_B10_1;
		if (L_59)
		{
			G_B12_0 = L_59;
			G_B12_1 = _stringLiteral8239DDE7DBC91495DACC42B52FAF15E9C617D4D7;
			G_B12_2 = G_B10_0;
			G_B12_3 = G_B10_1;
			goto IL_01bf;
		}
	}
	{
		G_B13_0 = ((String_t*)(NULL));
		G_B13_1 = G_B11_1;
		G_B13_2 = G_B11_2;
		G_B13_3 = G_B11_3;
		goto IL_01c4;
	}

IL_01bf:
	{
		String_t* L_60;
		L_60 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B12_0);
		G_B13_0 = L_60;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
		G_B13_3 = G_B12_3;
	}

IL_01c4:
	{
		String_t* L_61;
		L_61 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(G_B13_3, G_B13_2, G_B13_1, G_B13_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_61, /*hidden argument*/NULL);
		// interactableObject = hit.collider.GetComponent<Interactable>();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_62;
		L_62 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_2), /*hidden argument*/NULL);
		Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * L_63;
		L_63 = Component_GetComponent_TisInteractable_tEEFC60C29F907276ABC0BDA6621F8089144774E7_mA9D91B6B22CFF4699E2D47FC3CF49F863AC61657(L_62, /*hidden argument*/Component_GetComponent_TisInteractable_tEEFC60C29F907276ABC0BDA6621F8089144774E7_mA9D91B6B22CFF4699E2D47FC3CF49F863AC61657_RuntimeMethod_var);
		__this->set_interactableObject_9(L_63);
		// }
		return;
	}

IL_01e1:
	{
		// Debug.Log("interactableObject has been assigned");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral24E00C1D538A95E7E0F2716D52F935EFBD3C458F, /*hidden argument*/NULL);
		// interactableObject = hit.collider.GetComponent<Interactable>();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_64;
		L_64 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_2), /*hidden argument*/NULL);
		Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * L_65;
		L_65 = Component_GetComponent_TisInteractable_tEEFC60C29F907276ABC0BDA6621F8089144774E7_mA9D91B6B22CFF4699E2D47FC3CF49F863AC61657(L_64, /*hidden argument*/Component_GetComponent_TisInteractable_tEEFC60C29F907276ABC0BDA6621F8089144774E7_mA9D91B6B22CFF4699E2D47FC3CF49F863AC61657_RuntimeMethod_var);
		__this->set_interactableObject_9(L_65);
		// interactableObject.hitByRayCast = true;
		Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * L_66 = __this->get_interactableObject_9();
		L_66->set_hitByRayCast_6((bool)1);
		// interactableObject.LookingAtInteractable();
		Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * L_67 = __this->get_interactableObject_9();
		Interactable_LookingAtInteractable_mD0A3EDDDC16A0C0ECDE09751211D8AD9D738BD27(L_67, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0215:
	{
		// else if (interactableObject != null) //if the raycast doesnt hit an interactable object AND there is an interactacbleObject assigned
		Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * L_68 = __this->get_interactableObject_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_69;
		L_69 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_68, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_0282;
		}
	}
	{
		// interactableObject.hitByRayCast = false; //Stops player from interacting with an object when they're not looking at it.
		Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * L_70 = __this->get_interactableObject_9();
		L_70->set_hitByRayCast_6((bool)0);
		// Debug.Log("THE PLAYER IS LOOKING AWAY FROM AN INTERACTABLE");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral1140F06D6EAF4456700412F39897EE6E04E76190, /*hidden argument*/NULL);
		// interactableObject.LookingAtInteractable();
		Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * L_71 = __this->get_interactableObject_9();
		Interactable_LookingAtInteractable_mD0A3EDDDC16A0C0ECDE09751211D8AD9D738BD27(L_71, /*hidden argument*/NULL);
		// interactableObject = null;
		__this->set_interactableObject_9((Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 *)NULL);
		// }
		return;
	}

IL_024c:
	{
		// if (interactableObject != null)
		Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * L_72 = __this->get_interactableObject_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_73;
		L_73 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_72, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_0282;
		}
	}
	{
		// interactableObject.hitByRayCast = false; //Stops player from interacting with an object when they're not looking at it.
		Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * L_74 = __this->get_interactableObject_9();
		L_74->set_hitByRayCast_6((bool)0);
		// Debug.Log("The Raycast is currently looking at nothing");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral6B14CA2AAF7BE0609A25C5D82AFA1D4B219A51F6, /*hidden argument*/NULL);
		// interactableObject.LookingAtInteractable();
		Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 * L_75 = __this->get_interactableObject_9();
		Interactable_LookingAtInteractable_mD0A3EDDDC16A0C0ECDE09751211D8AD9D738BD27(L_75, /*hidden argument*/NULL);
		// interactableObject = null;
		__this->set_interactableObject_9((Interactable_tEEFC60C29F907276ABC0BDA6621F8089144774E7 *)NULL);
	}

IL_0282:
	{
		// }
		return;
	}
}
// System.Void MouseLook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook__ctor_mD12D8075DDEA2085341B59FF8BA9FB353613200B (MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA * __this, const RuntimeMethod* method)
{
	{
		// public float mouseSensitivity = 100f;
		__this->set_mouseSensitivity_4((100.0f));
		// public float range = 50f;
		__this->set_range_6((50.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void OpenChest::Interact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenChest_Interact_m87E51C6B1E01F8680085ABDCA7B35819DEF0EC82 (OpenChest_tD4D9212C5347F9967767E19512EAEF98BFDA81BB * __this, const RuntimeMethod* method)
{
	{
		// base.Interact();
		Interactable_Interact_m3F5E63F6B8A0875E44D9714F17C06BD2FC2962EA(__this, /*hidden argument*/NULL);
		// OpenTheChest();
		OpenChest_OpenTheChest_m13899E03BF61C8A31395D3BB714FE2CC47617C4F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OpenChest::OpenTheChest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenChest_OpenTheChest_m13899E03BF61C8A31395D3BB714FE2CC47617C4F (OpenChest_tD4D9212C5347F9967767E19512EAEF98BFDA81BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral393A7BB8EFC0A20A4DFBAF2E73BA0AD2B19D314A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("the Chest was opened");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral393A7BB8EFC0A20A4DFBAF2E73BA0AD2B19D314A, /*hidden argument*/NULL);
		// chestClosed.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_chestClosed_7();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// chestOpen.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_chestOpen_8();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OpenChest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenChest__ctor_m4E59BDE26EF8C335A803DC8802D949C9E4C01152 (OpenChest_tD4D9212C5347F9967767E19512EAEF98BFDA81BB * __this, const RuntimeMethod* method)
{
	{
		Interactable__ctor_m14A127716816AD709C7F0004EEC27A89E8EAE8D3(__this, /*hidden argument*/NULL);
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
// System.Void PlayerManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_Awake_m4E0FE19C5F34114E28F28F04CCF33C2E34C743E7 (PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_StaticFields*)il2cpp_codegen_static_fields_for(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// }
		return;
	}
}
// System.Void PlayerManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager__ctor_m4C7CA12A8243D6CA73C1EA65B361E7B717070471 (PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Start_mB585552228B1908E44D3A69496598FB485F608B6 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m2B9A09217489CB456933DEA112CA70C10AD3B9F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerRb = this.GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0;
		L_0 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set_playerRb_14(L_0);
		// coll = this.GetComponent<CapsuleCollider>();
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_1;
		L_1 = Component_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m2B9A09217489CB456933DEA112CA70C10AD3B9F9(__this, /*hidden argument*/Component_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m2B9A09217489CB456933DEA112CA70C10AD3B9F9_RuntimeMethod_var);
		__this->set_coll_13(L_1);
		// }
		return;
	}
}
// System.Void PlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Update_mC3491BD6CDFF1FA543B16969144C939B2298052F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// isGrounded = Physics.CheckSphere(groundCheck.position, groundDistance, groundMask);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_groundCheck_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = __this->get_groundDistance_10();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_3 = __this->get_groundMask_11();
		int32_t L_4;
		L_4 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = Physics_CheckSphere_m6DFD61C841CEBFDE6645689279AA6E31297B002B(L_1, L_2, L_4, /*hidden argument*/NULL);
		__this->set_isGrounded_12(L_5);
		// if(isGrounded && velocity.y < 0)
		bool L_6 = __this->get_isGrounded_12();
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = __this->get_address_of_velocity_7();
		float L_8 = L_7->get_y_3();
		if ((!(((float)L_8) < ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		// velocity.y = -2f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = __this->get_address_of_velocity_7();
		L_9->set_y_3((-2.0f));
	}

IL_0051:
	{
		// float x = Input.GetAxis("Horizontal");
		float L_10;
		L_10 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		V_0 = L_10;
		// float z = Input.GetAxis("Vertical");
		float L_11;
		L_11 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		V_1 = L_11;
		// Vector3 movement = transform.right * x + transform.forward * z;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_12, /*hidden argument*/NULL);
		float L_14 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_13, L_14, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_16, /*hidden argument*/NULL);
		float L_18 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_17, L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_15, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		// controller.Move(movement * speed * Time.deltaTime); //(movement within x and z)
		CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * L_21 = __this->get_controller_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_2;
		float L_23 = __this->get_speed_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_22, L_23, /*hidden argument*/NULL);
		float L_25;
		L_25 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_24, L_25, /*hidden argument*/NULL);
		int32_t L_27;
		L_27 = CharacterController_Move_mE0EBC32C72A0BEC18EDEBE748D44309A4BA32E60(L_21, L_26, /*hidden argument*/NULL);
		// if(Input.GetButtonDown("Jump") && isGrounded)
		bool L_28;
		L_28 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00e8;
		}
	}
	{
		bool L_29 = __this->get_isGrounded_12();
		if (!L_29)
		{
			goto IL_00e8;
		}
	}
	{
		// velocity.y = Mathf.Sqrt(jumpheight * -2f * gravity);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_30 = __this->get_address_of_velocity_7();
		float L_31 = __this->get_jumpheight_6();
		float L_32 = __this->get_gravity_8();
		float L_33;
		L_33 = sqrtf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_31, (float)(-2.0f))), (float)L_32)));
		L_30->set_y_3(L_33);
	}

IL_00e8:
	{
		// velocity.y += gravity * 4 * Time.deltaTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_34 = __this->get_address_of_velocity_7();
		float* L_35 = L_34->get_address_of_y_3();
		float* L_36 = L_35;
		float L_37 = *((float*)L_36);
		float L_38 = __this->get_gravity_8();
		float L_39;
		L_39 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		*((float*)L_36) = (float)((float)il2cpp_codegen_add((float)L_37, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_38, (float)(4.0f))), (float)L_39))));
		// controller.Move(velocity * Time.deltaTime); //uses the velocity in y for the free fall of the player (movement in y)
		CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * L_40 = __this->get_controller_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = __this->get_velocity_7();
		float L_42;
		L_42 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_41, L_42, /*hidden argument*/NULL);
		int32_t L_44;
		L_44 = CharacterController_Move_mE0EBC32C72A0BEC18EDEBE748D44309A4BA32E60(L_40, L_43, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mBF9F632DD9929DD6FF092A968649A4406BFE397F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 12f;
		__this->set_speed_5((12.0f));
		// public float jumpheight = 3;
		__this->set_jumpheight_6((3.0f));
		// float gravity = -9.81f;
		__this->set_gravity_8((-9.81000042f));
		// public float groundDistance = 0.4f;
		__this->set_groundDistance_10((0.400000006f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerSpawnManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSpawnManager_Awake_mAEB75B4A510786417246D901F47158B8C1AA0BF4 (PlayerSpawnManager_tFC047824493C90A22DE376ABDFA12793F30A7A4C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameVariables.currentSpawnPoint == 0)
		int32_t L_0 = ((GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_StaticFields*)il2cpp_codegen_static_fields_for(GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_il2cpp_TypeInfo_var))->get_currentSpawnPoint_1();
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		// GameObject.Instantiate(player, DockSpawn, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_player_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_DockSpawn_5();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_1, L_2, L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}

IL_001f:
	{
		// else if (GameVariables.currentSpawnPoint == 1)
		int32_t L_5 = ((GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_StaticFields*)il2cpp_codegen_static_fields_for(GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_il2cpp_TypeInfo_var))->get_currentSpawnPoint_1();
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_003f;
		}
	}
	{
		// GameObject.Instantiate(player, JamesSpawn, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_player_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = __this->get_JamesSpawn_6();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_6, L_7, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}

IL_003f:
	{
		// else if (GameVariables.currentSpawnPoint == 2)
		int32_t L_10 = ((GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_StaticFields*)il2cpp_codegen_static_fields_for(GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_il2cpp_TypeInfo_var))->get_currentSpawnPoint_1();
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_005f;
		}
	}
	{
		// GameObject.Instantiate(player, CyrusSpawn, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_player_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = __this->get_CyrusSpawn_7();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_11, L_12, L_13, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}

IL_005f:
	{
		// else if (GameVariables.currentSpawnPoint == 3)
		int32_t L_15 = ((GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_StaticFields*)il2cpp_codegen_static_fields_for(GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_il2cpp_TypeInfo_var))->get_currentSpawnPoint_1();
		if ((!(((uint32_t)L_15) == ((uint32_t)3))))
		{
			goto IL_007f;
		}
	}
	{
		// GameObject.Instantiate(player, SnakePitSpawn, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_player_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = __this->get_SnakePitSpawn_8();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
		L_18 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_16, L_17, L_18, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}

IL_007f:
	{
		// else if (GameVariables.currentSpawnPoint == 4)
		int32_t L_20 = ((GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_StaticFields*)il2cpp_codegen_static_fields_for(GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_il2cpp_TypeInfo_var))->get_currentSpawnPoint_1();
		if ((!(((uint32_t)L_20) == ((uint32_t)4))))
		{
			goto IL_009f;
		}
	}
	{
		// GameObject.Instantiate(player, FinalLevelSpawn, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_player_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = __this->get_FinalLevelSpawn_9();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
		L_23 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_21, L_22, L_23, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}

IL_009f:
	{
		// else if (GameVariables.currentSpawnPoint == 5)
		int32_t L_25 = ((GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_StaticFields*)il2cpp_codegen_static_fields_for(GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_il2cpp_TypeInfo_var))->get_currentSpawnPoint_1();
		if ((!(((uint32_t)L_25) == ((uint32_t)5))))
		{
			goto IL_00bf;
		}
	}
	{
		// GameObject.Instantiate(player, KaiLevelSpawn, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = __this->get_player_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = __this->get_KaiLevelSpawn_10();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_28;
		L_28 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_26, L_27, L_28, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}

IL_00bf:
	{
		// else if (GameVariables.currentSpawnPoint == 6)
		int32_t L_30 = ((GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_StaticFields*)il2cpp_codegen_static_fields_for(GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_il2cpp_TypeInfo_var))->get_currentSpawnPoint_1();
		if ((!(((uint32_t)L_30) == ((uint32_t)6))))
		{
			goto IL_00de;
		}
	}
	{
		// GameObject.Instantiate(player, BoarLevelSpawn, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = __this->get_player_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = __this->get_BoarLevelSpawn_11();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_33;
		L_33 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
		L_34 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_31, L_32, L_33, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
	}

IL_00de:
	{
		// }
		return;
	}
}
// System.Void PlayerSpawnManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSpawnManager__ctor_mB736FB485E6BE63B365EF23EF99D6D10435A4124 (PlayerSpawnManager_tFC047824493C90A22DE376ABDFA12793F30A7A4C * __this, const RuntimeMethod* method)
{
	{
		// Vector3 DockSpawn = new Vector3(197, 15, 243); //0
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (197.0f), (15.0f), (243.0f), /*hidden argument*/NULL);
		__this->set_DockSpawn_5(L_0);
		// Vector3 JamesSpawn = new Vector3(71, 17, 197); //1
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (71.0f), (17.0f), (197.0f), /*hidden argument*/NULL);
		__this->set_JamesSpawn_6(L_1);
		// Vector3 CyrusSpawn = new Vector3(-109, 31, -136); //2
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (-109.0f), (31.0f), (-136.0f), /*hidden argument*/NULL);
		__this->set_CyrusSpawn_7(L_2);
		// Vector3 SnakePitSpawn = new Vector3(-100, 11, -71); //3
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), (-100.0f), (11.0f), (-71.0f), /*hidden argument*/NULL);
		__this->set_SnakePitSpawn_8(L_3);
		// Vector3 FinalLevelSpawn = new Vector3(-184, 22, -83); //4
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (-184.0f), (22.0f), (-83.0f), /*hidden argument*/NULL);
		__this->set_FinalLevelSpawn_9(L_4);
		// Vector3 KaiLevelSpawn = new Vector3(10, 12, -55); //5
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), (10.0f), (12.0f), (-55.0f), /*hidden argument*/NULL);
		__this->set_KaiLevelSpawn_10(L_5);
		// Vector3 BoarLevelSpawn = new Vector3(-30, 54, 214); //6
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), (-30.0f), (54.0f), (214.0f), /*hidden argument*/NULL);
		__this->set_BoarLevelSpawn_11(L_6);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SceneChanger::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneChanger_OnTriggerEnter_mEDC70A47267E285FEF01433A6D3C936FDBB14400 (SceneChanger_t6A30EA4853DA52DBD1479ADCBE7B3B6952D1E068 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameVariables.currentSpawnPoint = newSpawnPoint;
		int32_t L_0 = __this->get_newSpawnPoint_5();
		((GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_StaticFields*)il2cpp_codegen_static_fields_for(GameVariables_t6B34C882FD42DC369E61ABAEF6EC0DB9521BF9EA_il2cpp_TypeInfo_var))->set_currentSpawnPoint_1(L_0);
		// if (other.gameObject.CompareTag("Player"))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_1 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// SceneManager.LoadScene(nameOfScene);
		String_t* L_4 = __this->get_nameOfScene_4();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_4, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void SceneChanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneChanger__ctor_m11AE9A596EFE92EE1AA22BD7A48AB0C1D758AB1D (SceneChanger_t6A30EA4853DA52DBD1479ADCBE7B3B6952D1E068 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void StateCheck::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateCheck_Start_m2754A9809109B35E01AE78D0E608E143157A693D (StateCheck_t7EA9F2D982B62F1A81F99E936C15D2CE42282DBE * __this, const RuntimeMethod* method)
{
	{
		// normal = true;
		__this->set_normal_4((bool)1);
		// climb = false;
		__this->set_climb_5((bool)0);
		// }
		return;
	}
}
// System.Void StateCheck::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateCheck_Update_mFDBDA0EAC880E0BE225437DB6F8AAFA0855C4DFB (StateCheck_t7EA9F2D982B62F1A81F99E936C15D2CE42282DBE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FD7FCFC83DB6C416148DB05FAE11D7EE84C7278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83C90ECF019479DBBD8EF17BFB5490B4D88F9C6A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown("e") && normal == true) {
		bool L_0;
		L_0 = Input_GetKeyDown_m9D556E728119BEB64AA624EBE82931367B6573A5(_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		bool L_1 = __this->get_normal_4();
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// normal = false;
		__this->set_normal_4((bool)0);
		// climb = true;
		__this->set_climb_5((bool)1);
		// }
		goto IL_0046;
	}

IL_0024:
	{
		// else if (Input.GetKeyDown("e") && climb == true){
		bool L_2;
		L_2 = Input_GetKeyDown_m9D556E728119BEB64AA624EBE82931367B6573A5(_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0046;
		}
	}
	{
		bool L_3 = __this->get_climb_5();
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		// normal = true;
		__this->set_normal_4((bool)1);
		// climb = false;
		__this->set_climb_5((bool)0);
	}

IL_0046:
	{
		// if (normal == true) {
		bool L_4 = __this->get_normal_4();
		// if (climb == true) {
		bool L_5 = __this->get_climb_5();
		// Debug.Log("Normal is " + normal);
		bool* L_6 = __this->get_address_of_normal_4();
		String_t* L_7;
		L_7 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral83C90ECF019479DBBD8EF17BFB5490B4D88F9C6A, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_8, /*hidden argument*/NULL);
		// Debug.Log("Climb is " + climb);
		bool* L_9 = __this->get_address_of_climb_5();
		String_t* L_10;
		L_10 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)L_9, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0FD7FCFC83DB6C416148DB05FAE11D7EE84C7278, L_10, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StateCheck::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateCheck__ctor_mD58AB027789254D57AC5F7DBDCC70F8AD6DD368B (StateCheck_t7EA9F2D982B62F1A81F99E936C15D2CE42282DBE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TeleportToStart::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportToStart_Start_m714D567A6C4BF2E844C0FDC992DBD79993AEEBB9 (TeleportToStart_t918088C7C366239FDA03C15C2382A291AE667E6D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TeleportToStart::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportToStart_Update_m68C5B665CFA9A56D0949C395EEE78A0A4C489E8D (TeleportToStart_t918088C7C366239FDA03C15C2382A291AE667E6D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TeleportToStart::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportToStart_OnTriggerEnter_mA6A2C69C8EBBB847DB650DD1566B131D0D6AA6C3 (TeleportToStart_t918088C7C366239FDA03C15C2382A291AE667E6D * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CEB4D81FE1382FF120AEE05E403D6F7BCE690D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Player")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		// Debug.Log("hit");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9CEB4D81FE1382FF120AEE05E403D6F7BCE690D2, /*hidden argument*/NULL);
		// player.transform.position = Spawnpoint.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_player_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_Spawnpoint_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_8, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void TeleportToStart::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportToStart__ctor_m867D2BEEB08C148364B332E3F9798F4B63F0D32E (TeleportToStart_t918088C7C366239FDA03C15C2382A291AE667E6D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void WheelInteractable::Interact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelInteractable_Interact_m5D9C19DD8CEECF126C06A6278A951ECF72478241 (WheelInteractable_t6F7057EAC4915BFEE0BAB95158D866D7BCC40A28 * __this, const RuntimeMethod* method)
{
	{
		// base.Interact();
		Interactable_Interact_m3F5E63F6B8A0875E44D9714F17C06BD2FC2962EA(__this, /*hidden argument*/NULL);
		// changeLevel();
		WheelInteractable_changeLevel_mA3D710856287EBBB877CEB0753EE98EE9D3D54DC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WheelInteractable::changeLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelInteractable_changeLevel_mA3D710856287EBBB877CEB0753EE98EE9D3D54DC (WheelInteractable_t6F7057EAC4915BFEE0BAB95158D866D7BCC40A28 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CF3EA1AAC4EA6BD9FE635430890A13648321B70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("IslandScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral4CF3EA1AAC4EA6BD9FE635430890A13648321B70, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WheelInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelInteractable__ctor_m54593C3E47C2A24995EBE141733E01101B469DDD (WheelInteractable_t6F7057EAC4915BFEE0BAB95158D866D7BCC40A28 * __this, const RuntimeMethod* method)
{
	{
		Interactable__ctor_m14A127716816AD709C7F0004EEC27A89E8EAE8D3(__this, /*hidden argument*/NULL);
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
// System.Void BoarBehaviour/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m7E89707D880A580AE76AC3D8DCD831E6D24D6AAC (U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator BoarBehaviour/<>c__DisplayClass14_0::<Update>g__Bulldozing|0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass14_0_U3CUpdateU3Eg__BulldozingU7C0_m4A111276F34826C8A49980B959D5EB507B3C4652 (U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed_t2F5FBD0261094D34389FC1D7AA08D2C324C3313A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed_t2F5FBD0261094D34389FC1D7AA08D2C324C3313A * L_0 = (U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed_t2F5FBD0261094D34389FC1D7AA08D2C324C3313A *)il2cpp_codegen_object_new(U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed_t2F5FBD0261094D34389FC1D7AA08D2C324C3313A_il2cpp_TypeInfo_var);
		U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed__ctor_m502D6C0F26455FA5BE72331E8B4D763100754466(L_0, 0, /*hidden argument*/NULL);
		U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed_t2F5FBD0261094D34389FC1D7AA08D2C324C3313A * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3 (OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Inventory/OnItemChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnItemChanged__ctor_m1D1B000321D4BBC44BDE3AD3631B1F79F3AC65C1 (OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Inventory/OnItemChanged::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnItemChanged_Invoke_m0930392CB320C062C256845E08A48954607A13E0 (OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3 * __this, const RuntimeMethod* method)
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Inventory/OnItemChanged::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnItemChanged_BeginInvoke_m28B3B3279D172691F1FDE26640C8982D7D49AB89 (OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Inventory/OnItemChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnItemChanged_EndInvoke_mF1208AC04EA50D06E815BEE7A9CF462F1866969B (OnItemChanged_tFE5923D27884B385B0784BFAA4EF687CDD4FD4E3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void LeverManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m45B8245C73313CBD6285E6B0B6D66F9716672C4F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034 * L_0 = (U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034 *)il2cpp_codegen_object_new(U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3F9B6099591DAC080EAFAF8A954C80A1FD241239(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void LeverManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3F9B6099591DAC080EAFAF8A954C80A1FD241239 (U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 LeverManager/<>c::<Start>b__12_0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CStartU3Eb__12_0_mDA5AB7505C0BCE988AC14138FF7D14057680C319 (U3CU3Ec_t39029320B9E82431500E7D88C7EB58556E5D9034 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLeverSystem_tB6C04315E26455D5B4206D71C5A0C2F1989D98B1_m8C79CA499EDB18F9D0DA4C4BE4946536357F57C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switches = switches.OrderBy(x=>x.GetComponent<LeverSystem>().OrderOfSwitch).ToList();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___x0;
		LeverSystem_tB6C04315E26455D5B4206D71C5A0C2F1989D98B1 * L_1;
		L_1 = GameObject_GetComponent_TisLeverSystem_tB6C04315E26455D5B4206D71C5A0C2F1989D98B1_m8C79CA499EDB18F9D0DA4C4BE4946536357F57C1(L_0, /*hidden argument*/GameObject_GetComponent_TisLeverSystem_tB6C04315E26455D5B4206D71C5A0C2F1989D98B1_m8C79CA499EDB18F9D0DA4C4BE4946536357F57C1_RuntimeMethod_var);
		int32_t L_2 = L_1->get_OrderOfSwitch_7();
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
// System.Void BoarBehaviour/<>c__DisplayClass14_0/<<Update>g__Bulldozing|0>d::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed__ctor_m502D6C0F26455FA5BE72331E8B4D763100754466 (U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed_t2F5FBD0261094D34389FC1D7AA08D2C324C3313A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void BoarBehaviour/<>c__DisplayClass14_0/<<Update>g__Bulldozing|0>d::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed_System_IDisposable_Dispose_m7C3FEACE0CB85AA4383400C97FF39A454C065146 (U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed_t2F5FBD0261094D34389FC1D7AA08D2C324C3313A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean BoarBehaviour/<>c__DisplayClass14_0/<<Update>g__Bulldozing|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed_MoveNext_mFE9C2189059E4E32CE56AD0412FC91458C662E71 (U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed_t2F5FBD0261094D34389FC1D7AA08D2C324C3313A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98A5AFA4F978588B9B87D6E32E6E8F73B84EC96A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDB0C1C16F121F2565D2B40BB2A7021957151B83);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0092;
			}
			case 2:
			{
				goto IL_00dd;
			}
			case 3:
			{
				goto IL_0140;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if(distance <= visionRadius * 2f) //This part causes bugs as well
		U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * L_3 = V_1;
		float L_4 = L_3->get_distance_0();
		U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * L_5 = V_1;
		BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC * L_6 = L_5->get_U3CU3E4__this_1();
		float L_7 = L_6->get_visionRadius_10();
		if ((!(((float)L_4) <= ((float)((float)il2cpp_codegen_multiply((float)L_7, (float)(2.0f)))))))
		{
			goto IL_0130;
		}
	}
	{
		// agent.angularSpeed = turnSpeed; //reduces the speed in which the boar turns. (we can assign it with a public variable instead of curring it in half)
		U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * L_8 = V_1;
		BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC * L_9 = L_8->get_U3CU3E4__this_1();
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_10 = L_9->get_agent_12();
		U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * L_11 = V_1;
		BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC * L_12 = L_11->get_U3CU3E4__this_1();
		float L_13 = L_12->get_turnSpeed_9();
		NavMeshAgent_set_angularSpeed_m5729B56BEEF8F863E5FA522135EC9B316A307F8D(L_10, L_13, /*hidden argument*/NULL);
		// agent.speed = 1000;
		U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * L_14 = V_1;
		BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC * L_15 = L_14->get_U3CU3E4__this_1();
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_16 = L_15->get_agent_12();
		NavMeshAgent_set_speed_mE71CB504B0CC1E977293722F9BA81B7060A99E14(L_16, (1000.0f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(4); //waits for 4 seconds...
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_17 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_17, (4.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_17);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0092:
	{
		__this->set_U3CU3E1__state_0((-1));
		// agent.SetDestination(target.position);//til it charges the player
		U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * L_18 = V_1;
		BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC * L_19 = L_18->get_U3CU3E4__this_1();
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_20 = L_19->get_agent_12();
		U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * L_21 = V_1;
		BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC * L_22 = L_21->get_U3CU3E4__this_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23 = L_22->get_target_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		bool L_25;
		L_25 = NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747(L_20, L_24, /*hidden argument*/NULL);
		// Debug.Log("Bulldozed the player");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralEDB0C1C16F121F2565D2B40BB2A7021957151B83, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(4); //waits for 1 second...
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_26 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_26, (4.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_26);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00dd:
	{
		__this->set_U3CU3E1__state_0((-1));
		// agent.speed = speed;
		U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * L_27 = V_1;
		BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC * L_28 = L_27->get_U3CU3E4__this_1();
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_29 = L_28->get_agent_12();
		U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * L_30 = V_1;
		BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC * L_31 = L_30->get_U3CU3E4__this_1();
		float L_32 = L_31->get_speed_8();
		NavMeshAgent_set_speed_mE71CB504B0CC1E977293722F9BA81B7060A99E14(L_29, L_32, /*hidden argument*/NULL);
		// agent.angularSpeed = RegTurnSpeed;
		U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * L_33 = V_1;
		BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC * L_34 = L_33->get_U3CU3E4__this_1();
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_35 = L_34->get_agent_12();
		U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * L_36 = V_1;
		BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC * L_37 = L_36->get_U3CU3E4__this_1();
		float L_38 = L_37->get_RegTurnSpeed_14();
		NavMeshAgent_set_angularSpeed_m5729B56BEEF8F863E5FA522135EC9B316A307F8D(L_35, L_38, /*hidden argument*/NULL);
		// state = State.FreeRoam;
		U3CU3Ec__DisplayClass14_0_t78C006A983962996E32800F6DCAD77A4AEC7B167 * L_39 = V_1;
		BoarBehaviour_t0635E8FED98763AD560B29787955D275998535DC * L_40 = L_39->get_U3CU3E4__this_1();
		L_40->set_state_4(0);
		// Debug.Log("Reset the stats");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral98A5AFA4F978588B9B87D6E32E6E8F73B84EC96A, /*hidden argument*/NULL);
	}

IL_0130:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_0140:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object BoarBehaviour/<>c__DisplayClass14_0/<<Update>g__Bulldozing|0>d::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m001800CA22243F11930FFC683DDD85C0968D1925 (U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed_t2F5FBD0261094D34389FC1D7AA08D2C324C3313A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void BoarBehaviour/<>c__DisplayClass14_0/<<Update>g__Bulldozing|0>d::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed_System_Collections_IEnumerator_Reset_mBC5DF503C5A848710D140C2D06CBC75B7FA1F62E (U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed_t2F5FBD0261094D34389FC1D7AA08D2C324C3313A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed_System_Collections_IEnumerator_Reset_mBC5DF503C5A848710D140C2D06CBC75B7FA1F62E_RuntimeMethod_var)));
	}
}
// System.Object BoarBehaviour/<>c__DisplayClass14_0/<<Update>g__Bulldozing|0>d::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed_System_Collections_IEnumerator_get_Current_m4789E7E34B7D560739BAA1BB7477F749F4FE9D07 (U3CU3CUpdateU3Eg__BulldozingU7C0U3Ed_t2F5FBD0261094D34389FC1D7AA08D2C324C3313A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
