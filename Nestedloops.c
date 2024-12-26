#include <stdio.h>
int main() {
	int marks;
	
	printf("Enter the student's marks (out of 100): ");
	scanf("%d", &marks);
	
	if ( marks > 40) {
		printf("pass\n");
				
	    if (marks > 90){
	     printf("congrates you got 1st division\n");

        }else if (marks > 80)
		{
		printf("congrates you got 2nd division\n");
		}
		else if (marks > 65)
		{
	     printf("Congrates you got 3rd division\n");	
		}
}else {
	printf("Fail");
}
return 0;
}
