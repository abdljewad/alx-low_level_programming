#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last < 6 )
	  {
	    printf("Last digit of %d is %d and less than 6 and not o", n, last);
	  }
	if (last >=6)
	  {
	    printf("Last digit of %d is %d and greater than 5", n, last);
	  }
	if (last == 0)
	  {
	    printf("Last digit of %d is %d and is 0", n, last);
	  }
	
	return (0);
}
