#include<stdio.h>

int main()
{
	int n, bit;
	while(1)
	{
		printf("\n\n Enter the number : ");
		scanf("%d", &n);
		printf("\n Enter the which bit has to set ?: ");
		scanf("%d", &bit);
		int x = (n | (1<<bit));

		printf("\n Number: %d after set the bit, Number is: %d", n, x);
	}
	return 0;
}
