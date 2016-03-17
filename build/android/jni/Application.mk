
APP_ABI := armeabi-v7a

APP_CPPFLAGS += -std=c++11 -W#pragma-messages


# define this flag to use CLang 3.5 (llvm), otherwise gcc is used
USE_CLANG := 0


ifeq ($(USE_CLANG), 1)
	NDK_TOOLCHAIN_VERSION := clang
	APP_STL := c++_static
else
	NDK_TOOLCHAIN_VERSION := 4.8
	APP_STL := gnustl_shared
endif