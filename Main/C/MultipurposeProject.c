#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
	
	bool escape = false;
	
	printf("Welcome to Multipurpose Project!\n\n");
	printf("If you would like to input, press the required key, then press enter.\n\n");
	printf("Now, please establish which multipurpose project you would like to use:\n");
	printf("C (C-Calculator)\n");
	printf("F (Fighting Cuboid)\n");
	printf("X (Felix)\n");
	printf("E (Enoch)\n\n");
	
	while(true)
	{
		
		char input;
		scanf("%c", &input);
		
		if(input == 'C' || input == 'c')
		{
			
			printf("\n\n");
			(void)system("C:/MultipurposeProject/C-Calculator/EXE/C-Calculator.exe");
			return(0);
			
		}
		
	}
	
}