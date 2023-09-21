#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char input_char;
	
	printf("enter a character : ");
	scanf("%C", &input_char);
	 
	printf("the next character of %c (%d) is %c (%d)",input_char,input_char,input_char+1,input_char+1);
	
	
	return 0;
}
