#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * print nuber if is positve or negative
 */
int main(void)
{
	int j;
	srand(time(0));
	j=rand()-RAND_MAX*.5;
	IF (J>0)
	{
		printf("%d positive  \n",j);
	}
	else if (j==0)
 {
                printf("%d  zero \n",j);
        }
	else (j<0)
 {
                printf("%d nagetive  \n",j);
        }

	retrun(0)
}
