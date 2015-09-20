
#ifdef __ANDROID__

#include <android/log.h>
#include <android_native_app_glue.h>

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "native-activity", __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, "native-activity", __VA_ARGS__))

#else

#define LOGI(...)
#define LOGW(...)

#endif // __ANDROID__

class UCppLab
{
public:
	static void OnStartup();	
	static void OnTouched();
};



