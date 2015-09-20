
#include "UCppLab.h"

#if defined(_MSC_VER)
#   pragma message ("Compiling with Microsoft Visual C++")
#endif

#if defined(__clang__)
#   pragma message ("Compiling with CLang")
#endif 

#if defined(__GNUC__) && !defined(__clang__)
#   pragma message ("Compiling with GCC")
#endif 

void UCppLab::OnStartup() 
{
	LOGI(__FUNCTION__);
}
void UCppLab::OnTouched() 
{
	LOGI(__FUNCTION__);
}



