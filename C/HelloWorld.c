#include <stdio.h>
#include <stdbool.h>

int main()
{
	
	bool escape = false;
	
	printf("Hello world!\n");
	printf("Press space, then enter keys to exit.");
	
	while(!escape)
	{
		
		if(getchar() == '\n')
		{
			
			escape = true;
			
		}
		
	}
	
}