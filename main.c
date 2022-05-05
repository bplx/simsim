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

char* getinput() 
{
	char buf[101];
	fgets(buf, 101, stdin);
	char* dyn = malloc(strlen(buf) * sizeof(char)); 
	strcpy(dyn, buf);
	return dyn;
}

int main() 
{
	bool gamerunning = true;

	while (gamerunning) 
	{
		// print prompt and get input
		printf("(help) --> ");
		char* input = getinput();
		
		// check the input and run stuff accordingly
		if (strcmp(input, "help\n") == 0) 
		{
			puts("This is a help page");
		}  
		else if (strcmp(input, "quit\n") == 0) 
		{
			break;
		}
		else 
		{
			puts("Command unknown");
		}
			
		free(input);
	}
	return 0;
}
