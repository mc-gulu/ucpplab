
#include <android/log.h>
#include <android_native_app_glue.h>

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "native_activity", __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, "native_activity", __VA_ARGS__))

class McMain
{
public:
	static void OnStartup();	
	static void OnTouched();
};



