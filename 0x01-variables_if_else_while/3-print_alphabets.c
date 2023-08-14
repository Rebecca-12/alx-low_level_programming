#include <stdio.h>
/*main - Entry point
 *This program uses the putchar function to print each character in the lowercase alphabet, followed by the uppercase alphabet.
return : 0 (success)
*/
int main() {
	    for (char ch = 'a'; ch <= 'z'; ch++) {
		            putchar(ch);
			        }
	        
	        for (char ch = 'A'; ch <= 'Z'; ch++) {
			        putchar(ch);
				    }
		    
		    putchar('\n');
		        
		        return 0;
}
