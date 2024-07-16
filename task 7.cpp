#include<stdio.h>
/*
* * * * *
*       *
* * * * *
*
*
*

*/
main()
{
	int r,c;
	
	for(r=1;r<=6;r++)
	{
		for(c=1;c<=6;c++)
		{
			if(r==1||r==3||c==1||c==6&&r<=3)
			{
				printf("* ");
			}
			else 
			{
				printf("  ");
			
			}
			    
		}
		printf("\n");
	}
}