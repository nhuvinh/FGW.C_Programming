#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Different ways to initialize two-dimensional array
	int a[2][3] = {{1, 3, 0}, {-1, 5, 9}};
         
	int b[][3] = {{1, 3, 0}, {-1, 5, 9}};
                
	int c[2][3] = {1, 3, 0, -1, 5, 9};
	
	int CITY = 2;
	int WEEK = 7;
	
	int temperature[CITY][WEEK];
	int i;
	int j;
  	// Using nested loop to store values in a 2d array
  	while(i < CITY)
  	{
    	for (j = 0; j < WEEK; ++j)
    	{
      	printf("City %d, Day %d: ", i + 1, j + 1);
      	scanf("%d", &temperature[i][j]);
    	}
    	++i;
  	}
  	printf("\nDisplaying values: \n\n");
  	// Using nested loop to display vlues of a 2d array
  	while(i < CITY)
  	{
    	for (j = 0; j < WEEK; ++j)
    	{
      	printf("City %d, Day %d = %d\n", i + 1, j + 1, temperature[i][j]);
    	}
    	++i;
  	}
	return 0;
}
