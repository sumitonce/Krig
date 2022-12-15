#pragma once

#ifdef KRIG_PLATFORM_WIN
	#ifdef KRIG_BUILD_DLL
		#define KRIG_API __declspec(dllexport)
	#else
		#define KRIG_API __declspec(dllimport)
	#endif
#else
	#error Krig only support Windows
#endif