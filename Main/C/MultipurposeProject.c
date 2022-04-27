#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	
	bool escape = false;
	
	printf("Welcome to Multipurpose Project!\n\n");
	printf("If you would like to input, press the required key, then press enter.\n\n");
	printf("Now, please establish which multipurpose project you would like to use:\n");
	printf("C (C-Calculator)\n");
	printf("T (CPSTest)\n");
	printf("W (The Game of War)\n\n");
	
	while(true)
	{
		
		char input;
		scanf("%c", &input);
		
		chdir("..\\\\..");
		if(input == 'C' || input == 'c')
		{
			
			printf("\n\n");
			(void)system("C_Calculator\\\\EXE\\\\C_Calculator.exe");
			return(0);
			
		}
		else if(input == 'T' || input == 't')
		{
			
			system("start https://onesquareminesweeper.com/");
			exit(0);
			
		}
		else if(input == 'W' || input == 'w')
		{
			
			(void)system("run.bat");
			exit(0);
			
		}
		
	}
	
}