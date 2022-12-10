#include <sdtio.h>
#include <time.h>
/**
 * More header goes there
 */
/*betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes there */
	if (n == 0){
	printf("The number : %d is zero\n");
	} 
	else if (n > 0) {
	printf ("The number : %d is positive\n");	
	}
	else
		printf("The number : %d is negative\n");

	return (0);
}
