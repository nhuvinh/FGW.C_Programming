#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n[ 10 ]; /* n is an array of 10 integers */
   	int i,j;
 
   	/* initialize elements of array n to 0 */         
   	for ( i = 0; i < 10; i++ ) {
      	n[ i ] = i + 100; /* set element at location i to i + 100 */
   	}
   
   	/* output each array element's value */
   	for (j = 0; j < 10; j++ ) {
      	printf("Element[%d] = %d\n", j, n[j] );
   	}
   	
   	int arrayLength = 4;
   	
   	int array[arrayLength]; // Declare an array, size: 4
   	
   	array[0] = 20;
   	array[1] = 30;
   	array[2] = 10;
   	array[3] = 50;
   	
   	for (i = 0; i < arrayLength; i++){
   		printf("%d\n", array[i]);
	   }
 
   	return 0;
}
