//write program which accept file name and mode from user and 
//then open that file specified mode
#include<stdio.h>
#include<fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if(argc != 2)
    {
        printf("Invalid number of arguments\n");
        return -1;
    }

    if( !access(argv[1], R_OK ) ) {
      printf( "ok to read %s\n", argv[1] );
      return EXIT_SUCCESS;
    }
    if (access(argv[1], W_OK) == 0)
      printf("You have write access to '%s'\n", argv[1]);
      return EXIT_SUCCESS;
    if (access(argv[1], X_OK) == 0)
      printf("You have search access to '%s'\n", argv[1]);
      return EXIT_SUCCESS;
    return 0;
}