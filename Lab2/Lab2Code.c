#include <stdio.h>
#include <strings.h>
#include <math.h>

#define ARRAYLEN 32

int main()
{
	printf("CS 350 Lab 2 for %s\n\n", "Carlos Lopez");
	
	//Read an int to convert and a base to convert to
	int value;
	int newBase;
	
	printf("Enter an integer and a base:\n");
	printf("(Int must be >= 1, Base must be >= 2 and <= 36): ");
	scanf("%d %d", &value, &newBase);
	
	
	while(value >= 1 && newBase >= 2 && newBase <= 36)
	{
		//Convert the value entered into base entered
		//The new value is stored in digit[0...column-1]
		
		//value == to_convert * (base ^ column) + digits
		int column = 0, valueToConvert = value;
		int digit;
		
		while(valueToConvert > 0)
		{

			int remainder;
			remainder = newBase % valueToConvert;
			digit += remainder;
			digit << 1;
		}
		
		/*
		if(column >= ARRAYLEN || valueToConvert < 0)
		{
			printf("Ran out of room or to_convert is < 0");
			printf("-- This should never happen!\n");
		}
		else
		{
			//Print out the digits
			//The digits are stored in reverse order
			//digit[0] is rightmost digit
			//digit[column-1] is the leftmost digit
		
			char prt_digits[37] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
			while(column > 0)
			{
				column--;
				printf("%c", prt_digits[digit[column]]);
			}
		}*/
		printf("\n");
		
		//Get next set of value and base to be processed
		printf("Enter a new integer and a base:\n");
		printf("(Int must be >= 1, Base must be >= 2 and <= 36): ");
		scanf("%d %d", &value, &newBase);
	}
		

}
