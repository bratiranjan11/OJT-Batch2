/*To read the RFID Card id through program*/
#include <stdio.h>
#include <string.h>
#include <fcntl.h> 
#include <errno.h> 
#include <termios.h> 
#include <unistd.h>
#include<sys/select.h>

struct termios brati;
int serial_port;
int Sconfig()
{
		
	brati.c_cflag &= ~PARENB; // Clear parity bit, disabling parity (most common)
	brati.c_cflag &= ~CSTOPB; // Clear stop field, only one stop bit used in communication (most common)
  	brati.c_cflag &= ~CSIZE; // Clear all bits that set the data size 
  	brati.c_cflag |= CS8; // 8 bits per byte (most common)
  	brati.c_cflag &= ~CRTSCTS; // Disable RTS/CTS hardware flow control (most common)
  	brati.c_cflag |= CREAD | CLOCAL; // Turn on READ & ignore ctrl lines (CLOCAL = 1)

  	brati.c_lflag &= ~ICANON;
  	brati.c_lflag &= ~ECHO; // Disable echo
  	brati.c_lflag &= ~ECHOE; // Disable erasure
  	brati.c_lflag &= ~ECHONL; // Disable new-line echo
  	brati.c_lflag &= ~ISIG; // Disable interpretation of INTR, QUIT and SUSP
  	
	brati.c_iflag &= ~(IXON | IXOFF | IXANY); // Turn off s/w flow ctrl
  	brati.c_iflag &= ~(IGNBRK|BRKINT|PARMRK|ISTRIP|INLCR|IGNCR|ICRNL); // Disable any special handling of received bytes

  	brati.c_oflag &= ~OPOST; 
  	brati.c_oflag &= ~ONLCR; 
  
  	brati.c_cc[VTIME] = 0;   
  	brati.c_cc[VMIN] = 0;


//Baud rate settings
  	cfsetispeed(&brati, B9600);
  	cfsetospeed(&brati, B9600);

//Save the settings
  	tcsetattr(serial_port, TCSANOW, &brati);

}


int main() 
{
	char buff[20],data[20];
	int rd,i;
 	serial_port = open("/dev/ttyUSB0", O_RDWR);
	
	tcgetattr(serial_port, &brati);
	if(serial_port == -1)
	{
		printf("Unable to open %d\n",serial_port);
	}
	
 	Sconfig();
       
	while(1)
	{
		printf("Waiting for message....\n");
		sleep(3);
		read(serial_port,buff,sizeof(buff));
		
		if(buff >0)
		{
			for(i=0;i<20;i++)
				printf("%c",buff[i]);
			printf("\n");
		}
		else
		{
			printf("Not a non zero value");
		}
		memset(buff,0,sizeof(buff));
		sleep(1);
	}
	close(serial_port);
	return 0;
}

