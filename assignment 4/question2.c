//write a program which is used to demonstrate concept of I/O redirection
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<dirent.h>
#include<sys/stat.h>

int main(int argc, char *argv[])
{
    char DirName[20];
    DIR *dp = NULL;
    struct dirent *entry = NULL;

    printf("Enter name of directory : \n");
    scanf("%s",DirName);

    dp = mkdir(DirName);
    if(dp == 1)
    {
        printf("Unable to open directory\n");
        return -1;
    }
return(0);
}