#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**main - Entry points
 * This code calculates the last digit of the number stored in the variable n.
 * return : 0 (success)
 */
int main(void)
{
	    int n;

	        srand(time(0));
		    n = rand() - RAND_MAX / 2;

		        printf("Last digit of %d is ", n);

			    int lastDigit = n % 10;  // Get the last digit

			        if (lastDigit > 5)
					    {
						            printf("and is greater than 5\n");
							        }
				    else if (lastDigit == 0)
					        {
							        printf("and is 0\n");
								    }
				        else
						    {
							            printf("and is less than 6 and not 0\n");
								        }

					    return (0);
}

