#include <sys/socket.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int main(){
    execl("/home/student/PS_communicator/client.exe" , "/home/student/PS_communicator/client.exe" , 4444, NULL );
    printf("nie wyszlo\n");
    return 0;
}