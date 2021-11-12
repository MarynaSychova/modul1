#include <stdio.h>

int main()
{
	int n; 
	
	do
	{
		printf("Enter number: ");
		scanf("%i", &n);
	} while (n < 1 || n > 7);
	
	switch (n)
	{
		case 1:
			printf("Понеділок\n");
			break;

		case 2:
			printf("Вівторок\n");
			break;
			
		case 3:
			printf("Середа\n");
			break;
		case 4:
			printf("Четвер\n");
			break;
	
		case 5:
			printf("Пятниця\n");
			break;
			
		case 6:
			printf("Субота\n");
			break;
			
		case 7:
			printf("Неділя\n");
			break;
	}		
}
