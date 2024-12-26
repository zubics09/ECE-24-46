#include <stdio.h>

int main() {
	int a = 5;
	int b = 3;
	int result;
	
	result = a & b;
	printf("Bitwise And of %d and %d is: %d\n", a, b, result);
	
	result = a | b;
	printf("Bitwise OR of %d and %d is: %d\n", a, b, result);
	
	result = a ^ b;
	printf("Bitwise XOR of %d and %d is: %d\n", a, b, result);
	
	result = ~a;
	printf("Bitwise NOT of %d is: %d\n", a, result);
	
	result = a << 1;
    printf("Left shift of %d by 1 is: %d\n", a, result);
    
    result = a >> 1;
    printf("Right shift of %d by 1 is: %d\n", a, result);
    
    return 0;
    
    
}
