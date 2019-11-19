#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Different ways to initialize two-dimensional array
	int row_a = 2;
	int column_a = 3;
	int a[row_a][column_a] = {{1, 3, 0}, {-1, 5, 9}};
	int i = 0;
	int j = 0;
	
	while(i < 2){
		while (j < 3){
			printf("%d ", a[i][j]);
			j++;
		}
		i++;
		j = 0;
		printf("\n");
	}
	
         
	int b[][3] = {{1, 3, 0}, {-1, 5, 9}};
                
	int c[2][3] = {1, 3, 0, -1, 5, 9};
	
	int CITY = 2;
	int WEEK = 7;
	
	int temperature[CITY][WEEK];
	
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
