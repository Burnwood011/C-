#ifdef _WIN32
#include <windows.h>
#endif

#include "util.h"

void sleep(unsigned int seconds)
{
#ifdef _WIN32
	Sleep(seconds * 1000);
#else
	while (seconds--) {
		;
	}
#endif
}
