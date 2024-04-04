#include <windows.h>
#include <stdio.h>
/*
this takes process id as input


*/
char* k = "[+]";
char* i = "[*]";
char* e = "[-]";

unsigned long PID = NULL; //will store process ID

int main(int argc, char* arhv[]){
	if(argc < 2){
		//IF arg count less than 2
		printf("%s program error code",e);
		return EXIT_FAILURE;
	}	
	//else
	PID = atoi(argv[1]);
	printf("%s process id captured: %d",i,PID);		
	return EXIT_SUCCESS;
}
