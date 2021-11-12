#include <stdio.h>

int pow_K(int num);

int main()
{
	int N;
	
	do
	{	
		printf("N: ");
		scanf("%i", &N);
	} while (N <= 0);
	
	int mod;
	
	for (int K = 1; K < N; K++)
	{
	mod = pow_K(K);
	if (mod > N)
		{
		printf("%i\n", K);
		break;
		}
	}
}

int pow_K(int num)
{
	int product = 1;
	for (int i = 0; i < 2; i++)
	{
		product *= num;
	}
	return product;
}
