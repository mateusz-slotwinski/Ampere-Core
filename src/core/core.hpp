#pragma once

#ifdef AMP_PLATFORM_WINDOWS
  #ifdef AMP_BUILD_DLL
    #define AMPERE_API __declspec(dllexport)
  #else
    #define AMPERE_API __declspec(dllimport)
  #endif
#else
  #error Ampere supports only Windows!
#endif

#define BIT(x) (1 << x)
