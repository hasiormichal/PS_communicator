#include <sys/socket.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int main(){
    //execl("/home/student/PS_communicator/client.exe" , "client" , 4444, NULL );
    execlp("/home/student/PS_communicator/client" , "client" ,4444, (char *)NULL);
    return 0;
}