#include "logmask.h"

int main()
{
	int logmask;

	openlog("logmask", LOG_PID | LOG_CONS, LOG_USER);
}
