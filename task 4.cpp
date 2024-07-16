#include<stdio.h>
/*
10101
 1010
  101
   10
    1 
*/

main()
{
	int r,c,s;
	
	for(r=0;r<=5;r++)
	{
		for(s=0;s<r;s++)
		{
			printf(" ");
		}
		for(c=0;c<5-r;c++)
	    {
			if(c%2==0)
			{
			    printf("1");				
			}
			else
			{
				printf("0");
			}	
	    }
	    printf("\n");
	}
}