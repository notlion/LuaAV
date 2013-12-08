#ifndef LUA_OPENCL_CONSTANTS_H
#define LUA_OPENCL_CONSTANTS_H 1

#include "al_OpenCLInternal.hpp"

typedef struct _opencl_enum{
	const char *name;
	int value;
} t_opencl_enum;

#define ENUM_ITEM(NAME)	{ #NAME, CL_##NAME }

static t_opencl_enum opencl_enums[] = {
	ENUM_ITEM(SUCCESS),
	ENUM_ITEM(DEVICE_NOT_FOUND),
	ENUM_ITEM(DEVICE_NOT_AVAILABLE),
	ENUM_ITEM(COMPILER_NOT_AVAILABLE),
	ENUM_ITEM(MEM_OBJECT_ALLOCATION_FAILURE),
	ENUM_ITEM(OUT_OF_RESOURCES),
	ENUM_ITEM(OUT_OF_HOST_MEMORY),
	ENUM_ITEM(PROFILING_INFO_NOT_AVAILABLE),
	ENUM_ITEM(MEM_COPY_OVERLAP),
	ENUM_ITEM(IMAGE_FORMAT_MISMATCH),
	ENUM_ITEM(IMAGE_FORMAT_NOT_SUPPORTED),
	ENUM_ITEM(BUILD_PROGRAM_FAILURE),
	ENUM_ITEM(MAP_FAILURE),

	ENUM_ITEM(INVALID_VALUE),
	ENUM_ITEM(INVALID_DEVICE_TYPE),
	ENUM_ITEM(INVALID_PLATFORM),
	ENUM_ITEM(INVALID_DEVICE),
	ENUM_ITEM(INVALID_CONTEXT),
	ENUM_ITEM(INVALID_QUEUE_PROPERTIES),
	ENUM_ITEM(INVALID_COMMAND_QUEUE),
	ENUM_ITEM(INVALID_HOST_PTR),
	ENUM_ITEM(INVALID_MEM_OBJECT),
	ENUM_ITEM(INVALID_IMAGE_FORMAT_DESCRIPTOR),
	ENUM_ITEM(INVALID_IMAGE_SIZE),
	ENUM_ITEM(INVALID_SAMPLER),
	ENUM_ITEM(INVALID_BINARY),
	ENUM_ITEM(INVALID_BUILD_OPTIONS),
	ENUM_ITEM(INVALID_PROGRAM),
	ENUM_ITEM(INVALID_PROGRAM_EXECUTABLE),
	ENUM_ITEM(INVALID_KERNEL_NAME),
	ENUM_ITEM(INVALID_KERNEL_DEFINITION),
	ENUM_ITEM(INVALID_KERNEL),
	ENUM_ITEM(INVALID_ARG_INDEX),
	ENUM_ITEM(INVALID_ARG_VALUE),
	ENUM_ITEM(INVALID_ARG_SIZE),
	ENUM_ITEM(INVALID_KERNEL_ARGS),
	ENUM_ITEM(INVALID_WORK_DIMENSION),
	ENUM_ITEM(INVALID_WORK_GROUP_SIZE),
	ENUM_ITEM(INVALID_WORK_ITEM_SIZE),
	ENUM_ITEM(INVALID_GLOBAL_OFFSET),
	ENUM_ITEM(INVALID_EVENT_WAIT_LIST),
	ENUM_ITEM(INVALID_EVENT),
	ENUM_ITEM(INVALID_OPERATION),
	ENUM_ITEM(INVALID_GL_OBJECT),
	ENUM_ITEM(INVALID_BUFFER_SIZE),
	ENUM_ITEM(INVALID_MIP_LEVEL),
	ENUM_ITEM(INVALID_GLOBAL_WORK_SIZE),

	// OpenCL Version
	ENUM_ITEM(VERSION_1_0),

	// cl_bool
	ENUM_ITEM(FALSE),
	ENUM_ITEM(TRUE),

	// cl_platform_info
	ENUM_ITEM(PLATFORM_PROFILE),
	ENUM_ITEM(PLATFORM_VERSION),
	ENUM_ITEM(PLATFORM_NAME),
	ENUM_ITEM(PLATFORM_VENDOR),
	ENUM_ITEM(PLATFORM_EXTENSIONS),

	// cl_device_type - bitfield
	ENUM_ITEM(DEVICE_TYPE_DEFAULT),
	ENUM_ITEM(DEVICE_TYPE_CPU),
	ENUM_ITEM(DEVICE_TYPE_GPU),
	ENUM_ITEM(DEVICE_TYPE_ACCELERATOR),
	ENUM_ITEM(DEVICE_TYPE_ALL),

	// cl_device_info
	ENUM_ITEM(DEVICE_TYPE),
	ENUM_ITEM(DEVICE_VENDOR_ID),
	ENUM_ITEM(DEVICE_MAX_COMPUTE_UNITS),
	ENUM_ITEM(DEVICE_MAX_WORK_ITEM_DIMENSIONS),
	ENUM_ITEM(DEVICE_MAX_WORK_GROUP_SIZE),
	ENUM_ITEM(DEVICE_MAX_WORK_ITEM_SIZES),
	ENUM_ITEM(DEVICE_PREFERRED_VECTOR_WIDTH_CHAR),
	ENUM_ITEM(DEVICE_PREFERRED_VECTOR_WIDTH_SHORT),
	ENUM_ITEM(DEVICE_PREFERRED_VECTOR_WIDTH_INT),
	ENUM_ITEM(DEVICE_PREFERRED_VECTOR_WIDTH_LONG),
	ENUM_ITEM(DEVICE_PREFERRED_VECTOR_WIDTH_FLOAT),
	ENUM_ITEM(DEVICE_PREFERRED_VECTOR_WIDTH_DOUBLE),
	ENUM_ITEM(DEVICE_MAX_CLOCK_FREQUENCY),
	ENUM_ITEM(DEVICE_ADDRESS_BITS),
	ENUM_ITEM(DEVICE_MAX_READ_IMAGE_ARGS),
	ENUM_ITEM(DEVICE_MAX_WRITE_IMAGE_ARGS),
	ENUM_ITEM(DEVICE_MAX_MEM_ALLOC_SIZE),
	ENUM_ITEM(DEVICE_IMAGE2D_MAX_WIDTH),
	ENUM_ITEM(DEVICE_IMAGE2D_MAX_HEIGHT),
	ENUM_ITEM(DEVICE_IMAGE3D_MAX_WIDTH),
	ENUM_ITEM(DEVICE_IMAGE3D_MAX_HEIGHT),
	ENUM_ITEM(DEVICE_IMAGE3D_MAX_DEPTH),
	ENUM_ITEM(DEVICE_IMAGE_SUPPORT),
	ENUM_ITEM(DEVICE_MAX_PARAMETER_SIZE),
	ENUM_ITEM(DEVICE_MAX_SAMPLERS),
	ENUM_ITEM(DEVICE_MEM_BASE_ADDR_ALIGN),
	ENUM_ITEM(DEVICE_MIN_DATA_TYPE_ALIGN_SIZE),
	ENUM_ITEM(DEVICE_SINGLE_FP_CONFIG),
	ENUM_ITEM(DEVICE_GLOBAL_MEM_CACHE_TYPE),
	ENUM_ITEM(DEVICE_GLOBAL_MEM_CACHELINE_SIZE),
	ENUM_ITEM(DEVICE_GLOBAL_MEM_CACHE_SIZE),
	ENUM_ITEM(DEVICE_GLOBAL_MEM_SIZE),
	ENUM_ITEM(DEVICE_MAX_CONSTANT_BUFFER_SIZE),
	ENUM_ITEM(DEVICE_MAX_CONSTANT_ARGS),
	ENUM_ITEM(DEVICE_LOCAL_MEM_TYPE),
	ENUM_ITEM(DEVICE_LOCAL_MEM_SIZE),
	ENUM_ITEM(DEVICE_ERROR_CORRECTION_SUPPORT),
	ENUM_ITEM(DEVICE_PROFILING_TIMER_RESOLUTION),
	ENUM_ITEM(DEVICE_ENDIAN_LITTLE),
	ENUM_ITEM(DEVICE_AVAILABLE),
	ENUM_ITEM(DEVICE_COMPILER_AVAILABLE),
	ENUM_ITEM(DEVICE_EXECUTION_CAPABILITIES),
	ENUM_ITEM(DEVICE_QUEUE_PROPERTIES),
	ENUM_ITEM(DEVICE_NAME),
	ENUM_ITEM(DEVICE_VENDOR),
	ENUM_ITEM(DRIVER_VERSION),
	ENUM_ITEM(DEVICE_PROFILE),
	ENUM_ITEM(DEVICE_VERSION),
	ENUM_ITEM(DEVICE_EXTENSIONS),
	ENUM_ITEM(DEVICE_PLATFORM),
	ENUM_ITEM(DEVICE_DOUBLE_FP_CONFIG), // 0x1032 reserved for CL_DEVICE_DOUBLE_FP_CONFIG
	{"DEVICE_HALF_FP_CONFIG", 0x1033}, // 0x1033 reserved for CL_DEVICE_HALF_FP_CONFIG
		
	// cl_device_fp_config - bitfield
	ENUM_ITEM(FP_DENORM),
	ENUM_ITEM(FP_INF_NAN),
	ENUM_ITEM(FP_ROUND_TO_NEAREST),
	ENUM_ITEM(FP_ROUND_TO_ZERO),
	ENUM_ITEM(FP_ROUND_TO_INF),
	ENUM_ITEM(FP_FMA),

	// cl_device_mem_cache_type
	ENUM_ITEM(NONE),
	ENUM_ITEM(READ_ONLY_CACHE),
	ENUM_ITEM(READ_WRITE_CACHE),

	// cl_device_local_mem_type
	ENUM_ITEM(LOCAL),
	ENUM_ITEM(GLOBAL),

	// cl_device_exec_capabilities - bitfield
	ENUM_ITEM(EXEC_KERNEL),
	ENUM_ITEM(EXEC_NATIVE_KERNEL),

	// cl_command_queue_properties - bitfield
	ENUM_ITEM(QUEUE_OUT_OF_ORDER_EXEC_MODE_ENABLE),
	ENUM_ITEM(QUEUE_PROFILING_ENABLE),

	// cl_context_info
	ENUM_ITEM(CONTEXT_REFERENCE_COUNT),
	ENUM_ITEM(CONTEXT_DEVICES),
	ENUM_ITEM(CONTEXT_PROPERTIES),

	// cl_context_properties
	ENUM_ITEM(CONTEXT_PLATFORM),

	// cl_command_queue_info
	ENUM_ITEM(QUEUE_CONTEXT),
	ENUM_ITEM(QUEUE_DEVICE),
	ENUM_ITEM(QUEUE_REFERENCE_COUNT),
	ENUM_ITEM(QUEUE_PROPERTIES),

	// cl_mem_flags - bitfield
	ENUM_ITEM(MEM_READ_WRITE),
	ENUM_ITEM(MEM_WRITE_ONLY),
	ENUM_ITEM(MEM_READ_ONLY),
	ENUM_ITEM(MEM_USE_HOST_PTR),
	ENUM_ITEM(MEM_ALLOC_HOST_PTR),
	ENUM_ITEM(MEM_COPY_HOST_PTR),

	// cl_channel_order
	ENUM_ITEM(R),
	ENUM_ITEM(A),
	ENUM_ITEM(RG),
	ENUM_ITEM(RA),
	ENUM_ITEM(RGB),
	ENUM_ITEM(RGBA),
	ENUM_ITEM(BGRA),
	ENUM_ITEM(ARGB),
	ENUM_ITEM(INTENSITY),
	ENUM_ITEM(LUMINANCE),

	// cl_channel_type
	ENUM_ITEM(SNORM_INT8),
	ENUM_ITEM(SNORM_INT16),
	ENUM_ITEM(UNORM_INT8),
	ENUM_ITEM(UNORM_INT16),
	ENUM_ITEM(UNORM_SHORT_565),
	ENUM_ITEM(UNORM_SHORT_555),
	ENUM_ITEM(UNORM_INT_101010),
	ENUM_ITEM(SIGNED_INT8),
	ENUM_ITEM(SIGNED_INT16),
	ENUM_ITEM(SIGNED_INT32),
	ENUM_ITEM(UNSIGNED_INT8),
	ENUM_ITEM(UNSIGNED_INT16),
	ENUM_ITEM(UNSIGNED_INT32),
	ENUM_ITEM(HALF_FLOAT),
	ENUM_ITEM(FLOAT),

	// cl_mem_object_type
	ENUM_ITEM(MEM_OBJECT_BUFFER),
	ENUM_ITEM(MEM_OBJECT_IMAGE2D),
	ENUM_ITEM(MEM_OBJECT_IMAGE3D),

	// cl_mem_info
	ENUM_ITEM(MEM_TYPE),
	ENUM_ITEM(MEM_FLAGS),
	ENUM_ITEM(MEM_SIZE),
	ENUM_ITEM(MEM_HOST_PTR),
	ENUM_ITEM(MEM_MAP_COUNT),
	ENUM_ITEM(MEM_REFERENCE_COUNT),
	ENUM_ITEM(MEM_CONTEXT),

	// cl_image_info
	ENUM_ITEM(IMAGE_FORMAT),
	ENUM_ITEM(IMAGE_ELEMENT_SIZE),
	ENUM_ITEM(IMAGE_ROW_PITCH),
	ENUM_ITEM(IMAGE_SLICE_PITCH),
	ENUM_ITEM(IMAGE_WIDTH),
	ENUM_ITEM(IMAGE_HEIGHT),
	ENUM_ITEM(IMAGE_DEPTH),

	// cl_addressing_mode
	ENUM_ITEM(ADDRESS_NONE),
	ENUM_ITEM(ADDRESS_CLAMP_TO_EDGE),
	ENUM_ITEM(ADDRESS_CLAMP),
	ENUM_ITEM(ADDRESS_REPEAT),

	// cl_filter_mode
	ENUM_ITEM(FILTER_NEAREST),
	ENUM_ITEM(FILTER_LINEAR),

	// cl_sampler_info
	ENUM_ITEM(SAMPLER_REFERENCE_COUNT),
	ENUM_ITEM(SAMPLER_CONTEXT),
	ENUM_ITEM(SAMPLER_NORMALIZED_COORDS),
	ENUM_ITEM(SAMPLER_ADDRESSING_MODE),
	ENUM_ITEM(SAMPLER_FILTER_MODE),

	// cl_map_flags - bitfield
	ENUM_ITEM(MAP_READ),
	ENUM_ITEM(MAP_WRITE),

	// cl_program_info
	ENUM_ITEM(PROGRAM_REFERENCE_COUNT),
	ENUM_ITEM(PROGRAM_CONTEXT),
	ENUM_ITEM(PROGRAM_NUM_DEVICES),
	ENUM_ITEM(PROGRAM_DEVICES),
	ENUM_ITEM(PROGRAM_SOURCE),
	ENUM_ITEM(PROGRAM_BINARY_SIZES),
	ENUM_ITEM(PROGRAM_BINARIES),

	// cl_program_build_info
	ENUM_ITEM(PROGRAM_BUILD_STATUS),
	ENUM_ITEM(PROGRAM_BUILD_OPTIONS),
	ENUM_ITEM(PROGRAM_BUILD_LOG),

	// cl_build_status
	ENUM_ITEM(BUILD_SUCCESS),
	ENUM_ITEM(BUILD_NONE),
	ENUM_ITEM(BUILD_ERROR),
	ENUM_ITEM(BUILD_IN_PROGRESS),

	// cl_kernel_info
	ENUM_ITEM(KERNEL_FUNCTION_NAME),
	ENUM_ITEM(KERNEL_NUM_ARGS),
	ENUM_ITEM(KERNEL_REFERENCE_COUNT),
	ENUM_ITEM(KERNEL_CONTEXT),
	ENUM_ITEM(KERNEL_PROGRAM),

	// cl_kernel_work_group_info
	ENUM_ITEM(KERNEL_WORK_GROUP_SIZE),
	ENUM_ITEM(KERNEL_COMPILE_WORK_GROUP_SIZE),
	ENUM_ITEM(KERNEL_LOCAL_MEM_SIZE),

	// cl_event_info
	ENUM_ITEM(EVENT_COMMAND_QUEUE),
	ENUM_ITEM(EVENT_COMMAND_TYPE),
	ENUM_ITEM(EVENT_REFERENCE_COUNT),
	ENUM_ITEM(EVENT_COMMAND_EXECUTION_STATUS),

	// cl_command_type
	ENUM_ITEM(COMMAND_NDRANGE_KERNEL),
	ENUM_ITEM(COMMAND_TASK),
	ENUM_ITEM(COMMAND_NATIVE_KERNEL),
	ENUM_ITEM(COMMAND_READ_BUFFER),
	ENUM_ITEM(COMMAND_WRITE_BUFFER),
	ENUM_ITEM(COMMAND_COPY_BUFFER),
	ENUM_ITEM(COMMAND_READ_IMAGE),
	ENUM_ITEM(COMMAND_WRITE_IMAGE),
	ENUM_ITEM(COMMAND_COPY_IMAGE),
	ENUM_ITEM(COMMAND_COPY_IMAGE_TO_BUFFER),
	ENUM_ITEM(COMMAND_COPY_BUFFER_TO_IMAGE),
	ENUM_ITEM(COMMAND_MAP_BUFFER),
	ENUM_ITEM(COMMAND_MAP_IMAGE),
	ENUM_ITEM(COMMAND_UNMAP_MEM_OBJECT),
	ENUM_ITEM(COMMAND_MARKER),
	ENUM_ITEM(COMMAND_ACQUIRE_GL_OBJECTS),
	ENUM_ITEM(COMMAND_RELEASE_GL_OBJECTS),

	// command execution status
	ENUM_ITEM(COMPLETE),
	ENUM_ITEM(RUNNING),
	ENUM_ITEM(SUBMITTED),
	ENUM_ITEM(QUEUED),
	  
	// cl_profiling_info
	ENUM_ITEM(PROFILING_COMMAND_QUEUED),
	ENUM_ITEM(PROFILING_COMMAND_SUBMIT),
	ENUM_ITEM(PROFILING_COMMAND_START),
	ENUM_ITEM(PROFILING_COMMAND_END),

	{ NULL, NULL }
};

#endif LUA_OPENCL_CONSTANTS_H