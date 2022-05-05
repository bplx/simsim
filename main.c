// includes
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

// includes for system-specific functions
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

char* getinput() {
	char buf[101];
	fgets(buf, 101, stdin);
	char* dyn = malloc(strlen(buf) * sizeof(char)); 
	strcpy(dyn, buf);
	return dyn;
}

int main() {
	char* input = getinput();
	fputs(input, stdout);
	free(input);
	return 0;
}
