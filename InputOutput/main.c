#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   	char str[100];
   	int i;

   	printf( "Enter a value :");
   	scanf("%s %d", str, &i);

   	printf( "\nYou entered: %s %d ", str, i);

   	return 0;
}
