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
	printf("N (Cuboid News)\n");
	printf("W (The Game of War)\n");
	printf("M (Machine Learning)\n\n");
	
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
		else if(input == 'N' || input == 'n')
		{
			
			(void)system("CuboidNews\\\\CuboidNews.exe");
			exit(0);
			
		}
		else if(input == 'W' || input == 'w')
		{
			
			(void)system("run1.bat");
			exit(0);
			
		}
		else if(input == 'M' || input == 'm')
		{

			(void)system("run2.bat");
			exit(0);
			
		}
		
	}
	
}