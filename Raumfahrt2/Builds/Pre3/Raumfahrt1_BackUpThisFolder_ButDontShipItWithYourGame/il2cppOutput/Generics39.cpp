﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`2<Mirror.NetworkWriter,System.ArraySegment`1<System.Byte>>
struct Action_2_tDDC16D9343F9862B1AEAFD3C2DD9F9074F056F3B;
// System.Action`2<Mirror.NetworkWriter,Mirror.AddPlayerMessage>
struct Action_2_t82C419A7B56F7761744D61A922F12158B8D99F47;
// System.Action`2<Mirror.NetworkWriter,System.Boolean>
struct Action_2_tF81685BA5FBB5DC20C0BB093365291FB712A401B;
// System.Action`2<Mirror.NetworkWriter,System.Byte>
struct Action_2_t52E7D1EBBA527DA63622EFF245A3775E80D17922;
// System.Action`2<Mirror.NetworkWriter,System.ByteEnum>
struct Action_2_t8A51EAF3AA1592DED8AA12B3A57F3FA8B60E56BE;
// System.Action`2<Mirror.NetworkWriter,System.Char>
struct Action_2_t6700F29FC1B7D4081C6FF866AD21B80187508E25;
// System.Action`2<Mirror.NetworkWriter,Mirror.Examples.MultipleMatch.ClientMatchMessage>
struct Action_2_t56E865D41C3ECF4A16ECB94A134B04FE30AED144;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Color>
struct Action_2_t3BB1FCB4F61E8C68E154F8C82A7BC52D616CBC38;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Color32>
struct Action_2_t1D4D976ADCDC1657604A1A6A367AABC1F078C575;
// System.Action`2<Mirror.NetworkWriter,Mirror.CommandMessage>
struct Action_2_t574ECA56A14BC12A4F05C314A59A1A8D97077379;
// System.Action`2<Mirror.NetworkWriter,System.Decimal>
struct Action_2_tC3CD250E1D414503C04C35604A1AF9E1E3A3CCC2;
// System.Action`2<Mirror.NetworkWriter,System.Double>
struct Action_2_t32058A26C0F0DC50CDC4C093F62CB814CB700F4B;
// System.Action`2<Mirror.NetworkWriter,System.Guid>
struct Action_2_t64D8BF80DEA06ABF68F5460FFCDFA77975A12309;
// System.Action`2<Mirror.NetworkWriter,System.Int16>
struct Action_2_t7A28AF394FDC1CBC7C3BBF8DBB09C0389A227869;
// System.Action`2<Mirror.NetworkWriter,System.Int32>
struct Action_2_tE6E09D310E833E4FB94E0D9B53FD0107A7C87722;
// System.Action`2<Mirror.NetworkWriter,System.Int64>
struct Action_2_t0D878EB6F328F25995A8651ADB5EB50A2C1D5C45;
// System.Action`2<Mirror.NetworkWriter,Mirror.Examples.MultipleMatch.MatchInfo>
struct Action_2_t8975C3F1BE19B7E545AE1DB1120E7C1D1FE7F2B0;
// System.Action`2<Mirror.NetworkWriter,Mirror.Examples.MultipleMatch.MatchPlayerData>
struct Action_2_t2161DFA8DFD86D7DC6F205CE87052713EEC52B43;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Matrix4x4>
struct Action_2_t83434D1780C21F2935B5BDAC4C2874F9D742F544;
// System.Action`2<Mirror.NetworkWriter,Mirror.NetworkPingMessage>
struct Action_2_tB680D97115FA0B1F28A63305DFFCB7F1A9F88FB1;
// System.Action`2<Mirror.NetworkWriter,Mirror.NetworkPongMessage>
struct Action_2_t766ADD1A7C8C2168D8745606774616F292054ABE;
// System.Action`2<Mirror.NetworkWriter,Mirror.NotReadyMessage>
struct Action_2_t8FF7BAABD6B3D74F5B72C10EBA66BE2E772D49D6;
// System.Action`2<Mirror.NetworkWriter,System.Object>
struct Action_2_t42B3916DAAC2EBAF01DF07FDBD6877932DE57B8B;
// System.Action`2<Mirror.NetworkWriter,Mirror.ObjectDestroyMessage>
struct Action_2_tEB24037407A50F8480D3C9DD97B9516B2A0D25B9;
// System.Action`2<Mirror.NetworkWriter,Mirror.ObjectHideMessage>
struct Action_2_t4A2880C4D6F155F26BB53418979015EDB2534375;
// System.Action`2<Mirror.NetworkWriter,Mirror.ObjectSpawnFinishedMessage>
struct Action_2_t1F680FB9B379A0FDBFC5E7892311D7E923026358;
// System.Action`2<Mirror.NetworkWriter,Mirror.ObjectSpawnStartedMessage>
struct Action_2_tF4D77A930B8C759D9F217E2139A50B41CDD693FF;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Plane>
struct Action_2_tA515A444E6469FE7D36DCA796F08FF322F15B457;
// System.Action`2<Mirror.NetworkWriter,Mirror.Examples.MultipleMatch.PlayerInfo>
struct Action_2_tD120F789AEEE3408457B90CA0818E2032F869041;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Quaternion>
struct Action_2_t8DE41CE4C1FB3126AEE417C1E8019088D77C6232;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Ray>
struct Action_2_t7E7869A9993026890A970ED24F90500F8D9A2D64;
// System.Action`2<Mirror.NetworkWriter,Mirror.ReadyMessage>
struct Action_2_t62D233D13A577CA696A917DB6FCEAF9C3B9A2DA4;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Rect>
struct Action_2_tE8BD8407D1975E5206315893612B6C8214D73A18;
// System.Action`2<Mirror.NetworkWriter,Mirror.RpcMessage>
struct Action_2_t23DD120D884F3B807B80771416C8A68A2F6BF8D3;
// System.Action`2<Mirror.NetworkWriter,System.SByte>
struct Action_2_t085EA0AB386F73454B4A2B2C2F826ADAFAB971FA;
// System.Action`2<Mirror.NetworkWriter,Mirror.SceneMessage>
struct Action_2_t31975E28E395308D781F896A4BDB268F6A4BD2CF;
// System.Action`2<Mirror.NetworkWriter,Mirror.Examples.MultipleMatch.ServerMatchMessage>
struct Action_2_t3ABD882F0FC020751D5CC2E5C162C05742DEAA2C;
// System.Action`2<Mirror.NetworkWriter,Mirror.Discovery.ServerRequest>
struct Action_2_t6F6D337BC3B25B7903365BF8FE4CA5065EACF3AB;
// System.Action`2<Mirror.NetworkWriter,Mirror.Discovery.ServerResponse>
struct Action_2_t6882E8FBE3B5EDD20D66A60F3F9FC8E20D2453A4;
// System.Action`2<Mirror.NetworkWriter,System.Single>
struct Action_2_tFC0C91DAAA53900B09A964EDDD9DE42DF1A78AC7;
// System.Action`2<Mirror.NetworkWriter,Mirror.SpawnMessage>
struct Action_2_t3D008DF47D7FC79BA0334D5FAC95607A63DCEFEC;
// System.Action`2<Mirror.NetworkWriter,System.UInt16>
struct Action_2_tA14B2F1E192EF29D817F514EA3C5482459A0D19F;
// System.Action`2<Mirror.NetworkWriter,System.UInt16Enum>
struct Action_2_tCE0BC2B1F5BF76C19676981C908A710F1D184990;
// System.Action`2<Mirror.NetworkWriter,System.UInt32>
struct Action_2_tA1355C08EF96E6E0F02FB4DE8BB4DA2728223401;
// System.Action`2<Mirror.NetworkWriter,System.UInt64>
struct Action_2_tB350143B74E5F188F5AF606DD0B057DF2A111A0E;
// System.Action`2<Mirror.NetworkWriter,Mirror.UpdateVarsMessage>
struct Action_2_t5A3703D259887235527744E2BD7095928D420ADD;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector2>
struct Action_2_t8CF52778C79A43BDF7F6EEA69C5EDD7FC1BAE71A;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector2Int>
struct Action_2_t1F7B553853A3C7E0059CB4C20171C89899F30FD4;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector3>
struct Action_2_t7DEDA4797BBA6D349E1D5E61BF8E71AC0652161B;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector3Int>
struct Action_2_tB5ECA8EFF4D4711766752DC8484C46D37E81BC71;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector4>
struct Action_2_tAB3708D43787E2BEB258158170A290B1B1A39C48;
// System.Action`2<Mirror.NetworkWriter,Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>
struct Action_2_t21F9C07D2ED276648CDFEDD9A690DD4C443D89A8;
// System.Action`2<Mirror.NetworkWriter,Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>
struct Action_2_tCA2B23619473EF0A9BE135C10D83205A3702DADE;
// System.Action`2<Mirror.NetworkWriter,Mirror.Examples.Chat.ChatNetworkManager/CreatePlayerMessage>
struct Action_2_t250FCA14A20FD2E6CBDE597188940ACE01AC61AC;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20;
// System.Collections.Generic.EqualityComparer`1<System.Single>
struct EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>
struct EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>
struct EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>
struct EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Boolean>
struct Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>
struct Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>
struct Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,Mirror.Examples.MultipleMatch.PlayerInfo>
struct Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Mirror.Cloud.ListServerService.KeyValue>
struct Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274;
// System.Func`2<System.Int32Enum,System.Boolean>
struct Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E;
// System.Func`2<System.Int32Enum,System.Int32>
struct Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F;
// System.Func`2<System.Int32Enum,System.Object>
struct Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB;
// System.Func`2<System.Int32Enum,Mirror.Examples.MultipleMatch.PlayerInfo>
struct Func_2_tD2EAA8713F02253D8C278A66ED02921665957711;
// System.Func`2<Mirror.Cloud.ListServerService.KeyValue,System.Boolean>
struct Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>
struct Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E;
// System.Func`2<Mirror.Examples.MultipleMatch.PlayerInfo,System.Boolean>
struct Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct IEnumerable_1_t79EE9024EC37CCCC68DF1B64A8C34AEBC7E65C49;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEnumerable`1<System.Int32Enum>
struct IEnumerable_1_t28FB40D8E33C5846AB04F37C78130A4948569C7C;
// System.Collections.Generic.IEnumerable`1<Mirror.Cloud.ListServerService.KeyValue>
struct IEnumerable_1_t2242261FEDE5AA6B4DC1ADE2AB5BF6E2B72D3675;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<Mirror.Examples.MultipleMatch.PlayerInfo>
struct IEnumerable_1_tB86FCE9DACD7D91AA784F0DEBB8EECE9B51333AD;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct IEnumerator_1_t684343E066D49B7FAC4216EA29ACB636DA954229;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_tF437149CAED78D4A68294D431DE692A78F7D67B3;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB;
// System.Collections.Generic.IEnumerator`1<System.Int32Enum>
struct IEnumerator_1_tD8D5B0A7736D9FAFB606AC36B0CAD1353B84C3BD;
// System.Collections.Generic.IEnumerator`1<Mirror.Cloud.ListServerService.KeyValue>
struct IEnumerator_1_t944480441CF687ECFF871CC97F74394F9B0F28CD;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEnumerator`1<Mirror.Examples.MultipleMatch.PlayerInfo>
struct IEnumerator_1_tD9F963B84D6B3C20B926DE7C0827982BC4355B6F;
// System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC;
// System.Linq.Enumerable/Iterator`1<System.Int32>
struct Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379;
// System.Linq.Enumerable/Iterator`1<System.Int32Enum>
struct Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9;
// System.Linq.Enumerable/Iterator`1<Mirror.Cloud.ListServerService.KeyValue>
struct Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279;
// System.Linq.Enumerable/Iterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>
struct Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// UnityEngine.Rendering.VolumeParameter`1<System.Object>
struct VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0;
// UnityEngine.Rendering.VolumeParameter`1<System.Single>
struct VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7;
// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>
struct VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7;
// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>
struct VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F;
// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>
struct VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C;
// System.WeakReference`1<System.Object>
struct WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Int32Enum>
struct WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>
struct WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32Enum>
struct WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23;
// System.Linq.Enumerable/WhereEnumerableIterator`1<Mirror.Cloud.ListServerService.KeyValue>
struct WhereEnumerableIterator_1_t5916DAE089C894458C6EEF85DDDD344556850B2C;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0;
// System.Linq.Enumerable/WhereEnumerableIterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>
struct WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8;
// System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C;
// System.Linq.Enumerable/WhereListIterator`1<System.Int32Enum>
struct WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B;
// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>
struct WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>
struct WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,Mirror.Examples.MultipleMatch.PlayerInfo>
struct WhereSelectArrayIterator_2_tB2C742F819D4103B68DB1E2D3F459CAB70002C2B;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Mirror.Cloud.ListServerService.KeyValue>
struct WhereSelectArrayIterator_2_t18B98FB6D8A55729A5F71CB271D10EFBB890F32E;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,System.Int32>
struct WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,System.Object>
struct WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,Mirror.Examples.MultipleMatch.PlayerInfo>
struct WhereSelectArrayIterator_2_t26548A85DB592AAC9C15A71C4D15AC2825D13691;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int32>
struct WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>
struct WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>
struct WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>
struct WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,Mirror.Examples.MultipleMatch.PlayerInfo>
struct WhereSelectEnumerableIterator_2_tF3AAEF187BDED068096DE611AD3F194A6480C337;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Mirror.Cloud.ListServerService.KeyValue>
struct WhereSelectEnumerableIterator_2_tED1D0ABEBF2FF958A01724580E97848AF9F7FDEB;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,System.Int32>
struct WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,System.Object>
struct WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,Mirror.Examples.MultipleMatch.PlayerInfo>
struct WhereSelectEnumerableIterator_2_t377F90D7422506FEF13EF536EE4C77A5FE93AFA2;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int32>
struct WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>
struct WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>
struct WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>
struct WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,Mirror.Examples.MultipleMatch.PlayerInfo>
struct WhereSelectListIterator_2_tC5715C08EF4B0C26C43D8EFE4EC6DF00DE343471;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Mirror.Cloud.ListServerService.KeyValue>
struct WhereSelectListIterator_2_t124829D22185377A9F8EFF28BA043615AAAF36B9;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Int32>
struct WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Object>
struct WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,Mirror.Examples.MultipleMatch.PlayerInfo>
struct WhereSelectListIterator_2_t4048170DFAF3C66F5F9ABA4F767418179F7FB0D0;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>
struct WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>
struct WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139;
// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>[]
struct KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2A667D8777429024D8A3CB3D9AE29EA79FEA6176;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Rendering.VolumeParameter
struct VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0;
IL2CPP_EXTERN_C String_t* _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7;
IL2CPP_EXTERN_C String_t* _stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1_GetObjectData_m7C63330FAC22CBE86AA1BDE2F34DFDA8B1E41272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1__ctor_mC76935DFFEF0678A77A4811865B9F4D350D72741_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1;
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C;
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.EqualityComparer`1<System.Object>
struct  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Single>
struct  EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>
struct  EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>
struct  EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>
struct  EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Linq.Enumerable/Iterator`1<System.Int32>
struct  Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	int32_t ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___current_2)); }
	inline int32_t get_current_2() const { return ___current_2; }
	inline int32_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int32_t value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<System.Object>
struct  Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject * ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___current_2)); }
	inline RuntimeObject * get_current_2() const { return ___current_2; }
	inline RuntimeObject ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(RuntimeObject * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct  List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A, ____items_1)); }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____items_1)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32Enum>
struct  List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____items_1)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get__items_1() const { return ____items_1; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A_StaticFields, ____emptyArray_5)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
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


// Mirror.Writer`1<System.ArraySegment`1<System.Byte>>
struct  Writer_1_t9EB22B07802DC0F5592E9DBF85DD1C30DBFB37A0  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t9EB22B07802DC0F5592E9DBF85DD1C30DBFB37A0_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tDDC16D9343F9862B1AEAFD3C2DD9F9074F056F3B * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t9EB22B07802DC0F5592E9DBF85DD1C30DBFB37A0_StaticFields, ___write_0)); }
	inline Action_2_tDDC16D9343F9862B1AEAFD3C2DD9F9074F056F3B * get_write_0() const { return ___write_0; }
	inline Action_2_tDDC16D9343F9862B1AEAFD3C2DD9F9074F056F3B ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tDDC16D9343F9862B1AEAFD3C2DD9F9074F056F3B * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.AddPlayerMessage>
struct  Writer_1_t2EF0735D392E87510C608B3AF2157A96F0AA11CE  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t2EF0735D392E87510C608B3AF2157A96F0AA11CE_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t82C419A7B56F7761744D61A922F12158B8D99F47 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t2EF0735D392E87510C608B3AF2157A96F0AA11CE_StaticFields, ___write_0)); }
	inline Action_2_t82C419A7B56F7761744D61A922F12158B8D99F47 * get_write_0() const { return ___write_0; }
	inline Action_2_t82C419A7B56F7761744D61A922F12158B8D99F47 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t82C419A7B56F7761744D61A922F12158B8D99F47 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Boolean>
struct  Writer_1_t1D1C601A3EBCEA4C4302FF02FDFB7540C5A22F7A  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t1D1C601A3EBCEA4C4302FF02FDFB7540C5A22F7A_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tF81685BA5FBB5DC20C0BB093365291FB712A401B * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t1D1C601A3EBCEA4C4302FF02FDFB7540C5A22F7A_StaticFields, ___write_0)); }
	inline Action_2_tF81685BA5FBB5DC20C0BB093365291FB712A401B * get_write_0() const { return ___write_0; }
	inline Action_2_tF81685BA5FBB5DC20C0BB093365291FB712A401B ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tF81685BA5FBB5DC20C0BB093365291FB712A401B * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Byte>
struct  Writer_1_tF8D3D9D035F0F6186ECD28DC867E016AD93D3EDD  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tF8D3D9D035F0F6186ECD28DC867E016AD93D3EDD_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t52E7D1EBBA527DA63622EFF245A3775E80D17922 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tF8D3D9D035F0F6186ECD28DC867E016AD93D3EDD_StaticFields, ___write_0)); }
	inline Action_2_t52E7D1EBBA527DA63622EFF245A3775E80D17922 * get_write_0() const { return ___write_0; }
	inline Action_2_t52E7D1EBBA527DA63622EFF245A3775E80D17922 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t52E7D1EBBA527DA63622EFF245A3775E80D17922 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.ByteEnum>
struct  Writer_1_t47142FCE9AA21E79F109E7908A9A248F9BA99963  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t47142FCE9AA21E79F109E7908A9A248F9BA99963_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t8A51EAF3AA1592DED8AA12B3A57F3FA8B60E56BE * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t47142FCE9AA21E79F109E7908A9A248F9BA99963_StaticFields, ___write_0)); }
	inline Action_2_t8A51EAF3AA1592DED8AA12B3A57F3FA8B60E56BE * get_write_0() const { return ___write_0; }
	inline Action_2_t8A51EAF3AA1592DED8AA12B3A57F3FA8B60E56BE ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t8A51EAF3AA1592DED8AA12B3A57F3FA8B60E56BE * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Char>
struct  Writer_1_t0A745353D77F9C3AC3C454C5A3ED98F709D5EB26  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t0A745353D77F9C3AC3C454C5A3ED98F709D5EB26_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t6700F29FC1B7D4081C6FF866AD21B80187508E25 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t0A745353D77F9C3AC3C454C5A3ED98F709D5EB26_StaticFields, ___write_0)); }
	inline Action_2_t6700F29FC1B7D4081C6FF866AD21B80187508E25 * get_write_0() const { return ___write_0; }
	inline Action_2_t6700F29FC1B7D4081C6FF866AD21B80187508E25 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t6700F29FC1B7D4081C6FF866AD21B80187508E25 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Examples.MultipleMatch.ClientMatchMessage>
