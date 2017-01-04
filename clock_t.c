#include <stdio.h>
#include <time.h>

int main(void) {

	clock_t t;
	
	t = clock(); /* Init */
	
	// TODO ...
	
	t = clock() - t; /* End */
	
	printf("%l s\n", (double)t/(double)CLOCKS_PER_SEC);

	return 0;
}
