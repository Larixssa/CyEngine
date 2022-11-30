#include "Thread.h"

#ifdef _WIN32
	#include<Windows.h>
	void Thread::cSleep(unsigned msval) {
		Sleep(msval * 1000);
	}
#else
	#include<unistd.h>
	void Thread::cSleep(unsigned msval) {
		usleep(msval * 1000);
	}
#endif
