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
	printf("W (The Game of War)\n");
	printf("M (Machine Learning (Disclamer! This is a software program that requires an extremely large amount of computer resources. During testing, our computers experienced maximum loads of up to 8GB of RAM and the program consumed around 50% of the 6-core CPU built-in our computer. It also consumed large amounts of other system resources and took around 30 minutes. Proceed at your own pace.) )\n\n");
	
	while(true)
	{
		
		char input1;
		scanf("%c", &input1);
		
		chdir("..\\\\..");
		if(input1 == 'C' || input1 == 'c')
		{
			
			printf("\n\n");
			(void)system("C_Calculator\\\\EXE\\\\C_Calculator.exe");
			return(0);
			
		}
		else if(input1 == 'T' || input1 == 't')
		{
			
			(void)system("CPSTest\\\\CPSTest.exe");
			exit(0);
			
		}
		else if(input1 == 'W' || input1 == 'w')
		{
			
			(void)system("run.bat");
			exit(0);
			
		}
		else if(input1 == 'M' || input1 == 'm')
		{

			system("Keras\\\\dist\\\\how-to-forecast\\\\how-to-forecast.exe");
			exit(0);
			
		}
		
	}
	
}