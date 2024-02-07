#define DECLARE_HANDLE(name) struct name##__ { int unused; }; typedef struct name##__ *name
#define NTSYSAPI DECLSPEC_IMPORT
#define DECLSPEC_IMPORT __declspec(import)
#define DECLSPEC_ALIGN(x) __declspec(align(x))
#define FASTCALL
#define NTAPI
#define DEVICE_TYPE DWORD
typedef HANDLE POHANDLE;
#define POINTER_ALIGNMENT DECLSPEC_ALIGN(8)

typedef void* PPO_FX_COMPONENT_IDLE_STATE;
typedef void* PO_FX_COMPONENT_V1;
typedef void* PO_FX_COMPONENT_V2;
typedef void* PPO_FX_COMPONENT_ACTIVE_CONDITION_CALLBACK;
typedef void* PPO_FX_COMPONENT_IDLE_CONDITION_CALLBACK;
typedef void* PPO_FX_COMPONENT_IDLE_STATE_CALLBACK;
typedef void* PPO_FX_COMPONENT;
typedef void* PPO_FX_DEVICE_POWER_NOT_REQUIRED_CALLBACK;
typedef void* PPO_FX_DEVICE_POWER_REQUIRED_CALLBACK;
typedef void* PPO_FX_POWER_CONTROL_CALLBACK;

typedef UCHAR BYTE;
typedef enum _WDF_TRI_STATE {
    WdfFalse = FALSE,
    WdfTrue = TRUE,
    WdfUseDefault = 2,
} WDF_TRI_STATE, *PWDF_TRI_STATE;
typedef size_t* WDF_STRUCT_INFO;
typedef PVOID WDFCONTEXT;
typedef struct WDFDEVICE_INIT *PWDFDEVICE_INIT;
typedef struct WDFCXDEVICE_INIT *PWDFCXDEVICE_INIT;
typedef struct _WDF_OBJECT_ATTRIBUTES *PWDF_OBJECT_ATTRIBUTES;
typedef HANDLE WDFOBJECT, *PWDFOBJECT;
DECLARE_HANDLE( WDFDRIVER );
DECLARE_HANDLE( WDFDEVICE );
DECLARE_HANDLE( WDFWMIPROVIDER );
DECLARE_HANDLE( WDFWMIINSTANCE );
DECLARE_HANDLE( WDFQUEUE );
DECLARE_HANDLE( WDFREQUEST );
DECLARE_HANDLE( WDFFILEOBJECT );
DECLARE_HANDLE( WDFDPC );
DECLARE_HANDLE( WDFTIMER );
DECLARE_HANDLE( WDFWORKITEM );
DECLARE_HANDLE( WDFINTERRUPT );
DECLARE_HANDLE( WDFWAITLOCK );
DECLARE_HANDLE( WDFSPINLOCK );
DECLARE_HANDLE( WDFMEMORY );
DECLARE_HANDLE( WDFLOOKASIDE );
DECLARE_HANDLE( WDFIOTARGET );
DECLARE_HANDLE( WDFUSBDEVICE );
DECLARE_HANDLE( WDFUSBINTERFACE );
DECLARE_HANDLE( WDFUSBPIPE );
DECLARE_HANDLE( WDFDMAENABLER );
DECLARE_HANDLE( WDFDMATRANSACTION );
DECLARE_HANDLE( WDFCOMMONBUFFER );
DECLARE_HANDLE( WDFKEY );
DECLARE_HANDLE( WDFSTRING );
DECLARE_HANDLE( WDFCOLLECTION );
DECLARE_HANDLE( WDFCHILDLIST );
DECLARE_HANDLE( WDFIORESREQLIST );
DECLARE_HANDLE( WDFIORESLIST );
DECLARE_HANDLE( WDFCMRESLIST );
DECLARE_HANDLE( WDFCOMPANIONTARGET );


typedef struct _WDF_DRIVER_GLOBALS {
    WDFDRIVER Driver;
    ULONG DriverFlags;
    ULONG DriverTag;
    CHAR DriverName[(32)];
    BOOLEAN DisplaceDriverUnload;
} WDF_DRIVER_GLOBALS, *PWDF_DRIVER_GLOBALS;

extern PWDF_DRIVER_GLOBALS WdfDriverGlobals;
extern BOOLEAN WdfClientVersionHigherThanFramework;
extern ULONG WdfFunctionCount;
extern ULONG WdfStructureCount;
extern WDF_STRUCT_INFO WdfStructures;
__attribute__((selectany))
ULONG WdfMinimumVersionRequired =
        (ULONG)(-1)
    ;
typedef enum _WDFFUNCENUM {
    WdfChildListCreateTableIndex = 0,
    WdfChildListGetDeviceTableIndex = 1,
    WdfChildListRetrievePdoTableIndex = 2,
    WdfChildListRetrieveAddressDescriptionTableIndex = 3,
    WdfChildListBeginScanTableIndex = 4,
    WdfChildListEndScanTableIndex = 5,
    WdfChildListBeginIterationTableIndex = 6,
    WdfChildListRetrieveNextDeviceTableIndex = 7,
    WdfChildListEndIterationTableIndex = 8,
    WdfChildListAddOrUpdateChildDescriptionAsPresentTableIndex = 9,
    WdfChildListUpdateChildDescriptionAsMissingTableIndex = 10,
    WdfChildListUpdateAllChildDescriptionsAsPresentTableIndex = 11,
    WdfChildListRequestChildEjectTableIndex = 12,
    WdfCollectionCreateTableIndex = 13,
    WdfCollectionGetCountTableIndex = 14,
    WdfCollectionAddTableIndex = 15,
    WdfCollectionRemoveTableIndex = 16,
    WdfCollectionRemoveItemTableIndex = 17,
    WdfCollectionGetItemTableIndex = 18,
    WdfCollectionGetFirstItemTableIndex = 19,
    WdfCollectionGetLastItemTableIndex = 20,
    WdfCommonBufferCreateTableIndex = 21,
    WdfCommonBufferGetAlignedVirtualAddressTableIndex = 22,
    WdfCommonBufferGetAlignedLogicalAddressTableIndex = 23,
    WdfCommonBufferGetLengthTableIndex = 24,
    WdfControlDeviceInitAllocateTableIndex = 25,
    WdfControlDeviceInitSetShutdownNotificationTableIndex = 26,
    WdfControlFinishInitializingTableIndex = 27,
    WdfDeviceGetDeviceStateTableIndex = 28,
    WdfDeviceSetDeviceStateTableIndex = 29,
    WdfWdmDeviceGetWdfDeviceHandleTableIndex = 30,
    WdfDeviceWdmGetDeviceObjectTableIndex = 31,
    WdfDeviceWdmGetAttachedDeviceTableIndex = 32,
    WdfDeviceWdmGetPhysicalDeviceTableIndex = 33,
    WdfDeviceWdmDispatchPreprocessedIrpTableIndex = 34,
    WdfDeviceAddDependentUsageDeviceObjectTableIndex = 35,
    WdfDeviceAddRemovalRelationsPhysicalDeviceTableIndex = 36,
    WdfDeviceRemoveRemovalRelationsPhysicalDeviceTableIndex = 37,
    WdfDeviceClearRemovalRelationsDevicesTableIndex = 38,
    WdfDeviceGetDriverTableIndex = 39,
    WdfDeviceRetrieveDeviceNameTableIndex = 40,
    WdfDeviceAssignMofResourceNameTableIndex = 41,
    WdfDeviceGetIoTargetTableIndex = 42,
    WdfDeviceGetDevicePnpStateTableIndex = 43,
    WdfDeviceGetDevicePowerStateTableIndex = 44,
    WdfDeviceGetDevicePowerPolicyStateTableIndex = 45,
    WdfDeviceAssignS0IdleSettingsTableIndex = 46,
    WdfDeviceAssignSxWakeSettingsTableIndex = 47,
    WdfDeviceOpenRegistryKeyTableIndex = 48,
    WdfDeviceSetSpecialFileSupportTableIndex = 49,
    WdfDeviceSetCharacteristicsTableIndex = 50,
    WdfDeviceGetCharacteristicsTableIndex = 51,
    WdfDeviceGetAlignmentRequirementTableIndex = 52,
    WdfDeviceSetAlignmentRequirementTableIndex = 53,
    WdfDeviceInitFreeTableIndex = 54,
    WdfDeviceInitSetPnpPowerEventCallbacksTableIndex = 55,
    WdfDeviceInitSetPowerPolicyEventCallbacksTableIndex = 56,
    WdfDeviceInitSetPowerPolicyOwnershipTableIndex = 57,
    WdfDeviceInitRegisterPnpStateChangeCallbackTableIndex = 58,
    WdfDeviceInitRegisterPowerStateChangeCallbackTableIndex = 59,
    WdfDeviceInitRegisterPowerPolicyStateChangeCallbackTableIndex = 60,
    WdfDeviceInitSetIoTypeTableIndex = 61,
    WdfDeviceInitSetExclusiveTableIndex = 62,
    WdfDeviceInitSetPowerNotPageableTableIndex = 63,
    WdfDeviceInitSetPowerPageableTableIndex = 64,
    WdfDeviceInitSetPowerInrushTableIndex = 65,
    WdfDeviceInitSetDeviceTypeTableIndex = 66,
    WdfDeviceInitAssignNameTableIndex = 67,
    WdfDeviceInitAssignSDDLStringTableIndex = 68,
    WdfDeviceInitSetDeviceClassTableIndex = 69,
    WdfDeviceInitSetCharacteristicsTableIndex = 70,
    WdfDeviceInitSetFileObjectConfigTableIndex = 71,
    WdfDeviceInitSetRequestAttributesTableIndex = 72,
    WdfDeviceInitAssignWdmIrpPreprocessCallbackTableIndex = 73,
    WdfDeviceInitSetIoInCallerContextCallbackTableIndex = 74,
    WdfDeviceCreateTableIndex = 75,
    WdfDeviceSetStaticStopRemoveTableIndex = 76,
    WdfDeviceCreateDeviceInterfaceTableIndex = 77,
    WdfDeviceSetDeviceInterfaceStateTableIndex = 78,
    WdfDeviceRetrieveDeviceInterfaceStringTableIndex = 79,
    WdfDeviceCreateSymbolicLinkTableIndex = 80,
    WdfDeviceQueryPropertyTableIndex = 81,
    WdfDeviceAllocAndQueryPropertyTableIndex = 82,
    WdfDeviceSetPnpCapabilitiesTableIndex = 83,
    WdfDeviceSetPowerCapabilitiesTableIndex = 84,
    WdfDeviceSetBusInformationForChildrenTableIndex = 85,
    WdfDeviceIndicateWakeStatusTableIndex = 86,
    WdfDeviceSetFailedTableIndex = 87,
    WdfDeviceStopIdleNoTrackTableIndex = 88,
    WdfDeviceResumeIdleNoTrackTableIndex = 89,
    WdfDeviceGetFileObjectTableIndex = 90,
    WdfDeviceEnqueueRequestTableIndex = 91,
    WdfDeviceGetDefaultQueueTableIndex = 92,
    WdfDeviceConfigureRequestDispatchingTableIndex = 93,
    WdfDmaEnablerCreateTableIndex = 94,
    WdfDmaEnablerGetMaximumLengthTableIndex = 95,
    WdfDmaEnablerGetMaximumScatterGatherElementsTableIndex = 96,
    WdfDmaEnablerSetMaximumScatterGatherElementsTableIndex = 97,
    WdfDmaTransactionCreateTableIndex = 98,
    WdfDmaTransactionInitializeTableIndex = 99,
    WdfDmaTransactionInitializeUsingRequestTableIndex = 100,
    WdfDmaTransactionExecuteTableIndex = 101,
    WdfDmaTransactionReleaseTableIndex = 102,
    WdfDmaTransactionDmaCompletedTableIndex = 103,
    WdfDmaTransactionDmaCompletedWithLengthTableIndex = 104,
    WdfDmaTransactionDmaCompletedFinalTableIndex = 105,
    WdfDmaTransactionGetBytesTransferredTableIndex = 106,
    WdfDmaTransactionSetMaximumLengthTableIndex = 107,
    WdfDmaTransactionGetRequestTableIndex = 108,
    WdfDmaTransactionGetCurrentDmaTransferLengthTableIndex = 109,
    WdfDmaTransactionGetDeviceTableIndex = 110,
    WdfDpcCreateTableIndex = 111,
    WdfDpcEnqueueTableIndex = 112,
    WdfDpcCancelTableIndex = 113,
    WdfDpcGetParentObjectTableIndex = 114,
    WdfDpcWdmGetDpcTableIndex = 115,
    WdfDriverCreateTableIndex = 116,
    WdfDriverGetRegistryPathTableIndex = 117,
    WdfDriverWdmGetDriverObjectTableIndex = 118,
    WdfDriverOpenParametersRegistryKeyTableIndex = 119,
    WdfWdmDriverGetWdfDriverHandleTableIndex = 120,
    WdfDriverRegisterTraceInfoTableIndex = 121,
    WdfDriverRetrieveVersionStringTableIndex = 122,
    WdfDriverIsVersionAvailableTableIndex = 123,
    WdfFdoInitWdmGetPhysicalDeviceTableIndex = 124,
    WdfFdoInitOpenRegistryKeyTableIndex = 125,
    WdfFdoInitQueryPropertyTableIndex = 126,
    WdfFdoInitAllocAndQueryPropertyTableIndex = 127,
    WdfFdoInitSetEventCallbacksTableIndex = 128,
    WdfFdoInitSetFilterTableIndex = 129,
    WdfFdoInitSetDefaultChildListConfigTableIndex = 130,
    WdfFdoQueryForInterfaceTableIndex = 131,
    WdfFdoGetDefaultChildListTableIndex = 132,
    WdfFdoAddStaticChildTableIndex = 133,
    WdfFdoLockStaticChildListForIterationTableIndex = 134,
    WdfFdoRetrieveNextStaticChildTableIndex = 135,
    WdfFdoUnlockStaticChildListFromIterationTableIndex = 136,
    WdfFileObjectGetFileNameTableIndex = 137,
    WdfFileObjectGetFlagsTableIndex = 138,
    WdfFileObjectGetDeviceTableIndex = 139,
    WdfFileObjectWdmGetFileObjectTableIndex = 140,
    WdfInterruptCreateTableIndex = 141,
    WdfInterruptQueueDpcForIsrTableIndex = 142,
    WdfInterruptSynchronizeTableIndex = 143,
    WdfInterruptAcquireLockTableIndex = 144,
    WdfInterruptReleaseLockTableIndex = 145,
    WdfInterruptEnableTableIndex = 146,
    WdfInterruptDisableTableIndex = 147,
    WdfInterruptWdmGetInterruptTableIndex = 148,
    WdfInterruptGetInfoTableIndex = 149,
    WdfInterruptSetPolicyTableIndex = 150,
    WdfInterruptGetDeviceTableIndex = 151,
    WdfIoQueueCreateTableIndex = 152,
    WdfIoQueueGetStateTableIndex = 153,
    WdfIoQueueStartTableIndex = 154,
    WdfIoQueueStopTableIndex = 155,
    WdfIoQueueStopSynchronouslyTableIndex = 156,
    WdfIoQueueGetDeviceTableIndex = 157,
    WdfIoQueueRetrieveNextRequestTableIndex = 158,
    WdfIoQueueRetrieveRequestByFileObjectTableIndex = 159,
    WdfIoQueueFindRequestTableIndex = 160,
    WdfIoQueueRetrieveFoundRequestTableIndex = 161,
    WdfIoQueueDrainSynchronouslyTableIndex = 162,
    WdfIoQueueDrainTableIndex = 163,
    WdfIoQueuePurgeSynchronouslyTableIndex = 164,
    WdfIoQueuePurgeTableIndex = 165,
    WdfIoQueueReadyNotifyTableIndex = 166,
    WdfIoTargetCreateTableIndex = 167,
    WdfIoTargetOpenTableIndex = 168,
    WdfIoTargetCloseForQueryRemoveTableIndex = 169,
    WdfIoTargetCloseTableIndex = 170,
    WdfIoTargetStartTableIndex = 171,
    WdfIoTargetStopTableIndex = 172,
    WdfIoTargetGetStateTableIndex = 173,
    WdfIoTargetGetDeviceTableIndex = 174,
    WdfIoTargetQueryTargetPropertyTableIndex = 175,
    WdfIoTargetAllocAndQueryTargetPropertyTableIndex = 176,
    WdfIoTargetQueryForInterfaceTableIndex = 177,
    WdfIoTargetWdmGetTargetDeviceObjectTableIndex = 178,
    WdfIoTargetWdmGetTargetPhysicalDeviceTableIndex = 179,
    WdfIoTargetWdmGetTargetFileObjectTableIndex = 180,
    WdfIoTargetWdmGetTargetFileHandleTableIndex = 181,
    WdfIoTargetSendReadSynchronouslyTableIndex = 182,
    WdfIoTargetFormatRequestForReadTableIndex = 183,
    WdfIoTargetSendWriteSynchronouslyTableIndex = 184,
    WdfIoTargetFormatRequestForWriteTableIndex = 185,
    WdfIoTargetSendIoctlSynchronouslyTableIndex = 186,
    WdfIoTargetFormatRequestForIoctlTableIndex = 187,
    WdfIoTargetSendInternalIoctlSynchronouslyTableIndex = 188,
    WdfIoTargetFormatRequestForInternalIoctlTableIndex = 189,
    WdfIoTargetSendInternalIoctlOthersSynchronouslyTableIndex = 190,
    WdfIoTargetFormatRequestForInternalIoctlOthersTableIndex = 191,
    WdfMemoryCreateTableIndex = 192,
    WdfMemoryCreatePreallocatedTableIndex = 193,
    WdfMemoryGetBufferTableIndex = 194,
    WdfMemoryAssignBufferTableIndex = 195,
    WdfMemoryCopyToBufferTableIndex = 196,
    WdfMemoryCopyFromBufferTableIndex = 197,
    WdfLookasideListCreateTableIndex = 198,
    WdfMemoryCreateFromLookasideTableIndex = 199,
    WdfDeviceMiniportCreateTableIndex = 200,
    WdfDriverMiniportUnloadTableIndex = 201,
    WdfObjectGetTypedContextWorkerTableIndex = 202,
    WdfObjectAllocateContextTableIndex = 203,
    WdfObjectContextGetObjectTableIndex = 204,
    WdfObjectReferenceActualTableIndex = 205,
    WdfObjectDereferenceActualTableIndex = 206,
    WdfObjectCreateTableIndex = 207,
    WdfObjectDeleteTableIndex = 208,
    WdfObjectQueryTableIndex = 209,
    WdfPdoInitAllocateTableIndex = 210,
    WdfPdoInitSetEventCallbacksTableIndex = 211,
    WdfPdoInitAssignDeviceIDTableIndex = 212,
    WdfPdoInitAssignInstanceIDTableIndex = 213,
    WdfPdoInitAddHardwareIDTableIndex = 214,
    WdfPdoInitAddCompatibleIDTableIndex = 215,
    WdfPdoInitAddDeviceTextTableIndex = 216,
    WdfPdoInitSetDefaultLocaleTableIndex = 217,
    WdfPdoInitAssignRawDeviceTableIndex = 218,
    WdfPdoMarkMissingTableIndex = 219,
    WdfPdoRequestEjectTableIndex = 220,
    WdfPdoGetParentTableIndex = 221,
    WdfPdoRetrieveIdentificationDescriptionTableIndex = 222,
    WdfPdoRetrieveAddressDescriptionTableIndex = 223,
    WdfPdoUpdateAddressDescriptionTableIndex = 224,
    WdfPdoAddEjectionRelationsPhysicalDeviceTableIndex = 225,
    WdfPdoRemoveEjectionRelationsPhysicalDeviceTableIndex = 226,
    WdfPdoClearEjectionRelationsDevicesTableIndex = 227,
    WdfDeviceAddQueryInterfaceTableIndex = 228,
    WdfRegistryOpenKeyTableIndex = 229,
    WdfRegistryCreateKeyTableIndex = 230,
    WdfRegistryCloseTableIndex = 231,
    WdfRegistryWdmGetHandleTableIndex = 232,
    WdfRegistryRemoveKeyTableIndex = 233,
    WdfRegistryRemoveValueTableIndex = 234,
    WdfRegistryQueryValueTableIndex = 235,
    WdfRegistryQueryMemoryTableIndex = 236,
    WdfRegistryQueryMultiStringTableIndex = 237,
    WdfRegistryQueryUnicodeStringTableIndex = 238,
    WdfRegistryQueryStringTableIndex = 239,
    WdfRegistryQueryULongTableIndex = 240,
    WdfRegistryAssignValueTableIndex = 241,
    WdfRegistryAssignMemoryTableIndex = 242,
    WdfRegistryAssignMultiStringTableIndex = 243,
    WdfRegistryAssignUnicodeStringTableIndex = 244,
    WdfRegistryAssignStringTableIndex = 245,
    WdfRegistryAssignULongTableIndex = 246,
    WdfRequestCreateTableIndex = 247,
    WdfRequestCreateFromIrpTableIndex = 248,
    WdfRequestReuseTableIndex = 249,
    WdfRequestChangeTargetTableIndex = 250,
    WdfRequestFormatRequestUsingCurrentTypeTableIndex = 251,
    WdfRequestWdmFormatUsingStackLocationTableIndex = 252,
    WdfRequestSendTableIndex = 253,
    WdfRequestGetStatusTableIndex = 254,
    WdfRequestMarkCancelableTableIndex = 255,
    WdfRequestUnmarkCancelableTableIndex = 256,
    WdfRequestIsCanceledTableIndex = 257,
    WdfRequestCancelSentRequestTableIndex = 258,
    WdfRequestIsFrom32BitProcessTableIndex = 259,
    WdfRequestSetCompletionRoutineTableIndex = 260,
    WdfRequestGetCompletionParamsTableIndex = 261,
    WdfRequestAllocateTimerTableIndex = 262,
    WdfRequestCompleteTableIndex = 263,
    WdfRequestCompleteWithPriorityBoostTableIndex = 264,
    WdfRequestCompleteWithInformationTableIndex = 265,
    WdfRequestGetParametersTableIndex = 266,
    WdfRequestRetrieveInputMemoryTableIndex = 267,
    WdfRequestRetrieveOutputMemoryTableIndex = 268,
    WdfRequestRetrieveInputBufferTableIndex = 269,
    WdfRequestRetrieveOutputBufferTableIndex = 270,
    WdfRequestRetrieveInputWdmMdlTableIndex = 271,
    WdfRequestRetrieveOutputWdmMdlTableIndex = 272,
    WdfRequestRetrieveUnsafeUserInputBufferTableIndex = 273,
    WdfRequestRetrieveUnsafeUserOutputBufferTableIndex = 274,
    WdfRequestSetInformationTableIndex = 275,
    WdfRequestGetInformationTableIndex = 276,
    WdfRequestGetFileObjectTableIndex = 277,
    WdfRequestProbeAndLockUserBufferForReadTableIndex = 278,
    WdfRequestProbeAndLockUserBufferForWriteTableIndex = 279,
    WdfRequestGetRequestorModeTableIndex = 280,
    WdfRequestForwardToIoQueueTableIndex = 281,
    WdfRequestGetIoQueueTableIndex = 282,
    WdfRequestRequeueTableIndex = 283,
    WdfRequestStopAcknowledgeTableIndex = 284,
    WdfRequestWdmGetIrpTableIndex = 285,
    WdfIoResourceRequirementsListSetSlotNumberTableIndex = 286,
    WdfIoResourceRequirementsListSetInterfaceTypeTableIndex = 287,
    WdfIoResourceRequirementsListAppendIoResListTableIndex = 288,
    WdfIoResourceRequirementsListInsertIoResListTableIndex = 289,
    WdfIoResourceRequirementsListGetCountTableIndex = 290,
    WdfIoResourceRequirementsListGetIoResListTableIndex = 291,
    WdfIoResourceRequirementsListRemoveTableIndex = 292,
    WdfIoResourceRequirementsListRemoveByIoResListTableIndex = 293,
    WdfIoResourceListCreateTableIndex = 294,
    WdfIoResourceListAppendDescriptorTableIndex = 295,
    WdfIoResourceListInsertDescriptorTableIndex = 296,
    WdfIoResourceListUpdateDescriptorTableIndex = 297,
    WdfIoResourceListGetCountTableIndex = 298,
    WdfIoResourceListGetDescriptorTableIndex = 299,
    WdfIoResourceListRemoveTableIndex = 300,
    WdfIoResourceListRemoveByDescriptorTableIndex = 301,
    WdfCmResourceListAppendDescriptorTableIndex = 302,
    WdfCmResourceListInsertDescriptorTableIndex = 303,
    WdfCmResourceListGetCountTableIndex = 304,
    WdfCmResourceListGetDescriptorTableIndex = 305,
    WdfCmResourceListRemoveTableIndex = 306,
    WdfCmResourceListRemoveByDescriptorTableIndex = 307,
    WdfStringCreateTableIndex = 308,
    WdfStringGetUnicodeStringTableIndex = 309,
    WdfObjectAcquireLockTableIndex = 310,
    WdfObjectReleaseLockTableIndex = 311,
    WdfWaitLockCreateTableIndex = 312,
    WdfWaitLockAcquireTableIndex = 313,
    WdfWaitLockReleaseTableIndex = 314,
    WdfSpinLockCreateTableIndex = 315,
    WdfSpinLockAcquireTableIndex = 316,
    WdfSpinLockReleaseTableIndex = 317,
    WdfTimerCreateTableIndex = 318,
    WdfTimerStartTableIndex = 319,
    WdfTimerStopTableIndex = 320,
    WdfTimerGetParentObjectTableIndex = 321,
    WdfUsbTargetDeviceCreateTableIndex = 322,
    WdfUsbTargetDeviceRetrieveInformationTableIndex = 323,
    WdfUsbTargetDeviceGetDeviceDescriptorTableIndex = 324,
    WdfUsbTargetDeviceRetrieveConfigDescriptorTableIndex = 325,
    WdfUsbTargetDeviceQueryStringTableIndex = 326,
    WdfUsbTargetDeviceAllocAndQueryStringTableIndex = 327,
    WdfUsbTargetDeviceFormatRequestForStringTableIndex = 328,
    WdfUsbTargetDeviceGetNumInterfacesTableIndex = 329,
    WdfUsbTargetDeviceSelectConfigTableIndex = 330,
    WdfUsbTargetDeviceWdmGetConfigurationHandleTableIndex = 331,
    WdfUsbTargetDeviceRetrieveCurrentFrameNumberTableIndex = 332,
    WdfUsbTargetDeviceSendControlTransferSynchronouslyTableIndex = 333,
    WdfUsbTargetDeviceFormatRequestForControlTransferTableIndex = 334,
    WdfUsbTargetDeviceIsConnectedSynchronousTableIndex = 335,
    WdfUsbTargetDeviceResetPortSynchronouslyTableIndex = 336,
    WdfUsbTargetDeviceCyclePortSynchronouslyTableIndex = 337,
    WdfUsbTargetDeviceFormatRequestForCyclePortTableIndex = 338,
    WdfUsbTargetDeviceSendUrbSynchronouslyTableIndex = 339,
    WdfUsbTargetDeviceFormatRequestForUrbTableIndex = 340,
    WdfUsbTargetPipeGetInformationTableIndex = 341,
    WdfUsbTargetPipeIsInEndpointTableIndex = 342,
    WdfUsbTargetPipeIsOutEndpointTableIndex = 343,
    WdfUsbTargetPipeGetTypeTableIndex = 344,
    WdfUsbTargetPipeSetNoMaximumPacketSizeCheckTableIndex = 345,
    WdfUsbTargetPipeWriteSynchronouslyTableIndex = 346,
    WdfUsbTargetPipeFormatRequestForWriteTableIndex = 347,
    WdfUsbTargetPipeReadSynchronouslyTableIndex = 348,
    WdfUsbTargetPipeFormatRequestForReadTableIndex = 349,
    WdfUsbTargetPipeConfigContinuousReaderTableIndex = 350,
    WdfUsbTargetPipeAbortSynchronouslyTableIndex = 351,
    WdfUsbTargetPipeFormatRequestForAbortTableIndex = 352,
    WdfUsbTargetPipeResetSynchronouslyTableIndex = 353,
    WdfUsbTargetPipeFormatRequestForResetTableIndex = 354,
    WdfUsbTargetPipeSendUrbSynchronouslyTableIndex = 355,
    WdfUsbTargetPipeFormatRequestForUrbTableIndex = 356,
    WdfUsbInterfaceGetInterfaceNumberTableIndex = 357,
    WdfUsbInterfaceGetNumEndpointsTableIndex = 358,
    WdfUsbInterfaceGetDescriptorTableIndex = 359,
    WdfUsbInterfaceSelectSettingTableIndex = 360,
    WdfUsbInterfaceGetEndpointInformationTableIndex = 361,
    WdfUsbTargetDeviceGetInterfaceTableIndex = 362,
    WdfUsbInterfaceGetConfiguredSettingIndexTableIndex = 363,
    WdfUsbInterfaceGetNumConfiguredPipesTableIndex = 364,
    WdfUsbInterfaceGetConfiguredPipeTableIndex = 365,
    WdfUsbTargetPipeWdmGetPipeHandleTableIndex = 366,
    WdfVerifierDbgBreakPointTableIndex = 367,
    WdfVerifierKeBugCheckTableIndex = 368,
    WdfWmiProviderCreateTableIndex = 369,
    WdfWmiProviderGetDeviceTableIndex = 370,
    WdfWmiProviderIsEnabledTableIndex = 371,
    WdfWmiProviderGetTracingHandleTableIndex = 372,
    WdfWmiInstanceCreateTableIndex = 373,
    WdfWmiInstanceRegisterTableIndex = 374,
    WdfWmiInstanceDeregisterTableIndex = 375,
    WdfWmiInstanceGetDeviceTableIndex = 376,
    WdfWmiInstanceGetProviderTableIndex = 377,
    WdfWmiInstanceFireEventTableIndex = 378,
    WdfWorkItemCreateTableIndex = 379,
    WdfWorkItemEnqueueTableIndex = 380,
    WdfWorkItemGetParentObjectTableIndex = 381,
    WdfWorkItemFlushTableIndex = 382,
    WdfCommonBufferCreateWithConfigTableIndex = 383,
    WdfDmaEnablerGetFragmentLengthTableIndex = 384,
    WdfDmaEnablerWdmGetDmaAdapterTableIndex = 385,
    WdfUsbInterfaceGetNumSettingsTableIndex = 386,
    WdfDeviceRemoveDependentUsageDeviceObjectTableIndex = 387,
    WdfDeviceGetSystemPowerActionTableIndex = 388,
    WdfInterruptSetExtendedPolicyTableIndex = 389,
    WdfIoQueueAssignForwardProgressPolicyTableIndex = 390,
    WdfPdoInitAssignContainerIDTableIndex = 391,
    WdfPdoInitAllowForwardingRequestToParentTableIndex = 392,
    WdfRequestMarkCancelableExTableIndex = 393,
    WdfRequestIsReservedTableIndex = 394,
    WdfRequestForwardToParentDeviceIoQueueTableIndex = 395,
    WdfCxDeviceInitAllocateTableIndex = 396,
    WdfCxDeviceInitAssignWdmIrpPreprocessCallbackTableIndex = 397,
    WdfCxDeviceInitSetIoInCallerContextCallbackTableIndex = 398,
    WdfCxDeviceInitSetRequestAttributesTableIndex = 399,
    WdfCxDeviceInitSetFileObjectConfigTableIndex = 400,
    WdfDeviceWdmDispatchIrpTableIndex = 401,
    WdfDeviceWdmDispatchIrpToIoQueueTableIndex = 402,
    WdfDeviceInitSetRemoveLockOptionsTableIndex = 403,
    WdfDeviceConfigureWdmIrpDispatchCallbackTableIndex = 404,
    WdfDmaEnablerConfigureSystemProfileTableIndex = 405,
    WdfDmaTransactionInitializeUsingOffsetTableIndex = 406,
    WdfDmaTransactionGetTransferInfoTableIndex = 407,
    WdfDmaTransactionSetChannelConfigurationCallbackTableIndex = 408,
    WdfDmaTransactionSetTransferCompleteCallbackTableIndex = 409,
    WdfDmaTransactionSetImmediateExecutionTableIndex = 410,
    WdfDmaTransactionAllocateResourcesTableIndex = 411,
    WdfDmaTransactionSetDeviceAddressOffsetTableIndex = 412,
    WdfDmaTransactionFreeResourcesTableIndex = 413,
    WdfDmaTransactionCancelTableIndex = 414,
    WdfDmaTransactionWdmGetTransferContextTableIndex = 415,
    WdfInterruptQueueWorkItemForIsrTableIndex = 416,
    WdfInterruptTryToAcquireLockTableIndex = 417,
    WdfIoQueueStopAndPurgeTableIndex = 418,
    WdfIoQueueStopAndPurgeSynchronouslyTableIndex = 419,
    WdfIoTargetPurgeTableIndex = 420,
    WdfUsbTargetDeviceCreateWithParametersTableIndex = 421,
    WdfUsbTargetDeviceQueryUsbCapabilityTableIndex = 422,
    WdfUsbTargetDeviceCreateUrbTableIndex = 423,
    WdfUsbTargetDeviceCreateIsochUrbTableIndex = 424,
    WdfDeviceWdmAssignPowerFrameworkSettingsTableIndex = 425,
    WdfDmaTransactionStopSystemTransferTableIndex = 426,
    WdfCxVerifierKeBugCheckTableIndex = 427,
    WdfInterruptReportActiveTableIndex = 428,
    WdfInterruptReportInactiveTableIndex = 429,
    WdfDeviceInitSetReleaseHardwareOrderOnFailureTableIndex = 430,
    WdfGetTriageInfoTableIndex = 431,
    WdfDeviceInitSetIoTypeExTableIndex = 432,
    WdfDeviceQueryPropertyExTableIndex = 433,
    WdfDeviceAllocAndQueryPropertyExTableIndex = 434,
    WdfDeviceAssignPropertyTableIndex = 435,
    WdfFdoInitQueryPropertyExTableIndex = 436,
    WdfFdoInitAllocAndQueryPropertyExTableIndex = 437,
    WdfDeviceStopIdleActualTableIndex = 438,
    WdfDeviceResumeIdleActualTableIndex = 439,
    WdfDeviceGetSelfIoTargetTableIndex = 440,
    WdfDeviceInitAllowSelfIoTargetTableIndex = 441,
    WdfIoTargetSelfAssignDefaultIoQueueTableIndex = 442,
    WdfDeviceOpenDevicemapKeyTableIndex = 443,
    WdfDmaTransactionSetSingleTransferRequirementTableIndex = 444,
    WdfCxDeviceInitSetPnpPowerEventCallbacksTableIndex = 445,
    WdfFileObjectGetInitiatorProcessIdTableIndex = 446,
    WdfRequestGetRequestorProcessIdTableIndex = 447,
    WdfDeviceRetrieveCompanionTargetTableIndex = 448,
    WdfCompanionTargetSendTaskSynchronouslyTableIndex = 449,
    WdfCompanionTargetWdmGetCompanionProcessTableIndex = 450,
    WdfDriverOpenPersistentStateRegistryKeyTableIndex = 451,
    WdfDriverErrorReportApiMissingTableIndex = 452,
    WdfPdoInitRemovePowerDependencyOnParentTableIndex = 453,
    WdfCxDeviceInitAllocateContextTableIndex = 454,
    WdfCxDeviceInitGetTypedContextWorkerTableIndex = 455,
    WdfCxDeviceInitSetPowerPolicyEventCallbacksTableIndex = 456,
    WdfDeviceSetDeviceInterfaceStateExTableIndex = 457,
    WdfFunctionTableNumEntries = 458,
} WDFFUNCENUM;
typedef enum _WDFSTRUCTENUM {
    INDEX_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER = 0,
    INDEX_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER = 1,
    INDEX_WDF_CHILD_LIST_CONFIG = 2,
    INDEX_WDF_CHILD_LIST_ITERATOR = 3,
    INDEX_WDF_CHILD_RETRIEVE_INFO = 4,
    INDEX_WDF_CLASS_BIND_INFO = 5,
    INDEX_WDF_CLASS_BIND_INFO2 = 6,
    INDEX_WDF_CLASS_EXTENSION_DESCRIPTOR = 7,
    INDEX_WDF_CLASS_LIBRARY_INFO = 8,
    INDEX_WDF_CLASS_VERSION = 9,
    INDEX_WDF_COMMON_BUFFER_CONFIG = 10,
    INDEX_WDF_CUSTOM_TYPE_CONTEXT = 11,
    INDEX_WDF_DEVICE_PNP_CAPABILITIES = 12,
    INDEX_WDF_DEVICE_PNP_NOTIFICATION_DATA = 13,
    INDEX_WDF_DEVICE_POWER_CAPABILITIES = 14,
    INDEX_WDF_DEVICE_POWER_NOTIFICATION_DATA = 15,
    INDEX_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS = 16,
    INDEX_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA = 17,
    INDEX_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS = 18,
    INDEX_WDF_DEVICE_PROPERTY_DATA = 19,
    INDEX_WDF_DEVICE_STATE = 20,
    INDEX_WDF_DMA_ENABLER_CONFIG = 21,
    INDEX_WDF_DMA_SYSTEM_PROFILE_CONFIG = 22,
    INDEX_WDF_DPC_CONFIG = 23,
    INDEX_WDF_DRIVER_CONFIG = 24,
    INDEX_WDF_DRIVER_GLOBALS = 25,
    INDEX_WDF_DRIVER_VERSION_AVAILABLE_PARAMS = 26,
    INDEX_WDF_FDO_EVENT_CALLBACKS = 27,
    INDEX_WDF_FILEOBJECT_CONFIG = 28,
    INDEX_WDF_INTERRUPT_CONFIG = 29,
    INDEX_WDF_INTERRUPT_EXTENDED_POLICY = 30,
    INDEX_WDF_INTERRUPT_INFO = 31,
    INDEX_WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS = 32,
    INDEX_WDF_IO_QUEUE_CONFIG = 33,
    INDEX_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY = 34,
    INDEX_WDF_IO_TARGET_OPEN_PARAMS = 35,
    INDEX_WDF_IO_TYPE_CONFIG = 36,
    INDEX_WDF_MEMORY_DESCRIPTOR = 37,
    INDEX_WDF_OBJECT_ATTRIBUTES = 38,
    INDEX_WDF_OBJECT_CONTEXT_TYPE_INFO = 39,
    INDEX_WDF_PDO_EVENT_CALLBACKS = 40,
    INDEX_WDF_PNPPOWER_EVENT_CALLBACKS = 41,
    INDEX_WDF_POWER_FRAMEWORK_SETTINGS = 42,
    INDEX_WDF_POWER_POLICY_EVENT_CALLBACKS = 43,
    INDEX_WDF_POWER_ROUTINE_TIMED_OUT_DATA = 44,
    INDEX_WDF_QUERY_INTERFACE_CONFIG = 45,
    INDEX_WDF_QUEUE_FATAL_ERROR_DATA = 46,
    INDEX_WDF_REMOVE_LOCK_OPTIONS = 47,
    INDEX_WDF_REQUEST_COMPLETION_PARAMS = 48,
    INDEX_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA = 49,
    INDEX_WDF_REQUEST_FORWARD_OPTIONS = 50,
    INDEX_WDF_REQUEST_PARAMETERS = 51,
    INDEX_WDF_REQUEST_REUSE_PARAMS = 52,
    INDEX_WDF_REQUEST_SEND_OPTIONS = 53,
    INDEX_WDF_TASK_SEND_OPTIONS = 54,
    INDEX_WDF_TIMER_CONFIG = 55,
    INDEX_WDF_TRIAGE_INFO = 56,
    INDEX_WDF_USB_CONTINUOUS_READER_CONFIG = 57,
    INDEX_WDF_USB_DEVICE_CREATE_CONFIG = 58,
    INDEX_WDF_USB_DEVICE_INFORMATION = 59,
    INDEX_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS = 60,
    INDEX_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS = 61,
    INDEX_WDF_USB_INTERFACE_SETTING_PAIR = 62,
    INDEX_WDF_USB_PIPE_INFORMATION = 63,
    INDEX_WDF_USB_REQUEST_COMPLETION_PARAMS = 64,
    INDEX_WDF_WMI_INSTANCE_CONFIG = 65,
    INDEX_WDF_WMI_PROVIDER_CONFIG = 66,
    INDEX_WDF_WORKITEM_CONFIG = 67,
    INDEX_WDFCONTEXT_TRIAGE_INFO = 68,
    INDEX_WDFCONTEXTTYPE_TRIAGE_INFO = 69,
    INDEX_WDFCX_FILEOBJECT_CONFIG = 70,
    INDEX_WDFCX_PNPPOWER_EVENT_CALLBACKS = 71,
    INDEX_WDFDEVICE_TRIAGE_INFO = 72,
    INDEX_WDFFWDPROGRESS_TRIAGE_INFO = 73,
    INDEX_WDFIRP_TRIAGE_INFO = 74,
    INDEX_WDFIRPQUEUE_TRIAGE_INFO = 75,
    INDEX_WDFMEMORY_OFFSET = 76,
    INDEX_WDFOBJECT_TRIAGE_INFO = 77,
    INDEX_WDFQUEUE_TRIAGE_INFO = 78,
    INDEX_WDFREQUEST_TRIAGE_INFO = 79,
    INDEX_WDFCX_POWER_POLICY_EVENT_CALLBACKS = 80,
    WDF_STRUCTURE_TABLE_NUM_ENTRIES = 81,
} WDFSTRUCTENUM;

#define VOID void

NTSYSAPI VOID NTAPI RtlAssert(
    PVOID FailedAssertion,
    PVOID FileName,
    ULONG LineNumber,
    PSTR Message
    );


typedef VOID (NTAPI *PFN_WDFVERIFIERDBGBREAKPOINT)(
    PWDF_DRIVER_GLOBALS DriverGlobals
    );

__inline
VOID
WdfVerifierDbgBreakPoint(
    )
{
    ((PFN_WDFVERIFIERDBGBREAKPOINT) WdfFunctions_01033[WdfVerifierDbgBreakPointTableIndex])(WdfDriverGlobals);
}
typedef

VOID
(NTAPI *PFN_WDFVERIFIERKEBUGCHECK)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    ULONG BugCheckCode,
   
    ULONG_PTR BugCheckParameter1,
   
    ULONG_PTR BugCheckParameter2,
   
    ULONG_PTR BugCheckParameter3,
   
    ULONG_PTR BugCheckParameter4
    );
__inline
VOID
WdfVerifierKeBugCheck(
   
    ULONG BugCheckCode,
   
    ULONG_PTR BugCheckParameter1,
   
    ULONG_PTR BugCheckParameter2,
   
    ULONG_PTR BugCheckParameter3,
   
    ULONG_PTR BugCheckParameter4
    )
{
    ((PFN_WDFVERIFIERKEBUGCHECK) WdfFunctions_01033[WdfVerifierKeBugCheckTableIndex])(WdfDriverGlobals, BugCheckCode, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
typedef

PVOID
(NTAPI *PFN_WDFGETTRIAGEINFO)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals
    );
__inline
PVOID
WdfGetTriageInfo(
    )
{
    return ((PFN_WDFGETTRIAGEINFO) WdfFunctions_01033[WdfGetTriageInfoTableIndex])(WdfDriverGlobals);
}




typedef enum _WDF_EXECUTION_LEVEL {
    WdfExecutionLevelInvalid = 0x00,
    WdfExecutionLevelInheritFromParent,
    WdfExecutionLevelPassive,
    WdfExecutionLevelDispatch,
} WDF_EXECUTION_LEVEL;
typedef enum _WDF_SYNCHRONIZATION_SCOPE {
    WdfSynchronizationScopeInvalid = 0x00,
    WdfSynchronizationScopeInheritFromParent,
    WdfSynchronizationScopeDevice,
    WdfSynchronizationScopeQueue,
    WdfSynchronizationScopeNone,
} WDF_SYNCHRONIZATION_SCOPE;
typedef



VOID
NTAPI
EVT_WDF_OBJECT_CONTEXT_CLEANUP(
   
    WDFOBJECT Object
    );
typedef EVT_WDF_OBJECT_CONTEXT_CLEANUP *PFN_WDF_OBJECT_CONTEXT_CLEANUP;
typedef



VOID
NTAPI
EVT_WDF_OBJECT_CONTEXT_DESTROY(
   
    WDFOBJECT Object
    );
typedef EVT_WDF_OBJECT_CONTEXT_DESTROY *PFN_WDF_OBJECT_CONTEXT_DESTROY;
typedef const struct _WDF_OBJECT_CONTEXT_TYPE_INFO *PCWDF_OBJECT_CONTEXT_TYPE_INFO;
typedef struct _WDF_OBJECT_ATTRIBUTES {
    ULONG Size;
    PFN_WDF_OBJECT_CONTEXT_CLEANUP EvtCleanupCallback;
    PFN_WDF_OBJECT_CONTEXT_DESTROY EvtDestroyCallback;
    WDF_EXECUTION_LEVEL ExecutionLevel;
    WDF_SYNCHRONIZATION_SCOPE SynchronizationScope;
    WDFOBJECT ParentObject;
    size_t ContextSizeOverride;
    PCWDF_OBJECT_CONTEXT_TYPE_INFO ContextTypeInfo;
} WDF_OBJECT_ATTRIBUTES, *PWDF_OBJECT_ATTRIBUTES;
VOID
__inline
WDF_OBJECT_ATTRIBUTES_INIT(
    PWDF_OBJECT_ATTRIBUTES Attributes
    )
{
    RtlZeroMemory(Attributes, sizeof(WDF_OBJECT_ATTRIBUTES));
    Attributes->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_OBJECT_ATTRIBUTES < WdfStructureCount) ? WdfStructures[INDEX_WDF_OBJECT_ATTRIBUTES] : (size_t)(-1) ) : sizeof(WDF_OBJECT_ATTRIBUTES) );
    Attributes->ExecutionLevel = WdfExecutionLevelInheritFromParent;
    Attributes->SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
}
typedef
PCWDF_OBJECT_CONTEXT_TYPE_INFO
(__attribute__((__cdecl__)) *PFN_GET_UNIQUE_CONTEXT_TYPE)(
    VOID
    );
typedef struct _WDF_OBJECT_CONTEXT_TYPE_INFO {
    ULONG Size;
    LPCSTR ContextName;
    size_t ContextSize;
    PCWDF_OBJECT_CONTEXT_TYPE_INFO UniqueType;
    PFN_GET_UNIQUE_CONTEXT_TYPE EvtDriverGetUniqueContextType;
} WDF_OBJECT_CONTEXT_TYPE_INFO, *PWDF_OBJECT_CONTEXT_TYPE_INFO;
#pragma section(WDF_TYPE_INIT_SECTION_NAME, read, write)
#pragma section(WDF_TYPE_DEFAULT_SECTION_NAME)
typedef struct _WDF_CUSTOM_TYPE_CONTEXT {
    ULONG Size;
    ULONG_PTR Data;
} WDF_CUSTOM_TYPE_CONTEXT, *PWDF_CUSTOM_TYPE_CONTEXT;
typedef


PVOID
(FASTCALL *PFN_WDFOBJECTGETTYPEDCONTEXTWORKER)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFOBJECT Handle,
   
    PCWDF_OBJECT_CONTEXT_TYPE_INFO TypeInfo
    );

__inline
PVOID
WdfObjectGetTypedContextWorker(
   
    WDFOBJECT Handle,
   
    PCWDF_OBJECT_CONTEXT_TYPE_INFO TypeInfo
    )
{
    return ((PFN_WDFOBJECTGETTYPEDCONTEXTWORKER) WdfFunctions_01033[WdfObjectGetTypedContextWorkerTableIndex])(WdfDriverGlobals, Handle, TypeInfo);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFOBJECTALLOCATECONTEXT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFOBJECT Handle,
   
    PWDF_OBJECT_ATTRIBUTES ContextAttributes,
   
    PVOID* Context
    );


__inline
NTSTATUS
WdfObjectAllocateContext(
   
    WDFOBJECT Handle,
   
    PWDF_OBJECT_ATTRIBUTES ContextAttributes,
   
    PVOID* Context
    )
{
    return ((PFN_WDFOBJECTALLOCATECONTEXT) WdfFunctions_01033[WdfObjectAllocateContextTableIndex])(WdfDriverGlobals, Handle, ContextAttributes, Context);
}
typedef


WDFOBJECT
(FASTCALL *PFN_WDFOBJECTCONTEXTGETOBJECT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PVOID ContextPointer
    );

__inline
WDFOBJECT
WdfObjectContextGetObject(
   
    PVOID ContextPointer
    )
{
    return ((PFN_WDFOBJECTCONTEXTGETOBJECT) WdfFunctions_01033[WdfObjectContextGetObjectTableIndex])(WdfDriverGlobals, ContextPointer);
}
typedef


VOID
(NTAPI *PFN_WDFOBJECTREFERENCEACTUAL)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFOBJECT Handle,
   
    PVOID Tag,
   
    LONG Line,
   
    PCCH File
    );

__inline
VOID
WdfObjectReferenceActual(
   
    WDFOBJECT Handle,
   
    PVOID Tag,
   
    LONG Line,
   
    PCCH File
    )
{
    ((PFN_WDFOBJECTREFERENCEACTUAL) WdfFunctions_01033[WdfObjectReferenceActualTableIndex])(WdfDriverGlobals, Handle, Tag, Line, File);
}
typedef


VOID
(NTAPI *PFN_WDFOBJECTDEREFERENCEACTUAL)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFOBJECT Handle,
   
    PVOID Tag,
   
    LONG Line,
   
    PCCH File
    );

__inline
VOID
WdfObjectDereferenceActual(
   
    WDFOBJECT Handle,
   
    PVOID Tag,
   
    LONG Line,
   
    PCCH File
    )
{
    ((PFN_WDFOBJECTDEREFERENCEACTUAL) WdfFunctions_01033[WdfObjectDereferenceActualTableIndex])(WdfDriverGlobals, Handle, Tag, Line, File);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFOBJECTCREATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDF_OBJECT_ATTRIBUTES Attributes,
   
    WDFOBJECT* Object
    );


__inline
NTSTATUS
WdfObjectCreate(
   
    PWDF_OBJECT_ATTRIBUTES Attributes,
   
    WDFOBJECT* Object
    )
{
    return ((PFN_WDFOBJECTCREATE) WdfFunctions_01033[WdfObjectCreateTableIndex])(WdfDriverGlobals, Attributes, Object);
}
typedef


VOID
(NTAPI *PFN_WDFOBJECTDELETE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFOBJECT Object
    );

__inline
VOID
WdfObjectDelete(
   
    WDFOBJECT Object
    )
{
    ((PFN_WDFOBJECTDELETE) WdfFunctions_01033[WdfObjectDeleteTableIndex])(WdfDriverGlobals, Object);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFOBJECTQUERY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFOBJECT Object,
   
    CONST GUID* Guid,
   
    ULONG QueryBufferLength,
   
    PVOID QueryBuffer
    );


__inline
NTSTATUS
WdfObjectQuery(
   
    WDFOBJECT Object,
   
    CONST GUID* Guid,
   
    ULONG QueryBufferLength,
   
    PVOID QueryBuffer
    )
{
    return ((PFN_WDFOBJECTQUERY) WdfFunctions_01033[WdfObjectQueryTableIndex])(WdfDriverGlobals, Object, Guid, QueryBufferLength, QueryBuffer);
}


typedef


VOID
(NTAPI *PFN_WDFOBJECTACQUIRELOCK)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
   
   
    WDFOBJECT Object
    );

__inline
VOID
WdfObjectAcquireLock(
   
   
   
    WDFOBJECT Object
    )
{
    ((PFN_WDFOBJECTACQUIRELOCK) WdfFunctions_01033[WdfObjectAcquireLockTableIndex])(WdfDriverGlobals, Object);
}
typedef


VOID
(NTAPI *PFN_WDFOBJECTRELEASELOCK)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
   
   
    WDFOBJECT Object
    );

__inline
VOID
WdfObjectReleaseLock(
   
   
   
    WDFOBJECT Object
    )
{
    ((PFN_WDFOBJECTRELEASELOCK) WdfFunctions_01033[WdfObjectReleaseLockTableIndex])(WdfDriverGlobals, Object);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFWAITLOCKCREATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDF_OBJECT_ATTRIBUTES LockAttributes,
   
    WDFWAITLOCK* Lock
    );


__inline
NTSTATUS
WdfWaitLockCreate(
   
    PWDF_OBJECT_ATTRIBUTES LockAttributes,
   
    WDFWAITLOCK* Lock
    )
{
    return ((PFN_WDFWAITLOCKCREATE) WdfFunctions_01033[WdfWaitLockCreateTableIndex])(WdfDriverGlobals, LockAttributes, Lock);
}
typedef







NTSTATUS
(NTAPI *PFN_WDFWAITLOCKACQUIRE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
   
    WDFWAITLOCK Lock,
   
    PLONGLONG Timeout
    );






__inline
NTSTATUS
WdfWaitLockAcquire(
   
   
    WDFWAITLOCK Lock,
   
    PLONGLONG Timeout
    )
{
    return ((PFN_WDFWAITLOCKACQUIRE) WdfFunctions_01033[WdfWaitLockAcquireTableIndex])(WdfDriverGlobals, Lock, Timeout);
}
typedef


VOID
(NTAPI *PFN_WDFWAITLOCKRELEASE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
   
   
    WDFWAITLOCK Lock
    );

__inline
VOID
WdfWaitLockRelease(
   
   
   
    WDFWAITLOCK Lock
    )
{
    ((PFN_WDFWAITLOCKRELEASE) WdfFunctions_01033[WdfWaitLockReleaseTableIndex])(WdfDriverGlobals, Lock);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFSPINLOCKCREATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDF_OBJECT_ATTRIBUTES SpinLockAttributes,
   
    WDFSPINLOCK* SpinLock
    );


__inline
NTSTATUS
WdfSpinLockCreate(
   
    PWDF_OBJECT_ATTRIBUTES SpinLockAttributes,
   
    WDFSPINLOCK* SpinLock
    )
{
    return ((PFN_WDFSPINLOCKCREATE) WdfFunctions_01033[WdfSpinLockCreateTableIndex])(WdfDriverGlobals, SpinLockAttributes, SpinLock);
}
typedef



VOID
(NTAPI *PFN_WDFSPINLOCKACQUIRE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
   
   
   
    WDFSPINLOCK SpinLock
    );


__inline
VOID
WdfSpinLockAcquire(
   
   
   
   
    WDFSPINLOCK SpinLock
    )
{
    ((PFN_WDFSPINLOCKACQUIRE) WdfFunctions_01033[WdfSpinLockAcquireTableIndex])(WdfDriverGlobals, SpinLock);
}
typedef



VOID
(NTAPI *PFN_WDFSPINLOCKRELEASE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
   
   
   
    WDFSPINLOCK SpinLock
    );


__inline
VOID
WdfSpinLockRelease(
   
   
   
   
    WDFSPINLOCK SpinLock
    )
{
    ((PFN_WDFSPINLOCKRELEASE) WdfFunctions_01033[WdfSpinLockReleaseTableIndex])(WdfDriverGlobals, SpinLock);
}


LONGLONG
__inline
WDF_REL_TIMEOUT_IN_SEC(
    ULONGLONG Time
    )
{
    return Time * -1 * ((LONGLONG) 1 * 10 * 1000 * 1000);
}
LONGLONG
__inline
WDF_ABS_TIMEOUT_IN_SEC(
    ULONGLONG Time
    )
{
    return Time * 1 * ((LONGLONG) 1 * 10 * 1000 * 1000);
}
LONGLONG
__inline
WDF_REL_TIMEOUT_IN_MS(
    ULONGLONG Time
    )
{
    return Time * -1 * ((LONGLONG) 1 * 10 * 1000);
}
LONGLONG
__inline
WDF_ABS_TIMEOUT_IN_MS(
    ULONGLONG Time
    )
{
    return Time * 1 * ((LONGLONG) 1 * 10 * 1000);
}
LONGLONG
__inline
WDF_REL_TIMEOUT_IN_US(
    ULONGLONG Time
    )
{
    return Time * -1 * ((LONGLONG) 1 * 10);
}
LONGLONG
__inline
WDF_ABS_TIMEOUT_IN_US(
    ULONGLONG Time
    )
{
    return Time * 1 * ((LONGLONG) 1 * 10);
}
size_t
__inline
WDF_ALIGN_SIZE_DOWN(
    size_t Length,
    size_t AlignTo
    )
{
    return Length & ~(AlignTo - 1);
}
size_t
__inline
WDF_ALIGN_SIZE_UP(
    size_t Length,
    size_t AlignTo
    )
{
    return WDF_ALIGN_SIZE_DOWN(Length + AlignTo - 1, AlignTo);
}


typedef enum _WDF_DRIVER_INIT_FLAGS {
    WdfDriverInitNonPnpDriver = 0x00000001,
    WdfDriverInitNoDispatchOverride = 0x00000002,
    WdfVerifyOn = 0x00000004,
    WdfVerifierOn = 0x00000008,
    WdfDriverInitCompanion = 0x00000010,
} WDF_DRIVER_INIT_FLAGS;
typedef



NTSTATUS
NTAPI
EVT_WDF_DRIVER_DEVICE_ADD(
   
    WDFDRIVER Driver,
   
    PWDFDEVICE_INIT DeviceInit
    );
typedef EVT_WDF_DRIVER_DEVICE_ADD *PFN_WDF_DRIVER_DEVICE_ADD;
typedef



VOID
NTAPI
EVT_WDF_DRIVER_UNLOAD(
   
    WDFDRIVER Driver
    );
typedef EVT_WDF_DRIVER_UNLOAD *PFN_WDF_DRIVER_UNLOAD;
typedef



NTSTATUS
NTAPI
EVT_WDF_TRACE_CALLBACK(
   
    UCHAR minorFunction,
   
    PVOID dataPath,
   
    ULONG bufferLength,
   
    PVOID buffer,
   
    PVOID context,
   
    PULONG size
    );
typedef EVT_WDF_TRACE_CALLBACK *PFN_WDF_TRACE_CALLBACK;
typedef struct _WDF_DRIVER_CONFIG {
    ULONG Size;
    PFN_WDF_DRIVER_DEVICE_ADD EvtDriverDeviceAdd;
    PFN_WDF_DRIVER_UNLOAD EvtDriverUnload;
    ULONG DriverInitFlags;
    ULONG DriverPoolTag;
} WDF_DRIVER_CONFIG, *PWDF_DRIVER_CONFIG;
VOID
__inline
WDF_DRIVER_CONFIG_INIT(
    PWDF_DRIVER_CONFIG Config,
    PFN_WDF_DRIVER_DEVICE_ADD EvtDriverDeviceAdd
    )
{
    RtlZeroMemory(Config, sizeof(WDF_DRIVER_CONFIG));
    Config->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_DRIVER_CONFIG < WdfStructureCount) ? WdfStructures[INDEX_WDF_DRIVER_CONFIG] : (size_t)(-1) ) : sizeof(WDF_DRIVER_CONFIG) );
    Config->EvtDriverDeviceAdd = EvtDriverDeviceAdd;
}
typedef struct _WDF_DRIVER_VERSION_AVAILABLE_PARAMS {
    ULONG Size;
    ULONG MajorVersion;
    ULONG MinorVersion;
} WDF_DRIVER_VERSION_AVAILABLE_PARAMS, *PWDF_DRIVER_VERSION_AVAILABLE_PARAMS;
VOID
__inline
WDF_DRIVER_VERSION_AVAILABLE_PARAMS_INIT(
    PWDF_DRIVER_VERSION_AVAILABLE_PARAMS Params,
    ULONG MajorVersion,
    ULONG MinorVersion
    )
{
    RtlZeroMemory(Params, sizeof(WDF_DRIVER_VERSION_AVAILABLE_PARAMS));
    Params->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_DRIVER_VERSION_AVAILABLE_PARAMS < WdfStructureCount) ? WdfStructures[INDEX_WDF_DRIVER_VERSION_AVAILABLE_PARAMS] : (size_t)(-1) ) : sizeof(WDF_DRIVER_VERSION_AVAILABLE_PARAMS) );
    Params->MajorVersion = MajorVersion;
    Params->MinorVersion = MinorVersion;
}
WDFDRIVER
__inline
WdfGetDriver(
    VOID
    )
{
    return WdfDriverGlobals->Driver;
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDRIVERCREATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PDRIVER_OBJECT DriverObject,
   
    PCUNICODE_STRING RegistryPath,
   
    PWDF_OBJECT_ATTRIBUTES DriverAttributes,
   
    PWDF_DRIVER_CONFIG DriverConfig,
   
    WDFDRIVER* Driver
    );


__inline
NTSTATUS
WdfDriverCreate(
   
    PDRIVER_OBJECT DriverObject,
   
    PCUNICODE_STRING RegistryPath,
   
    PWDF_OBJECT_ATTRIBUTES DriverAttributes,
   
    PWDF_DRIVER_CONFIG DriverConfig,
   
    WDFDRIVER* Driver
    )
{
    return ((PFN_WDFDRIVERCREATE) WdfFunctions_01033[WdfDriverCreateTableIndex])(WdfDriverGlobals, DriverObject, RegistryPath, DriverAttributes, DriverConfig, Driver);
}
typedef


PWSTR
(NTAPI *PFN_WDFDRIVERGETREGISTRYPATH)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDRIVER Driver
    );

__inline
PWSTR
WdfDriverGetRegistryPath(
   
    WDFDRIVER Driver
    )
{
    return ((PFN_WDFDRIVERGETREGISTRYPATH) WdfFunctions_01033[WdfDriverGetRegistryPathTableIndex])(WdfDriverGlobals, Driver);
}
typedef


PDRIVER_OBJECT
(NTAPI *PFN_WDFDRIVERWDMGETDRIVEROBJECT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDRIVER Driver
    );

__inline
PDRIVER_OBJECT
WdfDriverWdmGetDriverObject(
   
    WDFDRIVER Driver
    )
{
    return ((PFN_WDFDRIVERWDMGETDRIVEROBJECT) WdfFunctions_01033[WdfDriverWdmGetDriverObjectTableIndex])(WdfDriverGlobals, Driver);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDRIVEROPENPARAMETERSREGISTRYKEY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDRIVER Driver,
   
    ACCESS_MASK DesiredAccess,
   
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
   
    WDFKEY* Key
    );


__inline
NTSTATUS
WdfDriverOpenParametersRegistryKey(
   
    WDFDRIVER Driver,
   
    ACCESS_MASK DesiredAccess,
   
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
   
    WDFKEY* Key
    )
{
    return ((PFN_WDFDRIVEROPENPARAMETERSREGISTRYKEY) WdfFunctions_01033[WdfDriverOpenParametersRegistryKeyTableIndex])(WdfDriverGlobals, Driver, DesiredAccess, KeyAttributes, Key);
}
typedef


WDFDRIVER
(NTAPI *PFN_WDFWDMDRIVERGETWDFDRIVERHANDLE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PDRIVER_OBJECT DriverObject
    );

__inline
WDFDRIVER
WdfWdmDriverGetWdfDriverHandle(
   
    PDRIVER_OBJECT DriverObject
    )
{
    return ((PFN_WDFWDMDRIVERGETWDFDRIVERHANDLE) WdfFunctions_01033[WdfWdmDriverGetWdfDriverHandleTableIndex])(WdfDriverGlobals, DriverObject);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDRIVERREGISTERTRACEINFO)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PDRIVER_OBJECT DriverObject,
   
    PFN_WDF_TRACE_CALLBACK EvtTraceCallback,
   
    PVOID ControlBlock
    );


__inline
NTSTATUS
WdfDriverRegisterTraceInfo(
   
    PDRIVER_OBJECT DriverObject,
   
    PFN_WDF_TRACE_CALLBACK EvtTraceCallback,
   
    PVOID ControlBlock
    )
{
    return ((PFN_WDFDRIVERREGISTERTRACEINFO) WdfFunctions_01033[WdfDriverRegisterTraceInfoTableIndex])(WdfDriverGlobals, DriverObject, EvtTraceCallback, ControlBlock);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDRIVERRETRIEVEVERSIONSTRING)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDRIVER Driver,
   
    WDFSTRING String
    );


__inline
NTSTATUS
WdfDriverRetrieveVersionString(
   
    WDFDRIVER Driver,
   
    WDFSTRING String
    )
{
    return ((PFN_WDFDRIVERRETRIEVEVERSIONSTRING) WdfFunctions_01033[WdfDriverRetrieveVersionStringTableIndex])(WdfDriverGlobals, Driver, String);
}
typedef



BOOLEAN
(NTAPI *PFN_WDFDRIVERISVERSIONAVAILABLE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDRIVER Driver,
   
    PWDF_DRIVER_VERSION_AVAILABLE_PARAMS VersionAvailableParams
    );


__inline
BOOLEAN
WdfDriverIsVersionAvailable(
   
    WDFDRIVER Driver,
   
    PWDF_DRIVER_VERSION_AVAILABLE_PARAMS VersionAvailableParams
    )
{
    return ((PFN_WDFDRIVERISVERSIONAVAILABLE) WdfFunctions_01033[WdfDriverIsVersionAvailableTableIndex])(WdfDriverGlobals, Driver, VersionAvailableParams);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDRIVERERRORREPORTAPIMISSING)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDRIVER Driver,
   
    PCWSTR FrameworkExtensionName,
   
    ULONG ApiIndex,
   
    BOOLEAN DoesApiReturnNtstatus
    );


__inline
NTSTATUS
WdfDriverErrorReportApiMissing(
   
    WDFDRIVER Driver,
   
    PCWSTR FrameworkExtensionName,
   
    ULONG ApiIndex,
   
    BOOLEAN DoesApiReturnNtstatus
    )
{
    return ((PFN_WDFDRIVERERRORREPORTAPIMISSING) WdfFunctions_01033[WdfDriverErrorReportApiMissingTableIndex])(WdfDriverGlobals, Driver, FrameworkExtensionName, ApiIndex, DoesApiReturnNtstatus);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDRIVEROPENPERSISTENTSTATEREGISTRYKEY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDRIVER Driver,
   
    ACCESS_MASK DesiredAccess,
   
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
   
    WDFKEY* Key
    );


__inline
NTSTATUS
WdfDriverOpenPersistentStateRegistryKey(
   
    WDFDRIVER Driver,
   
    ACCESS_MASK DesiredAccess,
   
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
   
    WDFKEY* Key
    )
{
    return ((PFN_WDFDRIVEROPENPERSISTENTSTATEREGISTRYKEY) WdfFunctions_01033[WdfDriverOpenPersistentStateRegistryKeyTableIndex])(WdfDriverGlobals, Driver, DesiredAccess, KeyAttributes, Key);
}


typedef



NTSTATUS
NTAPI
EVT_WDF_DEVICE_PROCESS_QUERY_INTERFACE_REQUEST(
   
    WDFDEVICE Device,
   
    LPGUID InterfaceType,
   
    PINTERFACE ExposedInterface,
   
    PVOID ExposedInterfaceSpecificData
    );
typedef EVT_WDF_DEVICE_PROCESS_QUERY_INTERFACE_REQUEST *PFN_WDF_DEVICE_PROCESS_QUERY_INTERFACE_REQUEST;
typedef struct _WDF_QUERY_INTERFACE_CONFIG {
    ULONG Size;
    PINTERFACE Interface;
    CONST GUID * InterfaceType;
    BOOLEAN SendQueryToParentStack;
    PFN_WDF_DEVICE_PROCESS_QUERY_INTERFACE_REQUEST EvtDeviceProcessQueryInterfaceRequest;
    BOOLEAN ImportInterface;
} WDF_QUERY_INTERFACE_CONFIG, *PWDF_QUERY_INTERFACE_CONFIG;
VOID
__inline
WDF_QUERY_INTERFACE_CONFIG_INIT(
    PWDF_QUERY_INTERFACE_CONFIG InterfaceConfig,
    PINTERFACE Interface,
    CONST GUID* InterfaceType,
    PFN_WDF_DEVICE_PROCESS_QUERY_INTERFACE_REQUEST EvtDeviceProcessQueryInterfaceRequest
    )
{
    RtlZeroMemory(InterfaceConfig, sizeof(WDF_QUERY_INTERFACE_CONFIG));
    InterfaceConfig->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_QUERY_INTERFACE_CONFIG < WdfStructureCount) ? WdfStructures[INDEX_WDF_QUERY_INTERFACE_CONFIG] : (size_t)(-1) ) : sizeof(WDF_QUERY_INTERFACE_CONFIG) );
    InterfaceConfig->Interface = Interface;
    InterfaceConfig->InterfaceType = InterfaceType;
    InterfaceConfig->EvtDeviceProcessQueryInterfaceRequest =
        EvtDeviceProcessQueryInterfaceRequest;
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICEADDQUERYINTERFACE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PWDF_QUERY_INTERFACE_CONFIG InterfaceConfig
    );


__inline
NTSTATUS
WdfDeviceAddQueryInterface(
   
    WDFDEVICE Device,
   
    PWDF_QUERY_INTERFACE_CONFIG InterfaceConfig
    )
{
    return ((PFN_WDFDEVICEADDQUERYINTERFACE) WdfFunctions_01033[WdfDeviceAddQueryInterfaceTableIndex])(WdfDriverGlobals, Device, InterfaceConfig);
}
VOID
__inline
WdfDeviceInterfaceReferenceNoOp(
    PVOID Context
    )
{
    UNREFERENCED_PARAMETER(Context);
}
VOID
__inline
WdfDeviceInterfaceDereferenceNoOp(
    PVOID Context
    )
{
    UNREFERENCED_PARAMETER(Context);
}


typedef enum _WDF_MEMORY_DESCRIPTOR_TYPE {
    WdfMemoryDescriptorTypeInvalid = 0,
    WdfMemoryDescriptorTypeBuffer,
    WdfMemoryDescriptorTypeMdl,
    WdfMemoryDescriptorTypeHandle,
} WDF_MEMORY_DESCRIPTOR_TYPE;
typedef struct _WDFMEMORY_OFFSET {
    size_t BufferOffset;
    size_t BufferLength;
} WDFMEMORY_OFFSET, *PWDFMEMORY_OFFSET;
typedef struct _WDF_MEMORY_DESCRIPTOR {
    WDF_MEMORY_DESCRIPTOR_TYPE Type;
    union {
        struct {
            PVOID Buffer;
            ULONG Length;
        } BufferType;
        struct {
            PMDL Mdl;
            ULONG BufferLength;
        } MdlType;
        struct {
            WDFMEMORY Memory;
            PWDFMEMORY_OFFSET Offsets;
        } HandleType;
    } u;
} WDF_MEMORY_DESCRIPTOR, *PWDF_MEMORY_DESCRIPTOR;
VOID
__inline
WDF_MEMORY_DESCRIPTOR_INIT_BUFFER(
    PWDF_MEMORY_DESCRIPTOR Descriptor,
    PVOID Buffer,
    ULONG BufferLength
    )
{
    RtlZeroMemory(Descriptor, sizeof(WDF_MEMORY_DESCRIPTOR));
    Descriptor->Type = WdfMemoryDescriptorTypeBuffer;
    Descriptor->u.BufferType.Buffer = Buffer;
    Descriptor->u.BufferType.Length = BufferLength;
}
VOID
__inline
WDF_MEMORY_DESCRIPTOR_INIT_HANDLE(
    PWDF_MEMORY_DESCRIPTOR Descriptor,
    WDFMEMORY Memory,
    PWDFMEMORY_OFFSET Offsets
    )
{
    RtlZeroMemory(Descriptor, sizeof(WDF_MEMORY_DESCRIPTOR));
    Descriptor->Type = WdfMemoryDescriptorTypeHandle;
    Descriptor->u.HandleType.Memory = Memory;
    Descriptor->u.HandleType.Offsets = Offsets;
}
VOID
__inline
WDF_MEMORY_DESCRIPTOR_INIT_MDL(
    PWDF_MEMORY_DESCRIPTOR Descriptor,
    PMDL Mdl,
    ULONG BufferLength
    )
{
    RtlZeroMemory(Descriptor, sizeof(WDF_MEMORY_DESCRIPTOR));
    Descriptor->Type = WdfMemoryDescriptorTypeMdl;
    Descriptor->u.MdlType.Mdl = Mdl;
    Descriptor->u.MdlType.BufferLength = BufferLength;
}
typedef




NTSTATUS
(NTAPI *PFN_WDFMEMORYCREATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDF_OBJECT_ATTRIBUTES Attributes,
   
   
    POOL_TYPE PoolType,
   
    ULONG PoolTag,
   
   
    size_t BufferSize,
   
    WDFMEMORY* Memory,
   
    PVOID* Buffer
    );



__inline
NTSTATUS
WdfMemoryCreate(
   
    PWDF_OBJECT_ATTRIBUTES Attributes,
   
   
    POOL_TYPE PoolType,
   
    ULONG PoolTag,
   
   
    size_t BufferSize,
   
    WDFMEMORY* Memory,
   
    PVOID* Buffer
    )
{
    return ((PFN_WDFMEMORYCREATE) WdfFunctions_01033[WdfMemoryCreateTableIndex])(WdfDriverGlobals, Attributes, PoolType, PoolTag, BufferSize, Memory, Buffer);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFMEMORYCREATEPREALLOCATED)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDF_OBJECT_ATTRIBUTES Attributes,
   
    PVOID Buffer,
   
   
    size_t BufferSize,
   
    WDFMEMORY* Memory
    );


__inline
NTSTATUS
WdfMemoryCreatePreallocated(
   
    PWDF_OBJECT_ATTRIBUTES Attributes,
   
    PVOID Buffer,
   
   
    size_t BufferSize,
   
    WDFMEMORY* Memory
    )
{
    return ((PFN_WDFMEMORYCREATEPREALLOCATED) WdfFunctions_01033[WdfMemoryCreatePreallocatedTableIndex])(WdfDriverGlobals, Attributes, Buffer, BufferSize, Memory);
}
typedef


PVOID
(NTAPI *PFN_WDFMEMORYGETBUFFER)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFMEMORY Memory,
   
    size_t* BufferSize
    );

__inline
PVOID
WdfMemoryGetBuffer(
   
    WDFMEMORY Memory,
   
    size_t* BufferSize
    )
{
    return ((PFN_WDFMEMORYGETBUFFER) WdfFunctions_01033[WdfMemoryGetBufferTableIndex])(WdfDriverGlobals, Memory, BufferSize);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFMEMORYASSIGNBUFFER)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFMEMORY Memory,
   
    PVOID Buffer,
   
   
    size_t BufferSize
    );


__inline
NTSTATUS
WdfMemoryAssignBuffer(
   
    WDFMEMORY Memory,
   
    PVOID Buffer,
   
   
    size_t BufferSize
    )
{
    return ((PFN_WDFMEMORYASSIGNBUFFER) WdfFunctions_01033[WdfMemoryAssignBufferTableIndex])(WdfDriverGlobals, Memory, Buffer, BufferSize);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFMEMORYCOPYTOBUFFER)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFMEMORY SourceMemory,
   
    size_t SourceOffset,
   
    PVOID Buffer,
   
   
    size_t NumBytesToCopyTo
    );


__inline
NTSTATUS
WdfMemoryCopyToBuffer(
   
    WDFMEMORY SourceMemory,
   
    size_t SourceOffset,
   
    PVOID Buffer,
   
   
    size_t NumBytesToCopyTo
    )
{
    return ((PFN_WDFMEMORYCOPYTOBUFFER) WdfFunctions_01033[WdfMemoryCopyToBufferTableIndex])(WdfDriverGlobals, SourceMemory, SourceOffset, Buffer, NumBytesToCopyTo);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFMEMORYCOPYFROMBUFFER)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFMEMORY DestinationMemory,
   
    size_t DestinationOffset,
   
    PVOID Buffer,
   
   
    size_t NumBytesToCopyFrom
    );


__inline
NTSTATUS
WdfMemoryCopyFromBuffer(
   
    WDFMEMORY DestinationMemory,
   
    size_t DestinationOffset,
   
    PVOID Buffer,
   
   
    size_t NumBytesToCopyFrom
    )
{
    return ((PFN_WDFMEMORYCOPYFROMBUFFER) WdfFunctions_01033[WdfMemoryCopyFromBufferTableIndex])(WdfDriverGlobals, DestinationMemory, DestinationOffset, Buffer, NumBytesToCopyFrom);
}
typedef




NTSTATUS
(NTAPI *PFN_WDFLOOKASIDELISTCREATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDF_OBJECT_ATTRIBUTES LookasideAttributes,
   
   
    size_t BufferSize,
   
   
    POOL_TYPE PoolType,
   
    PWDF_OBJECT_ATTRIBUTES MemoryAttributes,
   
    ULONG PoolTag,
   
    WDFLOOKASIDE* Lookaside
    );



__inline
NTSTATUS
WdfLookasideListCreate(
   
    PWDF_OBJECT_ATTRIBUTES LookasideAttributes,
   
   
    size_t BufferSize,
   
   
    POOL_TYPE PoolType,
   
    PWDF_OBJECT_ATTRIBUTES MemoryAttributes,
   
    ULONG PoolTag,
   
    WDFLOOKASIDE* Lookaside
    )
{
    return ((PFN_WDFLOOKASIDELISTCREATE) WdfFunctions_01033[WdfLookasideListCreateTableIndex])(WdfDriverGlobals, LookasideAttributes, BufferSize, PoolType, MemoryAttributes, PoolTag, Lookaside);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFMEMORYCREATEFROMLOOKASIDE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFLOOKASIDE Lookaside,
   
    WDFMEMORY* Memory
    );


__inline
NTSTATUS
WdfMemoryCreateFromLookaside(
   
    WDFLOOKASIDE Lookaside,
   
    WDFMEMORY* Memory
    )
{
    return ((PFN_WDFMEMORYCREATEFROMLOOKASIDE) WdfFunctions_01033[WdfMemoryCreateFromLookasideTableIndex])(WdfDriverGlobals, Lookaside, Memory);
}


typedef enum _WDF_CHILD_LIST_RETRIEVE_DEVICE_STATUS {
    WdfChildListRetrieveDeviceUndefined = 0,
    WdfChildListRetrieveDeviceSuccess,
    WdfChildListRetrieveDeviceNotYetCreated,
    WdfChildListRetrieveDeviceNoSuchDevice,
} WDF_CHILD_LIST_RETRIEVE_DEVICE_STATUS, *PWDF_CHILD_LIST_RETRIEVE_DEVICE_STATUS;
typedef enum _WDF_RETRIEVE_CHILD_FLAGS {
    WdfRetrieveUnspecified = 0x0000,
    WdfRetrievePresentChildren = 0x0001,
    WdfRetrieveMissingChildren = 0x0002,
    WdfRetrievePendingChildren = 0x0004,
    WdfRetrieveAddedChildren = (WdfRetrievePresentChildren | WdfRetrievePendingChildren),
    WdfRetrieveAllChildren = (WdfRetrievePresentChildren | WdfRetrievePendingChildren | WdfRetrieveMissingChildren),
} WDF_RETRIEVE_CHILD_FLAGS;
typedef struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER {
    ULONG IdentificationDescriptionSize;
} WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER,
  *PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER;
VOID
__inline
WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER_INIT(
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER Header,
    ULONG IdentificationDescriptionSize
    )
{
    RtlZeroMemory(Header, IdentificationDescriptionSize);
    Header->IdentificationDescriptionSize = IdentificationDescriptionSize;
}
typedef struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER {
    ULONG AddressDescriptionSize;
} WDF_CHILD_ADDRESS_DESCRIPTION_HEADER,
  *PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER;
VOID
__inline
WDF_CHILD_ADDRESS_DESCRIPTION_HEADER_INIT(
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER Header,
    ULONG AddressDescriptionSize
    )
{
    RtlZeroMemory(Header, AddressDescriptionSize);
    Header->AddressDescriptionSize = AddressDescriptionSize;
}
typedef



NTSTATUS
NTAPI
EVT_WDF_CHILD_LIST_CREATE_DEVICE(
   
    WDFCHILDLIST ChildList,
   
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription,
   
    PWDFDEVICE_INIT ChildInit
    );
typedef EVT_WDF_CHILD_LIST_CREATE_DEVICE *PFN_WDF_CHILD_LIST_CREATE_DEVICE;
typedef



VOID
NTAPI
EVT_WDF_CHILD_LIST_SCAN_FOR_CHILDREN(
   
    WDFCHILDLIST ChildList
    );
typedef EVT_WDF_CHILD_LIST_SCAN_FOR_CHILDREN *PFN_WDF_CHILD_LIST_SCAN_FOR_CHILDREN;
typedef



VOID
NTAPI
EVT_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_COPY(
   
    WDFCHILDLIST ChildList,
   
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER SourceIdentificationDescription,
   
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER DestinationIdentificationDescription
    );
typedef EVT_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_COPY *PFN_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_COPY;
typedef



NTSTATUS
NTAPI
EVT_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_DUPLICATE(
   
    WDFCHILDLIST ChildList,
   
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER SourceIdentificationDescription,
   
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER DestinationIdentificationDescription
    );
typedef EVT_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_DUPLICATE *PFN_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_DUPLICATE;
typedef



BOOLEAN
NTAPI
EVT_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_COMPARE(
   
    WDFCHILDLIST ChildList,
   
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER FirstIdentificationDescription,
   
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER SecondIdentificationDescription
    );
typedef EVT_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_COMPARE *PFN_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_COMPARE;
typedef



VOID
NTAPI
EVT_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_CLEANUP(
   
    WDFCHILDLIST ChildList,
   
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription
    );
typedef EVT_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_CLEANUP *PFN_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_CLEANUP;
typedef



VOID
NTAPI
EVT_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_COPY(
   
    WDFCHILDLIST ChildList,
   
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER SourceAddressDescription,
   
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER DestinationAddressDescription
    );
typedef EVT_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_COPY *PFN_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_COPY;
typedef



NTSTATUS
NTAPI
EVT_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_DUPLICATE(
   
    WDFCHILDLIST ChildList,
   
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER SourceAddressDescription,
   
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER DestinationAddressDescription
    );
typedef EVT_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_DUPLICATE *PFN_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_DUPLICATE;
typedef



VOID
NTAPI
EVT_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_CLEANUP(
   
    WDFCHILDLIST ChildList,
   
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER AddressDescription
    );
typedef EVT_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_CLEANUP *PFN_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_CLEANUP;
typedef



BOOLEAN
NTAPI
EVT_WDF_CHILD_LIST_DEVICE_REENUMERATED(
   
    WDFCHILDLIST ChildList,
   
    WDFDEVICE OldDevice,
   
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER OldAddressDescription,
   
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER NewAddressDescription
    );
typedef EVT_WDF_CHILD_LIST_DEVICE_REENUMERATED *PFN_WDF_CHILD_LIST_DEVICE_REENUMERATED;
typedef struct _WDF_CHILD_RETRIEVE_INFO {
    ULONG Size;
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription;
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER AddressDescription;
    WDF_CHILD_LIST_RETRIEVE_DEVICE_STATUS Status;
    PFN_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_COMPARE EvtChildListIdentificationDescriptionCompare;
} WDF_CHILD_RETRIEVE_INFO, *PWDF_CHILD_RETRIEVE_INFO;
VOID
__inline
WDF_CHILD_RETRIEVE_INFO_INIT(
    PWDF_CHILD_RETRIEVE_INFO Info,
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription
    )
{
    RtlZeroMemory(Info, sizeof(WDF_CHILD_RETRIEVE_INFO));
    Info->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_CHILD_RETRIEVE_INFO < WdfStructureCount) ? WdfStructures[INDEX_WDF_CHILD_RETRIEVE_INFO] : (size_t)(-1) ) : sizeof(WDF_CHILD_RETRIEVE_INFO) );
    Info->IdentificationDescription = IdentificationDescription;
}
typedef struct _WDF_CHILD_LIST_CONFIG {
    ULONG Size;
    ULONG IdentificationDescriptionSize;
    ULONG AddressDescriptionSize;
    PFN_WDF_CHILD_LIST_CREATE_DEVICE EvtChildListCreateDevice;
    PFN_WDF_CHILD_LIST_SCAN_FOR_CHILDREN EvtChildListScanForChildren;
    PFN_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_COPY EvtChildListIdentificationDescriptionCopy;
    PFN_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_DUPLICATE EvtChildListIdentificationDescriptionDuplicate;
    PFN_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_CLEANUP EvtChildListIdentificationDescriptionCleanup;
    PFN_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_COMPARE EvtChildListIdentificationDescriptionCompare;
    PFN_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_COPY EvtChildListAddressDescriptionCopy;
    PFN_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_DUPLICATE EvtChildListAddressDescriptionDuplicate;
    PFN_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_CLEANUP EvtChildListAddressDescriptionCleanup;
    PFN_WDF_CHILD_LIST_DEVICE_REENUMERATED EvtChildListDeviceReenumerated;
} WDF_CHILD_LIST_CONFIG, *PWDF_CHILD_LIST_CONFIG;
VOID
__inline
WDF_CHILD_LIST_CONFIG_INIT(
    PWDF_CHILD_LIST_CONFIG Config,
    ULONG IdentificationDescriptionSize,
    PFN_WDF_CHILD_LIST_CREATE_DEVICE EvtChildListCreateDevice
    )
{
    RtlZeroMemory(Config, sizeof(WDF_CHILD_LIST_CONFIG));
    Config->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_CHILD_LIST_CONFIG < WdfStructureCount) ? WdfStructures[INDEX_WDF_CHILD_LIST_CONFIG] : (size_t)(-1) ) : sizeof(WDF_CHILD_LIST_CONFIG) );
    Config->IdentificationDescriptionSize = IdentificationDescriptionSize;
    Config->EvtChildListCreateDevice = EvtChildListCreateDevice;
}
typedef struct _WDF_CHILD_LIST_ITERATOR {
    ULONG Size;
    ULONG Flags;
    PVOID Reserved[4];
} WDF_CHILD_LIST_ITERATOR, *PWDF_CHILD_LIST_ITERATOR;
VOID
__inline
WDF_CHILD_LIST_ITERATOR_INIT(
    PWDF_CHILD_LIST_ITERATOR Iterator,
    ULONG Flags
    )
{
    RtlZeroMemory(Iterator, sizeof(WDF_CHILD_LIST_ITERATOR));
    Iterator->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_CHILD_LIST_ITERATOR < WdfStructureCount) ? WdfStructures[INDEX_WDF_CHILD_LIST_ITERATOR] : (size_t)(-1) ) : sizeof(WDF_CHILD_LIST_ITERATOR) );
    Iterator->Flags = Flags;
}
typedef



NTSTATUS
(NTAPI *PFN_WDFCHILDLISTCREATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PWDF_CHILD_LIST_CONFIG Config,
   
    PWDF_OBJECT_ATTRIBUTES ChildListAttributes,
   
    WDFCHILDLIST* ChildList
    );


__inline
NTSTATUS
WdfChildListCreate(
   
    WDFDEVICE Device,
   
    PWDF_CHILD_LIST_CONFIG Config,
   
    PWDF_OBJECT_ATTRIBUTES ChildListAttributes,
   
    WDFCHILDLIST* ChildList
    )
{
    return ((PFN_WDFCHILDLISTCREATE) WdfFunctions_01033[WdfChildListCreateTableIndex])(WdfDriverGlobals, Device, Config, ChildListAttributes, ChildList);
}
typedef


WDFDEVICE
(NTAPI *PFN_WDFCHILDLISTGETDEVICE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCHILDLIST ChildList
    );

__inline
WDFDEVICE
WdfChildListGetDevice(
   
    WDFCHILDLIST ChildList
    )
{
    return ((PFN_WDFCHILDLISTGETDEVICE) WdfFunctions_01033[WdfChildListGetDeviceTableIndex])(WdfDriverGlobals, ChildList);
}
typedef



WDFDEVICE
(NTAPI *PFN_WDFCHILDLISTRETRIEVEPDO)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCHILDLIST ChildList,
   
    PWDF_CHILD_RETRIEVE_INFO RetrieveInfo
    );


__inline
WDFDEVICE
WdfChildListRetrievePdo(
   
    WDFCHILDLIST ChildList,
   
    PWDF_CHILD_RETRIEVE_INFO RetrieveInfo
    )
{
    return ((PFN_WDFCHILDLISTRETRIEVEPDO) WdfFunctions_01033[WdfChildListRetrievePdoTableIndex])(WdfDriverGlobals, ChildList, RetrieveInfo);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFCHILDLISTRETRIEVEADDRESSDESCRIPTION)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCHILDLIST ChildList,
   
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription,
   
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER AddressDescription
    );


__inline
NTSTATUS
WdfChildListRetrieveAddressDescription(
   
    WDFCHILDLIST ChildList,
   
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription,
   
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER AddressDescription
    )
{
    return ((PFN_WDFCHILDLISTRETRIEVEADDRESSDESCRIPTION) WdfFunctions_01033[WdfChildListRetrieveAddressDescriptionTableIndex])(WdfDriverGlobals, ChildList, IdentificationDescription, AddressDescription);
}
typedef


VOID
(NTAPI *PFN_WDFCHILDLISTBEGINSCAN)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCHILDLIST ChildList
    );

__inline
VOID
WdfChildListBeginScan(
   
    WDFCHILDLIST ChildList
    )
{
    ((PFN_WDFCHILDLISTBEGINSCAN) WdfFunctions_01033[WdfChildListBeginScanTableIndex])(WdfDriverGlobals, ChildList);
}
typedef


VOID
(NTAPI *PFN_WDFCHILDLISTENDSCAN)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCHILDLIST ChildList
    );

__inline
VOID
WdfChildListEndScan(
   
    WDFCHILDLIST ChildList
    )
{
    ((PFN_WDFCHILDLISTENDSCAN) WdfFunctions_01033[WdfChildListEndScanTableIndex])(WdfDriverGlobals, ChildList);
}
typedef


VOID
(NTAPI *PFN_WDFCHILDLISTBEGINITERATION)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCHILDLIST ChildList,
   
    PWDF_CHILD_LIST_ITERATOR Iterator
    );

__inline
VOID
WdfChildListBeginIteration(
   
    WDFCHILDLIST ChildList,
   
    PWDF_CHILD_LIST_ITERATOR Iterator
    )
{
    ((PFN_WDFCHILDLISTBEGINITERATION) WdfFunctions_01033[WdfChildListBeginIterationTableIndex])(WdfDriverGlobals, ChildList, Iterator);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFCHILDLISTRETRIEVENEXTDEVICE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCHILDLIST ChildList,
   
    PWDF_CHILD_LIST_ITERATOR Iterator,
   
    WDFDEVICE* Device,
   
    PWDF_CHILD_RETRIEVE_INFO Info
    );


__inline
NTSTATUS
WdfChildListRetrieveNextDevice(
   
    WDFCHILDLIST ChildList,
   
    PWDF_CHILD_LIST_ITERATOR Iterator,
   
    WDFDEVICE* Device,
   
    PWDF_CHILD_RETRIEVE_INFO Info
    )
{
    return ((PFN_WDFCHILDLISTRETRIEVENEXTDEVICE) WdfFunctions_01033[WdfChildListRetrieveNextDeviceTableIndex])(WdfDriverGlobals, ChildList, Iterator, Device, Info);
}
typedef


VOID
(NTAPI *PFN_WDFCHILDLISTENDITERATION)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCHILDLIST ChildList,
   
    PWDF_CHILD_LIST_ITERATOR Iterator
    );

__inline
VOID
WdfChildListEndIteration(
   
    WDFCHILDLIST ChildList,
   
    PWDF_CHILD_LIST_ITERATOR Iterator
    )
{
    ((PFN_WDFCHILDLISTENDITERATION) WdfFunctions_01033[WdfChildListEndIterationTableIndex])(WdfDriverGlobals, ChildList, Iterator);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFCHILDLISTADDORUPDATECHILDDESCRIPTIONASPRESENT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCHILDLIST ChildList,
   
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription,
   
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER AddressDescription
    );


__inline
NTSTATUS
WdfChildListAddOrUpdateChildDescriptionAsPresent(
   
    WDFCHILDLIST ChildList,
   
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription,
   
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER AddressDescription
    )
{
    return ((PFN_WDFCHILDLISTADDORUPDATECHILDDESCRIPTIONASPRESENT) WdfFunctions_01033[WdfChildListAddOrUpdateChildDescriptionAsPresentTableIndex])(WdfDriverGlobals, ChildList, IdentificationDescription, AddressDescription);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFCHILDLISTUPDATECHILDDESCRIPTIONASMISSING)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCHILDLIST ChildList,
   
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription
    );


__inline
NTSTATUS
WdfChildListUpdateChildDescriptionAsMissing(
   
    WDFCHILDLIST ChildList,
   
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription
    )
{
    return ((PFN_WDFCHILDLISTUPDATECHILDDESCRIPTIONASMISSING) WdfFunctions_01033[WdfChildListUpdateChildDescriptionAsMissingTableIndex])(WdfDriverGlobals, ChildList, IdentificationDescription);
}
typedef


VOID
(NTAPI *PFN_WDFCHILDLISTUPDATEALLCHILDDESCRIPTIONSASPRESENT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCHILDLIST ChildList
    );

__inline
VOID
WdfChildListUpdateAllChildDescriptionsAsPresent(
   
    WDFCHILDLIST ChildList
    )
{
    ((PFN_WDFCHILDLISTUPDATEALLCHILDDESCRIPTIONSASPRESENT) WdfFunctions_01033[WdfChildListUpdateAllChildDescriptionsAsPresentTableIndex])(WdfDriverGlobals, ChildList);
}
typedef


BOOLEAN
(NTAPI *PFN_WDFCHILDLISTREQUESTCHILDEJECT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCHILDLIST ChildList,
   
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription
    );

__inline
BOOLEAN
WdfChildListRequestChildEject(
   
    WDFCHILDLIST ChildList,
   
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription
    )
{
    return ((PFN_WDFCHILDLISTREQUESTCHILDEJECT) WdfFunctions_01033[WdfChildListRequestChildEjectTableIndex])(WdfDriverGlobals, ChildList, IdentificationDescription);
}


typedef


PUNICODE_STRING
(NTAPI *PFN_WDFFILEOBJECTGETFILENAME)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFFILEOBJECT FileObject
    );

__inline
PUNICODE_STRING
WdfFileObjectGetFileName(
   
    WDFFILEOBJECT FileObject
    )
{
    return ((PFN_WDFFILEOBJECTGETFILENAME) WdfFunctions_01033[WdfFileObjectGetFileNameTableIndex])(WdfDriverGlobals, FileObject);
}
typedef


ULONG
(NTAPI *PFN_WDFFILEOBJECTGETFLAGS)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFFILEOBJECT FileObject
    );

__inline
ULONG
WdfFileObjectGetFlags(
   
    WDFFILEOBJECT FileObject
    )
{
    return ((PFN_WDFFILEOBJECTGETFLAGS) WdfFunctions_01033[WdfFileObjectGetFlagsTableIndex])(WdfDriverGlobals, FileObject);
}
typedef


WDFDEVICE
(NTAPI *PFN_WDFFILEOBJECTGETDEVICE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFFILEOBJECT FileObject
    );

__inline
WDFDEVICE
WdfFileObjectGetDevice(
   
    WDFFILEOBJECT FileObject
    )
{
    return ((PFN_WDFFILEOBJECTGETDEVICE) WdfFunctions_01033[WdfFileObjectGetDeviceTableIndex])(WdfDriverGlobals, FileObject);
}
typedef


ULONG
(NTAPI *PFN_WDFFILEOBJECTGETINITIATORPROCESSID)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFFILEOBJECT FileObject
    );

__inline
ULONG
WdfFileObjectGetInitiatorProcessId(
   
    WDFFILEOBJECT FileObject
    )
{
    return ((PFN_WDFFILEOBJECTGETINITIATORPROCESSID) WdfFunctions_01033[WdfFileObjectGetInitiatorProcessIdTableIndex])(WdfDriverGlobals, FileObject);
}
typedef


PFILE_OBJECT
(NTAPI *PFN_WDFFILEOBJECTWDMGETFILEOBJECT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFFILEOBJECT FileObject
    );

__inline
PFILE_OBJECT
WdfFileObjectWdmGetFileObject(
   
    WDFFILEOBJECT FileObject
    )
{
    return ((PFN_WDFFILEOBJECTWDMGETFILEOBJECT) WdfFunctions_01033[WdfFileObjectWdmGetFileObjectTableIndex])(WdfDriverGlobals, FileObject);
}


typedef ULONG DEVPROPTYPE, *PDEVPROPTYPE;
typedef CHAR DEVPROP_BOOLEAN, *PDEVPROP_BOOLEAN;
typedef GUID DEVPROPGUID, *PDEVPROPGUID;
typedef ULONG DEVPROPID, *PDEVPROPID;
typedef struct _DEVPROPKEY {
  DEVPROPGUID fmtid;
  DEVPROPID pid;
} DEVPROPKEY, *PDEVPROPKEY;
typedef enum _WDF_DEVICE_STATE_FLAGS {
    WdfDevStateNP = 0x8000,
} WDF_DEVICE_STATE_FLAGS;
typedef enum _WDF_DEVICE_PNP_STATE {
    WdfDevStatePnpInvalid = 0x00,
    WdfDevStatePnpObjectCreated = 0x100,
    WdfDevStatePnpCheckForDevicePresence = 0x101,
    WdfDevStatePnpEjectFailed = 0x102,
    WdfDevStatePnpEjectHardware = 0x103,
    WdfDevStatePnpEjectedWaitingForRemove = 0x104,
    WdfDevStatePnpInit = 0x105,
    WdfDevStatePnpInitStarting = 0x106,
    WdfDevStatePnpInitSurpriseRemoved = 0x107,
    WdfDevStatePnpHardwareAvailable = 0x108,
    WdfDevStatePnpEnableInterfaces = 0x109,
    WdfDevStatePnpHardwareAvailablePowerPolicyFailed = 0x10A,
    WdfDevStatePnpQueryRemoveAskDriver = 0x10B,
    WdfDevStatePnpQueryRemovePending = 0x10C,
    WdfDevStatePnpQueryRemoveStaticCheck = 0x10D,
    WdfDevStatePnpQueriedRemoving = 0x10E,
    WdfDevStatePnpQueryStopAskDriver = 0x10F,
    WdfDevStatePnpQueryStopPending = 0x110,
    WdfDevStatePnpQueryStopStaticCheck = 0x111,
    WdfDevStatePnpQueryCanceled = 0x112,
    WdfDevStatePnpRemoved = 0x113,
    WdfDevStatePnpPdoRemoved = 0x114,
    WdfDevStatePnpRemovedPdoWait = 0x115,
    WdfDevStatePnpRemovedPdoSurpriseRemoved = 0x116,
    WdfDevStatePnpRemovingDisableInterfaces = 0x117,
    WdfDevStatePnpRestarting = 0x118,
    WdfDevStatePnpStarted = 0x119,
    WdfDevStatePnpStartedCancelStop = 0x11A,
    WdfDevStatePnpStartedCancelRemove = 0x11B,
    WdfDevStatePnpStartedRemoving = 0x11C,
    WdfDevStatePnpStartingFromStopped = 0x11D,
    WdfDevStatePnpStopped = 0x11E,
    WdfDevStatePnpStoppedWaitForStartCompletion = 0x11F,
    WdfDevStatePnpStartedStopping = 0x120,
    WdfDevStatePnpSurpriseRemove = 0x121,
    WdfDevStatePnpInitQueryRemove = 0x122,
    WdfDevStatePnpInitQueryRemoveCanceled = 0x123,
    WdfDevStatePnpFdoRemoved = 0x124,
    WdfDevStatePnpRemovedWaitForChildren = 0x125,
    WdfDevStatePnpQueriedSurpriseRemove = 0x126,
    WdfDevStatePnpSurpriseRemoveIoStarted = 0x127,
    WdfDevStatePnpFailedPowerDown = 0x128,
    WdfDevStatePnpFailedIoStarting = 0x129,
    WdfDevStatePnpFailedOwnHardware = 0x12A,
    WdfDevStatePnpFailed = 0x12B,
    WdfDevStatePnpFailedSurpriseRemoved = 0x12C,
    WdfDevStatePnpFailedStarted = 0x12D,
    WdfDevStatePnpFailedWaitForRemove = 0x12E,
    WdfDevStatePnpFailedInit = 0x12F,
    WdfDevStatePnpPdoInitFailed = 0x130,
    WdfDevStatePnpRestart = 0x131,
    WdfDevStatePnpRestartReleaseHardware = 0x132,
    WdfDevStatePnpRestartHardwareAvailable = 0x133,
    WdfDevStatePnpPdoRestart = 0x134,
    WdfDevStatePnpFinal = 0x135,
    WdfDevStatePnpRemovedChildrenRemoved = 0x136,
    WdfDevStatePnpQueryRemoveEnsureDeviceAwake = 0x137,
    WdfDevStatePnpQueryStopEnsureDeviceAwake = 0x138,
    WdfDevStatePnpFailedPowerPolicyRemoved = 0x139,
    WdfDevStatePnpNull = 0x13A,
} WDF_DEVICE_PNP_STATE, *PWDF_DEVICE_PNP_STATE;
typedef enum _WDF_DEVICE_POWER_STATE {
    WdfDevStatePowerInvalid = 0x00,
    WdfDevStatePowerObjectCreated = 0x300,
    WdfDevStatePowerCheckDeviceType = 0x301,
    WdfDevStatePowerCheckDeviceTypeNP = 0x302 | WdfDevStateNP,
    WdfDevStatePowerCheckParentState = 0x303,
    WdfDevStatePowerCheckParentStateNP = 0x304 | WdfDevStateNP,
    WdfDevStatePowerEnablingWakeAtBus = 0x305,
    WdfDevStatePowerEnablingWakeAtBusNP = 0x306 | WdfDevStateNP,
    WdfDevStatePowerD0 = 0x307,
    WdfDevStatePowerD0NP = 0x308 | WdfDevStateNP,
    WdfDevStatePowerD0BusWakeOwner = 0x309,
    WdfDevStatePowerD0BusWakeOwnerNP = 0x30A | WdfDevStateNP,
    WdfDevStatePowerD0ArmedForWake = 0x30B,
    WdfDevStatePowerD0ArmedForWakeNP = 0x30C | WdfDevStateNP,
    WdfDevStatePowerD0DisarmingWakeAtBus = 0x30D,
    WdfDevStatePowerD0DisarmingWakeAtBusNP = 0x30E | WdfDevStateNP,
    WdfDevStatePowerD0Starting = 0x30F,
    WdfDevStatePowerD0StartingConnectInterrupt = 0x310,
    WdfDevStatePowerD0StartingDmaEnable = 0x311,
    WdfDevStatePowerD0StartingStartSelfManagedIo = 0x312,
    WdfDevStatePowerDecideD0State = 0x313,
    WdfDevStatePowerGotoD3Stopped = 0x314,
    WdfDevStatePowerStopped = 0x315,
    WdfDevStatePowerStartingCheckDeviceType = 0x316,
    WdfDevStatePowerStartingChild = 0x317,
    WdfDevStatePowerDxDisablingWakeAtBus = 0x318,
    WdfDevStatePowerDxDisablingWakeAtBusNP = 0x319 | WdfDevStateNP,
    WdfDevStatePowerGotoDx = 0x31A,
    WdfDevStatePowerGotoDxNP = 0x31B | WdfDevStateNP,
    WdfDevStatePowerGotoDxIoStopped = 0x31C,
    WdfDevStatePowerGotoDxIoStoppedNP = 0x31D | WdfDevStateNP,
    WdfDevStatePowerGotoDxNPFailed = 0x31E | WdfDevStateNP,
    WdfDevStatePowerDx = 0x31F,
    WdfDevStatePowerDxNP = 0x320 | WdfDevStateNP,
    WdfDevStatePowerGotoDxArmedForWake = 0x321,
    WdfDevStatePowerGotoDxArmedForWakeNP = 0x322 | WdfDevStateNP,
    WdfDevStatePowerGotoDxIoStoppedArmedForWake = 0x323,
    WdfDevStatePowerGotoDxIoStoppedArmedForWakeNP = 0x324 | WdfDevStateNP,
    WdfDevStatePowerDxArmedForWake = 0x325,
    WdfDevStatePowerDxArmedForWakeNP = 0x326 | WdfDevStateNP,
    WdfDevStatePowerCheckParentStateArmedForWake = 0x327,
    WdfDevStatePowerCheckParentStateArmedForWakeNP = 0x328 | WdfDevStateNP,
    WdfDevStatePowerWaitForParentArmedForWake = 0x329,
    WdfDevStatePowerWaitForParentArmedForWakeNP = 0x32A | WdfDevStateNP,
    WdfDevStatePowerStartSelfManagedIo = 0x32B,
    WdfDevStatePowerStartSelfManagedIoNP = 0x32C | WdfDevStateNP,
    WdfDevStatePowerStartSelfManagedIoFailed = 0x32D,
    WdfDevStatePowerStartSelfManagedIoFailedNP = 0x32E | WdfDevStateNP,
    WdfDevStatePowerWaitForParent = 0x32F,
    WdfDevStatePowerWaitForParentNP = 0x330 | WdfDevStateNP,
    WdfDevStatePowerWakePending = 0x331,
    WdfDevStatePowerWakePendingNP = 0x332 | WdfDevStateNP,
    WdfDevStatePowerWaking = 0x333,
    WdfDevStatePowerWakingNP = 0x334 | WdfDevStateNP,
    WdfDevStatePowerWakingConnectInterrupt = 0x335,
    WdfDevStatePowerWakingConnectInterruptNP = 0x336 | WdfDevStateNP,
    WdfDevStatePowerWakingConnectInterruptFailed = 0x337,
    WdfDevStatePowerWakingConnectInterruptFailedNP = 0x338 | WdfDevStateNP,
    WdfDevStatePowerWakingDmaEnable = 0x339,
    WdfDevStatePowerWakingDmaEnableNP = 0x33A | WdfDevStateNP,
    WdfDevStatePowerWakingDmaEnableFailed = 0x33B,
    WdfDevStatePowerWakingDmaEnableFailedNP = 0x33C | WdfDevStateNP,
    WdfDevStatePowerReportPowerUpFailedDerefParent = 0x33D,
    WdfDevStatePowerReportPowerUpFailed = 0x33E,
    WdfDevStatePowerPowerFailedPowerDown = 0x33F,
    WdfDevStatePowerReportPowerDownFailed = 0x340,
    WdfDevStatePowerInitialConnectInterruptFailed = 0x341,
    WdfDevStatePowerInitialDmaEnableFailed = 0x342,
    WdfDevStatePowerInitialSelfManagedIoFailed = 0x343,
    WdfDevStatePowerInitialPowerUpFailedDerefParent = 0x344,
    WdfDevStatePowerInitialPowerUpFailed = 0x345,
    WdfDevStatePowerDxStoppedDisarmWake = 0x346,
    WdfDevStatePowerDxStoppedDisarmWakeNP = 0x347 | WdfDevStateNP,
    WdfDevStatePowerGotoDxStoppedDisableInterruptNP = 0x348 | WdfDevStateNP,
    WdfDevStatePowerGotoDxStopped = 0x349,
    WdfDevStatePowerDxStopped = 0x34A,
    WdfDevStatePowerGotoStopped = 0x34B,
    WdfDevStatePowerStoppedCompleteDx = 0x34C,
    WdfDevStatePowerDxStoppedDecideDxState = 0x34D,
    WdfDevStatePowerDxStoppedArmForWake = 0x34E,
    WdfDevStatePowerDxStoppedArmForWakeNP = 0x34F | WdfDevStateNP,
    WdfDevStatePowerFinalPowerDownFailed = 0x350,
    WdfDevStatePowerFinal = 0x351,
    WdfDevStatePowerGotoImplicitD3DisarmWakeAtBus = 0x352,
    WdfDevStatePowerUpFailed = 0x353,
    WdfDevStatePowerUpFailedDerefParent = 0x354,
    WdfDevStatePowerGotoDxFailed = 0x355,
    WdfDevStatePowerGotoDxStoppedDisableInterrupt = 0x356,
    WdfDevStatePowerUpFailedNP = 0x357 | WdfDevStateNP,
    WdfDevStatePowerUpFailedDerefParentNP = 0x358 | WdfDevStateNP,
    WdfDevStatePowerNotifyingD0ExitToWakeInterrupts = 0x359,
    WdfDevStatePowerNotifyingD0EntryToWakeInterrupts = 0x35A,
    WdfDevStatePowerNotifyingD0ExitToWakeInterruptsNP = 0x35B | WdfDevStateNP,
    WdfDevStatePowerNotifyingD0EntryToWakeInterruptsNP = 0x35C | WdfDevStateNP,
    WdfDevStatePowerInitialPowerUpFailedPowerDown = 0x35D,
    WdfDevStatePowerUpFailedPowerDown = 0x35E,
    WdfDevStatePowerUpFailedPowerDownNP = 0x35F | WdfDevStateNP,
    WdfDevStatePowerInitialSelfManagedIoFailedStarted = 0x360,
    WdfDevStatePowerStartSelfManagedIoFailedStarted = 0x361,
    WdfDevStatePowerStartSelfManagedIoFailedStartedNP = 0x362 | WdfDevStateNP,
    WdfDevStatePowerWakingPostHardwareEnabled = 0x363,
    WdfDevStatePowerWakingPostHardwareEnabledNP = 0x364 | WdfDevStateNP,
    WdfDevStatePowerWakingPostHardwareEnabledFailed = 0x365,
    WdfDevStatePowerWakingPostHardwareEnabledFailedNP = 0x366 | WdfDevStateNP,
    WdfDevStatePowerD0StartingPostHardwareEnabled = 0x367,
    WdfDevStatePowerInitialPostHardwareEnabledFailed = 0x368,
    WdfDevStatePowerNull = 0x369,
} WDF_DEVICE_POWER_STATE, *PWDF_DEVICE_POWER_STATE;
typedef enum _WDF_DEVICE_POWER_POLICY_STATE {
    WdfDevStatePwrPolInvalid = 0x00,
    WdfDevStatePwrPolObjectCreated = 0x500,
    WdfDevStatePwrPolStarting = 0x501,
    WdfDevStatePwrPolStartingSucceeded = 0x502,
    WdfDevStatePwrPolStartingFailed = 0x503,
    WdfDevStatePwrPolStartingDecideS0Wake = 0x504,
    WdfDevStatePwrPolStartedIdleCapable = 0x505,
    WdfDevStatePwrPolTimerExpiredNoWake = 0x506,
    WdfDevStatePwrPolTimerExpiredNoWakeCompletePowerDown = 0x507,
    WdfDevStatePwrPolWaitingUnarmed = 0x508,
    WdfDevStatePwrPolWaitingUnarmedQueryIdle = 0x509,
    WdfDevStatePwrPolS0NoWakePowerUp = 0x50A,
    WdfDevStatePwrPolS0NoWakeCompletePowerUp = 0x50B,
    WdfDevStatePwrPolSystemSleepFromDeviceWaitingUnarmed = 0x50C,
    WdfDevStatePwrPolSystemSleepNeedWake = 0x50D,
    WdfDevStatePwrPolSystemSleepNeedWakeCompletePowerUp = 0x50E,
    WdfDevStatePwrPolSystemSleepPowerRequestFailed = 0x50F,
    WdfDevStatePwrPolCheckPowerPageable = 0x510,
    WdfDevStatePwrPolSleepingWakeWakeArrived = 0x511,
    WdfDevStatePwrPolSleepingWakeRevertArmWake = 0x512,
    WdfDevStatePwrPolSystemAsleepWakeArmed = 0x513,
    WdfDevStatePwrPolSystemWakeDeviceWakeEnabled = 0x514,
    WdfDevStatePwrPolSystemWakeDeviceWakeEnabledWakeCanceled = 0x515,
    WdfDevStatePwrPolSystemWakeDeviceWakeDisarm = 0x516,
    WdfDevStatePwrPolSystemWakeDeviceWakeTriggered = 0x517,
    WdfDevStatePwrPolSystemWakeDeviceWakeTriggeredS0 = 0x518,
    WdfDevStatePwrPolSystemWakeDeviceWokeDisarm = 0x519,
    WdfDevStatePwrPolSleepingWakeWakeArrivedNP = 0x51A | WdfDevStateNP,
    WdfDevStatePwrPolSleepingWakeRevertArmWakeNP = 0x51B | WdfDevStateNP,
    WdfDevStatePwrPolSleepingWakePowerDownFailed = 0x51C,
    WdfDevStatePwrPolSleepingWakePowerDownFailedWakeCanceled = 0x51D,
    WdfDevStatePwrPolSystemAsleepWakeArmedNP = 0x51E | WdfDevStateNP,
    WdfDevStatePwrPolSystemWakeDeviceWakeEnabledNP = 0x51F | WdfDevStateNP,
    WdfDevStatePwrPolSystemWakeDeviceWakeEnabledWakeCanceledNP = 0x520 | WdfDevStateNP,
    WdfDevStatePwrPolSystemWakeDeviceWakeDisarmNP = 0x521 | WdfDevStateNP,
    WdfDevStatePwrPolSystemWakeDeviceWakeTriggeredNP = 0x522 | WdfDevStateNP,
    WdfDevStatePwrPolSystemWakeDeviceWakeTriggeredS0NP = 0x523 | WdfDevStateNP,
    WdfDevStatePwrPolSystemWakeDeviceWokeDisarmNP = 0x524 | WdfDevStateNP,
    WdfDevStatePwrPolSystemWakeDeviceWakeCompletePowerUp = 0x525,
    WdfDevStatePwrPolSleeping = 0x526,
    WdfDevStatePwrPolSleepingNoWakePowerDown = 0x527,
    WdfDevStatePwrPolSleepingNoWakeCompletePowerDown = 0x528,
    WdfDevStatePwrPolSleepingNoWakeDxRequestFailed = 0x529,
    WdfDevStatePwrPolSleepingWakePowerDown = 0x52A,
    WdfDevStatePwrPolSleepingSendWake = 0x52B,
    WdfDevStatePwrPolSystemAsleepNoWake = 0x52C,
    WdfDevStatePwrPolSystemWakeDeviceWakeDisabled = 0x52D,
    WdfDevStatePwrPolSystemWakeDeviceToD0 = 0x52E,
    WdfDevStatePwrPolSystemWakeDeviceToD0CompletePowerUp = 0x52F,
    WdfDevStatePwrPolSystemWakeQueryIdle = 0x530,
    WdfDevStatePwrPolStartedWakeCapable = 0x531,
    WdfDevStatePwrPolTimerExpiredDecideUsbSS = 0x532,
    WdfDevStatePwrPolTimerExpiredWakeCapablePowerDown = 0x533,
    WdfDevStatePwrPolTimerExpiredWakeCapableSendWake = 0x534,
    WdfDevStatePwrPolTimerExpiredWakeCapableUsbSS = 0x535,
    WdfDevStatePwrPolTimerExpiredWakeCapableWakeArrived = 0x536,
    WdfDevStatePwrPolTimerExpiredWakeCapableCancelWake = 0x537,
    WdfDevStatePwrPolTimerExpiredWakeCapableWakeCanceled = 0x538,
    WdfDevStatePwrPolTimerExpiredWakeCapableCleanup = 0x539,
    WdfDevStatePwrPolTimerExpiredWakeCapableDxAllocFailed = 0x53A,
    WdfDevStatePwrPolTimerExpiredWakeCompletedPowerDown = 0x53B,
    WdfDevStatePwrPolTimerExpiredWakeCompletedPowerUp = 0x53C,
    WdfDevStatePwrPolWaitingArmedUsbSS = 0x53D,
    WdfDevStatePwrPolWaitingArmed = 0x53E,
    WdfDevStatePwrPolWaitingArmedQueryIdle = 0x53F,
    WdfDevStatePwrPolIoPresentArmed = 0x540,
    WdfDevStatePwrPolIoPresentArmedWakeCanceled = 0x541,
    WdfDevStatePwrPolS0WakeDisarm = 0x542,
    WdfDevStatePwrPolS0WakeCompletePowerUp = 0x543,
    WdfDevStatePwrPolTimerExpiredWakeSucceeded = 0x544,
    WdfDevStatePwrPolTimerExpiredWakeCompletedDisarm = 0x545,
    WdfDevStatePwrPolTimerExpiredWakeCapableWakeSucceeded = 0x546,
    WdfDevStatePwrPolTimerExpiredWakeCapableWakeFailed = 0x547,
    WdfDevStatePwrPolWakeFailedUsbSS = 0x548,
    WdfDevStatePwrPolTimerExpiredWakeCapablePowerDownFailedCancelWake = 0x549,
    WdfDevStatePwrPolTimerExpiredWakeCapablePowerDownFailedWakeCanceled = 0x54A,
    WdfDevStatePwrPolTimerExpiredWakeCapablePowerDownFailedUsbSS = 0x54B,
    WdfDevStatePwrPolCancelingWakeForSystemSleep = 0x54C,
    WdfDevStatePwrPolCancelingWakeForSystemSleepWakeCanceled = 0x54D,
    WdfDevStatePwrPolDisarmingWakeForSystemSleepCompletePowerUp = 0x54E,
    WdfDevStatePwrPolPowerUpForSystemSleepFailed = 0x54F,
    WdfDevStatePwrPolWokeFromS0UsbSS = 0x550,
    WdfDevStatePwrPolWokeFromS0 = 0x551,
    WdfDevStatePwrPolWokeFromS0NotifyDriver = 0x552,
    WdfDevStatePwrPolStoppingResetDevice = 0x553,
    WdfDevStatePwrPolStoppingResetDeviceCompletePowerUp = 0x554,
    WdfDevStatePwrPolStoppingResetDeviceFailed = 0x555,
    WdfDevStatePwrPolStoppingD0 = 0x556,
    WdfDevStatePwrPolStoppingD0Failed = 0x557,
    WdfDevStatePwrPolStoppingDisarmWake = 0x558,
    WdfDevStatePwrPolStoppingDisarmWakeCancelWake = 0x559,
    WdfDevStatePwrPolStoppingDisarmWakeWakeCanceled = 0x55A,
    WdfDevStatePwrPolStopping = 0x55B,
    WdfDevStatePwrPolStoppingFailed = 0x55C,
    WdfDevStatePwrPolStoppingSendStatus = 0x55D,
    WdfDevStatePwrPolStoppingCancelTimer = 0x55E,
    WdfDevStatePwrPolStoppingWaitForIdleTimeout = 0x55F,
    WdfDevStatePwrPolStoppingCancelUsbSS = 0x560,
    WdfDevStatePwrPolStoppingWaitForUsbSSCompletion = 0x561,
    WdfDevStatePwrPolStoppingCancelWake = 0x562,
    WdfDevStatePwrPolStopped = 0x563,
    WdfDevStatePwrPolCancelUsbSS = 0x564,
    WdfDevStatePwrPolStarted = 0x565,
    WdfDevStatePwrPolStartedCancelTimer = 0x566,
    WdfDevStatePwrPolStartedWaitForIdleTimeout = 0x567,
    WdfDevStatePwrPolStartedWakeCapableCancelTimerForSleep = 0x568,
    WdfDevStatePwrPolStartedWakeCapableWaitForIdleTimeout = 0x569,
    WdfDevStatePwrPolStartedWakeCapableSleepingUsbSS = 0x56A,
    WdfDevStatePwrPolStartedIdleCapableCancelTimerForSleep = 0x56B,
    WdfDevStatePwrPolStartedIdleCapableWaitForIdleTimeout = 0x56C,
    WdfDevStatePwrPolDeviceD0PowerRequestFailed = 0x56D,
    WdfDevStatePwrPolDevicePowerRequestFailed = 0x56E,
    WdfDevStatePwrPolGotoDx = 0x56F,
    WdfDevStatePwrPolGotoDxInDx = 0x570,
    WdfDevStatePwrPolDx = 0x571,
    WdfDevStatePwrPolGotoD0 = 0x572,
    WdfDevStatePwrPolGotoD0InD0 = 0x573,
    WdfDevStatePwrPolFinal = 0x574,
    WdfDevStatePwrPolSleepingPowerDownNotProcessed = 0x575,
    WdfDevStatePwrPolTimerExpiredWakeCapablePowerDownNotProcessed = 0x576,
    WdfDevStatePwrPolTimerExpiredNoWakePowerDownNotProcessed = 0x577,
    WdfDevStatePwrPolTimerExpiredNoWakePoweredDownDisableIdleTimer = 0x578,
    WdfDevStatePwrPolStoppingWaitingForImplicitPowerDown = 0x579,
    WdfDevStatePwrPolStoppingPoweringUp = 0x57A,
    WdfDevStatePwrPolStoppingPoweringDown = 0x57B,
    WdfDevStatePwrPolPowerUpForSystemSleepNotSeen = 0x57C,
    WdfDevStatePwrPolWaitingArmedStoppingCancelUsbSS = 0x57D,
    WdfDevStatePwrPolWaitingArmedWakeFailedCancelUsbSS = 0x57E,
    WdfDevStatePwrPolWaitingArmedIoPresentCancelUsbSS = 0x57F,
    WdfDevStatePwrPolWaitingArmedWakeSucceededCancelUsbSS = 0x580,
    WdfDevStatePwrPolCancelingUsbSSForSystemSleep = 0x581,
    WdfDevStatePwrPolStoppingD0CancelUsbSS = 0x582,
    WdfDevStatePwrPolStartingPoweredUp = 0x583,
    WdfDevStatePwrPolIdleCapableDeviceIdle = 0x584,
    WdfDevStatePwrPolDeviceIdleReturnToActive = 0x585,
    WdfDevStatePwrPolDeviceIdleSleeping = 0x586,
    WdfDevStatePwrPolDeviceIdleStopping = 0x587,
    WdfDevStatePwrPolTimerExpiredNoWakeUndoPowerDown = 0x588,
    WdfDevStatePwrPolWakeCapableDeviceIdle = 0x589,
    WdfDevStatePwrPolWakeCapableUsbSSCompleted = 0x58A,
    WdfDevStatePwrPolTimerExpiredWakeCapableUndoPowerDown = 0x58B,
    WdfDevStatePwrPolTimerExpiredWakeCompletedHardwareStarted = 0x58C,
    WdfDevStatePwrPolStoppedRemoving = 0x58D,
    WdfDevStatePwrPolRemoved = 0x58E,
    WdfDevStatePwrPolRestarting = 0x58F,
    WdfDevStatePwrPolRestartingFailed = 0x590,
    WdfDevStatePwrPolStartingPoweredUpFailed = 0x591,
    WdfDevStatePwrPolTimerExpiredNoWakeReturnToActive = 0x592,
    WdfDevStatePwrPolWaitingArmedWakeInterruptFired = 0x593,
    WdfDevStatePwrPolSystemWakeDeviceWakeInterruptFired = 0x594,
    WdfDevStatePwrPolSystemWakeDeviceWakeInterruptFiredNP = 0x595 | WdfDevStateNP,
    WdfDevStatePwrPolTimerExpiredWakeCapableWakeInterruptArrived = 0x596,
    WdfDevStatePwrPolTimerExpiredWakeCapablePowerDownFailedWakeInterruptArrived = 0x597,
    WdfDevStatePwrPolWaitingArmedWakeInterruptFiredDuringPowerDown = 0x598,
    WdfDevStatePwrPolStartedNotIdleCapableDirectedDown = 0x599,
    WdfDevStatePwrPolStartedIdleCapableTimerCanceledForSleep = 0x59A,
    WdfDevStatePwrPolTimerExpiredNoWakeUndoPowerDownWaitForDirectedUp = 0x59B,
    WdfDevStatePwrPolIdleCapableTimerNotExpiredDirectedDown = 0x59C,
    WdfDevStatePwrPolIdleCapableDirectedDownTriggerDPNR = 0x59D,
    WdfDevStatePwrPolWaitingUnarmedDirectedDown = 0x59E,
    WdfDevStatePwrPolIdleCapableDirectedDownTriggerDPR = 0x59F,
    WdfDevStatePwrPolStartedWakeCapableTimerCanceledForSleep = 0x5A0,
    WdfDevStatePwrPolWakeCapableTimerNotExpiredDirectedDown = 0x5A1,
    WdfDevStatePwrPolWakeCapableDirectedDownTriggerDPNR = 0x5A2,
    WdfDevStatePwrPolTimerExpiredWakeCompletedPowerDownWaitForDirectedUp = 0x5A3,
    WdfDevStatePwrPolTimerExpiredWakeCompletedPowerDownDirectedTriggerDPR = 0x5A4,
    WdfDevStatePwrPolTimerExpiredWakeCapableUndoPowerDownWaitForDirectedUp = 0x5A5,
    WdfDevStatePwrPolWakeCapableUsbSSCompletedUndoWaitForDirectedUp = 0x5A6,
    WdfDevStatePwrPolTimerExpiredWakeCapableUsbSSDirectedDown = 0x5A7,
    WdfDevStatePwrPolWaitingArmedWakeInterruptFiredDuringPowerDownCheckDirected = 0x5A8,
    WdfDevStatePwrPolTimerExpiredWakeCompletedPowerDownCheckDirected = 0x5A9,
    WdfDevStatePwrPolTimerExpiredWakeCapableWakeSucceededCheckDirected = 0x5AA,
    WdfDevStatePwrPolTimerExpiredWakeCapableWakeSucceededWaitForDirectedUp = 0x5AB,
    WdfDevStatePwrPolTimerExpiredWakeCapableWakeSucceededTriggerDPR = 0x5AC,
    WdfDevStatePwrPolTimerExpiredWakeCapableWakeFailedCheckDirected = 0x5AD,
    WdfDevStatePwrPolTimerExpiredWakeCapableWakeFailedWaitForDirectedUp = 0x5AE,
    WdfDevStatePwrPolTimerExpiredWakeCapableWakeFailedTriggerDPR = 0x5AF,
    WdfDevStatePwrPolWaitingArmedDirectedDownWakeInterruptFiredTriggerDPR = 0x5B0,
    WdfDevStatePwrPolWaitingArmedDirectedDownWakeInterruptFired = 0x5B1,
    WdfDevStatePwrPolWaitingArmedDirectedDown = 0x5B2,
    WdfDevStatePwrPolWaitingArmedDirectedDownWakeSucceededCancelUsbSS = 0x5B3,
    WdfDevStatePwrPolWaitingArmedDirectedDownWakeFailedCancelUsbSS = 0x5B4,
    WdfDevStatePwrPolWaitingArmedDirectedDownTriggerDPR = 0x5B5,
    WdfDevStatePwrPolWaitingArmedDirectedDownWakeSucceededTriggerDPR = 0x5B6,
    WdfDevStatePwrPolWaitingArmedDirectedDownUsbSSCompleted = 0x5B7,
    WdfDevStatePwrPolWaitingArmedDirectedDownUsbSSCompletedTriggerDPR = 0x5B8,
    WdfDevStatePwrPolWaitingArmedDirectedDownWakeFailedCancelUsbSSTriggerDPR = 0x5B9,
    WdfDevStatePwrPolUsbSSCancelled = 0x5BA,
    WdfDevStatePwrPolTimerExpiredWakeCapableRevertArmWake = 0x5BB,
    WdfDevStatePwrPolSleepingWakeCancelWake = 0x5BC,
    WdfDevStatePwrPolSleepingWakeCancelWakeNP = 0x5BD | WdfDevStateNP,
    WdfDevStatePwrPolSystemWakeDeviceD0PowerRequestFailed = 0x5BE,
    WdfDevStatePwrPolSystemWakeDevicePowerRequestFailed = 0x5BF,
    WdfDevStatePwrPolNull = 0x5C0,
} WDF_DEVICE_POWER_POLICY_STATE, *PWDF_DEVICE_POWER_POLICY_STATE;
typedef enum _WDF_STATE_NOTIFICATION_TYPE {
    StateNotificationInvalid = 0x0000,
    StateNotificationEnterState = 0x0001,
    StateNotificationPostProcessState = 0x0002,
    StateNotificationLeaveState = 0x0004,
    StateNotificationAllStates = StateNotificationEnterState | StateNotificationPostProcessState | StateNotificationLeaveState,
} WDF_STATE_NOTIFICATION_TYPE;
typedef enum _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES {
    IdleCapsInvalid = 0,
    IdleCannotWakeFromS0,
    IdleCanWakeFromS0,
    IdleUsbSelectiveSuspend,
} WDF_POWER_POLICY_S0_IDLE_CAPABILITIES;
typedef enum _WDF_POWER_POLICY_S0_IDLE_USER_CONTROL {
    IdleUserControlInvalid = 0,
    IdleDoNotAllowUserControl,
    IdleAllowUserControl,
} WDF_POWER_POLICY_S0_IDLE_USER_CONTROL;
typedef enum _WDF_POWER_POLICY_IDLE_TIMEOUT_CONSTANTS {
    IdleTimeoutDefaultConstant = 0,
} WDF_POWER_POLICY_IDLE_TIMEOUT_CONSTANTS;
typedef enum _WDF_POWER_POLICY_SX_WAKE_USER_CONTROL {
    WakeUserControlInvalid = 0,
    WakeDoNotAllowUserControl,
    WakeAllowUserControl,
} WDF_POWER_POLICY_SX_WAKE_USER_CONTROL;
typedef enum _WDF_POWER_DEVICE_STATE {
    WdfPowerDeviceInvalid = 0,
    WdfPowerDeviceD0,
    WdfPowerDeviceD1,
    WdfPowerDeviceD2,
    WdfPowerDeviceD3,
    WdfPowerDeviceD3Final,
    WdfPowerDevicePrepareForHibernation,
    WdfPowerDeviceMaximum,
} WDF_POWER_DEVICE_STATE, *PWDF_POWER_DEVICE_STATE;
typedef enum _WDF_DISPATCH_IRP_TO_IO_QUEUE_FLAGS {
    WDF_DISPATCH_IRP_TO_IO_QUEUE_NO_FLAGS = 0x00000000,
    WDF_DISPATCH_IRP_TO_IO_QUEUE_INVOKE_INCALLERCTX_CALLBACK = 0x00000001,
    WDF_DISPATCH_IRP_TO_IO_QUEUE_PREPROCESSED_IRP = 0x00000002,
} WDF_DISPATCH_IRP_TO_IO_QUEUE_FLAGS;
typedef enum _WDF_SPECIAL_FILE_TYPE {
    WdfSpecialFileUndefined = 0,
    WdfSpecialFilePaging = 1,
    WdfSpecialFileHibernation,
    WdfSpecialFileDump,
    WdfSpecialFileBoot,
    WdfSpecialFilePostDisplay,
    WdfSpecialFileGuestAssigned,
    WdfSpecialFileMax,
} WDF_SPECIAL_FILE_TYPE, *PWDF_SPECIAL_FILE_TYPE;
typedef enum _WDF_DEVICE_IO_TYPE {
    WdfDeviceIoUndefined = 0,
    WdfDeviceIoNeither,
    WdfDeviceIoBuffered,
    WdfDeviceIoDirect,
    WdfDeviceIoBufferedOrDirect = 4,
    WdfDeviceIoMaximum,
} WDF_DEVICE_IO_TYPE, *PWDF_DEVICE_IO_TYPE;
typedef enum _WDF_FILEOBJECT_CLASS {
    WdfFileObjectInvalid = 0,
    WdfFileObjectNotRequired = 1,
    WdfFileObjectWdfCanUseFsContext = 2,
    WdfFileObjectWdfCanUseFsContext2 = 3,
    WdfFileObjectWdfCannotUseFsContexts = 4,
    WdfFileObjectCanBeOptional = 0x80000000,
} WDF_FILEOBJECT_CLASS, *PWDF_FILEOBJECT_CLASS;
typedef enum _WDF_DEVICE_FAILED_ACTION {
    WdfDeviceFailedUndefined = 0,
    WdfDeviceFailedAttemptRestart,
    WdfDeviceFailedNoRestart,
} WDF_DEVICE_FAILED_ACTION;
typedef enum _WDF_RELEASE_HARDWARE_ORDER_ON_FAILURE {
    WdfReleaseHardwareOrderOnFailureInvalid = 0,
    WdfReleaseHardwareOrderOnFailureEarly,
    WdfReleaseHardwareOrderOnFailureAfterDescendants,
} WDF_RELEASE_HARDWARE_ORDER_ON_FAILURE, *PWDF_RELEASE_HARDWARE_ORDER_ON_FAILURE;
       
extern const UNICODE_STRING SDDL_DEVOBJ_KERNEL_ONLY;
extern const UNICODE_STRING SDDL_DEVOBJ_SYS_ALL;
extern const UNICODE_STRING SDDL_DEVOBJ_SYS_ALL_ADM_ALL;
extern const UNICODE_STRING SDDL_DEVOBJ_SYS_ALL_ADM_RX;
extern const UNICODE_STRING SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_R;
extern const UNICODE_STRING SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_R_RES_R;
extern const UNICODE_STRING SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R;
extern const UNICODE_STRING SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RWX_RES_RWX;


NTSTATUS
WdmlibIoCreateDeviceSecure(
    PDRIVER_OBJECT DriverObject,
    ULONG DeviceExtensionSize,
    PUNICODE_STRING DeviceName,
    DEVICE_TYPE DeviceType,
    ULONG DeviceCharacteristics,
    BOOLEAN Exclusive,
    PCUNICODE_STRING DefaultSDDLString,
    LPCGUID DeviceClassGuid,
   
   
    PDEVICE_OBJECT *DeviceObject
    );
NTSTATUS
WdmlibRtlInitUnicodeStringEx(
    PUNICODE_STRING DestinationString,
    PCWSTR SourceString
    );
NTSTATUS
WdmlibIoValidateDeviceIoControlAccess(
    PIRP Irp,
    ULONG RequiredAccess
    );
typedef enum _WDF_REQUEST_TYPE WDF_REQUEST_TYPE;
typedef



VOID
NTAPI
EVT_WDF_DEVICE_FILE_CREATE(
   
    WDFDEVICE Device,
   
    WDFREQUEST Request,
   
    WDFFILEOBJECT FileObject
    );
typedef EVT_WDF_DEVICE_FILE_CREATE *PFN_WDF_DEVICE_FILE_CREATE;
typedef



VOID
NTAPI
EVT_WDF_FILE_CLOSE(
   
    WDFFILEOBJECT FileObject
    );
typedef EVT_WDF_FILE_CLOSE *PFN_WDF_FILE_CLOSE;
typedef



VOID
NTAPI
EVT_WDF_FILE_CLEANUP(
   
    WDFFILEOBJECT FileObject
    );
typedef EVT_WDF_FILE_CLEANUP *PFN_WDF_FILE_CLEANUP;
typedef struct _WDF_FILEOBJECT_CONFIG {
    ULONG Size;
    PFN_WDF_DEVICE_FILE_CREATE EvtDeviceFileCreate;
    PFN_WDF_FILE_CLOSE EvtFileClose;
    PFN_WDF_FILE_CLEANUP EvtFileCleanup;
    WDF_TRI_STATE AutoForwardCleanupClose;
    WDF_FILEOBJECT_CLASS FileObjectClass;
} WDF_FILEOBJECT_CONFIG, *PWDF_FILEOBJECT_CONFIG;
VOID
__inline
WDF_FILEOBJECT_CONFIG_INIT(
    PWDF_FILEOBJECT_CONFIG FileEventCallbacks,
    PFN_WDF_DEVICE_FILE_CREATE EvtDeviceFileCreate,
    PFN_WDF_FILE_CLOSE EvtFileClose,
    PFN_WDF_FILE_CLEANUP EvtFileCleanup
    )
{
    FileEventCallbacks->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_FILEOBJECT_CONFIG < WdfStructureCount) ? WdfStructures[INDEX_WDF_FILEOBJECT_CONFIG] : (size_t)(-1) ) : sizeof(WDF_FILEOBJECT_CONFIG) );
    FileEventCallbacks->EvtDeviceFileCreate = EvtDeviceFileCreate;
    FileEventCallbacks->EvtFileClose = EvtFileClose;
    FileEventCallbacks->EvtFileCleanup = EvtFileCleanup;
    FileEventCallbacks->FileObjectClass = WdfFileObjectWdfCannotUseFsContexts;
    FileEventCallbacks->AutoForwardCleanupClose = WdfUseDefault;
}
typedef struct _WDF_DEVICE_PNP_NOTIFICATION_DATA {
    WDF_STATE_NOTIFICATION_TYPE Type;
    union {
        struct {
            WDF_DEVICE_PNP_STATE CurrentState;
            WDF_DEVICE_PNP_STATE NewState;
        } EnterState;
        struct {
            WDF_DEVICE_PNP_STATE CurrentState;
        } PostProcessState;
        struct {
            WDF_DEVICE_PNP_STATE CurrentState;
            WDF_DEVICE_PNP_STATE NewState;
        } LeaveState;
    } Data;
} WDF_DEVICE_PNP_NOTIFICATION_DATA;
typedef const WDF_DEVICE_PNP_NOTIFICATION_DATA* PCWDF_DEVICE_PNP_NOTIFICATION_DATA;
typedef struct _WDF_DEVICE_POWER_NOTIFICATION_DATA {
    WDF_STATE_NOTIFICATION_TYPE Type;
    union {
        struct {
            WDF_DEVICE_POWER_STATE CurrentState;
            WDF_DEVICE_POWER_STATE NewState;
        } EnterState;
        struct {
            WDF_DEVICE_POWER_STATE CurrentState;
        } PostProcessState;
        struct {
            WDF_DEVICE_POWER_STATE CurrentState;
            WDF_DEVICE_POWER_STATE NewState;
        } LeaveState;
    } Data;
} WDF_DEVICE_POWER_NOTIFICATION_DATA;
typedef const WDF_DEVICE_POWER_NOTIFICATION_DATA* PCWDF_DEVICE_POWER_NOTIFICATION_DATA;
typedef struct _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA {
    WDF_STATE_NOTIFICATION_TYPE Type;
    union {
        struct {
            WDF_DEVICE_POWER_POLICY_STATE CurrentState;
            WDF_DEVICE_POWER_POLICY_STATE NewState;
        } EnterState;
        struct {
            WDF_DEVICE_POWER_POLICY_STATE CurrentState;
        } PostProcessState;
        struct {
            WDF_DEVICE_POWER_POLICY_STATE CurrentState;
            WDF_DEVICE_POWER_POLICY_STATE NewState;
        } LeaveState;
    } Data;
} WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA;
typedef const WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA* PCWDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA;
typedef



VOID
NTAPI
EVT_WDF_DEVICE_PNP_STATE_CHANGE_NOTIFICATION(
   
    WDFDEVICE Device,
   
    PCWDF_DEVICE_PNP_NOTIFICATION_DATA NotificationData
    );
typedef EVT_WDF_DEVICE_PNP_STATE_CHANGE_NOTIFICATION *PFN_WDF_DEVICE_PNP_STATE_CHANGE_NOTIFICATION;
typedef



VOID
NTAPI
EVT_WDF_DEVICE_POWER_STATE_CHANGE_NOTIFICATION(
   
    WDFDEVICE Device,
   
    PCWDF_DEVICE_POWER_NOTIFICATION_DATA NotificationData
    );
typedef EVT_WDF_DEVICE_POWER_STATE_CHANGE_NOTIFICATION *PFN_WDF_DEVICE_POWER_STATE_CHANGE_NOTIFICATION;
typedef



VOID
NTAPI
EVT_WDF_DEVICE_POWER_POLICY_STATE_CHANGE_NOTIFICATION(
   
    WDFDEVICE Device,
   
    PCWDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA NotificationData
    );
typedef EVT_WDF_DEVICE_POWER_POLICY_STATE_CHANGE_NOTIFICATION *PFN_WDF_DEVICE_POWER_POLICY_STATE_CHANGE_NOTIFICATION;
typedef



NTSTATUS
NTAPI
EVT_WDF_DEVICE_D0_ENTRY(
   
    WDFDEVICE Device,
   
    WDF_POWER_DEVICE_STATE PreviousState
    );
typedef EVT_WDF_DEVICE_D0_ENTRY *PFN_WDF_DEVICE_D0_ENTRY;
typedef



NTSTATUS
NTAPI
EVT_WDF_DEVICE_D0_ENTRY_POST_INTERRUPTS_ENABLED(
   
    WDFDEVICE Device,
   
    WDF_POWER_DEVICE_STATE PreviousState
    );
typedef EVT_WDF_DEVICE_D0_ENTRY_POST_INTERRUPTS_ENABLED *PFN_WDF_DEVICE_D0_ENTRY_POST_INTERRUPTS_ENABLED;
typedef



NTSTATUS
NTAPI
EVT_WDF_DEVICE_D0_ENTRY_POST_HARDWARE_ENABLED(
   
    WDFDEVICE Device,
   
    WDF_POWER_DEVICE_STATE PreviousState
    );
typedef EVT_WDF_DEVICE_D0_ENTRY_POST_HARDWARE_ENABLED *PFN_WDF_DEVICE_D0_ENTRY_POST_HARDWARE_ENABLED;
typedef



NTSTATUS
NTAPI
EVT_WDF_DEVICE_D0_EXIT(
   
    WDFDEVICE Device,
   
    WDF_POWER_DEVICE_STATE TargetState
    );
typedef EVT_WDF_DEVICE_D0_EXIT *PFN_WDF_DEVICE_D0_EXIT;
typedef



NTSTATUS
NTAPI
EVT_WDF_DEVICE_D0_EXIT_PRE_INTERRUPTS_DISABLED(
   
    WDFDEVICE Device,
   
    WDF_POWER_DEVICE_STATE TargetState
    );
typedef EVT_WDF_DEVICE_D0_EXIT_PRE_INTERRUPTS_DISABLED *PFN_WDF_DEVICE_D0_EXIT_PRE_INTERRUPTS_DISABLED;
typedef



NTSTATUS
NTAPI
EVT_WDF_DEVICE_D0_EXIT_PRE_HARDWARE_DISABLED(
   
    WDFDEVICE Device,
   
    WDF_POWER_DEVICE_STATE TargetState
    );
typedef EVT_WDF_DEVICE_D0_EXIT_PRE_HARDWARE_DISABLED *PFN_WDF_DEVICE_D0_EXIT_PRE_HARDWARE_DISABLED;
typedef



NTSTATUS
NTAPI
EVT_WDF_DEVICE_PREPARE_HARDWARE(
   
    WDFDEVICE Device,
   
    WDFCMRESLIST ResourcesRaw,
   
    WDFCMRESLIST ResourcesTranslated
    );
typedef EVT_WDF_DEVICE_PREPARE_HARDWARE *PFN_WDF_DEVICE_PREPARE_HARDWARE;
typedef



NTSTATUS
NTAPI
EVT_WDF_DEVICE_RELEASE_HARDWARE(
   
    WDFDEVICE Device,
   
    WDFCMRESLIST ResourcesTranslated
    );
typedef EVT_WDF_DEVICE_RELEASE_HARDWARE *PFN_WDF_DEVICE_RELEASE_HARDWARE;
typedef



VOID
NTAPI
EVT_WDF_DEVICE_SELF_MANAGED_IO_CLEANUP(
   
    WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_SELF_MANAGED_IO_CLEANUP *PFN_WDF_DEVICE_SELF_MANAGED_IO_CLEANUP;
typedef



VOID
NTAPI
EVT_WDF_DEVICE_SELF_MANAGED_IO_FLUSH(
   
    WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_SELF_MANAGED_IO_FLUSH *PFN_WDF_DEVICE_SELF_MANAGED_IO_FLUSH;
typedef



NTSTATUS
NTAPI
EVT_WDF_DEVICE_SELF_MANAGED_IO_INIT(
   
    WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_SELF_MANAGED_IO_INIT *PFN_WDF_DEVICE_SELF_MANAGED_IO_INIT;
typedef



NTSTATUS
NTAPI
EVT_WDF_DEVICE_SELF_MANAGED_IO_SUSPEND(
   
    WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_SELF_MANAGED_IO_SUSPEND *PFN_WDF_DEVICE_SELF_MANAGED_IO_SUSPEND;
typedef



NTSTATUS
NTAPI
EVT_WDF_DEVICE_SELF_MANAGED_IO_RESTART(
   
    WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_SELF_MANAGED_IO_RESTART *PFN_WDF_DEVICE_SELF_MANAGED_IO_RESTART;
typedef



NTSTATUS
NTAPI
EVT_WDF_DEVICE_QUERY_STOP(
   
    WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_QUERY_STOP *PFN_WDF_DEVICE_QUERY_STOP;
typedef



NTSTATUS
NTAPI
EVT_WDF_DEVICE_QUERY_REMOVE(
   
    WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_QUERY_REMOVE *PFN_WDF_DEVICE_QUERY_REMOVE;
typedef



VOID
NTAPI
EVT_WDF_DEVICE_SURPRISE_REMOVAL(
   
    WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_SURPRISE_REMOVAL *PFN_WDF_DEVICE_SURPRISE_REMOVAL;
typedef



VOID
NTAPI
EVT_WDF_DEVICE_USAGE_NOTIFICATION(
   
    WDFDEVICE Device,
   
    WDF_SPECIAL_FILE_TYPE NotificationType,
   
    BOOLEAN IsInNotificationPath
    );
typedef EVT_WDF_DEVICE_USAGE_NOTIFICATION *PFN_WDF_DEVICE_USAGE_NOTIFICATION;
typedef



NTSTATUS
NTAPI
EVT_WDF_DEVICE_USAGE_NOTIFICATION_EX(
   
    WDFDEVICE Device,
   
    WDF_SPECIAL_FILE_TYPE NotificationType,
   
    BOOLEAN IsInNotificationPath
    );
typedef EVT_WDF_DEVICE_USAGE_NOTIFICATION_EX *PFN_WDF_DEVICE_USAGE_NOTIFICATION_EX;
typedef



VOID
NTAPI
EVT_WDF_DEVICE_RELATIONS_QUERY(
   
    WDFDEVICE Device,
   
    DEVICE_RELATION_TYPE RelationType
    );
typedef EVT_WDF_DEVICE_RELATIONS_QUERY *PFN_WDF_DEVICE_RELATIONS_QUERY;
typedef



NTSTATUS
NTAPI
EVT_WDF_DEVICE_ARM_WAKE_FROM_S0(
   
    WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_ARM_WAKE_FROM_S0 *PFN_WDF_DEVICE_ARM_WAKE_FROM_S0;
typedef



NTSTATUS
NTAPI
EVT_WDF_DEVICE_ARM_WAKE_FROM_SX(
   
    WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_ARM_WAKE_FROM_SX *PFN_WDF_DEVICE_ARM_WAKE_FROM_SX;
typedef



NTSTATUS
NTAPI
EVT_WDF_DEVICE_ARM_WAKE_FROM_SX_WITH_REASON(
   
    WDFDEVICE Device,
   
    BOOLEAN DeviceWakeEnabled,
   
    BOOLEAN ChildrenArmedForWake
    );
typedef EVT_WDF_DEVICE_ARM_WAKE_FROM_SX_WITH_REASON *PFN_WDF_DEVICE_ARM_WAKE_FROM_SX_WITH_REASON;
typedef



VOID
NTAPI
EVT_WDF_DEVICE_DISARM_WAKE_FROM_S0(
   
    WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_DISARM_WAKE_FROM_S0 *PFN_WDF_DEVICE_DISARM_WAKE_FROM_S0;
typedef



VOID
NTAPI
EVT_WDF_DEVICE_DISARM_WAKE_FROM_SX(
   
    WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_DISARM_WAKE_FROM_SX *PFN_WDF_DEVICE_DISARM_WAKE_FROM_SX;
typedef



VOID
NTAPI
EVT_WDF_DEVICE_WAKE_FROM_S0_TRIGGERED(
   
    WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_WAKE_FROM_S0_TRIGGERED *PFN_WDF_DEVICE_WAKE_FROM_S0_TRIGGERED;
typedef



VOID
NTAPI
EVT_WDF_DEVICE_WAKE_FROM_SX_TRIGGERED(
   
    WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_WAKE_FROM_SX_TRIGGERED *PFN_WDF_DEVICE_WAKE_FROM_SX_TRIGGERED;
typedef struct _WDF_PNPPOWER_EVENT_CALLBACKS {
    ULONG Size;
    PFN_WDF_DEVICE_D0_ENTRY EvtDeviceD0Entry;
    PFN_WDF_DEVICE_D0_ENTRY_POST_INTERRUPTS_ENABLED EvtDeviceD0EntryPostInterruptsEnabled;
    PFN_WDF_DEVICE_D0_EXIT EvtDeviceD0Exit;
    PFN_WDF_DEVICE_D0_EXIT_PRE_INTERRUPTS_DISABLED EvtDeviceD0ExitPreInterruptsDisabled;
    PFN_WDF_DEVICE_PREPARE_HARDWARE EvtDevicePrepareHardware;
    PFN_WDF_DEVICE_RELEASE_HARDWARE EvtDeviceReleaseHardware;
    PFN_WDF_DEVICE_SELF_MANAGED_IO_CLEANUP EvtDeviceSelfManagedIoCleanup;
    PFN_WDF_DEVICE_SELF_MANAGED_IO_FLUSH EvtDeviceSelfManagedIoFlush;
    PFN_WDF_DEVICE_SELF_MANAGED_IO_INIT EvtDeviceSelfManagedIoInit;
    PFN_WDF_DEVICE_SELF_MANAGED_IO_SUSPEND EvtDeviceSelfManagedIoSuspend;
    PFN_WDF_DEVICE_SELF_MANAGED_IO_RESTART EvtDeviceSelfManagedIoRestart;
    PFN_WDF_DEVICE_SURPRISE_REMOVAL EvtDeviceSurpriseRemoval;
    PFN_WDF_DEVICE_QUERY_REMOVE EvtDeviceQueryRemove;
    PFN_WDF_DEVICE_QUERY_STOP EvtDeviceQueryStop;
    PFN_WDF_DEVICE_USAGE_NOTIFICATION EvtDeviceUsageNotification;
    PFN_WDF_DEVICE_RELATIONS_QUERY EvtDeviceRelationsQuery;
    PFN_WDF_DEVICE_USAGE_NOTIFICATION_EX EvtDeviceUsageNotificationEx;
} WDF_PNPPOWER_EVENT_CALLBACKS, *PWDF_PNPPOWER_EVENT_CALLBACKS;
typedef struct _WDF_POWER_POLICY_EVENT_CALLBACKS {
    ULONG Size;
    PFN_WDF_DEVICE_ARM_WAKE_FROM_S0 EvtDeviceArmWakeFromS0;
    PFN_WDF_DEVICE_DISARM_WAKE_FROM_S0 EvtDeviceDisarmWakeFromS0;
    PFN_WDF_DEVICE_WAKE_FROM_S0_TRIGGERED EvtDeviceWakeFromS0Triggered;
    PFN_WDF_DEVICE_ARM_WAKE_FROM_SX EvtDeviceArmWakeFromSx;
    PFN_WDF_DEVICE_DISARM_WAKE_FROM_SX EvtDeviceDisarmWakeFromSx;
    PFN_WDF_DEVICE_WAKE_FROM_SX_TRIGGERED EvtDeviceWakeFromSxTriggered;
    PFN_WDF_DEVICE_ARM_WAKE_FROM_SX_WITH_REASON EvtDeviceArmWakeFromSxWithReason;
} WDF_POWER_POLICY_EVENT_CALLBACKS, *PWDF_POWER_POLICY_EVENT_CALLBACKS;
VOID
__inline
WDF_POWER_POLICY_EVENT_CALLBACKS_INIT(
    PWDF_POWER_POLICY_EVENT_CALLBACKS Callbacks
    )
{
    RtlZeroMemory(Callbacks, sizeof(WDF_POWER_POLICY_EVENT_CALLBACKS));
    Callbacks->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_POWER_POLICY_EVENT_CALLBACKS < WdfStructureCount) ? WdfStructures[INDEX_WDF_POWER_POLICY_EVENT_CALLBACKS] : (size_t)(-1) ) : sizeof(WDF_POWER_POLICY_EVENT_CALLBACKS) );
}
VOID
__inline
WDF_PNPPOWER_EVENT_CALLBACKS_INIT(
    PWDF_PNPPOWER_EVENT_CALLBACKS Callbacks
    )
{
    RtlZeroMemory(Callbacks, sizeof(WDF_PNPPOWER_EVENT_CALLBACKS));
    Callbacks->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_PNPPOWER_EVENT_CALLBACKS < WdfStructureCount) ? WdfStructures[INDEX_WDF_PNPPOWER_EVENT_CALLBACKS] : (size_t)(-1) ) : sizeof(WDF_PNPPOWER_EVENT_CALLBACKS) );
}
ULONG
__inline
WdfDevStateNormalize(
    ULONG State
    )
{
    return State & ~WdfDevStateNP;
}
BOOLEAN
__inline
WdfDevStateIsNP(
    ULONG State
    )
{
    return (State & WdfDevStateNP) ? TRUE : FALSE;
}
typedef enum _WDF_POWER_POLICY_IDLE_TIMEOUT_TYPE {
    DriverManagedIdleTimeout = 0,
    SystemManagedIdleTimeout = 1,
    SystemManagedIdleTimeoutWithHint = 2
} WDF_POWER_POLICY_IDLE_TIMEOUT_TYPE, *PWDF_POWER_POLICY_IDLE_TIMEOUT_TYPE;
typedef struct _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS {
    ULONG Size;
    WDF_POWER_POLICY_S0_IDLE_CAPABILITIES IdleCaps;
    DEVICE_POWER_STATE DxState;
    ULONG IdleTimeout;
    WDF_POWER_POLICY_S0_IDLE_USER_CONTROL UserControlOfIdleSettings;
    WDF_TRI_STATE Enabled;
    WDF_TRI_STATE PowerUpIdleDeviceOnSystemWake;
    WDF_POWER_POLICY_IDLE_TIMEOUT_TYPE IdleTimeoutType;
    WDF_TRI_STATE ExcludeD3Cold;
} WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS, *PWDF_DEVICE_POWER_POLICY_IDLE_SETTINGS;
VOID
__inline
WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_INIT(
    PWDF_DEVICE_POWER_POLICY_IDLE_SETTINGS Settings,
    WDF_POWER_POLICY_S0_IDLE_CAPABILITIES IdleCaps
    )
{
    RtlZeroMemory(Settings, sizeof(WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS));
    Settings->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS < WdfStructureCount) ? WdfStructures[INDEX_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS] : (size_t)(-1) ) : sizeof(WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS) );
    Settings->IdleTimeout = ((ULONG) IdleTimeoutDefaultConstant);
    Settings->UserControlOfIdleSettings = IdleAllowUserControl;
    Settings->Enabled = WdfUseDefault;
    Settings->PowerUpIdleDeviceOnSystemWake = WdfUseDefault;
    Settings->IdleTimeoutType = DriverManagedIdleTimeout;
    Settings->ExcludeD3Cold = WdfUseDefault;
    Settings->IdleCaps = IdleCaps;
    switch (IdleCaps) {
    case IdleUsbSelectiveSuspend:
    case IdleCanWakeFromS0:
        Settings->DxState = PowerDeviceMaximum;
        break;
    case IdleCannotWakeFromS0:
        Settings->DxState = PowerDeviceD3;
        break;
    }
}
typedef struct _WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS {
    ULONG Size;
    DEVICE_POWER_STATE DxState;
    WDF_POWER_POLICY_SX_WAKE_USER_CONTROL UserControlOfWakeSettings;
    WDF_TRI_STATE Enabled;
    BOOLEAN ArmForWakeIfChildrenAreArmedForWake;
    BOOLEAN IndicateChildWakeOnParentWake;
} WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS, *PWDF_DEVICE_POWER_POLICY_WAKE_SETTINGS;
VOID
__inline
WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_INIT(
    PWDF_DEVICE_POWER_POLICY_WAKE_SETTINGS Settings
    )
{
    RtlZeroMemory(Settings, sizeof(WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS));
    Settings->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS < WdfStructureCount) ? WdfStructures[INDEX_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS] : (size_t)(-1) ) : sizeof(WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS) );
    Settings->Enabled = WdfUseDefault;
    Settings->DxState = PowerDeviceMaximum;
    Settings->UserControlOfWakeSettings = WakeAllowUserControl;
}
typedef struct _WDF_DEVICE_STATE {
    ULONG Size;
    WDF_TRI_STATE Disabled;
    WDF_TRI_STATE DontDisplayInUI;
    WDF_TRI_STATE Failed;
    WDF_TRI_STATE NotDisableable;
    WDF_TRI_STATE Removed;
    WDF_TRI_STATE ResourcesChanged;
    WDF_TRI_STATE AssignedToGuest;
} WDF_DEVICE_STATE, *PWDF_DEVICE_STATE;
VOID
__inline
WDF_DEVICE_STATE_INIT(
    PWDF_DEVICE_STATE PnpDeviceState
    )
{
    RtlZeroMemory(PnpDeviceState, sizeof(WDF_DEVICE_STATE));
    PnpDeviceState->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_DEVICE_STATE < WdfStructureCount) ? WdfStructures[INDEX_WDF_DEVICE_STATE] : (size_t)(-1) ) : sizeof(WDF_DEVICE_STATE) );
    PnpDeviceState->Disabled = WdfUseDefault;
    PnpDeviceState->DontDisplayInUI = WdfUseDefault;
    PnpDeviceState->Failed = WdfUseDefault;
    PnpDeviceState->NotDisableable = WdfUseDefault;
    PnpDeviceState->Removed = WdfUseDefault;
    PnpDeviceState->ResourcesChanged = WdfUseDefault;
    PnpDeviceState->AssignedToGuest = WdfUseDefault;
}
typedef struct _WDF_DEVICE_PNP_CAPABILITIES {
    ULONG Size;
    WDF_TRI_STATE LockSupported;
    WDF_TRI_STATE EjectSupported;
    WDF_TRI_STATE Removable;
    WDF_TRI_STATE DockDevice;
    WDF_TRI_STATE UniqueID;
    WDF_TRI_STATE SilentInstall;
    WDF_TRI_STATE SurpriseRemovalOK;
    WDF_TRI_STATE HardwareDisabled;
    WDF_TRI_STATE NoDisplayInUI;
    ULONG Address;
    ULONG UINumber;
} WDF_DEVICE_PNP_CAPABILITIES, *PWDF_DEVICE_PNP_CAPABILITIES;
VOID
__inline
WDF_DEVICE_PNP_CAPABILITIES_INIT(
    PWDF_DEVICE_PNP_CAPABILITIES Caps
    )
{
    RtlZeroMemory(Caps, sizeof(WDF_DEVICE_PNP_CAPABILITIES));
    Caps->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_DEVICE_PNP_CAPABILITIES < WdfStructureCount) ? WdfStructures[INDEX_WDF_DEVICE_PNP_CAPABILITIES] : (size_t)(-1) ) : sizeof(WDF_DEVICE_PNP_CAPABILITIES) );
    Caps->LockSupported = WdfUseDefault;
    Caps->EjectSupported = WdfUseDefault;
    Caps->Removable = WdfUseDefault;
    Caps->DockDevice = WdfUseDefault;
    Caps->UniqueID = WdfUseDefault;
    Caps->SilentInstall = WdfUseDefault;
    Caps->SurpriseRemovalOK = WdfUseDefault;
    Caps->HardwareDisabled = WdfUseDefault;
    Caps->NoDisplayInUI = WdfUseDefault;
    Caps->Address = (ULONG) -1;
    Caps->UINumber = (ULONG) -1;
}
typedef struct _WDF_DEVICE_POWER_CAPABILITIES {
    ULONG Size;
    WDF_TRI_STATE DeviceD1;
    WDF_TRI_STATE DeviceD2;
    WDF_TRI_STATE WakeFromD0;
    WDF_TRI_STATE WakeFromD1;
    WDF_TRI_STATE WakeFromD2;
    WDF_TRI_STATE WakeFromD3;
    DEVICE_POWER_STATE DeviceState[PowerSystemMaximum];
    DEVICE_POWER_STATE DeviceWake;
    SYSTEM_POWER_STATE SystemWake;
    ULONG D1Latency;
    ULONG D2Latency;
    ULONG D3Latency;
    DEVICE_POWER_STATE IdealDxStateForSx;
} WDF_DEVICE_POWER_CAPABILITIES, *PWDF_DEVICE_POWER_CAPABILITIES;
VOID
__inline
WDF_DEVICE_POWER_CAPABILITIES_INIT(
    PWDF_DEVICE_POWER_CAPABILITIES Caps
    )
{
    ULONG i;
    RtlZeroMemory(Caps, sizeof(WDF_DEVICE_POWER_CAPABILITIES));
    Caps->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_DEVICE_POWER_CAPABILITIES < WdfStructureCount) ? WdfStructures[INDEX_WDF_DEVICE_POWER_CAPABILITIES] : (size_t)(-1) ) : sizeof(WDF_DEVICE_POWER_CAPABILITIES) );
    Caps->DeviceD1 = WdfUseDefault;
    Caps->DeviceD2 = WdfUseDefault;
    Caps->WakeFromD0 = WdfUseDefault;
    Caps->WakeFromD1 = WdfUseDefault;
    Caps->WakeFromD2 = WdfUseDefault;
    Caps->WakeFromD3 = WdfUseDefault;
    for (i = 0; i < sizeof(Caps->DeviceState)/sizeof(Caps->DeviceState[1]); i++) {
        Caps->DeviceState[i] = PowerDeviceMaximum;
    }
    Caps->DeviceWake = PowerDeviceMaximum;
    Caps->SystemWake = PowerSystemMaximum;
    Caps->D1Latency = (ULONG) -1;
    Caps->D2Latency = (ULONG) -1;
    Caps->D3Latency = (ULONG) -1;
    Caps->IdealDxStateForSx = PowerDeviceMaximum;
}
typedef enum _WDF_REMOVE_LOCK_OPTIONS_FLAGS {
    WDF_REMOVE_LOCK_OPTION_ACQUIRE_FOR_IO = 0x00000001
} WDF_REMOVE_LOCK_OPTIONS_FLAGS;
typedef struct _WDF_REMOVE_LOCK_OPTIONS {
    ULONG Size;
    ULONG Flags;
} WDF_REMOVE_LOCK_OPTIONS, *PWDF_REMOVE_LOCK_OPTIONS;
VOID
__inline
WDF_REMOVE_LOCK_OPTIONS_INIT(
    PWDF_REMOVE_LOCK_OPTIONS RemoveLockOptions,
    ULONG Flags
    )
{
    RtlZeroMemory(RemoveLockOptions, sizeof(WDF_REMOVE_LOCK_OPTIONS));
    RemoveLockOptions->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_REMOVE_LOCK_OPTIONS < WdfStructureCount) ? WdfStructures[INDEX_WDF_REMOVE_LOCK_OPTIONS] : (size_t)(-1) ) : sizeof(WDF_REMOVE_LOCK_OPTIONS) );
    RemoveLockOptions->Flags = Flags;
}
typedef



NTSTATUS
NTAPI
EVT_WDFDEVICE_WDM_IRP_PREPROCESS(
   
    WDFDEVICE Device,
   
    PIRP Irp
    );
typedef EVT_WDFDEVICE_WDM_IRP_PREPROCESS *PFN_WDFDEVICE_WDM_IRP_PREPROCESS;
typedef



NTSTATUS
NTAPI
EVT_WDFDEVICE_WDM_IRP_DISPATCH(
   
    WDFDEVICE Device,
   
    UCHAR MajorFunction,
   
    UCHAR MinorFunction,
   
    ULONG Code,
   
    WDFCONTEXT DriverContext,
   
    PIRP Irp,
   
    WDFCONTEXT DispatchContext
    );
typedef EVT_WDFDEVICE_WDM_IRP_DISPATCH *PFN_WDFDEVICE_WDM_IRP_DISPATCH;
typedef



VOID
NTAPI
EVT_WDF_IO_IN_CALLER_CONTEXT(
   
    WDFDEVICE Device,
   
    WDFREQUEST Request
    );
typedef EVT_WDF_IO_IN_CALLER_CONTEXT *PFN_WDF_IO_IN_CALLER_CONTEXT;
typedef



NTSTATUS
NTAPI
EVT_WDFDEVICE_WDM_POST_PO_FX_REGISTER_DEVICE(
   
    WDFDEVICE Device,
   
    POHANDLE PoHandle
    );
typedef EVT_WDFDEVICE_WDM_POST_PO_FX_REGISTER_DEVICE *PFN_WDFDEVICE_WDM_POST_PO_FX_REGISTER_DEVICE;
typedef



VOID
NTAPI
EVT_WDFDEVICE_WDM_PRE_PO_FX_UNREGISTER_DEVICE(
   
    WDFDEVICE Device,
   
     POHANDLE PoHandle
    );
typedef EVT_WDFDEVICE_WDM_PRE_PO_FX_UNREGISTER_DEVICE *PFN_WDFDEVICE_WDM_PRE_PO_FX_UNREGISTER_DEVICE;
typedef struct _WDF_POWER_FRAMEWORK_SETTINGS {
    ULONG Size;
    PFN_WDFDEVICE_WDM_POST_PO_FX_REGISTER_DEVICE EvtDeviceWdmPostPoFxRegisterDevice;
    PFN_WDFDEVICE_WDM_PRE_PO_FX_UNREGISTER_DEVICE EvtDeviceWdmPrePoFxUnregisterDevice;
    PPO_FX_COMPONENT Component;
    PPO_FX_COMPONENT_ACTIVE_CONDITION_CALLBACK ComponentActiveConditionCallback;
    PPO_FX_COMPONENT_IDLE_CONDITION_CALLBACK ComponentIdleConditionCallback;
    PPO_FX_COMPONENT_IDLE_STATE_CALLBACK ComponentIdleStateCallback;
    PPO_FX_POWER_CONTROL_CALLBACK PowerControlCallback;
    PVOID PoFxDeviceContext;
    ULONGLONG PoFxDeviceFlags;
    WDF_TRI_STATE DirectedPoFxEnabled;
} WDF_POWER_FRAMEWORK_SETTINGS, *PWDF_POWER_FRAMEWORK_SETTINGS;
VOID
__inline
WDF_POWER_FRAMEWORK_SETTINGS_INIT(
    PWDF_POWER_FRAMEWORK_SETTINGS PowerFrameworkSettings
    )
{
    RtlZeroMemory(PowerFrameworkSettings,
                  sizeof(WDF_POWER_FRAMEWORK_SETTINGS));
    PowerFrameworkSettings->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_POWER_FRAMEWORK_SETTINGS < WdfStructureCount) ? WdfStructures[INDEX_WDF_POWER_FRAMEWORK_SETTINGS] : (size_t)(-1) ) : sizeof(WDF_POWER_FRAMEWORK_SETTINGS) );
    PowerFrameworkSettings->DirectedPoFxEnabled = WdfUseDefault;
}
typedef struct _WDF_IO_TYPE_CONFIG {
    ULONG Size;
    WDF_DEVICE_IO_TYPE ReadWriteIoType;
    WDF_DEVICE_IO_TYPE DeviceControlIoType;
    ULONG DirectTransferThreshold;
} WDF_IO_TYPE_CONFIG, *PWDF_IO_TYPE_CONFIG;
VOID
__inline
WDF_IO_TYPE_CONFIG_INIT(
    PWDF_IO_TYPE_CONFIG IoTypeConfig
    )
{
    RtlZeroMemory(IoTypeConfig, sizeof(WDF_IO_TYPE_CONFIG));
    IoTypeConfig->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_IO_TYPE_CONFIG < WdfStructureCount) ? WdfStructures[INDEX_WDF_IO_TYPE_CONFIG] : (size_t)(-1) ) : sizeof(WDF_IO_TYPE_CONFIG) );
    IoTypeConfig->ReadWriteIoType = WdfDeviceIoBuffered;
    IoTypeConfig->DeviceControlIoType = WdfDeviceIoBuffered;
}
typedef struct _WDF_DEVICE_PROPERTY_DATA {
    ULONG Size;
    const DEVPROPKEY * PropertyKey;
    LCID Lcid;
    ULONG Flags;
} WDF_DEVICE_PROPERTY_DATA, *PWDF_DEVICE_PROPERTY_DATA;
__inline
VOID
WDF_DEVICE_PROPERTY_DATA_INIT (
    PWDF_DEVICE_PROPERTY_DATA PropertyData,
    const DEVPROPKEY* PropertyKey
    )
{
    RtlZeroMemory(PropertyData, sizeof(WDF_DEVICE_PROPERTY_DATA));
    PropertyData->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_DEVICE_PROPERTY_DATA < WdfStructureCount) ? WdfStructures[INDEX_WDF_DEVICE_PROPERTY_DATA] : (size_t)(-1) ) : sizeof(WDF_DEVICE_PROPERTY_DATA) );
    PropertyData->PropertyKey = PropertyKey;
}
typedef


VOID
(NTAPI *PFN_WDFDEVICEGETDEVICESTATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PWDF_DEVICE_STATE DeviceState
    );

__inline
VOID
WdfDeviceGetDeviceState(
   
    WDFDEVICE Device,
   
    PWDF_DEVICE_STATE DeviceState
    )
{
    ((PFN_WDFDEVICEGETDEVICESTATE) WdfFunctions_01033[WdfDeviceGetDeviceStateTableIndex])(WdfDriverGlobals, Device, DeviceState);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICESETDEVICESTATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PWDF_DEVICE_STATE DeviceState
    );

__inline
VOID
WdfDeviceSetDeviceState(
   
    WDFDEVICE Device,
   
    PWDF_DEVICE_STATE DeviceState
    )
{
    ((PFN_WDFDEVICESETDEVICESTATE) WdfFunctions_01033[WdfDeviceSetDeviceStateTableIndex])(WdfDriverGlobals, Device, DeviceState);
}
typedef


WDFDEVICE
(NTAPI *PFN_WDFWDMDEVICEGETWDFDEVICEHANDLE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PDEVICE_OBJECT DeviceObject
    );

__inline
WDFDEVICE
WdfWdmDeviceGetWdfDeviceHandle(
   
    PDEVICE_OBJECT DeviceObject
    )
{
    return ((PFN_WDFWDMDEVICEGETWDFDEVICEHANDLE) WdfFunctions_01033[WdfWdmDeviceGetWdfDeviceHandleTableIndex])(WdfDriverGlobals, DeviceObject);
}
typedef


PDEVICE_OBJECT
(NTAPI *PFN_WDFDEVICEWDMGETDEVICEOBJECT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device
    );

__inline
PDEVICE_OBJECT
WdfDeviceWdmGetDeviceObject(
   
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEWDMGETDEVICEOBJECT) WdfFunctions_01033[WdfDeviceWdmGetDeviceObjectTableIndex])(WdfDriverGlobals, Device);
}
typedef


PDEVICE_OBJECT
(NTAPI *PFN_WDFDEVICEWDMGETATTACHEDDEVICE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device
    );

__inline
PDEVICE_OBJECT
WdfDeviceWdmGetAttachedDevice(
   
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEWDMGETATTACHEDDEVICE) WdfFunctions_01033[WdfDeviceWdmGetAttachedDeviceTableIndex])(WdfDriverGlobals, Device);
}
typedef


PDEVICE_OBJECT
(NTAPI *PFN_WDFDEVICEWDMGETPHYSICALDEVICE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device
    );

__inline
PDEVICE_OBJECT
WdfDeviceWdmGetPhysicalDevice(
   
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEWDMGETPHYSICALDEVICE) WdfFunctions_01033[WdfDeviceWdmGetPhysicalDeviceTableIndex])(WdfDriverGlobals, Device);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICEWDMDISPATCHPREPROCESSEDIRP)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PIRP Irp
    );


__inline
NTSTATUS
WdfDeviceWdmDispatchPreprocessedIrp(
   
    WDFDEVICE Device,
   
    PIRP Irp
    )
{
    return ((PFN_WDFDEVICEWDMDISPATCHPREPROCESSEDIRP) WdfFunctions_01033[WdfDeviceWdmDispatchPreprocessedIrpTableIndex])(WdfDriverGlobals, Device, Irp);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICEWDMDISPATCHIRP)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PIRP Irp,
   
    WDFCONTEXT DispatchContext
    );


__inline
NTSTATUS
WdfDeviceWdmDispatchIrp(
   
    WDFDEVICE Device,
   
    PIRP Irp,
   
    WDFCONTEXT DispatchContext
    )
{
    return ((PFN_WDFDEVICEWDMDISPATCHIRP) WdfFunctions_01033[WdfDeviceWdmDispatchIrpTableIndex])(WdfDriverGlobals, Device, Irp, DispatchContext);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICEWDMDISPATCHIRPTOIOQUEUE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PIRP Irp,
   
    WDFQUEUE Queue,
   
    ULONG Flags
    );


__inline
NTSTATUS
WdfDeviceWdmDispatchIrpToIoQueue(
   
    WDFDEVICE Device,
   
    PIRP Irp,
   
    WDFQUEUE Queue,
   
    ULONG Flags
    )
{
    return ((PFN_WDFDEVICEWDMDISPATCHIRPTOIOQUEUE) WdfFunctions_01033[WdfDeviceWdmDispatchIrpToIoQueueTableIndex])(WdfDriverGlobals, Device, Irp, Queue, Flags);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICEADDDEPENDENTUSAGEDEVICEOBJECT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PDEVICE_OBJECT DependentDevice
    );


__inline
NTSTATUS
WdfDeviceAddDependentUsageDeviceObject(
   
    WDFDEVICE Device,
   
    PDEVICE_OBJECT DependentDevice
    )
{
    return ((PFN_WDFDEVICEADDDEPENDENTUSAGEDEVICEOBJECT) WdfFunctions_01033[WdfDeviceAddDependentUsageDeviceObjectTableIndex])(WdfDriverGlobals, Device, DependentDevice);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICEREMOVEDEPENDENTUSAGEDEVICEOBJECT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PDEVICE_OBJECT DependentDevice
    );

__inline
VOID
WdfDeviceRemoveDependentUsageDeviceObject(
   
    WDFDEVICE Device,
   
    PDEVICE_OBJECT DependentDevice
    )
{
    ((PFN_WDFDEVICEREMOVEDEPENDENTUSAGEDEVICEOBJECT) WdfFunctions_01033[WdfDeviceRemoveDependentUsageDeviceObjectTableIndex])(WdfDriverGlobals, Device, DependentDevice);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICEADDREMOVALRELATIONSPHYSICALDEVICE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PDEVICE_OBJECT PhysicalDevice
    );


__inline
NTSTATUS
WdfDeviceAddRemovalRelationsPhysicalDevice(
   
    WDFDEVICE Device,
   
    PDEVICE_OBJECT PhysicalDevice
    )
{
    return ((PFN_WDFDEVICEADDREMOVALRELATIONSPHYSICALDEVICE) WdfFunctions_01033[WdfDeviceAddRemovalRelationsPhysicalDeviceTableIndex])(WdfDriverGlobals, Device, PhysicalDevice);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICEREMOVEREMOVALRELATIONSPHYSICALDEVICE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PDEVICE_OBJECT PhysicalDevice
    );

__inline
VOID
WdfDeviceRemoveRemovalRelationsPhysicalDevice(
   
    WDFDEVICE Device,
   
    PDEVICE_OBJECT PhysicalDevice
    )
{
    ((PFN_WDFDEVICEREMOVEREMOVALRELATIONSPHYSICALDEVICE) WdfFunctions_01033[WdfDeviceRemoveRemovalRelationsPhysicalDeviceTableIndex])(WdfDriverGlobals, Device, PhysicalDevice);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICECLEARREMOVALRELATIONSDEVICES)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device
    );

__inline
VOID
WdfDeviceClearRemovalRelationsDevices(
   
    WDFDEVICE Device
    )
{
    ((PFN_WDFDEVICECLEARREMOVALRELATIONSDEVICES) WdfFunctions_01033[WdfDeviceClearRemovalRelationsDevicesTableIndex])(WdfDriverGlobals, Device);
}
typedef


WDFDRIVER
(NTAPI *PFN_WDFDEVICEGETDRIVER)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device
    );

__inline
WDFDRIVER
WdfDeviceGetDriver(
   
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETDRIVER) WdfFunctions_01033[WdfDeviceGetDriverTableIndex])(WdfDriverGlobals, Device);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICERETRIEVEDEVICENAME)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    WDFSTRING String
    );


__inline
NTSTATUS
WdfDeviceRetrieveDeviceName(
   
    WDFDEVICE Device,
   
    WDFSTRING String
    )
{
    return ((PFN_WDFDEVICERETRIEVEDEVICENAME) WdfFunctions_01033[WdfDeviceRetrieveDeviceNameTableIndex])(WdfDriverGlobals, Device, String);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICEASSIGNMOFRESOURCENAME)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PCUNICODE_STRING MofResourceName
    );


__inline
NTSTATUS
WdfDeviceAssignMofResourceName(
   
    WDFDEVICE Device,
   
    PCUNICODE_STRING MofResourceName
    )
{
    return ((PFN_WDFDEVICEASSIGNMOFRESOURCENAME) WdfFunctions_01033[WdfDeviceAssignMofResourceNameTableIndex])(WdfDriverGlobals, Device, MofResourceName);
}
typedef


WDFIOTARGET
(NTAPI *PFN_WDFDEVICEGETIOTARGET)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device
    );

__inline
WDFIOTARGET
WdfDeviceGetIoTarget(
   
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETIOTARGET) WdfFunctions_01033[WdfDeviceGetIoTargetTableIndex])(WdfDriverGlobals, Device);
}
typedef


WDF_DEVICE_PNP_STATE
(NTAPI *PFN_WDFDEVICEGETDEVICEPNPSTATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device
    );

__inline
WDF_DEVICE_PNP_STATE
WdfDeviceGetDevicePnpState(
   
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETDEVICEPNPSTATE) WdfFunctions_01033[WdfDeviceGetDevicePnpStateTableIndex])(WdfDriverGlobals, Device);
}
typedef


WDF_DEVICE_POWER_STATE
(NTAPI *PFN_WDFDEVICEGETDEVICEPOWERSTATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device
    );

__inline
WDF_DEVICE_POWER_STATE
WdfDeviceGetDevicePowerState(
   
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETDEVICEPOWERSTATE) WdfFunctions_01033[WdfDeviceGetDevicePowerStateTableIndex])(WdfDriverGlobals, Device);
}
typedef


WDF_DEVICE_POWER_POLICY_STATE
(NTAPI *PFN_WDFDEVICEGETDEVICEPOWERPOLICYSTATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device
    );

__inline
WDF_DEVICE_POWER_POLICY_STATE
WdfDeviceGetDevicePowerPolicyState(
   
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETDEVICEPOWERPOLICYSTATE) WdfFunctions_01033[WdfDeviceGetDevicePowerPolicyStateTableIndex])(WdfDriverGlobals, Device);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICEASSIGNS0IDLESETTINGS)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PWDF_DEVICE_POWER_POLICY_IDLE_SETTINGS Settings
    );


__inline
NTSTATUS
WdfDeviceAssignS0IdleSettings(
   
    WDFDEVICE Device,
   
    PWDF_DEVICE_POWER_POLICY_IDLE_SETTINGS Settings
    )
{
    return ((PFN_WDFDEVICEASSIGNS0IDLESETTINGS) WdfFunctions_01033[WdfDeviceAssignS0IdleSettingsTableIndex])(WdfDriverGlobals, Device, Settings);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICEASSIGNSXWAKESETTINGS)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PWDF_DEVICE_POWER_POLICY_WAKE_SETTINGS Settings
    );


__inline
NTSTATUS
WdfDeviceAssignSxWakeSettings(
   
    WDFDEVICE Device,
   
    PWDF_DEVICE_POWER_POLICY_WAKE_SETTINGS Settings
    )
{
    return ((PFN_WDFDEVICEASSIGNSXWAKESETTINGS) WdfFunctions_01033[WdfDeviceAssignSxWakeSettingsTableIndex])(WdfDriverGlobals, Device, Settings);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICEOPENREGISTRYKEY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    ULONG DeviceInstanceKeyType,
   
    ACCESS_MASK DesiredAccess,
   
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
   
    WDFKEY* Key
    );


__inline
NTSTATUS
WdfDeviceOpenRegistryKey(
   
    WDFDEVICE Device,
   
    ULONG DeviceInstanceKeyType,
   
    ACCESS_MASK DesiredAccess,
   
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
   
    WDFKEY* Key
    )
{
    return ((PFN_WDFDEVICEOPENREGISTRYKEY) WdfFunctions_01033[WdfDeviceOpenRegistryKeyTableIndex])(WdfDriverGlobals, Device, DeviceInstanceKeyType, DesiredAccess, KeyAttributes, Key);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICEOPENDEVICEMAPKEY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PCUNICODE_STRING KeyName,
   
    ACCESS_MASK DesiredAccess,
   
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
   
    WDFKEY* Key
    );


__inline
NTSTATUS
WdfDeviceOpenDevicemapKey(
   
    WDFDEVICE Device,
   
    PCUNICODE_STRING KeyName,
   
    ACCESS_MASK DesiredAccess,
   
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
   
    WDFKEY* Key
    )
{
    return ((PFN_WDFDEVICEOPENDEVICEMAPKEY) WdfFunctions_01033[WdfDeviceOpenDevicemapKeyTableIndex])(WdfDriverGlobals, Device, KeyName, DesiredAccess, KeyAttributes, Key);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICESETSPECIALFILESUPPORT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    WDF_SPECIAL_FILE_TYPE FileType,
   
    BOOLEAN FileTypeIsSupported
    );

__inline
VOID
WdfDeviceSetSpecialFileSupport(
   
    WDFDEVICE Device,
   
    WDF_SPECIAL_FILE_TYPE FileType,
   
    BOOLEAN FileTypeIsSupported
    )
{
    ((PFN_WDFDEVICESETSPECIALFILESUPPORT) WdfFunctions_01033[WdfDeviceSetSpecialFileSupportTableIndex])(WdfDriverGlobals, Device, FileType, FileTypeIsSupported);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICESETCHARACTERISTICS)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    ULONG DeviceCharacteristics
    );

__inline
VOID
WdfDeviceSetCharacteristics(
   
    WDFDEVICE Device,
   
    ULONG DeviceCharacteristics
    )
{
    ((PFN_WDFDEVICESETCHARACTERISTICS) WdfFunctions_01033[WdfDeviceSetCharacteristicsTableIndex])(WdfDriverGlobals, Device, DeviceCharacteristics);
}
typedef


ULONG
(NTAPI *PFN_WDFDEVICEGETCHARACTERISTICS)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device
    );

__inline
ULONG
WdfDeviceGetCharacteristics(
   
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETCHARACTERISTICS) WdfFunctions_01033[WdfDeviceGetCharacteristicsTableIndex])(WdfDriverGlobals, Device);
}
typedef


ULONG
(NTAPI *PFN_WDFDEVICEGETALIGNMENTREQUIREMENT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device
    );

__inline
ULONG
WdfDeviceGetAlignmentRequirement(
   
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETALIGNMENTREQUIREMENT) WdfFunctions_01033[WdfDeviceGetAlignmentRequirementTableIndex])(WdfDriverGlobals, Device);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICESETALIGNMENTREQUIREMENT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    ULONG AlignmentRequirement
    );

__inline
VOID
WdfDeviceSetAlignmentRequirement(
   
    WDFDEVICE Device,
   
    ULONG AlignmentRequirement
    )
{
    ((PFN_WDFDEVICESETALIGNMENTREQUIREMENT) WdfFunctions_01033[WdfDeviceSetAlignmentRequirementTableIndex])(WdfDriverGlobals, Device, AlignmentRequirement);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICEINITFREE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit
    );

__inline
VOID
WdfDeviceInitFree(
   
    PWDFDEVICE_INIT DeviceInit
    )
{
    ((PFN_WDFDEVICEINITFREE) WdfFunctions_01033[WdfDeviceInitFreeTableIndex])(WdfDriverGlobals, DeviceInit);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICEINITSETPNPPOWEREVENTCALLBACKS)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    PWDF_PNPPOWER_EVENT_CALLBACKS PnpPowerEventCallbacks
    );

__inline
VOID
WdfDeviceInitSetPnpPowerEventCallbacks(
   
    PWDFDEVICE_INIT DeviceInit,
   
    PWDF_PNPPOWER_EVENT_CALLBACKS PnpPowerEventCallbacks
    )
{
    ((PFN_WDFDEVICEINITSETPNPPOWEREVENTCALLBACKS) WdfFunctions_01033[WdfDeviceInitSetPnpPowerEventCallbacksTableIndex])(WdfDriverGlobals, DeviceInit, PnpPowerEventCallbacks);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICEINITSETPOWERPOLICYEVENTCALLBACKS)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    PWDF_POWER_POLICY_EVENT_CALLBACKS PowerPolicyEventCallbacks
    );

__inline
VOID
WdfDeviceInitSetPowerPolicyEventCallbacks(
   
    PWDFDEVICE_INIT DeviceInit,
   
    PWDF_POWER_POLICY_EVENT_CALLBACKS PowerPolicyEventCallbacks
    )
{
    ((PFN_WDFDEVICEINITSETPOWERPOLICYEVENTCALLBACKS) WdfFunctions_01033[WdfDeviceInitSetPowerPolicyEventCallbacksTableIndex])(WdfDriverGlobals, DeviceInit, PowerPolicyEventCallbacks);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICEINITSETPOWERPOLICYOWNERSHIP)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    BOOLEAN IsPowerPolicyOwner
    );

__inline
VOID
WdfDeviceInitSetPowerPolicyOwnership(
   
    PWDFDEVICE_INIT DeviceInit,
   
    BOOLEAN IsPowerPolicyOwner
    )
{
    ((PFN_WDFDEVICEINITSETPOWERPOLICYOWNERSHIP) WdfFunctions_01033[WdfDeviceInitSetPowerPolicyOwnershipTableIndex])(WdfDriverGlobals, DeviceInit, IsPowerPolicyOwner);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICEINITREGISTERPNPSTATECHANGECALLBACK)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    WDF_DEVICE_PNP_STATE PnpState,
   
    PFN_WDF_DEVICE_PNP_STATE_CHANGE_NOTIFICATION EvtDevicePnpStateChange,
   
    ULONG CallbackTypes
    );


__inline
NTSTATUS
WdfDeviceInitRegisterPnpStateChangeCallback(
   
    PWDFDEVICE_INIT DeviceInit,
   
    WDF_DEVICE_PNP_STATE PnpState,
   
    PFN_WDF_DEVICE_PNP_STATE_CHANGE_NOTIFICATION EvtDevicePnpStateChange,
   
    ULONG CallbackTypes
    )
{
    return ((PFN_WDFDEVICEINITREGISTERPNPSTATECHANGECALLBACK) WdfFunctions_01033[WdfDeviceInitRegisterPnpStateChangeCallbackTableIndex])(WdfDriverGlobals, DeviceInit, PnpState, EvtDevicePnpStateChange, CallbackTypes);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICEINITREGISTERPOWERSTATECHANGECALLBACK)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    WDF_DEVICE_POWER_STATE PowerState,
   
    PFN_WDF_DEVICE_POWER_STATE_CHANGE_NOTIFICATION EvtDevicePowerStateChange,
   
    ULONG CallbackTypes
    );


__inline
NTSTATUS
WdfDeviceInitRegisterPowerStateChangeCallback(
   
    PWDFDEVICE_INIT DeviceInit,
   
    WDF_DEVICE_POWER_STATE PowerState,
   
    PFN_WDF_DEVICE_POWER_STATE_CHANGE_NOTIFICATION EvtDevicePowerStateChange,
   
    ULONG CallbackTypes
    )
{
    return ((PFN_WDFDEVICEINITREGISTERPOWERSTATECHANGECALLBACK) WdfFunctions_01033[WdfDeviceInitRegisterPowerStateChangeCallbackTableIndex])(WdfDriverGlobals, DeviceInit, PowerState, EvtDevicePowerStateChange, CallbackTypes);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICEINITREGISTERPOWERPOLICYSTATECHANGECALLBACK)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    WDF_DEVICE_POWER_POLICY_STATE PowerPolicyState,
   
    PFN_WDF_DEVICE_POWER_POLICY_STATE_CHANGE_NOTIFICATION EvtDevicePowerPolicyStateChange,
   
    ULONG CallbackTypes
    );


__inline
NTSTATUS
WdfDeviceInitRegisterPowerPolicyStateChangeCallback(
   
    PWDFDEVICE_INIT DeviceInit,
   
    WDF_DEVICE_POWER_POLICY_STATE PowerPolicyState,
   
    PFN_WDF_DEVICE_POWER_POLICY_STATE_CHANGE_NOTIFICATION EvtDevicePowerPolicyStateChange,
   
    ULONG CallbackTypes
    )
{
    return ((PFN_WDFDEVICEINITREGISTERPOWERPOLICYSTATECHANGECALLBACK) WdfFunctions_01033[WdfDeviceInitRegisterPowerPolicyStateChangeCallbackTableIndex])(WdfDriverGlobals, DeviceInit, PowerPolicyState, EvtDevicePowerPolicyStateChange, CallbackTypes);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICEINITSETEXCLUSIVE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    BOOLEAN IsExclusive
    );

__inline
VOID
WdfDeviceInitSetExclusive(
   
    PWDFDEVICE_INIT DeviceInit,
   
    BOOLEAN IsExclusive
    )
{
    ((PFN_WDFDEVICEINITSETEXCLUSIVE) WdfFunctions_01033[WdfDeviceInitSetExclusiveTableIndex])(WdfDriverGlobals, DeviceInit, IsExclusive);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICEINITSETIOTYPE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    WDF_DEVICE_IO_TYPE IoType
    );

__inline
VOID
WdfDeviceInitSetIoType(
   
    PWDFDEVICE_INIT DeviceInit,
   
    WDF_DEVICE_IO_TYPE IoType
    )
{
    ((PFN_WDFDEVICEINITSETIOTYPE) WdfFunctions_01033[WdfDeviceInitSetIoTypeTableIndex])(WdfDriverGlobals, DeviceInit, IoType);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICEINITSETPOWERNOTPAGEABLE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit
    );

__inline
VOID
WdfDeviceInitSetPowerNotPageable(
   
    PWDFDEVICE_INIT DeviceInit
    )
{
    ((PFN_WDFDEVICEINITSETPOWERNOTPAGEABLE) WdfFunctions_01033[WdfDeviceInitSetPowerNotPageableTableIndex])(WdfDriverGlobals, DeviceInit);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICEINITSETPOWERPAGEABLE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit
    );

__inline
VOID
WdfDeviceInitSetPowerPageable(
   
    PWDFDEVICE_INIT DeviceInit
    )
{
    ((PFN_WDFDEVICEINITSETPOWERPAGEABLE) WdfFunctions_01033[WdfDeviceInitSetPowerPageableTableIndex])(WdfDriverGlobals, DeviceInit);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICEINITSETPOWERINRUSH)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit
    );

__inline
VOID
WdfDeviceInitSetPowerInrush(
   
    PWDFDEVICE_INIT DeviceInit
    )
{
    ((PFN_WDFDEVICEINITSETPOWERINRUSH) WdfFunctions_01033[WdfDeviceInitSetPowerInrushTableIndex])(WdfDriverGlobals, DeviceInit);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICEINITSETDEVICETYPE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    DEVICE_TYPE DeviceType
    );

__inline
VOID
WdfDeviceInitSetDeviceType(
   
    PWDFDEVICE_INIT DeviceInit,
   
    DEVICE_TYPE DeviceType
    )
{
    ((PFN_WDFDEVICEINITSETDEVICETYPE) WdfFunctions_01033[WdfDeviceInitSetDeviceTypeTableIndex])(WdfDriverGlobals, DeviceInit, DeviceType);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICEINITASSIGNNAME)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    PCUNICODE_STRING DeviceName
    );


__inline
NTSTATUS
WdfDeviceInitAssignName(
   
    PWDFDEVICE_INIT DeviceInit,
   
    PCUNICODE_STRING DeviceName
    )
{
    return ((PFN_WDFDEVICEINITASSIGNNAME) WdfFunctions_01033[WdfDeviceInitAssignNameTableIndex])(WdfDriverGlobals, DeviceInit, DeviceName);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICEINITASSIGNSDDLSTRING)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    PCUNICODE_STRING SDDLString
    );


__inline
NTSTATUS
WdfDeviceInitAssignSDDLString(
   
    PWDFDEVICE_INIT DeviceInit,
   
    PCUNICODE_STRING SDDLString
    )
{
    return ((PFN_WDFDEVICEINITASSIGNSDDLSTRING) WdfFunctions_01033[WdfDeviceInitAssignSDDLStringTableIndex])(WdfDriverGlobals, DeviceInit, SDDLString);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICEINITSETDEVICECLASS)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    CONST GUID* DeviceClassGuid
    );

__inline
VOID
WdfDeviceInitSetDeviceClass(
   
    PWDFDEVICE_INIT DeviceInit,
   
    CONST GUID* DeviceClassGuid
    )
{
    ((PFN_WDFDEVICEINITSETDEVICECLASS) WdfFunctions_01033[WdfDeviceInitSetDeviceClassTableIndex])(WdfDriverGlobals, DeviceInit, DeviceClassGuid);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICEINITSETCHARACTERISTICS)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    ULONG DeviceCharacteristics,
   
    BOOLEAN OrInValues
    );

__inline
VOID
WdfDeviceInitSetCharacteristics(
   
    PWDFDEVICE_INIT DeviceInit,
   
    ULONG DeviceCharacteristics,
   
    BOOLEAN OrInValues
    )
{
    ((PFN_WDFDEVICEINITSETCHARACTERISTICS) WdfFunctions_01033[WdfDeviceInitSetCharacteristicsTableIndex])(WdfDriverGlobals, DeviceInit, DeviceCharacteristics, OrInValues);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICEINITSETFILEOBJECTCONFIG)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    PWDF_FILEOBJECT_CONFIG FileObjectConfig,
   
    PWDF_OBJECT_ATTRIBUTES FileObjectAttributes
    );

__inline
VOID
WdfDeviceInitSetFileObjectConfig(
   
    PWDFDEVICE_INIT DeviceInit,
   
    PWDF_FILEOBJECT_CONFIG FileObjectConfig,
   
    PWDF_OBJECT_ATTRIBUTES FileObjectAttributes
    )
{
    ((PFN_WDFDEVICEINITSETFILEOBJECTCONFIG) WdfFunctions_01033[WdfDeviceInitSetFileObjectConfigTableIndex])(WdfDriverGlobals, DeviceInit, FileObjectConfig, FileObjectAttributes);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICEINITSETREQUESTATTRIBUTES)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    PWDF_OBJECT_ATTRIBUTES RequestAttributes
    );

__inline
VOID
WdfDeviceInitSetRequestAttributes(
   
    PWDFDEVICE_INIT DeviceInit,
   
    PWDF_OBJECT_ATTRIBUTES RequestAttributes
    )
{
    ((PFN_WDFDEVICEINITSETREQUESTATTRIBUTES) WdfFunctions_01033[WdfDeviceInitSetRequestAttributesTableIndex])(WdfDriverGlobals, DeviceInit, RequestAttributes);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICEINITASSIGNWDMIRPPREPROCESSCALLBACK)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    PFN_WDFDEVICE_WDM_IRP_PREPROCESS EvtDeviceWdmIrpPreprocess,
   
    UCHAR MajorFunction,
   
   
    PUCHAR MinorFunctions,
   
    ULONG NumMinorFunctions
    );


__inline
NTSTATUS
WdfDeviceInitAssignWdmIrpPreprocessCallback(
   
    PWDFDEVICE_INIT DeviceInit,
   
    PFN_WDFDEVICE_WDM_IRP_PREPROCESS EvtDeviceWdmIrpPreprocess,
   
    UCHAR MajorFunction,
   
   
    PUCHAR MinorFunctions,
   
    ULONG NumMinorFunctions
    )
{
    return ((PFN_WDFDEVICEINITASSIGNWDMIRPPREPROCESSCALLBACK) WdfFunctions_01033[WdfDeviceInitAssignWdmIrpPreprocessCallbackTableIndex])(WdfDriverGlobals, DeviceInit, EvtDeviceWdmIrpPreprocess, MajorFunction, MinorFunctions, NumMinorFunctions);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICEINITSETIOINCALLERCONTEXTCALLBACK)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    PFN_WDF_IO_IN_CALLER_CONTEXT EvtIoInCallerContext
    );

__inline
VOID
WdfDeviceInitSetIoInCallerContextCallback(
   
    PWDFDEVICE_INIT DeviceInit,
   
    PFN_WDF_IO_IN_CALLER_CONTEXT EvtIoInCallerContext
    )
{
    ((PFN_WDFDEVICEINITSETIOINCALLERCONTEXTCALLBACK) WdfFunctions_01033[WdfDeviceInitSetIoInCallerContextCallbackTableIndex])(WdfDriverGlobals, DeviceInit, EvtIoInCallerContext);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICEINITSETREMOVELOCKOPTIONS)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    PWDF_REMOVE_LOCK_OPTIONS Options
    );

__inline
VOID
WdfDeviceInitSetRemoveLockOptions(
   
    PWDFDEVICE_INIT DeviceInit,
   
    PWDF_REMOVE_LOCK_OPTIONS Options
    )
{
    ((PFN_WDFDEVICEINITSETREMOVELOCKOPTIONS) WdfFunctions_01033[WdfDeviceInitSetRemoveLockOptionsTableIndex])(WdfDriverGlobals, DeviceInit, Options);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICECREATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT* DeviceInit,
   
    PWDF_OBJECT_ATTRIBUTES DeviceAttributes,
   
    WDFDEVICE* Device
    );


__inline
NTSTATUS
WdfDeviceCreate(
   
    PWDFDEVICE_INIT* DeviceInit,
   
    PWDF_OBJECT_ATTRIBUTES DeviceAttributes,
   
    WDFDEVICE* Device
    )
{
    return ((PFN_WDFDEVICECREATE) WdfFunctions_01033[WdfDeviceCreateTableIndex])(WdfDriverGlobals, DeviceInit, DeviceAttributes, Device);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICESETSTATICSTOPREMOVE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    BOOLEAN Stoppable
    );

__inline
VOID
WdfDeviceSetStaticStopRemove(
   
    WDFDEVICE Device,
   
    BOOLEAN Stoppable
    )
{
    ((PFN_WDFDEVICESETSTATICSTOPREMOVE) WdfFunctions_01033[WdfDeviceSetStaticStopRemoveTableIndex])(WdfDriverGlobals, Device, Stoppable);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICECREATEDEVICEINTERFACE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    CONST GUID* InterfaceClassGUID,
   
    PCUNICODE_STRING ReferenceString
    );


__inline
NTSTATUS
WdfDeviceCreateDeviceInterface(
   
    WDFDEVICE Device,
   
    CONST GUID* InterfaceClassGUID,
   
    PCUNICODE_STRING ReferenceString
    )
{
    return ((PFN_WDFDEVICECREATEDEVICEINTERFACE) WdfFunctions_01033[WdfDeviceCreateDeviceInterfaceTableIndex])(WdfDriverGlobals, Device, InterfaceClassGUID, ReferenceString);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICESETDEVICEINTERFACESTATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    CONST GUID* InterfaceClassGUID,
   
    PCUNICODE_STRING ReferenceString,
   
    BOOLEAN IsInterfaceEnabled
    );

__inline
VOID
WdfDeviceSetDeviceInterfaceState(
   
    WDFDEVICE Device,
   
    CONST GUID* InterfaceClassGUID,
   
    PCUNICODE_STRING ReferenceString,
   
    BOOLEAN IsInterfaceEnabled
    )
{
    ((PFN_WDFDEVICESETDEVICEINTERFACESTATE) WdfFunctions_01033[WdfDeviceSetDeviceInterfaceStateTableIndex])(WdfDriverGlobals, Device, InterfaceClassGUID, ReferenceString, IsInterfaceEnabled);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICESETDEVICEINTERFACESTATEEX)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    CONST GUID* InterfaceClassGUID,
   
    PCUNICODE_STRING ReferenceString,
   
    BOOLEAN IsInterfaceEnabled
    );

__inline
VOID
WdfDeviceSetDeviceInterfaceStateEx(
   
    WDFDEVICE Device,
   
    CONST GUID* InterfaceClassGUID,
   
    PCUNICODE_STRING ReferenceString,
   
    BOOLEAN IsInterfaceEnabled
    )
{
    if (( (WdfDeviceSetDeviceInterfaceStateExTableIndex < 453) || (!WdfClientVersionHigherThanFramework) || (WdfDeviceSetDeviceInterfaceStateExTableIndex < WdfFunctionCount) )) {
        ((PFN_WDFDEVICESETDEVICEINTERFACESTATEEX) WdfFunctions_01033[WdfDeviceSetDeviceInterfaceStateExTableIndex])(WdfDriverGlobals, Device, InterfaceClassGUID, ReferenceString, IsInterfaceEnabled);
    }
    else {
        ((PFN_WDFDRIVERERRORREPORTAPIMISSING) WdfFunctions_01033[WdfDriverErrorReportApiMissingTableIndex])(WdfDriverGlobals, WdfGetDriver(), NULL, WdfDeviceSetDeviceInterfaceStateExTableIndex, FALSE);
    }
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICERETRIEVEDEVICEINTERFACESTRING)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    CONST GUID* InterfaceClassGUID,
   
    PCUNICODE_STRING ReferenceString,
   
    WDFSTRING String
    );


__inline
NTSTATUS
WdfDeviceRetrieveDeviceInterfaceString(
   
    WDFDEVICE Device,
   
    CONST GUID* InterfaceClassGUID,
   
    PCUNICODE_STRING ReferenceString,
   
    WDFSTRING String
    )
{
    return ((PFN_WDFDEVICERETRIEVEDEVICEINTERFACESTRING) WdfFunctions_01033[WdfDeviceRetrieveDeviceInterfaceStringTableIndex])(WdfDriverGlobals, Device, InterfaceClassGUID, ReferenceString, String);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICECREATESYMBOLICLINK)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PCUNICODE_STRING SymbolicLinkName
    );


__inline
NTSTATUS
WdfDeviceCreateSymbolicLink(
   
    WDFDEVICE Device,
   
    PCUNICODE_STRING SymbolicLinkName
    )
{
    return ((PFN_WDFDEVICECREATESYMBOLICLINK) WdfFunctions_01033[WdfDeviceCreateSymbolicLinkTableIndex])(WdfDriverGlobals, Device, SymbolicLinkName);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICEQUERYPROPERTY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
   
    ULONG BufferLength,
   
    PVOID PropertyBuffer,
   
    PULONG ResultLength
    );


__inline
NTSTATUS
WdfDeviceQueryProperty(
   
    WDFDEVICE Device,
   
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
   
    ULONG BufferLength,
   
    PVOID PropertyBuffer,
   
    PULONG ResultLength
    )
{
    return ((PFN_WDFDEVICEQUERYPROPERTY) WdfFunctions_01033[WdfDeviceQueryPropertyTableIndex])(WdfDriverGlobals, Device, DeviceProperty, BufferLength, PropertyBuffer, ResultLength);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICEALLOCANDQUERYPROPERTY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
   
   
    POOL_TYPE PoolType,
   
    PWDF_OBJECT_ATTRIBUTES PropertyMemoryAttributes,
   
    WDFMEMORY* PropertyMemory
    );


__inline
NTSTATUS
WdfDeviceAllocAndQueryProperty(
   
    WDFDEVICE Device,
   
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
   
   
    POOL_TYPE PoolType,
   
    PWDF_OBJECT_ATTRIBUTES PropertyMemoryAttributes,
   
    WDFMEMORY* PropertyMemory
    )
{
    return ((PFN_WDFDEVICEALLOCANDQUERYPROPERTY) WdfFunctions_01033[WdfDeviceAllocAndQueryPropertyTableIndex])(WdfDriverGlobals, Device, DeviceProperty, PoolType, PropertyMemoryAttributes, PropertyMemory);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICESETPNPCAPABILITIES)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PWDF_DEVICE_PNP_CAPABILITIES PnpCapabilities
    );

__inline
VOID
WdfDeviceSetPnpCapabilities(
   
    WDFDEVICE Device,
   
    PWDF_DEVICE_PNP_CAPABILITIES PnpCapabilities
    )
{
    ((PFN_WDFDEVICESETPNPCAPABILITIES) WdfFunctions_01033[WdfDeviceSetPnpCapabilitiesTableIndex])(WdfDriverGlobals, Device, PnpCapabilities);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICESETPOWERCAPABILITIES)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PWDF_DEVICE_POWER_CAPABILITIES PowerCapabilities
    );

__inline
VOID
WdfDeviceSetPowerCapabilities(
   
    WDFDEVICE Device,
   
    PWDF_DEVICE_POWER_CAPABILITIES PowerCapabilities
    )
{
    ((PFN_WDFDEVICESETPOWERCAPABILITIES) WdfFunctions_01033[WdfDeviceSetPowerCapabilitiesTableIndex])(WdfDriverGlobals, Device, PowerCapabilities);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICESETBUSINFORMATIONFORCHILDREN)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PPNP_BUS_INFORMATION BusInformation
    );

__inline
VOID
WdfDeviceSetBusInformationForChildren(
   
    WDFDEVICE Device,
   
    PPNP_BUS_INFORMATION BusInformation
    )
{
    ((PFN_WDFDEVICESETBUSINFORMATIONFORCHILDREN) WdfFunctions_01033[WdfDeviceSetBusInformationForChildrenTableIndex])(WdfDriverGlobals, Device, BusInformation);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICEINDICATEWAKESTATUS)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    NTSTATUS WaitWakeStatus
    );


__inline
NTSTATUS
WdfDeviceIndicateWakeStatus(
   
    WDFDEVICE Device,
   
    NTSTATUS WaitWakeStatus
    )
{
    return ((PFN_WDFDEVICEINDICATEWAKESTATUS) WdfFunctions_01033[WdfDeviceIndicateWakeStatusTableIndex])(WdfDriverGlobals, Device, WaitWakeStatus);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICESETFAILED)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    WDF_DEVICE_FAILED_ACTION FailedAction
    );

__inline
VOID
WdfDeviceSetFailed(
   
    WDFDEVICE Device,
   
    WDF_DEVICE_FAILED_ACTION FailedAction
    )
{
    ((PFN_WDFDEVICESETFAILED) WdfFunctions_01033[WdfDeviceSetFailedTableIndex])(WdfDriverGlobals, Device, FailedAction);
}
typedef




NTSTATUS
(NTAPI *PFN_WDFDEVICESTOPIDLENOTRACK)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    BOOLEAN WaitForD0
    );



__inline
NTSTATUS
WdfDeviceStopIdleNoTrack(
   
    WDFDEVICE Device,
   
    BOOLEAN WaitForD0
    )
{
    return ((PFN_WDFDEVICESTOPIDLENOTRACK) WdfFunctions_01033[WdfDeviceStopIdleNoTrackTableIndex])(WdfDriverGlobals, Device, WaitForD0);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICERESUMEIDLENOTRACK)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device
    );

__inline
VOID
WdfDeviceResumeIdleNoTrack(
   
    WDFDEVICE Device
    )
{
    ((PFN_WDFDEVICERESUMEIDLENOTRACK) WdfFunctions_01033[WdfDeviceResumeIdleNoTrackTableIndex])(WdfDriverGlobals, Device);
}
typedef




NTSTATUS
(NTAPI *PFN_WDFDEVICESTOPIDLEACTUAL)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    BOOLEAN WaitForD0,
   
    PVOID Tag,
   
    LONG Line,
   
    PCCH File
    );



__inline
NTSTATUS
WdfDeviceStopIdleActual(
   
    WDFDEVICE Device,
   
    BOOLEAN WaitForD0,
   
    PVOID Tag,
   
    LONG Line,
   
    PCCH File
    )
{
    return ((PFN_WDFDEVICESTOPIDLEACTUAL) WdfFunctions_01033[WdfDeviceStopIdleActualTableIndex])(WdfDriverGlobals, Device, WaitForD0, Tag, Line, File);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICERESUMEIDLEACTUAL)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PVOID Tag,
   
    LONG Line,
   
    PCCH File
    );

__inline
VOID
WdfDeviceResumeIdleActual(
   
    WDFDEVICE Device,
   
    PVOID Tag,
   
    LONG Line,
   
    PCCH File
    )
{
    ((PFN_WDFDEVICERESUMEIDLEACTUAL) WdfFunctions_01033[WdfDeviceResumeIdleActualTableIndex])(WdfDriverGlobals, Device, Tag, Line, File);
}
typedef


WDFFILEOBJECT
(NTAPI *PFN_WDFDEVICEGETFILEOBJECT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PFILE_OBJECT FileObject
    );

__inline
WDFFILEOBJECT
WdfDeviceGetFileObject(
   
    WDFDEVICE Device,
   
    PFILE_OBJECT FileObject
    )
{
    return ((PFN_WDFDEVICEGETFILEOBJECT) WdfFunctions_01033[WdfDeviceGetFileObjectTableIndex])(WdfDriverGlobals, Device, FileObject);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICEENQUEUEREQUEST)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    WDFREQUEST Request
    );


__inline
NTSTATUS
WdfDeviceEnqueueRequest(
   
    WDFDEVICE Device,
   
    WDFREQUEST Request
    )
{
    return ((PFN_WDFDEVICEENQUEUEREQUEST) WdfFunctions_01033[WdfDeviceEnqueueRequestTableIndex])(WdfDriverGlobals, Device, Request);
}
typedef


WDFQUEUE
(NTAPI *PFN_WDFDEVICEGETDEFAULTQUEUE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device
    );

__inline
WDFQUEUE
WdfDeviceGetDefaultQueue(
   
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETDEFAULTQUEUE) WdfFunctions_01033[WdfDeviceGetDefaultQueueTableIndex])(WdfDriverGlobals, Device);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICECONFIGUREREQUESTDISPATCHING)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    WDFQUEUE Queue,
   
   
    WDF_REQUEST_TYPE RequestType
    );


__inline
NTSTATUS
WdfDeviceConfigureRequestDispatching(
   
    WDFDEVICE Device,
   
    WDFQUEUE Queue,
   
   
    WDF_REQUEST_TYPE RequestType
    )
{
    return ((PFN_WDFDEVICECONFIGUREREQUESTDISPATCHING) WdfFunctions_01033[WdfDeviceConfigureRequestDispatchingTableIndex])(WdfDriverGlobals, Device, Queue, RequestType);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICECONFIGUREWDMIRPDISPATCHCALLBACK)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    WDFDRIVER Driver,
   
    UCHAR MajorFunction,
   
    PFN_WDFDEVICE_WDM_IRP_DISPATCH EvtDeviceWdmIrpDispatch,
   
    WDFCONTEXT DriverContext
    );


__inline
NTSTATUS
WdfDeviceConfigureWdmIrpDispatchCallback(
   
    WDFDEVICE Device,
   
    WDFDRIVER Driver,
   
    UCHAR MajorFunction,
   
    PFN_WDFDEVICE_WDM_IRP_DISPATCH EvtDeviceWdmIrpDispatch,
   
    WDFCONTEXT DriverContext
    )
{
    return ((PFN_WDFDEVICECONFIGUREWDMIRPDISPATCHCALLBACK) WdfFunctions_01033[WdfDeviceConfigureWdmIrpDispatchCallbackTableIndex])(WdfDriverGlobals, Device, Driver, MajorFunction, EvtDeviceWdmIrpDispatch, DriverContext);
}
typedef


POWER_ACTION
(NTAPI *PFN_WDFDEVICEGETSYSTEMPOWERACTION)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device
    );

__inline
POWER_ACTION
WdfDeviceGetSystemPowerAction(
   
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETSYSTEMPOWERACTION) WdfFunctions_01033[WdfDeviceGetSystemPowerActionTableIndex])(WdfDriverGlobals, Device);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICEWDMASSIGNPOWERFRAMEWORKSETTINGS)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PWDF_POWER_FRAMEWORK_SETTINGS PowerFrameworkSettings
    );


__inline
NTSTATUS
WdfDeviceWdmAssignPowerFrameworkSettings(
   
    WDFDEVICE Device,
   
    PWDF_POWER_FRAMEWORK_SETTINGS PowerFrameworkSettings
    )
{
    return ((PFN_WDFDEVICEWDMASSIGNPOWERFRAMEWORKSETTINGS) WdfFunctions_01033[WdfDeviceWdmAssignPowerFrameworkSettingsTableIndex])(WdfDriverGlobals, Device, PowerFrameworkSettings);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICEINITSETRELEASEHARDWAREORDERONFAILURE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    WDF_RELEASE_HARDWARE_ORDER_ON_FAILURE ReleaseHardwareOrderOnFailure
    );

__inline
VOID
WdfDeviceInitSetReleaseHardwareOrderOnFailure(
   
    PWDFDEVICE_INIT DeviceInit,
   
    WDF_RELEASE_HARDWARE_ORDER_ON_FAILURE ReleaseHardwareOrderOnFailure
    )
{
    ((PFN_WDFDEVICEINITSETRELEASEHARDWAREORDERONFAILURE) WdfFunctions_01033[WdfDeviceInitSetReleaseHardwareOrderOnFailureTableIndex])(WdfDriverGlobals, DeviceInit, ReleaseHardwareOrderOnFailure);
}
typedef


VOID
(NTAPI *PFN_WDFDEVICEINITSETIOTYPEEX)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    PWDF_IO_TYPE_CONFIG IoTypeConfig
    );

__inline
VOID
WdfDeviceInitSetIoTypeEx(
   
    PWDFDEVICE_INIT DeviceInit,
   
    PWDF_IO_TYPE_CONFIG IoTypeConfig
    )
{
    ((PFN_WDFDEVICEINITSETIOTYPEEX) WdfFunctions_01033[WdfDeviceInitSetIoTypeExTableIndex])(WdfDriverGlobals, DeviceInit, IoTypeConfig);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICEQUERYPROPERTYEX)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PWDF_DEVICE_PROPERTY_DATA DeviceProperty,
   
    ULONG BufferLength,
   
    PVOID PropertyBuffer,
   
    PULONG RequiredSize,
   
    PDEVPROPTYPE Type
    );


__inline
NTSTATUS
WdfDeviceQueryPropertyEx(
   
    WDFDEVICE Device,
   
    PWDF_DEVICE_PROPERTY_DATA DeviceProperty,
   
    ULONG BufferLength,
   
    PVOID PropertyBuffer,
   
    PULONG RequiredSize,
   
    PDEVPROPTYPE Type
    )
{
    return ((PFN_WDFDEVICEQUERYPROPERTYEX) WdfFunctions_01033[WdfDeviceQueryPropertyExTableIndex])(WdfDriverGlobals, Device, DeviceProperty, BufferLength, PropertyBuffer, RequiredSize, Type);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICEALLOCANDQUERYPROPERTYEX)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PWDF_DEVICE_PROPERTY_DATA DeviceProperty,
   
   
    POOL_TYPE PoolType,
   
    PWDF_OBJECT_ATTRIBUTES PropertyMemoryAttributes,
   
    WDFMEMORY* PropertyMemory,
   
    PDEVPROPTYPE Type
    );


__inline
NTSTATUS
WdfDeviceAllocAndQueryPropertyEx(
   
    WDFDEVICE Device,
   
    PWDF_DEVICE_PROPERTY_DATA DeviceProperty,
   
   
    POOL_TYPE PoolType,
   
    PWDF_OBJECT_ATTRIBUTES PropertyMemoryAttributes,
   
    WDFMEMORY* PropertyMemory,
   
    PDEVPROPTYPE Type
    )
{
    return ((PFN_WDFDEVICEALLOCANDQUERYPROPERTYEX) WdfFunctions_01033[WdfDeviceAllocAndQueryPropertyExTableIndex])(WdfDriverGlobals, Device, DeviceProperty, PoolType, PropertyMemoryAttributes, PropertyMemory, Type);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICEASSIGNPROPERTY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PWDF_DEVICE_PROPERTY_DATA DeviceProperty,
   
    DEVPROPTYPE Type,
   
    ULONG Size,
   
    PVOID Data
    );


__inline
NTSTATUS
WdfDeviceAssignProperty(
   
    WDFDEVICE Device,
   
    PWDF_DEVICE_PROPERTY_DATA DeviceProperty,
   
    DEVPROPTYPE Type,
   
    ULONG Size,
   
    PVOID Data
    )
{
    return ((PFN_WDFDEVICEASSIGNPROPERTY) WdfFunctions_01033[WdfDeviceAssignPropertyTableIndex])(WdfDriverGlobals, Device, DeviceProperty, Type, Size, Data);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDEVICERETRIEVECOMPANIONTARGET)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    WDFCOMPANIONTARGET* CompanionTarget
    );


__inline
NTSTATUS
WdfDeviceRetrieveCompanionTarget(
   
    WDFDEVICE Device,
   
    WDFCOMPANIONTARGET* CompanionTarget
    )
{
    return ((PFN_WDFDEVICERETRIEVECOMPANIONTARGET) WdfFunctions_01033[WdfDeviceRetrieveCompanionTargetTableIndex])(WdfDriverGlobals, Device, CompanionTarget);
}


typedef



NTSTATUS
(NTAPI *PFN_WDFCOLLECTIONCREATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDF_OBJECT_ATTRIBUTES CollectionAttributes,
   
    WDFCOLLECTION* Collection
    );


__inline
NTSTATUS
WdfCollectionCreate(
   
    PWDF_OBJECT_ATTRIBUTES CollectionAttributes,
   
    WDFCOLLECTION* Collection
    )
{
    return ((PFN_WDFCOLLECTIONCREATE) WdfFunctions_01033[WdfCollectionCreateTableIndex])(WdfDriverGlobals, CollectionAttributes, Collection);
}
typedef


ULONG
(NTAPI *PFN_WDFCOLLECTIONGETCOUNT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCOLLECTION Collection
    );

__inline
ULONG
WdfCollectionGetCount(
   
    WDFCOLLECTION Collection
    )
{
    return ((PFN_WDFCOLLECTIONGETCOUNT) WdfFunctions_01033[WdfCollectionGetCountTableIndex])(WdfDriverGlobals, Collection);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFCOLLECTIONADD)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCOLLECTION Collection,
   
    WDFOBJECT Object
    );


__inline
NTSTATUS
WdfCollectionAdd(
   
    WDFCOLLECTION Collection,
   
    WDFOBJECT Object
    )
{
    return ((PFN_WDFCOLLECTIONADD) WdfFunctions_01033[WdfCollectionAddTableIndex])(WdfDriverGlobals, Collection, Object);
}
typedef


VOID
(NTAPI *PFN_WDFCOLLECTIONREMOVE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCOLLECTION Collection,
   
    WDFOBJECT Item
    );

__inline
VOID
WdfCollectionRemove(
   
    WDFCOLLECTION Collection,
   
    WDFOBJECT Item
    )
{
    ((PFN_WDFCOLLECTIONREMOVE) WdfFunctions_01033[WdfCollectionRemoveTableIndex])(WdfDriverGlobals, Collection, Item);
}
typedef


VOID
(NTAPI *PFN_WDFCOLLECTIONREMOVEITEM)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCOLLECTION Collection,
   
    ULONG Index
    );

__inline
VOID
WdfCollectionRemoveItem(
   
    WDFCOLLECTION Collection,
   
    ULONG Index
    )
{
    ((PFN_WDFCOLLECTIONREMOVEITEM) WdfFunctions_01033[WdfCollectionRemoveItemTableIndex])(WdfDriverGlobals, Collection, Index);
}
typedef


WDFOBJECT
(NTAPI *PFN_WDFCOLLECTIONGETITEM)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCOLLECTION Collection,
   
    ULONG Index
    );

__inline
WDFOBJECT
WdfCollectionGetItem(
   
    WDFCOLLECTION Collection,
   
    ULONG Index
    )
{
    return ((PFN_WDFCOLLECTIONGETITEM) WdfFunctions_01033[WdfCollectionGetItemTableIndex])(WdfDriverGlobals, Collection, Index);
}
typedef


WDFOBJECT
(NTAPI *PFN_WDFCOLLECTIONGETFIRSTITEM)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCOLLECTION Collection
    );

__inline
WDFOBJECT
WdfCollectionGetFirstItem(
   
    WDFCOLLECTION Collection
    )
{
    return ((PFN_WDFCOLLECTIONGETFIRSTITEM) WdfFunctions_01033[WdfCollectionGetFirstItemTableIndex])(WdfDriverGlobals, Collection);
}
typedef


WDFOBJECT
(NTAPI *PFN_WDFCOLLECTIONGETLASTITEM)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCOLLECTION Collection
    );

__inline
WDFOBJECT
WdfCollectionGetLastItem(
   
    WDFCOLLECTION Collection
    )
{
    return ((PFN_WDFCOLLECTIONGETLASTITEM) WdfFunctions_01033[WdfCollectionGetLastItemTableIndex])(WdfDriverGlobals, Collection);
}


typedef



VOID
NTAPI
EVT_WDF_DPC(
   
    WDFDPC Dpc
    );
typedef EVT_WDF_DPC *PFN_WDF_DPC;
typedef struct _WDF_DPC_CONFIG {
    ULONG Size;
    PFN_WDF_DPC EvtDpcFunc;
    BOOLEAN AutomaticSerialization;
} WDF_DPC_CONFIG, *PWDF_DPC_CONFIG;
VOID
__inline
WDF_DPC_CONFIG_INIT(
    PWDF_DPC_CONFIG Config,
    PFN_WDF_DPC EvtDpcFunc
    )
{
    RtlZeroMemory(Config, sizeof(WDF_DPC_CONFIG));
    Config->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_DPC_CONFIG < WdfStructureCount) ? WdfStructures[INDEX_WDF_DPC_CONFIG] : (size_t)(-1) ) : sizeof(WDF_DPC_CONFIG) );
    Config->EvtDpcFunc = EvtDpcFunc;
    Config->AutomaticSerialization = TRUE;
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDPCCREATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDF_DPC_CONFIG Config,
   
    PWDF_OBJECT_ATTRIBUTES Attributes,
   
    WDFDPC* Dpc
    );


__inline
NTSTATUS
WdfDpcCreate(
   
    PWDF_DPC_CONFIG Config,
   
    PWDF_OBJECT_ATTRIBUTES Attributes,
   
    WDFDPC* Dpc
    )
{
    return ((PFN_WDFDPCCREATE) WdfFunctions_01033[WdfDpcCreateTableIndex])(WdfDriverGlobals, Config, Attributes, Dpc);
}
typedef


BOOLEAN
(NTAPI *PFN_WDFDPCENQUEUE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDPC Dpc
    );

__inline
BOOLEAN
WdfDpcEnqueue(
   
    WDFDPC Dpc
    )
{
    return ((PFN_WDFDPCENQUEUE) WdfFunctions_01033[WdfDpcEnqueueTableIndex])(WdfDriverGlobals, Dpc);
}
typedef



BOOLEAN
(NTAPI *PFN_WDFDPCCANCEL)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDPC Dpc,
   
    BOOLEAN Wait
    );


__inline
BOOLEAN
WdfDpcCancel(
   
    WDFDPC Dpc,
   
    BOOLEAN Wait
    )
{
    return ((PFN_WDFDPCCANCEL) WdfFunctions_01033[WdfDpcCancelTableIndex])(WdfDriverGlobals, Dpc, Wait);
}
typedef


WDFOBJECT
(NTAPI *PFN_WDFDPCGETPARENTOBJECT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDPC Dpc
    );

__inline
WDFOBJECT
WdfDpcGetParentObject(
   
    WDFDPC Dpc
    )
{
    return ((PFN_WDFDPCGETPARENTOBJECT) WdfFunctions_01033[WdfDpcGetParentObjectTableIndex])(WdfDriverGlobals, Dpc);
}
typedef


PKDPC
(NTAPI *PFN_WDFDPCWDMGETDPC)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDPC Dpc
    );

__inline
PKDPC
WdfDpcWdmGetDpc(
   
    WDFDPC Dpc
    )
{
    return ((PFN_WDFDPCWDMGETDPC) WdfFunctions_01033[WdfDpcWdmGetDpcTableIndex])(WdfDriverGlobals, Dpc);
}


typedef



VOID
NTAPI
EVT_WDF_TIMER(
   
    WDFTIMER Timer
    );
typedef EVT_WDF_TIMER *PFN_WDF_TIMER;
#pragma warning(push)
#pragma warning(disable: 4324)
typedef struct _WDF_TIMER_CONFIG {
    ULONG Size;
    PFN_WDF_TIMER EvtTimerFunc;
    ULONG Period;
    BOOLEAN AutomaticSerialization;
    ULONG TolerableDelay;
    DECLSPEC_ALIGN(8) BOOLEAN UseHighResolutionTimer;
} WDF_TIMER_CONFIG, *PWDF_TIMER_CONFIG;
#pragma warning(pop)
VOID
__inline
WDF_TIMER_CONFIG_INIT(
    PWDF_TIMER_CONFIG Config,
    PFN_WDF_TIMER EvtTimerFunc
    )
{
    RtlZeroMemory(Config, sizeof(WDF_TIMER_CONFIG));
    Config->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_TIMER_CONFIG < WdfStructureCount) ? WdfStructures[INDEX_WDF_TIMER_CONFIG] : (size_t)(-1) ) : sizeof(WDF_TIMER_CONFIG) );
    Config->EvtTimerFunc = EvtTimerFunc;
    Config->Period = 0;
    Config->AutomaticSerialization = TRUE;
    Config->TolerableDelay = 0;
}
VOID
__inline
WDF_TIMER_CONFIG_INIT_PERIODIC(
    PWDF_TIMER_CONFIG Config,
    PFN_WDF_TIMER EvtTimerFunc,
    LONG Period
    )
{
    RtlZeroMemory(Config, sizeof(WDF_TIMER_CONFIG));
    Config->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_TIMER_CONFIG < WdfStructureCount) ? WdfStructures[INDEX_WDF_TIMER_CONFIG] : (size_t)(-1) ) : sizeof(WDF_TIMER_CONFIG) );
    Config->EvtTimerFunc = EvtTimerFunc;
    Config->Period = Period;
    Config->AutomaticSerialization = TRUE;
    Config->TolerableDelay = 0;
}
typedef



NTSTATUS
(NTAPI *PFN_WDFTIMERCREATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDF_TIMER_CONFIG Config,
   
    PWDF_OBJECT_ATTRIBUTES Attributes,
   
    WDFTIMER* Timer
    );


__inline
NTSTATUS
WdfTimerCreate(
   
    PWDF_TIMER_CONFIG Config,
   
    PWDF_OBJECT_ATTRIBUTES Attributes,
   
    WDFTIMER* Timer
    )
{
    return ((PFN_WDFTIMERCREATE) WdfFunctions_01033[WdfTimerCreateTableIndex])(WdfDriverGlobals, Config, Attributes, Timer);
}
typedef


BOOLEAN
(NTAPI *PFN_WDFTIMERSTART)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFTIMER Timer,
   
    LONGLONG DueTime
    );

__inline
BOOLEAN
WdfTimerStart(
   
    WDFTIMER Timer,
   
    LONGLONG DueTime
    )
{
    return ((PFN_WDFTIMERSTART) WdfFunctions_01033[WdfTimerStartTableIndex])(WdfDriverGlobals, Timer, DueTime);
}
typedef



BOOLEAN
(NTAPI *PFN_WDFTIMERSTOP)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFTIMER Timer,
   
    BOOLEAN Wait
    );


__inline
BOOLEAN
WdfTimerStop(
   
    WDFTIMER Timer,
   
    BOOLEAN Wait
    )
{
    return ((PFN_WDFTIMERSTOP) WdfFunctions_01033[WdfTimerStopTableIndex])(WdfDriverGlobals, Timer, Wait);
}
typedef


WDFOBJECT
(NTAPI *PFN_WDFTIMERGETPARENTOBJECT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFTIMER Timer
    );

__inline
WDFOBJECT
WdfTimerGetParentObject(
   
    WDFTIMER Timer
    )
{
    return ((PFN_WDFTIMERGETPARENTOBJECT) WdfFunctions_01033[WdfTimerGetParentObjectTableIndex])(WdfDriverGlobals, Timer);
}


typedef



VOID
NTAPI
EVT_WDF_WORKITEM(
   
    WDFWORKITEM WorkItem
    );
typedef EVT_WDF_WORKITEM *PFN_WDF_WORKITEM;
typedef struct _WDF_WORKITEM_CONFIG {
    ULONG Size;
    PFN_WDF_WORKITEM EvtWorkItemFunc;
    BOOLEAN AutomaticSerialization;
} WDF_WORKITEM_CONFIG, *PWDF_WORKITEM_CONFIG;
VOID
__inline
WDF_WORKITEM_CONFIG_INIT(
    PWDF_WORKITEM_CONFIG Config,
    PFN_WDF_WORKITEM EvtWorkItemFunc
    )
{
    RtlZeroMemory(Config, sizeof(WDF_WORKITEM_CONFIG));
    Config->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_WORKITEM_CONFIG < WdfStructureCount) ? WdfStructures[INDEX_WDF_WORKITEM_CONFIG] : (size_t)(-1) ) : sizeof(WDF_WORKITEM_CONFIG) );
    Config->EvtWorkItemFunc = EvtWorkItemFunc;
    Config->AutomaticSerialization = TRUE;
}
typedef



NTSTATUS
(NTAPI *PFN_WDFWORKITEMCREATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDF_WORKITEM_CONFIG Config,
   
    PWDF_OBJECT_ATTRIBUTES Attributes,
   
    WDFWORKITEM* WorkItem
    );


__inline
NTSTATUS
WdfWorkItemCreate(
   
    PWDF_WORKITEM_CONFIG Config,
   
    PWDF_OBJECT_ATTRIBUTES Attributes,
   
    WDFWORKITEM* WorkItem
    )
{
    return ((PFN_WDFWORKITEMCREATE) WdfFunctions_01033[WdfWorkItemCreateTableIndex])(WdfDriverGlobals, Config, Attributes, WorkItem);
}
typedef


VOID
(NTAPI *PFN_WDFWORKITEMENQUEUE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFWORKITEM WorkItem
    );

__inline
VOID
WdfWorkItemEnqueue(
   
    WDFWORKITEM WorkItem
    )
{
    ((PFN_WDFWORKITEMENQUEUE) WdfFunctions_01033[WdfWorkItemEnqueueTableIndex])(WdfDriverGlobals, WorkItem);
}
typedef


WDFOBJECT
(NTAPI *PFN_WDFWORKITEMGETPARENTOBJECT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFWORKITEM WorkItem
    );

__inline
WDFOBJECT
WdfWorkItemGetParentObject(
   
    WDFWORKITEM WorkItem
    )
{
    return ((PFN_WDFWORKITEMGETPARENTOBJECT) WdfFunctions_01033[WdfWorkItemGetParentObjectTableIndex])(WdfDriverGlobals, WorkItem);
}
typedef


VOID
(NTAPI *PFN_WDFWORKITEMFLUSH)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFWORKITEM WorkItem
    );

__inline
VOID
WdfWorkItemFlush(
   
    WDFWORKITEM WorkItem
    )
{
    ((PFN_WDFWORKITEMFLUSH) WdfFunctions_01033[WdfWorkItemFlushTableIndex])(WdfDriverGlobals, WorkItem);
}


typedef enum _WDF_INTERRUPT_POLARITY {
    WdfInterruptPolarityUnknown = 0,
    WdfInterruptActiveHigh,
    WdfInterruptActiveLow,
} WDF_INTERRUPT_POLARITY, *PWDF_INTERRUPT_POLARITY;
typedef enum _WDF_INTERRUPT_POLICY {
    WdfIrqPolicyMachineDefault = 0,
    WdfIrqPolicyAllCloseProcessors,
    WdfIrqPolicyOneCloseProcessor,
    WdfIrqPolicyAllProcessorsInMachine,
    WdfIrqPolicySpecifiedProcessors,
    WdfIrqPolicySpreadMessagesAcrossAllProcessors,
} WDF_INTERRUPT_POLICY, *PWDF_INTERRUPT_POLICY;
typedef enum _WDF_INTERRUPT_PRIORITY {
    WdfIrqPriorityUndefined = 0,
    WdfIrqPriorityLow,
    WdfIrqPriorityNormal,
    WdfIrqPriorityHigh,
} WDF_INTERRUPT_PRIORITY, *PWDF_INTERRUPT_PRIORITY;
typedef



BOOLEAN
NTAPI
EVT_WDF_INTERRUPT_ISR(
   
    WDFINTERRUPT Interrupt,
   
    ULONG MessageID
    );
typedef EVT_WDF_INTERRUPT_ISR *PFN_WDF_INTERRUPT_ISR;
typedef



BOOLEAN
NTAPI
EVT_WDF_INTERRUPT_SYNCHRONIZE(
   
    WDFINTERRUPT Interrupt,
   
    WDFCONTEXT Context
    );
typedef EVT_WDF_INTERRUPT_SYNCHRONIZE *PFN_WDF_INTERRUPT_SYNCHRONIZE;
typedef



VOID
NTAPI
EVT_WDF_INTERRUPT_DPC(
   
    WDFINTERRUPT Interrupt,
   
    WDFOBJECT AssociatedObject
    );
typedef EVT_WDF_INTERRUPT_DPC *PFN_WDF_INTERRUPT_DPC;
typedef



VOID
NTAPI
EVT_WDF_INTERRUPT_WORKITEM(
   
    WDFINTERRUPT Interrupt,
   
    WDFOBJECT AssociatedObject
    );
typedef EVT_WDF_INTERRUPT_WORKITEM *PFN_WDF_INTERRUPT_WORKITEM;
typedef



NTSTATUS
NTAPI
EVT_WDF_INTERRUPT_ENABLE(
   
    WDFINTERRUPT Interrupt,
   
    WDFDEVICE AssociatedDevice
    );
typedef EVT_WDF_INTERRUPT_ENABLE *PFN_WDF_INTERRUPT_ENABLE;
typedef



NTSTATUS
NTAPI
EVT_WDF_INTERRUPT_DISABLE(
   
    WDFINTERRUPT Interrupt,
   
    WDFDEVICE AssociatedDevice
    );
typedef EVT_WDF_INTERRUPT_DISABLE *PFN_WDF_INTERRUPT_DISABLE;
typedef struct _WDF_INTERRUPT_CONFIG {
    ULONG Size;
    WDFSPINLOCK SpinLock;
    WDF_TRI_STATE ShareVector;
    BOOLEAN FloatingSave;
    BOOLEAN AutomaticSerialization;
    PFN_WDF_INTERRUPT_ISR EvtInterruptIsr;
    PFN_WDF_INTERRUPT_DPC EvtInterruptDpc;
    PFN_WDF_INTERRUPT_ENABLE EvtInterruptEnable;
    PFN_WDF_INTERRUPT_DISABLE EvtInterruptDisable;
    PFN_WDF_INTERRUPT_WORKITEM EvtInterruptWorkItem;
    PCM_PARTIAL_RESOURCE_DESCRIPTOR InterruptRaw;
    PCM_PARTIAL_RESOURCE_DESCRIPTOR InterruptTranslated;
    WDFWAITLOCK WaitLock;
    BOOLEAN PassiveHandling;
    WDF_TRI_STATE ReportInactiveOnPowerDown;
    BOOLEAN CanWakeDevice;
} WDF_INTERRUPT_CONFIG, *PWDF_INTERRUPT_CONFIG;
VOID
__inline
WDF_INTERRUPT_CONFIG_INIT(
    PWDF_INTERRUPT_CONFIG Configuration,
    PFN_WDF_INTERRUPT_ISR EvtInterruptIsr,
    PFN_WDF_INTERRUPT_DPC EvtInterruptDpc
    )
{
    RtlZeroMemory(Configuration, sizeof(WDF_INTERRUPT_CONFIG));
    Configuration->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_INTERRUPT_CONFIG < WdfStructureCount) ? WdfStructures[INDEX_WDF_INTERRUPT_CONFIG] : (size_t)(-1) ) : sizeof(WDF_INTERRUPT_CONFIG) );
    Configuration->ShareVector = WdfUseDefault;
    Configuration->EvtInterruptIsr = EvtInterruptIsr;
    Configuration->EvtInterruptDpc = EvtInterruptDpc;
    Configuration->ReportInactiveOnPowerDown = WdfUseDefault;
}
#pragma warning(push)
#pragma warning(disable: 4324)
typedef struct _WDF_INTERRUPT_INFO {
    ULONG Size;
    ULONG64 Reserved1;
    KAFFINITY TargetProcessorSet;
    ULONG Reserved2;
    ULONG MessageNumber;
    ULONG Vector;
    KIRQL Irql;
    KINTERRUPT_MODE Mode;
    WDF_INTERRUPT_POLARITY Polarity;
    BOOLEAN MessageSignaled;
    UCHAR ShareDisposition;
    DECLSPEC_ALIGN(8) USHORT Group;
} WDF_INTERRUPT_INFO, *PWDF_INTERRUPT_INFO;
#pragma warning(pop)
VOID
__inline
WDF_INTERRUPT_INFO_INIT(
    PWDF_INTERRUPT_INFO Info
    )
{
    RtlZeroMemory(Info, sizeof(WDF_INTERRUPT_INFO));
    Info->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_INTERRUPT_INFO < WdfStructureCount) ? WdfStructures[INDEX_WDF_INTERRUPT_INFO] : (size_t)(-1) ) : sizeof(WDF_INTERRUPT_INFO) );
}
typedef struct _WDF_INTERRUPT_EXTENDED_POLICY {
    ULONG Size;
    WDF_INTERRUPT_POLICY Policy;
    WDF_INTERRUPT_PRIORITY Priority;
    GROUP_AFFINITY TargetProcessorSetAndGroup;
} WDF_INTERRUPT_EXTENDED_POLICY, *PWDF_INTERRUPT_EXTENDED_POLICY;
VOID
__inline
WDF_INTERRUPT_EXTENDED_POLICY_INIT(
    PWDF_INTERRUPT_EXTENDED_POLICY ExtendedPolicy
    )
{
    RtlZeroMemory(ExtendedPolicy, sizeof(WDF_INTERRUPT_EXTENDED_POLICY));
    ExtendedPolicy->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_INTERRUPT_EXTENDED_POLICY < WdfStructureCount) ? WdfStructures[INDEX_WDF_INTERRUPT_EXTENDED_POLICY] : (size_t)(-1) ) : sizeof(WDF_INTERRUPT_EXTENDED_POLICY) );
    ExtendedPolicy->Policy = WdfIrqPolicyMachineDefault;
    ExtendedPolicy->Priority = WdfIrqPriorityUndefined;
}
typedef



NTSTATUS
(NTAPI *PFN_WDFINTERRUPTCREATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PWDF_INTERRUPT_CONFIG Configuration,
   
    PWDF_OBJECT_ATTRIBUTES Attributes,
   
    WDFINTERRUPT* Interrupt
    );


__inline
NTSTATUS
WdfInterruptCreate(
   
    WDFDEVICE Device,
   
    PWDF_INTERRUPT_CONFIG Configuration,
   
    PWDF_OBJECT_ATTRIBUTES Attributes,
   
    WDFINTERRUPT* Interrupt
    )
{
    return ((PFN_WDFINTERRUPTCREATE) WdfFunctions_01033[WdfInterruptCreateTableIndex])(WdfDriverGlobals, Device, Configuration, Attributes, Interrupt);
}
typedef

BOOLEAN
(NTAPI *PFN_WDFINTERRUPTQUEUEDPCFORISR)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFINTERRUPT Interrupt
    );
__inline
BOOLEAN
WdfInterruptQueueDpcForIsr(
   
    WDFINTERRUPT Interrupt
    )
{
    return ((PFN_WDFINTERRUPTQUEUEDPCFORISR) WdfFunctions_01033[WdfInterruptQueueDpcForIsrTableIndex])(WdfDriverGlobals, Interrupt);
}
typedef

BOOLEAN
(NTAPI *PFN_WDFINTERRUPTQUEUEWORKITEMFORISR)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFINTERRUPT Interrupt
    );
__inline
BOOLEAN
WdfInterruptQueueWorkItemForIsr(
   
    WDFINTERRUPT Interrupt
    )
{
    return ((PFN_WDFINTERRUPTQUEUEWORKITEMFORISR) WdfFunctions_01033[WdfInterruptQueueWorkItemForIsrTableIndex])(WdfDriverGlobals, Interrupt);
}
typedef


BOOLEAN
(NTAPI *PFN_WDFINTERRUPTSYNCHRONIZE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFINTERRUPT Interrupt,
   
    PFN_WDF_INTERRUPT_SYNCHRONIZE Callback,
   
    WDFCONTEXT Context
    );

__inline
BOOLEAN
WdfInterruptSynchronize(
   
    WDFINTERRUPT Interrupt,
   
    PFN_WDF_INTERRUPT_SYNCHRONIZE Callback,
   
    WDFCONTEXT Context
    )
{
    return ((PFN_WDFINTERRUPTSYNCHRONIZE) WdfFunctions_01033[WdfInterruptSynchronizeTableIndex])(WdfDriverGlobals, Interrupt, Callback, Context);
}
typedef


VOID
(NTAPI *PFN_WDFINTERRUPTACQUIRELOCK)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
   
   
    WDFINTERRUPT Interrupt
    );

__inline
VOID
WdfInterruptAcquireLock(
   
   
   
    WDFINTERRUPT Interrupt
    )
{
    ((PFN_WDFINTERRUPTACQUIRELOCK) WdfFunctions_01033[WdfInterruptAcquireLockTableIndex])(WdfDriverGlobals, Interrupt);
}
typedef


VOID
(NTAPI *PFN_WDFINTERRUPTRELEASELOCK)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
   
   
    WDFINTERRUPT Interrupt
    );

__inline
VOID
WdfInterruptReleaseLock(
   
   
   
    WDFINTERRUPT Interrupt
    )
{
    ((PFN_WDFINTERRUPTRELEASELOCK) WdfFunctions_01033[WdfInterruptReleaseLockTableIndex])(WdfDriverGlobals, Interrupt);
}
typedef


VOID
(NTAPI *PFN_WDFINTERRUPTENABLE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFINTERRUPT Interrupt
    );

__inline
VOID
WdfInterruptEnable(
   
    WDFINTERRUPT Interrupt
    )
{
    ((PFN_WDFINTERRUPTENABLE) WdfFunctions_01033[WdfInterruptEnableTableIndex])(WdfDriverGlobals, Interrupt);
}
typedef


VOID
(NTAPI *PFN_WDFINTERRUPTDISABLE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFINTERRUPT Interrupt
    );

__inline
VOID
WdfInterruptDisable(
   
    WDFINTERRUPT Interrupt
    )
{
    ((PFN_WDFINTERRUPTDISABLE) WdfFunctions_01033[WdfInterruptDisableTableIndex])(WdfDriverGlobals, Interrupt);
}
typedef


PKINTERRUPT
(NTAPI *PFN_WDFINTERRUPTWDMGETINTERRUPT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFINTERRUPT Interrupt
    );

__inline
PKINTERRUPT
WdfInterruptWdmGetInterrupt(
   
    WDFINTERRUPT Interrupt
    )
{
    return ((PFN_WDFINTERRUPTWDMGETINTERRUPT) WdfFunctions_01033[WdfInterruptWdmGetInterruptTableIndex])(WdfDriverGlobals, Interrupt);
}
typedef


VOID
(NTAPI *PFN_WDFINTERRUPTGETINFO)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFINTERRUPT Interrupt,
   
    PWDF_INTERRUPT_INFO Info
    );

__inline
VOID
WdfInterruptGetInfo(
   
    WDFINTERRUPT Interrupt,
   
    PWDF_INTERRUPT_INFO Info
    )
{
    ((PFN_WDFINTERRUPTGETINFO) WdfFunctions_01033[WdfInterruptGetInfoTableIndex])(WdfDriverGlobals, Interrupt, Info);
}
typedef


VOID
(NTAPI *PFN_WDFINTERRUPTSETPOLICY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFINTERRUPT Interrupt,
   
    WDF_INTERRUPT_POLICY Policy,
   
    WDF_INTERRUPT_PRIORITY Priority,
   
    KAFFINITY TargetProcessorSet
    );

__inline
VOID
WdfInterruptSetPolicy(
   
    WDFINTERRUPT Interrupt,
   
    WDF_INTERRUPT_POLICY Policy,
   
    WDF_INTERRUPT_PRIORITY Priority,
   
    KAFFINITY TargetProcessorSet
    )
{
    ((PFN_WDFINTERRUPTSETPOLICY) WdfFunctions_01033[WdfInterruptSetPolicyTableIndex])(WdfDriverGlobals, Interrupt, Policy, Priority, TargetProcessorSet);
}
typedef


VOID
(NTAPI *PFN_WDFINTERRUPTSETEXTENDEDPOLICY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFINTERRUPT Interrupt,
   
    PWDF_INTERRUPT_EXTENDED_POLICY PolicyAndGroup
    );

__inline
VOID
WdfInterruptSetExtendedPolicy(
   
    WDFINTERRUPT Interrupt,
   
    PWDF_INTERRUPT_EXTENDED_POLICY PolicyAndGroup
    )
{
    ((PFN_WDFINTERRUPTSETEXTENDEDPOLICY) WdfFunctions_01033[WdfInterruptSetExtendedPolicyTableIndex])(WdfDriverGlobals, Interrupt, PolicyAndGroup);
}
typedef

WDFDEVICE
(NTAPI *PFN_WDFINTERRUPTGETDEVICE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFINTERRUPT Interrupt
    );
__inline
WDFDEVICE
WdfInterruptGetDevice(
   
    WDFINTERRUPT Interrupt
    )
{
    return ((PFN_WDFINTERRUPTGETDEVICE) WdfFunctions_01033[WdfInterruptGetDeviceTableIndex])(WdfDriverGlobals, Interrupt);
}
typedef




BOOLEAN
(NTAPI *PFN_WDFINTERRUPTTRYTOACQUIRELOCK)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
   
   
    WDFINTERRUPT Interrupt
    );



__inline
BOOLEAN
WdfInterruptTryToAcquireLock(
   
   
   
    WDFINTERRUPT Interrupt
    )
{
    return ((PFN_WDFINTERRUPTTRYTOACQUIRELOCK) WdfFunctions_01033[WdfInterruptTryToAcquireLockTableIndex])(WdfDriverGlobals, Interrupt);
}
typedef


VOID
(NTAPI *PFN_WDFINTERRUPTREPORTACTIVE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFINTERRUPT Interrupt
    );

__inline
VOID
WdfInterruptReportActive(
   
    WDFINTERRUPT Interrupt
    )
{
    ((PFN_WDFINTERRUPTREPORTACTIVE) WdfFunctions_01033[WdfInterruptReportActiveTableIndex])(WdfDriverGlobals, Interrupt);
}
typedef


VOID
(NTAPI *PFN_WDFINTERRUPTREPORTINACTIVE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFINTERRUPT Interrupt
    );

__inline
VOID
WdfInterruptReportInactive(
   
    WDFINTERRUPT Interrupt
    )
{
    ((PFN_WDFINTERRUPTREPORTINACTIVE) WdfFunctions_01033[WdfInterruptReportInactiveTableIndex])(WdfDriverGlobals, Interrupt);
}


typedef


VOID
(NTAPI *PFN_WDFIORESOURCEREQUIREMENTSLISTSETSLOTNUMBER)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIORESREQLIST RequirementsList,
   
    ULONG SlotNumber
    );

__inline
VOID
WdfIoResourceRequirementsListSetSlotNumber(
   
    WDFIORESREQLIST RequirementsList,
   
    ULONG SlotNumber
    )
{
    ((PFN_WDFIORESOURCEREQUIREMENTSLISTSETSLOTNUMBER) WdfFunctions_01033[WdfIoResourceRequirementsListSetSlotNumberTableIndex])(WdfDriverGlobals, RequirementsList, SlotNumber);
}
typedef


VOID
(NTAPI *PFN_WDFIORESOURCEREQUIREMENTSLISTSETINTERFACETYPE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIORESREQLIST RequirementsList,
   
   
    INTERFACE_TYPE InterfaceType
    );

__inline
VOID
WdfIoResourceRequirementsListSetInterfaceType(
   
    WDFIORESREQLIST RequirementsList,
   
   
    INTERFACE_TYPE InterfaceType
    )
{
    ((PFN_WDFIORESOURCEREQUIREMENTSLISTSETINTERFACETYPE) WdfFunctions_01033[WdfIoResourceRequirementsListSetInterfaceTypeTableIndex])(WdfDriverGlobals, RequirementsList, InterfaceType);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIORESOURCEREQUIREMENTSLISTAPPENDIORESLIST)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIORESREQLIST RequirementsList,
   
    WDFIORESLIST IoResList
    );


__inline
NTSTATUS
WdfIoResourceRequirementsListAppendIoResList(
   
    WDFIORESREQLIST RequirementsList,
   
    WDFIORESLIST IoResList
    )
{
    return ((PFN_WDFIORESOURCEREQUIREMENTSLISTAPPENDIORESLIST) WdfFunctions_01033[WdfIoResourceRequirementsListAppendIoResListTableIndex])(WdfDriverGlobals, RequirementsList, IoResList);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIORESOURCEREQUIREMENTSLISTINSERTIORESLIST)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIORESREQLIST RequirementsList,
   
    WDFIORESLIST IoResList,
   
    ULONG Index
    );


__inline
NTSTATUS
WdfIoResourceRequirementsListInsertIoResList(
   
    WDFIORESREQLIST RequirementsList,
   
    WDFIORESLIST IoResList,
   
    ULONG Index
    )
{
    return ((PFN_WDFIORESOURCEREQUIREMENTSLISTINSERTIORESLIST) WdfFunctions_01033[WdfIoResourceRequirementsListInsertIoResListTableIndex])(WdfDriverGlobals, RequirementsList, IoResList, Index);
}
typedef


ULONG
(NTAPI *PFN_WDFIORESOURCEREQUIREMENTSLISTGETCOUNT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIORESREQLIST RequirementsList
    );

__inline
ULONG
WdfIoResourceRequirementsListGetCount(
   
    WDFIORESREQLIST RequirementsList
    )
{
    return ((PFN_WDFIORESOURCEREQUIREMENTSLISTGETCOUNT) WdfFunctions_01033[WdfIoResourceRequirementsListGetCountTableIndex])(WdfDriverGlobals, RequirementsList);
}
typedef


WDFIORESLIST
(NTAPI *PFN_WDFIORESOURCEREQUIREMENTSLISTGETIORESLIST)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIORESREQLIST RequirementsList,
   
    ULONG Index
    );

__inline
WDFIORESLIST
WdfIoResourceRequirementsListGetIoResList(
   
    WDFIORESREQLIST RequirementsList,
   
    ULONG Index
    )
{
    return ((PFN_WDFIORESOURCEREQUIREMENTSLISTGETIORESLIST) WdfFunctions_01033[WdfIoResourceRequirementsListGetIoResListTableIndex])(WdfDriverGlobals, RequirementsList, Index);
}
typedef


VOID
(NTAPI *PFN_WDFIORESOURCEREQUIREMENTSLISTREMOVE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIORESREQLIST RequirementsList,
   
    ULONG Index
    );

__inline
VOID
WdfIoResourceRequirementsListRemove(
   
    WDFIORESREQLIST RequirementsList,
   
    ULONG Index
    )
{
    ((PFN_WDFIORESOURCEREQUIREMENTSLISTREMOVE) WdfFunctions_01033[WdfIoResourceRequirementsListRemoveTableIndex])(WdfDriverGlobals, RequirementsList, Index);
}
typedef


VOID
(NTAPI *PFN_WDFIORESOURCEREQUIREMENTSLISTREMOVEBYIORESLIST)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIORESREQLIST RequirementsList,
   
    WDFIORESLIST IoResList
    );

__inline
VOID
WdfIoResourceRequirementsListRemoveByIoResList(
   
    WDFIORESREQLIST RequirementsList,
   
    WDFIORESLIST IoResList
    )
{
    ((PFN_WDFIORESOURCEREQUIREMENTSLISTREMOVEBYIORESLIST) WdfFunctions_01033[WdfIoResourceRequirementsListRemoveByIoResListTableIndex])(WdfDriverGlobals, RequirementsList, IoResList);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIORESOURCELISTCREATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIORESREQLIST RequirementsList,
   
    PWDF_OBJECT_ATTRIBUTES Attributes,
   
    WDFIORESLIST* ResourceList
    );


__inline
NTSTATUS
WdfIoResourceListCreate(
   
    WDFIORESREQLIST RequirementsList,
   
    PWDF_OBJECT_ATTRIBUTES Attributes,
   
    WDFIORESLIST* ResourceList
    )
{
    return ((PFN_WDFIORESOURCELISTCREATE) WdfFunctions_01033[WdfIoResourceListCreateTableIndex])(WdfDriverGlobals, RequirementsList, Attributes, ResourceList);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIORESOURCELISTAPPENDDESCRIPTOR)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIORESLIST ResourceList,
   
    PIO_RESOURCE_DESCRIPTOR Descriptor
    );


__inline
NTSTATUS
WdfIoResourceListAppendDescriptor(
   
    WDFIORESLIST ResourceList,
   
    PIO_RESOURCE_DESCRIPTOR Descriptor
    )
{
    return ((PFN_WDFIORESOURCELISTAPPENDDESCRIPTOR) WdfFunctions_01033[WdfIoResourceListAppendDescriptorTableIndex])(WdfDriverGlobals, ResourceList, Descriptor);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIORESOURCELISTINSERTDESCRIPTOR)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIORESLIST ResourceList,
   
    PIO_RESOURCE_DESCRIPTOR Descriptor,
   
    ULONG Index
    );


__inline
NTSTATUS
WdfIoResourceListInsertDescriptor(
   
    WDFIORESLIST ResourceList,
   
    PIO_RESOURCE_DESCRIPTOR Descriptor,
   
    ULONG Index
    )
{
    return ((PFN_WDFIORESOURCELISTINSERTDESCRIPTOR) WdfFunctions_01033[WdfIoResourceListInsertDescriptorTableIndex])(WdfDriverGlobals, ResourceList, Descriptor, Index);
}
typedef


VOID
(NTAPI *PFN_WDFIORESOURCELISTUPDATEDESCRIPTOR)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIORESLIST ResourceList,
   
    PIO_RESOURCE_DESCRIPTOR Descriptor,
   
    ULONG Index
    );

__inline
VOID
WdfIoResourceListUpdateDescriptor(
   
    WDFIORESLIST ResourceList,
   
    PIO_RESOURCE_DESCRIPTOR Descriptor,
   
    ULONG Index
    )
{
    ((PFN_WDFIORESOURCELISTUPDATEDESCRIPTOR) WdfFunctions_01033[WdfIoResourceListUpdateDescriptorTableIndex])(WdfDriverGlobals, ResourceList, Descriptor, Index);
}
typedef


ULONG
(NTAPI *PFN_WDFIORESOURCELISTGETCOUNT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIORESLIST ResourceList
    );

__inline
ULONG
WdfIoResourceListGetCount(
   
    WDFIORESLIST ResourceList
    )
{
    return ((PFN_WDFIORESOURCELISTGETCOUNT) WdfFunctions_01033[WdfIoResourceListGetCountTableIndex])(WdfDriverGlobals, ResourceList);
}
typedef


PIO_RESOURCE_DESCRIPTOR
(NTAPI *PFN_WDFIORESOURCELISTGETDESCRIPTOR)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIORESLIST ResourceList,
   
    ULONG Index
    );

__inline
PIO_RESOURCE_DESCRIPTOR
WdfIoResourceListGetDescriptor(
   
    WDFIORESLIST ResourceList,
   
    ULONG Index
    )
{
    return ((PFN_WDFIORESOURCELISTGETDESCRIPTOR) WdfFunctions_01033[WdfIoResourceListGetDescriptorTableIndex])(WdfDriverGlobals, ResourceList, Index);
}
typedef


VOID
(NTAPI *PFN_WDFIORESOURCELISTREMOVE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIORESLIST ResourceList,
   
    ULONG Index
    );

__inline
VOID
WdfIoResourceListRemove(
   
    WDFIORESLIST ResourceList,
   
    ULONG Index
    )
{
    ((PFN_WDFIORESOURCELISTREMOVE) WdfFunctions_01033[WdfIoResourceListRemoveTableIndex])(WdfDriverGlobals, ResourceList, Index);
}
typedef


VOID
(NTAPI *PFN_WDFIORESOURCELISTREMOVEBYDESCRIPTOR)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIORESLIST ResourceList,
   
    PIO_RESOURCE_DESCRIPTOR Descriptor
    );

__inline
VOID
WdfIoResourceListRemoveByDescriptor(
   
    WDFIORESLIST ResourceList,
   
    PIO_RESOURCE_DESCRIPTOR Descriptor
    )
{
    ((PFN_WDFIORESOURCELISTREMOVEBYDESCRIPTOR) WdfFunctions_01033[WdfIoResourceListRemoveByDescriptorTableIndex])(WdfDriverGlobals, ResourceList, Descriptor);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFCMRESOURCELISTAPPENDDESCRIPTOR)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCMRESLIST List,
   
    PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor
    );


__inline
NTSTATUS
WdfCmResourceListAppendDescriptor(
   
    WDFCMRESLIST List,
   
    PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor
    )
{
    return ((PFN_WDFCMRESOURCELISTAPPENDDESCRIPTOR) WdfFunctions_01033[WdfCmResourceListAppendDescriptorTableIndex])(WdfDriverGlobals, List, Descriptor);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFCMRESOURCELISTINSERTDESCRIPTOR)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCMRESLIST List,
   
    PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor,
   
    ULONG Index
    );


__inline
NTSTATUS
WdfCmResourceListInsertDescriptor(
   
    WDFCMRESLIST List,
   
    PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor,
   
    ULONG Index
    )
{
    return ((PFN_WDFCMRESOURCELISTINSERTDESCRIPTOR) WdfFunctions_01033[WdfCmResourceListInsertDescriptorTableIndex])(WdfDriverGlobals, List, Descriptor, Index);
}
typedef


ULONG
(NTAPI *PFN_WDFCMRESOURCELISTGETCOUNT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCMRESLIST List
    );

__inline
ULONG
WdfCmResourceListGetCount(
   
    WDFCMRESLIST List
    )
{
    return ((PFN_WDFCMRESOURCELISTGETCOUNT) WdfFunctions_01033[WdfCmResourceListGetCountTableIndex])(WdfDriverGlobals, List);
}
typedef


PCM_PARTIAL_RESOURCE_DESCRIPTOR
(NTAPI *PFN_WDFCMRESOURCELISTGETDESCRIPTOR)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCMRESLIST List,
   
    ULONG Index
    );

__inline
PCM_PARTIAL_RESOURCE_DESCRIPTOR
WdfCmResourceListGetDescriptor(
   
    WDFCMRESLIST List,
   
    ULONG Index
    )
{
    return ((PFN_WDFCMRESOURCELISTGETDESCRIPTOR) WdfFunctions_01033[WdfCmResourceListGetDescriptorTableIndex])(WdfDriverGlobals, List, Index);
}
typedef


VOID
(NTAPI *PFN_WDFCMRESOURCELISTREMOVE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCMRESLIST List,
   
    ULONG Index
    );

__inline
VOID
WdfCmResourceListRemove(
   
    WDFCMRESLIST List,
   
    ULONG Index
    )
{
    ((PFN_WDFCMRESOURCELISTREMOVE) WdfFunctions_01033[WdfCmResourceListRemoveTableIndex])(WdfDriverGlobals, List, Index);
}
typedef


VOID
(NTAPI *PFN_WDFCMRESOURCELISTREMOVEBYDESCRIPTOR)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCMRESLIST List,
   
    PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor
    );

__inline
VOID
WdfCmResourceListRemoveByDescriptor(
   
    WDFCMRESLIST List,
   
    PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor
    )
{
    ((PFN_WDFCMRESOURCELISTREMOVEBYDESCRIPTOR) WdfFunctions_01033[WdfCmResourceListRemoveByDescriptorTableIndex])(WdfDriverGlobals, List, Descriptor);
}


typedef enum _WDF_REQUEST_TYPE {
    WdfRequestTypeCreate = 0x0,
    WdfRequestTypeCreateNamedPipe = 0x1,
    WdfRequestTypeClose = 0x2,
    WdfRequestTypeRead = 0x3,
    WdfRequestTypeWrite = 0x4,
    WdfRequestTypeQueryInformation = 0x5,
    WdfRequestTypeSetInformation = 0x6,
    WdfRequestTypeQueryEA = 0x7,
    WdfRequestTypeSetEA = 0x8,
    WdfRequestTypeFlushBuffers = 0x9,
    WdfRequestTypeQueryVolumeInformation = 0xa,
    WdfRequestTypeSetVolumeInformation = 0xb,
    WdfRequestTypeDirectoryControl = 0xc,
    WdfRequestTypeFileSystemControl = 0xd,
    WdfRequestTypeDeviceControl = 0xe,
    WdfRequestTypeDeviceControlInternal = 0xf,
    WdfRequestTypeShutdown = 0x10,
    WdfRequestTypeLockControl = 0x11,
    WdfRequestTypeCleanup = 0x12,
    WdfRequestTypeCreateMailSlot = 0x13,
    WdfRequestTypeQuerySecurity = 0x14,
    WdfRequestTypeSetSecurity = 0x15,
    WdfRequestTypePower = 0x16,
    WdfRequestTypeSystemControl = 0x17,
    WdfRequestTypeDeviceChange = 0x18,
    WdfRequestTypeQueryQuota = 0x19,
    WdfRequestTypeSetQuota = 0x1A,
    WdfRequestTypePnp = 0x1B,
    WdfRequestTypeOther =0x1C,
    WdfRequestTypeUsb = 0x40,
    WdfRequestTypeNoFormat = 0xFF,
    WdfRequestTypeMax,
} WDF_REQUEST_TYPE;
typedef enum _WDF_REQUEST_REUSE_FLAGS {
    WDF_REQUEST_REUSE_NO_FLAGS = 0x00000000,
    WDF_REQUEST_REUSE_SET_NEW_IRP = 0x00000001,
} WDF_REQUEST_REUSE_FLAGS;
typedef enum _WDF_REQUEST_STOP_ACTION_FLAGS {
    WdfRequestStopActionInvalid = 0,
    WdfRequestStopActionSuspend = 0x01,
    WdfRequestStopActionPurge = 0x2,
    WdfRequestStopRequestCancelable = 0x10000000,
} WDF_REQUEST_STOP_ACTION_FLAGS;
typedef enum _WDF_REQUEST_SEND_OPTIONS_FLAGS {
    WDF_REQUEST_SEND_OPTION_TIMEOUT = 0x00000001,
    WDF_REQUEST_SEND_OPTION_SYNCHRONOUS = 0x00000002,
    WDF_REQUEST_SEND_OPTION_IGNORE_TARGET_STATE = 0x00000004,
    WDF_REQUEST_SEND_OPTION_SEND_AND_FORGET = 0x00000008,
    WDF_REQUEST_SEND_OPTION_IMPERSONATE_CLIENT = 0x00010000,
    WDF_REQUEST_SEND_OPTION_IMPERSONATION_IGNORE_FAILURE = 0x00020000,
} WDF_REQUEST_SEND_OPTIONS_FLAGS;
typedef



VOID
NTAPI
EVT_WDF_REQUEST_CANCEL(
   
    WDFREQUEST Request
    );
typedef EVT_WDF_REQUEST_CANCEL *PFN_WDF_REQUEST_CANCEL;
typedef struct _WDF_REQUEST_PARAMETERS {
    USHORT Size;
    UCHAR MinorFunction;
    WDF_REQUEST_TYPE Type;
    union {
        struct {
            PIO_SECURITY_CONTEXT SecurityContext;
            ULONG Options;
            USHORT POINTER_ALIGNMENT FileAttributes;
            USHORT ShareAccess;
            ULONG POINTER_ALIGNMENT EaLength;
        } Create;
        struct {
            size_t Length;
            ULONG POINTER_ALIGNMENT Key;
            LONGLONG DeviceOffset;
        } Read;
        struct {
            size_t Length;
            ULONG POINTER_ALIGNMENT Key;
            LONGLONG DeviceOffset;
        } Write;
        struct {
            size_t OutputBufferLength;
            size_t POINTER_ALIGNMENT InputBufferLength;
            ULONG POINTER_ALIGNMENT IoControlCode;
            PVOID Type3InputBuffer;
        } DeviceIoControl;
        struct {
            PVOID Arg1;
            PVOID Arg2;
            ULONG POINTER_ALIGNMENT IoControlCode;
            PVOID Arg4;
        } Others;
    } Parameters;
} WDF_REQUEST_PARAMETERS, *PWDF_REQUEST_PARAMETERS;
VOID
__inline
WDF_REQUEST_PARAMETERS_INIT(
    PWDF_REQUEST_PARAMETERS Parameters
    )
{
    RtlZeroMemory(Parameters, sizeof(WDF_REQUEST_PARAMETERS));
    Parameters->Size = (USHORT)(ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_REQUEST_PARAMETERS < WdfStructureCount) ? WdfStructures[INDEX_WDF_REQUEST_PARAMETERS] : (size_t)(-1) ) : sizeof(WDF_REQUEST_PARAMETERS) );
}
typedef struct _WDF_USB_REQUEST_COMPLETION_PARAMS *PWDF_USB_REQUEST_COMPLETION_PARAMS;
typedef struct _WDF_REQUEST_COMPLETION_PARAMS {
    ULONG Size;
    WDF_REQUEST_TYPE Type;
    IO_STATUS_BLOCK IoStatus;
    union {
        struct {
            WDFMEMORY Buffer;
            size_t Length;
            size_t Offset;
        } Write;
        struct {
            WDFMEMORY Buffer;
            size_t Length;
            size_t Offset;
        } Read;
        struct {
            ULONG IoControlCode;
            struct {
                WDFMEMORY Buffer;
                size_t Offset;
            } Input;
            struct {
                WDFMEMORY Buffer;
                size_t Offset;
                size_t Length;
            } Output;
        } Ioctl;
        struct {
            union {
                PVOID Ptr;
                ULONG_PTR Value;
            } Argument1;
            union {
                PVOID Ptr;
                ULONG_PTR Value;
            } Argument2;
            union {
                PVOID Ptr;
                ULONG_PTR Value;
            } Argument3;
            union {
                PVOID Ptr;
                ULONG_PTR Value;
            } Argument4;
        } Others;
        struct {
            PWDF_USB_REQUEST_COMPLETION_PARAMS Completion;
        } Usb;
    } Parameters;
} WDF_REQUEST_COMPLETION_PARAMS, *PWDF_REQUEST_COMPLETION_PARAMS;
VOID
__inline
WDF_REQUEST_COMPLETION_PARAMS_INIT(
    PWDF_REQUEST_COMPLETION_PARAMS Params
    )
{
    RtlZeroMemory(Params, sizeof(WDF_REQUEST_COMPLETION_PARAMS));
    Params->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_REQUEST_COMPLETION_PARAMS < WdfStructureCount) ? WdfStructures[INDEX_WDF_REQUEST_COMPLETION_PARAMS] : (size_t)(-1) ) : sizeof(WDF_REQUEST_COMPLETION_PARAMS) );
    Params->Type = WdfRequestTypeNoFormat;
}
typedef


VOID
NTAPI
EVT_WDF_REQUEST_COMPLETION_ROUTINE(
   
    WDFREQUEST Request,
   
    WDFIOTARGET Target,
   
    PWDF_REQUEST_COMPLETION_PARAMS Params,
   
    WDFCONTEXT Context
    );
typedef EVT_WDF_REQUEST_COMPLETION_ROUTINE *PFN_WDF_REQUEST_COMPLETION_ROUTINE;
typedef struct _WDF_REQUEST_REUSE_PARAMS {
    ULONG Size;
    ULONG Flags;
    NTSTATUS Status;
    PIRP NewIrp;
} WDF_REQUEST_REUSE_PARAMS, *PWDF_REQUEST_REUSE_PARAMS;
VOID
__inline
WDF_REQUEST_REUSE_PARAMS_INIT(
    PWDF_REQUEST_REUSE_PARAMS Params,
    ULONG Flags,
    NTSTATUS Status
    )
{
    RtlZeroMemory(Params, sizeof(WDF_REQUEST_REUSE_PARAMS));
    Params->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_REQUEST_REUSE_PARAMS < WdfStructureCount) ? WdfStructures[INDEX_WDF_REQUEST_REUSE_PARAMS] : (size_t)(-1) ) : sizeof(WDF_REQUEST_REUSE_PARAMS) );
    Params->Flags = Flags;
    Params->Status = Status;
}
VOID
__inline
WDF_REQUEST_REUSE_PARAMS_SET_NEW_IRP(
    PWDF_REQUEST_REUSE_PARAMS Params,
    PIRP NewIrp
    )
{
    Params->Flags |= WDF_REQUEST_REUSE_SET_NEW_IRP;
    Params->NewIrp = NewIrp;
}
typedef struct _WDF_REQUEST_SEND_OPTIONS {
    ULONG Size;
    ULONG Flags;
    LONGLONG Timeout;
} WDF_REQUEST_SEND_OPTIONS, *PWDF_REQUEST_SEND_OPTIONS;
VOID
__inline
WDF_REQUEST_SEND_OPTIONS_INIT(
    PWDF_REQUEST_SEND_OPTIONS Options,
    ULONG Flags
    )
{
    RtlZeroMemory(Options, sizeof(WDF_REQUEST_SEND_OPTIONS));
    Options->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_REQUEST_SEND_OPTIONS < WdfStructureCount) ? WdfStructures[INDEX_WDF_REQUEST_SEND_OPTIONS] : (size_t)(-1) ) : sizeof(WDF_REQUEST_SEND_OPTIONS) );
    Options->Flags = Flags;
}
VOID
__inline
WDF_REQUEST_SEND_OPTIONS_SET_TIMEOUT(
    PWDF_REQUEST_SEND_OPTIONS Options,
    LONGLONG Timeout
    )
{
    Options->Flags |= WDF_REQUEST_SEND_OPTION_TIMEOUT;
    Options->Timeout = Timeout;
}
typedef enum _WDF_REQUEST_FORWARD_OPTIONS_FLAGS {
    WDF_REQUEST_FORWARD_OPTION_SEND_AND_FORGET = 0x00000001
} WDF_REQUEST_FORWARD_OPTIONS_FLAGS;
typedef struct _WDF_REQUEST_FORWARD_OPTIONS {
    ULONG Size;
    ULONG Flags;
} WDF_REQUEST_FORWARD_OPTIONS, *PWDF_REQUEST_FORWARD_OPTIONS;
VOID
__inline
WDF_REQUEST_FORWARD_OPTIONS_INIT(
    PWDF_REQUEST_FORWARD_OPTIONS ForwardOptions
    )
{
    RtlZeroMemory(ForwardOptions, sizeof(WDF_REQUEST_FORWARD_OPTIONS));
    ForwardOptions->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_REQUEST_FORWARD_OPTIONS < WdfStructureCount) ? WdfStructures[INDEX_WDF_REQUEST_FORWARD_OPTIONS] : (size_t)(-1) ) : sizeof(WDF_REQUEST_FORWARD_OPTIONS) );
    ForwardOptions->Flags |= WDF_REQUEST_FORWARD_OPTION_SEND_AND_FORGET;
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREQUESTCREATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDF_OBJECT_ATTRIBUTES RequestAttributes,
   
    WDFIOTARGET IoTarget,
   
    WDFREQUEST* Request
    );


__inline
NTSTATUS
WdfRequestCreate(
   
    PWDF_OBJECT_ATTRIBUTES RequestAttributes,
   
    WDFIOTARGET IoTarget,
   
    WDFREQUEST* Request
    )
{
    return ((PFN_WDFREQUESTCREATE) WdfFunctions_01033[WdfRequestCreateTableIndex])(WdfDriverGlobals, RequestAttributes, IoTarget, Request);
}
typedef


ULONG
(NTAPI *PFN_WDFREQUESTGETREQUESTORPROCESSID)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request
    );

__inline
ULONG
WdfRequestGetRequestorProcessId(
   
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTGETREQUESTORPROCESSID) WdfFunctions_01033[WdfRequestGetRequestorProcessIdTableIndex])(WdfDriverGlobals, Request);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREQUESTCREATEFROMIRP)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDF_OBJECT_ATTRIBUTES RequestAttributes,
   
    PIRP Irp,
   
    BOOLEAN RequestFreesIrp,
   
    WDFREQUEST* Request
    );


__inline
NTSTATUS
WdfRequestCreateFromIrp(
   
    PWDF_OBJECT_ATTRIBUTES RequestAttributes,
   
    PIRP Irp,
   
    BOOLEAN RequestFreesIrp,
   
    WDFREQUEST* Request
    )
{
    return ((PFN_WDFREQUESTCREATEFROMIRP) WdfFunctions_01033[WdfRequestCreateFromIrpTableIndex])(WdfDriverGlobals, RequestAttributes, Irp, RequestFreesIrp, Request);
}
typedef


NTSTATUS
(NTAPI *PFN_WDFREQUESTREUSE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    PWDF_REQUEST_REUSE_PARAMS ReuseParams
    );

__inline
NTSTATUS
WdfRequestReuse(
   
    WDFREQUEST Request,
   
    PWDF_REQUEST_REUSE_PARAMS ReuseParams
    )
{
    return ((PFN_WDFREQUESTREUSE) WdfFunctions_01033[WdfRequestReuseTableIndex])(WdfDriverGlobals, Request, ReuseParams);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREQUESTCHANGETARGET)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    WDFIOTARGET IoTarget
    );


__inline
NTSTATUS
WdfRequestChangeTarget(
   
    WDFREQUEST Request,
   
    WDFIOTARGET IoTarget
    )
{
    return ((PFN_WDFREQUESTCHANGETARGET) WdfFunctions_01033[WdfRequestChangeTargetTableIndex])(WdfDriverGlobals, Request, IoTarget);
}
typedef


VOID
(NTAPI *PFN_WDFREQUESTFORMATREQUESTUSINGCURRENTTYPE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request
    );

__inline
VOID
WdfRequestFormatRequestUsingCurrentType(
   
    WDFREQUEST Request
    )
{
    ((PFN_WDFREQUESTFORMATREQUESTUSINGCURRENTTYPE) WdfFunctions_01033[WdfRequestFormatRequestUsingCurrentTypeTableIndex])(WdfDriverGlobals, Request);
}
typedef


VOID
(NTAPI *PFN_WDFREQUESTWDMFORMATUSINGSTACKLOCATION)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    PIO_STACK_LOCATION Stack
    );

__inline
VOID
WdfRequestWdmFormatUsingStackLocation(
   
    WDFREQUEST Request,
   
    PIO_STACK_LOCATION Stack
    )
{
    ((PFN_WDFREQUESTWDMFORMATUSINGSTACKLOCATION) WdfFunctions_01033[WdfRequestWdmFormatUsingStackLocationTableIndex])(WdfDriverGlobals, Request, Stack);
}
typedef



BOOLEAN
(NTAPI *PFN_WDFREQUESTSEND)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    WDFIOTARGET Target,
   
    PWDF_REQUEST_SEND_OPTIONS Options
    );


__inline
BOOLEAN
WdfRequestSend(
   
    WDFREQUEST Request,
   
    WDFIOTARGET Target,
   
    PWDF_REQUEST_SEND_OPTIONS Options
    )
{
    return ((PFN_WDFREQUESTSEND) WdfFunctions_01033[WdfRequestSendTableIndex])(WdfDriverGlobals, Request, Target, Options);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREQUESTGETSTATUS)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request
    );


__inline
NTSTATUS
WdfRequestGetStatus(
   
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTGETSTATUS) WdfFunctions_01033[WdfRequestGetStatusTableIndex])(WdfDriverGlobals, Request);
}
typedef


VOID
(NTAPI *PFN_WDFREQUESTMARKCANCELABLE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    PFN_WDF_REQUEST_CANCEL EvtRequestCancel
    );

__inline
VOID
WdfRequestMarkCancelable(
   
    WDFREQUEST Request,
   
    PFN_WDF_REQUEST_CANCEL EvtRequestCancel
    )
{
    ((PFN_WDFREQUESTMARKCANCELABLE) WdfFunctions_01033[WdfRequestMarkCancelableTableIndex])(WdfDriverGlobals, Request, EvtRequestCancel);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREQUESTMARKCANCELABLEEX)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    PFN_WDF_REQUEST_CANCEL EvtRequestCancel
    );


__inline
NTSTATUS
WdfRequestMarkCancelableEx(
   
    WDFREQUEST Request,
   
    PFN_WDF_REQUEST_CANCEL EvtRequestCancel
    )
{
    return ((PFN_WDFREQUESTMARKCANCELABLEEX) WdfFunctions_01033[WdfRequestMarkCancelableExTableIndex])(WdfDriverGlobals, Request, EvtRequestCancel);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREQUESTUNMARKCANCELABLE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request
    );


__inline
NTSTATUS
WdfRequestUnmarkCancelable(
   
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTUNMARKCANCELABLE) WdfFunctions_01033[WdfRequestUnmarkCancelableTableIndex])(WdfDriverGlobals, Request);
}
typedef



BOOLEAN
(NTAPI *PFN_WDFREQUESTISCANCELED)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request
    );


__inline
BOOLEAN
WdfRequestIsCanceled(
   
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTISCANCELED) WdfFunctions_01033[WdfRequestIsCanceledTableIndex])(WdfDriverGlobals, Request);
}
typedef


BOOLEAN
(NTAPI *PFN_WDFREQUESTCANCELSENTREQUEST)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request
    );

__inline
BOOLEAN
WdfRequestCancelSentRequest(
   
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTCANCELSENTREQUEST) WdfFunctions_01033[WdfRequestCancelSentRequestTableIndex])(WdfDriverGlobals, Request);
}
typedef



BOOLEAN
(NTAPI *PFN_WDFREQUESTISFROM32BITPROCESS)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request
    );


__inline
BOOLEAN
WdfRequestIsFrom32BitProcess(
   
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTISFROM32BITPROCESS) WdfFunctions_01033[WdfRequestIsFrom32BitProcessTableIndex])(WdfDriverGlobals, Request);
}
typedef


VOID
(NTAPI *PFN_WDFREQUESTSETCOMPLETIONROUTINE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    PFN_WDF_REQUEST_COMPLETION_ROUTINE CompletionRoutine,
   
    WDFCONTEXT CompletionContext
    );

__inline
VOID
WdfRequestSetCompletionRoutine(
   
    WDFREQUEST Request,
   
    PFN_WDF_REQUEST_COMPLETION_ROUTINE CompletionRoutine,
   
    WDFCONTEXT CompletionContext
    )
{
    ((PFN_WDFREQUESTSETCOMPLETIONROUTINE) WdfFunctions_01033[WdfRequestSetCompletionRoutineTableIndex])(WdfDriverGlobals, Request, CompletionRoutine, CompletionContext);
}
typedef


VOID
(NTAPI *PFN_WDFREQUESTGETCOMPLETIONPARAMS)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    PWDF_REQUEST_COMPLETION_PARAMS Params
    );

__inline
VOID
WdfRequestGetCompletionParams(
   
    WDFREQUEST Request,
   
    PWDF_REQUEST_COMPLETION_PARAMS Params
    )
{
    ((PFN_WDFREQUESTGETCOMPLETIONPARAMS) WdfFunctions_01033[WdfRequestGetCompletionParamsTableIndex])(WdfDriverGlobals, Request, Params);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREQUESTALLOCATETIMER)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request
    );


__inline
NTSTATUS
WdfRequestAllocateTimer(
   
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTALLOCATETIMER) WdfFunctions_01033[WdfRequestAllocateTimerTableIndex])(WdfDriverGlobals, Request);
}
typedef


VOID
(NTAPI *PFN_WDFREQUESTCOMPLETE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    NTSTATUS Status
    );

__inline
VOID
WdfRequestComplete(
   
    WDFREQUEST Request,
   
    NTSTATUS Status
    )
{
    ((PFN_WDFREQUESTCOMPLETE) WdfFunctions_01033[WdfRequestCompleteTableIndex])(WdfDriverGlobals, Request, Status);
}
typedef


VOID
(NTAPI *PFN_WDFREQUESTCOMPLETEWITHPRIORITYBOOST)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    NTSTATUS Status,
   
    CCHAR PriorityBoost
    );

__inline
VOID
WdfRequestCompleteWithPriorityBoost(
   
    WDFREQUEST Request,
   
    NTSTATUS Status,
   
    CCHAR PriorityBoost
    )
{
    ((PFN_WDFREQUESTCOMPLETEWITHPRIORITYBOOST) WdfFunctions_01033[WdfRequestCompleteWithPriorityBoostTableIndex])(WdfDriverGlobals, Request, Status, PriorityBoost);
}
typedef


VOID
(NTAPI *PFN_WDFREQUESTCOMPLETEWITHINFORMATION)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    NTSTATUS Status,
   
    ULONG_PTR Information
    );

__inline
VOID
WdfRequestCompleteWithInformation(
   
    WDFREQUEST Request,
   
    NTSTATUS Status,
   
    ULONG_PTR Information
    )
{
    ((PFN_WDFREQUESTCOMPLETEWITHINFORMATION) WdfFunctions_01033[WdfRequestCompleteWithInformationTableIndex])(WdfDriverGlobals, Request, Status, Information);
}
typedef


VOID
(NTAPI *PFN_WDFREQUESTGETPARAMETERS)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    PWDF_REQUEST_PARAMETERS Parameters
    );

__inline
VOID
WdfRequestGetParameters(
   
    WDFREQUEST Request,
   
    PWDF_REQUEST_PARAMETERS Parameters
    )
{
    ((PFN_WDFREQUESTGETPARAMETERS) WdfFunctions_01033[WdfRequestGetParametersTableIndex])(WdfDriverGlobals, Request, Parameters);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREQUESTRETRIEVEINPUTMEMORY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    WDFMEMORY* Memory
    );


__inline
NTSTATUS
WdfRequestRetrieveInputMemory(
   
    WDFREQUEST Request,
   
    WDFMEMORY* Memory
    )
{
    return ((PFN_WDFREQUESTRETRIEVEINPUTMEMORY) WdfFunctions_01033[WdfRequestRetrieveInputMemoryTableIndex])(WdfDriverGlobals, Request, Memory);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREQUESTRETRIEVEOUTPUTMEMORY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    WDFMEMORY* Memory
    );


__inline
NTSTATUS
WdfRequestRetrieveOutputMemory(
   
    WDFREQUEST Request,
   
    WDFMEMORY* Memory
    )
{
    return ((PFN_WDFREQUESTRETRIEVEOUTPUTMEMORY) WdfFunctions_01033[WdfRequestRetrieveOutputMemoryTableIndex])(WdfDriverGlobals, Request, Memory);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREQUESTRETRIEVEINPUTBUFFER)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    size_t MinimumRequiredLength,
   
    PVOID* Buffer,
   
    size_t* Length
    );


__inline
NTSTATUS
WdfRequestRetrieveInputBuffer(
   
    WDFREQUEST Request,
   
    size_t MinimumRequiredLength,
   
    PVOID* Buffer,
   
    size_t* Length
    )
{
    return ((PFN_WDFREQUESTRETRIEVEINPUTBUFFER) WdfFunctions_01033[WdfRequestRetrieveInputBufferTableIndex])(WdfDriverGlobals, Request, MinimumRequiredLength, Buffer, Length);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREQUESTRETRIEVEOUTPUTBUFFER)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    size_t MinimumRequiredSize,
   
    PVOID* Buffer,
   
    size_t* Length
    );


__inline
NTSTATUS
WdfRequestRetrieveOutputBuffer(
   
    WDFREQUEST Request,
   
    size_t MinimumRequiredSize,
   
    PVOID* Buffer,
   
    size_t* Length
    )
{
    return ((PFN_WDFREQUESTRETRIEVEOUTPUTBUFFER) WdfFunctions_01033[WdfRequestRetrieveOutputBufferTableIndex])(WdfDriverGlobals, Request, MinimumRequiredSize, Buffer, Length);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREQUESTRETRIEVEINPUTWDMMDL)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    PMDL* Mdl
    );


__inline
NTSTATUS
WdfRequestRetrieveInputWdmMdl(
   
    WDFREQUEST Request,
   
    PMDL* Mdl
    )
{
    return ((PFN_WDFREQUESTRETRIEVEINPUTWDMMDL) WdfFunctions_01033[WdfRequestRetrieveInputWdmMdlTableIndex])(WdfDriverGlobals, Request, Mdl);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREQUESTRETRIEVEOUTPUTWDMMDL)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    PMDL* Mdl
    );


__inline
NTSTATUS
WdfRequestRetrieveOutputWdmMdl(
   
    WDFREQUEST Request,
   
    PMDL* Mdl
    )
{
    return ((PFN_WDFREQUESTRETRIEVEOUTPUTWDMMDL) WdfFunctions_01033[WdfRequestRetrieveOutputWdmMdlTableIndex])(WdfDriverGlobals, Request, Mdl);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREQUESTRETRIEVEUNSAFEUSERINPUTBUFFER)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    size_t MinimumRequiredLength,
   
    PVOID* InputBuffer,
   
    size_t* Length
    );


__inline
NTSTATUS
WdfRequestRetrieveUnsafeUserInputBuffer(
   
    WDFREQUEST Request,
   
    size_t MinimumRequiredLength,
   
    PVOID* InputBuffer,
   
    size_t* Length
    )
{
    return ((PFN_WDFREQUESTRETRIEVEUNSAFEUSERINPUTBUFFER) WdfFunctions_01033[WdfRequestRetrieveUnsafeUserInputBufferTableIndex])(WdfDriverGlobals, Request, MinimumRequiredLength, InputBuffer, Length);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREQUESTRETRIEVEUNSAFEUSEROUTPUTBUFFER)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    size_t MinimumRequiredLength,
   
    PVOID* OutputBuffer,
   
    size_t* Length
    );


__inline
NTSTATUS
WdfRequestRetrieveUnsafeUserOutputBuffer(
   
    WDFREQUEST Request,
   
    size_t MinimumRequiredLength,
   
    PVOID* OutputBuffer,
   
    size_t* Length
    )
{
    return ((PFN_WDFREQUESTRETRIEVEUNSAFEUSEROUTPUTBUFFER) WdfFunctions_01033[WdfRequestRetrieveUnsafeUserOutputBufferTableIndex])(WdfDriverGlobals, Request, MinimumRequiredLength, OutputBuffer, Length);
}
typedef


VOID
(NTAPI *PFN_WDFREQUESTSETINFORMATION)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    ULONG_PTR Information
    );

__inline
VOID
WdfRequestSetInformation(
   
    WDFREQUEST Request,
   
    ULONG_PTR Information
    )
{
    ((PFN_WDFREQUESTSETINFORMATION) WdfFunctions_01033[WdfRequestSetInformationTableIndex])(WdfDriverGlobals, Request, Information);
}
typedef


ULONG_PTR
(NTAPI *PFN_WDFREQUESTGETINFORMATION)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request
    );

__inline
ULONG_PTR
WdfRequestGetInformation(
   
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTGETINFORMATION) WdfFunctions_01033[WdfRequestGetInformationTableIndex])(WdfDriverGlobals, Request);
}
typedef


WDFFILEOBJECT
(NTAPI *PFN_WDFREQUESTGETFILEOBJECT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request
    );

__inline
WDFFILEOBJECT
WdfRequestGetFileObject(
   
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTGETFILEOBJECT) WdfFunctions_01033[WdfRequestGetFileObjectTableIndex])(WdfDriverGlobals, Request);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREQUESTPROBEANDLOCKUSERBUFFERFORREAD)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    PVOID Buffer,
   
    size_t Length,
   
    WDFMEMORY* MemoryObject
    );


__inline
NTSTATUS
WdfRequestProbeAndLockUserBufferForRead(
   
    WDFREQUEST Request,
   
    PVOID Buffer,
   
    size_t Length,
   
    WDFMEMORY* MemoryObject
    )
{
    return ((PFN_WDFREQUESTPROBEANDLOCKUSERBUFFERFORREAD) WdfFunctions_01033[WdfRequestProbeAndLockUserBufferForReadTableIndex])(WdfDriverGlobals, Request, Buffer, Length, MemoryObject);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREQUESTPROBEANDLOCKUSERBUFFERFORWRITE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    PVOID Buffer,
   
    size_t Length,
   
    WDFMEMORY* MemoryObject
    );


__inline
NTSTATUS
WdfRequestProbeAndLockUserBufferForWrite(
   
    WDFREQUEST Request,
   
    PVOID Buffer,
   
    size_t Length,
   
    WDFMEMORY* MemoryObject
    )
{
    return ((PFN_WDFREQUESTPROBEANDLOCKUSERBUFFERFORWRITE) WdfFunctions_01033[WdfRequestProbeAndLockUserBufferForWriteTableIndex])(WdfDriverGlobals, Request, Buffer, Length, MemoryObject);
}
typedef


KPROCESSOR_MODE
(NTAPI *PFN_WDFREQUESTGETREQUESTORMODE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request
    );

__inline
KPROCESSOR_MODE
WdfRequestGetRequestorMode(
   
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTGETREQUESTORMODE) WdfFunctions_01033[WdfRequestGetRequestorModeTableIndex])(WdfDriverGlobals, Request);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREQUESTFORWARDTOIOQUEUE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    WDFQUEUE DestinationQueue
    );


__inline
NTSTATUS
WdfRequestForwardToIoQueue(
   
    WDFREQUEST Request,
   
    WDFQUEUE DestinationQueue
    )
{
    return ((PFN_WDFREQUESTFORWARDTOIOQUEUE) WdfFunctions_01033[WdfRequestForwardToIoQueueTableIndex])(WdfDriverGlobals, Request, DestinationQueue);
}
typedef


WDFQUEUE
(NTAPI *PFN_WDFREQUESTGETIOQUEUE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request
    );

__inline
WDFQUEUE
WdfRequestGetIoQueue(
   
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTGETIOQUEUE) WdfFunctions_01033[WdfRequestGetIoQueueTableIndex])(WdfDriverGlobals, Request);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREQUESTREQUEUE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request
    );


__inline
NTSTATUS
WdfRequestRequeue(
   
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTREQUEUE) WdfFunctions_01033[WdfRequestRequeueTableIndex])(WdfDriverGlobals, Request);
}
typedef


VOID
(NTAPI *PFN_WDFREQUESTSTOPACKNOWLEDGE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    BOOLEAN Requeue
    );

__inline
VOID
WdfRequestStopAcknowledge(
   
    WDFREQUEST Request,
   
    BOOLEAN Requeue
    )
{
    ((PFN_WDFREQUESTSTOPACKNOWLEDGE) WdfFunctions_01033[WdfRequestStopAcknowledgeTableIndex])(WdfDriverGlobals, Request, Requeue);
}
typedef


PIRP
(NTAPI *PFN_WDFREQUESTWDMGETIRP)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request
    );

__inline
PIRP
WdfRequestWdmGetIrp(
   
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTWDMGETIRP) WdfFunctions_01033[WdfRequestWdmGetIrpTableIndex])(WdfDriverGlobals, Request);
}
typedef


BOOLEAN
(NTAPI *PFN_WDFREQUESTISRESERVED)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request
    );

__inline
BOOLEAN
WdfRequestIsReserved(
   
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTISRESERVED) WdfFunctions_01033[WdfRequestIsReservedTableIndex])(WdfDriverGlobals, Request);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREQUESTFORWARDTOPARENTDEVICEIOQUEUE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFREQUEST Request,
   
    WDFQUEUE ParentDeviceQueue,
   
    PWDF_REQUEST_FORWARD_OPTIONS ForwardOptions
    );


__inline
NTSTATUS
WdfRequestForwardToParentDeviceIoQueue(
   
    WDFREQUEST Request,
   
    WDFQUEUE ParentDeviceQueue,
   
    PWDF_REQUEST_FORWARD_OPTIONS ForwardOptions
    )
{
    return ((PFN_WDFREQUESTFORWARDTOPARENTDEVICEIOQUEUE) WdfFunctions_01033[WdfRequestForwardToParentDeviceIoQueueTableIndex])(WdfDriverGlobals, Request, ParentDeviceQueue, ForwardOptions);
}


typedef enum _WDF_IO_TARGET_STATE {
    WdfIoTargetStateUndefined = 0,
    WdfIoTargetStarted,
    WdfIoTargetStopped,
    WdfIoTargetClosedForQueryRemove,
    WdfIoTargetClosed,
    WdfIoTargetDeleted,
    WdfIoTargetPurged,
} WDF_IO_TARGET_STATE, *PWDF_IO_TARGET_STATE;
typedef enum _WDF_IO_TARGET_OPEN_TYPE {
    WdfIoTargetOpenUndefined = 0,
    WdfIoTargetOpenUseExistingDevice = 1,
    WdfIoTargetOpenByName = 2,
    WdfIoTargetOpenReopen = 3,
    WdfIoTargetOpenLocalTargetByFile = 4,
} WDF_IO_TARGET_OPEN_TYPE;
typedef enum _WDF_IO_TARGET_SENT_IO_ACTION {
    WdfIoTargetSentIoUndefined = 0,
    WdfIoTargetCancelSentIo,
    WdfIoTargetWaitForSentIoToComplete,
    WdfIoTargetLeaveSentIoPending,
} WDF_IO_TARGET_SENT_IO_ACTION;
typedef enum _WDF_IO_TARGET_PURGE_IO_ACTION {
    WdfIoTargetPurgeIoUndefined = 0,
    WdfIoTargetPurgeIoAndWait = 1,
    WdfIoTargetPurgeIo = 2,
} WDF_IO_TARGET_PURGE_IO_ACTION;
typedef



NTSTATUS
NTAPI
EVT_WDF_IO_TARGET_QUERY_REMOVE(
   
    WDFIOTARGET IoTarget
    );
typedef EVT_WDF_IO_TARGET_QUERY_REMOVE *PFN_WDF_IO_TARGET_QUERY_REMOVE;
typedef



VOID
NTAPI
EVT_WDF_IO_TARGET_REMOVE_CANCELED(
   
    WDFIOTARGET IoTarget
    );
typedef EVT_WDF_IO_TARGET_REMOVE_CANCELED *PFN_WDF_IO_TARGET_REMOVE_CANCELED;
typedef



VOID
NTAPI
EVT_WDF_IO_TARGET_REMOVE_COMPLETE(
   
    WDFIOTARGET IoTarget
    );
typedef EVT_WDF_IO_TARGET_REMOVE_COMPLETE *PFN_WDF_IO_TARGET_REMOVE_COMPLETE;
typedef struct _WDF_IO_TARGET_OPEN_PARAMS {
    ULONG Size;
    WDF_IO_TARGET_OPEN_TYPE Type;
    PFN_WDF_IO_TARGET_QUERY_REMOVE EvtIoTargetQueryRemove;
    PFN_WDF_IO_TARGET_REMOVE_CANCELED EvtIoTargetRemoveCanceled;
    PFN_WDF_IO_TARGET_REMOVE_COMPLETE EvtIoTargetRemoveComplete;
    PDEVICE_OBJECT TargetDeviceObject;
    PFILE_OBJECT TargetFileObject;
    UNICODE_STRING TargetDeviceName;
    ACCESS_MASK DesiredAccess;
    ULONG ShareAccess;
    ULONG FileAttributes;
    ULONG CreateDisposition;
    ULONG CreateOptions;
    PVOID EaBuffer;
    ULONG EaBufferLength;
    PLONGLONG AllocationSize;
    ULONG FileInformation;
    UNICODE_STRING FileName;
} WDF_IO_TARGET_OPEN_PARAMS, *PWDF_IO_TARGET_OPEN_PARAMS;
VOID
__inline
WDF_IO_TARGET_OPEN_PARAMS_INIT_EXISTING_DEVICE(
    PWDF_IO_TARGET_OPEN_PARAMS Params,
    PDEVICE_OBJECT DeviceObject
    )
{
    RtlZeroMemory(Params, sizeof(WDF_IO_TARGET_OPEN_PARAMS));
    Params->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_IO_TARGET_OPEN_PARAMS < WdfStructureCount) ? WdfStructures[INDEX_WDF_IO_TARGET_OPEN_PARAMS] : (size_t)(-1) ) : sizeof(WDF_IO_TARGET_OPEN_PARAMS) );
    Params->Type = WdfIoTargetOpenUseExistingDevice;
    Params->TargetDeviceObject = DeviceObject;
}
VOID
__inline
WDF_IO_TARGET_OPEN_PARAMS_INIT_CREATE_BY_NAME(
    PWDF_IO_TARGET_OPEN_PARAMS Params,
    PCUNICODE_STRING TargetDeviceName,
    ACCESS_MASK DesiredAccess
    )
{
    RtlZeroMemory(Params, sizeof(WDF_IO_TARGET_OPEN_PARAMS));
    Params->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_IO_TARGET_OPEN_PARAMS < WdfStructureCount) ? WdfStructures[INDEX_WDF_IO_TARGET_OPEN_PARAMS] : (size_t)(-1) ) : sizeof(WDF_IO_TARGET_OPEN_PARAMS) );
    Params->Type = WdfIoTargetOpenByName;
    RtlCopyMemory(&Params->TargetDeviceName,
                  TargetDeviceName,
                  sizeof(UNICODE_STRING));
    Params->DesiredAccess = DesiredAccess;
    Params->CreateOptions = FILE_NON_DIRECTORY_FILE;
}
VOID
__inline
WDF_IO_TARGET_OPEN_PARAMS_INIT_OPEN_BY_NAME(
    PWDF_IO_TARGET_OPEN_PARAMS Params,
    PCUNICODE_STRING TargetDeviceName,
    ACCESS_MASK DesiredAccess
    )
{
    WDF_IO_TARGET_OPEN_PARAMS_INIT_CREATE_BY_NAME(Params,
                                                  TargetDeviceName,
                                                  DesiredAccess);
    Params->CreateDisposition = FILE_OPEN;
}
VOID
__inline
WDF_IO_TARGET_OPEN_PARAMS_INIT_REOPEN(
    PWDF_IO_TARGET_OPEN_PARAMS Params
    )
{
    RtlZeroMemory(Params, sizeof(WDF_IO_TARGET_OPEN_PARAMS));
    Params->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_IO_TARGET_OPEN_PARAMS < WdfStructureCount) ? WdfStructures[INDEX_WDF_IO_TARGET_OPEN_PARAMS] : (size_t)(-1) ) : sizeof(WDF_IO_TARGET_OPEN_PARAMS) );
    Params->Type = WdfIoTargetOpenReopen;
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIOTARGETCREATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PWDF_OBJECT_ATTRIBUTES IoTargetAttributes,
   
    WDFIOTARGET* IoTarget
    );


__inline
NTSTATUS
WdfIoTargetCreate(
   
    WDFDEVICE Device,
   
    PWDF_OBJECT_ATTRIBUTES IoTargetAttributes,
   
    WDFIOTARGET* IoTarget
    )
{
    return ((PFN_WDFIOTARGETCREATE) WdfFunctions_01033[WdfIoTargetCreateTableIndex])(WdfDriverGlobals, Device, IoTargetAttributes, IoTarget);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIOTARGETOPEN)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIOTARGET IoTarget,
   
    PWDF_IO_TARGET_OPEN_PARAMS OpenParams
    );


__inline
NTSTATUS
WdfIoTargetOpen(
   
    WDFIOTARGET IoTarget,
   
    PWDF_IO_TARGET_OPEN_PARAMS OpenParams
    )
{
    return ((PFN_WDFIOTARGETOPEN) WdfFunctions_01033[WdfIoTargetOpenTableIndex])(WdfDriverGlobals, IoTarget, OpenParams);
}
typedef


VOID
(NTAPI *PFN_WDFIOTARGETCLOSEFORQUERYREMOVE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIOTARGET IoTarget
    );

__inline
VOID
WdfIoTargetCloseForQueryRemove(
   
    WDFIOTARGET IoTarget
    )
{
    ((PFN_WDFIOTARGETCLOSEFORQUERYREMOVE) WdfFunctions_01033[WdfIoTargetCloseForQueryRemoveTableIndex])(WdfDriverGlobals, IoTarget);
}
typedef


VOID
(NTAPI *PFN_WDFIOTARGETCLOSE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIOTARGET IoTarget
    );

__inline
VOID
WdfIoTargetClose(
   
    WDFIOTARGET IoTarget
    )
{
    ((PFN_WDFIOTARGETCLOSE) WdfFunctions_01033[WdfIoTargetCloseTableIndex])(WdfDriverGlobals, IoTarget);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIOTARGETSTART)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIOTARGET IoTarget
    );


__inline
NTSTATUS
WdfIoTargetStart(
   
    WDFIOTARGET IoTarget
    )
{
    return ((PFN_WDFIOTARGETSTART) WdfFunctions_01033[WdfIoTargetStartTableIndex])(WdfDriverGlobals, IoTarget);
}
typedef



VOID
(NTAPI *PFN_WDFIOTARGETSTOP)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIOTARGET IoTarget,
   
   
    WDF_IO_TARGET_SENT_IO_ACTION Action
    );


__inline
VOID
WdfIoTargetStop(
   
    WDFIOTARGET IoTarget,
   
   
    WDF_IO_TARGET_SENT_IO_ACTION Action
    )
{
    ((PFN_WDFIOTARGETSTOP) WdfFunctions_01033[WdfIoTargetStopTableIndex])(WdfDriverGlobals, IoTarget, Action);
}
typedef



VOID
(NTAPI *PFN_WDFIOTARGETPURGE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIOTARGET IoTarget,
   
   
    WDF_IO_TARGET_PURGE_IO_ACTION Action
    );


__inline
VOID
WdfIoTargetPurge(
   
    WDFIOTARGET IoTarget,
   
   
    WDF_IO_TARGET_PURGE_IO_ACTION Action
    )
{
    ((PFN_WDFIOTARGETPURGE) WdfFunctions_01033[WdfIoTargetPurgeTableIndex])(WdfDriverGlobals, IoTarget, Action);
}
typedef


WDF_IO_TARGET_STATE
(NTAPI *PFN_WDFIOTARGETGETSTATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIOTARGET IoTarget
    );

__inline
WDF_IO_TARGET_STATE
WdfIoTargetGetState(
   
    WDFIOTARGET IoTarget
    )
{
    return ((PFN_WDFIOTARGETGETSTATE) WdfFunctions_01033[WdfIoTargetGetStateTableIndex])(WdfDriverGlobals, IoTarget);
}
typedef


WDFDEVICE
(NTAPI *PFN_WDFIOTARGETGETDEVICE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIOTARGET IoTarget
    );

__inline
WDFDEVICE
WdfIoTargetGetDevice(
   
    WDFIOTARGET IoTarget
    )
{
    return ((PFN_WDFIOTARGETGETDEVICE) WdfFunctions_01033[WdfIoTargetGetDeviceTableIndex])(WdfDriverGlobals, IoTarget);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIOTARGETQUERYTARGETPROPERTY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIOTARGET IoTarget,
   
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
   
    ULONG BufferLength,
   
   
    PVOID PropertyBuffer,
   
    PULONG ResultLength
    );


__inline
NTSTATUS
WdfIoTargetQueryTargetProperty(
   
    WDFIOTARGET IoTarget,
   
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
   
    ULONG BufferLength,
   
   
    PVOID PropertyBuffer,
   
    PULONG ResultLength
    )
{
    return ((PFN_WDFIOTARGETQUERYTARGETPROPERTY) WdfFunctions_01033[WdfIoTargetQueryTargetPropertyTableIndex])(WdfDriverGlobals, IoTarget, DeviceProperty, BufferLength, PropertyBuffer, ResultLength);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIOTARGETALLOCANDQUERYTARGETPROPERTY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIOTARGET IoTarget,
   
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
   
   
    POOL_TYPE PoolType,
   
    PWDF_OBJECT_ATTRIBUTES PropertyMemoryAttributes,
   
    WDFMEMORY* PropertyMemory
    );


__inline
NTSTATUS
WdfIoTargetAllocAndQueryTargetProperty(
   
    WDFIOTARGET IoTarget,
   
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
   
   
    POOL_TYPE PoolType,
   
    PWDF_OBJECT_ATTRIBUTES PropertyMemoryAttributes,
   
    WDFMEMORY* PropertyMemory
    )
{
    return ((PFN_WDFIOTARGETALLOCANDQUERYTARGETPROPERTY) WdfFunctions_01033[WdfIoTargetAllocAndQueryTargetPropertyTableIndex])(WdfDriverGlobals, IoTarget, DeviceProperty, PoolType, PropertyMemoryAttributes, PropertyMemory);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIOTARGETQUERYFORINTERFACE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIOTARGET IoTarget,
   
    LPCGUID InterfaceType,
   
    PINTERFACE Interface,
   
    USHORT Size,
   
    USHORT Version,
   
    PVOID InterfaceSpecificData
    );


__inline
NTSTATUS
WdfIoTargetQueryForInterface(
   
    WDFIOTARGET IoTarget,
   
    LPCGUID InterfaceType,
   
    PINTERFACE Interface,
   
    USHORT Size,
   
    USHORT Version,
   
    PVOID InterfaceSpecificData
    )
{
    return ((PFN_WDFIOTARGETQUERYFORINTERFACE) WdfFunctions_01033[WdfIoTargetQueryForInterfaceTableIndex])(WdfDriverGlobals, IoTarget, InterfaceType, Interface, Size, Version, InterfaceSpecificData);
}
typedef


PDEVICE_OBJECT
(NTAPI *PFN_WDFIOTARGETWDMGETTARGETDEVICEOBJECT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIOTARGET IoTarget
    );

__inline
PDEVICE_OBJECT
WdfIoTargetWdmGetTargetDeviceObject(
   
    WDFIOTARGET IoTarget
    )
{
    return ((PFN_WDFIOTARGETWDMGETTARGETDEVICEOBJECT) WdfFunctions_01033[WdfIoTargetWdmGetTargetDeviceObjectTableIndex])(WdfDriverGlobals, IoTarget);
}
typedef


PDEVICE_OBJECT
(NTAPI *PFN_WDFIOTARGETWDMGETTARGETPHYSICALDEVICE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIOTARGET IoTarget
    );

__inline
PDEVICE_OBJECT
WdfIoTargetWdmGetTargetPhysicalDevice(
   
    WDFIOTARGET IoTarget
    )
{
    return ((PFN_WDFIOTARGETWDMGETTARGETPHYSICALDEVICE) WdfFunctions_01033[WdfIoTargetWdmGetTargetPhysicalDeviceTableIndex])(WdfDriverGlobals, IoTarget);
}
typedef


PFILE_OBJECT
(NTAPI *PFN_WDFIOTARGETWDMGETTARGETFILEOBJECT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIOTARGET IoTarget
    );

__inline
PFILE_OBJECT
WdfIoTargetWdmGetTargetFileObject(
   
    WDFIOTARGET IoTarget
    )
{
    return ((PFN_WDFIOTARGETWDMGETTARGETFILEOBJECT) WdfFunctions_01033[WdfIoTargetWdmGetTargetFileObjectTableIndex])(WdfDriverGlobals, IoTarget);
}
typedef


HANDLE
(NTAPI *PFN_WDFIOTARGETWDMGETTARGETFILEHANDLE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIOTARGET IoTarget
    );

__inline
HANDLE
WdfIoTargetWdmGetTargetFileHandle(
   
    WDFIOTARGET IoTarget
    )
{
    return ((PFN_WDFIOTARGETWDMGETTARGETFILEHANDLE) WdfFunctions_01033[WdfIoTargetWdmGetTargetFileHandleTableIndex])(WdfDriverGlobals, IoTarget);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIOTARGETSENDREADSYNCHRONOUSLY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIOTARGET IoTarget,
   
    WDFREQUEST Request,
   
    PWDF_MEMORY_DESCRIPTOR OutputBuffer,
   
    PLONGLONG DeviceOffset,
   
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
   
    PULONG_PTR BytesRead
    );


__inline
NTSTATUS
WdfIoTargetSendReadSynchronously(
   
    WDFIOTARGET IoTarget,
   
    WDFREQUEST Request,
   
    PWDF_MEMORY_DESCRIPTOR OutputBuffer,
   
    PLONGLONG DeviceOffset,
   
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
   
    PULONG_PTR BytesRead
    )
{
    return ((PFN_WDFIOTARGETSENDREADSYNCHRONOUSLY) WdfFunctions_01033[WdfIoTargetSendReadSynchronouslyTableIndex])(WdfDriverGlobals, IoTarget, Request, OutputBuffer, DeviceOffset, RequestOptions, BytesRead);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIOTARGETFORMATREQUESTFORREAD)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIOTARGET IoTarget,
   
    WDFREQUEST Request,
   
    WDFMEMORY OutputBuffer,
   
    PWDFMEMORY_OFFSET OutputBufferOffset,
   
    PLONGLONG DeviceOffset
    );


__inline
NTSTATUS
WdfIoTargetFormatRequestForRead(
   
    WDFIOTARGET IoTarget,
   
    WDFREQUEST Request,
   
    WDFMEMORY OutputBuffer,
   
    PWDFMEMORY_OFFSET OutputBufferOffset,
   
    PLONGLONG DeviceOffset
    )
{
    return ((PFN_WDFIOTARGETFORMATREQUESTFORREAD) WdfFunctions_01033[WdfIoTargetFormatRequestForReadTableIndex])(WdfDriverGlobals, IoTarget, Request, OutputBuffer, OutputBufferOffset, DeviceOffset);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIOTARGETSENDWRITESYNCHRONOUSLY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIOTARGET IoTarget,
   
    WDFREQUEST Request,
   
    PWDF_MEMORY_DESCRIPTOR InputBuffer,
   
    PLONGLONG DeviceOffset,
   
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
   
    PULONG_PTR BytesWritten
    );


__inline
NTSTATUS
WdfIoTargetSendWriteSynchronously(
   
    WDFIOTARGET IoTarget,
   
    WDFREQUEST Request,
   
    PWDF_MEMORY_DESCRIPTOR InputBuffer,
   
    PLONGLONG DeviceOffset,
   
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
   
    PULONG_PTR BytesWritten
    )
{
    return ((PFN_WDFIOTARGETSENDWRITESYNCHRONOUSLY) WdfFunctions_01033[WdfIoTargetSendWriteSynchronouslyTableIndex])(WdfDriverGlobals, IoTarget, Request, InputBuffer, DeviceOffset, RequestOptions, BytesWritten);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIOTARGETFORMATREQUESTFORWRITE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIOTARGET IoTarget,
   
    WDFREQUEST Request,
   
    WDFMEMORY InputBuffer,
   
    PWDFMEMORY_OFFSET InputBufferOffset,
   
    PLONGLONG DeviceOffset
    );


__inline
NTSTATUS
WdfIoTargetFormatRequestForWrite(
   
    WDFIOTARGET IoTarget,
   
    WDFREQUEST Request,
   
    WDFMEMORY InputBuffer,
   
    PWDFMEMORY_OFFSET InputBufferOffset,
   
    PLONGLONG DeviceOffset
    )
{
    return ((PFN_WDFIOTARGETFORMATREQUESTFORWRITE) WdfFunctions_01033[WdfIoTargetFormatRequestForWriteTableIndex])(WdfDriverGlobals, IoTarget, Request, InputBuffer, InputBufferOffset, DeviceOffset);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIOTARGETSENDIOCTLSYNCHRONOUSLY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIOTARGET IoTarget,
   
    WDFREQUEST Request,
   
    ULONG IoctlCode,
   
    PWDF_MEMORY_DESCRIPTOR InputBuffer,
   
    PWDF_MEMORY_DESCRIPTOR OutputBuffer,
   
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
   
    PULONG_PTR BytesReturned
    );


__inline
NTSTATUS
WdfIoTargetSendIoctlSynchronously(
   
    WDFIOTARGET IoTarget,
   
    WDFREQUEST Request,
   
    ULONG IoctlCode,
   
    PWDF_MEMORY_DESCRIPTOR InputBuffer,
   
    PWDF_MEMORY_DESCRIPTOR OutputBuffer,
   
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
   
    PULONG_PTR BytesReturned
    )
{
    return ((PFN_WDFIOTARGETSENDIOCTLSYNCHRONOUSLY) WdfFunctions_01033[WdfIoTargetSendIoctlSynchronouslyTableIndex])(WdfDriverGlobals, IoTarget, Request, IoctlCode, InputBuffer, OutputBuffer, RequestOptions, BytesReturned);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIOTARGETFORMATREQUESTFORIOCTL)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIOTARGET IoTarget,
   
    WDFREQUEST Request,
   
    ULONG IoctlCode,
   
    WDFMEMORY InputBuffer,
   
    PWDFMEMORY_OFFSET InputBufferOffset,
   
    WDFMEMORY OutputBuffer,
   
    PWDFMEMORY_OFFSET OutputBufferOffset
    );


__inline
NTSTATUS
WdfIoTargetFormatRequestForIoctl(
   
    WDFIOTARGET IoTarget,
   
    WDFREQUEST Request,
   
    ULONG IoctlCode,
   
    WDFMEMORY InputBuffer,
   
    PWDFMEMORY_OFFSET InputBufferOffset,
   
    WDFMEMORY OutputBuffer,
   
    PWDFMEMORY_OFFSET OutputBufferOffset
    )
{
    return ((PFN_WDFIOTARGETFORMATREQUESTFORIOCTL) WdfFunctions_01033[WdfIoTargetFormatRequestForIoctlTableIndex])(WdfDriverGlobals, IoTarget, Request, IoctlCode, InputBuffer, InputBufferOffset, OutputBuffer, OutputBufferOffset);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIOTARGETSENDINTERNALIOCTLSYNCHRONOUSLY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIOTARGET IoTarget,
   
    WDFREQUEST Request,
   
    ULONG IoctlCode,
   
    PWDF_MEMORY_DESCRIPTOR InputBuffer,
   
    PWDF_MEMORY_DESCRIPTOR OutputBuffer,
   
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
   
    PULONG_PTR BytesReturned
    );


__inline
NTSTATUS
WdfIoTargetSendInternalIoctlSynchronously(
   
    WDFIOTARGET IoTarget,
   
    WDFREQUEST Request,
   
    ULONG IoctlCode,
   
    PWDF_MEMORY_DESCRIPTOR InputBuffer,
   
    PWDF_MEMORY_DESCRIPTOR OutputBuffer,
   
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
   
    PULONG_PTR BytesReturned
    )
{
    return ((PFN_WDFIOTARGETSENDINTERNALIOCTLSYNCHRONOUSLY) WdfFunctions_01033[WdfIoTargetSendInternalIoctlSynchronouslyTableIndex])(WdfDriverGlobals, IoTarget, Request, IoctlCode, InputBuffer, OutputBuffer, RequestOptions, BytesReturned);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIOTARGETFORMATREQUESTFORINTERNALIOCTL)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIOTARGET IoTarget,
   
    WDFREQUEST Request,
   
    ULONG IoctlCode,
   
    WDFMEMORY InputBuffer,
   
    PWDFMEMORY_OFFSET InputBufferOffset,
   
    WDFMEMORY OutputBuffer,
   
    PWDFMEMORY_OFFSET OutputBufferOffset
    );


__inline
NTSTATUS
WdfIoTargetFormatRequestForInternalIoctl(
   
    WDFIOTARGET IoTarget,
   
    WDFREQUEST Request,
   
    ULONG IoctlCode,
   
    WDFMEMORY InputBuffer,
   
    PWDFMEMORY_OFFSET InputBufferOffset,
   
    WDFMEMORY OutputBuffer,
   
    PWDFMEMORY_OFFSET OutputBufferOffset
    )
{
    return ((PFN_WDFIOTARGETFORMATREQUESTFORINTERNALIOCTL) WdfFunctions_01033[WdfIoTargetFormatRequestForInternalIoctlTableIndex])(WdfDriverGlobals, IoTarget, Request, IoctlCode, InputBuffer, InputBufferOffset, OutputBuffer, OutputBufferOffset);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIOTARGETSENDINTERNALIOCTLOTHERSSYNCHRONOUSLY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIOTARGET IoTarget,
   
    WDFREQUEST Request,
   
    ULONG IoctlCode,
   
    PWDF_MEMORY_DESCRIPTOR OtherArg1,
   
    PWDF_MEMORY_DESCRIPTOR OtherArg2,
   
    PWDF_MEMORY_DESCRIPTOR OtherArg4,
   
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
   
    PULONG_PTR BytesReturned
    );


__inline
NTSTATUS
WdfIoTargetSendInternalIoctlOthersSynchronously(
   
    WDFIOTARGET IoTarget,
   
    WDFREQUEST Request,
   
    ULONG IoctlCode,
   
    PWDF_MEMORY_DESCRIPTOR OtherArg1,
   
    PWDF_MEMORY_DESCRIPTOR OtherArg2,
   
    PWDF_MEMORY_DESCRIPTOR OtherArg4,
   
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
   
    PULONG_PTR BytesReturned
    )
{
    return ((PFN_WDFIOTARGETSENDINTERNALIOCTLOTHERSSYNCHRONOUSLY) WdfFunctions_01033[WdfIoTargetSendInternalIoctlOthersSynchronouslyTableIndex])(WdfDriverGlobals, IoTarget, Request, IoctlCode, OtherArg1, OtherArg2, OtherArg4, RequestOptions, BytesReturned);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIOTARGETFORMATREQUESTFORINTERNALIOCTLOTHERS)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFIOTARGET IoTarget,
   
    WDFREQUEST Request,
   
    ULONG IoctlCode,
   
    WDFMEMORY OtherArg1,
   
    PWDFMEMORY_OFFSET OtherArg1Offset,
   
    WDFMEMORY OtherArg2,
   
    PWDFMEMORY_OFFSET OtherArg2Offset,
   
    WDFMEMORY OtherArg4,
   
    PWDFMEMORY_OFFSET OtherArg4Offset
    );


__inline
NTSTATUS
WdfIoTargetFormatRequestForInternalIoctlOthers(
   
    WDFIOTARGET IoTarget,
   
    WDFREQUEST Request,
   
    ULONG IoctlCode,
   
    WDFMEMORY OtherArg1,
   
    PWDFMEMORY_OFFSET OtherArg1Offset,
   
    WDFMEMORY OtherArg2,
   
    PWDFMEMORY_OFFSET OtherArg2Offset,
   
    WDFMEMORY OtherArg4,
   
    PWDFMEMORY_OFFSET OtherArg4Offset
    )
{
    return ((PFN_WDFIOTARGETFORMATREQUESTFORINTERNALIOCTLOTHERS) WdfFunctions_01033[WdfIoTargetFormatRequestForInternalIoctlOthersTableIndex])(WdfDriverGlobals, IoTarget, Request, IoctlCode, OtherArg1, OtherArg1Offset, OtherArg2, OtherArg2Offset, OtherArg4, OtherArg4Offset);
}


typedef enum _WDF_IO_QUEUE_DISPATCH_TYPE {
    WdfIoQueueDispatchInvalid = 0,
    WdfIoQueueDispatchSequential,
    WdfIoQueueDispatchParallel,
    WdfIoQueueDispatchManual,
    WdfIoQueueDispatchMax,
} WDF_IO_QUEUE_DISPATCH_TYPE;
typedef enum _WDF_IO_QUEUE_STATE {
    WdfIoQueueAcceptRequests = 0x01,
    WdfIoQueueDispatchRequests = 0x02,
    WdfIoQueueNoRequests = 0x04,
    WdfIoQueueDriverNoRequests = 0x08,
    WdfIoQueuePnpHeld = 0x10,
} WDF_IO_QUEUE_STATE;
BOOLEAN
__inline
WDF_IO_QUEUE_IDLE(
    WDF_IO_QUEUE_STATE State
    )
{
    return ((State & WdfIoQueueNoRequests) &&
            (State & WdfIoQueueDriverNoRequests)) ? TRUE: FALSE;
}
BOOLEAN
__inline
WDF_IO_QUEUE_READY(
    WDF_IO_QUEUE_STATE State
    )
{
    return ((State & WdfIoQueueDispatchRequests) &&
        (State & WdfIoQueueAcceptRequests) &&
        ((State & WdfIoQueuePnpHeld)==0)) ? TRUE: FALSE;
}
BOOLEAN
__inline
WDF_IO_QUEUE_STOPPED(
    WDF_IO_QUEUE_STATE State
    )
{
    return (((State & WdfIoQueueDispatchRequests) == 0) &&
        (State & WdfIoQueueAcceptRequests) &&
        (State & WdfIoQueueDriverNoRequests)) ? TRUE: FALSE;
}
BOOLEAN
__inline
WDF_IO_QUEUE_DRAINED(
    WDF_IO_QUEUE_STATE State
    )
{
    return ( ((State & WdfIoQueueAcceptRequests)==0) &&
          (State & WdfIoQueueDispatchRequests) &&
          (State & WdfIoQueueNoRequests) &&
          (State & WdfIoQueueDriverNoRequests) ) ? TRUE: FALSE;
}
BOOLEAN
__inline
WDF_IO_QUEUE_PURGED(
    WDF_IO_QUEUE_STATE State
    )
{
    return ( ((State & WdfIoQueueAcceptRequests)==0) &&
          (State & WdfIoQueueNoRequests) &&
          (State & WdfIoQueueDriverNoRequests) ) ? TRUE: FALSE;
}
typedef



VOID
NTAPI
EVT_WDF_IO_QUEUE_IO_DEFAULT(
   
    WDFQUEUE Queue,
   
    WDFREQUEST Request
    );
typedef EVT_WDF_IO_QUEUE_IO_DEFAULT *PFN_WDF_IO_QUEUE_IO_DEFAULT;
typedef



VOID
NTAPI
EVT_WDF_IO_QUEUE_IO_STOP(
   
    WDFQUEUE Queue,
   
    WDFREQUEST Request,
   
    ULONG ActionFlags
    );
typedef EVT_WDF_IO_QUEUE_IO_STOP *PFN_WDF_IO_QUEUE_IO_STOP;
typedef



VOID
NTAPI
EVT_WDF_IO_QUEUE_IO_RESUME(
   
    WDFQUEUE Queue,
   
    WDFREQUEST Request
    );
typedef EVT_WDF_IO_QUEUE_IO_RESUME *PFN_WDF_IO_QUEUE_IO_RESUME;
typedef



VOID
NTAPI
EVT_WDF_IO_QUEUE_IO_READ(
   
    WDFQUEUE Queue,
   
    WDFREQUEST Request,
   
    size_t Length
    );
typedef EVT_WDF_IO_QUEUE_IO_READ *PFN_WDF_IO_QUEUE_IO_READ;
typedef



VOID
NTAPI
EVT_WDF_IO_QUEUE_IO_WRITE(
   
    WDFQUEUE Queue,
   
    WDFREQUEST Request,
   
    size_t Length
    );
typedef EVT_WDF_IO_QUEUE_IO_WRITE *PFN_WDF_IO_QUEUE_IO_WRITE;
typedef



VOID
NTAPI
EVT_WDF_IO_QUEUE_IO_DEVICE_CONTROL(
   
    WDFQUEUE Queue,
   
    WDFREQUEST Request,
   
    size_t OutputBufferLength,
   
    size_t InputBufferLength,
   
    ULONG IoControlCode
    );
typedef EVT_WDF_IO_QUEUE_IO_DEVICE_CONTROL *PFN_WDF_IO_QUEUE_IO_DEVICE_CONTROL;
typedef



VOID
NTAPI
EVT_WDF_IO_QUEUE_IO_INTERNAL_DEVICE_CONTROL(
   
    WDFQUEUE Queue,
   
    WDFREQUEST Request,
   
    size_t OutputBufferLength,
   
    size_t InputBufferLength,
   
    ULONG IoControlCode
    );
typedef EVT_WDF_IO_QUEUE_IO_INTERNAL_DEVICE_CONTROL *PFN_WDF_IO_QUEUE_IO_INTERNAL_DEVICE_CONTROL;
typedef



VOID
NTAPI
EVT_WDF_IO_QUEUE_IO_CANCELED_ON_QUEUE(
   
    WDFQUEUE Queue,
   
    WDFREQUEST Request
    );
typedef EVT_WDF_IO_QUEUE_IO_CANCELED_ON_QUEUE *PFN_WDF_IO_QUEUE_IO_CANCELED_ON_QUEUE;
typedef



VOID
NTAPI
EVT_WDF_IO_QUEUE_STATE(
   
    WDFQUEUE Queue,
   
    WDFCONTEXT Context
    );
typedef EVT_WDF_IO_QUEUE_STATE *PFN_WDF_IO_QUEUE_STATE;
typedef struct _WDF_IO_QUEUE_CONFIG {
    ULONG Size;
    WDF_IO_QUEUE_DISPATCH_TYPE DispatchType;
    WDF_TRI_STATE PowerManaged;
    BOOLEAN AllowZeroLengthRequests;
    BOOLEAN DefaultQueue;
    PFN_WDF_IO_QUEUE_IO_DEFAULT EvtIoDefault;
    PFN_WDF_IO_QUEUE_IO_READ EvtIoRead;
    PFN_WDF_IO_QUEUE_IO_WRITE EvtIoWrite;
    PFN_WDF_IO_QUEUE_IO_DEVICE_CONTROL EvtIoDeviceControl;
    PFN_WDF_IO_QUEUE_IO_INTERNAL_DEVICE_CONTROL EvtIoInternalDeviceControl;
    PFN_WDF_IO_QUEUE_IO_STOP EvtIoStop;
    PFN_WDF_IO_QUEUE_IO_RESUME EvtIoResume;
    PFN_WDF_IO_QUEUE_IO_CANCELED_ON_QUEUE EvtIoCanceledOnQueue;
    union {
        struct {
            ULONG NumberOfPresentedRequests;
        } Parallel;
    } Settings;
    WDFDRIVER Driver;
} WDF_IO_QUEUE_CONFIG, *PWDF_IO_QUEUE_CONFIG;
VOID
__inline
WDF_IO_QUEUE_CONFIG_INIT(
    PWDF_IO_QUEUE_CONFIG Config,
    WDF_IO_QUEUE_DISPATCH_TYPE DispatchType
    )
{
    RtlZeroMemory(Config, sizeof(WDF_IO_QUEUE_CONFIG));
    Config->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_IO_QUEUE_CONFIG < WdfStructureCount) ? WdfStructures[INDEX_WDF_IO_QUEUE_CONFIG] : (size_t)(-1) ) : sizeof(WDF_IO_QUEUE_CONFIG) );
    Config->PowerManaged = WdfUseDefault;
    Config->DispatchType = DispatchType;
    if (Config->DispatchType == WdfIoQueueDispatchParallel) {
        Config->Settings.Parallel.NumberOfPresentedRequests = (ULONG)-1;
    }
}
VOID
__inline
WDF_IO_QUEUE_CONFIG_INIT_DEFAULT_QUEUE(
    PWDF_IO_QUEUE_CONFIG Config,
    WDF_IO_QUEUE_DISPATCH_TYPE DispatchType
    )
{
    RtlZeroMemory(Config, sizeof(WDF_IO_QUEUE_CONFIG));
    Config->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_IO_QUEUE_CONFIG < WdfStructureCount) ? WdfStructures[INDEX_WDF_IO_QUEUE_CONFIG] : (size_t)(-1) ) : sizeof(WDF_IO_QUEUE_CONFIG) );
    Config->PowerManaged = WdfUseDefault;
    Config->DefaultQueue = TRUE;
    Config->DispatchType = DispatchType;
    if (Config->DispatchType == WdfIoQueueDispatchParallel) {
        Config->Settings.Parallel.NumberOfPresentedRequests = (ULONG)-1;
    }
}
typedef enum _WDF_IO_FORWARD_PROGRESS_ACTION {
    WdfIoForwardProgressActionInvalid = 0x0,
    WdfIoForwardProgressActionFailRequest,
    WdfIoForwardProgressActionUseReservedRequest
} WDF_IO_FORWARD_PROGRESS_ACTION;
typedef enum _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY {
  WdfIoForwardProgressInvalidPolicy =0x0,
  WdfIoForwardProgressReservedPolicyAlwaysUseReservedRequest,
  WdfIoForwardProgressReservedPolicyUseExamine,
  WdfIoForwardProgressReservedPolicyPagingIO
} WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY;
typedef



NTSTATUS
NTAPI
EVT_WDF_IO_ALLOCATE_RESOURCES_FOR_RESERVED_REQUEST(
   
    WDFQUEUE Queue,
   
    WDFREQUEST Request
    );
typedef EVT_WDF_IO_ALLOCATE_RESOURCES_FOR_RESERVED_REQUEST *PFN_WDF_IO_ALLOCATE_RESOURCES_FOR_RESERVED_REQUEST;
typedef



NTSTATUS
NTAPI
EVT_WDF_IO_ALLOCATE_REQUEST_RESOURCES(
   
    WDFQUEUE Queue,
   
    WDFREQUEST Request
    );
typedef EVT_WDF_IO_ALLOCATE_REQUEST_RESOURCES *PFN_WDF_IO_ALLOCATE_REQUEST_RESOURCES;
typedef



WDF_IO_FORWARD_PROGRESS_ACTION
NTAPI
EVT_WDF_IO_WDM_IRP_FOR_FORWARD_PROGRESS(
   
    WDFQUEUE Queue,
   
    PIRP Irp
    );
typedef EVT_WDF_IO_WDM_IRP_FOR_FORWARD_PROGRESS *PFN_WDF_IO_WDM_IRP_FOR_FORWARD_PROGRESS;
typedef struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS {
    union {
        struct {
          PFN_WDF_IO_WDM_IRP_FOR_FORWARD_PROGRESS EvtIoWdmIrpForForwardProgress;
        } ExaminePolicy;
    } Policy;
} WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS;
typedef struct _WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY {
    ULONG Size;
    ULONG TotalForwardProgressRequests;
    WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY ForwardProgressReservedPolicy;
    WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS ForwardProgressReservePolicySettings;
    PFN_WDF_IO_ALLOCATE_RESOURCES_FOR_RESERVED_REQUEST EvtIoAllocateResourcesForReservedRequest;
    PFN_WDF_IO_ALLOCATE_REQUEST_RESOURCES EvtIoAllocateRequestResources;
} WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY, *PWDF_IO_QUEUE_FORWARD_PROGRESS_POLICY;
VOID
__inline
WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_DEFAULT_INIT(
    PWDF_IO_QUEUE_FORWARD_PROGRESS_POLICY Policy,
    ULONG TotalForwardProgressRequests
    )
{
    RtlZeroMemory(Policy, sizeof(WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY));
    Policy->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY < WdfStructureCount) ? WdfStructures[INDEX_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY] : (size_t)(-1) ) : sizeof(WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY) );
    Policy->TotalForwardProgressRequests = TotalForwardProgressRequests;
    Policy->ForwardProgressReservedPolicy = WdfIoForwardProgressReservedPolicyAlwaysUseReservedRequest;
}
VOID
__inline
WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_EXAMINE_INIT(
    PWDF_IO_QUEUE_FORWARD_PROGRESS_POLICY Policy,
    ULONG TotalForwardProgressRequests,
    PFN_WDF_IO_WDM_IRP_FOR_FORWARD_PROGRESS EvtIoWdmIrpForForwardProgress
    )
{
    RtlZeroMemory(Policy, sizeof(WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY));
    Policy->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY < WdfStructureCount) ? WdfStructures[INDEX_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY] : (size_t)(-1) ) : sizeof(WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY) );
    Policy->TotalForwardProgressRequests = TotalForwardProgressRequests;
    Policy->ForwardProgressReservedPolicy = WdfIoForwardProgressReservedPolicyUseExamine;
    Policy->ForwardProgressReservePolicySettings.Policy.ExaminePolicy.EvtIoWdmIrpForForwardProgress =
            EvtIoWdmIrpForForwardProgress;
}
VOID
__inline
WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_PAGINGIO_INIT(
    PWDF_IO_QUEUE_FORWARD_PROGRESS_POLICY Policy,
    ULONG TotalForwardProgressRequests
    )
{
    RtlZeroMemory(Policy, sizeof(WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY));
    Policy->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY < WdfStructureCount) ? WdfStructures[INDEX_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY] : (size_t)(-1) ) : sizeof(WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY) );
    Policy->TotalForwardProgressRequests = TotalForwardProgressRequests;
    Policy->ForwardProgressReservedPolicy = WdfIoForwardProgressReservedPolicyPagingIO;
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIOQUEUECREATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PWDF_IO_QUEUE_CONFIG Config,
   
    PWDF_OBJECT_ATTRIBUTES QueueAttributes,
   
    WDFQUEUE* Queue
    );


__inline
NTSTATUS
WdfIoQueueCreate(
   
    WDFDEVICE Device,
   
    PWDF_IO_QUEUE_CONFIG Config,
   
    PWDF_OBJECT_ATTRIBUTES QueueAttributes,
   
    WDFQUEUE* Queue
    )
{
    return ((PFN_WDFIOQUEUECREATE) WdfFunctions_01033[WdfIoQueueCreateTableIndex])(WdfDriverGlobals, Device, Config, QueueAttributes, Queue);
}
typedef


WDF_IO_QUEUE_STATE
(NTAPI *PFN_WDFIOQUEUEGETSTATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFQUEUE Queue,
   
    PULONG QueueRequests,
   
    PULONG DriverRequests
    );

__inline
WDF_IO_QUEUE_STATE
WdfIoQueueGetState(
   
    WDFQUEUE Queue,
   
    PULONG QueueRequests,
   
    PULONG DriverRequests
    )
{
    return ((PFN_WDFIOQUEUEGETSTATE) WdfFunctions_01033[WdfIoQueueGetStateTableIndex])(WdfDriverGlobals, Queue, QueueRequests, DriverRequests);
}
typedef


VOID
(NTAPI *PFN_WDFIOQUEUESTART)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFQUEUE Queue
    );

__inline
VOID
WdfIoQueueStart(
   
    WDFQUEUE Queue
    )
{
    ((PFN_WDFIOQUEUESTART) WdfFunctions_01033[WdfIoQueueStartTableIndex])(WdfDriverGlobals, Queue);
}
typedef


VOID
(NTAPI *PFN_WDFIOQUEUESTOP)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFQUEUE Queue,
   
   
    PFN_WDF_IO_QUEUE_STATE StopComplete,
   
   
    WDFCONTEXT Context
    );

__inline
VOID
WdfIoQueueStop(
   
    WDFQUEUE Queue,
   
   
    PFN_WDF_IO_QUEUE_STATE StopComplete,
   
   
    WDFCONTEXT Context
    )
{
    ((PFN_WDFIOQUEUESTOP) WdfFunctions_01033[WdfIoQueueStopTableIndex])(WdfDriverGlobals, Queue, StopComplete, Context);
}
typedef


VOID
(NTAPI *PFN_WDFIOQUEUESTOPSYNCHRONOUSLY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFQUEUE Queue
    );

__inline
VOID
WdfIoQueueStopSynchronously(
   
    WDFQUEUE Queue
    )
{
    ((PFN_WDFIOQUEUESTOPSYNCHRONOUSLY) WdfFunctions_01033[WdfIoQueueStopSynchronouslyTableIndex])(WdfDriverGlobals, Queue);
}
typedef


WDFDEVICE
(NTAPI *PFN_WDFIOQUEUEGETDEVICE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFQUEUE Queue
    );

__inline
WDFDEVICE
WdfIoQueueGetDevice(
   
    WDFQUEUE Queue
    )
{
    return ((PFN_WDFIOQUEUEGETDEVICE) WdfFunctions_01033[WdfIoQueueGetDeviceTableIndex])(WdfDriverGlobals, Queue);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIOQUEUERETRIEVENEXTREQUEST)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFQUEUE Queue,
   
    WDFREQUEST* OutRequest
    );


__inline
NTSTATUS
WdfIoQueueRetrieveNextRequest(
   
    WDFQUEUE Queue,
   
    WDFREQUEST* OutRequest
    )
{
    return ((PFN_WDFIOQUEUERETRIEVENEXTREQUEST) WdfFunctions_01033[WdfIoQueueRetrieveNextRequestTableIndex])(WdfDriverGlobals, Queue, OutRequest);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIOQUEUERETRIEVEREQUESTBYFILEOBJECT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFQUEUE Queue,
   
    WDFFILEOBJECT FileObject,
   
    WDFREQUEST* OutRequest
    );


__inline
NTSTATUS
WdfIoQueueRetrieveRequestByFileObject(
   
    WDFQUEUE Queue,
   
    WDFFILEOBJECT FileObject,
   
    WDFREQUEST* OutRequest
    )
{
    return ((PFN_WDFIOQUEUERETRIEVEREQUESTBYFILEOBJECT) WdfFunctions_01033[WdfIoQueueRetrieveRequestByFileObjectTableIndex])(WdfDriverGlobals, Queue, FileObject, OutRequest);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIOQUEUEFINDREQUEST)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFQUEUE Queue,
   
    WDFREQUEST FoundRequest,
   
    WDFFILEOBJECT FileObject,
   
    PWDF_REQUEST_PARAMETERS Parameters,
   
    WDFREQUEST* OutRequest
    );


__inline
NTSTATUS
WdfIoQueueFindRequest(
   
    WDFQUEUE Queue,
   
    WDFREQUEST FoundRequest,
   
    WDFFILEOBJECT FileObject,
   
    PWDF_REQUEST_PARAMETERS Parameters,
   
    WDFREQUEST* OutRequest
    )
{
    return ((PFN_WDFIOQUEUEFINDREQUEST) WdfFunctions_01033[WdfIoQueueFindRequestTableIndex])(WdfDriverGlobals, Queue, FoundRequest, FileObject, Parameters, OutRequest);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIOQUEUERETRIEVEFOUNDREQUEST)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFQUEUE Queue,
   
    WDFREQUEST FoundRequest,
   
    WDFREQUEST* OutRequest
    );


__inline
NTSTATUS
WdfIoQueueRetrieveFoundRequest(
   
    WDFQUEUE Queue,
   
    WDFREQUEST FoundRequest,
   
    WDFREQUEST* OutRequest
    )
{
    return ((PFN_WDFIOQUEUERETRIEVEFOUNDREQUEST) WdfFunctions_01033[WdfIoQueueRetrieveFoundRequestTableIndex])(WdfDriverGlobals, Queue, FoundRequest, OutRequest);
}
typedef


VOID
(NTAPI *PFN_WDFIOQUEUEDRAINSYNCHRONOUSLY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFQUEUE Queue
    );

__inline
VOID
WdfIoQueueDrainSynchronously(
   
    WDFQUEUE Queue
    )
{
    ((PFN_WDFIOQUEUEDRAINSYNCHRONOUSLY) WdfFunctions_01033[WdfIoQueueDrainSynchronouslyTableIndex])(WdfDriverGlobals, Queue);
}
typedef


VOID
(NTAPI *PFN_WDFIOQUEUEDRAIN)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFQUEUE Queue,
   
   
    PFN_WDF_IO_QUEUE_STATE DrainComplete,
   
   
    WDFCONTEXT Context
    );

__inline
VOID
WdfIoQueueDrain(
   
    WDFQUEUE Queue,
   
   
    PFN_WDF_IO_QUEUE_STATE DrainComplete,
   
   
    WDFCONTEXT Context
    )
{
    ((PFN_WDFIOQUEUEDRAIN) WdfFunctions_01033[WdfIoQueueDrainTableIndex])(WdfDriverGlobals, Queue, DrainComplete, Context);
}
typedef


VOID
(NTAPI *PFN_WDFIOQUEUEPURGESYNCHRONOUSLY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFQUEUE Queue
    );

__inline
VOID
WdfIoQueuePurgeSynchronously(
   
    WDFQUEUE Queue
    )
{
    ((PFN_WDFIOQUEUEPURGESYNCHRONOUSLY) WdfFunctions_01033[WdfIoQueuePurgeSynchronouslyTableIndex])(WdfDriverGlobals, Queue);
}
typedef


VOID
(NTAPI *PFN_WDFIOQUEUEPURGE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFQUEUE Queue,
   
   
    PFN_WDF_IO_QUEUE_STATE PurgeComplete,
   
   
    WDFCONTEXT Context
    );

__inline
VOID
WdfIoQueuePurge(
   
    WDFQUEUE Queue,
   
   
    PFN_WDF_IO_QUEUE_STATE PurgeComplete,
   
   
    WDFCONTEXT Context
    )
{
    ((PFN_WDFIOQUEUEPURGE) WdfFunctions_01033[WdfIoQueuePurgeTableIndex])(WdfDriverGlobals, Queue, PurgeComplete, Context);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIOQUEUEREADYNOTIFY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFQUEUE Queue,
   
    PFN_WDF_IO_QUEUE_STATE QueueReady,
   
    WDFCONTEXT Context
    );


__inline
NTSTATUS
WdfIoQueueReadyNotify(
   
    WDFQUEUE Queue,
   
    PFN_WDF_IO_QUEUE_STATE QueueReady,
   
    WDFCONTEXT Context
    )
{
    return ((PFN_WDFIOQUEUEREADYNOTIFY) WdfFunctions_01033[WdfIoQueueReadyNotifyTableIndex])(WdfDriverGlobals, Queue, QueueReady, Context);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFIOQUEUEASSIGNFORWARDPROGRESSPOLICY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFQUEUE Queue,
   
    PWDF_IO_QUEUE_FORWARD_PROGRESS_POLICY ForwardProgressPolicy
    );


__inline
NTSTATUS
WdfIoQueueAssignForwardProgressPolicy(
   
    WDFQUEUE Queue,
   
    PWDF_IO_QUEUE_FORWARD_PROGRESS_POLICY ForwardProgressPolicy
    )
{
    return ((PFN_WDFIOQUEUEASSIGNFORWARDPROGRESSPOLICY) WdfFunctions_01033[WdfIoQueueAssignForwardProgressPolicyTableIndex])(WdfDriverGlobals, Queue, ForwardProgressPolicy);
}
typedef


VOID
(NTAPI *PFN_WDFIOQUEUESTOPANDPURGE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFQUEUE Queue,
   
   
    PFN_WDF_IO_QUEUE_STATE StopAndPurgeComplete,
   
   
    WDFCONTEXT Context
    );

__inline
VOID
WdfIoQueueStopAndPurge(
   
    WDFQUEUE Queue,
   
   
    PFN_WDF_IO_QUEUE_STATE StopAndPurgeComplete,
   
   
    WDFCONTEXT Context
    )
{
    ((PFN_WDFIOQUEUESTOPANDPURGE) WdfFunctions_01033[WdfIoQueueStopAndPurgeTableIndex])(WdfDriverGlobals, Queue, StopAndPurgeComplete, Context);
}
typedef


VOID
(NTAPI *PFN_WDFIOQUEUESTOPANDPURGESYNCHRONOUSLY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFQUEUE Queue
    );

__inline
VOID
WdfIoQueueStopAndPurgeSynchronously(
   
    WDFQUEUE Queue
    )
{
    ((PFN_WDFIOQUEUESTOPANDPURGESYNCHRONOUSLY) WdfFunctions_01033[WdfIoQueueStopAndPurgeSynchronouslyTableIndex])(WdfDriverGlobals, Queue);
}


typedef



NTSTATUS
NTAPI
EVT_WDF_DEVICE_FILTER_RESOURCE_REQUIREMENTS(
   
    WDFDEVICE Device,
   
    WDFIORESREQLIST IoResourceRequirementsList
    );
typedef EVT_WDF_DEVICE_FILTER_RESOURCE_REQUIREMENTS *PFN_WDF_DEVICE_FILTER_RESOURCE_REQUIREMENTS;
typedef



NTSTATUS
NTAPI
EVT_WDF_DEVICE_REMOVE_ADDED_RESOURCES(
   
    WDFDEVICE Device,
   
    WDFCMRESLIST ResourcesRaw,
   
    WDFCMRESLIST ResourcesTranslated
    );
typedef EVT_WDF_DEVICE_REMOVE_ADDED_RESOURCES *PFN_WDF_DEVICE_REMOVE_ADDED_RESOURCES;
typedef struct _WDF_FDO_EVENT_CALLBACKS {
    ULONG Size;
    PFN_WDF_DEVICE_FILTER_RESOURCE_REQUIREMENTS EvtDeviceFilterAddResourceRequirements;
    PFN_WDF_DEVICE_FILTER_RESOURCE_REQUIREMENTS EvtDeviceFilterRemoveResourceRequirements;
    PFN_WDF_DEVICE_REMOVE_ADDED_RESOURCES EvtDeviceRemoveAddedResources;
} WDF_FDO_EVENT_CALLBACKS, *PWDF_FDO_EVENT_CALLBACKS;
VOID
__inline
WDF_FDO_EVENT_CALLBACKS_INIT(
    PWDF_FDO_EVENT_CALLBACKS Callbacks
    )
{
    RtlZeroMemory(Callbacks, sizeof(WDF_FDO_EVENT_CALLBACKS));
    Callbacks->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_FDO_EVENT_CALLBACKS < WdfStructureCount) ? WdfStructures[INDEX_WDF_FDO_EVENT_CALLBACKS] : (size_t)(-1) ) : sizeof(WDF_FDO_EVENT_CALLBACKS) );
}
typedef


PDEVICE_OBJECT
(NTAPI *PFN_WDFFDOINITWDMGETPHYSICALDEVICE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit
    );

__inline
PDEVICE_OBJECT
WdfFdoInitWdmGetPhysicalDevice(
   
    PWDFDEVICE_INIT DeviceInit
    )
{
    return ((PFN_WDFFDOINITWDMGETPHYSICALDEVICE) WdfFunctions_01033[WdfFdoInitWdmGetPhysicalDeviceTableIndex])(WdfDriverGlobals, DeviceInit);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFFDOINITOPENREGISTRYKEY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    ULONG DeviceInstanceKeyType,
   
    ACCESS_MASK DesiredAccess,
   
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
   
    WDFKEY* Key
    );


__inline
NTSTATUS
WdfFdoInitOpenRegistryKey(
   
    PWDFDEVICE_INIT DeviceInit,
   
    ULONG DeviceInstanceKeyType,
   
    ACCESS_MASK DesiredAccess,
   
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
   
    WDFKEY* Key
    )
{
    return ((PFN_WDFFDOINITOPENREGISTRYKEY) WdfFunctions_01033[WdfFdoInitOpenRegistryKeyTableIndex])(WdfDriverGlobals, DeviceInit, DeviceInstanceKeyType, DesiredAccess, KeyAttributes, Key);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFFDOINITQUERYPROPERTY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
   
    ULONG BufferLength,
   
    PVOID PropertyBuffer,
   
    PULONG ResultLength
    );


__inline
NTSTATUS
WdfFdoInitQueryProperty(
   
    PWDFDEVICE_INIT DeviceInit,
   
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
   
    ULONG BufferLength,
   
    PVOID PropertyBuffer,
   
    PULONG ResultLength
    )
{
    return ((PFN_WDFFDOINITQUERYPROPERTY) WdfFunctions_01033[WdfFdoInitQueryPropertyTableIndex])(WdfDriverGlobals, DeviceInit, DeviceProperty, BufferLength, PropertyBuffer, ResultLength);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFFDOINITALLOCANDQUERYPROPERTY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
   
   
    POOL_TYPE PoolType,
   
    PWDF_OBJECT_ATTRIBUTES PropertyMemoryAttributes,
   
    WDFMEMORY* PropertyMemory
    );


__inline
NTSTATUS
WdfFdoInitAllocAndQueryProperty(
   
    PWDFDEVICE_INIT DeviceInit,
   
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
   
   
    POOL_TYPE PoolType,
   
    PWDF_OBJECT_ATTRIBUTES PropertyMemoryAttributes,
   
    WDFMEMORY* PropertyMemory
    )
{
    return ((PFN_WDFFDOINITALLOCANDQUERYPROPERTY) WdfFunctions_01033[WdfFdoInitAllocAndQueryPropertyTableIndex])(WdfDriverGlobals, DeviceInit, DeviceProperty, PoolType, PropertyMemoryAttributes, PropertyMemory);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFFDOINITQUERYPROPERTYEX)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    PWDF_DEVICE_PROPERTY_DATA DeviceProperty,
   
    ULONG BufferLength,
   
    PVOID PropertyBuffer,
   
    PULONG ResultLength,
   
    PDEVPROPTYPE Type
    );


__inline
NTSTATUS
WdfFdoInitQueryPropertyEx(
   
    PWDFDEVICE_INIT DeviceInit,
   
    PWDF_DEVICE_PROPERTY_DATA DeviceProperty,
   
    ULONG BufferLength,
   
    PVOID PropertyBuffer,
   
    PULONG ResultLength,
   
    PDEVPROPTYPE Type
    )
{
    return ((PFN_WDFFDOINITQUERYPROPERTYEX) WdfFunctions_01033[WdfFdoInitQueryPropertyExTableIndex])(WdfDriverGlobals, DeviceInit, DeviceProperty, BufferLength, PropertyBuffer, ResultLength, Type);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFFDOINITALLOCANDQUERYPROPERTYEX)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    PWDF_DEVICE_PROPERTY_DATA DeviceProperty,
   
   
    POOL_TYPE PoolType,
   
    PWDF_OBJECT_ATTRIBUTES PropertyMemoryAttributes,
   
    WDFMEMORY* PropertyMemory,
   
    PDEVPROPTYPE Type
    );


__inline
NTSTATUS
WdfFdoInitAllocAndQueryPropertyEx(
   
    PWDFDEVICE_INIT DeviceInit,
   
    PWDF_DEVICE_PROPERTY_DATA DeviceProperty,
   
   
    POOL_TYPE PoolType,
   
    PWDF_OBJECT_ATTRIBUTES PropertyMemoryAttributes,
   
    WDFMEMORY* PropertyMemory,
   
    PDEVPROPTYPE Type
    )
{
    return ((PFN_WDFFDOINITALLOCANDQUERYPROPERTYEX) WdfFunctions_01033[WdfFdoInitAllocAndQueryPropertyExTableIndex])(WdfDriverGlobals, DeviceInit, DeviceProperty, PoolType, PropertyMemoryAttributes, PropertyMemory, Type);
}
typedef


VOID
(NTAPI *PFN_WDFFDOINITSETEVENTCALLBACKS)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    PWDF_FDO_EVENT_CALLBACKS FdoEventCallbacks
    );

__inline
VOID
WdfFdoInitSetEventCallbacks(
   
    PWDFDEVICE_INIT DeviceInit,
   
    PWDF_FDO_EVENT_CALLBACKS FdoEventCallbacks
    )
{
    ((PFN_WDFFDOINITSETEVENTCALLBACKS) WdfFunctions_01033[WdfFdoInitSetEventCallbacksTableIndex])(WdfDriverGlobals, DeviceInit, FdoEventCallbacks);
}
typedef


VOID
(NTAPI *PFN_WDFFDOINITSETFILTER)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit
    );

__inline
VOID
WdfFdoInitSetFilter(
   
    PWDFDEVICE_INIT DeviceInit
    )
{
    ((PFN_WDFFDOINITSETFILTER) WdfFunctions_01033[WdfFdoInitSetFilterTableIndex])(WdfDriverGlobals, DeviceInit);
}
typedef


VOID
(NTAPI *PFN_WDFFDOINITSETDEFAULTCHILDLISTCONFIG)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    PWDF_CHILD_LIST_CONFIG Config,
   
    PWDF_OBJECT_ATTRIBUTES DefaultChildListAttributes
    );

__inline
VOID
WdfFdoInitSetDefaultChildListConfig(
   
    PWDFDEVICE_INIT DeviceInit,
   
    PWDF_CHILD_LIST_CONFIG Config,
   
    PWDF_OBJECT_ATTRIBUTES DefaultChildListAttributes
    )
{
    ((PFN_WDFFDOINITSETDEFAULTCHILDLISTCONFIG) WdfFunctions_01033[WdfFdoInitSetDefaultChildListConfigTableIndex])(WdfDriverGlobals, DeviceInit, Config, DefaultChildListAttributes);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFFDOQUERYFORINTERFACE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Fdo,
   
    LPCGUID InterfaceType,
   
    PINTERFACE Interface,
   
    USHORT Size,
   
    USHORT Version,
   
    PVOID InterfaceSpecificData
    );


__inline
NTSTATUS
WdfFdoQueryForInterface(
   
    WDFDEVICE Fdo,
   
    LPCGUID InterfaceType,
   
    PINTERFACE Interface,
   
    USHORT Size,
   
    USHORT Version,
   
    PVOID InterfaceSpecificData
    )
{
    return ((PFN_WDFFDOQUERYFORINTERFACE) WdfFunctions_01033[WdfFdoQueryForInterfaceTableIndex])(WdfDriverGlobals, Fdo, InterfaceType, Interface, Size, Version, InterfaceSpecificData);
}
typedef


WDFCHILDLIST
(NTAPI *PFN_WDFFDOGETDEFAULTCHILDLIST)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Fdo
    );

__inline
WDFCHILDLIST
WdfFdoGetDefaultChildList(
   
    WDFDEVICE Fdo
    )
{
    return ((PFN_WDFFDOGETDEFAULTCHILDLIST) WdfFunctions_01033[WdfFdoGetDefaultChildListTableIndex])(WdfDriverGlobals, Fdo);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFFDOADDSTATICCHILD)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Fdo,
   
    WDFDEVICE Child
    );


__inline
NTSTATUS
WdfFdoAddStaticChild(
   
    WDFDEVICE Fdo,
   
    WDFDEVICE Child
    )
{
    return ((PFN_WDFFDOADDSTATICCHILD) WdfFunctions_01033[WdfFdoAddStaticChildTableIndex])(WdfDriverGlobals, Fdo, Child);
}
typedef


VOID
(NTAPI *PFN_WDFFDOLOCKSTATICCHILDLISTFORITERATION)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Fdo
    );

__inline
VOID
WdfFdoLockStaticChildListForIteration(
   
    WDFDEVICE Fdo
    )
{
    ((PFN_WDFFDOLOCKSTATICCHILDLISTFORITERATION) WdfFunctions_01033[WdfFdoLockStaticChildListForIterationTableIndex])(WdfDriverGlobals, Fdo);
}
typedef



WDFDEVICE
(NTAPI *PFN_WDFFDORETRIEVENEXTSTATICCHILD)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Fdo,
   
    WDFDEVICE PreviousChild,
   
    ULONG Flags
    );


__inline
WDFDEVICE
WdfFdoRetrieveNextStaticChild(
   
    WDFDEVICE Fdo,
   
    WDFDEVICE PreviousChild,
   
    ULONG Flags
    )
{
    return ((PFN_WDFFDORETRIEVENEXTSTATICCHILD) WdfFunctions_01033[WdfFdoRetrieveNextStaticChildTableIndex])(WdfDriverGlobals, Fdo, PreviousChild, Flags);
}
typedef


VOID
(NTAPI *PFN_WDFFDOUNLOCKSTATICCHILDLISTFROMITERATION)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Fdo
    );

__inline
VOID
WdfFdoUnlockStaticChildListFromIteration(
   
    WDFDEVICE Fdo
    )
{
    ((PFN_WDFFDOUNLOCKSTATICCHILDLISTFROMITERATION) WdfFunctions_01033[WdfFdoUnlockStaticChildListFromIterationTableIndex])(WdfDriverGlobals, Fdo);
}


typedef



NTSTATUS
NTAPI
EVT_WDF_DEVICE_RESOURCES_QUERY(
   
    WDFDEVICE Device,
   
    WDFCMRESLIST Resources
    );
typedef EVT_WDF_DEVICE_RESOURCES_QUERY *PFN_WDF_DEVICE_RESOURCES_QUERY;
typedef



NTSTATUS
NTAPI
EVT_WDF_DEVICE_RESOURCE_REQUIREMENTS_QUERY(
   
    WDFDEVICE Device,
   
    WDFIORESREQLIST IoResourceRequirementsList
    );
typedef EVT_WDF_DEVICE_RESOURCE_REQUIREMENTS_QUERY *PFN_WDF_DEVICE_RESOURCE_REQUIREMENTS_QUERY;
typedef



NTSTATUS
NTAPI
EVT_WDF_DEVICE_EJECT(
   
    WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_EJECT *PFN_WDF_DEVICE_EJECT;
typedef



NTSTATUS
NTAPI
EVT_WDF_DEVICE_SET_LOCK(
   
    WDFDEVICE Device,
   
    BOOLEAN IsLocked
    );
typedef EVT_WDF_DEVICE_SET_LOCK *PFN_WDF_DEVICE_SET_LOCK;
typedef



NTSTATUS
NTAPI
EVT_WDF_DEVICE_ENABLE_WAKE_AT_BUS(
   
    WDFDEVICE Device,
   
    SYSTEM_POWER_STATE PowerState
    );
typedef EVT_WDF_DEVICE_ENABLE_WAKE_AT_BUS *PFN_WDF_DEVICE_ENABLE_WAKE_AT_BUS;
typedef



VOID
NTAPI
EVT_WDF_DEVICE_DISABLE_WAKE_AT_BUS(
   
    WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_DISABLE_WAKE_AT_BUS *PFN_WDF_DEVICE_DISABLE_WAKE_AT_BUS;
typedef



VOID
NTAPI
EVT_WDF_DEVICE_REPORTED_MISSING(
   
    WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_REPORTED_MISSING *PFN_WDF_DEVICE_REPORTED_MISSING;
typedef struct _WDF_PDO_EVENT_CALLBACKS {
    ULONG Size;
    PFN_WDF_DEVICE_RESOURCES_QUERY EvtDeviceResourcesQuery;
    PFN_WDF_DEVICE_RESOURCE_REQUIREMENTS_QUERY EvtDeviceResourceRequirementsQuery;
    PFN_WDF_DEVICE_EJECT EvtDeviceEject;
    PFN_WDF_DEVICE_SET_LOCK EvtDeviceSetLock;
    PFN_WDF_DEVICE_ENABLE_WAKE_AT_BUS EvtDeviceEnableWakeAtBus;
    PFN_WDF_DEVICE_DISABLE_WAKE_AT_BUS EvtDeviceDisableWakeAtBus;
    PFN_WDF_DEVICE_REPORTED_MISSING EvtDeviceReportedMissing;
} WDF_PDO_EVENT_CALLBACKS, *PWDF_PDO_EVENT_CALLBACKS;
VOID
__inline
WDF_PDO_EVENT_CALLBACKS_INIT(
    PWDF_PDO_EVENT_CALLBACKS Callbacks
    )
{
    RtlZeroMemory(Callbacks, sizeof(WDF_PDO_EVENT_CALLBACKS));
    Callbacks->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_PDO_EVENT_CALLBACKS < WdfStructureCount) ? WdfStructures[INDEX_WDF_PDO_EVENT_CALLBACKS] : (size_t)(-1) ) : sizeof(WDF_PDO_EVENT_CALLBACKS) );
}
typedef



PWDFDEVICE_INIT
(NTAPI *PFN_WDFPDOINITALLOCATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE ParentDevice
    );


__inline
PWDFDEVICE_INIT
WdfPdoInitAllocate(
   
    WDFDEVICE ParentDevice
    )
{
    return ((PFN_WDFPDOINITALLOCATE) WdfFunctions_01033[WdfPdoInitAllocateTableIndex])(WdfDriverGlobals, ParentDevice);
}
typedef


VOID
(NTAPI *PFN_WDFPDOINITSETEVENTCALLBACKS)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    PWDF_PDO_EVENT_CALLBACKS DispatchTable
    );

__inline
VOID
WdfPdoInitSetEventCallbacks(
   
    PWDFDEVICE_INIT DeviceInit,
   
    PWDF_PDO_EVENT_CALLBACKS DispatchTable
    )
{
    ((PFN_WDFPDOINITSETEVENTCALLBACKS) WdfFunctions_01033[WdfPdoInitSetEventCallbacksTableIndex])(WdfDriverGlobals, DeviceInit, DispatchTable);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFPDOINITASSIGNDEVICEID)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    PCUNICODE_STRING DeviceID
    );


__inline
NTSTATUS
WdfPdoInitAssignDeviceID(
   
    PWDFDEVICE_INIT DeviceInit,
   
    PCUNICODE_STRING DeviceID
    )
{
    return ((PFN_WDFPDOINITASSIGNDEVICEID) WdfFunctions_01033[WdfPdoInitAssignDeviceIDTableIndex])(WdfDriverGlobals, DeviceInit, DeviceID);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFPDOINITASSIGNINSTANCEID)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    PCUNICODE_STRING InstanceID
    );


__inline
NTSTATUS
WdfPdoInitAssignInstanceID(
   
    PWDFDEVICE_INIT DeviceInit,
   
    PCUNICODE_STRING InstanceID
    )
{
    return ((PFN_WDFPDOINITASSIGNINSTANCEID) WdfFunctions_01033[WdfPdoInitAssignInstanceIDTableIndex])(WdfDriverGlobals, DeviceInit, InstanceID);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFPDOINITADDHARDWAREID)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    PCUNICODE_STRING HardwareID
    );


__inline
NTSTATUS
WdfPdoInitAddHardwareID(
   
    PWDFDEVICE_INIT DeviceInit,
   
    PCUNICODE_STRING HardwareID
    )
{
    return ((PFN_WDFPDOINITADDHARDWAREID) WdfFunctions_01033[WdfPdoInitAddHardwareIDTableIndex])(WdfDriverGlobals, DeviceInit, HardwareID);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFPDOINITADDCOMPATIBLEID)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    PCUNICODE_STRING CompatibleID
    );


__inline
NTSTATUS
WdfPdoInitAddCompatibleID(
   
    PWDFDEVICE_INIT DeviceInit,
   
    PCUNICODE_STRING CompatibleID
    )
{
    return ((PFN_WDFPDOINITADDCOMPATIBLEID) WdfFunctions_01033[WdfPdoInitAddCompatibleIDTableIndex])(WdfDriverGlobals, DeviceInit, CompatibleID);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFPDOINITASSIGNCONTAINERID)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    PCUNICODE_STRING ContainerID
    );


__inline
NTSTATUS
WdfPdoInitAssignContainerID(
   
    PWDFDEVICE_INIT DeviceInit,
   
    PCUNICODE_STRING ContainerID
    )
{
    return ((PFN_WDFPDOINITASSIGNCONTAINERID) WdfFunctions_01033[WdfPdoInitAssignContainerIDTableIndex])(WdfDriverGlobals, DeviceInit, ContainerID);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFPDOINITADDDEVICETEXT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    PCUNICODE_STRING DeviceDescription,
   
    PCUNICODE_STRING DeviceLocation,
   
    LCID LocaleId
    );


__inline
NTSTATUS
WdfPdoInitAddDeviceText(
   
    PWDFDEVICE_INIT DeviceInit,
   
    PCUNICODE_STRING DeviceDescription,
   
    PCUNICODE_STRING DeviceLocation,
   
    LCID LocaleId
    )
{
    return ((PFN_WDFPDOINITADDDEVICETEXT) WdfFunctions_01033[WdfPdoInitAddDeviceTextTableIndex])(WdfDriverGlobals, DeviceInit, DeviceDescription, DeviceLocation, LocaleId);
}
typedef


VOID
(NTAPI *PFN_WDFPDOINITSETDEFAULTLOCALE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    LCID LocaleId
    );

__inline
VOID
WdfPdoInitSetDefaultLocale(
   
    PWDFDEVICE_INIT DeviceInit,
   
    LCID LocaleId
    )
{
    ((PFN_WDFPDOINITSETDEFAULTLOCALE) WdfFunctions_01033[WdfPdoInitSetDefaultLocaleTableIndex])(WdfDriverGlobals, DeviceInit, LocaleId);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFPDOINITASSIGNRAWDEVICE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    CONST GUID* DeviceClassGuid
    );


__inline
NTSTATUS
WdfPdoInitAssignRawDevice(
   
    PWDFDEVICE_INIT DeviceInit,
   
    CONST GUID* DeviceClassGuid
    )
{
    return ((PFN_WDFPDOINITASSIGNRAWDEVICE) WdfFunctions_01033[WdfPdoInitAssignRawDeviceTableIndex])(WdfDriverGlobals, DeviceInit, DeviceClassGuid);
}
typedef


VOID
(NTAPI *PFN_WDFPDOINITALLOWFORWARDINGREQUESTTOPARENT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit
    );

__inline
VOID
WdfPdoInitAllowForwardingRequestToParent(
   
    PWDFDEVICE_INIT DeviceInit
    )
{
    ((PFN_WDFPDOINITALLOWFORWARDINGREQUESTTOPARENT) WdfFunctions_01033[WdfPdoInitAllowForwardingRequestToParentTableIndex])(WdfDriverGlobals, DeviceInit);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFPDOMARKMISSING)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device
    );


__inline
NTSTATUS
WdfPdoMarkMissing(
   
    WDFDEVICE Device
    )
{
    return ((PFN_WDFPDOMARKMISSING) WdfFunctions_01033[WdfPdoMarkMissingTableIndex])(WdfDriverGlobals, Device);
}
typedef


VOID
(NTAPI *PFN_WDFPDOREQUESTEJECT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device
    );

__inline
VOID
WdfPdoRequestEject(
   
    WDFDEVICE Device
    )
{
    ((PFN_WDFPDOREQUESTEJECT) WdfFunctions_01033[WdfPdoRequestEjectTableIndex])(WdfDriverGlobals, Device);
}
typedef


WDFDEVICE
(NTAPI *PFN_WDFPDOGETPARENT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device
    );

__inline
WDFDEVICE
WdfPdoGetParent(
   
    WDFDEVICE Device
    )
{
    return ((PFN_WDFPDOGETPARENT) WdfFunctions_01033[WdfPdoGetParentTableIndex])(WdfDriverGlobals, Device);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFPDORETRIEVEIDENTIFICATIONDESCRIPTION)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription
    );


__inline
NTSTATUS
WdfPdoRetrieveIdentificationDescription(
   
    WDFDEVICE Device,
   
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription
    )
{
    return ((PFN_WDFPDORETRIEVEIDENTIFICATIONDESCRIPTION) WdfFunctions_01033[WdfPdoRetrieveIdentificationDescriptionTableIndex])(WdfDriverGlobals, Device, IdentificationDescription);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFPDORETRIEVEADDRESSDESCRIPTION)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER AddressDescription
    );


__inline
NTSTATUS
WdfPdoRetrieveAddressDescription(
   
    WDFDEVICE Device,
   
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER AddressDescription
    )
{
    return ((PFN_WDFPDORETRIEVEADDRESSDESCRIPTION) WdfFunctions_01033[WdfPdoRetrieveAddressDescriptionTableIndex])(WdfDriverGlobals, Device, AddressDescription);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFPDOUPDATEADDRESSDESCRIPTION)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER AddressDescription
    );


__inline
NTSTATUS
WdfPdoUpdateAddressDescription(
   
    WDFDEVICE Device,
   
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER AddressDescription
    )
{
    return ((PFN_WDFPDOUPDATEADDRESSDESCRIPTION) WdfFunctions_01033[WdfPdoUpdateAddressDescriptionTableIndex])(WdfDriverGlobals, Device, AddressDescription);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFPDOADDEJECTIONRELATIONSPHYSICALDEVICE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PDEVICE_OBJECT PhysicalDevice
    );


__inline
NTSTATUS
WdfPdoAddEjectionRelationsPhysicalDevice(
   
    WDFDEVICE Device,
   
    PDEVICE_OBJECT PhysicalDevice
    )
{
    return ((PFN_WDFPDOADDEJECTIONRELATIONSPHYSICALDEVICE) WdfFunctions_01033[WdfPdoAddEjectionRelationsPhysicalDeviceTableIndex])(WdfDriverGlobals, Device, PhysicalDevice);
}
typedef


VOID
(NTAPI *PFN_WDFPDOREMOVEEJECTIONRELATIONSPHYSICALDEVICE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PDEVICE_OBJECT PhysicalDevice
    );

__inline
VOID
WdfPdoRemoveEjectionRelationsPhysicalDevice(
   
    WDFDEVICE Device,
   
    PDEVICE_OBJECT PhysicalDevice
    )
{
    ((PFN_WDFPDOREMOVEEJECTIONRELATIONSPHYSICALDEVICE) WdfFunctions_01033[WdfPdoRemoveEjectionRelationsPhysicalDeviceTableIndex])(WdfDriverGlobals, Device, PhysicalDevice);
}
typedef


VOID
(NTAPI *PFN_WDFPDOCLEAREJECTIONRELATIONSDEVICES)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device
    );

__inline
VOID
WdfPdoClearEjectionRelationsDevices(
   
    WDFDEVICE Device
    )
{
    ((PFN_WDFPDOCLEAREJECTIONRELATIONSDEVICES) WdfFunctions_01033[WdfPdoClearEjectionRelationsDevicesTableIndex])(WdfDriverGlobals, Device);
}
typedef


VOID
(NTAPI *PFN_WDFPDOINITREMOVEPOWERDEPENDENCYONPARENT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit
    );

__inline
VOID
WdfPdoInitRemovePowerDependencyOnParent(
   
    PWDFDEVICE_INIT DeviceInit
    )
{
    if (( (WdfPdoInitRemovePowerDependencyOnParentTableIndex < 453) || (!WdfClientVersionHigherThanFramework) || (WdfPdoInitRemovePowerDependencyOnParentTableIndex < WdfFunctionCount) )) {
        ((PFN_WDFPDOINITREMOVEPOWERDEPENDENCYONPARENT) WdfFunctions_01033[WdfPdoInitRemovePowerDependencyOnParentTableIndex])(WdfDriverGlobals, DeviceInit);
    }
    else {
        ((PFN_WDFDRIVERERRORREPORTAPIMISSING) WdfFunctions_01033[WdfDriverErrorReportApiMissingTableIndex])(WdfDriverGlobals, WdfGetDriver(), NULL, WdfPdoInitRemovePowerDependencyOnParentTableIndex, FALSE);
    }
}


typedef



VOID
NTAPI
EVT_WDF_DEVICE_SHUTDOWN_NOTIFICATION(
   
    WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_SHUTDOWN_NOTIFICATION *PFN_WDF_DEVICE_SHUTDOWN_NOTIFICATION;
typedef enum _WDF_DEVICE_SHUTDOWN_FLAGS {
    WdfDeviceShutdown = 0x01,
    WdfDeviceLastChanceShutdown = 0x02,
} WDF_DEVICE_SHUTDOWN_FLAGS;
typedef



PWDFDEVICE_INIT
(NTAPI *PFN_WDFCONTROLDEVICEINITALLOCATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDRIVER Driver,
   
    CONST UNICODE_STRING* SDDLString
    );


__inline
PWDFDEVICE_INIT
WdfControlDeviceInitAllocate(
   
    WDFDRIVER Driver,
   
    CONST UNICODE_STRING* SDDLString
    )
{
    return ((PFN_WDFCONTROLDEVICEINITALLOCATE) WdfFunctions_01033[WdfControlDeviceInitAllocateTableIndex])(WdfDriverGlobals, Driver, SDDLString);
}
typedef


VOID
(NTAPI *PFN_WDFCONTROLDEVICEINITSETSHUTDOWNNOTIFICATION)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PWDFDEVICE_INIT DeviceInit,
   
    PFN_WDF_DEVICE_SHUTDOWN_NOTIFICATION Notification,
   
    UCHAR Flags
    );

__inline
VOID
WdfControlDeviceInitSetShutdownNotification(
   
    PWDFDEVICE_INIT DeviceInit,
   
    PFN_WDF_DEVICE_SHUTDOWN_NOTIFICATION Notification,
   
    UCHAR Flags
    )
{
    ((PFN_WDFCONTROLDEVICEINITSETSHUTDOWNNOTIFICATION) WdfFunctions_01033[WdfControlDeviceInitSetShutdownNotificationTableIndex])(WdfDriverGlobals, DeviceInit, Notification, Flags);
}
typedef


VOID
(NTAPI *PFN_WDFCONTROLFINISHINITIALIZING)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device
    );

__inline
VOID
WdfControlFinishInitializing(
   
    WDFDEVICE Device
    )
{
    ((PFN_WDFCONTROLFINISHINITIALIZING) WdfFunctions_01033[WdfControlFinishInitializingTableIndex])(WdfDriverGlobals, Device);
}

       

typedef enum _WDF_WMI_PROVIDER_CONTROL {
    WdfWmiControlInvalid = 0,
    WdfWmiEventControl,
    WdfWmiInstanceControl,
} WDF_WMI_PROVIDER_CONTROL;
typedef enum _WDF_WMI_PROVIDER_FLAGS {
    WdfWmiProviderEventOnly = 0x0001,
    WdfWmiProviderExpensive = 0x0002,
    WdfWmiProviderTracing = 0x0004,
    WdfWmiProviderValidFlags = WdfWmiProviderEventOnly | WdfWmiProviderExpensive | WdfWmiProviderTracing,
} WDF_WMI_PROVIDER_FLAGS;
typedef



NTSTATUS
NTAPI
EVT_WDF_WMI_INSTANCE_QUERY_INSTANCE(
   
    WDFWMIINSTANCE WmiInstance,
   
    ULONG OutBufferSize,
   
    PVOID OutBuffer,
   
    PULONG BufferUsed
    );
typedef EVT_WDF_WMI_INSTANCE_QUERY_INSTANCE *PFN_WDF_WMI_INSTANCE_QUERY_INSTANCE;
typedef



NTSTATUS
NTAPI
EVT_WDF_WMI_INSTANCE_SET_INSTANCE(
   
    WDFWMIINSTANCE WmiInstance,
   
    ULONG InBufferSize,
   
    PVOID InBuffer
    );
typedef EVT_WDF_WMI_INSTANCE_SET_INSTANCE *PFN_WDF_WMI_INSTANCE_SET_INSTANCE;
typedef



NTSTATUS
NTAPI
EVT_WDF_WMI_INSTANCE_SET_ITEM(
   
    WDFWMIINSTANCE WmiInstance,
   
    ULONG DataItemId,
   
    ULONG InBufferSize,
   
    PVOID InBuffer
    );
typedef EVT_WDF_WMI_INSTANCE_SET_ITEM *PFN_WDF_WMI_INSTANCE_SET_ITEM;
typedef



NTSTATUS
NTAPI
EVT_WDF_WMI_INSTANCE_EXECUTE_METHOD(
   
    WDFWMIINSTANCE WmiInstance,
   
    ULONG MethodId,
   
    ULONG InBufferSize,
   
    ULONG OutBufferSize,
   
   
    PVOID Buffer,
   
    PULONG BufferUsed
    );
typedef EVT_WDF_WMI_INSTANCE_EXECUTE_METHOD *PFN_WDF_WMI_INSTANCE_EXECUTE_METHOD;
typedef



NTSTATUS
NTAPI
EVT_WDF_WMI_PROVIDER_FUNCTION_CONTROL(
   
    WDFWMIPROVIDER WmiProvider,
   
    WDF_WMI_PROVIDER_CONTROL Control,
   
    BOOLEAN Enable
    );
typedef EVT_WDF_WMI_PROVIDER_FUNCTION_CONTROL *PFN_WDF_WMI_PROVIDER_FUNCTION_CONTROL;
typedef struct _WDF_WMI_PROVIDER_CONFIG {
    ULONG Size;
    GUID Guid;
    ULONG Flags;
    ULONG MinInstanceBufferSize;
    PFN_WDF_WMI_PROVIDER_FUNCTION_CONTROL EvtWmiProviderFunctionControl;
} WDF_WMI_PROVIDER_CONFIG, *PWDF_WMI_PROVIDER_CONFIG;
VOID
__inline
WDF_WMI_PROVIDER_CONFIG_INIT(
    PWDF_WMI_PROVIDER_CONFIG Config,
    CONST GUID* Guid
    )
{
    RtlZeroMemory(Config, sizeof(WDF_WMI_PROVIDER_CONFIG));
    Config->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_WMI_PROVIDER_CONFIG < WdfStructureCount) ? WdfStructures[INDEX_WDF_WMI_PROVIDER_CONFIG] : (size_t)(-1) ) : sizeof(WDF_WMI_PROVIDER_CONFIG) );
    RtlCopyMemory(&Config->Guid, Guid, sizeof(GUID));
}
typedef struct _WDF_WMI_INSTANCE_CONFIG {
    ULONG Size;
    WDFWMIPROVIDER Provider;
    PWDF_WMI_PROVIDER_CONFIG ProviderConfig;
    BOOLEAN UseContextForQuery;
    BOOLEAN Register;
    PFN_WDF_WMI_INSTANCE_QUERY_INSTANCE EvtWmiInstanceQueryInstance;
    PFN_WDF_WMI_INSTANCE_SET_INSTANCE EvtWmiInstanceSetInstance;
    PFN_WDF_WMI_INSTANCE_SET_ITEM EvtWmiInstanceSetItem;
    PFN_WDF_WMI_INSTANCE_EXECUTE_METHOD EvtWmiInstanceExecuteMethod;
} WDF_WMI_INSTANCE_CONFIG, *PWDF_WMI_INSTANCE_CONFIG;


typedef



NTSTATUS
(NTAPI *PFN_WDFSTRINGCREATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    PCUNICODE_STRING UnicodeString,
   
    PWDF_OBJECT_ATTRIBUTES StringAttributes,
   
    WDFSTRING* String
    );


__inline
NTSTATUS
WdfStringCreate(
   
    PCUNICODE_STRING UnicodeString,
   
    PWDF_OBJECT_ATTRIBUTES StringAttributes,
   
    WDFSTRING* String
    )
{
    return ((PFN_WDFSTRINGCREATE) WdfFunctions_01033[WdfStringCreateTableIndex])(WdfDriverGlobals, UnicodeString, StringAttributes, String);
}
typedef


VOID
(NTAPI *PFN_WDFSTRINGGETUNICODESTRING)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFSTRING String,
   
    PUNICODE_STRING UnicodeString
    );

__inline
VOID
WdfStringGetUnicodeString(
   
    WDFSTRING String,
   
    PUNICODE_STRING UnicodeString
    )
{
    ((PFN_WDFSTRINGGETUNICODESTRING) WdfFunctions_01033[WdfStringGetUnicodeStringTableIndex])(WdfDriverGlobals, String, UnicodeString);
}


typedef



NTSTATUS
(NTAPI *PFN_WDFREGISTRYOPENKEY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFKEY ParentKey,
   
    PCUNICODE_STRING KeyName,
   
    ACCESS_MASK DesiredAccess,
   
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
   
    WDFKEY* Key
    );


__inline
NTSTATUS
WdfRegistryOpenKey(
   
    WDFKEY ParentKey,
   
    PCUNICODE_STRING KeyName,
   
    ACCESS_MASK DesiredAccess,
   
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
   
    WDFKEY* Key
    )
{
    return ((PFN_WDFREGISTRYOPENKEY) WdfFunctions_01033[WdfRegistryOpenKeyTableIndex])(WdfDriverGlobals, ParentKey, KeyName, DesiredAccess, KeyAttributes, Key);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREGISTRYCREATEKEY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFKEY ParentKey,
   
    PCUNICODE_STRING KeyName,
   
    ACCESS_MASK DesiredAccess,
   
    ULONG CreateOptions,
   
    PULONG CreateDisposition,
   
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
   
    WDFKEY* Key
    );


__inline
NTSTATUS
WdfRegistryCreateKey(
   
    WDFKEY ParentKey,
   
    PCUNICODE_STRING KeyName,
   
    ACCESS_MASK DesiredAccess,
   
    ULONG CreateOptions,
   
    PULONG CreateDisposition,
   
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
   
    WDFKEY* Key
    )
{
    return ((PFN_WDFREGISTRYCREATEKEY) WdfFunctions_01033[WdfRegistryCreateKeyTableIndex])(WdfDriverGlobals, ParentKey, KeyName, DesiredAccess, CreateOptions, CreateDisposition, KeyAttributes, Key);
}
typedef


VOID
(NTAPI *PFN_WDFREGISTRYCLOSE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFKEY Key
    );

__inline
VOID
WdfRegistryClose(
   
    WDFKEY Key
    )
{
    ((PFN_WDFREGISTRYCLOSE) WdfFunctions_01033[WdfRegistryCloseTableIndex])(WdfDriverGlobals, Key);
}
typedef


HANDLE
(NTAPI *PFN_WDFREGISTRYWDMGETHANDLE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFKEY Key
    );

__inline
HANDLE
WdfRegistryWdmGetHandle(
   
    WDFKEY Key
    )
{
    return ((PFN_WDFREGISTRYWDMGETHANDLE) WdfFunctions_01033[WdfRegistryWdmGetHandleTableIndex])(WdfDriverGlobals, Key);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREGISTRYREMOVEKEY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFKEY Key
    );


__inline
NTSTATUS
WdfRegistryRemoveKey(
   
    WDFKEY Key
    )
{
    return ((PFN_WDFREGISTRYREMOVEKEY) WdfFunctions_01033[WdfRegistryRemoveKeyTableIndex])(WdfDriverGlobals, Key);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREGISTRYREMOVEVALUE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName
    );


__inline
NTSTATUS
WdfRegistryRemoveValue(
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName
    )
{
    return ((PFN_WDFREGISTRYREMOVEVALUE) WdfFunctions_01033[WdfRegistryRemoveValueTableIndex])(WdfDriverGlobals, Key, ValueName);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREGISTRYQUERYVALUE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName,
   
    ULONG ValueLength,
   
    PVOID Value,
   
    PULONG ValueLengthQueried,
   
    PULONG ValueType
    );


__inline
NTSTATUS
WdfRegistryQueryValue(
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName,
   
    ULONG ValueLength,
   
    PVOID Value,
   
    PULONG ValueLengthQueried,
   
    PULONG ValueType
    )
{
    return ((PFN_WDFREGISTRYQUERYVALUE) WdfFunctions_01033[WdfRegistryQueryValueTableIndex])(WdfDriverGlobals, Key, ValueName, ValueLength, Value, ValueLengthQueried, ValueType);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREGISTRYQUERYMEMORY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName,
   
   
    POOL_TYPE PoolType,
   
    PWDF_OBJECT_ATTRIBUTES MemoryAttributes,
   
    WDFMEMORY* Memory,
   
    PULONG ValueType
    );


__inline
NTSTATUS
WdfRegistryQueryMemory(
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName,
   
   
    POOL_TYPE PoolType,
   
    PWDF_OBJECT_ATTRIBUTES MemoryAttributes,
   
    WDFMEMORY* Memory,
   
    PULONG ValueType
    )
{
    return ((PFN_WDFREGISTRYQUERYMEMORY) WdfFunctions_01033[WdfRegistryQueryMemoryTableIndex])(WdfDriverGlobals, Key, ValueName, PoolType, MemoryAttributes, Memory, ValueType);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREGISTRYQUERYMULTISTRING)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName,
   
    PWDF_OBJECT_ATTRIBUTES StringsAttributes,
   
    WDFCOLLECTION Collection
    );


__inline
NTSTATUS
WdfRegistryQueryMultiString(
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName,
   
    PWDF_OBJECT_ATTRIBUTES StringsAttributes,
   
    WDFCOLLECTION Collection
    )
{
    return ((PFN_WDFREGISTRYQUERYMULTISTRING) WdfFunctions_01033[WdfRegistryQueryMultiStringTableIndex])(WdfDriverGlobals, Key, ValueName, StringsAttributes, Collection);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREGISTRYQUERYUNICODESTRING)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName,
   
    PUSHORT ValueByteLength,
   
    PUNICODE_STRING Value
    );


__inline
NTSTATUS
WdfRegistryQueryUnicodeString(
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName,
   
    PUSHORT ValueByteLength,
   
    PUNICODE_STRING Value
    )
{
    return ((PFN_WDFREGISTRYQUERYUNICODESTRING) WdfFunctions_01033[WdfRegistryQueryUnicodeStringTableIndex])(WdfDriverGlobals, Key, ValueName, ValueByteLength, Value);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREGISTRYQUERYSTRING)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName,
   
    WDFSTRING String
    );


__inline
NTSTATUS
WdfRegistryQueryString(
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName,
   
    WDFSTRING String
    )
{
    return ((PFN_WDFREGISTRYQUERYSTRING) WdfFunctions_01033[WdfRegistryQueryStringTableIndex])(WdfDriverGlobals, Key, ValueName, String);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREGISTRYQUERYULONG)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName,
   
    PULONG Value
    );


__inline
NTSTATUS
WdfRegistryQueryULong(
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName,
   
    PULONG Value
    )
{
    return ((PFN_WDFREGISTRYQUERYULONG) WdfFunctions_01033[WdfRegistryQueryULongTableIndex])(WdfDriverGlobals, Key, ValueName, Value);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREGISTRYASSIGNVALUE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName,
   
    ULONG ValueType,
   
    ULONG ValueLength,
   
    PVOID Value
    );


__inline
NTSTATUS
WdfRegistryAssignValue(
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName,
   
    ULONG ValueType,
   
    ULONG ValueLength,
   
    PVOID Value
    )
{
    return ((PFN_WDFREGISTRYASSIGNVALUE) WdfFunctions_01033[WdfRegistryAssignValueTableIndex])(WdfDriverGlobals, Key, ValueName, ValueType, ValueLength, Value);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREGISTRYASSIGNMEMORY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName,
   
    ULONG ValueType,
   
    WDFMEMORY Memory,
   
    PWDFMEMORY_OFFSET MemoryOffsets
    );


__inline
NTSTATUS
WdfRegistryAssignMemory(
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName,
   
    ULONG ValueType,
   
    WDFMEMORY Memory,
   
    PWDFMEMORY_OFFSET MemoryOffsets
    )
{
    return ((PFN_WDFREGISTRYASSIGNMEMORY) WdfFunctions_01033[WdfRegistryAssignMemoryTableIndex])(WdfDriverGlobals, Key, ValueName, ValueType, Memory, MemoryOffsets);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREGISTRYASSIGNMULTISTRING)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName,
   
    WDFCOLLECTION StringsCollection
    );


__inline
NTSTATUS
WdfRegistryAssignMultiString(
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName,
   
    WDFCOLLECTION StringsCollection
    )
{
    return ((PFN_WDFREGISTRYASSIGNMULTISTRING) WdfFunctions_01033[WdfRegistryAssignMultiStringTableIndex])(WdfDriverGlobals, Key, ValueName, StringsCollection);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREGISTRYASSIGNUNICODESTRING)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName,
   
    PCUNICODE_STRING Value
    );


__inline
NTSTATUS
WdfRegistryAssignUnicodeString(
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName,
   
    PCUNICODE_STRING Value
    )
{
    return ((PFN_WDFREGISTRYASSIGNUNICODESTRING) WdfFunctions_01033[WdfRegistryAssignUnicodeStringTableIndex])(WdfDriverGlobals, Key, ValueName, Value);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREGISTRYASSIGNSTRING)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName,
   
    WDFSTRING String
    );


__inline
NTSTATUS
WdfRegistryAssignString(
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName,
   
    WDFSTRING String
    )
{
    return ((PFN_WDFREGISTRYASSIGNSTRING) WdfFunctions_01033[WdfRegistryAssignStringTableIndex])(WdfDriverGlobals, Key, ValueName, String);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFREGISTRYASSIGNULONG)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName,
   
    ULONG Value
    );


__inline
NTSTATUS
WdfRegistryAssignULong(
   
    WDFKEY Key,
   
    PCUNICODE_STRING ValueName,
   
    ULONG Value
    )
{
    return ((PFN_WDFREGISTRYASSIGNULONG) WdfFunctions_01033[WdfRegistryAssignULongTableIndex])(WdfDriverGlobals, Key, ValueName, Value);
}


typedef enum _WDF_DMA_PROFILE {
    WdfDmaProfileInvalid = 0,
    WdfDmaProfilePacket,
    WdfDmaProfileScatterGather,
    WdfDmaProfilePacket64,
    WdfDmaProfileScatterGather64,
    WdfDmaProfileScatterGatherDuplex,
    WdfDmaProfileScatterGather64Duplex,
    WdfDmaProfileSystem,
    WdfDmaProfileSystemDuplex,
} WDF_DMA_PROFILE;
typedef enum _WDF_DMA_DIRECTION {
    WdfDmaDirectionReadFromDevice = FALSE,
    WdfDmaDirectionWriteToDevice = TRUE,
} WDF_DMA_DIRECTION;
typedef



NTSTATUS
NTAPI
EVT_WDF_DMA_ENABLER_FILL(
   
    WDFDMAENABLER DmaEnabler
    );
typedef EVT_WDF_DMA_ENABLER_FILL *PFN_WDF_DMA_ENABLER_FILL;
typedef



NTSTATUS
NTAPI
EVT_WDF_DMA_ENABLER_FLUSH(
   
    WDFDMAENABLER DmaEnabler
    );
typedef EVT_WDF_DMA_ENABLER_FLUSH *PFN_WDF_DMA_ENABLER_FLUSH;
typedef



NTSTATUS
NTAPI
EVT_WDF_DMA_ENABLER_ENABLE(
   
    WDFDMAENABLER DmaEnabler
    );
typedef EVT_WDF_DMA_ENABLER_ENABLE *PFN_WDF_DMA_ENABLER_ENABLE;
typedef



NTSTATUS
NTAPI
EVT_WDF_DMA_ENABLER_DISABLE(
   
    WDFDMAENABLER DmaEnabler
    );
typedef EVT_WDF_DMA_ENABLER_DISABLE *PFN_WDF_DMA_ENABLER_DISABLE;
typedef



NTSTATUS
NTAPI
EVT_WDF_DMA_ENABLER_SELFMANAGED_IO_START(
   
    WDFDMAENABLER DmaEnabler
    );
typedef EVT_WDF_DMA_ENABLER_SELFMANAGED_IO_START *PFN_WDF_DMA_ENABLER_SELFMANAGED_IO_START;
typedef



NTSTATUS
NTAPI
EVT_WDF_DMA_ENABLER_SELFMANAGED_IO_STOP(
   
    WDFDMAENABLER DmaEnabler
    );
typedef EVT_WDF_DMA_ENABLER_SELFMANAGED_IO_STOP *PFN_WDF_DMA_ENABLER_SELFMANAGED_IO_STOP;
typedef enum _WDF_DMA_ENABLER_CONFIG_FLAGS {
    WDF_DMA_ENABLER_CONFIG_NO_SGLIST_PREALLOCATION = 0x00000001,
    WDF_DMA_ENABLER_CONFIG_REQUIRE_SINGLE_TRANSFER = 0x00000002,
} WDF_DMA_ENABLER_CONFIG_FLAGS;
typedef struct _WDF_DMA_ENABLER_CONFIG {
    ULONG Size;
    WDF_DMA_PROFILE Profile;
    size_t MaximumLength;
    PFN_WDF_DMA_ENABLER_FILL EvtDmaEnablerFill;
    PFN_WDF_DMA_ENABLER_FLUSH EvtDmaEnablerFlush;
    PFN_WDF_DMA_ENABLER_DISABLE EvtDmaEnablerDisable;
    PFN_WDF_DMA_ENABLER_ENABLE EvtDmaEnablerEnable;
    PFN_WDF_DMA_ENABLER_SELFMANAGED_IO_START EvtDmaEnablerSelfManagedIoStart;
    PFN_WDF_DMA_ENABLER_SELFMANAGED_IO_STOP EvtDmaEnablerSelfManagedIoStop;
    ULONG AddressWidthOverride;
    ULONG WdmDmaVersionOverride;
    ULONG Flags;
} WDF_DMA_ENABLER_CONFIG, *PWDF_DMA_ENABLER_CONFIG;
VOID
__inline
WDF_DMA_ENABLER_CONFIG_INIT(
    PWDF_DMA_ENABLER_CONFIG Config,
    WDF_DMA_PROFILE Profile,
    size_t MaximumLength
    )
{
    RtlZeroMemory(Config, sizeof(WDF_DMA_ENABLER_CONFIG));
    Config->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_DMA_ENABLER_CONFIG < WdfStructureCount) ? WdfStructures[INDEX_WDF_DMA_ENABLER_CONFIG] : (size_t)(-1) ) : sizeof(WDF_DMA_ENABLER_CONFIG) );
    Config->Profile = Profile;
    Config->MaximumLength = MaximumLength;
}
typedef struct _WDF_DMA_SYSTEM_PROFILE_CONFIG {
    ULONG Size;
    BOOLEAN DemandMode;
    BOOLEAN LoopedTransfer;
    DMA_WIDTH DmaWidth;
    PHYSICAL_ADDRESS DeviceAddress;
    PCM_PARTIAL_RESOURCE_DESCRIPTOR DmaDescriptor;
} WDF_DMA_SYSTEM_PROFILE_CONFIG, *PWDF_DMA_SYSTEM_PROFILE_CONFIG;
VOID
__inline
WDF_DMA_SYSTEM_PROFILE_CONFIG_INIT(
    PWDF_DMA_SYSTEM_PROFILE_CONFIG DmaConfig,
    PHYSICAL_ADDRESS Address,
    DMA_WIDTH DmaWidth,
    PCM_PARTIAL_RESOURCE_DESCRIPTOR DmaDescriptor
    )
{
    RtlZeroMemory(DmaConfig, sizeof(WDF_DMA_SYSTEM_PROFILE_CONFIG));
    DmaConfig->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_DMA_SYSTEM_PROFILE_CONFIG < WdfStructureCount) ? WdfStructures[INDEX_WDF_DMA_SYSTEM_PROFILE_CONFIG] : (size_t)(-1) ) : sizeof(WDF_DMA_SYSTEM_PROFILE_CONFIG) );
    DmaConfig->DeviceAddress = Address;
    DmaConfig->DmaWidth = DmaWidth;
    DmaConfig->DmaDescriptor = DmaDescriptor;
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDMAENABLERCREATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDEVICE Device,
   
    PWDF_DMA_ENABLER_CONFIG Config,
   
    PWDF_OBJECT_ATTRIBUTES Attributes,
   
    WDFDMAENABLER* DmaEnablerHandle
    );


__inline
NTSTATUS
WdfDmaEnablerCreate(
   
    WDFDEVICE Device,
   
    PWDF_DMA_ENABLER_CONFIG Config,
   
    PWDF_OBJECT_ATTRIBUTES Attributes,
   
    WDFDMAENABLER* DmaEnablerHandle
    )
{
    return ((PFN_WDFDMAENABLERCREATE) WdfFunctions_01033[WdfDmaEnablerCreateTableIndex])(WdfDriverGlobals, Device, Config, Attributes, DmaEnablerHandle);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDMAENABLERCONFIGURESYSTEMPROFILE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMAENABLER DmaEnabler,
   
    PWDF_DMA_SYSTEM_PROFILE_CONFIG ProfileConfig,
   
    WDF_DMA_DIRECTION ConfigDirection
    );


__inline
NTSTATUS
WdfDmaEnablerConfigureSystemProfile(
   
    WDFDMAENABLER DmaEnabler,
   
    PWDF_DMA_SYSTEM_PROFILE_CONFIG ProfileConfig,
   
    WDF_DMA_DIRECTION ConfigDirection
    )
{
    return ((PFN_WDFDMAENABLERCONFIGURESYSTEMPROFILE) WdfFunctions_01033[WdfDmaEnablerConfigureSystemProfileTableIndex])(WdfDriverGlobals, DmaEnabler, ProfileConfig, ConfigDirection);
}
typedef


size_t
(NTAPI *PFN_WDFDMAENABLERGETMAXIMUMLENGTH)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMAENABLER DmaEnabler
    );

__inline
size_t
WdfDmaEnablerGetMaximumLength(
   
    WDFDMAENABLER DmaEnabler
    )
{
    return ((PFN_WDFDMAENABLERGETMAXIMUMLENGTH) WdfFunctions_01033[WdfDmaEnablerGetMaximumLengthTableIndex])(WdfDriverGlobals, DmaEnabler);
}
typedef


size_t
(NTAPI *PFN_WDFDMAENABLERGETMAXIMUMSCATTERGATHERELEMENTS)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMAENABLER DmaEnabler
    );

__inline
size_t
WdfDmaEnablerGetMaximumScatterGatherElements(
   
    WDFDMAENABLER DmaEnabler
    )
{
    return ((PFN_WDFDMAENABLERGETMAXIMUMSCATTERGATHERELEMENTS) WdfFunctions_01033[WdfDmaEnablerGetMaximumScatterGatherElementsTableIndex])(WdfDriverGlobals, DmaEnabler);
}
typedef


VOID
(NTAPI *PFN_WDFDMAENABLERSETMAXIMUMSCATTERGATHERELEMENTS)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMAENABLER DmaEnabler,
   
   
    size_t MaximumFragments
    );

__inline
VOID
WdfDmaEnablerSetMaximumScatterGatherElements(
   
    WDFDMAENABLER DmaEnabler,
   
   
    size_t MaximumFragments
    )
{
    ((PFN_WDFDMAENABLERSETMAXIMUMSCATTERGATHERELEMENTS) WdfFunctions_01033[WdfDmaEnablerSetMaximumScatterGatherElementsTableIndex])(WdfDriverGlobals, DmaEnabler, MaximumFragments);
}
typedef


size_t
(NTAPI *PFN_WDFDMAENABLERGETFRAGMENTLENGTH)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMAENABLER DmaEnabler,
   
    WDF_DMA_DIRECTION DmaDirection
    );

__inline
size_t
WdfDmaEnablerGetFragmentLength(
   
    WDFDMAENABLER DmaEnabler,
   
    WDF_DMA_DIRECTION DmaDirection
    )
{
    return ((PFN_WDFDMAENABLERGETFRAGMENTLENGTH) WdfFunctions_01033[WdfDmaEnablerGetFragmentLengthTableIndex])(WdfDriverGlobals, DmaEnabler, DmaDirection);
}
typedef


PDMA_ADAPTER
(NTAPI *PFN_WDFDMAENABLERWDMGETDMAADAPTER)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMAENABLER DmaEnabler,
   
    WDF_DMA_DIRECTION DmaDirection
    );

__inline
PDMA_ADAPTER
WdfDmaEnablerWdmGetDmaAdapter(
   
    WDFDMAENABLER DmaEnabler,
   
    WDF_DMA_DIRECTION DmaDirection
    )
{
    return ((PFN_WDFDMAENABLERWDMGETDMAADAPTER) WdfFunctions_01033[WdfDmaEnablerWdmGetDmaAdapterTableIndex])(WdfDriverGlobals, DmaEnabler, DmaDirection);
}


typedef



BOOLEAN
NTAPI
EVT_WDF_PROGRAM_DMA(
   
    WDFDMATRANSACTION Transaction,
   
    WDFDEVICE Device,
   
    WDFCONTEXT Context,
   
    WDF_DMA_DIRECTION Direction,
   
    PSCATTER_GATHER_LIST SgList
    );
typedef EVT_WDF_PROGRAM_DMA *PFN_WDF_PROGRAM_DMA;
typedef



BOOLEAN
NTAPI
EVT_WDF_DMA_TRANSACTION_CONFIGURE_DMA_CHANNEL(
   
    WDFDMATRANSACTION DmaTransaction,
   
    WDFDEVICE Device,
   
    PVOID Context,
   
    PMDL Mdl,
   
    size_t Offset,
   
    size_t Length
    );
typedef EVT_WDF_DMA_TRANSACTION_CONFIGURE_DMA_CHANNEL *PFN_WDF_DMA_TRANSACTION_CONFIGURE_DMA_CHANNEL;
typedef



VOID
NTAPI
EVT_WDF_DMA_TRANSACTION_DMA_TRANSFER_COMPLETE(
   
    WDFDMATRANSACTION Transaction,
   
    WDFDEVICE Device,
   
    WDFCONTEXT Context,
   
    WDF_DMA_DIRECTION Direction,
   
    DMA_COMPLETION_STATUS Status
    );
typedef EVT_WDF_DMA_TRANSACTION_DMA_TRANSFER_COMPLETE *PFN_WDF_DMA_TRANSACTION_DMA_TRANSFER_COMPLETE;
typedef



VOID
NTAPI
EVT_WDF_RESERVE_DMA(
   
    WDFDMATRANSACTION DmaTransaction,
   
    PVOID Context
    );
typedef EVT_WDF_RESERVE_DMA *PFN_WDF_RESERVE_DMA;
typedef



NTSTATUS
(NTAPI *PFN_WDFDMATRANSACTIONCREATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMAENABLER DmaEnabler,
   
    PWDF_OBJECT_ATTRIBUTES Attributes,
   
    WDFDMATRANSACTION* DmaTransaction
    );


__inline
NTSTATUS
WdfDmaTransactionCreate(
   
    WDFDMAENABLER DmaEnabler,
   
    PWDF_OBJECT_ATTRIBUTES Attributes,
   
    WDFDMATRANSACTION* DmaTransaction
    )
{
    return ((PFN_WDFDMATRANSACTIONCREATE) WdfFunctions_01033[WdfDmaTransactionCreateTableIndex])(WdfDriverGlobals, DmaEnabler, Attributes, DmaTransaction);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDMATRANSACTIONINITIALIZE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMATRANSACTION DmaTransaction,
   
    PFN_WDF_PROGRAM_DMA EvtProgramDmaFunction,
   
    WDF_DMA_DIRECTION DmaDirection,
   
    PMDL Mdl,
   
    PVOID VirtualAddress,
   
   
    size_t Length
    );


__inline
NTSTATUS
WdfDmaTransactionInitialize(
   
    WDFDMATRANSACTION DmaTransaction,
   
    PFN_WDF_PROGRAM_DMA EvtProgramDmaFunction,
   
    WDF_DMA_DIRECTION DmaDirection,
   
    PMDL Mdl,
   
    PVOID VirtualAddress,
   
   
    size_t Length
    )
{
    return ((PFN_WDFDMATRANSACTIONINITIALIZE) WdfFunctions_01033[WdfDmaTransactionInitializeTableIndex])(WdfDriverGlobals, DmaTransaction, EvtProgramDmaFunction, DmaDirection, Mdl, VirtualAddress, Length);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDMATRANSACTIONINITIALIZEUSINGOFFSET)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMATRANSACTION DmaTransaction,
   
    PFN_WDF_PROGRAM_DMA EvtProgramDmaFunction,
   
    WDF_DMA_DIRECTION DmaDirection,
   
    PMDL Mdl,
   
    size_t Offset,
   
   
    size_t Length
    );


__inline
NTSTATUS
WdfDmaTransactionInitializeUsingOffset(
   
    WDFDMATRANSACTION DmaTransaction,
   
    PFN_WDF_PROGRAM_DMA EvtProgramDmaFunction,
   
    WDF_DMA_DIRECTION DmaDirection,
   
    PMDL Mdl,
   
    size_t Offset,
   
   
    size_t Length
    )
{
    return ((PFN_WDFDMATRANSACTIONINITIALIZEUSINGOFFSET) WdfFunctions_01033[WdfDmaTransactionInitializeUsingOffsetTableIndex])(WdfDriverGlobals, DmaTransaction, EvtProgramDmaFunction, DmaDirection, Mdl, Offset, Length);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDMATRANSACTIONINITIALIZEUSINGREQUEST)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMATRANSACTION DmaTransaction,
   
    WDFREQUEST Request,
   
    PFN_WDF_PROGRAM_DMA EvtProgramDmaFunction,
   
    WDF_DMA_DIRECTION DmaDirection
    );


__inline
NTSTATUS
WdfDmaTransactionInitializeUsingRequest(
   
    WDFDMATRANSACTION DmaTransaction,
   
    WDFREQUEST Request,
   
    PFN_WDF_PROGRAM_DMA EvtProgramDmaFunction,
   
    WDF_DMA_DIRECTION DmaDirection
    )
{
    return ((PFN_WDFDMATRANSACTIONINITIALIZEUSINGREQUEST) WdfFunctions_01033[WdfDmaTransactionInitializeUsingRequestTableIndex])(WdfDriverGlobals, DmaTransaction, Request, EvtProgramDmaFunction, DmaDirection);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDMATRANSACTIONEXECUTE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMATRANSACTION DmaTransaction,
   
    WDFCONTEXT Context
    );


__inline
NTSTATUS
WdfDmaTransactionExecute(
   
    WDFDMATRANSACTION DmaTransaction,
   
    WDFCONTEXT Context
    )
{
    return ((PFN_WDFDMATRANSACTIONEXECUTE) WdfFunctions_01033[WdfDmaTransactionExecuteTableIndex])(WdfDriverGlobals, DmaTransaction, Context);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFDMATRANSACTIONRELEASE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMATRANSACTION DmaTransaction
    );


__inline
NTSTATUS
WdfDmaTransactionRelease(
   
    WDFDMATRANSACTION DmaTransaction
    )
{
    return ((PFN_WDFDMATRANSACTIONRELEASE) WdfFunctions_01033[WdfDmaTransactionReleaseTableIndex])(WdfDriverGlobals, DmaTransaction);
}
typedef


BOOLEAN
(NTAPI *PFN_WDFDMATRANSACTIONDMACOMPLETED)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMATRANSACTION DmaTransaction,
   
    NTSTATUS* Status
    );

__inline
BOOLEAN
WdfDmaTransactionDmaCompleted(
   
    WDFDMATRANSACTION DmaTransaction,
   
    NTSTATUS* Status
    )
{
    return ((PFN_WDFDMATRANSACTIONDMACOMPLETED) WdfFunctions_01033[WdfDmaTransactionDmaCompletedTableIndex])(WdfDriverGlobals, DmaTransaction, Status);
}
typedef


BOOLEAN
(NTAPI *PFN_WDFDMATRANSACTIONDMACOMPLETEDWITHLENGTH)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMATRANSACTION DmaTransaction,
   
    size_t TransferredLength,
   
    NTSTATUS* Status
    );

__inline
BOOLEAN
WdfDmaTransactionDmaCompletedWithLength(
   
    WDFDMATRANSACTION DmaTransaction,
   
    size_t TransferredLength,
   
    NTSTATUS* Status
    )
{
    return ((PFN_WDFDMATRANSACTIONDMACOMPLETEDWITHLENGTH) WdfFunctions_01033[WdfDmaTransactionDmaCompletedWithLengthTableIndex])(WdfDriverGlobals, DmaTransaction, TransferredLength, Status);
}
typedef


BOOLEAN
(NTAPI *PFN_WDFDMATRANSACTIONDMACOMPLETEDFINAL)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMATRANSACTION DmaTransaction,
   
    size_t FinalTransferredLength,
   
    NTSTATUS* Status
    );

__inline
BOOLEAN
WdfDmaTransactionDmaCompletedFinal(
   
    WDFDMATRANSACTION DmaTransaction,
   
    size_t FinalTransferredLength,
   
    NTSTATUS* Status
    )
{
    return ((PFN_WDFDMATRANSACTIONDMACOMPLETEDFINAL) WdfFunctions_01033[WdfDmaTransactionDmaCompletedFinalTableIndex])(WdfDriverGlobals, DmaTransaction, FinalTransferredLength, Status);
}
typedef


size_t
(NTAPI *PFN_WDFDMATRANSACTIONGETBYTESTRANSFERRED)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMATRANSACTION DmaTransaction
    );

__inline
size_t
WdfDmaTransactionGetBytesTransferred(
   
    WDFDMATRANSACTION DmaTransaction
    )
{
    return ((PFN_WDFDMATRANSACTIONGETBYTESTRANSFERRED) WdfFunctions_01033[WdfDmaTransactionGetBytesTransferredTableIndex])(WdfDriverGlobals, DmaTransaction);
}
typedef


VOID
(NTAPI *PFN_WDFDMATRANSACTIONSETMAXIMUMLENGTH)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMATRANSACTION DmaTransaction,
   
    size_t MaximumLength
    );

__inline
VOID
WdfDmaTransactionSetMaximumLength(
   
    WDFDMATRANSACTION DmaTransaction,
   
    size_t MaximumLength
    )
{
    ((PFN_WDFDMATRANSACTIONSETMAXIMUMLENGTH) WdfFunctions_01033[WdfDmaTransactionSetMaximumLengthTableIndex])(WdfDriverGlobals, DmaTransaction, MaximumLength);
}
typedef


VOID
(NTAPI *PFN_WDFDMATRANSACTIONSETSINGLETRANSFERREQUIREMENT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMATRANSACTION DmaTransaction,
   
    BOOLEAN RequireSingleTransfer
    );

__inline
VOID
WdfDmaTransactionSetSingleTransferRequirement(
   
    WDFDMATRANSACTION DmaTransaction,
   
    BOOLEAN RequireSingleTransfer
    )
{
    ((PFN_WDFDMATRANSACTIONSETSINGLETRANSFERREQUIREMENT) WdfFunctions_01033[WdfDmaTransactionSetSingleTransferRequirementTableIndex])(WdfDriverGlobals, DmaTransaction, RequireSingleTransfer);
}
typedef


WDFREQUEST
(NTAPI *PFN_WDFDMATRANSACTIONGETREQUEST)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMATRANSACTION DmaTransaction
    );

__inline
WDFREQUEST
WdfDmaTransactionGetRequest(
   
    WDFDMATRANSACTION DmaTransaction
    )
{
    return ((PFN_WDFDMATRANSACTIONGETREQUEST) WdfFunctions_01033[WdfDmaTransactionGetRequestTableIndex])(WdfDriverGlobals, DmaTransaction);
}
typedef


size_t
(NTAPI *PFN_WDFDMATRANSACTIONGETCURRENTDMATRANSFERLENGTH)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMATRANSACTION DmaTransaction
    );

__inline
size_t
WdfDmaTransactionGetCurrentDmaTransferLength(
   
    WDFDMATRANSACTION DmaTransaction
    )
{
    return ((PFN_WDFDMATRANSACTIONGETCURRENTDMATRANSFERLENGTH) WdfFunctions_01033[WdfDmaTransactionGetCurrentDmaTransferLengthTableIndex])(WdfDriverGlobals, DmaTransaction);
}
typedef


WDFDEVICE
(NTAPI *PFN_WDFDMATRANSACTIONGETDEVICE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMATRANSACTION DmaTransaction
    );

__inline
WDFDEVICE
WdfDmaTransactionGetDevice(
   
    WDFDMATRANSACTION DmaTransaction
    )
{
    return ((PFN_WDFDMATRANSACTIONGETDEVICE) WdfFunctions_01033[WdfDmaTransactionGetDeviceTableIndex])(WdfDriverGlobals, DmaTransaction);
}
typedef


VOID
(NTAPI *PFN_WDFDMATRANSACTIONGETTRANSFERINFO)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMATRANSACTION DmaTransaction,
   
    ULONG* MapRegisterCount,
   
    ULONG* ScatterGatherElementCount
    );

__inline
VOID
WdfDmaTransactionGetTransferInfo(
   
    WDFDMATRANSACTION DmaTransaction,
   
    ULONG* MapRegisterCount,
   
    ULONG* ScatterGatherElementCount
    )
{
    ((PFN_WDFDMATRANSACTIONGETTRANSFERINFO) WdfFunctions_01033[WdfDmaTransactionGetTransferInfoTableIndex])(WdfDriverGlobals, DmaTransaction, MapRegisterCount, ScatterGatherElementCount);
}
typedef


VOID
(NTAPI *PFN_WDFDMATRANSACTIONSETCHANNELCONFIGURATIONCALLBACK)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMATRANSACTION DmaTransaction,
   
    PFN_WDF_DMA_TRANSACTION_CONFIGURE_DMA_CHANNEL ConfigureRoutine,
   
    PVOID ConfigureContext
    );

__inline
VOID
WdfDmaTransactionSetChannelConfigurationCallback(
   
    WDFDMATRANSACTION DmaTransaction,
   
    PFN_WDF_DMA_TRANSACTION_CONFIGURE_DMA_CHANNEL ConfigureRoutine,
   
    PVOID ConfigureContext
    )
{
    ((PFN_WDFDMATRANSACTIONSETCHANNELCONFIGURATIONCALLBACK) WdfFunctions_01033[WdfDmaTransactionSetChannelConfigurationCallbackTableIndex])(WdfDriverGlobals, DmaTransaction, ConfigureRoutine, ConfigureContext);
}
typedef


VOID
(NTAPI *PFN_WDFDMATRANSACTIONSETTRANSFERCOMPLETECALLBACK)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMATRANSACTION DmaTransaction,
   
    PFN_WDF_DMA_TRANSACTION_DMA_TRANSFER_COMPLETE DmaCompletionRoutine,
   
    PVOID DmaCompletionContext
    );

__inline
VOID
WdfDmaTransactionSetTransferCompleteCallback(
   
    WDFDMATRANSACTION DmaTransaction,
   
    PFN_WDF_DMA_TRANSACTION_DMA_TRANSFER_COMPLETE DmaCompletionRoutine,
   
    PVOID DmaCompletionContext
    )
{
    ((PFN_WDFDMATRANSACTIONSETTRANSFERCOMPLETECALLBACK) WdfFunctions_01033[WdfDmaTransactionSetTransferCompleteCallbackTableIndex])(WdfDriverGlobals, DmaTransaction, DmaCompletionRoutine, DmaCompletionContext);
}
typedef


VOID
(NTAPI *PFN_WDFDMATRANSACTIONSETIMMEDIATEEXECUTION)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMATRANSACTION DmaTransaction,
   
    BOOLEAN UseImmediateExecution
    );

__inline
VOID
WdfDmaTransactionSetImmediateExecution(
   
    WDFDMATRANSACTION DmaTransaction,
   
    BOOLEAN UseImmediateExecution
    )
{
    ((PFN_WDFDMATRANSACTIONSETIMMEDIATEEXECUTION) WdfFunctions_01033[WdfDmaTransactionSetImmediateExecutionTableIndex])(WdfDriverGlobals, DmaTransaction, UseImmediateExecution);
}
typedef


NTSTATUS
(NTAPI *PFN_WDFDMATRANSACTIONALLOCATERESOURCES)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMATRANSACTION DmaTransaction,
   
    WDF_DMA_DIRECTION DmaDirection,
   
    ULONG RequiredMapRegisters,
   
    PFN_WDF_RESERVE_DMA EvtReserveDmaFunction,
   
    PVOID EvtReserveDmaContext
    );

__inline
NTSTATUS
WdfDmaTransactionAllocateResources(
   
    WDFDMATRANSACTION DmaTransaction,
   
    WDF_DMA_DIRECTION DmaDirection,
   
    ULONG RequiredMapRegisters,
   
    PFN_WDF_RESERVE_DMA EvtReserveDmaFunction,
   
    PVOID EvtReserveDmaContext
    )
{
    return ((PFN_WDFDMATRANSACTIONALLOCATERESOURCES) WdfFunctions_01033[WdfDmaTransactionAllocateResourcesTableIndex])(WdfDriverGlobals, DmaTransaction, DmaDirection, RequiredMapRegisters, EvtReserveDmaFunction, EvtReserveDmaContext);
}
typedef


VOID
(NTAPI *PFN_WDFDMATRANSACTIONSETDEVICEADDRESSOFFSET)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMATRANSACTION DmaTransaction,
   
    ULONG Offset
    );

__inline
VOID
WdfDmaTransactionSetDeviceAddressOffset(
   
    WDFDMATRANSACTION DmaTransaction,
   
    ULONG Offset
    )
{
    ((PFN_WDFDMATRANSACTIONSETDEVICEADDRESSOFFSET) WdfFunctions_01033[WdfDmaTransactionSetDeviceAddressOffsetTableIndex])(WdfDriverGlobals, DmaTransaction, Offset);
}
typedef


VOID
(NTAPI *PFN_WDFDMATRANSACTIONFREERESOURCES)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMATRANSACTION DmaTransaction
    );

__inline
VOID
WdfDmaTransactionFreeResources(
   
    WDFDMATRANSACTION DmaTransaction
    )
{
    ((PFN_WDFDMATRANSACTIONFREERESOURCES) WdfFunctions_01033[WdfDmaTransactionFreeResourcesTableIndex])(WdfDriverGlobals, DmaTransaction);
}
typedef


BOOLEAN
(NTAPI *PFN_WDFDMATRANSACTIONCANCEL)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMATRANSACTION DmaTransaction
    );

__inline
BOOLEAN
WdfDmaTransactionCancel(
   
    WDFDMATRANSACTION DmaTransaction
    )
{
    return ((PFN_WDFDMATRANSACTIONCANCEL) WdfFunctions_01033[WdfDmaTransactionCancelTableIndex])(WdfDriverGlobals, DmaTransaction);
}
typedef


PVOID
(NTAPI *PFN_WDFDMATRANSACTIONWDMGETTRANSFERCONTEXT)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMATRANSACTION DmaTransaction
    );

__inline
PVOID
WdfDmaTransactionWdmGetTransferContext(
   
    WDFDMATRANSACTION DmaTransaction
    )
{
    return ((PFN_WDFDMATRANSACTIONWDMGETTRANSFERCONTEXT) WdfFunctions_01033[WdfDmaTransactionWdmGetTransferContextTableIndex])(WdfDriverGlobals, DmaTransaction);
}
typedef


VOID
(NTAPI *PFN_WDFDMATRANSACTIONSTOPSYSTEMTRANSFER)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMATRANSACTION DmaTransaction
    );

__inline
VOID
WdfDmaTransactionStopSystemTransfer(
   
    WDFDMATRANSACTION DmaTransaction
    )
{
    ((PFN_WDFDMATRANSACTIONSTOPSYSTEMTRANSFER) WdfFunctions_01033[WdfDmaTransactionStopSystemTransferTableIndex])(WdfDriverGlobals, DmaTransaction);
}


typedef struct _WDF_COMMON_BUFFER_CONFIG {
    ULONG Size;
    ULONG AlignmentRequirement;
} WDF_COMMON_BUFFER_CONFIG, *PWDF_COMMON_BUFFER_CONFIG;
VOID
__inline
WDF_COMMON_BUFFER_CONFIG_INIT(
    PWDF_COMMON_BUFFER_CONFIG Config,
    ULONG AlignmentRequirement
    )
{
    RtlZeroMemory(Config, sizeof(WDF_COMMON_BUFFER_CONFIG));
    Config->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_COMMON_BUFFER_CONFIG < WdfStructureCount) ? WdfStructures[INDEX_WDF_COMMON_BUFFER_CONFIG] : (size_t)(-1) ) : sizeof(WDF_COMMON_BUFFER_CONFIG) );
    Config->AlignmentRequirement = AlignmentRequirement;
}
typedef



NTSTATUS
(NTAPI *PFN_WDFCOMMONBUFFERCREATE)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMAENABLER DmaEnabler,
   
   
    size_t Length,
   
    PWDF_OBJECT_ATTRIBUTES Attributes,
   
    WDFCOMMONBUFFER* CommonBuffer
    );


__inline
NTSTATUS
WdfCommonBufferCreate(
   
    WDFDMAENABLER DmaEnabler,
   
   
    size_t Length,
   
    PWDF_OBJECT_ATTRIBUTES Attributes,
   
    WDFCOMMONBUFFER* CommonBuffer
    )
{
    return ((PFN_WDFCOMMONBUFFERCREATE) WdfFunctions_01033[WdfCommonBufferCreateTableIndex])(WdfDriverGlobals, DmaEnabler, Length, Attributes, CommonBuffer);
}
typedef



NTSTATUS
(NTAPI *PFN_WDFCOMMONBUFFERCREATEWITHCONFIG)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFDMAENABLER DmaEnabler,
   
   
    size_t Length,
   
    PWDF_COMMON_BUFFER_CONFIG Config,
   
    PWDF_OBJECT_ATTRIBUTES Attributes,
   
    WDFCOMMONBUFFER* CommonBuffer
    );


__inline
NTSTATUS
WdfCommonBufferCreateWithConfig(
   
    WDFDMAENABLER DmaEnabler,
   
   
    size_t Length,
   
    PWDF_COMMON_BUFFER_CONFIG Config,
   
    PWDF_OBJECT_ATTRIBUTES Attributes,
   
    WDFCOMMONBUFFER* CommonBuffer
    )
{
    return ((PFN_WDFCOMMONBUFFERCREATEWITHCONFIG) WdfFunctions_01033[WdfCommonBufferCreateWithConfigTableIndex])(WdfDriverGlobals, DmaEnabler, Length, Config, Attributes, CommonBuffer);
}
typedef


PVOID
(NTAPI *PFN_WDFCOMMONBUFFERGETALIGNEDVIRTUALADDRESS)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCOMMONBUFFER CommonBuffer
    );

__inline
PVOID
WdfCommonBufferGetAlignedVirtualAddress(
   
    WDFCOMMONBUFFER CommonBuffer
    )
{
    return ((PFN_WDFCOMMONBUFFERGETALIGNEDVIRTUALADDRESS) WdfFunctions_01033[WdfCommonBufferGetAlignedVirtualAddressTableIndex])(WdfDriverGlobals, CommonBuffer);
}
typedef


PHYSICAL_ADDRESS
(NTAPI *PFN_WDFCOMMONBUFFERGETALIGNEDLOGICALADDRESS)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCOMMONBUFFER CommonBuffer
    );

__inline
PHYSICAL_ADDRESS
WdfCommonBufferGetAlignedLogicalAddress(
   
    WDFCOMMONBUFFER CommonBuffer
    )
{
    return ((PFN_WDFCOMMONBUFFERGETALIGNEDLOGICALADDRESS) WdfFunctions_01033[WdfCommonBufferGetAlignedLogicalAddressTableIndex])(WdfDriverGlobals, CommonBuffer);
}
typedef


size_t
(NTAPI *PFN_WDFCOMMONBUFFERGETLENGTH)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCOMMONBUFFER CommonBuffer
    );

__inline
size_t
WdfCommonBufferGetLength(
   
    WDFCOMMONBUFFER CommonBuffer
    )
{
    return ((PFN_WDFCOMMONBUFFERGETLENGTH) WdfFunctions_01033[WdfCommonBufferGetLengthTableIndex])(WdfDriverGlobals, CommonBuffer);
}


typedef enum _WDF_BUGCHECK_CODES {
    WDF_POWER_ROUTINE_TIMED_OUT = 0x1,
    WDF_RECURSIVE_LOCK = 0x2,
    WDF_VERIFIER_FATAL_ERROR = 0x3,
    WDF_REQUIRED_PARAMETER_IS_NULL = 0x4,
    WDF_INVALID_HANDLE = 0x5,
    WDF_REQUEST_FATAL_ERROR = 0x6,
    WDF_OBJECT_ERROR = 0x7,
    WDF_DMA_FATAL_ERROR = 0x8,
    WDF_INVALID_INTERRUPT = 0x9,
    WDF_QUEUE_FATAL_ERROR = 0xA,
    WDF_INVALID_LOCK_OPERATION = 0xB,
    WDF_PNP_FATAL_ERROR = 0xC,
    WDF_POWER_MULTIPLE_PPO = 0xD,
    WDF_VERIFIER_IRQL_MISMATCH = 0xE,
    WDF_VERIFIER_CRITICAL_REGION_MISMATCH = 0xF,
    WDF_API_UNAVAILABLE = 0x10,
} WDF_BUGCHECK_CODES;
typedef enum _WDF_REQUEST_FATAL_ERROR_CODES {
    WDF_REQUEST_FATAL_ERROR_NO_MORE_STACK_LOCATIONS = 0x1,
    WDF_REQUEST_FATAL_ERROR_NULL_IRP = 0x2,
    WDF_REQUEST_FATAL_ERROR_REQUEST_ALREADY_SENT = 0x3,
    WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH = 0x4,
    WDF_REQUEST_FATAL_ERROR_REQUEST_NOT_IN_QUEUE = 05,
} WDF_REQUEST_FATAL_ERROR_CODES;
typedef struct _WDF_POWER_ROUTINE_TIMED_OUT_DATA {
    WDF_DEVICE_POWER_STATE PowerState;
    WDF_DEVICE_POWER_POLICY_STATE PowerPolicyState;
    PDEVICE_OBJECT DeviceObject;
    WDFDEVICE Device;
    PKTHREAD TimedOutThread;
} WDF_POWER_ROUTINE_TIMED_OUT_DATA;
typedef struct _WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA {
    WDFREQUEST Request;
    PIRP Irp;
    ULONG OutputBufferLength;
    ULONG_PTR Information;
    UCHAR MajorFunction;
} WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA,
  *PWDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA;
typedef struct _WDF_QUEUE_FATAL_ERROR_DATA {
    WDFQUEUE Queue;
    WDFREQUEST Request;
    NTSTATUS Status;
} WDF_QUEUE_FATAL_ERROR_DATA, *PWDF_QUEUE_FATAL_ERROR_DATA;


typedef EVT_WDF_OBJECT_CONTEXT_CLEANUP EVT_WDF_DEVICE_CONTEXT_CLEANUP;
typedef EVT_WDF_OBJECT_CONTEXT_DESTROY EVT_WDF_DEVICE_CONTEXT_DESTROY;
typedef EVT_WDF_OBJECT_CONTEXT_CLEANUP EVT_WDF_IO_QUEUE_CONTEXT_CLEANUP_CALLBACK;
typedef EVT_WDF_OBJECT_CONTEXT_DESTROY EVT_WDF_IO_QUEUE_CONTEXT_DESTROY_CALLBACK;
typedef EVT_WDF_OBJECT_CONTEXT_CLEANUP EVT_WDF_FILE_CONTEXT_CLEANUP_CALLBACK;
typedef EVT_WDF_OBJECT_CONTEXT_DESTROY EVT_WDF_FILE_CONTEXT_DESTROY_CALLBACK;




typedef enum _WDF_TASK_SEND_OPTIONS_FLAGS {
    WDF_TASK_SEND_OPTION_TIMEOUT = 0x00000001,
    WDF_TASK_SEND_OPTION_SYNCHRONOUS = 0x00000002,
} WDF_TASK_SEND_OPTIONS_FLAGS;
typedef struct _WDF_TASK_SEND_OPTIONS {
    ULONG Size;
    ULONG Flags;
    LONGLONG Timeout;
} WDF_TASK_SEND_OPTIONS, *PWDF_TASK_SEND_OPTIONS;
VOID
__inline
WDF_TASK_SEND_OPTIONS_INIT(
   
    PWDF_TASK_SEND_OPTIONS Options,
   
    ULONG Flags
    )
{
    RtlZeroMemory(Options, sizeof(WDF_TASK_SEND_OPTIONS));
    Options->Size = (ULONG) ( WdfClientVersionHigherThanFramework ? ( (INDEX_WDF_TASK_SEND_OPTIONS < WdfStructureCount) ? WdfStructures[INDEX_WDF_TASK_SEND_OPTIONS] : (size_t)(-1) ) : sizeof(WDF_TASK_SEND_OPTIONS) );
    Options->Flags = Flags;
}
typedef



NTSTATUS
(NTAPI *PFN_WDFCOMPANIONTARGETSENDTASKSYNCHRONOUSLY)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCOMPANIONTARGET CompanionTarget,
   
    USHORT TaskQueueIdentifier,
   
    ULONG TaskOperationCode,
   
    PWDF_MEMORY_DESCRIPTOR InputBuffer,
   
    PWDF_MEMORY_DESCRIPTOR OutputBuffer,
   
    PWDF_TASK_SEND_OPTIONS TaskOptions,
   
    PULONG_PTR BytesReturned
    );


__inline
NTSTATUS
WdfCompanionTargetSendTaskSynchronously(
   
    WDFCOMPANIONTARGET CompanionTarget,
   
    USHORT TaskQueueIdentifier,
   
    ULONG TaskOperationCode,
   
    PWDF_MEMORY_DESCRIPTOR InputBuffer,
   
    PWDF_MEMORY_DESCRIPTOR OutputBuffer,
   
    PWDF_TASK_SEND_OPTIONS TaskOptions,
   
    PULONG_PTR BytesReturned
    )
{
    return ((PFN_WDFCOMPANIONTARGETSENDTASKSYNCHRONOUSLY) WdfFunctions_01033[WdfCompanionTargetSendTaskSynchronouslyTableIndex])(WdfDriverGlobals, CompanionTarget, TaskQueueIdentifier, TaskOperationCode, InputBuffer, OutputBuffer, TaskOptions, BytesReturned);
}
typedef



PEPROCESS
(NTAPI *PFN_WDFCOMPANIONTARGETWDMGETCOMPANIONPROCESS)(
   
    PWDF_DRIVER_GLOBALS DriverGlobals,
   
    WDFCOMPANIONTARGET CompanionTarget
    );


__inline
PEPROCESS
WdfCompanionTargetWdmGetCompanionProcess(
   
    WDFCOMPANIONTARGET CompanionTarget
    )
{
    return ((PFN_WDFCOMPANIONTARGETWDMGETCOMPANIONPROCESS) WdfFunctions_01033[WdfCompanionTargetWdmGetCompanionProcessTableIndex])(WdfDriverGlobals, CompanionTarget);
}



