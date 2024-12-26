#include <stdio.h>
int main()
 {
    int a,b;
    printf("Enter a number: ");
    scanf("%d %d", &a, &b);
    int max= (a>b)? a:b;
    printf(" The larger number is : %d\n" , max);
    return 0;
}
