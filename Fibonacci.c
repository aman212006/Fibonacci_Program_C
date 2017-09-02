/*
 * Fibonacci.c
 *
 *  Created on: Aug 30, 2017
 *      Author: andre
 */
#include <stdio.h>

int main() {
	setbuf(stdout, NULL);	// This does not allow the printf buffer to get full
	int maxNumber;			// This is the maximum value of Fibonacci numbers

printf("Input the value of total number of Fibonacci numbers you would like to calculate. \n");
scanf("%i",&maxNumber);


int IncrementorMinus1 = 0;	// Fn - 1 precondition
int IncrementorMinus2 = 1;  // Fn - 2 precondition
int Fn; // The calculated Fibonacci Number

printf("Fn = 0 (precondition)\n"); // Prints out precondition 1
printf("Fn = 1 (precondition)\n"); // Prints out precondition 2
for(int i = 0; i < maxNumber;i++){

	Fn = IncrementorMinus1 + IncrementorMinus2; // Adds the previous two Fibonacci numbers and generates the next value

	// Determines if the Fibonacci number is divisible by 3, if it is then it prints out Buzz with the Fibonacci number
	if(Fn % 3 == 0){
	printf("Buzz = %i\n",Fn);
	}

	// Determines if the Fibonacci number is divisible by 5, if it is then it prints out Fizz with the Fibonacci number
	if(Fn % 5 == 0){
	printf("Fizz = %i\n",Fn);
	}

	// Determines if the Fibonacci number is divisible by 15, if it is then it prints out FizzBuzz with the Fibonacci number
	if(Fn % 15 == 0){
	printf("FizzBuzz = %i\n",Fn);
	}

	// This determines if the Fibonacci number is prime. The for loop will iterate through to the Fibonacci number at which I divide the Fibonacci number by the for loop iterator
	// If the Fibonacci number does not divide evenly any of the iterator values from 2 to Fn-1 then the number is determiend to be prime.
			for(int j = 2; j < Fn;j++){
			if(Fn % j == 0 && j != Fn && Fn % 3 != 0 && Fn % 5 != 0 && Fn % 15 != 0 ){
				printf("Fn = %i\n",Fn);
				break;
			}
			if(Fn % j == 1 && j == Fn-1){
					printf("BuzzFizz = %i\n",Fn);
					break;
			}

			} // end for loop

	IncrementorMinus1 =	IncrementorMinus2;	// The Fn-1 becomes the new precondition number 1
	IncrementorMinus2 = Fn;					// The new Fn which is generated by this loop becomes precondition number 2

} // end for loop

return 1;
} // end main



