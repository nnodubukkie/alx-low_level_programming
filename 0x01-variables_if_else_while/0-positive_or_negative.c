1 #include <stdlib.h>
2 #include <time.h>
3 #include <stdio.h>
4
5 /**
6    * main - check if a number is positive, negative or zero.
7    *
8    * return: Always 0 (Success)
9 */
10 int main(void)
11 {
12      int n;
13	srand(time(0));
14	n = rand() - RAND_MAX / 2;
15	
16	if (n > 0)
17	{
18		printf("%d is positive\n", n);
19	}
20     	else if (n==0)
21	{
22		printf("%d is zero\n", n);
23	}
24	else 
25	{
26		printf("%d is negative\n", n);
27	}
28	return (0);
29  }

