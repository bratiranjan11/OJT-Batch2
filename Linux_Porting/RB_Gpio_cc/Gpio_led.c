#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define GPIO_EN "/sys/class/gpio/export"
#define GPIO_DIR "/sys/class/gpio/PC13/direction"
#define GPIO_VAL "/sys/class/gpio/PC13/value"

int main()
{
	int gpio_fd;
	char gpio_buf[30];
	int gpio_num=77;
	int count=10;

	/*ENABLE THE GPIO*/
	printf("Enable the GPIO\n");
	gpio_fd = open(GPIO_EN,O_WRONLY);
	if(gpio_fd<0)
	{
		printf("File cannot be open\n");
		exit(0);
	}
	sprintf(gpio_buf,"%d",gpio_num);
	write(gpio_fd,gpio_buf,strlen(gpio_buf));
	close(gpio_fd);

	/*CONFIGURE THE GPIO*/
	printf("Configuring the GPIO");
	gpio_fd=open(GPIO_DIR,O_WRONLY);
	if(gpio_fd<0)
	{
		printf("File Cannot be open\n");
		exit(0);
	}
	write(gpio_fd,"out",3);
	close(gpio_fd);

	/*SETTING THE VALUE*/
	printf("Set the value into GPIO_VAL\n");
	gpio_fd=open(GPIO_VAL,O_WRONLY);
	if(gpio_fd<0)
	{
		printf("File cannot be open\n");
		exit(0);
	}
	printf("Toggling the PIN\n");
	while(count--)
	{
		write(gpio_fd,"0",1);
		sleep(2);
		write(gpio_fd,"1",1);
		sleep(2);
	}
	close(gpio_fd);

}
