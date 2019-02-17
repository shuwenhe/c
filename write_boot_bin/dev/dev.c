#include "dev.h"

int dd;

void open_dev()
{
	dd = open("/dev/sdb", O_RDWR);

	if(-1 == dd)
	  perror("failed to open device /dev/sdc");
	else
	  puts("boot.bin writed success !");
}

void write_dev()
{
	write(dd, buffer, 512);
}

void close_dev()
{
	close(dd);
}
