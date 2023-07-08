#include<stdio.h>
#include<stdlib.h>

int main()

{
    char name[20],ch;
    FILE *fp;
    printf("Enter the file name");
    scanf("%[^\n]",name);
    fp=fopen(name,"w+");
    if(fp==NULL)
    {
        printf("Fail to create file");
        exit(1);
    }
    printf("File Created\n");
    printf("Enter data into the file $ press \"ctrl+d\" to end\n");
    while((ch= getchar())!=EOF)
    fputc(ch,fp);

	fseek(fp,0,SEEK_SET);

    printf("Data in file\n");
    while((ch= getc(fp))!=EOF)
	    putchar(ch);
    
    fclose(fp);

}
