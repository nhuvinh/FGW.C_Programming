#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/* local variable definition */
   	char grade = 'B';

   	switch(grade) {
		case 'A' :
         	printf("Excellent!\n" );
         	break;
      	case 'B' :
      	case 'C' :
         	printf("Well done\n" );
         	break;
      	case 'D' :
         	printf("You passed\n" );
         	break;
      	case 'F' :
         	printf("Better try again\n" );
         	break;
      	default :
         	printf("Invalid grade\n" );
   }
   
   printf("Your grade is  %c\n", grade );
 
   return 0;
}
