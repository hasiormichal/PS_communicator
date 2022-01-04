#include <sys/socket.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(){
    execl("/home/student/PS_communicator/client.exe" , "/home/student/PS_communicator/client.exe" , 4444, NULL );
    return 0;
}