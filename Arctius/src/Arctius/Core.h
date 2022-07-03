#pragma once

#ifdef ARC_PLATFORM_WINDOWS
	#ifdef ARC_BUILD_DLL
		#define ARCTIUS_API __declspec(dllexport)
	#else
		#define ARCTIUS_API __declspec(dllimport)
	#endif
#else
	#error Arctius only supports Windows...
#endif

#define BIT(x) (1 << x)