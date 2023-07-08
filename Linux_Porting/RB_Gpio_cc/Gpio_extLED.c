#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define GPIO_EN "/sys/class/gpio/export"
#define GPIO_DIR21 "/sys/class/gpio/PD21/direction"
#define GPIO_DIR26 "/sys/class/gpio/PD26/direction"
#define GPIO_DIR28 "/sys/class/gpio/PD28/direction"
#define GPIO_VAL21 "/sys/class/gpio/PD21/value"
#define GPIO_VAL26 "/sys/class/gpio/PD26/value"
#define GPIO_VAL28 "/sys/class/gpio/PD28/value"


int main()
{
	int gpio_fd;
	char gpio_buf[30];
	int gpio_num21=117;
	int gpio_num26=122;
	int gpio_num28=124;
	int count21=1;
	int count26=1;
	int count28=1;

/*ENABLE THE GPIO*/
	printf("Enable the GPIO\n");
	gpio_fd = open(GPIO_EN,O_WRONLY);
	if(gpio_fd<0)
	{
		printf("File cannot be open\n");
		exit(0);
	}
	sprintf(gpio_buf,"%d",gpio_num21);
	write(gpio_fd,gpio_buf,strlen(gpio_buf));
	close(gpio_fd);
	
	gpio_fd = open(GPIO_EN,O_WRONLY);
	if(gpio_fd<0)
	{
		printf("File cannot be open\n");
		exit(0);
	}
	sprintf(gpio_buf,"%d",gpio_num26);
	write(gpio_fd,gpio_buf,strlen(gpio_buf));
	close(gpio_fd);
	
	gpio_fd = open(GPIO_EN,O_WRONLY);
	if(gpio_fd<0)
	{
		printf("File cannot be open\n");
		exit(0);
	}
	sprintf(gpio_buf,"%d",gpio_num28);
	write(gpio_fd,gpio_buf,strlen(gpio_buf));
	close(gpio_fd);



/*CONFIGURE THE GPIO*/
	printf("Configuring the GPIO");
	gpio_fd=open(GPIO_DIR21,O_WRONLY);
	if(gpio_fd<0)
	{
		printf("File Cannot be open\n");
		exit(0);
	}
	write(gpio_fd,"out",3);
	close(gpio_fd);
	
	gpio_fd=open(GPIO_DIR26,O_WRONLY);
	if(gpio_fd<0)
	{
		printf("File Cannot be open\n");
		exit(0);
	}
	write(gpio_fd,"out",3);
	close(gpio_fd);
	
	gpio_fd=open(GPIO_DIR28,O_WRONLY);
	if(gpio_fd<0)
	{
		printf("File Cannot be open\n");
		exit(0);
	}
	write(gpio_fd,"out",3);
	close(gpio_fd);

/*SETTING THE VALUE*/
	printf("Set the value into GPIO_VAL\n");
	gpio_fd=open(GPIO_VAL21,O_WRONLY);
	if(gpio_fd<0)
	{
		printf("File cannot be open\n");
		exit(0);
	}
	printf("Toggling the PIN13\n");
	while(count21--)
	{
		write(gpio_fd,"1",1);
		sleep(2);
		write(gpio_fd,"0",1);
		sleep(2);
	}
	close(gpio_fd);
	

	gpio_fd=open(GPIO_VAL26,O_WRONLY);
	if(gpio_fd<0)
	{
		printf("File cannot be open\n");
		exit(0);
	}
	printf("Toggling the PIN17\n");
	while(count26--)
	{
		write(gpio_fd,"1",1);
		sleep(2);
		write(gpio_fd,"0",1);
		sleep(2);
	}
	close(gpio_fd);
	
	
	gpio_fd=open(GPIO_VAL28,O_WRONLY);
	if(gpio_fd<0)
	{
		printf("File cannot be open\n");
		exit(0);
	}
	printf("Toggling the PIN19\n");
	while(count28--)
	{
		write(gpio_fd,"1",1);
		sleep(2);
		write(gpio_fd,"0",1);
		sleep(2);
	}
	close(gpio_fd);

}
