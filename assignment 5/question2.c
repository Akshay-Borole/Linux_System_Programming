//write a program which accept file name from user which contains information
//of employee, we have to read allcontants of that file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

#pragma pack(1)
struct Employee
{
    int Empno;
    char Ename[20];
    float Salary;
    int Age;
};

int main(int argc, char *argv[])
{
    struct Employee eobj;
    char Fname[20];
    int fd = 0;

    printf("Enter the file name : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);

    read(fd,&sobj,sizeof(sobj));

    printf("Roll number : %d : \n",eobj.Empno);
    printf("Name : %s : \n",eobj.Ename);
    printf("Marks : %f : \n",eobj.Salary);
    printf("Age : %d : \n",eobj.Age);

    close(fd);

    return 0;
}