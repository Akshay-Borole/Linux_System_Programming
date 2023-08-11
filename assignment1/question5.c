#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc, char *argv[]) {
    int fd = 0;
    char Buffer[20] = {'\0'};
    int Ret = 0;
    int Bytes = 0;
    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    printf("Enter number of bytes to read : \n");
    scanf("%d",Bytes);

    fd = open(argv[1], O_RDONLY);
    if(fd == -1) {
        printf("Unable to open file\n");
        return -1;
    }

    Ret = read(fd,Buffer,Bytes);
    if(Ret == 0) {
        printf("Unable to read data from file\n");
        return -1;
    }

    printf("Data from file is : %s\n",Buffer);

}