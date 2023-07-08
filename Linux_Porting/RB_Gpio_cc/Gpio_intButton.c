#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define GPIO_EN "/sys/class/gpio/export"
#define GPIO_DIR13 "/sys/class/gpio/PC13/direction"
#define GPIO_DIR12 "/sys/class/gpio/PC12/direction"
#define GPIO_VAL13 "/sys/class/gpio/PC13/value"
#define GPIO_VAL12 "/sys/class/gpio/PC12/value"

int main()
{
	int gpio_fd,fd;
	char gpio_buf[30];
	int gpio_num13=77;
	int gpio_num12=76;
	int count=1;

/*ENABLE THE GPIO*/
	printf("Enable the GPIO\n");
	gpio_fd = open(GPIO_EN,O_WRONLY);
	if(gpio_fd<0)
	{
		printf("File cannot be open\n");
		exit(0);
	}
	sprintf(gpio_buf,"%d",gpio_num13);
	write(gpio_fd,gpio_buf,strlen(gpio_buf));
	close(gpio_fd);
	
	gpio_fd = open(GPIO_EN,O_WRONLY);
	if(gpio_fd<0)
	{
		printf("File cannot be open\n");
		exit(0);
	}
	sprintf(gpio_buf,"%d",gpio_num12);
	write(gpio_fd,gpio_buf,strlen(gpio_buf));
	close(gpio_fd);

/*CONFIGURE THE GPIO*/
	printf("Configuring the GPIO");
	gpio_fd=open(GPIO_DIR13,O_WRONLY);
	if(gpio_fd<0)
	{
		printf("File Cannot be open\n");
		exit(0);
	}
	write(gpio_fd,"out",3);
	close(gpio_fd);


	gpio_fd=open(GPIO_DIR12,O_WRONLY);
	if(gpio_fd<0)
	{
		printf("File Cannot be open\n");
		exit(0);
	}
	write(gpio_fd,"in",2);
	close(gpio_fd);

/*SETTING THE VALUE*/
	printf("Set the value into GPIO_VAL\n");
	gpio_fd=open(GPIO_VAL13,O_WRONLY);
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
