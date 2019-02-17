#include "file.h"

int fd;

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

