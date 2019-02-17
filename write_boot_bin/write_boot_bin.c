#include "../include/write_boot_bin.h"

int dev_desc, fd;
unsigned char buffer[512];

int main()
{
	open_file();
	read_file();
	
	buffer[510] = 0x55;
	buffer[511] = 0xaa;

	dev_desc = open("/dev/sdb", O_RDWR);

	if(-1 == dev_desc)
	  perror("failed to open device /dev/sdc");

	write(dev_desc, buffer, 512);
	close(dev_desc);
	puts("引导程序写入U盘成功！");
}

void open_file()
{
	fd = open("./boot.bin", O_RDONLY);

	if(-1 == fd){
	  perror("failed to read file boot !\n");
	}else{
		printf("read file success !\n");
	}
}

void read_file()
{
	read(fd, buffer, 510);
}

void close_file()
{
	close(fd);
}



