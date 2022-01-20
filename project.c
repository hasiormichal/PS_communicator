#include <sys/socket.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int main(){
    //execl("/home/student/PS_communicator/client.exe" , "client" , 4444, NULL );
    int wybor = 0;
    
    pid_t pid = fork();
	if (pid == 0){
		 execlp("/home/student/PS_communicator/czas_serwer" , "czas_serwer", (char *)NULL);
	}
    while (1){
        printf("Wybierz tryb programu:\n");
        printf("1) indywidualny czat - klient\n");
        printf("2) indywidualny czat - serwer\n");
        printf("3) czat grupowy\n");
        printf("4) czas\n");
        printf("5) wyjdz\n");
        scanf("%i",&wybor);

        if(wybor == 1){
            execlp("/home/student/PS_communicator/client" , "client" ,"4444", (char *)NULL);
        }

        else if (wybor == 2){
            execlp("/home/student/PS_communicator/server" , "server" ,"4444", (char *)NULL);
        }
        else if(wybor == 3){
            execlp("/home/student/PS_communicator/chat" , "chat" , (char *)NULL);
        }
        else if(wybor == 4){
            execlp("/home/student/PS_communicator/czas" , "czas" , (char *)NULL);
        }
        else if (wybor == 5)
            return 0;
        else{
            printf("\nPodano niepoprawna komende \n");
            continue;
        }
    }
}