struct  Writer_1_t70BEF55E9DD857C35B13BE57593956CB41C3436C  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t70BEF55E9DD857C35B13BE57593956CB41C3436C_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t56E865D41C3ECF4A16ECB94A134B04FE30AED144 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t70BEF55E9DD857C35B13BE57593956CB41C3436C_StaticFields, ___write_0)); }
	inline Action_2_t56E865D41C3ECF4A16ECB94A134B04FE30AED144 * get_write_0() const { return ___write_0; }
	inline Action_2_t56E865D41C3ECF4A16ECB94A134B04FE30AED144 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t56E865D41C3ECF4A16ECB94A134B04FE30AED144 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Color>
struct  Writer_1_t785754E9E50AB0B928A06CDE0B21818B72405F05  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t785754E9E50AB0B928A06CDE0B21818B72405F05_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t3BB1FCB4F61E8C68E154F8C82A7BC52D616CBC38 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t785754E9E50AB0B928A06CDE0B21818B72405F05_StaticFields, ___write_0)); }
	inline Action_2_t3BB1FCB4F61E8C68E154F8C82A7BC52D616CBC38 * get_write_0() const { return ___write_0; }
	inline Action_2_t3BB1FCB4F61E8C68E154F8C82A7BC52D616CBC38 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t3BB1FCB4F61E8C68E154F8C82A7BC52D616CBC38 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Color32>
struct  Writer_1_tA9E5EA683CA8E516101F3E2CF673B35EFE6D12F0  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tA9E5EA683CA8E516101F3E2CF673B35EFE6D12F0_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t1D4D976ADCDC1657604A1A6A367AABC1F078C575 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tA9E5EA683CA8E516101F3E2CF673B35EFE6D12F0_StaticFields, ___write_0)); }
	inline Action_2_t1D4D976ADCDC1657604A1A6A367AABC1F078C575 * get_write_0() const { return ___write_0; }
	inline Action_2_t1D4D976ADCDC1657604A1A6A367AABC1F078C575 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t1D4D976ADCDC1657604A1A6A367AABC1F078C575 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.CommandMessage>
struct  Writer_1_t5AAF25D7AD0B5A0050574314AB2162EC3D52CE45  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t5AAF25D7AD0B5A0050574314AB2162EC3D52CE45_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t574ECA56A14BC12A4F05C314A59A1A8D97077379 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t5AAF25D7AD0B5A0050574314AB2162EC3D52CE45_StaticFields, ___write_0)); }
	inline Action_2_t574ECA56A14BC12A4F05C314A59A1A8D97077379 * get_write_0() const { return ___write_0; }
	inline Action_2_t574ECA56A14BC12A4F05C314A59A1A8D97077379 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t574ECA56A14BC12A4F05C314A59A1A8D97077379 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Decimal>
struct  Writer_1_t3FB5DD8710039238F151652C7490AD2F8E3CCCB5  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t3FB5DD8710039238F151652C7490AD2F8E3CCCB5_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tC3CD250E1D414503C04C35604A1AF9E1E3A3CCC2 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t3FB5DD8710039238F151652C7490AD2F8E3CCCB5_StaticFields, ___write_0)); }
	inline Action_2_tC3CD250E1D414503C04C35604A1AF9E1E3A3CCC2 * get_write_0() const { return ___write_0; }
	inline Action_2_tC3CD250E1D414503C04C35604A1AF9E1E3A3CCC2 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tC3CD250E1D414503C04C35604A1AF9E1E3A3CCC2 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Double>
struct  Writer_1_t4C98185AE070182574DBD49FA2AE4CA2D3923973  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t4C98185AE070182574DBD49FA2AE4CA2D3923973_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t32058A26C0F0DC50CDC4C093F62CB814CB700F4B * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t4C98185AE070182574DBD49FA2AE4CA2D3923973_StaticFields, ___write_0)); }
	inline Action_2_t32058A26C0F0DC50CDC4C093F62CB814CB700F4B * get_write_0() const { return ___write_0; }
	inline Action_2_t32058A26C0F0DC50CDC4C093F62CB814CB700F4B ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t32058A26C0F0DC50CDC4C093F62CB814CB700F4B * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Guid>
struct  Writer_1_t421EBEBFE41A20B209803E282ECD6E97C70A6A6F  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t421EBEBFE41A20B209803E282ECD6E97C70A6A6F_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t64D8BF80DEA06ABF68F5460FFCDFA77975A12309 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t421EBEBFE41A20B209803E282ECD6E97C70A6A6F_StaticFields, ___write_0)); }
	inline Action_2_t64D8BF80DEA06ABF68F5460FFCDFA77975A12309 * get_write_0() const { return ___write_0; }
	inline Action_2_t64D8BF80DEA06ABF68F5460FFCDFA77975A12309 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t64D8BF80DEA06ABF68F5460FFCDFA77975A12309 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Int16>
struct  Writer_1_t3BF5E9CEA437B8E3C06EE7AB80C714421A009091  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t3BF5E9CEA437B8E3C06EE7AB80C714421A009091_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t7A28AF394FDC1CBC7C3BBF8DBB09C0389A227869 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t3BF5E9CEA437B8E3C06EE7AB80C714421A009091_StaticFields, ___write_0)); }
	inline Action_2_t7A28AF394FDC1CBC7C3BBF8DBB09C0389A227869 * get_write_0() const { return ___write_0; }
	inline Action_2_t7A28AF394FDC1CBC7C3BBF8DBB09C0389A227869 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t7A28AF394FDC1CBC7C3BBF8DBB09C0389A227869 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Int32>
struct  Writer_1_tBFABCD206CC703940F248E6351D0734D0AB13E23  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tBFABCD206CC703940F248E6351D0734D0AB13E23_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tE6E09D310E833E4FB94E0D9B53FD0107A7C87722 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tBFABCD206CC703940F248E6351D0734D0AB13E23_StaticFields, ___write_0)); }
	inline Action_2_tE6E09D310E833E4FB94E0D9B53FD0107A7C87722 * get_write_0() const { return ___write_0; }
	inline Action_2_tE6E09D310E833E4FB94E0D9B53FD0107A7C87722 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tE6E09D310E833E4FB94E0D9B53FD0107A7C87722 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Int64>
struct  Writer_1_t968EAEA43EB6BD2E438C75DB711FDD4503C9218C  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t968EAEA43EB6BD2E438C75DB711FDD4503C9218C_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t0D878EB6F328F25995A8651ADB5EB50A2C1D5C45 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t968EAEA43EB6BD2E438C75DB711FDD4503C9218C_StaticFields, ___write_0)); }
	inline Action_2_t0D878EB6F328F25995A8651ADB5EB50A2C1D5C45 * get_write_0() const { return ___write_0; }
	inline Action_2_t0D878EB6F328F25995A8651ADB5EB50A2C1D5C45 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t0D878EB6F328F25995A8651ADB5EB50A2C1D5C45 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Examples.MultipleMatch.MatchInfo>
struct  Writer_1_tFBD488B495BFC499F0DFBE8166A95FE9FB4D426E  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tFBD488B495BFC499F0DFBE8166A95FE9FB4D426E_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t8975C3F1BE19B7E545AE1DB1120E7C1D1FE7F2B0 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tFBD488B495BFC499F0DFBE8166A95FE9FB4D426E_StaticFields, ___write_0)); }
	inline Action_2_t8975C3F1BE19B7E545AE1DB1120E7C1D1FE7F2B0 * get_write_0() const { return ___write_0; }
	inline Action_2_t8975C3F1BE19B7E545AE1DB1120E7C1D1FE7F2B0 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t8975C3F1BE19B7E545AE1DB1120E7C1D1FE7F2B0 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Examples.MultipleMatch.MatchPlayerData>
struct  Writer_1_t978B4EB4D4D454D0AB878F13EDDE9ACFAE4051D5  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t978B4EB4D4D454D0AB878F13EDDE9ACFAE4051D5_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t2161DFA8DFD86D7DC6F205CE87052713EEC52B43 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t978B4EB4D4D454D0AB878F13EDDE9ACFAE4051D5_StaticFields, ___write_0)); }
	inline Action_2_t2161DFA8DFD86D7DC6F205CE87052713EEC52B43 * get_write_0() const { return ___write_0; }
	inline Action_2_t2161DFA8DFD86D7DC6F205CE87052713EEC52B43 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t2161DFA8DFD86D7DC6F205CE87052713EEC52B43 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Matrix4x4>
struct  Writer_1_t73B7A7BB5872D245C06CFE168A5170A911A8E1F3  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t73B7A7BB5872D245C06CFE168A5170A911A8E1F3_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t83434D1780C21F2935B5BDAC4C2874F9D742F544 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t73B7A7BB5872D245C06CFE168A5170A911A8E1F3_StaticFields, ___write_0)); }
	inline Action_2_t83434D1780C21F2935B5BDAC4C2874F9D742F544 * get_write_0() const { return ___write_0; }
	inline Action_2_t83434D1780C21F2935B5BDAC4C2874F9D742F544 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t83434D1780C21F2935B5BDAC4C2874F9D742F544 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.NetworkPingMessage>
struct  Writer_1_t535CE64ADF284193839F68FEFF9BA1A12FC59AF3  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t535CE64ADF284193839F68FEFF9BA1A12FC59AF3_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tB680D97115FA0B1F28A63305DFFCB7F1A9F88FB1 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t535CE64ADF284193839F68FEFF9BA1A12FC59AF3_StaticFields, ___write_0)); }
	inline Action_2_tB680D97115FA0B1F28A63305DFFCB7F1A9F88FB1 * get_write_0() const { return ___write_0; }
	inline Action_2_tB680D97115FA0B1F28A63305DFFCB7F1A9F88FB1 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tB680D97115FA0B1F28A63305DFFCB7F1A9F88FB1 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.NetworkPongMessage>
struct  Writer_1_t22A07BA35AF74EF402905B31A8158436292B30ED  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t22A07BA35AF74EF402905B31A8158436292B30ED_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t766ADD1A7C8C2168D8745606774616F292054ABE * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t22A07BA35AF74EF402905B31A8158436292B30ED_StaticFields, ___write_0)); }
	inline Action_2_t766ADD1A7C8C2168D8745606774616F292054ABE * get_write_0() const { return ___write_0; }
	inline Action_2_t766ADD1A7C8C2168D8745606774616F292054ABE ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t766ADD1A7C8C2168D8745606774616F292054ABE * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.NotReadyMessage>
struct  Writer_1_t4D5903CA49577D5BE54EB11214C0AE34D7BBD26C  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t4D5903CA49577D5BE54EB11214C0AE34D7BBD26C_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t8FF7BAABD6B3D74F5B72C10EBA66BE2E772D49D6 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t4D5903CA49577D5BE54EB11214C0AE34D7BBD26C_StaticFields, ___write_0)); }
	inline Action_2_t8FF7BAABD6B3D74F5B72C10EBA66BE2E772D49D6 * get_write_0() const { return ___write_0; }
	inline Action_2_t8FF7BAABD6B3D74F5B72C10EBA66BE2E772D49D6 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t8FF7BAABD6B3D74F5B72C10EBA66BE2E772D49D6 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Object>
struct  Writer_1_t0E7DFF7A6BF77BE48E54EA04F3D35722B4AAD445  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t0E7DFF7A6BF77BE48E54EA04F3D35722B4AAD445_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t42B3916DAAC2EBAF01DF07FDBD6877932DE57B8B * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t0E7DFF7A6BF77BE48E54EA04F3D35722B4AAD445_StaticFields, ___write_0)); }
	inline Action_2_t42B3916DAAC2EBAF01DF07FDBD6877932DE57B8B * get_write_0() const { return ___write_0; }
	inline Action_2_t42B3916DAAC2EBAF01DF07FDBD6877932DE57B8B ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t42B3916DAAC2EBAF01DF07FDBD6877932DE57B8B * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.ObjectDestroyMessage>
struct  Writer_1_t1A73150E35486CB62F7261F1A1F78849E8B0D042  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t1A73150E35486CB62F7261F1A1F78849E8B0D042_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tEB24037407A50F8480D3C9DD97B9516B2A0D25B9 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t1A73150E35486CB62F7261F1A1F78849E8B0D042_StaticFields, ___write_0)); }
	inline Action_2_tEB24037407A50F8480D3C9DD97B9516B2A0D25B9 * get_write_0() const { return ___write_0; }
	inline Action_2_tEB24037407A50F8480D3C9DD97B9516B2A0D25B9 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tEB24037407A50F8480D3C9DD97B9516B2A0D25B9 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.ObjectHideMessage>
struct  Writer_1_t9CF4AA7D870348D99425ABD745E721925CE41636  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t9CF4AA7D870348D99425ABD745E721925CE41636_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t4A2880C4D6F155F26BB53418979015EDB2534375 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t9CF4AA7D870348D99425ABD745E721925CE41636_StaticFields, ___write_0)); }
	inline Action_2_t4A2880C4D6F155F26BB53418979015EDB2534375 * get_write_0() const { return ___write_0; }
	inline Action_2_t4A2880C4D6F155F26BB53418979015EDB2534375 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t4A2880C4D6F155F26BB53418979015EDB2534375 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.ObjectSpawnFinishedMessage>
struct  Writer_1_tDDDE75E49B17635C3FED1B96E0A4C780E85A7D77  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tDDDE75E49B17635C3FED1B96E0A4C780E85A7D77_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t1F680FB9B379A0FDBFC5E7892311D7E923026358 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tDDDE75E49B17635C3FED1B96E0A4C780E85A7D77_StaticFields, ___write_0)); }
	inline Action_2_t1F680FB9B379A0FDBFC5E7892311D7E923026358 * get_write_0() const { return ___write_0; }
	inline Action_2_t1F680FB9B379A0FDBFC5E7892311D7E923026358 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t1F680FB9B379A0FDBFC5E7892311D7E923026358 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.ObjectSpawnStartedMessage>
struct  Writer_1_t68972DB064C6BF5998674584511650B183CAACDE  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t68972DB064C6BF5998674584511650B183CAACDE_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tF4D77A930B8C759D9F217E2139A50B41CDD693FF * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t68972DB064C6BF5998674584511650B183CAACDE_StaticFields, ___write_0)); }
	inline Action_2_tF4D77A930B8C759D9F217E2139A50B41CDD693FF * get_write_0() const { return ___write_0; }
	inline Action_2_tF4D77A930B8C759D9F217E2139A50B41CDD693FF ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tF4D77A930B8C759D9F217E2139A50B41CDD693FF * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Plane>
struct  Writer_1_tB69666D7BE717D00E20F499C6213D5B20A2CF993  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tB69666D7BE717D00E20F499C6213D5B20A2CF993_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tA515A444E6469FE7D36DCA796F08FF322F15B457 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tB69666D7BE717D00E20F499C6213D5B20A2CF993_StaticFields, ___write_0)); }
	inline Action_2_tA515A444E6469FE7D36DCA796F08FF322F15B457 * get_write_0() const { return ___write_0; }
	inline Action_2_tA515A444E6469FE7D36DCA796F08FF322F15B457 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tA515A444E6469FE7D36DCA796F08FF322F15B457 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Examples.MultipleMatch.PlayerInfo>
struct  Writer_1_t87DDA2D8015AA96B34970ED80AA5984FF5E3AFD7  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t87DDA2D8015AA96B34970ED80AA5984FF5E3AFD7_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tD120F789AEEE3408457B90CA0818E2032F869041 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t87DDA2D8015AA96B34970ED80AA5984FF5E3AFD7_StaticFields, ___write_0)); }
	inline Action_2_tD120F789AEEE3408457B90CA0818E2032F869041 * get_write_0() const { return ___write_0; }
	inline Action_2_tD120F789AEEE3408457B90CA0818E2032F869041 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tD120F789AEEE3408457B90CA0818E2032F869041 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Quaternion>
struct  Writer_1_t5381337CA1D8F2E2F6D94581F54C081D2DD3E945  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t5381337CA1D8F2E2F6D94581F54C081D2DD3E945_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t8DE41CE4C1FB3126AEE417C1E8019088D77C6232 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t5381337CA1D8F2E2F6D94581F54C081D2DD3E945_StaticFields, ___write_0)); }
	inline Action_2_t8DE41CE4C1FB3126AEE417C1E8019088D77C6232 * get_write_0() const { return ___write_0; }
	inline Action_2_t8DE41CE4C1FB3126AEE417C1E8019088D77C6232 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t8DE41CE4C1FB3126AEE417C1E8019088D77C6232 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Ray>
struct  Writer_1_tED3F8CBDFE6341688F6C5BA805F485023D2F4CD3  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tED3F8CBDFE6341688F6C5BA805F485023D2F4CD3_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t7E7869A9993026890A970ED24F90500F8D9A2D64 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tED3F8CBDFE6341688F6C5BA805F485023D2F4CD3_StaticFields, ___write_0)); }
	inline Action_2_t7E7869A9993026890A970ED24F90500F8D9A2D64 * get_write_0() const { return ___write_0; }
	inline Action_2_t7E7869A9993026890A970ED24F90500F8D9A2D64 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t7E7869A9993026890A970ED24F90500F8D9A2D64 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.ReadyMessage>
struct  Writer_1_t7E02983786EF70322CFD3012C6ADE19BF166B737  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t7E02983786EF70322CFD3012C6ADE19BF166B737_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t62D233D13A577CA696A917DB6FCEAF9C3B9A2DA4 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t7E02983786EF70322CFD3012C6ADE19BF166B737_StaticFields, ___write_0)); }
	inline Action_2_t62D233D13A577CA696A917DB6FCEAF9C3B9A2DA4 * get_write_0() const { return ___write_0; }
	inline Action_2_t62D233D13A577CA696A917DB6FCEAF9C3B9A2DA4 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t62D233D13A577CA696A917DB6FCEAF9C3B9A2DA4 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Rect>
struct  Writer_1_t119DD70BAA40163A7DB9418E01DD77CA502F64E4  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t119DD70BAA40163A7DB9418E01DD77CA502F64E4_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tE8BD8407D1975E5206315893612B6C8214D73A18 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t119DD70BAA40163A7DB9418E01DD77CA502F64E4_StaticFields, ___write_0)); }
	inline Action_2_tE8BD8407D1975E5206315893612B6C8214D73A18 * get_write_0() const { return ___write_0; }
	inline Action_2_tE8BD8407D1975E5206315893612B6C8214D73A18 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tE8BD8407D1975E5206315893612B6C8214D73A18 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.RpcMessage>
struct  Writer_1_t29ECC238BE9F40A401A3EA5245B481ACC90D5E55  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t29ECC238BE9F40A401A3EA5245B481ACC90D5E55_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t23DD120D884F3B807B80771416C8A68A2F6BF8D3 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t29ECC238BE9F40A401A3EA5245B481ACC90D5E55_StaticFields, ___write_0)); }
	inline Action_2_t23DD120D884F3B807B80771416C8A68A2F6BF8D3 * get_write_0() const { return ___write_0; }
	inline Action_2_t23DD120D884F3B807B80771416C8A68A2F6BF8D3 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t23DD120D884F3B807B80771416C8A68A2F6BF8D3 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.SByte>
struct  Writer_1_t68A1693F3804A746ED80DDB507B20D8C67C2723C  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t68A1693F3804A746ED80DDB507B20D8C67C2723C_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t085EA0AB386F73454B4A2B2C2F826ADAFAB971FA * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t68A1693F3804A746ED80DDB507B20D8C67C2723C_StaticFields, ___write_0)); }
	inline Action_2_t085EA0AB386F73454B4A2B2C2F826ADAFAB971FA * get_write_0() const { return ___write_0; }
	inline Action_2_t085EA0AB386F73454B4A2B2C2F826ADAFAB971FA ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t085EA0AB386F73454B4A2B2C2F826ADAFAB971FA * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.SceneMessage>
