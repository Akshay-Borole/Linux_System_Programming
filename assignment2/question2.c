//write a program which accept file name from user and write string in that file
#include<stdio.h>
#include<fcntl.h>

int main(int argc, char *argv[])
{
    char Fname[20];
    int fd = 0;
    int Ret = 0;
    char Fdata[20];
    char Buffer[1024] = {'\0'};
    int Size = 0;
    
    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    printf("Enter the text you want to add : \n");
    scanf("%s",Fdata);

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    Size = atoi(Fdata);
    Buffer = (char *)malloc(Size);

    Ret = read(fd,Buffer,sizeof(Buffer));
    if(Ret == 0) {
        printf("Unable to read data from file\n");
        return -1;
    }
    write(1,Buffer,Ret);

    return(0);
}