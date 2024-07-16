#include<stdio.h>

/*
11
12 13
14 15 16
17 18 19 20
21 22 23 24 25

*/

main()
{
	int r,c,number=11,n=4;

	for(r=0;r<=n;r++)
	{
		for(c=0;c<=r;c++)
		{
			printf("%d ",number);
			
			number++;
		}
		printf("\n");
	}
}