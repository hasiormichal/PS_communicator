compile:
	gcc -Wall -g3 -fsanitize=address -pthread server.c -o server
	gcc -Wall -g3 -fsanitize=address -pthread client.c -o client
	gcc -o projekt project.c
	gcc -o chat multicast_chat.c
	