struct  Writer_1_tE4E7B4CDEDF41A88667DFEC6A6F36944765DE074  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tE4E7B4CDEDF41A88667DFEC6A6F36944765DE074_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t31975E28E395308D781F896A4BDB268F6A4BD2CF * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tE4E7B4CDEDF41A88667DFEC6A6F36944765DE074_StaticFields, ___write_0)); }
	inline Action_2_t31975E28E395308D781F896A4BDB268F6A4BD2CF * get_write_0() const { return ___write_0; }
	inline Action_2_t31975E28E395308D781F896A4BDB268F6A4BD2CF ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t31975E28E395308D781F896A4BDB268F6A4BD2CF * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Examples.MultipleMatch.ServerMatchMessage>
struct  Writer_1_t841A019E56AFED8796F4A2B8F0E23E81B2C285E9  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t841A019E56AFED8796F4A2B8F0E23E81B2C285E9_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t3ABD882F0FC020751D5CC2E5C162C05742DEAA2C * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t841A019E56AFED8796F4A2B8F0E23E81B2C285E9_StaticFields, ___write_0)); }
	inline Action_2_t3ABD882F0FC020751D5CC2E5C162C05742DEAA2C * get_write_0() const { return ___write_0; }
	inline Action_2_t3ABD882F0FC020751D5CC2E5C162C05742DEAA2C ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t3ABD882F0FC020751D5CC2E5C162C05742DEAA2C * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Discovery.ServerRequest>
struct  Writer_1_t354118B02FC01FDF484DBD73062D5434A06F5B8F  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t354118B02FC01FDF484DBD73062D5434A06F5B8F_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t6F6D337BC3B25B7903365BF8FE4CA5065EACF3AB * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t354118B02FC01FDF484DBD73062D5434A06F5B8F_StaticFields, ___write_0)); }
	inline Action_2_t6F6D337BC3B25B7903365BF8FE4CA5065EACF3AB * get_write_0() const { return ___write_0; }
	inline Action_2_t6F6D337BC3B25B7903365BF8FE4CA5065EACF3AB ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t6F6D337BC3B25B7903365BF8FE4CA5065EACF3AB * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Discovery.ServerResponse>
struct  Writer_1_tDB16178D93E60C1DA670EC1547155989AB154E64  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tDB16178D93E60C1DA670EC1547155989AB154E64_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t6882E8FBE3B5EDD20D66A60F3F9FC8E20D2453A4 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tDB16178D93E60C1DA670EC1547155989AB154E64_StaticFields, ___write_0)); }
	inline Action_2_t6882E8FBE3B5EDD20D66A60F3F9FC8E20D2453A4 * get_write_0() const { return ___write_0; }
	inline Action_2_t6882E8FBE3B5EDD20D66A60F3F9FC8E20D2453A4 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t6882E8FBE3B5EDD20D66A60F3F9FC8E20D2453A4 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Single>
struct  Writer_1_t28A96C28E7385D30393EE1C26AA0F75A46710B16  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t28A96C28E7385D30393EE1C26AA0F75A46710B16_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tFC0C91DAAA53900B09A964EDDD9DE42DF1A78AC7 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t28A96C28E7385D30393EE1C26AA0F75A46710B16_StaticFields, ___write_0)); }
	inline Action_2_tFC0C91DAAA53900B09A964EDDD9DE42DF1A78AC7 * get_write_0() const { return ___write_0; }
	inline Action_2_tFC0C91DAAA53900B09A964EDDD9DE42DF1A78AC7 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tFC0C91DAAA53900B09A964EDDD9DE42DF1A78AC7 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.SpawnMessage>
struct  Writer_1_tACE5341122A33176C173E8EF68DEF1EB63DB2F6A  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tACE5341122A33176C173E8EF68DEF1EB63DB2F6A_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t3D008DF47D7FC79BA0334D5FAC95607A63DCEFEC * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tACE5341122A33176C173E8EF68DEF1EB63DB2F6A_StaticFields, ___write_0)); }
	inline Action_2_t3D008DF47D7FC79BA0334D5FAC95607A63DCEFEC * get_write_0() const { return ___write_0; }
	inline Action_2_t3D008DF47D7FC79BA0334D5FAC95607A63DCEFEC ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t3D008DF47D7FC79BA0334D5FAC95607A63DCEFEC * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.UInt16>
struct  Writer_1_t5F6D0C95DD3F5A6DB72B13671B6E34A764BB9ABE  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t5F6D0C95DD3F5A6DB72B13671B6E34A764BB9ABE_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tA14B2F1E192EF29D817F514EA3C5482459A0D19F * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t5F6D0C95DD3F5A6DB72B13671B6E34A764BB9ABE_StaticFields, ___write_0)); }
	inline Action_2_tA14B2F1E192EF29D817F514EA3C5482459A0D19F * get_write_0() const { return ___write_0; }
	inline Action_2_tA14B2F1E192EF29D817F514EA3C5482459A0D19F ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tA14B2F1E192EF29D817F514EA3C5482459A0D19F * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.UInt16Enum>
struct  Writer_1_t3F4F5A9BB8DD86099B4A5FAB80EEA3FCE63587C3  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t3F4F5A9BB8DD86099B4A5FAB80EEA3FCE63587C3_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tCE0BC2B1F5BF76C19676981C908A710F1D184990 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t3F4F5A9BB8DD86099B4A5FAB80EEA3FCE63587C3_StaticFields, ___write_0)); }
	inline Action_2_tCE0BC2B1F5BF76C19676981C908A710F1D184990 * get_write_0() const { return ___write_0; }
	inline Action_2_tCE0BC2B1F5BF76C19676981C908A710F1D184990 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tCE0BC2B1F5BF76C19676981C908A710F1D184990 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.UInt32>
struct  Writer_1_t0BDEB84E857A72ED3B57F39D5F0B270224D3C350  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t0BDEB84E857A72ED3B57F39D5F0B270224D3C350_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tA1355C08EF96E6E0F02FB4DE8BB4DA2728223401 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t0BDEB84E857A72ED3B57F39D5F0B270224D3C350_StaticFields, ___write_0)); }
	inline Action_2_tA1355C08EF96E6E0F02FB4DE8BB4DA2728223401 * get_write_0() const { return ___write_0; }
	inline Action_2_tA1355C08EF96E6E0F02FB4DE8BB4DA2728223401 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tA1355C08EF96E6E0F02FB4DE8BB4DA2728223401 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.UInt64>
struct  Writer_1_t3CDCADC5540B25844F790553308D724F25498DEB  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t3CDCADC5540B25844F790553308D724F25498DEB_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tB350143B74E5F188F5AF606DD0B057DF2A111A0E * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t3CDCADC5540B25844F790553308D724F25498DEB_StaticFields, ___write_0)); }
	inline Action_2_tB350143B74E5F188F5AF606DD0B057DF2A111A0E * get_write_0() const { return ___write_0; }
	inline Action_2_tB350143B74E5F188F5AF606DD0B057DF2A111A0E ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tB350143B74E5F188F5AF606DD0B057DF2A111A0E * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.UpdateVarsMessage>
struct  Writer_1_t0715B02972DFC0935C9B2E48C57B51CE550E513D  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t0715B02972DFC0935C9B2E48C57B51CE550E513D_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t5A3703D259887235527744E2BD7095928D420ADD * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t0715B02972DFC0935C9B2E48C57B51CE550E513D_StaticFields, ___write_0)); }
	inline Action_2_t5A3703D259887235527744E2BD7095928D420ADD * get_write_0() const { return ___write_0; }
	inline Action_2_t5A3703D259887235527744E2BD7095928D420ADD ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t5A3703D259887235527744E2BD7095928D420ADD * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Vector2>
struct  Writer_1_tA86C54E9ABE4626DBB0C42E69D595B56E0CA25A4  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tA86C54E9ABE4626DBB0C42E69D595B56E0CA25A4_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t8CF52778C79A43BDF7F6EEA69C5EDD7FC1BAE71A * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tA86C54E9ABE4626DBB0C42E69D595B56E0CA25A4_StaticFields, ___write_0)); }
	inline Action_2_t8CF52778C79A43BDF7F6EEA69C5EDD7FC1BAE71A * get_write_0() const { return ___write_0; }
	inline Action_2_t8CF52778C79A43BDF7F6EEA69C5EDD7FC1BAE71A ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t8CF52778C79A43BDF7F6EEA69C5EDD7FC1BAE71A * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Vector2Int>
struct  Writer_1_tED8D6640942315EDE018F6B1AB30914B9C775906  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tED8D6640942315EDE018F6B1AB30914B9C775906_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t1F7B553853A3C7E0059CB4C20171C89899F30FD4 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tED8D6640942315EDE018F6B1AB30914B9C775906_StaticFields, ___write_0)); }
	inline Action_2_t1F7B553853A3C7E0059CB4C20171C89899F30FD4 * get_write_0() const { return ___write_0; }
	inline Action_2_t1F7B553853A3C7E0059CB4C20171C89899F30FD4 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t1F7B553853A3C7E0059CB4C20171C89899F30FD4 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Vector3>
struct  Writer_1_t329286E9C1ACF16856B66E5353F0F2F1FF9351E6  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t329286E9C1ACF16856B66E5353F0F2F1FF9351E6_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t7DEDA4797BBA6D349E1D5E61BF8E71AC0652161B * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t329286E9C1ACF16856B66E5353F0F2F1FF9351E6_StaticFields, ___write_0)); }
	inline Action_2_t7DEDA4797BBA6D349E1D5E61BF8E71AC0652161B * get_write_0() const { return ___write_0; }
	inline Action_2_t7DEDA4797BBA6D349E1D5E61BF8E71AC0652161B ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t7DEDA4797BBA6D349E1D5E61BF8E71AC0652161B * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Vector3Int>
struct  Writer_1_tC0CFA52D588406CAB430FECC3FE869471B5BA1AF  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tC0CFA52D588406CAB430FECC3FE869471B5BA1AF_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tB5ECA8EFF4D4711766752DC8484C46D37E81BC71 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tC0CFA52D588406CAB430FECC3FE869471B5BA1AF_StaticFields, ___write_0)); }
	inline Action_2_tB5ECA8EFF4D4711766752DC8484C46D37E81BC71 * get_write_0() const { return ___write_0; }
	inline Action_2_tB5ECA8EFF4D4711766752DC8484C46D37E81BC71 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tB5ECA8EFF4D4711766752DC8484C46D37E81BC71 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Vector4>
struct  Writer_1_tC6B9EE764A70F34B579A86D354E4A7248FD7D8DC  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tC6B9EE764A70F34B579A86D354E4A7248FD7D8DC_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tAB3708D43787E2BEB258158170A290B1B1A39C48 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tC6B9EE764A70F34B579A86D354E4A7248FD7D8DC_StaticFields, ___write_0)); }
	inline Action_2_tAB3708D43787E2BEB258158170A290B1B1A39C48 * get_write_0() const { return ___write_0; }
	inline Action_2_tAB3708D43787E2BEB258158170A290B1B1A39C48 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tAB3708D43787E2BEB258158170A290B1B1A39C48 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>
struct  Writer_1_t6A74B31480A2F8F2654851603FD585C3D7124F14  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t6A74B31480A2F8F2654851603FD585C3D7124F14_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t21F9C07D2ED276648CDFEDD9A690DD4C443D89A8 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t6A74B31480A2F8F2654851603FD585C3D7124F14_StaticFields, ___write_0)); }
	inline Action_2_t21F9C07D2ED276648CDFEDD9A690DD4C443D89A8 * get_write_0() const { return ___write_0; }
	inline Action_2_t21F9C07D2ED276648CDFEDD9A690DD4C443D89A8 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t21F9C07D2ED276648CDFEDD9A690DD4C443D89A8 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>
struct  Writer_1_t450C918501B540F3C97F704BA676EBC5E0DE27C6  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t450C918501B540F3C97F704BA676EBC5E0DE27C6_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tCA2B23619473EF0A9BE135C10D83205A3702DADE * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t450C918501B540F3C97F704BA676EBC5E0DE27C6_StaticFields, ___write_0)); }
	inline Action_2_tCA2B23619473EF0A9BE135C10D83205A3702DADE * get_write_0() const { return ___write_0; }
	inline Action_2_tCA2B23619473EF0A9BE135C10D83205A3702DADE ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tCA2B23619473EF0A9BE135C10D83205A3702DADE * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Examples.Chat.ChatNetworkManager/CreatePlayerMessage>
struct  Writer_1_t0F4903703B03DC5E0911F11D7EEA10BFD8568490  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t0F4903703B03DC5E0911F11D7EEA10BFD8568490_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t250FCA14A20FD2E6CBDE597188940ACE01AC61AC * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t0F4903703B03DC5E0911F11D7EEA10BFD8568490_StaticFields, ___write_0)); }
	inline Action_2_t250FCA14A20FD2E6CBDE597188940ACE01AC61AC * get_write_0() const { return ___write_0; }
	inline Action_2_t250FCA14A20FD2E6CBDE597188940ACE01AC61AC ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t250FCA14A20FD2E6CBDE597188940ACE01AC61AC * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_members_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_members_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_data_4)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_data_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_types_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_types_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_nameToIndex_6)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameToIndex_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_converter_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTypeName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_assemName_10), (void*)value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectType_11), (void*)value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
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
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// UnityEngine.Rendering.VolumeParameter
struct  VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Rendering.VolumeParameter::m_OverrideState
	bool ___m_OverrideState_1;

public:
	inline static int32_t get_offset_of_m_OverrideState_1() { return static_cast<int32_t>(offsetof(VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB, ___m_OverrideState_1)); }
	inline bool get_m_OverrideState_1() const { return ___m_OverrideState_1; }
	inline bool* get_address_of_m_OverrideState_1() { return &___m_OverrideState_1; }
	inline void set_m_OverrideState_1(bool value)
	{
		___m_OverrideState_1 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
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


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.Rendering.VolumeParameter`1<System.Object>
struct  VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	RuntimeObject * ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0, ___m_Value_2)); }
	inline RuntimeObject * get_m_Value_2() const { return ___m_Value_2; }
	inline RuntimeObject ** get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(RuntimeObject * value)
	{
		___m_Value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Value_2), (void*)value);
	}
};


// UnityEngine.Rendering.VolumeParameter`1<System.Single>
struct  VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	float ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7, ___m_Value_2)); }
	inline float get_m_Value_2() const { return ___m_Value_2; }
	inline float* get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(float value)
	{
		___m_Value_2 = value;
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct  WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>
struct  WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct  WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>
struct  WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3, ___source_3)); }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3, ___selector_5)); }
	inline Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * get_selector_5() const { return ___selector_5; }
	inline Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>
struct  WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC, ___source_3)); }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC, ___selector_5)); }
	inline Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,System.Int32>
struct  WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170, ___source_3)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get_source_3() const { return ___source_3; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170, ___selector_5)); }
	inline Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * get_selector_5() const { return ___selector_5; }
	inline Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,System.Object>
struct  WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153, ___source_3)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get_source_3() const { return ___source_3; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153, ___selector_5)); }
	inline Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * get_selector_5() const { return ___selector_5; }
	inline Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int32>
struct  WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7, ___selector_5)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get_selector_5() const { return ___selector_5; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct  WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>
struct  WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B, ___selector_5)); }
	inline Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * get_selector_5() const { return ___selector_5; }
	inline Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>
struct  WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E, ___selector_5)); }
	inline Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,System.Int32>
struct  WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D, ___selector_5)); }
	inline Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * get_selector_5() const { return ___selector_5; }
	inline Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,System.Object>
struct  WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6, ___selector_5)); }
	inline Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * get_selector_5() const { return ___selector_5; }
	inline Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int32>
struct  WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D, ___selector_5)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get_selector_5() const { return ___selector_5; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct  WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct  GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
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


// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// Mirror.Cloud.ListServerService.KeyValue
struct  KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4 
{
public:
	// System.String Mirror.Cloud.ListServerService.KeyValue::key
	String_t* ___key_2;
	// System.String Mirror.Cloud.ListServerService.KeyValue::value
	String_t* ___value_3;

public:
	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4, ___key_2)); }
	inline String_t* get_key_2() const { return ___key_2; }
	inline String_t** get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(String_t* value)
	{
		___key_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_2), (void*)value);
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4, ___value_3)); }
	inline String_t* get_value_3() const { return ___value_3; }
	inline String_t** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(String_t* value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Mirror.Cloud.ListServerService.KeyValue
struct KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_pinvoke
{
	char* ___key_2;
	char* ___value_3;
};
// Native definition for COM marshalling of Mirror.Cloud.ListServerService.KeyValue
struct KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4_marshaled_com
{
	Il2CppChar* ___key_2;
	Il2CppChar* ___value_3;
};

// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___list_0)); }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * get_list_0() const { return ___list_0; }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/Iterator`1<Mirror.Cloud.ListServerService.KeyValue>
struct  Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B, ___current_2)); }
	inline KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  get_current_2() const { return ___current_2; }
	inline KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___key_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___value_3), (void*)NULL);
		#endif
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>
struct  VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7, ___m_Value_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Value_2() const { return ___m_Value_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>
struct  VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F, ___m_Value_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Value_2() const { return ___m_Value_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>
struct  VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C, ___m_Value_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_Value_2() const { return ___m_Value_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_Value_2 = value;
	}
};


// System.WeakReference`1<System.Object>
struct  WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.GCHandle System.WeakReference`1::handle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___handle_0;
	// System.Boolean System.WeakReference`1::trackResurrection
	bool ___trackResurrection_1;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76, ___handle_0)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_handle_0() const { return ___handle_0; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_trackResurrection_1() { return static_cast<int32_t>(offsetof(WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76, ___trackResurrection_1)); }
	inline bool get_trackResurrection_1() const { return ___trackResurrection_1; }
	inline bool* get_address_of_trackResurrection_1() { return &___trackResurrection_1; }
	inline void set_trackResurrection_1(bool value)
	{
		___trackResurrection_1 = value;
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct  WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___enumerator_5)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>
struct  WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6, ___selector_5)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get_selector_5() const { return ___selector_5; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct  WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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
struct  Exception_t  : public RuntimeObject
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

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.Examples.MultipleMatch.PlayerInfo
struct  PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6 
{
public:
	// System.Int32 Mirror.Examples.MultipleMatch.PlayerInfo::playerIndex
	int32_t ___playerIndex_0;
	// System.Boolean Mirror.Examples.MultipleMatch.PlayerInfo::ready
	bool ___ready_1;
	// System.Guid Mirror.Examples.MultipleMatch.PlayerInfo::matchId
	Guid_t  ___matchId_2;

public:
	inline static int32_t get_offset_of_playerIndex_0() { return static_cast<int32_t>(offsetof(PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6, ___playerIndex_0)); }
	inline int32_t get_playerIndex_0() const { return ___playerIndex_0; }
	inline int32_t* get_address_of_playerIndex_0() { return &___playerIndex_0; }
	inline void set_playerIndex_0(int32_t value)
	{
		___playerIndex_0 = value;
	}

	inline static int32_t get_offset_of_ready_1() { return static_cast<int32_t>(offsetof(PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6, ___ready_1)); }
	inline bool get_ready_1() const { return ___ready_1; }
	inline bool* get_address_of_ready_1() { return &___ready_1; }
	inline void set_ready_1(bool value)
	{
		___ready_1 = value;
	}

	inline static int32_t get_offset_of_matchId_2() { return static_cast<int32_t>(offsetof(PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6, ___matchId_2)); }
	inline Guid_t  get_matchId_2() const { return ___matchId_2; }
	inline Guid_t * get_address_of_matchId_2() { return &___matchId_2; }
	inline void set_matchId_2(Guid_t  value)
	{
		___matchId_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Mirror.Examples.MultipleMatch.PlayerInfo
struct PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6_marshaled_pinvoke
{
	int32_t ___playerIndex_0;
	int32_t ___ready_1;
	Guid_t  ___matchId_2;
};
// Native definition for COM marshalling of Mirror.Examples.MultipleMatch.PlayerInfo
struct PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6_marshaled_com
{
	int32_t ___playerIndex_0;
	int32_t ___ready_1;
	Guid_t  ___matchId_2;
};

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Int32Enum>
struct  Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___list_0)); }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * get_list_0() const { return ___list_0; }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<System.Int32Enum>
struct  Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	int32_t ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9, ___current_2)); }
	inline int32_t get_current_2() const { return ___current_2; }
	inline int32_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int32_t value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>
