#include "sys_log.h"

int main()
{
	FILE *f;

	f = fopen("not here", "r");
	if(!f)
	  syslog(LOG_ERR | LOG_USER,"oops - %m\n");
	exit(0);
}
