#define DEVICE_MEMSETCPY_ALIGN_IN_BYTES 16
#define DISPLAY_CONTROLLER drm_pdp
#define GPUVIRT_VALIDATION_NUM_OS 8
#define ION_DEFAULT_HEAP_ID_MASK (1 << ION_HEAP_TYPE_SYSTEM)
#define ION_DEFAULT_HEAP_NAME "ion_system_heap"
#define LMA
#define PDVFS_COM PDVFS_COM_HOST
#define PDVFS_COM_AP 2
#define PDVFS_COM_HOST 1
#define PDVFS_COM_IMG_CLKDIV 4
#define PDVFS_COM_PMC 3
#define PVRSRV_APPHINT_ASSERTONHWRTRIGGER IMG_FALSE
#define PVRSRV_APPHINT_ASSERTOUTOFMEMORY IMG_FALSE
#define PVRSRV_APPHINT_CACHEOPCONFIG 0
#define PVRSRV_APPHINT_CACHEOPTHREADPRIORITY 1
#define PVRSRV_APPHINT_CACHEOPUMKMHRESHOLDSIZE 0
#define PVRSRV_APPHINT_CHECKMLIST APPHNT_BLDVAR_DEBUG
#define PVRSRV_APPHINT_CLEANUPTHREADPRIORITY 5
#define PVRSRV_APPHINT_DISABLECLOCKGATING 0
#define PVRSRV_APPHINT_DISABLEDMOVERLAP 0
#define PVRSRV_APPHINT_DISABLEFEDLOGGING IMG_FALSE
#define PVRSRV_APPHINT_DISABLEPDUMPPANIC IMG_FALSE
#define PVRSRV_APPHINT_DRIVERMODE 0x7FFFFFFF
#define PVRSRV_APPHINT_EMUMAXFREQ 0
#define PVRSRV_APPHINT_ENABLEAPM RGX_ACTIVEPM_DEFAULT
#define PVRSRV_APPHINT_ENABLECDMKILLINGRANDMODE 0
#define PVRSRV_APPHINT_ENABLEFTRACEGPU IMG_FALSE
#define PVRSRV_APPHINT_ENABLEFULLSYNCTRACKING IMG_FALSE
#define PVRSRV_APPHINT_ENABLEFWCONTEXTSWITCH RGXFWIF_INICFG_OS_CTXSWITCH_DM_ALL
#define PVRSRV_APPHINT_ENABLEFWPOISONONFREE IMG_FALSE
#define PVRSRV_APPHINT_ENABLEHTBLOGGROUP 0
#define PVRSRV_APPHINT_ENABLELOGGROUP RGXFWIF_LOG_TYPE_NONE
#define PVRSRV_APPHINT_ENABLEPAGEFAULTDEBUG APPHNT_BLDVAR_ENABLEPAGEFAULTDEBUG
#define PVRSRV_APPHINT_ENABLERANDOMCONTEXTSWITCH 0
#define PVRSRV_APPHINT_ENABLERDPOWERISLAND RGX_RD_POWER_ISLAND_DEFAULT
#define PVRSRV_APPHINT_ENABLESIGNATURECHECKS APPHNT_BLDVAR_ENABLESIGNATURECHECKS
#define PVRSRV_APPHINT_ENABLESOFTRESETCNTEXTSWITCH 0
#define PVRSRV_APPHINT_ENABLETRUSTEDDEVICEACECONFIG IMG_FALSE
#define PVRSRV_APPHINT_FBCDCVERSIONOVERRIDE 0
#define PVRSRV_APPHINT_FIRMWARELOGTYPE 0
#define PVRSRV_APPHINT_FIRMWAREPERF FW_PERF_CONF_NONE
#define PVRSRV_APPHINT_FIRMWARE_HEAP_POLICY 5
#define PVRSRV_APPHINT_FWCONTEXTSWITCHPROFILE RGXFWIF_CTXSWITCH_PROFILE_MEDIUM_EN
#define PVRSRV_APPHINT_FWPOISONONFREEVALUE 0xBD
#define PVRSRV_APPHINT_FWTRACEBUFSIZEINDWORDS RGXFW_TRACE_BUF_DEFAULT_SIZE_IN_DWORDS
#define PVRSRV_APPHINT_GENERALNON4KHEAPPAGESIZE 0x4000
#define PVRSRV_APPHINT_GPIOVALIDATIONMODE 0
#define PVRSRV_APPHINT_GPUUNITSPOWERCHANGE IMG_FALSE
#define PVRSRV_APPHINT_HTBOPERATIONMODE HTB_OPMODE_DROPOLDEST
#define PVRSRV_APPHINT_HTBUFFERSIZE 64
#define PVRSRV_APPHINT_HWPERFCLIENTBUFFERSIZE 786432
#define PVRSRV_APPHINT_HWPERFCLIENTFILTER_EGL 0
#define PVRSRV_APPHINT_HWPERFCLIENTFILTER_OPENCL 0
#define PVRSRV_APPHINT_HWPERFCLIENTFILTER_OPENGL 0
#define PVRSRV_APPHINT_HWPERFCLIENTFILTER_OPENGLES 0
#define PVRSRV_APPHINT_HWPERFCLIENTFILTER_SERVICES 0
#define PVRSRV_APPHINT_HWPERFCLIENTFILTER_VULKAN 0
#define PVRSRV_APPHINT_HWPERFDISABLECUSTOMCOUNTERFILTER 0
#define PVRSRV_APPHINT_HWPERFFWBUFSIZEINKB 2048
#define PVRSRV_APPHINT_HWPERFFWFILTER 0
#define PVRSRV_APPHINT_HWPERFHOSTBUFSIZEINKB 2048
#define PVRSRV_APPHINT_HWPERFHOSTFILTER 0
#define PVRSRV_APPHINT_HWPERFHOSTTHREADTIMEOUTINMS 50
#define PVRSRV_APPHINT_HWRDEBUGDUMPLIMIT APPHNT_BLDVAR_DBGDUMPLIMIT
#define PVRSRV_APPHINT_IGNOREHWREPORTEDBVNC IMG_FALSE
#define PVRSRV_APPHINT_JONESDISABLEMASK 0
#define PVRSRV_APPHINT_KCCB_SIZE_LOG2 7
#define PVRSRV_APPHINT_NEWFILTERINGMODE 1
#define PVRSRV_APPHINT_PHYSMEMTESTPASSES APPHNT_PHYSMEMTEST_ENABLE
#define PVRSRV_APPHINT_RGXBVNC ""
#define PVRSRV_APPHINT_RISCVDMITEST 0
#define PVRSRV_APPHINT_SIGNATURECHECKSBUFSIZE RGXFW_SIG_BUFFER_SIZE_MIN
#define PVRSRV_APPHINT_TESTSLRINTERVAL 0
#define PVRSRV_APPHINT_TFBCCOMPRESSIONCONTROLGROUP 0
#define PVRSRV_APPHINT_TFBCCOMPRESSIONCONTROLSCHEME 0
#define PVRSRV_APPHINT_TIMECORRCLOCK 0
#define PVRSRV_APPHINT_TRUNCATEMODE 0
#define PVRSRV_APPHINT_VALIDATEIRQ 0
#define PVRSRV_APPHINT_VALIDATESOCUSCTIMERS 0
#define PVRSRV_APPHINT_WATCHDOGTHREADPRIORITY 0
#define PVRSRV_APPHINT_ZEROFREELIST IMG_FALSE
#define PVRSRV_DEVICE_INIT_MODE PVRSRV_LINUX_DEV_INIT_ON_CONNECT
#define PVRSRV_ENABLE_CCCB_GROW
#define PVRSRV_ENABLE_PROCESS_STATS
#define PVRSRV_FULL_SYNC_TRACKING_HISTORY_LEN 256
#define PVRSRV_HWPERF_COUNTERS_PERBLK 12
#define PVRSRV_MODNAME "pvrsrvkm"
#define PVRSRV_NEED_PVR_DPF
#define PVRSRV_POISON_ON_ALLOC_VALUE 0xd9
#define PVRSRV_POISON_ON_FREE_VALUE 0x63
#define PVRSRV_RGX_LOG2_CLIENT_CCB_MAX_SIZE_3D 17
#define PVRSRV_RGX_LOG2_CLIENT_CCB_MAX_SIZE_CDM 15
#define PVRSRV_RGX_LOG2_CLIENT_CCB_MAX_SIZE_KICKSYNC 13
#define PVRSRV_RGX_LOG2_CLIENT_CCB_MAX_SIZE_RDM 15
#define PVRSRV_RGX_LOG2_CLIENT_CCB_MAX_SIZE_TA 16
#define PVRSRV_RGX_LOG2_CLIENT_CCB_MAX_SIZE_TDM 17
#define PVRSRV_RGX_LOG2_CLIENT_CCB_MAX_SIZE_TQ2D 17
#define PVRSRV_RGX_LOG2_CLIENT_CCB_MAX_SIZE_TQ3D 17
#define PVRSRV_RGX_LOG2_CLIENT_CCB_SIZE_3D 16
#define PVRSRV_RGX_LOG2_CLIENT_CCB_SIZE_CDM 13
#define PVRSRV_RGX_LOG2_CLIENT_CCB_SIZE_KICKSYNC 13
#define PVRSRV_RGX_LOG2_CLIENT_CCB_SIZE_RDM 13
#define PVRSRV_RGX_LOG2_CLIENT_CCB_SIZE_TA 15
#define PVRSRV_RGX_LOG2_CLIENT_CCB_SIZE_TDM 14
#define PVRSRV_RGX_LOG2_CLIENT_CCB_SIZE_TQ2D 14
#define PVRSRV_RGX_LOG2_CLIENT_CCB_SIZE_TQ3D 14
#define PVRSRV_RGX_LOG2_KERNEL_CCB_MAX_SIZE 16
#define PVRSRV_RGX_LOG2_KERNEL_CCB_MIN_SIZE 4
#define PVRSRV_STALLED_CCB_ACTION
#define PVRSYNC_MODNAME "pvr_sync"
#define PVR_BUILD_DIR "tc_linux"
#define PVR_DIRTY_BYTES_FLUSH_THRESHOLD 524288
#define PVR_DRM_NAME "pvr"
#define PVR_GPIO_MODE PVR_GPIO_MODE_GENERAL
#define PVR_GPIO_MODE_GENERAL 1
#define PVR_GPIO_MODE_POWMON_PIN 2
#define PVR_LDM_DRIVER_REGISTRATION_NAME "pvrsrvkm"
#define PVR_LDM_PLATFORM_PRE_REGISTERED
#define PVR_LINUX_HIGHORDER_ALLOCATION_THRESHOLD 256
#define PVR_LINUX_KMALLOC_ALLOCATION_THRESHOLD 16384
#define PVR_LINUX_PHYSMEM_MAX_ALLOC_ORDER_NUM 2
#define PVR_LINUX_PHYSMEM_MAX_EXCESS_POOL_PAGES 20480
#define PVR_LINUX_PHYSMEM_MAX_POOL_PAGES 10240
#define PVR_POWER_ACTOR_MEASUREMENT_PERIOD_MS 10U
#define PVR_POWER_MONITOR_HWPERF
#define RGXFW_SAFETY_WATCHDOG_PERIOD_IN_US 1000000
#define RGX_BNC_CONFIG_KM_HEADER "configs/rgxconfig_km_1.V.4.5.h"
#define RGX_BVNC_CORE_KM_HEADER "cores/rgxcore_km_1.82.4.5.h"
#define RGX_FW_FILENAME "rgx.fw"
#define RGX_FW_HEAP_SHIFT 25
#define RGX_HCS_DEFAULT_DEADLINE_MS 0xFFFFFFFFU
#define RGX_INITIAL_SLR_HOLDOFF_PERIOD_MS 0
#define RGX_NUM_OS_SUPPORTED 1
#define RGX_OSID_0_DEFAULT_PRIORITY (1 - 0)
#define RGX_OSID_1_DEFAULT_PRIORITY (1 - 1)
#define RGX_OSID_2_DEFAULT_PRIORITY (1 - 2)
#define RGX_OSID_3_DEFAULT_PRIORITY (1 - 3)
#define RGX_OSID_4_DEFAULT_PRIORITY (1 - 4)
#define RGX_OSID_5_DEFAULT_PRIORITY (1 - 5)
#define RGX_OSID_6_DEFAULT_PRIORITY (1 - 6)
#define RGX_OSID_7_DEFAULT_PRIORITY (1 - 7)
#define RGX_SH_FILENAME "rgx.sh"
#define SOC_TIMER_FREQ 20
#define SUPPORT_BUFFER_SYNC 1
#define SUPPORT_DI_BRG_IMPL
#define SUPPORT_NATIVE_FENCE_SYNC
#define SUPPORT_PHYSMEM_TEST
#define SUPPORT_POWMON_COMPONENT
#define SUPPORT_RGX 1
#define SUPPORT_RGXTQ_BRIDGE
#define SUPPORT_USC_BREAKPOINT
#define TC_APOLLO_ES2
#define TC_DISPLAY_MEM_SIZE 383
#define TC_MEMORY_CONFIG TC_MEMORY_LOCAL
#define TC_SECURE_MEM_SIZE 128
#define UPDATE_FENCE_CHECKPOINT_COUNT 1
#ifdef CONFIG_DRM_POWERVR_ROGUE_DEBUG
#define DEBUG
#define DEBUG_BRIDGE_KM
#define PVRSRV_ENABLE_GPU_MEMORY_INFO
#define PVRSRV_ENABLE_SYNC_POISONING
#define PVR_ANNOTATION_MAX_LEN 96
#define PVR_BUILD_TYPE "debug"
#define TRACK_FW_BOOT
#else
#define PVR_ANNOTATION_MAX_LEN 63
#define PVR_BUILD_TYPE "release"
#define RELEASE
#endif
