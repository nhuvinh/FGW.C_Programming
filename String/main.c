#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str1[12] = "Hello";
   	char str2[12] = "World";
   	char str3[12];
   	int  len ;

   	/* copy str1 into str3 */
   	strcpy(str3, str1);
   	printf("strcpy( str3, str1) :  %s\n", str3 );

   	/* concatenates str1 and str2 */
   	strcat( str1, str2);
   	printf("strcat( str1, str2):   %s\n", str1 );

   	/* total lenghth of str1 after concatenation */
   	len = strlen(str1);
   	printf("strlen(str1) :  %d\n", len );

   	return 0;
}