struct  Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F, ___current_2)); }
	inline PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  get_current_2() const { return ___current_2; }
	inline PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  value)
	{
		___current_2 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>
struct  KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<Mirror.Cloud.ListServerService.KeyValue>
struct  WhereEnumerableIterator_1_t5916DAE089C894458C6EEF85DDDD344556850B2C  : public Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t5916DAE089C894458C6EEF85DDDD344556850B2C, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t5916DAE089C894458C6EEF85DDDD344556850B2C, ___predicate_4)); }
	inline Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t5916DAE089C894458C6EEF85DDDD344556850B2C, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Mirror.Cloud.ListServerService.KeyValue>
struct  WhereSelectArrayIterator_2_t18B98FB6D8A55729A5F71CB271D10EFBB890F32E  : public Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t18B98FB6D8A55729A5F71CB271D10EFBB890F32E, ___source_3)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t18B98FB6D8A55729A5F71CB271D10EFBB890F32E, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t18B98FB6D8A55729A5F71CB271D10EFBB890F32E, ___selector_5)); }
	inline Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t18B98FB6D8A55729A5F71CB271D10EFBB890F32E, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Mirror.Cloud.ListServerService.KeyValue>
struct  WhereSelectEnumerableIterator_2_tED1D0ABEBF2FF958A01724580E97848AF9F7FDEB  : public Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tED1D0ABEBF2FF958A01724580E97848AF9F7FDEB, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tED1D0ABEBF2FF958A01724580E97848AF9F7FDEB, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tED1D0ABEBF2FF958A01724580E97848AF9F7FDEB, ___selector_5)); }
	inline Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tED1D0ABEBF2FF958A01724580E97848AF9F7FDEB, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Mirror.Cloud.ListServerService.KeyValue>
struct  WhereSelectListIterator_2_t124829D22185377A9F8EFF28BA043615AAAF36B9  : public Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t124829D22185377A9F8EFF28BA043615AAAF36B9, ___source_3)); }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * get_source_3() const { return ___source_3; }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t124829D22185377A9F8EFF28BA043615AAAF36B9, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t124829D22185377A9F8EFF28BA043615AAAF36B9, ___selector_5)); }
	inline Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t124829D22185377A9F8EFF28BA043615AAAF36B9, ___enumerator_6)); }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct  Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90, ___list_0)); }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * get_list_0() const { return ___list_0; }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90, ___current_3)); }
	inline KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Boolean>
struct  Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>
struct  Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>
struct  Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,Mirror.Examples.MultipleMatch.PlayerInfo>
struct  Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct  Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Mirror.Cloud.ListServerService.KeyValue>
struct  Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32,System.Boolean>
struct  Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32Enum,System.Boolean>
struct  Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32Enum,System.Int32>
struct  Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32Enum,System.Object>
struct  Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32Enum,Mirror.Examples.MultipleMatch.PlayerInfo>
struct  Func_2_tD2EAA8713F02253D8C278A66ED02921665957711  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.Cloud.ListServerService.KeyValue,System.Boolean>
struct  Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Boolean>
struct  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Int32>
struct  Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct  Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>
struct  Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.Examples.MultipleMatch.PlayerInfo,System.Boolean>
struct  Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18  : public MulticastDelegate_t
{
public:

public:
};


// System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct  Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC, ___current_2)); }
	inline KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  get_current_2() const { return ___current_2; }
	inline KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___value_1), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Int32Enum>
struct  WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7  : public Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7, ___source_3)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get_source_3() const { return ___source_3; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32Enum>
struct  WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23  : public Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>
struct  WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8  : public Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8, ___predicate_4)); }
	inline Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.Int32Enum>
struct  WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B  : public Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B, ___source_3)); }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * get_source_3() const { return ___source_3; }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B, ___enumerator_5)); }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,Mirror.Examples.MultipleMatch.PlayerInfo>
struct  WhereSelectArrayIterator_2_tB2C742F819D4103B68DB1E2D3F459CAB70002C2B  : public Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB2C742F819D4103B68DB1E2D3F459CAB70002C2B, ___source_3)); }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB2C742F819D4103B68DB1E2D3F459CAB70002C2B, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB2C742F819D4103B68DB1E2D3F459CAB70002C2B, ___selector_5)); }
	inline Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB2C742F819D4103B68DB1E2D3F459CAB70002C2B, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,Mirror.Examples.MultipleMatch.PlayerInfo>
struct  WhereSelectArrayIterator_2_t26548A85DB592AAC9C15A71C4D15AC2825D13691  : public Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t26548A85DB592AAC9C15A71C4D15AC2825D13691, ___source_3)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get_source_3() const { return ___source_3; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t26548A85DB592AAC9C15A71C4D15AC2825D13691, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t26548A85DB592AAC9C15A71C4D15AC2825D13691, ___selector_5)); }
	inline Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t26548A85DB592AAC9C15A71C4D15AC2825D13691, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>
struct  WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213  : public Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213, ___selector_5)); }
	inline Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * get_selector_5() const { return ___selector_5; }
	inline Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,Mirror.Examples.MultipleMatch.PlayerInfo>
struct  WhereSelectEnumerableIterator_2_tF3AAEF187BDED068096DE611AD3F194A6480C337  : public Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tF3AAEF187BDED068096DE611AD3F194A6480C337, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tF3AAEF187BDED068096DE611AD3F194A6480C337, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tF3AAEF187BDED068096DE611AD3F194A6480C337, ___selector_5)); }
	inline Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tF3AAEF187BDED068096DE611AD3F194A6480C337, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,Mirror.Examples.MultipleMatch.PlayerInfo>
struct  WhereSelectEnumerableIterator_2_t377F90D7422506FEF13EF536EE4C77A5FE93AFA2  : public Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t377F90D7422506FEF13EF536EE4C77A5FE93AFA2, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t377F90D7422506FEF13EF536EE4C77A5FE93AFA2, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t377F90D7422506FEF13EF536EE4C77A5FE93AFA2, ___selector_5)); }
	inline Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t377F90D7422506FEF13EF536EE4C77A5FE93AFA2, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>
struct  WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116  : public Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116, ___selector_5)); }
	inline Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * get_selector_5() const { return ___selector_5; }
	inline Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Int32>
struct  WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB, ___source_3)); }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * get_source_3() const { return ___source_3; }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB, ___selector_5)); }
	inline Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * get_selector_5() const { return ___selector_5; }
	inline Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB, ___enumerator_6)); }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Object>
struct  WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8, ___source_3)); }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * get_source_3() const { return ___source_3; }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8, ___selector_5)); }
	inline Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * get_selector_5() const { return ___selector_5; }
	inline Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8, ___enumerator_6)); }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,Mirror.Examples.MultipleMatch.PlayerInfo>
struct  WhereSelectListIterator_2_t4048170DFAF3C66F5F9ABA4F767418179F7FB0D0  : public Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t4048170DFAF3C66F5F9ABA4F767418179F7FB0D0, ___source_3)); }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * get_source_3() const { return ___source_3; }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t4048170DFAF3C66F5F9ABA4F767418179F7FB0D0, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t4048170DFAF3C66F5F9ABA4F767418179F7FB0D0, ___selector_5)); }
	inline Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t4048170DFAF3C66F5F9ABA4F767418179F7FB0D0, ___enumerator_6)); }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>
struct  WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139  : public Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139, ___selector_5)); }
	inline Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * get_selector_5() const { return ___selector_5; }
	inline Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
	}
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct  WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00  : public Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00, ___source_3)); }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct  WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3  : public Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct  WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C  : public Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C, ___source_3)); }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * get_source_3() const { return ___source_3; }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C, ___enumerator_5)); }
	inline Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_5))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>
struct  WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206, ___source_3)); }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * get_source_3() const { return ___source_3; }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206, ___selector_5)); }
	inline Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * get_selector_5() const { return ___selector_5; }
	inline Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206, ___enumerator_6)); }
	inline Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>
struct  WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5, ___source_3)); }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * get_source_3() const { return ___source_3; }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5, ___selector_5)); }
	inline Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5, ___enumerator_6)); }
	inline Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,Mirror.Examples.MultipleMatch.PlayerInfo>
struct  WhereSelectListIterator_2_tC5715C08EF4B0C26C43D8EFE4EC6DF00DE343471  : public Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tC5715C08EF4B0C26C43D8EFE4EC6DF00DE343471, ___source_3)); }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * get_source_3() const { return ___source_3; }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tC5715C08EF4B0C26C43D8EFE4EC6DF00DE343471, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tC5715C08EF4B0C26C43D8EFE4EC6DF00DE343471, ___selector_5)); }
	inline Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tC5715C08EF4B0C26C43D8EFE4EC6DF00DE343471, ___enumerator_6)); }
	inline Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>[]
struct KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  m_Items[1];

public:
	inline KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
	inline KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
};
// System.Int32Enum[]
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
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
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  m_Items[1];

public:
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};


// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  Enumerator_get_Current_m506A69CB2171FCCF5B63CD09DF4ADB53A9184464_gshared_inline (Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mEDD63BEF27E5F1D2EBDF0E8D6C8F1AAA94118864_gshared (Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mDD503AFD786235D3B40842B0872AC17DC86EB040_gshared_inline (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mDECBD2FBFA44578D8E050CECB33BF350152E111A_gshared (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_gshared_inline (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67_gshared (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Rendering.VolumeParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter__ctor_m0F5E882EFAE8F1B7AE0DFF62945878D71CA63D54 (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method);
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411 (bool* __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9 (float* __this, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m94AA41817D00A9347BD3565F6BB8993361B81EB1 (float* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_m9A5DD8406289F38806CC42C394E324C1C2AB3732 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2_Equals_m67A842D914AA5A4DCC076E9EA20019925E6A85A0 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_m9F18401DA6025110A012F55BBB5ACABD36FA9A0A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_Equals_m210CB160B594355581D44D4B87CF3D3994ABFED0 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector4::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_mCA7B312F8CA141F6F25BABDDF406F3D2BDD5E895 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4_Equals_m71D14F39651C3FBEDE17214455DFA727921F07AA (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfo_GetBoolean_m705ADACFB52D6385DDB6B2525C1979ECBE6D5849 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, Type_t * ___type1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::get_Current()
inline KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  Enumerator_get_Current_m506A69CB2171FCCF5B63CD09DF4ADB53A9184464_inline (Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  (*) (Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *, const RuntimeMethod*))Enumerator_get_Current_m506A69CB2171FCCF5B63CD09DF4ADB53A9184464_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::MoveNext()
inline bool Enumerator_MoveNext_mEDD63BEF27E5F1D2EBDF0E8D6C8F1AAA94118864 (Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *, const RuntimeMethod*))Enumerator_MoveNext_mEDD63BEF27E5F1D2EBDF0E8D6C8F1AAA94118864_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::get_Current()
inline int32_t Enumerator_get_Current_mDD503AFD786235D3B40842B0872AC17DC86EB040_inline (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *, const RuntimeMethod*))Enumerator_get_Current_mDD503AFD786235D3B40842B0872AC17DC86EB040_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::MoveNext()
inline bool Enumerator_MoveNext_mDECBD2FBFA44578D8E050CECB33BF350152E111A (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *, const RuntimeMethod*))Enumerator_MoveNext_mDECBD2FBFA44578D8E050CECB33BF350152E111A_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_inline (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  (*) (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *, const RuntimeMethod*))Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
inline bool Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67 (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *, const RuntimeMethod*))Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T UnityEngine.Rendering.VolumeParameter`1<System.Object>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VolumeParameter_1_get_value_mE65E2B7A36089C5900E6CC6939A0765AE7E18610_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * __this, const RuntimeMethod* method)
{
	{
		// get => m_Value;
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Value_2();
		return (RuntimeObject *)L_0;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Object>::set_value(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_mD0E8FA4757B4E751ADEEFF7FBFC917E6A11A5A22_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// set => m_Value = value;
		RuntimeObject * L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mB65184A34C60C6DB7175928E9C8C86AB15E3B751_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// : this(default, false)
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_0 = V_0;
		NullCheck((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this);
		((  void (*) (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *, RuntimeObject *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this, (RuntimeObject *)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Object>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m568F98FCF5CE4693885678BF2F5D3F94760E1E78_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * __this, RuntimeObject * ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		// protected VolumeParameter(T value, bool overrideState)
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VolumeParameter__ctor_m0F5E882EFAE8F1B7AE0DFF62945878D71CA63D54((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, /*hidden argument*/NULL);
		// m_Value = value;
		RuntimeObject * L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		// this.overrideState = overrideState;
		bool L_1 = ___overrideState1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Object>::Interp(UnityEngine.Rendering.VolumeParameter,UnityEngine.Rendering.VolumeParameter,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m153C97DEC262ECFA05726BDCD61045B1DDB7BEE9_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___from0, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		// Interp(from.GetValue<T>(), to.GetValue<T>(), t);
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___from0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_2 = ___to1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2);
		RuntimeObject * L_3;
		L_3 = ((  RuntimeObject * (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this);
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, float >::Invoke(14 /* System.Void UnityEngine.Rendering.VolumeParameter`1<System.Object>::Interp(T,T,System.Single) */, (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this, (RuntimeObject *)L_1, (RuntimeObject *)L_3, (float)L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Object>::Interp(T,T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m6E102B7FCADF33F4E90B71C9EB029A94AF3349E4_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * __this, RuntimeObject * ___from0, RuntimeObject * ___to1, float ___t2, const RuntimeMethod* method)
{
	VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * G_B2_0 = NULL;
	VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * G_B1_0 = NULL;
	RuntimeObject * G_B3_0 = NULL;
	VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * G_B3_1 = NULL;
	{
		// m_Value = t > 0f ? to : from;
		float L_0 = ___t2;
		G_B1_0 = ((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)(__this));
			goto IL_000c;
		}
	}
	{
		RuntimeObject * L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		RuntimeObject * L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)(G_B2_0));
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_Value_2(G_B3_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Object>::Override(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_m0A117F79C518E97F3BE2C7101CC40072E6BC853B_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * __this, RuntimeObject * ___x0, const RuntimeMethod* method)
{
	{
		// overrideState = true;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)1);
		// m_Value = x;
		RuntimeObject * L_0 = ___x0;
		__this->set_m_Value_2(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Object>::SetValue(UnityEngine.Rendering.VolumeParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_m429A4BD58295726ADFD93F4A0FD6F1AAAC1D8DA2_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___parameter0, const RuntimeMethod* method)
{
	{
		// m_Value = parameter.GetValue<T>();
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___parameter0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_Value_2(L_1);
		// }
		return;
	}
}
// System.Int32 UnityEngine.Rendering.VolumeParameter`1<System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_mFCB61FBFD813B341AAD95664777C561E4585CAD5_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	{
		// int hash = 17;
		V_0 = (int32_t)((int32_t)17);
		// hash = hash * 23 + overrideState.GetHashCode();
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		V_1 = (bool)L_1;
		int32_t L_2;
		L_2 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		// if (!EqualityComparer<T>.Default.Equals(value, default)) // Catches null for references with boxing of value types
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_3;
		L_3 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		NullCheck((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this);
		RuntimeObject * L_4;
		L_4 = VirtFuncInvoker0< RuntimeObject * >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Object>::get_value() */, (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this);
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_5 = V_2;
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_3);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		// hash = hash * 23 + value.GetHashCode();
		int32_t L_7 = V_0;
		NullCheck((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this);
		RuntimeObject * L_8;
		L_8 = VirtFuncInvoker0< RuntimeObject * >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Object>::get_value() */, (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this);
		V_2 = (RuntimeObject *)L_8;
		NullCheck((RuntimeObject *)(V_2));
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(V_2));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)((int32_t)23))), (int32_t)L_9));
	}

IL_004c:
	{
		// return hash;
		int32_t L_10 = V_0;
		return (int32_t)L_10;
	}
}
// System.String UnityEngine.Rendering.VolumeParameter`1<System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_m98DEF918D3848ED5AF582300AA707E816743AF66_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"{value} ({overrideState})";
		NullCheck((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this);
		RuntimeObject * L_0;
		L_0 = VirtFuncInvoker0< RuntimeObject * >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Object>::get_value() */, (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this);
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_2 = L_1;
		RuntimeObject * L_3 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, (RuntimeObject *)L_0, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		return (String_t*)L_4;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<System.Object>::op_Equality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m786AC30A22D485466D5D38A6DC54203621DA8142_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * ___lhs0, RuntimeObject * ___rhs1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// public static bool operator==(VolumeParameter<T> lhs, T rhs) => lhs != null && !ReferenceEquals(lhs.value, null) && lhs.value.Equals(rhs);
		VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * L_0 = ___lhs0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * L_1 = ___lhs0;
		NullCheck((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)L_1);
		RuntimeObject * L_2;
		L_2 = VirtFuncInvoker0< RuntimeObject * >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Object>::get_value() */, (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)L_1);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * L_3 = ___lhs0;
		NullCheck((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)L_3);
		RuntimeObject * L_4;
		L_4 = VirtFuncInvoker0< RuntimeObject * >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Object>::get_value() */, (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)L_3);
		V_0 = (RuntimeObject *)L_4;
		RuntimeObject * L_5 = ___rhs1;
		NullCheck((RuntimeObject *)(V_0));
		bool L_6;
		L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)(V_0), (RuntimeObject *)L_5);
		return (bool)L_6;
	}

