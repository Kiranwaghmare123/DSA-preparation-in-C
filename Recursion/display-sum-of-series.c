

#include<stdio.h>

int series(int n);

main()
{
	int n;
	printf("Enter number of terms : ");
	scanf("%d",&n);
	printf("\b\b = %d\n", series(3));	
}

int series(int n)
{
	int sum;
	if(n==0)
		return 0;
	sum=(n+series(n-1));
	printf("%d + ",n);
	return sum;
}

