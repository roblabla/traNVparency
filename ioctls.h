// Autogenerated by ioctlgen.py

#pragma once

#include "nvwrapper.h"

enum LinuxNvhostChannelIoctl {
	NVGPU_IOCTL_CHANNEL_ZCULL_BIND = 0xC010486E, 
	NVGPU_IOCTL_CHANNEL_CYCLE_STATS = 0xC004486A, 
	NVGPU_IOCTL_CHANNEL_CYCLE_STATS_SNAPSHOT = 0xC0104876, 
	NVGPU_IOCTL_CHANNEL_ALLOC_OBJ_CTX = 0xC010486C, 
	NVGPU_IOCTL_CHANNEL_SET_TIMEOUT_EX = 0xC0084812, 
	NVGPU_IOCTL_CHANNEL_GET_TIMEDOUT = 0x8004480C, 
	NVGPU_IOCTL_CHANNEL_FORCE_RESET = 0x00004874, 
	NVGPU_IOCTL_CHANNEL_ALLOC_GPFIFO = 0x40084864, 
	NVGPU_IOCTL_CHANNEL_SUBMIT_GPFIFO = 0xC018486B, 
	NVGPU_IOCTL_CHANNEL_SET_TIMEOUT = 0x4004480B, 
	NVGPU_IOCTL_CHANNEL_SET_NVMAP_FD = 0x40044805, 
	NVGPU_IOCTL_CHANNEL_ENABLE = 0x00004871, 
	NVGPU_IOCTL_CHANNEL_FREE_OBJ_CTX = 0x8008486D, 
	NVGPU_IOCTL_CHANNEL_EVENTS_CTRL = 0x40084875, 
	NVGPU_IOCTL_CHANNEL_WAIT = 0xC0184866, 
	NVGPU_IOCTL_CHANNEL_OPEN = 0x80044870, 
	NVGPU_IOCTL_CHANNEL_DISABLE = 0x00004872, 
	NVGPU_IOCTL_CHANNEL_PREEMPT = 0x00004873, 
	NVGPU_IOCTL_CHANNEL_SET_ERROR_NOTIFIER = 0xC018486F, 
	NVGPU_IOCTL_CHANNEL_SET_PRIORITY = 0x4004480D
};
const char *ioctl2str(LinuxNvhostChannelIoctl value);

enum LinuxNvhostAsGpuIoctl {
	NVGPU_AS_IOCTL_GET_VA_REGIONS = 0xC0104108, 
	NVGPU_AS_IOCTL_MAP_BUFFER = 0xC0204104, 
	NVGPU_AS_IOCTL_FREE_SPACE = 0xC0104103, 
	NVGPU_AS_IOCTL_ALLOC_SPACE = 0xC0204106, 
	NVGPU_AS_IOCTL_MAP_BUFFER_BATCH = 0xC020410B, 
	NVGPU_AS_IOCTL_MAP_BUFFER_EX = 0xC0284107, 
	NVGPU_AS_IOCTL_UNMAP_BUFFER = 0xC0084105, 
	NVGPU_AS_IOCTL_MAP_BUFFER_COMPBITS = 0xC028410A, 
	NVGPU_AS_IOCTL_BIND_CHANNEL = 0xC0044101, 
	NVGPU_AS_IOCTL_GET_BUFFER_COMPBITS_INFO = 0xC0204109, 
	NVGPU32_AS_IOCTL_ALLOC_SPACE = 0xC0144102
};
const char *ioctl2str(LinuxNvhostAsGpuIoctl value);

enum LinuxNvhostCtrlGpuIoctl {
	NVGPU_GPU_IOCTL_GET_TPC_EXCEPTION_EN_STATUS = 0xC0084711, 
	NVGPU_GPU_IOCTL_VSMS_MAPPING = 0xC0084713, 
	NVGPU_GPU_IOCTL_INVAL_ICACHE = 0xC008470D, 
	NVGPU_GPU_IOCTL_GET_TPC_MASKS = 0xC010470A, 
	NVGPU_GPU_IOCTL_ZBC_SET_TABLE = 0x402C4703, 
	NVGPU_GPU_IOCTL_ZBC_QUERY_TABLE = 0xC0344704, 
	NVGPU_GPU_IOCTL_MARK_COMPRESSIBLE_WRITE = 0xC0204707, 
	NVGPU_GPU_IOCTL_OPEN_TSG = 0xC0084709, 
	NVGPU_GPU_IOCTL_OPEN_CHANNEL = 0xC004470B, 
	NVGPU_GPU_IOCTL_SET_SM_DEBUG_MODE = 0xC010470F, 
	NVGPU_GPU_IOCTL_FLUSH_L2 = 0xC008470C, 
	NVGPU_GPU_IOCTL_ZCULL_GET_INFO = 0x80284702, 
	NVGPU_GPU_IOCTL_GET_CHARACTERISTICS = 0xC0104705, 
	NVGPU_GPU_IOCTL_ALLOC_AS = 0xC0104708, 
	NVGPU_GPU_IOCTL_SET_MMUDEBUG_MODE = 0xC008470E, 
	NVGPU_GPU_IOCTL_ZCULL_GET_CTX_SIZE = 0x80044701, 
	NVGPU_GPU_IOCTL_NUM_VSMS = 0xC0084712, 
	NVGPU_GPU_IOCTL_PREPARE_COMPRESSIBLE_READ = 0xC0504706, 
	NVGPU_GPU_IOCTL_WAIT_FOR_PAUSE = 0xC0084710
};
const char *ioctl2str(LinuxNvhostCtrlGpuIoctl value);

enum LinuxNvhostCtrlIoctl {
	NVHOST_IOCTL_CTRL_SYNC_FENCE_SET_NAME = 0xC00C480D, 
	NVHOST32_IOCTL_CTRL_SYNC_FENCE_CREATE = 0xC018480A, 
	NVHOST_IOCTL_CTRL_GET_VERSION = 0x80044807, 
	NVHOST_IOCTL_CTRL_SYNCPT_READ_MAX = 0xC0084808, 
	NVHOST_IOCTL_CTRL_MODULE_REGRDWR = 0xC020480C, 
	NVHOST_IOCTL_CTRL_SYNCPT_INCR = 0x40044802, 
	NVHOST_IOCTL_CTRL_SYNCPT_WAITEX = 0xC0104806, 
	NVHOST_IOCTL_CTRL_SYNCPT_WAITMEX = 0xC0204809, 
	NVHOST_IOCTL_CTRL_MODULE_MUTEX = 0xC0084804, 
	NVHOST_IOCTL_CTRL_GET_CHARACTERISTICS = 0xC010480E, 
	NVHOST_IOCTL_CTRL_SYNC_FENCE_CREATE = 0xC018480B, 
	NVHOST_IOCTL_CTRL_SYNCPT_READ = 0xC0084801, 
	NVHOST32_IOCTL_CTRL_MODULE_REGRDWR = 0xC0184805, 
	NVHOST_IOCTL_CTRL_SYNCPT_WAIT = 0x400C4803
};
const char *ioctl2str(LinuxNvhostCtrlIoctl value);
