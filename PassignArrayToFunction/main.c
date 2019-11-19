#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float calculateSum(float age[], int length);
float calculateAvg(float age[], int length);
void printArray(int array[], int length);

int main() {
    float result;
    float resultAvg;
    int lengthAge = 6;
	float age[6] = {23.4, 55, 22.6, 3, 40.5, 18};
    // age array is passed to calculateSum()
    result = calculateSum(age, lengthAge); 
    printf("Result = %.2f\n", result);
    resultAvg = calculateAvg(age, lengthAge);
    printf("ResultAvg = %.2f\n", resultAvg);
    printArray(age, lengthAge);
    
    return 0;
}

float calculateSum(float age[], int length) {
	float sum = 0.0;
  	int i;
  	for (i = 0; i < length; ++i) {
		sum += age[i];
  	}
  	return sum;
}

float calculateAvg(float age[], int length){
	return calculateSum(age, length) / length;
}



void printArray(int array[], int length){
	int i = 0;
	while (i < length){
		printf("%d ", array[i]);
		i++;
	}
}

