
#include<stdio.h>
void hanoi(int n, char source, char temp, char dest);

main()
{
	int n;
	
	printf("Enter the number of disks : ");
	scanf("%d",&n );
	
	hanoi(n, 'A', 'B', 'C');
}

void hanoi(int n, char source, char temp, char dest)
{
	if(n==1)
	{
		printf("Move Disk %d from %c-->%c\n",n,source,dest);
		return;
	}
	hanoi(n-1, source, dest, temp);
	printf("Move Disk %d from %c-->%c\n", n, source, dest);
	hanoi(n-1, temp, source, dest);
}

