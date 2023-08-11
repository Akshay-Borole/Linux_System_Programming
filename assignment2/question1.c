//write a program which accept file name from user and read whole file
#include<stdio.h>
#include<fcntl.h>

int main(int argc, char *argv[])
{
    char Fname[20];
    int fd = 0;
    int Ret = 0;

    char Buffer[1024] = {'\0'};
    
    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = open(argv[1],O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
     while((Ret = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        memset(Buffer,0,sizeof(Buffer));
    }
    return(0);
}
