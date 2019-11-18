#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int max(int num1, int num2);

int sum(int num_1, int num_2);

int sum_3_int(int num_1, int num_2, int num_3);

char returnCharacter(int num);

void printNumber(int number);

void printMenu();

int main(int argc, char *argv[]) {
	   /* local variable definition */
   int a = 100;
   int b = 200;
   int c = 500;
   int ret;
 
   /* calling a function to get max value */
   ret = max(a, b);
 
   printf( "Max value is : %d\n", ret );
   
   int sum_a_b = sum(a, b);
   
   printf("Sum of a and b: %d\n", sum_a_b);
   
   int sum_a_c = sum(a, c);
   
   printNumber(sum_a_c);
   printMenu();
   
   char test = returnCharacter(10);
   printf("%c", test);
   
   return 0;
}
 
/* function returning the max between two numbers */
int max(int num1, int num2) {

   /* local variable declaration */
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}

int sum(int num_1, int num_2){
	int result = num_1 + num_2;
	return result;
}

int sum_3_int(int num_1, int num_2, int num_3){
	int result = sum(sum(num_1, num_2), num_3);
	return result; 	
}

void printNumber(int number){
	printf("%d\n", number);
}

void printMenu(){
	printf("WELCOME TO MY CLASS\n");
	printf("Please choose your class\n");
	printf("1. Programming\n");
	printf("2. Business\n");
}

char returnCharacter(int num){
	if (num > 0) return 'c';
	else return 'd';
}


