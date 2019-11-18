#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float calculateSum(float age[]);

int main() {
    float result, age[] = {23.4, 55, 22.6, 3, 40.5, 18};
    // age array is passed to calculateSum()
    result = calculateSum(age); 
    printf("Result = %.2f", result);
    return 0;
}

float calculateSum(float age[]) {
	float sum = 0.0;
  	int i;
  	for (i = 0; i < 6; ++i) {
		sum += age[i];
  	}
  	return sum;
}
