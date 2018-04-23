#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

#include<initrawsock.h>

char *device = "eth0"

int i_packet(u_int8_t *packet, size_t packet_size){
	int sock, size;
	u_int8_t packet[1024];

	if ((sock = initrawsock (device, 0, 0)) < 0){
		fprintf(stderr, "error: initrawsock\n");
		exit(1);
	}

	if ((size = read(sock, packet, packet_size))){
		perror("read");
	}

	return size;
}

void o_packet(){
	
}
