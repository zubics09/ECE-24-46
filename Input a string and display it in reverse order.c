#include <stdio.h>
#include <string.h>
int main() 
{
    char str[50];
    int len=0 ;
    printf("Enter a string: ");
    scanf("%s", str);
    while( str[len] !='\0' )len++;
    printf("Reversed string: ");
    int i;
    for(i = len - 1; i >= 0; i--) 
	{
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
