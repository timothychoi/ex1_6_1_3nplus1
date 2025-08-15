/* ex1_6_1.c: c program that outputs the maximum cycle length among all
 * integers between two inteters i and j including i and j.
 * Input: i j (0 < 1, i < 10^6)
 * Output: i j maximum_cycle_length */

#include <stdio.h>

/* threeNplus1: determines the next term of 3n+1 sequence of the input
 * Input: integer a
 * Output: next term in the sequence */
int threeNplus1(int a)
{
	if(a%2 == 0) return a/2;
	else return (3*a)+1;
};

/* maxCycleLength: finds the maximum cycle length of 3n+1 sequence of the input
 * Input: integer a
 * Output: maximum cycle length of the integer a */

int maxCycleLength(int a)
{
	int retvalue = 1;
	
	/* printf("%d\n", a);	uncomment to print the sequence */
	
	while(a != 1)
	{
		retvalue++;
		a = threeNplus1(a);
		/* printf("%d\n", a);	uncomment to print the sequence  */
	}
	
	return retvalue;
};


int main()
{
	int i, j, count, max = 1, temp;
	
	scanf("%d %d", &i, &j);
	count = i;
	
	while(count < j)
	{
		temp = maxCycleLength(count);
		if (temp >= max) max = temp;
		count++;
	}
	
	printf("%d %d %d\n", i, j, max); 
	
	return 0;
}
