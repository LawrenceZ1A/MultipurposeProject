#include <stdio.h>
#include <stdbool.h>

void Add()
{
	
	printf("I'm adding!");
	
}

int main()
{
	
	bool escape = false;
	
	printf("Welcome to C-Calculator!\n\n");
	printf("If you would like to input, press the required key, then press enter.\n\n");
	printf("Now, please establish which operation you would like to use:\n");
	printf("A (Add)\n");
	printf("S (Subtract)\n");
	printf("M (Multiply)\n");
	printf("D (Divide)\n");
	printf("R (Root)\n");
	printf("P (Power)\n\n");
	
	while(true)
	{
		
		if(getchar() == 'A')
		
			
			Add();
			return 0;
			
		}
		
		printf("true\n");
		
	}
	
}