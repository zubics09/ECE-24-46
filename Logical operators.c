#include <stdio.h>

int main() {
	int a = 5, b = 10, c = 0;
	
	if(a && b) {
		printf("Logical AND: Both a and b are non-zero\n");
	} else {
		printf("Logical AND: one or both are zero\n");
	}
	
	if (a || c) {
		printf("Logical OR: Either a or c is non-zero\n");
	} else {
		printf("Logical OR: Both are zero\n");
	}
		if(!c) {
			printf("Logical NOT: c is zero\n");
		}
		return 0;
	}

