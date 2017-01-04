#include <stdlib.h>

int cp(const void* a, const void* a) { return (*(int*)a-*(int*)b); }

int main(void) {
	
	int vec[5] = {6, 2, 7, 1, 9};

	qsort(vec, 5, sizeof(int), cp);
	
	printf("%d", vec[0]);
	printf("%d", vec[1]);		
	printf("%d", vec[2]);

	return 0;
}
