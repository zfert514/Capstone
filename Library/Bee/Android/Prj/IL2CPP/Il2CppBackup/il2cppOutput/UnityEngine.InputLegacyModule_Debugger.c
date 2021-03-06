#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[19] = 
{
	{ 4259, 0,  2 } /*tableIndex: 0 */,
	{ 2881, 1,  2 } /*tableIndex: 1 */,
	{ 2881, 2,  3 } /*tableIndex: 2 */,
	{ 2077, 3,  4 } /*tableIndex: 3 */,
	{ 2881, 4,  5 } /*tableIndex: 4 */,
	{ 4259, 5,  5 } /*tableIndex: 5 */,
	{ 3519, 6,  5 } /*tableIndex: 6 */,
	{ 3509, 7,  5 } /*tableIndex: 7 */,
	{ 3752, 8,  5 } /*tableIndex: 8 */,
	{ 3752, 9,  5 } /*tableIndex: 9 */,
	{ 2621, 10,  5 } /*tableIndex: 10 */,
	{ 2621, 11,  5 } /*tableIndex: 11 */,
	{ 2881, 12,  6 } /*tableIndex: 12 */,
	{ 3752, 13,  6 } /*tableIndex: 13 */,
	{ 3752, 14,  6 } /*tableIndex: 14 */,
	{ 4252, 15,  6 } /*tableIndex: 15 */,
	{ 2881, 2,  7 } /*tableIndex: 16 */,
	{ 1993, 16,  8 } /*tableIndex: 17 */,
	{ 1993, 17,  8 } /*tableIndex: 18 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[18] = 
{
	"mousePosition",
	"camerasCount",
	"hitIndex",
	"camera",
	"displayIndex",
	"eventPosition",
	"rect",
	"screenProjectionRay",
	"projectionDirection",
	"distanceToClipPlane",
	"hit3D",
	"hit2D",
	"eventDisplayIndex",
	"w",
	"h",
	"pos",
	"mouseDownThisFrame",
	"mousePressed",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[21] = 
{
	{ 0, 0 } /* 0x06000001 UnityEngine.Vector2 UnityEngine.Touch::get_position() */,
	{ 0, 0 } /* 0x06000002 UnityEngine.TouchPhase UnityEngine.Touch::get_phase() */,
	{ 0, 0 } /* 0x06000003 UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry(UnityEngine.Camera,UnityEngine.Ray,System.Single,System.Int32) */,
	{ 0, 0 } /* 0x06000004 UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray,System.Single,System.Int32) */,
	{ 0, 0 } /* 0x06000005 UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32) */,
	{ 0, 0 } /* 0x06000006 UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry2D_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32) */,
	{ 0, 0 } /* 0x06000007 System.Boolean UnityEngine.Input::GetButton(System.String) */,
	{ 0, 0 } /* 0x06000008 System.Boolean UnityEngine.Input::GetMouseButton(System.Int32) */,
	{ 0, 0 } /* 0x06000009 System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32) */,
	{ 0, 0 } /* 0x0600000A UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32) */,
	{ 0, 0 } /* 0x0600000B UnityEngine.Vector3 UnityEngine.Input::get_mousePosition() */,
	{ 0, 0 } /* 0x0600000C System.Int32 UnityEngine.Input::get_touchCount() */,
	{ 0, 0 } /* 0x0600000D System.Void UnityEngine.Input::GetTouch_Injected(System.Int32,UnityEngine.Touch&) */,
	{ 0, 0 } /* 0x0600000E System.Void UnityEngine.Input::get_mousePosition_Injected(UnityEngine.Vector3&) */,
	{ 0, 0 } /* 0x0600000F System.Void UnityEngine.SendMouseEvents::SetMouseMoved() */,
	{ 0, 17 } /* 0x06000010 System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32) */,
	{ 17, 2 } /* 0x06000011 System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo) */,
	{ 0, 0 } /* 0x06000012 System.Void UnityEngine.SendMouseEvents::.cctor() */,
	{ 0, 0 } /* 0x06000013 System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String) */,
	{ 0, 0 } /* 0x06000014 System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo) */,
	{ 0, 0 } /* 0x06000015 System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_InputLegacyModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_InputLegacyModule[256] = 
{
	{ 11432, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 11432, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 11432, 1, 52, 52, 39, 40, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 11432, 1, 52, 52, 41, 59, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 11432, 1, 52, 52, 60, 61, 10, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 11433, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 11433, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 11433, 1, 57, 57, 39, 40, 0, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 11433, 1, 57, 57, 41, 56, 1, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 11433, 1, 57, 57, 57, 58, 10, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 11446, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 11446, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 11446, 2, 44, 44, 9, 10, 0, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 11446, 2, 45, 45, 13, 32, 1, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 11446, 2, 46, 46, 9, 10, 7, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 11447, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 11447, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 11447, 2, 50, 50, 9, 10, 0, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 11447, 2, 51, 51, 13, 53, 1, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 11447, 2, 51, 51, 13, 53, 1, kSequencePointKind_StepOut, 0, 19 } /* seqPointIndex: 19 */,
	{ 11447, 2, 53, 53, 13, 55, 7, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 11447, 2, 53, 53, 13, 55, 7, kSequencePointKind_StepOut, 0, 21 } /* seqPointIndex: 21 */,
	{ 11447, 2, 54, 54, 13, 71, 13, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 11447, 2, 54, 54, 0, 0, 37, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 11447, 2, 55, 55, 17, 54, 40, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 11447, 2, 58, 58, 13, 45, 51, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 11447, 2, 58, 58, 13, 45, 56, kSequencePointKind_StepOut, 0, 26 } /* seqPointIndex: 26 */,
	{ 11447, 2, 61, 61, 18, 34, 62, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 11447, 2, 61, 61, 0, 0, 64, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 11447, 2, 62, 62, 17, 56, 66, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 11447, 2, 61, 61, 68, 78, 83, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 11447, 2, 61, 61, 36, 66, 87, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 11447, 2, 61, 61, 0, 0, 99, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 11447, 2, 66, 66, 13, 30, 103, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 11447, 2, 66, 66, 0, 0, 113, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 11447, 2, 67, 67, 13, 14, 120, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 11447, 2, 68, 68, 17, 24, 121, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 11447, 2, 68, 68, 40, 49, 122, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 11447, 2, 68, 68, 0, 0, 132, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 11447, 2, 68, 68, 26, 36, 137, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 11447, 2, 69, 69, 17, 18, 144, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 11447, 2, 71, 71, 21, 94, 145, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 11447, 2, 71, 71, 21, 94, 148, kSequencePointKind_StepOut, 0, 42 } /* seqPointIndex: 42 */,
	{ 11447, 2, 71, 71, 21, 94, 160, kSequencePointKind_StepOut, 0, 43 } /* seqPointIndex: 43 */,
	{ 11447, 2, 71, 71, 21, 94, 166, kSequencePointKind_StepOut, 0, 44 } /* seqPointIndex: 44 */,
	{ 11447, 2, 71, 71, 0, 0, 179, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 11447, 2, 72, 72, 25, 34, 183, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 11447, 2, 74, 74, 21, 61, 188, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 11447, 2, 74, 74, 21, 61, 190, kSequencePointKind_StepOut, 0, 48 } /* seqPointIndex: 48 */,
	{ 11447, 2, 76, 76, 21, 80, 197, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 11447, 2, 76, 76, 21, 80, 198, kSequencePointKind_StepOut, 0, 50 } /* seqPointIndex: 50 */,
	{ 11447, 2, 78, 78, 21, 55, 205, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 11447, 2, 78, 78, 21, 55, 207, kSequencePointKind_StepOut, 0, 52 } /* seqPointIndex: 52 */,
	{ 11447, 2, 78, 78, 21, 55, 212, kSequencePointKind_StepOut, 0, 53 } /* seqPointIndex: 53 */,
	{ 11447, 2, 78, 78, 0, 0, 219, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 11447, 2, 79, 79, 21, 22, 226, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 11447, 2, 81, 81, 25, 70, 227, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 11447, 2, 84, 84, 25, 63, 237, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 11447, 2, 84, 84, 0, 0, 248, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 11447, 2, 85, 85, 29, 38, 252, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 11447, 2, 90, 90, 25, 48, 257, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 11447, 2, 90, 90, 25, 48, 257, kSequencePointKind_StepOut, 0, 61 } /* seqPointIndex: 61 */,
	{ 11447, 2, 91, 91, 25, 49, 265, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 11447, 2, 91, 91, 25, 49, 265, kSequencePointKind_StepOut, 0, 63 } /* seqPointIndex: 63 */,
	{ 11447, 2, 92, 92, 25, 88, 273, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 11447, 2, 92, 92, 0, 0, 294, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 11447, 2, 93, 93, 25, 26, 298, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 11447, 2, 94, 94, 29, 76, 299, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 11447, 2, 94, 94, 29, 76, 307, kSequencePointKind_StepOut, 0, 68 } /* seqPointIndex: 68 */,
	{ 11447, 2, 95, 95, 29, 77, 315, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 11447, 2, 95, 95, 29, 77, 323, kSequencePointKind_StepOut, 0, 70 } /* seqPointIndex: 70 */,
	{ 11447, 2, 96, 96, 25, 26, 331, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 11447, 2, 98, 98, 25, 93, 332, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 11447, 2, 98, 98, 25, 93, 354, kSequencePointKind_StepOut, 0, 73 } /* seqPointIndex: 73 */,
	{ 11447, 2, 101, 101, 25, 82, 359, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 11447, 2, 101, 101, 0, 0, 420, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 11447, 2, 102, 102, 29, 38, 424, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 11447, 2, 103, 103, 21, 22, 429, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 11447, 2, 103, 103, 0, 0, 430, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 11447, 2, 105, 105, 21, 22, 432, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 11447, 2, 108, 108, 25, 55, 433, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 11447, 2, 114, 114, 21, 22, 436, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 11447, 2, 117, 117, 21, 49, 437, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 11447, 2, 117, 117, 21, 49, 439, kSequencePointKind_StepOut, 0, 83 } /* seqPointIndex: 83 */,
	{ 11447, 2, 118, 118, 21, 55, 446, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 11447, 2, 118, 118, 21, 55, 450, kSequencePointKind_StepOut, 0, 85 } /* seqPointIndex: 85 */,
	{ 11447, 2, 118, 118, 0, 0, 460, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 11447, 2, 119, 119, 25, 34, 464, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 11447, 2, 123, 123, 21, 47, 469, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 11447, 2, 123, 123, 21, 47, 471, kSequencePointKind_StepOut, 0, 89 } /* seqPointIndex: 89 */,
	{ 11447, 2, 123, 123, 0, 0, 481, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 11447, 2, 124, 124, 25, 34, 485, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 11447, 2, 127, 127, 21, 86, 490, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 11447, 2, 127, 127, 21, 86, 494, kSequencePointKind_StepOut, 0, 93 } /* seqPointIndex: 93 */,
	{ 11447, 2, 128, 128, 21, 79, 501, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
	{ 11447, 2, 128, 128, 21, 79, 503, kSequencePointKind_StepOut, 0, 95 } /* seqPointIndex: 95 */,
	{ 11447, 2, 129, 129, 21, 191, 515, kSequencePointKind_Normal, 0, 96 } /* seqPointIndex: 96 */,
	{ 11447, 2, 129, 129, 21, 191, 522, kSequencePointKind_StepOut, 0, 97 } /* seqPointIndex: 97 */,
	{ 11447, 2, 129, 129, 21, 191, 531, kSequencePointKind_StepOut, 0, 98 } /* seqPointIndex: 98 */,
	{ 11447, 2, 129, 129, 21, 191, 538, kSequencePointKind_StepOut, 0, 99 } /* seqPointIndex: 99 */,
	{ 11447, 2, 129, 129, 21, 191, 547, kSequencePointKind_StepOut, 0, 100 } /* seqPointIndex: 100 */,
	{ 11447, 2, 132, 132, 21, 153, 561, kSequencePointKind_Normal, 0, 101 } /* seqPointIndex: 101 */,
	{ 11447, 2, 132, 132, 21, 153, 569, kSequencePointKind_StepOut, 0, 102 } /* seqPointIndex: 102 */,
	{ 11447, 2, 132, 132, 21, 153, 576, kSequencePointKind_StepOut, 0, 103 } /* seqPointIndex: 103 */,
	{ 11447, 2, 132, 132, 21, 153, 582, kSequencePointKind_StepOut, 0, 104 } /* seqPointIndex: 104 */,
	{ 11447, 2, 133, 133, 21, 39, 589, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 11447, 2, 133, 133, 21, 39, 592, kSequencePointKind_StepOut, 0, 106 } /* seqPointIndex: 106 */,
	{ 11447, 2, 133, 133, 0, 0, 599, kSequencePointKind_Normal, 0, 107 } /* seqPointIndex: 107 */,
	{ 11447, 2, 134, 134, 21, 22, 603, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 11447, 2, 135, 135, 25, 74, 604, kSequencePointKind_Normal, 0, 109 } /* seqPointIndex: 109 */,
	{ 11447, 2, 136, 136, 25, 75, 622, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 11447, 2, 137, 137, 21, 22, 640, kSequencePointKind_Normal, 0, 111 } /* seqPointIndex: 111 */,
	{ 11447, 2, 137, 137, 0, 0, 641, kSequencePointKind_Normal, 0, 112 } /* seqPointIndex: 112 */,
	{ 11447, 2, 141, 141, 26, 127, 643, kSequencePointKind_Normal, 0, 113 } /* seqPointIndex: 113 */,
	{ 11447, 2, 141, 141, 26, 127, 645, kSequencePointKind_StepOut, 0, 114 } /* seqPointIndex: 114 */,
	{ 11447, 2, 141, 141, 26, 127, 655, kSequencePointKind_StepOut, 0, 115 } /* seqPointIndex: 115 */,
	{ 11447, 2, 141, 141, 0, 0, 668, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
	{ 11447, 2, 142, 142, 21, 22, 672, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 11447, 2, 143, 143, 25, 73, 673, kSequencePointKind_Normal, 0, 118 } /* seqPointIndex: 118 */,
	{ 11447, 2, 144, 144, 25, 73, 690, kSequencePointKind_Normal, 0, 119 } /* seqPointIndex: 119 */,
	{ 11447, 2, 145, 145, 21, 22, 707, kSequencePointKind_Normal, 0, 120 } /* seqPointIndex: 120 */,
	{ 11447, 2, 148, 148, 21, 155, 708, kSequencePointKind_Normal, 0, 121 } /* seqPointIndex: 121 */,
	{ 11447, 2, 148, 148, 21, 155, 716, kSequencePointKind_StepOut, 0, 122 } /* seqPointIndex: 122 */,
	{ 11447, 2, 148, 148, 21, 155, 723, kSequencePointKind_StepOut, 0, 123 } /* seqPointIndex: 123 */,
	{ 11447, 2, 148, 148, 21, 155, 729, kSequencePointKind_StepOut, 0, 124 } /* seqPointIndex: 124 */,
	{ 11447, 2, 149, 149, 21, 39, 736, kSequencePointKind_Normal, 0, 125 } /* seqPointIndex: 125 */,
	{ 11447, 2, 149, 149, 21, 39, 739, kSequencePointKind_StepOut, 0, 126 } /* seqPointIndex: 126 */,
	{ 11447, 2, 149, 149, 0, 0, 746, kSequencePointKind_Normal, 0, 127 } /* seqPointIndex: 127 */,
	{ 11447, 2, 150, 150, 21, 22, 750, kSequencePointKind_Normal, 0, 128 } /* seqPointIndex: 128 */,
	{ 11447, 2, 151, 151, 25, 74, 751, kSequencePointKind_Normal, 0, 129 } /* seqPointIndex: 129 */,
	{ 11447, 2, 152, 152, 25, 75, 769, kSequencePointKind_Normal, 0, 130 } /* seqPointIndex: 130 */,
	{ 11447, 2, 153, 153, 21, 22, 787, kSequencePointKind_Normal, 0, 131 } /* seqPointIndex: 131 */,
	{ 11447, 2, 153, 153, 0, 0, 788, kSequencePointKind_Normal, 0, 132 } /* seqPointIndex: 132 */,
	{ 11447, 2, 157, 157, 26, 127, 790, kSequencePointKind_Normal, 0, 133 } /* seqPointIndex: 133 */,
	{ 11447, 2, 157, 157, 26, 127, 792, kSequencePointKind_StepOut, 0, 134 } /* seqPointIndex: 134 */,
	{ 11447, 2, 157, 157, 26, 127, 802, kSequencePointKind_StepOut, 0, 135 } /* seqPointIndex: 135 */,
	{ 11447, 2, 157, 157, 0, 0, 815, kSequencePointKind_Normal, 0, 136 } /* seqPointIndex: 136 */,
	{ 11447, 2, 158, 158, 21, 22, 819, kSequencePointKind_Normal, 0, 137 } /* seqPointIndex: 137 */,
	{ 11447, 2, 159, 159, 25, 73, 820, kSequencePointKind_Normal, 0, 138 } /* seqPointIndex: 138 */,
	{ 11447, 2, 160, 160, 25, 73, 837, kSequencePointKind_Normal, 0, 139 } /* seqPointIndex: 139 */,
	{ 11447, 2, 161, 161, 21, 22, 854, kSequencePointKind_Normal, 0, 140 } /* seqPointIndex: 140 */,
	{ 11447, 2, 163, 163, 17, 18, 855, kSequencePointKind_Normal, 0, 141 } /* seqPointIndex: 141 */,
	{ 11447, 2, 163, 163, 0, 0, 856, kSequencePointKind_Normal, 0, 142 } /* seqPointIndex: 142 */,
	{ 11447, 2, 68, 68, 37, 39, 862, kSequencePointKind_Normal, 0, 143 } /* seqPointIndex: 143 */,
	{ 11447, 2, 164, 164, 13, 14, 873, kSequencePointKind_Normal, 0, 144 } /* seqPointIndex: 144 */,
	{ 11447, 2, 167, 167, 18, 34, 874, kSequencePointKind_Normal, 0, 145 } /* seqPointIndex: 145 */,
	{ 11447, 2, 167, 167, 0, 0, 877, kSequencePointKind_Normal, 0, 146 } /* seqPointIndex: 146 */,
	{ 11447, 2, 168, 168, 17, 62, 879, kSequencePointKind_Normal, 0, 147 } /* seqPointIndex: 147 */,
	{ 11447, 2, 168, 168, 17, 62, 893, kSequencePointKind_StepOut, 0, 148 } /* seqPointIndex: 148 */,
	{ 11447, 2, 167, 167, 68, 78, 899, kSequencePointKind_Normal, 0, 149 } /* seqPointIndex: 149 */,
	{ 11447, 2, 167, 167, 36, 66, 905, kSequencePointKind_Normal, 0, 150 } /* seqPointIndex: 150 */,
	{ 11447, 2, 167, 167, 0, 0, 918, kSequencePointKind_Normal, 0, 151 } /* seqPointIndex: 151 */,
	{ 11447, 2, 170, 170, 13, 33, 922, kSequencePointKind_Normal, 0, 152 } /* seqPointIndex: 152 */,
	{ 11447, 2, 171, 171, 9, 10, 928, kSequencePointKind_Normal, 0, 153 } /* seqPointIndex: 153 */,
	{ 11448, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 154 } /* seqPointIndex: 154 */,
	{ 11448, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 155 } /* seqPointIndex: 155 */,
	{ 11448, 2, 178, 178, 9, 10, 0, kSequencePointKind_Normal, 0, 156 } /* seqPointIndex: 156 */,
	{ 11448, 2, 180, 180, 13, 67, 1, kSequencePointKind_Normal, 0, 157 } /* seqPointIndex: 157 */,
	{ 11448, 2, 180, 180, 13, 67, 2, kSequencePointKind_StepOut, 0, 158 } /* seqPointIndex: 158 */,
	{ 11448, 2, 181, 181, 13, 57, 8, kSequencePointKind_Normal, 0, 159 } /* seqPointIndex: 159 */,
	{ 11448, 2, 181, 181, 13, 57, 9, kSequencePointKind_StepOut, 0, 160 } /* seqPointIndex: 160 */,
	{ 11448, 2, 183, 183, 13, 36, 15, kSequencePointKind_Normal, 0, 161 } /* seqPointIndex: 161 */,
	{ 11448, 2, 183, 183, 0, 0, 17, kSequencePointKind_Normal, 0, 162 } /* seqPointIndex: 162 */,
	{ 11448, 2, 184, 184, 13, 14, 20, kSequencePointKind_Normal, 0, 163 } /* seqPointIndex: 163 */,
	{ 11448, 2, 185, 185, 17, 25, 21, kSequencePointKind_Normal, 0, 164 } /* seqPointIndex: 164 */,
	{ 11448, 2, 185, 185, 17, 25, 22, kSequencePointKind_StepOut, 0, 165 } /* seqPointIndex: 165 */,
	{ 11448, 2, 185, 185, 0, 0, 28, kSequencePointKind_Normal, 0, 166 } /* seqPointIndex: 166 */,
	{ 11448, 2, 186, 186, 17, 18, 31, kSequencePointKind_Normal, 0, 167 } /* seqPointIndex: 167 */,
	{ 11448, 2, 187, 187, 21, 45, 32, kSequencePointKind_Normal, 0, 168 } /* seqPointIndex: 168 */,
	{ 11448, 2, 188, 188, 21, 66, 44, kSequencePointKind_Normal, 0, 169 } /* seqPointIndex: 169 */,
	{ 11448, 2, 188, 188, 21, 66, 60, kSequencePointKind_StepOut, 0, 170 } /* seqPointIndex: 170 */,
	{ 11448, 2, 189, 189, 17, 18, 66, kSequencePointKind_Normal, 0, 171 } /* seqPointIndex: 171 */,
	{ 11448, 2, 190, 190, 13, 14, 67, kSequencePointKind_Normal, 0, 172 } /* seqPointIndex: 172 */,
	{ 11448, 2, 190, 190, 0, 0, 68, kSequencePointKind_Normal, 0, 173 } /* seqPointIndex: 173 */,
	{ 11448, 2, 191, 191, 18, 36, 73, kSequencePointKind_Normal, 0, 174 } /* seqPointIndex: 174 */,
	{ 11448, 2, 191, 191, 0, 0, 79, kSequencePointKind_Normal, 0, 175 } /* seqPointIndex: 175 */,
	{ 11448, 2, 192, 192, 13, 14, 83, kSequencePointKind_Normal, 0, 176 } /* seqPointIndex: 176 */,
	{ 11448, 2, 193, 193, 17, 39, 84, kSequencePointKind_Normal, 0, 177 } /* seqPointIndex: 177 */,
	{ 11448, 2, 193, 193, 17, 39, 95, kSequencePointKind_StepOut, 0, 178 } /* seqPointIndex: 178 */,
	{ 11448, 2, 193, 193, 0, 0, 102, kSequencePointKind_Normal, 0, 179 } /* seqPointIndex: 179 */,
	{ 11448, 2, 194, 194, 17, 18, 106, kSequencePointKind_Normal, 0, 180 } /* seqPointIndex: 180 */,
	{ 11448, 2, 196, 196, 21, 65, 107, kSequencePointKind_Normal, 0, 181 } /* seqPointIndex: 181 */,
	{ 11448, 2, 196, 196, 21, 65, 119, kSequencePointKind_StepOut, 0, 182 } /* seqPointIndex: 182 */,
	{ 11448, 2, 196, 196, 0, 0, 126, kSequencePointKind_Normal, 0, 183 } /* seqPointIndex: 183 */,
	{ 11448, 2, 197, 197, 25, 76, 130, kSequencePointKind_Normal, 0, 184 } /* seqPointIndex: 184 */,
	{ 11448, 2, 197, 197, 25, 76, 146, kSequencePointKind_StepOut, 0, 185 } /* seqPointIndex: 185 */,
	{ 11448, 2, 200, 200, 21, 64, 152, kSequencePointKind_Normal, 0, 186 } /* seqPointIndex: 186 */,
	{ 11448, 2, 200, 200, 21, 64, 168, kSequencePointKind_StepOut, 0, 187 } /* seqPointIndex: 187 */,
	{ 11448, 2, 201, 201, 21, 55, 174, kSequencePointKind_Normal, 0, 188 } /* seqPointIndex: 188 */,
	{ 11448, 2, 202, 202, 17, 18, 191, kSequencePointKind_Normal, 0, 189 } /* seqPointIndex: 189 */,
	{ 11448, 2, 203, 203, 13, 14, 192, kSequencePointKind_Normal, 0, 190 } /* seqPointIndex: 190 */,
	{ 11448, 2, 203, 203, 0, 0, 193, kSequencePointKind_Normal, 0, 191 } /* seqPointIndex: 191 */,
	{ 11448, 2, 204, 204, 18, 40, 195, kSequencePointKind_Normal, 0, 192 } /* seqPointIndex: 192 */,
	{ 11448, 2, 204, 204, 18, 40, 206, kSequencePointKind_StepOut, 0, 193 } /* seqPointIndex: 193 */,
	{ 11448, 2, 204, 204, 0, 0, 213, kSequencePointKind_Normal, 0, 194 } /* seqPointIndex: 194 */,
	{ 11448, 2, 205, 205, 13, 14, 217, kSequencePointKind_Normal, 0, 195 } /* seqPointIndex: 195 */,
	{ 11448, 2, 206, 206, 17, 62, 218, kSequencePointKind_Normal, 0, 196 } /* seqPointIndex: 196 */,
	{ 11448, 2, 206, 206, 17, 62, 234, kSequencePointKind_StepOut, 0, 197 } /* seqPointIndex: 197 */,
	{ 11448, 2, 207, 207, 13, 14, 240, kSequencePointKind_Normal, 0, 198 } /* seqPointIndex: 198 */,
	{ 11448, 2, 211, 211, 13, 52, 241, kSequencePointKind_Normal, 0, 199 } /* seqPointIndex: 199 */,
	{ 11448, 2, 211, 211, 13, 52, 253, kSequencePointKind_StepOut, 0, 200 } /* seqPointIndex: 200 */,
	{ 11448, 2, 211, 211, 0, 0, 260, kSequencePointKind_Normal, 0, 201 } /* seqPointIndex: 201 */,
	{ 11448, 2, 212, 212, 13, 14, 264, kSequencePointKind_Normal, 0, 202 } /* seqPointIndex: 202 */,
	{ 11448, 2, 213, 213, 17, 25, 265, kSequencePointKind_Normal, 0, 203 } /* seqPointIndex: 203 */,
	{ 11448, 2, 213, 213, 17, 25, 266, kSequencePointKind_StepOut, 0, 204 } /* seqPointIndex: 204 */,
	{ 11448, 2, 213, 213, 0, 0, 273, kSequencePointKind_Normal, 0, 205 } /* seqPointIndex: 205 */,
	{ 11448, 2, 214, 214, 21, 52, 277, kSequencePointKind_Normal, 0, 206 } /* seqPointIndex: 206 */,
	{ 11448, 2, 214, 214, 21, 52, 284, kSequencePointKind_StepOut, 0, 207 } /* seqPointIndex: 207 */,
	{ 11448, 2, 215, 215, 13, 14, 290, kSequencePointKind_Normal, 0, 208 } /* seqPointIndex: 208 */,
	{ 11448, 2, 215, 215, 0, 0, 291, kSequencePointKind_Normal, 0, 209 } /* seqPointIndex: 209 */,
	{ 11448, 2, 217, 217, 13, 14, 293, kSequencePointKind_Normal, 0, 210 } /* seqPointIndex: 210 */,
	{ 11448, 2, 218, 218, 17, 34, 294, kSequencePointKind_Normal, 0, 211 } /* seqPointIndex: 211 */,
	{ 11448, 2, 218, 218, 17, 34, 305, kSequencePointKind_StepOut, 0, 212 } /* seqPointIndex: 212 */,
	{ 11448, 2, 218, 218, 0, 0, 312, kSequencePointKind_Normal, 0, 213 } /* seqPointIndex: 213 */,
	{ 11448, 2, 219, 219, 17, 18, 316, kSequencePointKind_Normal, 0, 214 } /* seqPointIndex: 214 */,
	{ 11448, 2, 220, 220, 21, 61, 317, kSequencePointKind_Normal, 0, 215 } /* seqPointIndex: 215 */,
	{ 11448, 2, 220, 220, 21, 61, 333, kSequencePointKind_StepOut, 0, 216 } /* seqPointIndex: 216 */,
	{ 11448, 2, 221, 221, 17, 18, 339, kSequencePointKind_Normal, 0, 217 } /* seqPointIndex: 217 */,
	{ 11448, 2, 223, 223, 17, 25, 340, kSequencePointKind_Normal, 0, 218 } /* seqPointIndex: 218 */,
	{ 11448, 2, 223, 223, 17, 25, 341, kSequencePointKind_StepOut, 0, 219 } /* seqPointIndex: 219 */,
	{ 11448, 2, 223, 223, 0, 0, 348, kSequencePointKind_Normal, 0, 220 } /* seqPointIndex: 220 */,
	{ 11448, 2, 224, 224, 17, 18, 352, kSequencePointKind_Normal, 0, 221 } /* seqPointIndex: 221 */,
	{ 11448, 2, 225, 225, 21, 53, 353, kSequencePointKind_Normal, 0, 222 } /* seqPointIndex: 222 */,
	{ 11448, 2, 225, 225, 21, 53, 360, kSequencePointKind_StepOut, 0, 223 } /* seqPointIndex: 223 */,
	{ 11448, 2, 226, 226, 21, 52, 366, kSequencePointKind_Normal, 0, 224 } /* seqPointIndex: 224 */,
	{ 11448, 2, 226, 226, 21, 52, 373, kSequencePointKind_StepOut, 0, 225 } /* seqPointIndex: 225 */,
	{ 11448, 2, 227, 227, 17, 18, 379, kSequencePointKind_Normal, 0, 226 } /* seqPointIndex: 226 */,
	{ 11448, 2, 228, 228, 13, 14, 380, kSequencePointKind_Normal, 0, 227 } /* seqPointIndex: 227 */,
	{ 11448, 2, 229, 229, 13, 32, 381, kSequencePointKind_Normal, 0, 228 } /* seqPointIndex: 228 */,
	{ 11448, 2, 230, 230, 9, 10, 393, kSequencePointKind_Normal, 0, 229 } /* seqPointIndex: 229 */,
	{ 11449, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 230 } /* seqPointIndex: 230 */,
	{ 11449, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 231 } /* seqPointIndex: 231 */,
	{ 11449, 2, 35, 35, 9, 49, 0, kSequencePointKind_Normal, 0, 232 } /* seqPointIndex: 232 */,
	{ 11449, 2, 37, 37, 9, 95, 6, kSequencePointKind_Normal, 0, 233 } /* seqPointIndex: 233 */,
	{ 11449, 2, 38, 38, 9, 100, 17, kSequencePointKind_Normal, 0, 234 } /* seqPointIndex: 234 */,
	{ 11449, 2, 39, 39, 9, 98, 28, kSequencePointKind_Normal, 0, 235 } /* seqPointIndex: 235 */,
	{ 11450, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 236 } /* seqPointIndex: 236 */,
	{ 11450, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 237 } /* seqPointIndex: 237 */,
	{ 11450, 2, 17, 17, 13, 14, 0, kSequencePointKind_Normal, 0, 238 } /* seqPointIndex: 238 */,
	{ 11450, 2, 18, 18, 17, 88, 1, kSequencePointKind_Normal, 0, 239 } /* seqPointIndex: 239 */,
	{ 11450, 2, 18, 18, 17, 88, 10, kSequencePointKind_StepOut, 0, 240 } /* seqPointIndex: 240 */,
	{ 11450, 2, 19, 19, 13, 14, 16, kSequencePointKind_Normal, 0, 241 } /* seqPointIndex: 241 */,
	{ 11451, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 242 } /* seqPointIndex: 242 */,
	{ 11451, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 243 } /* seqPointIndex: 243 */,
	{ 11451, 2, 22, 22, 13, 14, 0, kSequencePointKind_Normal, 0, 244 } /* seqPointIndex: 244 */,
	{ 11451, 2, 23, 23, 17, 71, 1, kSequencePointKind_Normal, 0, 245 } /* seqPointIndex: 245 */,
	{ 11451, 2, 23, 23, 17, 71, 8, kSequencePointKind_StepOut, 0, 246 } /* seqPointIndex: 246 */,
	{ 11451, 2, 23, 23, 17, 71, 22, kSequencePointKind_StepOut, 0, 247 } /* seqPointIndex: 247 */,
	{ 11451, 2, 24, 24, 13, 14, 33, kSequencePointKind_Normal, 0, 248 } /* seqPointIndex: 248 */,
	{ 11452, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 249 } /* seqPointIndex: 249 */,
	{ 11452, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 250 } /* seqPointIndex: 250 */,
	{ 11452, 2, 27, 27, 13, 14, 0, kSequencePointKind_Normal, 0, 251 } /* seqPointIndex: 251 */,
	{ 11452, 2, 28, 28, 17, 77, 1, kSequencePointKind_Normal, 0, 252 } /* seqPointIndex: 252 */,
	{ 11452, 2, 28, 28, 17, 77, 13, kSequencePointKind_StepOut, 0, 253 } /* seqPointIndex: 253 */,
	{ 11452, 2, 28, 28, 17, 77, 32, kSequencePointKind_StepOut, 0, 254 } /* seqPointIndex: 254 */,
	{ 11452, 2, 29, 29, 13, 14, 43, kSequencePointKind_Normal, 0, 255 } /* seqPointIndex: 255 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_InputLegacyModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_InputLegacyModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "\\Users\\bokken\\buildslave\\unity\\build\\Modules\\InputLegacy\\Input.bindings.cs", { 137, 124, 242, 57, 77, 65, 205, 211, 237, 167, 104, 52, 155, 25, 31, 4} }, //1 
{ "\\Users\\bokken\\buildslave\\unity\\build\\Modules\\InputLegacy\\MouseEvents.cs", { 149, 112, 85, 4, 96, 73, 197, 16, 32, 10, 232, 139, 124, 204, 176, 138} }, //2 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[3] = 
{
	{ 2024, 1 },
	{ 2028, 2 },
	{ 2027, 2 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[11] = 
{
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 929 },
	{ 62, 103 },
	{ 137, 856 },
	{ 144, 856 },
	{ 226, 430 },
	{ 874, 922 },
	{ 0, 394 },
	{ 0, 35 },
	{ 0, 45 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[21] = 
{
	{ 12, 0, 1 } /* UnityEngine.Vector2 UnityEngine.Touch::get_position() */,
	{ 12, 1, 1 } /* UnityEngine.TouchPhase UnityEngine.Touch::get_phase() */,
	{ 0, 0, 0 } /* UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry(UnityEngine.Camera,UnityEngine.Ray,System.Single,System.Int32) */,
	{ 0, 0, 0 } /* UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray,System.Single,System.Int32) */,
	{ 0, 0, 0 } /* UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32) */,
	{ 0, 0, 0 } /* UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry2D_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.Input::GetButton(System.String) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.Input::GetMouseButton(System.Int32) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32) */,
	{ 0, 0, 0 } /* UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32) */,
	{ 0, 0, 0 } /* UnityEngine.Vector3 UnityEngine.Input::get_mousePosition() */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.Input::get_touchCount() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Input::GetTouch_Injected(System.Int32,UnityEngine.Touch&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Input::get_mousePosition_Injected(UnityEngine.Vector3&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.SendMouseEvents::SetMouseMoved() */,
	{ 929, 2, 6 } /* System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32) */,
	{ 394, 8, 1 } /* System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.SendMouseEvents::.cctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String) */,
	{ 35, 9, 1 } /* System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo) */,
	{ 45, 10, 1 } /* System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_InputLegacyModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_InputLegacyModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	256,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_InputLegacyModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	3,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
