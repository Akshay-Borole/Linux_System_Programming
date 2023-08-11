//write a program which accept directory name from user and print all file names from that directory
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<dirent.h>

int main(int argc, char *argv[])
{
    DIR *dp = NULL;
    struct dirent * entry = NULL;
    char Dname[];
    printf("Enter the file name that you want to open : \n");
    scanf("%s",Dname);

    dp = opendir(Dname);
    if(dp == NULL)
    {
        printf("Unable to open directory\n");
        return -1;
    }
    printf("Entries from the directory file are : \n");

    printf("File Name\n");

    while((entry = readdir(dp)) != NULL)
    {
        printf("%d\n",entry->d_name);
    }

    closedir(dp);
    return 0;
}