IL_002b:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<System.Object>::op_Inequality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_m6B249A4ED1C3BC3BC82780D4D159C1606CE613F5_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * ___lhs0, RuntimeObject * ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator!=(VolumeParameter<T> lhs, T rhs) => !(lhs == rhs);
		VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * L_0 = ___lhs0;
		RuntimeObject * L_1 = ___rhs1;
		bool L_2;
		L_2 = ((  bool (*) (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<System.Object>::Equals(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m3E71487399AF0F166D8A1E689B968C6EE8702DAC_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * __this, VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * ___other0, const RuntimeMethod* method)
{
	{
		// if (ReferenceEquals(null, other))
		VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, other))
		VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * L_1 = ___other0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this) == ((RuntimeObject*)(VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// return EqualityComparer<T>.Default.Equals(m_Value, other.m_Value);
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_2;
		L_2 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		RuntimeObject * L_3 = (RuntimeObject *)__this->get_m_Value_2();
		VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * L_4 = ___other0;
		NullCheck(L_4);
		RuntimeObject * L_5 = (RuntimeObject *)L_4->get_m_Value_2();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_2);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_2, (RuntimeObject *)L_3, (RuntimeObject *)L_5);
		return (bool)L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m43533DA3167983D9D59102963A9256B1B32E87F3_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj))
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj))
		RuntimeObject * L_1 = ___obj0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (obj.GetType() != GetType())
		RuntimeObject * L_2 = ___obj0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)__this);
		Type_t * L_4;
		L_4 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_3, (Type_t *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals((VolumeParameter<T>)obj);
		RuntimeObject * L_6 = ___obj0;
		NullCheck((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this);
		bool L_7;
		L_7 = ((  bool (*) (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *, VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this, (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (bool)L_7;
	}
}
// T UnityEngine.Rendering.VolumeParameter`1<System.Object>::op_Explicit(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VolumeParameter_1_op_Explicit_m1038E6089685A688180DD20373DAC79B240EC104_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * ___prop0, const RuntimeMethod* method)
{
	{
		// public static explicit operator T(VolumeParameter<T> prop) => prop.m_Value;
		VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * L_0 = ___prop0;
		NullCheck(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)L_0->get_m_Value_2();
		return (RuntimeObject *)L_1;
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
// T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VolumeParameter_1_get_value_mE65BB62B1CDB9AC51F677613A6AC89579269FD6B_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * __this, const RuntimeMethod* method)
{
	{
		// get => m_Value;
		float L_0 = (float)__this->get_m_Value_2();
		return (float)L_0;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Single>::set_value(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_mE9E76837EC3E3273CB3DAF7849C80B3F1929D51C_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => m_Value = value;
		float L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mBEF459F8B4ADBA28FF6DB59591F77496245A2F89_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// : this(default, false)
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_0 = V_0;
		NullCheck((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this);
		((  void (*) (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *, float, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this, (float)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Single>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m9388D8BBE0345E067BE973DBC40EF667B21035AC_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * __this, float ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		// protected VolumeParameter(T value, bool overrideState)
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VolumeParameter__ctor_m0F5E882EFAE8F1B7AE0DFF62945878D71CA63D54((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, /*hidden argument*/NULL);
		// m_Value = value;
		float L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		// this.overrideState = overrideState;
		bool L_1 = ___overrideState1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Single>::Interp(UnityEngine.Rendering.VolumeParameter,UnityEngine.Rendering.VolumeParameter,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m74F6A9A7D450447087107C3ABF028E88B27970F4_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___from0, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		// Interp(from.GetValue<T>(), to.GetValue<T>(), t);
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___from0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		float L_1;
		L_1 = ((  float (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_2 = ___to1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2);
		float L_3;
		L_3 = ((  float (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this);
		VirtActionInvoker3< float, float, float >::Invoke(14 /* System.Void UnityEngine.Rendering.VolumeParameter`1<System.Single>::Interp(T,T,System.Single) */, (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this, (float)L_1, (float)L_3, (float)L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Single>::Interp(T,T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_mE3BDAA88E4F5097F27079893DB8C21E4CE3B019D_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * __this, float ___from0, float ___to1, float ___t2, const RuntimeMethod* method)
{
	VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * G_B2_0 = NULL;
	VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * G_B3_1 = NULL;
	{
		// m_Value = t > 0f ? to : from;
		float L_0 = ___t2;
		G_B1_0 = ((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)(__this));
			goto IL_000c;
		}
	}
	{
		float L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		float L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)(G_B2_0));
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_Value_2(G_B3_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Single>::Override(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_m2C542C9C6D00DE2C56B40529B66F5955032AD2C3_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * __this, float ___x0, const RuntimeMethod* method)
{
	{
		// overrideState = true;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)1);
		// m_Value = x;
		float L_0 = ___x0;
		__this->set_m_Value_2(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Single>::SetValue(UnityEngine.Rendering.VolumeParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_m45C1D4E723B126F1C19A5FB267143E471B71F020_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___parameter0, const RuntimeMethod* method)
{
	{
		// m_Value = parameter.GetValue<T>();
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___parameter0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		float L_1;
		L_1 = ((  float (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_Value_2(L_1);
		// }
		return;
	}
}
// System.Int32 UnityEngine.Rendering.VolumeParameter`1<System.Single>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_m20049225D5D48AC8488B575D0C55A4D8C77E22C5_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		// int hash = 17;
		V_0 = (int32_t)((int32_t)17);
		// hash = hash * 23 + overrideState.GetHashCode();
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		V_1 = (bool)L_1;
		int32_t L_2;
		L_2 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		// if (!EqualityComparer<T>.Default.Equals(value, default)) // Catches null for references with boxing of value types
		EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * L_3;
		L_3 = ((  EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		NullCheck((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this);
		float L_4;
		L_4 = VirtFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this);
		il2cpp_codegen_initobj((&V_2), sizeof(float));
		float L_5 = V_2;
		NullCheck((EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F *)L_3);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, float, float >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Single>::Equals(!0,!0) */, (EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F *)L_3, (float)L_4, (float)L_5);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		// hash = hash * 23 + value.GetHashCode();
		int32_t L_7 = V_0;
		NullCheck((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this);
		float L_8;
		L_8 = VirtFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this);
		V_2 = (float)L_8;
		int32_t L_9;
		L_9 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)(float*)(&V_2), /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)((int32_t)23))), (int32_t)L_9));
	}

IL_004c:
	{
		// return hash;
		int32_t L_10 = V_0;
		return (int32_t)L_10;
	}
}
// System.String UnityEngine.Rendering.VolumeParameter`1<System.Single>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_mF22D6B5BA00E0341023E67CE6DE6F2CEF402846D_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"{value} ({overrideState})";
		NullCheck((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this);
		float L_0;
		L_0 = VirtFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this);
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_1);
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, (RuntimeObject *)L_2, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		return (String_t*)L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<System.Single>::op_Equality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_mE98D231AFBB47C57BF307778505C205CD254A4D3_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * ___lhs0, float ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public static bool operator==(VolumeParameter<T> lhs, T rhs) => lhs != null && !ReferenceEquals(lhs.value, null) && lhs.value.Equals(rhs);
		VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * L_0 = ___lhs0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * L_1 = ___lhs0;
		NullCheck((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)L_1);
		float L_2;
		L_2 = VirtFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)L_1);
	}
	{
		VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * L_3 = ___lhs0;
		NullCheck((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)L_3);
		float L_4;
		L_4 = VirtFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)L_3);
		V_0 = (float)L_4;
		float L_5 = ___rhs1;
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7), &L_6);
		bool L_8;
		L_8 = Single_Equals_m94AA41817D00A9347BD3565F6BB8993361B81EB1((float*)(float*)(&V_0), (RuntimeObject *)L_7, /*hidden argument*/NULL);
		return (bool)L_8;
	}

IL_002b:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<System.Single>::op_Inequality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_m97786AB4554649425964FD50184021748017459E_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * ___lhs0, float ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator!=(VolumeParameter<T> lhs, T rhs) => !(lhs == rhs);
		VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * L_0 = ___lhs0;
		float L_1 = ___rhs1;
		bool L_2;
		L_2 = ((  bool (*) (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<System.Single>::Equals(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m83BCF88BE9EF7A5DEF3FF8209A9AA068874BAE25_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * __this, VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * ___other0, const RuntimeMethod* method)
{
	{
		// if (ReferenceEquals(null, other))
		VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, other))
		VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * L_1 = ___other0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this) == ((RuntimeObject*)(VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// return EqualityComparer<T>.Default.Equals(m_Value, other.m_Value);
		EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * L_2;
		L_2 = ((  EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		float L_3 = (float)__this->get_m_Value_2();
		VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * L_4 = ___other0;
		NullCheck(L_4);
		float L_5 = (float)L_4->get_m_Value_2();
		NullCheck((EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F *)L_2);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, float, float >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Single>::Equals(!0,!0) */, (EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F *)L_2, (float)L_3, (float)L_5);
		return (bool)L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<System.Single>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m8FCF4CD51C849EC469EDDDEA30F81B3C0CC0A69F_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj))
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj))
		RuntimeObject * L_1 = ___obj0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (obj.GetType() != GetType())
		RuntimeObject * L_2 = ___obj0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)__this);
		Type_t * L_4;
		L_4 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_3, (Type_t *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals((VolumeParameter<T>)obj);
		RuntimeObject * L_6 = ___obj0;
		NullCheck((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this);
		bool L_7;
		L_7 = ((  bool (*) (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *, VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this, (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (bool)L_7;
	}
}
// T UnityEngine.Rendering.VolumeParameter`1<System.Single>::op_Explicit(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VolumeParameter_1_op_Explicit_m488724D949156654B906ED61056D6E8197C020A2_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * ___prop0, const RuntimeMethod* method)
{
	{
		// public static explicit operator T(VolumeParameter<T> prop) => prop.m_Value;
		VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * L_0 = ___prop0;
		NullCheck(L_0);
		float L_1 = (float)L_0->get_m_Value_2();
		return (float)L_1;
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
// T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  VolumeParameter_1_get_value_m7DD26F8D47DDB2B92ED4DC40B30E31D9FE0ED3D5_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * __this, const RuntimeMethod* method)
{
	{
		// get => m_Value;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )__this->get_m_Value_2();
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_0;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::set_value(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_m713DB2249619116159C9470F79ADC60615FDCA32_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// set => m_Value = value;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mE4A4AAE761BF96FF1AF03A491B449B3933A01F7B_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// : this(default, false)
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = V_0;
		NullCheck((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this);
		((  void (*) (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mB52103D1F81AA55DA4B112171931EA0CE7CC635E_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		// protected VolumeParameter(T value, bool overrideState)
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VolumeParameter__ctor_m0F5E882EFAE8F1B7AE0DFF62945878D71CA63D54((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, /*hidden argument*/NULL);
		// m_Value = value;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		// this.overrideState = overrideState;
		bool L_1 = ___overrideState1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::Interp(UnityEngine.Rendering.VolumeParameter,UnityEngine.Rendering.VolumeParameter,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_mDF4558E944EAA8F36B5AAA49113A6B8316033D93_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___from0, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		// Interp(from.GetValue<T>(), to.GetValue<T>(), t);
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___from0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_2 = ___to1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this);
		VirtActionInvoker3< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , float >::Invoke(14 /* System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::Interp(T,T,System.Single) */, (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_1, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_3, (float)L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::Interp(T,T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_mB30FF2C03DE380C289E36F4DD6F92E4F0C306A14_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___from0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___to1, float ___t2, const RuntimeMethod* method)
{
	VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * G_B2_0 = NULL;
	VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * G_B1_0 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * G_B3_1 = NULL;
	{
		// m_Value = t > 0f ? to : from;
		float L_0 = ___t2;
		G_B1_0 = ((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)(__this));
			goto IL_000c;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)(G_B2_0));
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_Value_2(G_B3_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::Override(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_m8AF26DC0CE8D1D57985EBFCCE314E3EC57EA6D1A_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___x0, const RuntimeMethod* method)
{
	{
		// overrideState = true;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)1);
		// m_Value = x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___x0;
		__this->set_m_Value_2(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::SetValue(UnityEngine.Rendering.VolumeParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_mBB5BEC3ECF0A51BE89A05B6C1D78C63453A5E4FF_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___parameter0, const RuntimeMethod* method)
{
	{
		// m_Value = parameter.GetValue<T>();
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___parameter0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_Value_2(L_1);
		// }
		return;
	}
}
// System.Int32 UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_mCF169E9F80762BF8A1E42C54B1FA2C0D6AA5C4F7_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int hash = 17;
		V_0 = (int32_t)((int32_t)17);
		// hash = hash * 23 + overrideState.GetHashCode();
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		V_1 = (bool)L_1;
		int32_t L_2;
		L_2 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		// if (!EqualityComparer<T>.Default.Equals(value, default)) // Catches null for references with boxing of value types
		EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09 * L_3;
		L_3 = ((  EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		NullCheck((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = VirtFuncInvoker0< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::get_value() */, (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this);
		il2cpp_codegen_initobj((&V_2), sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_2;
		NullCheck((EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09 *)L_3);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::Equals(!0,!0) */, (EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09 *)L_3, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_4, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_5);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		// hash = hash * 23 + value.GetHashCode();
		int32_t L_7 = V_0;
		NullCheck((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = VirtFuncInvoker0< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::get_value() */, (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this);
		V_2 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_8;
		int32_t L_9;
		L_9 = Vector2_GetHashCode_m9A5DD8406289F38806CC42C394E324C1C2AB3732((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)((int32_t)23))), (int32_t)L_9));
	}

IL_004c:
	{
		// return hash;
		int32_t L_10 = V_0;
		return (int32_t)L_10;
	}
}
// System.String UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_mE9E79D94F86F79CE0B3D50E47132499AF12ED674_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"{value} ({overrideState})";
		NullCheck((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = VirtFuncInvoker0< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::get_value() */, (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_1);
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, (RuntimeObject *)L_2, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		return (String_t*)L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::op_Equality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m122686C553098A9D2A1E4D6CD4612C2B408D259C_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static bool operator==(VolumeParameter<T> lhs, T rhs) => lhs != null && !ReferenceEquals(lhs.value, null) && lhs.value.Equals(rhs);
		VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * L_0 = ___lhs0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * L_1 = ___lhs0;
		NullCheck((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = VirtFuncInvoker0< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::get_value() */, (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)L_1);
	}
	{
		VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * L_3 = ___lhs0;
		NullCheck((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = VirtFuncInvoker0< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::get_value() */, (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)L_3);
		V_0 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___rhs1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = L_5;
		RuntimeObject * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7), &L_6);
		bool L_8;
		L_8 = Vector2_Equals_m67A842D914AA5A4DCC076E9EA20019925E6A85A0((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), (RuntimeObject *)L_7, /*hidden argument*/NULL);
		return (bool)L_8;
	}

IL_002b:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::op_Inequality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_mF5351020BA475F25487B6424851368193DCBE27D_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator!=(VolumeParameter<T> lhs, T rhs) => !(lhs == rhs);
		VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * L_0 = ___lhs0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___rhs1;
		bool L_2;
		L_2 = ((  bool (*) (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)L_0, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::Equals(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m0DA25D290A4E860B65E3CCA55B7C08F02AA3DB41_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * __this, VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * ___other0, const RuntimeMethod* method)
{
	{
		// if (ReferenceEquals(null, other))
		VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, other))
		VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * L_1 = ___other0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this) == ((RuntimeObject*)(VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// return EqualityComparer<T>.Default.Equals(m_Value, other.m_Value);
		EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09 * L_2;
		L_2 = ((  EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )__this->get_m_Value_2();
		VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * L_4 = ___other0;
		NullCheck(L_4);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_4->get_m_Value_2();
		NullCheck((EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09 *)L_2);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::Equals(!0,!0) */, (EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09 *)L_2, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_3, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_5);
		return (bool)L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m280BFF61F817FEAC2CBBD65A638562916BF3F692_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj))
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj))
		RuntimeObject * L_1 = ___obj0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (obj.GetType() != GetType())
		RuntimeObject * L_2 = ___obj0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)__this);
		Type_t * L_4;
		L_4 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_3, (Type_t *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals((VolumeParameter<T>)obj);
		RuntimeObject * L_6 = ___obj0;
		NullCheck((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this);
		bool L_7;
		L_7 = ((  bool (*) (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *, VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this, (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (bool)L_7;
	}
}
// T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::op_Explicit(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  VolumeParameter_1_op_Explicit_mA5DC14C41E311BC76D34FEEAC7AC29478EBC22D1_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * ___prop0, const RuntimeMethod* method)
{
	{
		// public static explicit operator T(VolumeParameter<T> prop) => prop.m_Value;
		VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * L_0 = ___prop0;
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_0->get_m_Value_2();
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_1;
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
// T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  VolumeParameter_1_get_value_mF93101C5EDDA1B358CD201EB3C5E8FDF0B5A404A_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * __this, const RuntimeMethod* method)
{
	{
		// get => m_Value;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )__this->get_m_Value_2();
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::set_value(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_m2F8D2E49FD6FBC3118DEC5F153A95085465BC59B_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// set => m_Value = value;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mE934FF123822927E73B5F780398087397E4017DA_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// : this(default, false)
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = V_0;
		NullCheck((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this);
		((  void (*) (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mD7068B78F5D082BFE2ABA8385B44A87897C659E1_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		// protected VolumeParameter(T value, bool overrideState)
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VolumeParameter__ctor_m0F5E882EFAE8F1B7AE0DFF62945878D71CA63D54((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, /*hidden argument*/NULL);
		// m_Value = value;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		// this.overrideState = overrideState;
		bool L_1 = ___overrideState1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::Interp(UnityEngine.Rendering.VolumeParameter,UnityEngine.Rendering.VolumeParameter,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_mAF7D9A651AA6C555402A0D188EB3AA72EC7022BA_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___from0, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		// Interp(from.GetValue<T>(), to.GetValue<T>(), t);
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___from0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_2 = ___to1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this);
		VirtActionInvoker3< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(14 /* System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::Interp(T,T,System.Single) */, (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, (float)L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::Interp(T,T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m5273C2FF3EB0A07BB6C67BF60C1F3E63EBEFE081_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, float ___t2, const RuntimeMethod* method)
{
	VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * G_B2_0 = NULL;
	VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * G_B1_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * G_B3_1 = NULL;
	{
		// m_Value = t > 0f ? to : from;
		float L_0 = ___t2;
		G_B1_0 = ((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)(__this));
			goto IL_000c;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)(G_B2_0));
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_Value_2(G_B3_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::Override(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_m9C174EF8E9F5D3637072C0EAA8752389DCE83491_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___x0, const RuntimeMethod* method)
{
	{
		// overrideState = true;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)1);
		// m_Value = x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___x0;
		__this->set_m_Value_2(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::SetValue(UnityEngine.Rendering.VolumeParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_m0BBB417DE4415268AD2A66B4D0764982FE65C48D_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___parameter0, const RuntimeMethod* method)
{
	{
		// m_Value = parameter.GetValue<T>();
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___parameter0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_Value_2(L_1);
		// }
		return;
	}
}
// System.Int32 UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_m713A112A8F84A7F27A4DB2933464D17BBE224E04_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int hash = 17;
		V_0 = (int32_t)((int32_t)17);
		// hash = hash * 23 + overrideState.GetHashCode();
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		V_1 = (bool)L_1;
		int32_t L_2;
		L_2 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		// if (!EqualityComparer<T>.Default.Equals(value, default)) // Catches null for references with boxing of value types
		EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7 * L_3;
		L_3 = ((  EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		NullCheck((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::get_value() */, (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this);
		il2cpp_codegen_initobj((&V_2), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_2;
		NullCheck((EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7 *)L_3);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::Equals(!0,!0) */, (EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7 *)L_3, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_5);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		// hash = hash * 23 + value.GetHashCode();
		int32_t L_7 = V_0;
		NullCheck((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::get_value() */, (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this);
		V_2 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_8;
		int32_t L_9;
		L_9 = Vector3_GetHashCode_m9F18401DA6025110A012F55BBB5ACABD36FA9A0A((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)((int32_t)23))), (int32_t)L_9));
	}

IL_004c:
	{
		// return hash;
		int32_t L_10 = V_0;
		return (int32_t)L_10;
	}
}
// System.String UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_m9C2B50A9346DD0AB59B08833586ECBCFB9519661_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"{value} ({overrideState})";
		NullCheck((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::get_value() */, (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_1);
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, (RuntimeObject *)L_2, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		return (String_t*)L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::op_Equality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m59E7219C79A4ACD0AF0240D5981F052B0AB3706C_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static bool operator==(VolumeParameter<T> lhs, T rhs) => lhs != null && !ReferenceEquals(lhs.value, null) && lhs.value.Equals(rhs);
		VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * L_0 = ___lhs0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * L_1 = ___lhs0;
		NullCheck((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::get_value() */, (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)L_1);
	}
	{
		VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * L_3 = ___lhs0;
		NullCheck((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::get_value() */, (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)L_3);
		V_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___rhs1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = L_5;
		RuntimeObject * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7), &L_6);
		bool L_8;
		L_8 = Vector3_Equals_m210CB160B594355581D44D4B87CF3D3994ABFED0((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (RuntimeObject *)L_7, /*hidden argument*/NULL);
		return (bool)L_8;
	}

IL_002b:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::op_Inequality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_m9027012A345F02BCBD86BAFFE1E59488EC904A79_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator!=(VolumeParameter<T> lhs, T rhs) => !(lhs == rhs);
		VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * L_0 = ___lhs0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___rhs1;
		bool L_2;
		L_2 = ((  bool (*) (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::Equals(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m510A1A4B4E767D2C44EBE02BB6DC85998A1B8E92_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * __this, VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * ___other0, const RuntimeMethod* method)
{
	{
		// if (ReferenceEquals(null, other))
		VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, other))
		VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * L_1 = ___other0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this) == ((RuntimeObject*)(VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// return EqualityComparer<T>.Default.Equals(m_Value, other.m_Value);
		EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7 * L_2;
		L_2 = ((  EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )__this->get_m_Value_2();
		VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * L_4 = ___other0;
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4->get_m_Value_2();
		NullCheck((EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7 *)L_2);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::Equals(!0,!0) */, (EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7 *)L_2, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_5);
		return (bool)L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m8ED0747D259C00F3410EFFAEFD9E26465CF42B65_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj))
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj))
		RuntimeObject * L_1 = ___obj0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this) == ((RuntimeObject*)(RuntimeObject *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (obj.GetType() != GetType())
		RuntimeObject * L_2 = ___obj0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)__this);
		Type_t * L_4;
		L_4 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_3, (Type_t *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals((VolumeParameter<T>)obj);
		RuntimeObject * L_6 = ___obj0;
		NullCheck((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this);
		bool L_7;
		L_7 = ((  bool (*) (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *, VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this, (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (bool)L_7;
	}
}
// T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::op_Explicit(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  VolumeParameter_1_op_Explicit_m9593E4E68C801602471B97A83E6B063EF3A73A92_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * ___prop0, const RuntimeMethod* method)
{
	{
		// public static explicit operator T(VolumeParameter<T> prop) => prop.m_Value;
		VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * L_0 = ___prop0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0->get_m_Value_2();
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1;
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
// T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  VolumeParameter_1_get_value_m2EA653B325EEC0AEC56D6C83B8E5386F6E014BC5_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * __this, const RuntimeMethod* method)
{
	{
		// get => m_Value;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )__this->get_m_Value_2();
		return (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_0;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::set_value(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_m5D211AE58EC04A1C0C465D26D0BE128583E1521C_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value0, const RuntimeMethod* method)
{
	{
		// set => m_Value = value;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mAB9A56F2C8AEDD0D99DAD5941AA305B3DD6E1C84_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * __this, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// : this(default, false)
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 ));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = V_0;
		NullCheck((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this);
		((  void (*) (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m459DEF559810C9A959598B2F88EEECF2843E0CF6_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		// protected VolumeParameter(T value, bool overrideState)
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VolumeParameter__ctor_m0F5E882EFAE8F1B7AE0DFF62945878D71CA63D54((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, /*hidden argument*/NULL);
		// m_Value = value;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		// this.overrideState = overrideState;
		bool L_1 = ___overrideState1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::Interp(UnityEngine.Rendering.VolumeParameter,UnityEngine.Rendering.VolumeParameter,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m050EE31E66335F6777B19DCD87F8770519A8A686_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___from0, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		// Interp(from.GetValue<T>(), to.GetValue<T>(), t);
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___from0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1;
		L_1 = ((  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_2 = ___to1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3;
		L_3 = ((  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this);
		VirtActionInvoker3< Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , float >::Invoke(14 /* System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::Interp(T,T,System.Single) */, (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_1, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_3, (float)L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::Interp(T,T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m6F75A3B8404DB1DAE2349C5A57CA6ECF3CE5F556_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___from0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___to1, float ___t2, const RuntimeMethod* method)
{
	VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * G_B2_0 = NULL;
	VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * G_B1_0 = NULL;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * G_B3_1 = NULL;
	{
		// m_Value = t > 0f ? to : from;
		float L_0 = ___t2;
		G_B1_0 = ((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)(__this));
			goto IL_000c;
		}
	}
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)(G_B2_0));
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_Value_2(G_B3_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::Override(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_m7E10707423FD177F1152146C5F61105DF1F8D70C_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___x0, const RuntimeMethod* method)
{
	{
		// overrideState = true;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)1);
		// m_Value = x;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___x0;
		__this->set_m_Value_2(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::SetValue(UnityEngine.Rendering.VolumeParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_m82DDA24EB7110F139DC0012D85F6E3D52ABA9155_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___parameter0, const RuntimeMethod* method)
{
	{
		// m_Value = parameter.GetValue<T>();
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___parameter0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1;
		L_1 = ((  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_Value_2(L_1);
		// }
		return;
	}
}
// System.Int32 UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_m349692A683031E1772EBACF72A98E1B759B5F1AB_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int hash = 17;
		V_0 = (int32_t)((int32_t)17);
		// hash = hash * 23 + overrideState.GetHashCode();
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		V_1 = (bool)L_1;
		int32_t L_2;
		L_2 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		// if (!EqualityComparer<T>.Default.Equals(value, default)) // Catches null for references with boxing of value types
		EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E * L_3;
		L_3 = ((  EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		NullCheck((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4;
		L_4 = VirtFuncInvoker0< Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::get_value() */, (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this);
		il2cpp_codegen_initobj((&V_2), sizeof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 ));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_5 = V_2;
		NullCheck((EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E *)L_3);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::Equals(!0,!0) */, (EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E *)L_3, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_4, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_5);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		// hash = hash * 23 + value.GetHashCode();
		int32_t L_7 = V_0;
		NullCheck((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8;
		L_8 = VirtFuncInvoker0< Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::get_value() */, (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this);
		V_2 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_8;
		int32_t L_9;
		L_9 = Vector4_GetHashCode_mCA7B312F8CA141F6F25BABDDF406F3D2BDD5E895((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&V_2), /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)((int32_t)23))), (int32_t)L_9));
	}

IL_004c:
	{
		// return hash;
		int32_t L_10 = V_0;
		return (int32_t)L_10;
	}
}
// System.String UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_m70BB531EC1A1197D6B56D5B16D3DAB51D2753CBB_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"{value} ({overrideState})";
		NullCheck((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0;
		L_0 = VirtFuncInvoker0< Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::get_value() */, (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_1);
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, (RuntimeObject *)L_2, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		return (String_t*)L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::op_Equality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m69D10FDCEBA2FD496EA09620C635BD76CDB36FF0_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * ___lhs0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___rhs1, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static bool operator==(VolumeParameter<T> lhs, T rhs) => lhs != null && !ReferenceEquals(lhs.value, null) && lhs.value.Equals(rhs);
		VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * L_0 = ___lhs0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * L_1 = ___lhs0;
		NullCheck((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)L_1);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2;
		L_2 = VirtFuncInvoker0< Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::get_value() */, (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)L_1);
	}
	{
		VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * L_3 = ___lhs0;
		NullCheck((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)L_3);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4;
		L_4 = VirtFuncInvoker0< Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::get_value() */, (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)L_3);
		V_0 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_4;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_5 = ___rhs1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6 = L_5;
		RuntimeObject * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7), &L_6);
		bool L_8;
		L_8 = Vector4_Equals_m71D14F39651C3FBEDE17214455DFA727921F07AA((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&V_0), (RuntimeObject *)L_7, /*hidden argument*/NULL);
		return (bool)L_8;
	}

IL_002b:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::op_Inequality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_m7FA56CEE1136929DA9697CCF037420643A2FA85B_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * ___lhs0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator!=(VolumeParameter<T> lhs, T rhs) => !(lhs == rhs);
		VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * L_0 = ___lhs0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = ___rhs1;
		bool L_2;
		L_2 = ((  bool (*) (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)L_0, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::Equals(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_mEB314431E51DD71B3F7BB22A786EE58C19218522_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * __this, VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * ___other0, const RuntimeMethod* method)
{
	{
		// if (ReferenceEquals(null, other))
		VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, other))
		VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * L_1 = ___other0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this) == ((RuntimeObject*)(VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// return EqualityComparer<T>.Default.Equals(m_Value, other.m_Value);
		EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E * L_2;
		L_2 = ((  EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )__this->get_m_Value_2();
		VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * L_4 = ___other0;
		NullCheck(L_4);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_5 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_4->get_m_Value_2();
		NullCheck((EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E *)L_2);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::Equals(!0,!0) */, (EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E *)L_2, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_3, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_5);
		return (bool)L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m831EC889B40C1B3D9763C7460C62A2C2986AFD5D_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj))
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj))
		RuntimeObject * L_1 = ___obj0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this) == ((RuntimeObject*)(RuntimeObject *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (obj.GetType() != GetType())
		RuntimeObject * L_2 = ___obj0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)__this);
		Type_t * L_4;
		L_4 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_3, (Type_t *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals((VolumeParameter<T>)obj);
		RuntimeObject * L_6 = ___obj0;
		NullCheck((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this);
		bool L_7;
		L_7 = ((  bool (*) (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *, VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this, (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (bool)L_7;
	}
}
// T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::op_Explicit(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  VolumeParameter_1_op_Explicit_m034A5A9009175E647D10A32FEB621BCA0237E93C_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * ___prop0, const RuntimeMethod* method)
{
	{
		// public static explicit operator T(VolumeParameter<T> prop) => prop.m_Value;
		VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * L_0 = ___prop0;
		NullCheck(L_0);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_0->get_m_Value_2();
		return (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_1;
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
// System.Void System.WeakReference`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m26CA3930ADE164EA48E474988EE6B82D26E5F9E9_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___target0;
		NullCheck((WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 *)__this);
		((  void (*) (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 *, RuntimeObject *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 *)__this, (RuntimeObject *)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_mF2828744686B43E540BF1C0908FA8C14694F666F_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, RuntimeObject * ___target0, bool ___trackResurrection1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		bool L_0 = ___trackResurrection1;
		__this->set_trackResurrection_1(L_0);
		bool L_1 = ___trackResurrection1;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (int32_t)G_B3_0;
		RuntimeObject * L_2 = ___target0;
		int32_t L_3 = V_0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_4;
		L_4 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC((RuntimeObject *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		__this->set_handle_0(L_4);
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_mC76935DFFEF0678A77A4811865B9F4D350D72741_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WeakReference_1__ctor_mC76935DFFEF0678A77A4811865B9F4D350D72741_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		NullCheck((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_2);
		bool L_3;
		L_3 = SerializationInfo_GetBoolean_m705ADACFB52D6385DDB6B2525C1979ECBE6D5849((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_2, (String_t*)_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7, /*hidden argument*/NULL);
		__this->set_trackResurrection_1(L_3);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_5, /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_4);
		RuntimeObject * L_7;
		L_7 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_4, (String_t*)_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, (Type_t *)L_6, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)L_7;
		bool L_8 = (bool)__this->get_trackResurrection_1();
		if (L_8)
		{
			goto IL_0046;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0047;
	}

IL_0046:
	{
		G_B5_0 = 1;
	}

IL_0047:
	{
		V_1 = (int32_t)G_B5_0;
		RuntimeObject * L_9 = V_0;
		int32_t L_10 = V_1;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_11;
		L_11 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC((RuntimeObject *)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		__this->set_handle_0(L_11);
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_GetObjectData_m7C63330FAC22CBE86AA1BDE2F34DFDA8B1E41272_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WeakReference_1_GetObjectData_m7C63330FAC22CBE86AA1BDE2F34DFDA8B1E41272_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		bool L_3 = (bool)__this->get_trackResurrection_1();
		NullCheck((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_2);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_2, (String_t*)_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7, (bool)L_3, /*hidden argument*/NULL);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_4 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		bool L_5;
		L_5 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_7 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		RuntimeObject * L_8;
		L_8 = GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_7, /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_6);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_6, (String_t*)_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, (RuntimeObject *)L_8, /*hidden argument*/NULL);
		return;
	}

IL_0043:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_9 = ___info0;
		NullCheck((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_9);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_9, (String_t*)_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.WeakReference`1<System.Object>::TryGetTarget(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReference_1_TryGetTarget_mA9F884507AABEFCC394D06FEEB7AD14ECEB5CD6B_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, RuntimeObject ** ___target0, const RuntimeMethod* method)
{
	{
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_0 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		bool L_1;
		L_1 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject ** L_2 = ___target0;
		il2cpp_codegen_initobj(L_2, sizeof(RuntimeObject *));
		return (bool)0;
	}

IL_0016:
	{
		RuntimeObject ** L_3 = ___target0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_4 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		RuntimeObject * L_5;
		L_5 = GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_4, /*hidden argument*/NULL);
		*(RuntimeObject **)L_3 = ((RuntimeObject *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)((RuntimeObject *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		RuntimeObject ** L_6 = ___target0;
		RuntimeObject * L_7 = (*(RuntimeObject **)L_6);
		return (bool)((!(((RuntimeObject*)(RuntimeObject *)L_7) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void System.WeakReference`1<System.Object>::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_Finalize_mFFF6306032DA8256E4F7D125EF76342E83CD6F68_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_0 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		NullCheck((RuntimeObject *)__this);
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_m3D972EADE84A3494CCBFFE8C5E77961D6BB72564_gshared (WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00 * __this, KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* ___source0, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *)__this);
		((  void (*) (Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC * WhereArrayIterator_1_Clone_m032C10211C1599CC3D6ED823455A20470AB9C2B0_gshared (WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* L_0 = (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00 * L_2 = (WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00 *, KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_mED919B92889A7C73EB10A2E7A0CCF492D657B1A8_gshared (WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00 * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* L_1 = (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_4 = (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_6 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_7 = V_0;
		NullCheck((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_6, (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_9 = V_0;
		((Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* L_11 = (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::Dispose() */, (Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_m0AC6FBD34EFF70757E46F79B8FDEE51C1EC5E524_gshared (WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00 * __this, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate0, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* L_0 = (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_2 = ___predicate0;
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_3;
		L_3 = ((  Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * (*) (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00 * L_4 = (WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00 *, KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Int32Enum>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mD47D32B74C1FED5ECFD8A7116EC7D1DD17C53320_gshared (WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7 * __this, Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ___source0, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this);
		((  void (*) (Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Int32Enum>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 * WhereArrayIterator_1_Clone_m1A571B38A3C6E3C6625815C7DBD035D55B244042_gshared (WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7 * __this, const RuntimeMethod* method)
{
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_0 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7 * L_2 = (WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7 *, Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Int32Enum>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m06402EF685B4F98A08BEBB4D1EBDF9041F451E43_gshared (WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_1 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (int32_t)L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_6 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		int32_t L_7 = V_0;
		NullCheck((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_6, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_9 = V_0;
		((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_11 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32Enum>::Dispose() */, (Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Int32Enum>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_mD9D39354B17B0F8127E14AC88C55D87DB5836C44_gshared (WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7 * __this, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate0, const RuntimeMethod* method)
{
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_0 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_2 = ___predicate0;
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_3;
		L_3 = ((  Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7 * L_4 = (WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7 *, Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_m5358A7C3085BC8A103D9793A6D2FCB7E36A2D2CE_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereArrayIterator_1_Clone_m2CF9FC5638704567A64DC86DD674EB4E6F380F79_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_2 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m37A95072CA5380DE7F2D6B57990507C92F045BB3_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_7 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject * L_9 = V_0;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_m294488B1E62E494973DD4880121A17A0C8A08118_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_4 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mF40556C03B7FA4023C8C3771CCED7CAB84BAB6F0_gshared (WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3 * __this, RuntimeObject* ___source0, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *)__this);
		((  void (*) (Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC * WhereEnumerableIterator_1_Clone_m84FF60EC83E10D236C1E4DD7C40663C17859315C_gshared (WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3 * L_2 = (WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3 *, RuntimeObject*, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m6CE86B76B6AB5C5F3CE51755267D77941A75CD76_gshared (WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *)__this);
		((  void (*) (Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m20BE5820AD8BB3EE60FB09689DF3D4AE037A17FE_gshared (WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_6;
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_7 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_8 = V_1;
		NullCheck((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_7, (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_10 = V_1;
		((Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::Dispose() */, (Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mB81FB9A582E72FF364A7C4993E3F900268FA8EAD_gshared (WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3 * __this, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_2 = ___predicate0;
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_3;
		L_3 = ((  Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * (*) (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3 * L_4 = (WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3 *, RuntimeObject*, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mED9FE30D754A0ABE546A685684F523BC57509D0E_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, RuntimeObject* ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereEnumerableIterator_1_Clone_mB3FE252392A8FEA3638826A2C4D1195A4D3743BB_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_2 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_mB841131399B8BA11B9D6DB37E11F90B1BFFBDA2D_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m819D14CC69CC48B0B84E497DFF1953AAFFF13333_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int32_t)L_6;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_8 = V_1;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_10 = V_1;
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mD1B249C431E67DD9B73D781BEA79EF23E556B75E_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_2 = ___predicate0;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_3;
		L_3 = ((  Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_4 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32Enum>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mF3AA7FD3FA45215607A09959D37CC5AB5728F760_gshared (WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23 * __this, RuntimeObject* ___source0, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this);
		((  void (*) (Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32Enum>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 * WhereEnumerableIterator_1_Clone_m0DF43DC2700069CDFB390CCEB685177F2E8FE672_gshared (WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23 * L_2 = (WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23 *, RuntimeObject*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32Enum>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_mA4E7B79F54F2559E853A1EA177457DB86FAA4DA3_gshared (WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this);
		((  void (*) (Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32Enum>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_mEAB1E1CE1598E67F3DBC61C7DB67FCABAFE1E83F_gshared (WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32Enum>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32Enum>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int32_t)L_6;
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_7 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		int32_t L_8 = V_1;
		NullCheck((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_10 = V_1;
		((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32Enum>::Dispose() */, (Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32Enum>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m17BA130B5008307E51C264ADC8D0EA5FBF8B2F57_gshared (WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23 * __this, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_2 = ___predicate0;
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_3;
		L_3 = ((  Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23 * L_4 = (WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23 *, RuntimeObject*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Mirror.Cloud.ListServerService.KeyValue>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mF3FE97F6C15D3D47075C05386B63FAEA5CAD1DD3_gshared (WhereEnumerableIterator_1_t5916DAE089C894458C6EEF85DDDD344556850B2C * __this, RuntimeObject* ___source0, Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this);
		((  void (*) (Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<Mirror.Cloud.ListServerService.KeyValue>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B * WhereEnumerableIterator_1_Clone_m6E9A7DDE3C707703726016C154849651469542B1_gshared (WhereEnumerableIterator_1_t5916DAE089C894458C6EEF85DDDD344556850B2C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 * L_1 = (Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t5916DAE089C894458C6EEF85DDDD344556850B2C * L_2 = (WhereEnumerableIterator_1_t5916DAE089C894458C6EEF85DDDD344556850B2C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t5916DAE089C894458C6EEF85DDDD344556850B2C *, RuntimeObject*, Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Mirror.Cloud.ListServerService.KeyValue>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_mD7FEED5EF4155A188C311B89540E9B92E7EA7637_gshared (WhereEnumerableIterator_1_t5916DAE089C894458C6EEF85DDDD344556850B2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this);
		((  void (*) (Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<Mirror.Cloud.ListServerService.KeyValue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m07772B51D36E0E4BDC523DA7F46C736CD2D9CCF0_gshared (WhereEnumerableIterator_1_t5916DAE089C894458C6EEF85DDDD344556850B2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Mirror.Cloud.ListServerService.KeyValue>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Mirror.Cloud.ListServerService.KeyValue>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4 )L_6;
		Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 * L_7 = (Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 *)__this->get_predicate_4();
		KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  L_8 = V_1;
		NullCheck((Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 *, KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 *)L_7, (KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  L_10 = V_1;
		((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Mirror.Cloud.ListServerService.KeyValue>::Dispose() */, (Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<Mirror.Cloud.ListServerService.KeyValue>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m2D8A06F7ACA34AEEEEE224B7DA0349FCD6DD5057_gshared (WhereEnumerableIterator_1_t5916DAE089C894458C6EEF85DDDD344556850B2C * __this, Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 * L_1 = (Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 *)__this->get_predicate_4();
		Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 * L_2 = ___predicate0;
		Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 * L_3;
		L_3 = ((  Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 * (*) (Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 *, Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 *)L_1, (Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t5916DAE089C894458C6EEF85DDDD344556850B2C * L_4 = (WhereEnumerableIterator_1_t5916DAE089C894458C6EEF85DDDD344556850B2C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t5916DAE089C894458C6EEF85DDDD344556850B2C *, RuntimeObject*, Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mE8BFA73027409E16668838C4664CE7C48F3254DF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereEnumerableIterator_1_Clone_mD8AFDE4531ADC466665EEE89C052BFF645C1BDD6_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_2 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m4E1339513102BB6B49AD33EDB569D3FFD24ED023_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m6D8A420AEB325BF252721010781EF31CF64D73FF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m4016C553BF1DF1102C2A7B769244B2DC2EA3E716_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_4 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m867DBDE49D87FE87EF7F31AE17C41FF121DD4767_gshared (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * __this, RuntimeObject* ___source0, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		((  void (*) (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F * WhereEnumerableIterator_1_Clone_m3C3E0F733FE6E37248E42E4FD1A74453E1A6EEDE_gshared (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * L_1 = (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * L_2 = (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *, RuntimeObject*, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m32A0C073D87DEAAC90C3A15AC13E50BB2F64FE48_gshared (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		((  void (*) (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m966080FAE497D4A4FF212A0247A81988B0496A52_gshared (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Mirror.Examples.MultipleMatch.PlayerInfo>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  L_6;
		L_6 = InterfaceFuncInvoker0< PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6 )L_6;
		Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * L_7 = (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)__this->get_predicate_4();
		PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  L_8 = V_1;
		NullCheck((Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *, PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)L_7, (PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  L_10 = V_1;
		((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::Dispose() */, (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m4CEB4FF93635F7045AD0AA8868085A650428A987_gshared (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * __this, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * L_1 = (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)__this->get_predicate_4();
		Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * L_2 = ___predicate0;
		Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * L_3;
		L_3 = ((  Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * (*) (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)L_1, (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * L_4 = (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *, RuntimeObject*, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_m64875EC68E65F3FE3A825D82B87BCEBA36926C81_gshared (WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C * __this, List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * ___source0, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *)__this);
		((  void (*) (Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC * WhereListIterator_1_Clone_m6CB0B2C8A48FA5E64F6F2D5440D6571B3520D84A_gshared (WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C * __this, const RuntimeMethod* method)
{
	{
		List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * L_0 = (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C * L_2 = (WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C *, List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_mC73C65AB3CF069E8E7899C37DB5FFCB8FAE53BA8_gshared (WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * L_3 = (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)__this->get_source_3();
		NullCheck((List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)L_3);
		Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  L_4;
		L_4 = ((  Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  (*) (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 * L_5 = (Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *)__this->get_address_of_enumerator_5();
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_6;
		L_6 = Enumerator_get_Current_m506A69CB2171FCCF5B63CD09DF4ADB53A9184464_inline((Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *)(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_6;
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_7 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_8 = V_1;
		NullCheck((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_7, (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_10 = V_1;
		((Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 * L_11 = (Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_mEDD63BEF27E5F1D2EBDF0E8D6C8F1AAA94118864((Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *)(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::Dispose() */, (Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m733FE08439234B22FF18E57BC4EFFA0CA94E6508_gshared (WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C * __this, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * L_0 = (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_2 = ___predicate0;
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_3;
		L_3 = ((  Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * (*) (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C * L_4 = (WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C *, List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Int32Enum>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mD6E131DBAA006D2A189E46FCFDAEB7F9B5204B2D_gshared (WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B * __this, List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___source0, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this);
		((  void (*) (Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Int32Enum>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 * WhereListIterator_1_Clone_m81E075FBE9EB586D435E2E651BE0736603DBD700_gshared (WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B * __this, const RuntimeMethod* method)
{
	{
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_0 = (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B * L_2 = (WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B *, List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Int32Enum>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_mD9F77B129FB23944D64FE580D6B6DE4DBBFD9EB8_gshared (WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_3 = (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)__this->get_source_3();
		NullCheck((List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_3);
		Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  L_4;
		L_4 = ((  Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  (*) (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * L_5 = (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)__this->get_address_of_enumerator_5();
		int32_t L_6;
		L_6 = Enumerator_get_Current_mDD503AFD786235D3B40842B0872AC17DC86EB040_inline((Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (int32_t)L_6;
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_7 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		int32_t L_8 = V_1;
		NullCheck((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_10 = V_1;
		((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * L_11 = (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_mDECBD2FBFA44578D8E050CECB33BF350152E111A((Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32Enum>::Dispose() */, (Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Int32Enum>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_mCC36327D2F19DDE3826325A64C7637379EF8839D_gshared (WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B * __this, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_0 = (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_2 = ___predicate0;
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_3;
		L_3 = ((  Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B * L_4 = (WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B *, List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_m3EB9274A8CE9B71A41BA4B8E9E22D9735713DFA3_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereListIterator_1_Clone_mF7E182440FC39477FC20CA48E0FAB270FED512F4_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_2 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_m11D0FD0206FC9B236608A1150FB26790BA09B2E5_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_11 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m1AD3C3728A42EA6188BB39667495E67F8A078501_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_4 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mCF3C15D25B2EB3FC34F62F7EDF9141B9FB7B8899_gshared (WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3 * __this, KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* ___source0, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate1, Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectArrayIterator_2_Clone_m221D3F5EAAC56A75379A8C607123D346DE70BCFD_gshared (WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* L_0 = (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * L_2 = (Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3 * L_3 = (WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3 *, KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mCCC9E1FFC9244F68B7B8F37BAC32F2C60D1C331C_gshared (WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3 * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* L_1 = (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_4 = (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_6 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_7 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_8 = V_0;
		NullCheck((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_7, (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * L_10 = (Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *)__this->get_selector_5();
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_11 = V_0;
		NullCheck((Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *)L_10);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *)L_10, (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* L_14 = (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m5A5AFEBE9D350225599316201C1644366B090EAA_gshared (WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3 * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mADE9249021D8115BFF491770245C56C731DC67B2_gshared (WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC * __this, KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* ___source0, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate1, Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_mFA993403FC356E993904223D02402B7D2ABF18BA_gshared (WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* L_0 = (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_2 = (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC * L_3 = (WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC *, KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mBAF72665B09E4CC6489F4E0455A4C2D08E172C61_gshared (WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* L_1 = (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_4 = (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_6 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_7 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_8 = V_0;
		NullCheck((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_7, (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_10 = (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)__this->get_selector_5();
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_11 = V_0;
		NullCheck((Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_10, (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* L_14 = (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mFB2DA2E69547DA7C8DDD1451F32E54C4D3F5A2B4_gshared (WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,Mirror.Examples.MultipleMatch.PlayerInfo>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mF8606C54E9EF64624FF268466325BD352FE1775A_gshared (WhereSelectArrayIterator_2_tB2C742F819D4103B68DB1E2D3F459CAB70002C2B * __this, KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* ___source0, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate1, Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		((  void (*) (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,Mirror.Examples.MultipleMatch.PlayerInfo>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F * WhereSelectArrayIterator_2_Clone_mEC9E289DC12AEB42F619443CF99B33F69B0097A2_gshared (WhereSelectArrayIterator_2_tB2C742F819D4103B68DB1E2D3F459CAB70002C2B * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* L_0 = (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 * L_2 = (Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tB2C742F819D4103B68DB1E2D3F459CAB70002C2B * L_3 = (WhereSelectArrayIterator_2_tB2C742F819D4103B68DB1E2D3F459CAB70002C2B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tB2C742F819D4103B68DB1E2D3F459CAB70002C2B *, KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,Mirror.Examples.MultipleMatch.PlayerInfo>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mC973AA878E4A56DE7EF663344FC1B7756A6BA93A_gshared (WhereSelectArrayIterator_2_tB2C742F819D4103B68DB1E2D3F459CAB70002C2B * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* L_1 = (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_4 = (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_6 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_7 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_8 = V_0;
		NullCheck((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_7, (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 * L_10 = (Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 *)__this->get_selector_5();
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_11 = V_0;
		NullCheck((Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 *)L_10);
		PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  L_12;
		L_12 = ((  PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  (*) (Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 *, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 *)L_10, (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* L_14 = (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::Dispose() */, (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,Mirror.Examples.MultipleMatch.PlayerInfo>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m15EFF0A7A38D0D78235B0390A708835BD7DCBC0A_gshared (WhereSelectArrayIterator_2_tB2C742F819D4103B68DB1E2D3F459CAB70002C2B * __this, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * L_1 = (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *, RuntimeObject*, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Mirror.Cloud.ListServerService.KeyValue>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m57C3A220F44E4AE5567421D9E1E2A417F189CC00_gshared (WhereSelectArrayIterator_2_t18B98FB6D8A55729A5F71CB271D10EFBB890F32E * __this, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this);
		((  void (*) (Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Mirror.Cloud.ListServerService.KeyValue>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B * WhereSelectArrayIterator_2_Clone_mA4D7CCB79CBF796454E95A931150F3D825A18316_gshared (WhereSelectArrayIterator_2_t18B98FB6D8A55729A5F71CB271D10EFBB890F32E * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 * L_2 = (Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t18B98FB6D8A55729A5F71CB271D10EFBB890F32E * L_3 = (WhereSelectArrayIterator_2_t18B98FB6D8A55729A5F71CB271D10EFBB890F32E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t18B98FB6D8A55729A5F71CB271D10EFBB890F32E *, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Mirror.Cloud.ListServerService.KeyValue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mA0FE4DDE755D4E69655D671B7F3182B0CB9C11CC_gshared (WhereSelectArrayIterator_2_t18B98FB6D8A55729A5F71CB271D10EFBB890F32E * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_1 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_4 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_6 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_8 = V_0;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 * L_10 = (Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_11 = V_0;
		NullCheck((Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 *)L_10);
		KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  L_12;
		L_12 = ((  KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  (*) (Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 *)L_10, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_14 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Mirror.Cloud.ListServerService.KeyValue>::Dispose() */, (Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Mirror.Cloud.ListServerService.KeyValue>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mBCC27276C7932FE5DC52CAC9CECF86FE05403EB8_gshared (WhereSelectArrayIterator_2_t18B98FB6D8A55729A5F71CB271D10EFBB890F32E * __this, Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t5916DAE089C894458C6EEF85DDDD344556850B2C * L_1 = (WhereEnumerableIterator_1_t5916DAE089C894458C6EEF85DDDD344556850B2C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t5916DAE089C894458C6EEF85DDDD344556850B2C *, RuntimeObject*, Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,System.Int32>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m9F1B6A62810253DBFCE949A06A36FD903E069D00_gshared (WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170 * __this, Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ___source0, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate1, Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectArrayIterator_2_Clone_mFBB1597EC59F848E17C296D9E59E6A5727325B2A_gshared (WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170 * __this, const RuntimeMethod* method)
{
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_0 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * L_2 = (Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170 * L_3 = (WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170 *, Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m3288ACF3C08D28002D015B3E61B86FB948752AED_gshared (WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_1 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (int32_t)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_6 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_7 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		int32_t L_8 = V_0;
		NullCheck((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * L_10 = (Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *)__this->get_selector_5();
		int32_t L_11 = V_0;
		NullCheck((Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *)L_10);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *)L_10, (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_14 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m2CA9C908F6A78BFB805BC62C12AEBCADFBC16C9C_gshared (WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170 * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m4FFCAF1BCFFC737FC53D82E1945E4FF8547C4134_gshared (WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 * __this, Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ___source0, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate1, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_m9F3626F90039C937532071737281A3F66B2649FC_gshared (WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 * __this, const RuntimeMethod* method)
{
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_0 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 * L_3 = (WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 *, Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m865ABFBE319636B9BDBF5C3F4FF91703765ED8E3_gshared (WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_1 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (int32_t)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_6 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_7 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		int32_t L_8 = V_0;
		NullCheck((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_10 = (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)__this->get_selector_5();
		int32_t L_11 = V_0;
		NullCheck((Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_10, (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_14 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mF284F0BC101E6A5280500324DE5FCEA8007EE9FB_gshared (WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,Mirror.Examples.MultipleMatch.PlayerInfo>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m6AD12BADBFA1DA2E45C4DB226E0DC8450D7B2D91_gshared (WhereSelectArrayIterator_2_t26548A85DB592AAC9C15A71C4D15AC2825D13691 * __this, Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ___source0, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate1, Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		((  void (*) (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,Mirror.Examples.MultipleMatch.PlayerInfo>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F * WhereSelectArrayIterator_2_Clone_m5FEA30D0A9A543F9CCCF74E22D9622C62B126B29_gshared (WhereSelectArrayIterator_2_t26548A85DB592AAC9C15A71C4D15AC2825D13691 * __this, const RuntimeMethod* method)
{
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_0 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 * L_2 = (Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t26548A85DB592AAC9C15A71C4D15AC2825D13691 * L_3 = (WhereSelectArrayIterator_2_t26548A85DB592AAC9C15A71C4D15AC2825D13691 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t26548A85DB592AAC9C15A71C4D15AC2825D13691 *, Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,Mirror.Examples.MultipleMatch.PlayerInfo>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m66644196DA70EE46B669C6111EB7F5617EF288CC_gshared (WhereSelectArrayIterator_2_t26548A85DB592AAC9C15A71C4D15AC2825D13691 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_1 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (int32_t)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_6 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_7 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		int32_t L_8 = V_0;
		NullCheck((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 * L_10 = (Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 *)__this->get_selector_5();
		int32_t L_11 = V_0;
		NullCheck((Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 *)L_10);
		PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  L_12;
		L_12 = ((  PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  (*) (Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 *)L_10, (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_14 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::Dispose() */, (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,Mirror.Examples.MultipleMatch.PlayerInfo>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m7892DB6DBD835AF196FCAC8587F4871BA01A218A_gshared (WhereSelectArrayIterator_2_t26548A85DB592AAC9C15A71C4D15AC2825D13691 * __this, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * L_1 = (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *, RuntimeObject*, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int32>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m37B6F813DD5D2DBF0B65CEEE8BAA4E079386B942_gshared (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectArrayIterator_2_Clone_mD1461D97262D9D39D4F7B6326C3424D9CEFF4C61_gshared (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_2 = (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 * L_3 = (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mD852569E97B9427E112491B734CB6474FB0F35AF_gshared (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_10 = (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)__this->get_selector_5();
		RuntimeObject * L_11 = V_0;
		NullCheck((Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_10);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m2E8CD2871388CA9F41FA9A04A4CB14B36B1D76A7_gshared (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mCB64A76E8C03C791C57D44E38D025D1C6EC7B880_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_m4ACA936AD86CEAB027D82949C74DEDD882A800D3_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * L_3 = (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mCF08A119CF0CC000264B5B6BA5EC4B40CC9640CC_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_10 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_11 = V_0;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m21B504E9811B348A8694F7C71E07ABCCDE69807B_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m09C9367DEC1ED98D9040B4FA8F71075894A152EF_gshared (WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		((  void (*) (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F * WhereSelectArrayIterator_2_Clone_m73A5088F54FFA4A143BF99E1C0C99FE3EC6C3C89_gshared (WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * L_2 = (Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213 * L_3 = (WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mB08AFE5575A520AD10D16E1FEA4F25851BA2861C_gshared (WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * L_10 = (Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)__this->get_selector_5();
		RuntimeObject * L_11 = V_0;
		NullCheck((Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)L_10);
		PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  L_12;
		L_12 = ((  PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  (*) (Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::Dispose() */, (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m842412852271AADCF28804A1C3CF3D694993B15F_gshared (WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213 * __this, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * L_1 = (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *, RuntimeObject*, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mDCD4DD7AD696C370B20EBB74ABE7947A59F4A08D_gshared (WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B * __this, RuntimeObject* ___source0, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate1, Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectEnumerableIterator_2_Clone_m62A1CD2CEF005690F05015E07EF4BB124D6FAA52_gshared (WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * L_2 = (Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B * L_3 = (WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B *, RuntimeObject*, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m09DEC85D506A6ADB108E3485F95A826EE2AA1CC2_gshared (WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m83C68FEEB2C08875E4269C3CEE3DEABAE281908D_gshared (WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_6;
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_7 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_8 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_9 = V_1;
		NullCheck((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_8, (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * L_11 = (Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *)__this->get_selector_5();
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_12 = V_1;
		NullCheck((Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *)L_11, (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m67296C66646446E7051347BCFA0CE5BC920F5A3D_gshared (WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m73890CCC8F971845925EB13071EC19AD13DF21E3_gshared (WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E * __this, RuntimeObject* ___source0, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate1, Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_m72C0819A02350AB0B079D4CB635DBC1CA69A8CDE_gshared (WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_2 = (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E * L_3 = (WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E *, RuntimeObject*, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mCD09FFA184BBF97F27FC58B8D7E20EFEA9FB9E83_gshared (WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m9A02AF5031CEEDE6BD2FBC96F069A896C272882C_gshared (WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_6;
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_7 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_8 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_9 = V_1;
		NullCheck((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_8, (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_11 = (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)__this->get_selector_5();
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_12 = V_1;
		NullCheck((Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_11, (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mF42F1216F337AD915DDEE4B7CA7F7125350B70EB_gshared (WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,Mirror.Examples.MultipleMatch.PlayerInfo>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m0FFDB9EF37CAC7699D9358564B017BFB2A045261_gshared (WhereSelectEnumerableIterator_2_tF3AAEF187BDED068096DE611AD3F194A6480C337 * __this, RuntimeObject* ___source0, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate1, Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		((  void (*) (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,Mirror.Examples.MultipleMatch.PlayerInfo>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F * WhereSelectEnumerableIterator_2_Clone_m5A1B67CDD37327653070032A50C04E361780EC0A_gshared (WhereSelectEnumerableIterator_2_tF3AAEF187BDED068096DE611AD3F194A6480C337 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 * L_2 = (Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tF3AAEF187BDED068096DE611AD3F194A6480C337 * L_3 = (WhereSelectEnumerableIterator_2_tF3AAEF187BDED068096DE611AD3F194A6480C337 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tF3AAEF187BDED068096DE611AD3F194A6480C337 *, RuntimeObject*, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,Mirror.Examples.MultipleMatch.PlayerInfo>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mE1F8D9F2E49466C156A270B652D0C0E9B122BB38_gshared (WhereSelectEnumerableIterator_2_tF3AAEF187BDED068096DE611AD3F194A6480C337 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		((  void (*) (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,Mirror.Examples.MultipleMatch.PlayerInfo>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mCAC2323B7AF88A07E0A64D90C0F6E62684171E75_gshared (WhereSelectEnumerableIterator_2_tF3AAEF187BDED068096DE611AD3F194A6480C337 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_6;
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_7 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_8 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_9 = V_1;
		NullCheck((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_8, (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 * L_11 = (Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 *)__this->get_selector_5();
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_12 = V_1;
		NullCheck((Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 *)L_11);
		PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  L_13;
		L_13 = ((  PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  (*) (Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 *, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 *)L_11, (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::Dispose() */, (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,Mirror.Examples.MultipleMatch.PlayerInfo>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m1447245C1A8AA5A491C1DCBF690BC62D56694501_gshared (WhereSelectEnumerableIterator_2_tF3AAEF187BDED068096DE611AD3F194A6480C337 * __this, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * L_1 = (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *, RuntimeObject*, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Mirror.Cloud.ListServerService.KeyValue>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mE1EEA6E388B983C1B0499CE8BB2F887B76A0E4BE_gshared (WhereSelectEnumerableIterator_2_tED1D0ABEBF2FF958A01724580E97848AF9F7FDEB * __this, RuntimeObject* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this);
		((  void (*) (Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Mirror.Cloud.ListServerService.KeyValue>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B * WhereSelectEnumerableIterator_2_Clone_m1296E0A0664A0C8683D3EDD0545A141D5CAEBF07_gshared (WhereSelectEnumerableIterator_2_tED1D0ABEBF2FF958A01724580E97848AF9F7FDEB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 * L_2 = (Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tED1D0ABEBF2FF958A01724580E97848AF9F7FDEB * L_3 = (WhereSelectEnumerableIterator_2_tED1D0ABEBF2FF958A01724580E97848AF9F7FDEB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tED1D0ABEBF2FF958A01724580E97848AF9F7FDEB *, RuntimeObject*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Mirror.Cloud.ListServerService.KeyValue>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m0C0B3FB76DEEB091FA44E8CE08EF0FB352F32091_gshared (WhereSelectEnumerableIterator_2_tED1D0ABEBF2FF958A01724580E97848AF9F7FDEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this);
		((  void (*) (Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Mirror.Cloud.ListServerService.KeyValue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mAD17A02CEC12EBEBBA1F9969BCF1294ECF1F2487_gshared (WhereSelectEnumerableIterator_2_tED1D0ABEBF2FF958A01724580E97848AF9F7FDEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_8 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 * L_11 = (Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_12 = V_1;
		NullCheck((Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 *)L_11);
		KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  L_13;
		L_13 = ((  KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  (*) (Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 *)L_11, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Mirror.Cloud.ListServerService.KeyValue>::Dispose() */, (Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Mirror.Cloud.ListServerService.KeyValue>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m39A0603CA897D651E861C60158544D8680BDB114_gshared (WhereSelectEnumerableIterator_2_tED1D0ABEBF2FF958A01724580E97848AF9F7FDEB * __this, Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t5916DAE089C894458C6EEF85DDDD344556850B2C * L_1 = (WhereEnumerableIterator_1_t5916DAE089C894458C6EEF85DDDD344556850B2C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t5916DAE089C894458C6EEF85DDDD344556850B2C *, RuntimeObject*, Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m9CEC6678D452FE2C2E4AFDC3563AED4ADB571A90_gshared (WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D * __this, RuntimeObject* ___source0, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate1, Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectEnumerableIterator_2_Clone_m51093606DE2CFCAC2C2323115CB9F42E46DE5FA8_gshared (WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * L_2 = (Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D * L_3 = (WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D *, RuntimeObject*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m9E085372B7589E4BEF9BDD055751A8008991F9E3_gshared (WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m97DFB7430A8DC7CD2B43A8A0B07A7BF10264753F_gshared (WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32Enum>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32Enum>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int32_t)L_6;
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_7 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_8 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		NullCheck((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * L_11 = (Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *)__this->get_selector_5();
		int32_t L_12 = V_1;
		NullCheck((Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m98E9E6383F1E76C78F25EAE73325D534F15CBE27_gshared (WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m47635847AC02479D7C58622F296DCBF88E18C4B0_gshared (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 * __this, RuntimeObject* ___source0, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate1, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_mF150C4600D50245151AE0E8029CC7CBAB303E754_gshared (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 * L_3 = (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 *, RuntimeObject*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m71E88D558F1C66319831455654381D3FD5E6FE94_gshared (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m8A98578C5E3B29ACA85548212356E9619C83FF3C_gshared (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32Enum>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32Enum>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int32_t)L_6;
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_7 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_8 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		NullCheck((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_11 = (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)__this->get_selector_5();
		int32_t L_12 = V_1;
		NullCheck((Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m02212A04F4819B1D035DD77EAFBF32B448CB8F14_gshared (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,Mirror.Examples.MultipleMatch.PlayerInfo>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mD1773E57888E9BD0A71AEA2292420AF0C9F0CE56_gshared (WhereSelectEnumerableIterator_2_t377F90D7422506FEF13EF536EE4C77A5FE93AFA2 * __this, RuntimeObject* ___source0, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate1, Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		((  void (*) (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,Mirror.Examples.MultipleMatch.PlayerInfo>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F * WhereSelectEnumerableIterator_2_Clone_m1DB83E680B70E69E5636CF7695407AF22107A150_gshared (WhereSelectEnumerableIterator_2_t377F90D7422506FEF13EF536EE4C77A5FE93AFA2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 * L_2 = (Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t377F90D7422506FEF13EF536EE4C77A5FE93AFA2 * L_3 = (WhereSelectEnumerableIterator_2_t377F90D7422506FEF13EF536EE4C77A5FE93AFA2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t377F90D7422506FEF13EF536EE4C77A5FE93AFA2 *, RuntimeObject*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,Mirror.Examples.MultipleMatch.PlayerInfo>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m6AB5F7916C3FC9036C27709C81B519FF44725914_gshared (WhereSelectEnumerableIterator_2_t377F90D7422506FEF13EF536EE4C77A5FE93AFA2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		((  void (*) (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,Mirror.Examples.MultipleMatch.PlayerInfo>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m5E1F9523A12E3D609DB663C05AA69D7A9C373734_gshared (WhereSelectEnumerableIterator_2_t377F90D7422506FEF13EF536EE4C77A5FE93AFA2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32Enum>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32Enum>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int32_t)L_6;
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_7 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_8 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		NullCheck((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 * L_11 = (Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 *)__this->get_selector_5();
		int32_t L_12 = V_1;
		NullCheck((Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 *)L_11);
		PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  L_13;
		L_13 = ((  PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  (*) (Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::Dispose() */, (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,Mirror.Examples.MultipleMatch.PlayerInfo>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m0A3D8495FF9FBB93065370BF4213AB9F290904E6_gshared (WhereSelectEnumerableIterator_2_t377F90D7422506FEF13EF536EE4C77A5FE93AFA2 * __this, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * L_1 = (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *, RuntimeObject*, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m942924EB1F576CB7906FC0D1AE34C855DF1084B9_gshared (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectEnumerableIterator_2_Clone_m1D22FFCBE9EDC4BA771C14DF5EAB0AE3DE0335AE_gshared (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_2 = (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D * L_3 = (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m2D488A3025C16C7E87BF820DA7BCF3D6A226DA23_gshared (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mBC6D67E32DDE2CAE404BDB1BA4DC413948BAD258_gshared (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_11 = (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m7BE31A8F105546603E49F9E36C977E10736266BC_gshared (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m6DFD3E949A8FA5121F520D501B78C17E84EBDFAC_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_mD5F17A02281E6D1529D117CFF2E0F8C347D1B13F_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * L_3 = (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mAA70577DEF67CEC98FE677984AE2175B7D4E4D00_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m95AEE737A22EFFFE6557F448BF5AFCC6241D0BD7_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_11 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m72A38A8170E8B837F5C090642BE08E3845A8EB37_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mF82AA0AA2C5779BB822F08C4AE814149916D9439_gshared (WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116 * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		((  void (*) (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F * WhereSelectEnumerableIterator_2_Clone_mF5BB16892B71222555556437C6CCFD8FFA9219E4_gshared (WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * L_2 = (Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116 * L_3 = (WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m6F20EFDA733BCA152850CADEF1A5613FA90B8BD5_gshared (WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		((  void (*) (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mDCBC080662D0E8F0711129AD7EEF5491AAB966E4_gshared (WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * L_11 = (Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)L_11);
		PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  L_13;
		L_13 = ((  PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  (*) (Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::Dispose() */, (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m5403D8244A072F58A818C303B12E3F78AB6F3FE9_gshared (WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116 * __this, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * L_1 = (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *, RuntimeObject*, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDB0C6E235CB7AB66A6E28903A6A3ADF4FD6E6811_gshared (WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206 * __this, List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * ___source0, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate1, Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectListIterator_2_Clone_m29E3C0823DB1EBAC0E2710553D24DFFEDBB513E6_gshared (WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206 * __this, const RuntimeMethod* method)
{
	{
		List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * L_0 = (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * L_2 = (Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *)__this->get_selector_5();
		WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206 * L_3 = (WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206 *, List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9D274FD203CBD6C044192F6671E46D113899C9C5_gshared (WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * L_3 = (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)__this->get_source_3();
		NullCheck((List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)L_3);
		Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  L_4;
		L_4 = ((  Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  (*) (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 * L_5 = (Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *)__this->get_address_of_enumerator_6();
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_6;
		L_6 = Enumerator_get_Current_m506A69CB2171FCCF5B63CD09DF4ADB53A9184464_inline((Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *)(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_6;
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_7 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_8 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_9 = V_1;
		NullCheck((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_8, (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * L_11 = (Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *)__this->get_selector_5();
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_12 = V_1;
		NullCheck((Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *)L_11, (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 * L_14 = (Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mEDD63BEF27E5F1D2EBDF0E8D6C8F1AAA94118864((Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *)(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m2D2185AF46AE475A63F2A6C55695B419DE3D06F0_gshared (WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206 * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mE6AED97B384FDED5F9FCAACF22CEEBAC171ADA29_gshared (WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5 * __this, List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * ___source0, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate1, Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m9A4113FD02DB1D07951D41178974F33CEDE752B8_gshared (WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5 * __this, const RuntimeMethod* method)
{
	{
		List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * L_0 = (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_2 = (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)__this->get_selector_5();
		WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5 * L_3 = (WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5 *, List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mED9476DF906B749E2E6C2F05C65F1F72A6F21D62_gshared (WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * L_3 = (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)__this->get_source_3();
		NullCheck((List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)L_3);
		Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  L_4;
		L_4 = ((  Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  (*) (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 * L_5 = (Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *)__this->get_address_of_enumerator_6();
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_6;
		L_6 = Enumerator_get_Current_m506A69CB2171FCCF5B63CD09DF4ADB53A9184464_inline((Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *)(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_6;
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_7 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_8 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_9 = V_1;
		NullCheck((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_8, (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_11 = (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)__this->get_selector_5();
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_12 = V_1;
		NullCheck((Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_11, (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 * L_14 = (Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mEDD63BEF27E5F1D2EBDF0E8D6C8F1AAA94118864((Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *)(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mFAB620F9072B856CD723E3DC453E2EA512B14279_gshared (WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,Mirror.Examples.MultipleMatch.PlayerInfo>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m57349C548E46E3AE580DEA0DAADF296BC5DCE825_gshared (WhereSelectListIterator_2_tC5715C08EF4B0C26C43D8EFE4EC6DF00DE343471 * __this, List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * ___source0, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate1, Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		((  void (*) (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,Mirror.Examples.MultipleMatch.PlayerInfo>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F * WhereSelectListIterator_2_Clone_mFC206E92F526A519FA6FB2524DE0E4897DF53A76_gshared (WhereSelectListIterator_2_tC5715C08EF4B0C26C43D8EFE4EC6DF00DE343471 * __this, const RuntimeMethod* method)
{
	{
		List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * L_0 = (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 * L_2 = (Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 *)__this->get_selector_5();
		WhereSelectListIterator_2_tC5715C08EF4B0C26C43D8EFE4EC6DF00DE343471 * L_3 = (WhereSelectListIterator_2_tC5715C08EF4B0C26C43D8EFE4EC6DF00DE343471 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tC5715C08EF4B0C26C43D8EFE4EC6DF00DE343471 *, List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,Mirror.Examples.MultipleMatch.PlayerInfo>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mC61AD459C07A61217123AD0A6D81EC95A8B5CE1A_gshared (WhereSelectListIterator_2_tC5715C08EF4B0C26C43D8EFE4EC6DF00DE343471 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * L_3 = (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)__this->get_source_3();
		NullCheck((List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)L_3);
		Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  L_4;
		L_4 = ((  Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  (*) (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 * L_5 = (Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *)__this->get_address_of_enumerator_6();
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_6;
		L_6 = Enumerator_get_Current_m506A69CB2171FCCF5B63CD09DF4ADB53A9184464_inline((Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *)(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_6;
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_7 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_8 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_9 = V_1;
		NullCheck((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_8, (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 * L_11 = (Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 *)__this->get_selector_5();
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_12 = V_1;
		NullCheck((Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 *)L_11);
		PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  L_13;
		L_13 = ((  PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  (*) (Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 *, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t17B8A8E5FDA823E4BF69FF311D133AB1796ADBE3 *)L_11, (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 * L_14 = (Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mEDD63BEF27E5F1D2EBDF0E8D6C8F1AAA94118864((Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *)(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::Dispose() */, (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,Mirror.Examples.MultipleMatch.PlayerInfo>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m167FDEB121EB28E003D23FB0073C917DE8F2F6B8_gshared (WhereSelectListIterator_2_tC5715C08EF4B0C26C43D8EFE4EC6DF00DE343471 * __this, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * L_1 = (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *, RuntimeObject*, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Mirror.Cloud.ListServerService.KeyValue>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m3DEF23B61771265924BE9DF6FEC92014210CE4BC_gshared (WhereSelectListIterator_2_t124829D22185377A9F8EFF28BA043615AAAF36B9 * __this, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this);
		((  void (*) (Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Mirror.Cloud.ListServerService.KeyValue>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B * WhereSelectListIterator_2_Clone_m318AA207D27289180E18F5954E7A304B1D37F807_gshared (WhereSelectListIterator_2_t124829D22185377A9F8EFF28BA043615AAAF36B9 * __this, const RuntimeMethod* method)
{
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 * L_2 = (Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 *)__this->get_selector_5();
		WhereSelectListIterator_2_t124829D22185377A9F8EFF28BA043615AAAF36B9 * L_3 = (WhereSelectListIterator_2_t124829D22185377A9F8EFF28BA043615AAAF36B9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t124829D22185377A9F8EFF28BA043615AAAF36B9 *, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Mirror.Cloud.ListServerService.KeyValue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m3A4D91898081F8DDD2CE407441222CB6276DD8B7_gshared (WhereSelectListIterator_2_t124829D22185377A9F8EFF28BA043615AAAF36B9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_3 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		NullCheck((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3);
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  L_4;
		L_4 = ((  Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  (*) (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_5 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_6();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_inline((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_8 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 * L_11 = (Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_12 = V_1;
		NullCheck((Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 *)L_11);
		KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  L_13;
		L_13 = ((  KeyValue_t0F3C5C28E58D4980486F31F2C33C3980AF3CBFD4  (*) (Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tB2BE128C81CFD4CF85968409A169AEE2E24E0175 *)L_11, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_14 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Mirror.Cloud.ListServerService.KeyValue>::Dispose() */, (Iterator_1_t9A23DD942ACC48FB3AE4025C483E74CCDE589F9B *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Mirror.Cloud.ListServerService.KeyValue>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m39BDA7CB3E92FA8911128E6C6DFCA852D8D9AB71_gshared (WhereSelectListIterator_2_t124829D22185377A9F8EFF28BA043615AAAF36B9 * __this, Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t5916DAE089C894458C6EEF85DDDD344556850B2C * L_1 = (WhereEnumerableIterator_1_t5916DAE089C894458C6EEF85DDDD344556850B2C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t5916DAE089C894458C6EEF85DDDD344556850B2C *, RuntimeObject*, Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t06DC22ED2C58A023514D53E97A45B51918F2FB53 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m60E22D0AE9E4C880251E5D9732C3ABBE88ADC4EF_gshared (WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB * __this, List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___source0, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate1, Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectListIterator_2_Clone_m5EEF76EB1A2DC2EF4CE1E3A635C2A07B7EF78B99_gshared (WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB * __this, const RuntimeMethod* method)
{
	{
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_0 = (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * L_2 = (Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *)__this->get_selector_5();
		WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB * L_3 = (WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB *, List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9EB7197F911B69B0306609231368CD52824585CB_gshared (WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_3 = (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)__this->get_source_3();
		NullCheck((List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_3);
		Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  L_4;
		L_4 = ((  Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  (*) (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * L_5 = (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)__this->get_address_of_enumerator_6();
		int32_t L_6;
		L_6 = Enumerator_get_Current_mDD503AFD786235D3B40842B0872AC17DC86EB040_inline((Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (int32_t)L_6;
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_7 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_8 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		NullCheck((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * L_11 = (Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *)__this->get_selector_5();
		int32_t L_12 = V_1;
		NullCheck((Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * L_14 = (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mDECBD2FBFA44578D8E050CECB33BF350152E111A((Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m33BCEE32D02458DD13AA2C6391815C58B7948438_gshared (WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mC542F38EC17CA13C41DB738F0D825E697982CA4E_gshared (WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 * __this, List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___source0, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate1, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m9A196A73CDF63D17862E2CA0BFF6FDCA3D0E8E47_gshared (WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 * __this, const RuntimeMethod* method)
{
	{
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_0 = (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)__this->get_selector_5();
		WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 * L_3 = (WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 *, List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m10D83660FAC86C1CBD7ED4E1368F14B5478499A5_gshared (WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_3 = (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)__this->get_source_3();
		NullCheck((List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_3);
		Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  L_4;
		L_4 = ((  Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  (*) (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * L_5 = (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)__this->get_address_of_enumerator_6();
		int32_t L_6;
		L_6 = Enumerator_get_Current_mDD503AFD786235D3B40842B0872AC17DC86EB040_inline((Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (int32_t)L_6;
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_7 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_8 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		NullCheck((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_11 = (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)__this->get_selector_5();
		int32_t L_12 = V_1;
		NullCheck((Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * L_14 = (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mDECBD2FBFA44578D8E050CECB33BF350152E111A((Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1E339E047A89DE7D5B31A0AE1A48944B1C933300_gshared (WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,Mirror.Examples.MultipleMatch.PlayerInfo>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m55B93CB7AD427BBB9377761EC38105BB53DB0E84_gshared (WhereSelectListIterator_2_t4048170DFAF3C66F5F9ABA4F767418179F7FB0D0 * __this, List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___source0, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate1, Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		((  void (*) (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,Mirror.Examples.MultipleMatch.PlayerInfo>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F * WhereSelectListIterator_2_Clone_m9751C9E9BB5F77662B110C7408C0A83D8ABB0ECB_gshared (WhereSelectListIterator_2_t4048170DFAF3C66F5F9ABA4F767418179F7FB0D0 * __this, const RuntimeMethod* method)
{
	{
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_0 = (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 * L_2 = (Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 *)__this->get_selector_5();
		WhereSelectListIterator_2_t4048170DFAF3C66F5F9ABA4F767418179F7FB0D0 * L_3 = (WhereSelectListIterator_2_t4048170DFAF3C66F5F9ABA4F767418179F7FB0D0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t4048170DFAF3C66F5F9ABA4F767418179F7FB0D0 *, List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,Mirror.Examples.MultipleMatch.PlayerInfo>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m07B29FAF8ED8693F3D9BC9524C08AED9DB4D64AE_gshared (WhereSelectListIterator_2_t4048170DFAF3C66F5F9ABA4F767418179F7FB0D0 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_3 = (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)__this->get_source_3();
		NullCheck((List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_3);
		Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  L_4;
		L_4 = ((  Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  (*) (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * L_5 = (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)__this->get_address_of_enumerator_6();
		int32_t L_6;
		L_6 = Enumerator_get_Current_mDD503AFD786235D3B40842B0872AC17DC86EB040_inline((Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (int32_t)L_6;
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_7 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_8 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		NullCheck((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 * L_11 = (Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 *)__this->get_selector_5();
		int32_t L_12 = V_1;
		NullCheck((Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 *)L_11);
		PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  L_13;
		L_13 = ((  PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  (*) (Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD2EAA8713F02253D8C278A66ED02921665957711 *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * L_14 = (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mDECBD2FBFA44578D8E050CECB33BF350152E111A((Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::Dispose() */, (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,Mirror.Examples.MultipleMatch.PlayerInfo>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mCE5DA917FBD9862EA2CB4841520CE29B6C2842CE_gshared (WhereSelectListIterator_2_t4048170DFAF3C66F5F9ABA4F767418179F7FB0D0 * __this, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * L_1 = (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *, RuntimeObject*, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA18E5B755DF06EAE14007C295ACE48C7E0615BAE_gshared (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectListIterator_2_Clone_mFEFF616AB589FF68AA4BCFE920814C287AC50268_gshared (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_2 = (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)__this->get_selector_5();
		WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 * L_3 = (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m758147C75B5A6CB8C86D4FEA039965940D0BDD6C_gshared (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_11 = (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_14 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mB03479084DC9989DEAC9938DC78329DC769EFA14_gshared (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mCF313A191371C8CCC2E79D89A3BF21714EFDB20E_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m667BCD94E83BB3A02AF2D66E07B089FA86971342_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * L_3 = (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mEE0E8B173345B059100E0736D106FFAE0C2D29CA_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_11 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_14 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAC87184664F73DD7F3EC4AB4CE2BDE71BE76249D_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m00A5EFD3110BE67160CD1308CD0DCDAD0B0ABC33_gshared (WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		((  void (*) (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F * WhereSelectListIterator_2_Clone_m3B606B46BD9CCF51F74B95EE46128776B62D8BBB_gshared (WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * L_2 = (Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)__this->get_selector_5();
		WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139 * L_3 = (WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mA8851E48DE925776AEFEDC3CAB8EF1EF3AF48683_gshared (WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * L_11 = (Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)L_11);
		PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  L_13;
		L_13 = ((  PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  (*) (Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_14 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::Dispose() */, (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m463EB8CD9BCBBDC82C15944EB5C6081BFEDDD73B_gshared (WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139 * __this, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * L_1 = (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *, RuntimeObject*, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  Enumerator_get_Current_m506A69CB2171FCCF5B63CD09DF4ADB53A9184464_gshared_inline (Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  L_0 = (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )__this->get_current_3();
		return (KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mDD503AFD786235D3B40842B0872AC17DC86EB040_gshared_inline (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_current_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_gshared_inline (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
