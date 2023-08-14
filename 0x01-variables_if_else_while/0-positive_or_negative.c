#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**main - Entry point
 * return: 0 (success) */
int main(void)
{
	    int n;

	        srand(time(0));
		    n = rand() - RAND_MAX / 2;

		        printf("number %d is ", n);

			    if (n > 0)
				        {
						        printf("positive\n");
							    }
			        else if (n == 0)
					    {
						            printf("zero\n");
							        }
				    else
					        {
							        printf("negative\n");
								    }

				        return (0);
}
