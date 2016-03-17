/*!
 * \file UCL_Logging.cpp
 * \date 2015/10/02 8:57
 * \author Gu Lu (mc-gulu@GitHub)
 *
 * \brief Implementation of UCL_Logging
*/

#include "UCL_Logging.h"

#include <stdarg.h>

#if UCL_Android

#include <android/log.h>
#include <android_native_app_glue.h>

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "native-activity", "%s\n", __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, "native-activity", "%s\n", __VA_ARGS__))

#endif // UCL_Android

const int __max_str_len__ = 4096;

std::string UCL_Format(const char* format, ...)
{
    char buf[__max_str_len__];
    va_list args;
    va_start(args, format);
#if UCL_Windows
    vsprintf_s(buf, __max_str_len__, format, args);
#else
    vsprintf(buf, format, args);
#endif
    va_end(args);

    return std::string(buf);
}

void UCL_Log(const char* format, ...)
{
    char buf[__max_str_len__];
    va_list args;
    va_start(args, format);
#if UCL_Windows
    vsprintf_s(buf, __max_str_len__, format, args);
#else
    vsprintf(buf, format, args);
#endif
    va_end(args);

#if UCL_Android
    LOGI(buf);
#else
    printf(buf);
    printf("\n");
#endif
}
