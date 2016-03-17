
#include "UCppLab.h"
#include "UCL_Logging.h"

#include "EMC/EMC.h"

void UCppLab::OnStartup() 
{
#if UCL_GCC
    UCL_Log("GCC: %d.%d.%d", __GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__);
#endif

#if UCL_LLVM
    UCL_Log("GCC: %d.%d.%d", __GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__);
    UCL_Log("LLVM: %d.%d.%d", __clang_major__, __clang_minor__, __clang_patchlevel__);
#endif

#ifndef __GXX_RTTI
    UCL_Log("GCC: rtti off");
#endif

    Item_01_template_type_deduction();
}

void UCppLab::OnTouched() 
{
}



