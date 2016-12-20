// *** SKELETON -- Replace the STUB comments with real code ****

// CS 350, Fall 2016
// Lab 2 -- Converting a natural number from decimal to a given base
//
// Illinois Institute of Technology, (c) 2016, James Sasaki
//

// This program repeatedly reads in an integer and base
// (both in decimal), converts the integer from decimal
// to the requested base, and prints the result.  We stop
// if the read-in integer value is < 1 or the base is < 2.

// General instructions (for the skeleton):
// Replace all STUB code with actual code.  You don't have
// to use this skeleton, with the warning that this code
// (yours and the skeleton's) are fair game for tests.

#include <stdio.h>
#include <strings.h>

// Define array length to be large enough to hold the
// longest possible output (max positive int in base 2).
//
#define ARRAYLEN 32

int main() {
	printf("CS 350 Lab 2 for %s\n\n", "Carlos Lopez");

	// Read an integer value to convert and the base to
	// convert it to 
	//
	int value, base;
	printf("Enter an integer and base:\n");
	printf("(int >= 1 and 2 <= base <= 36 or we quit): ");
	scanf("%d %d", &value, &base);

	// Process the value and base input and prompt for and
	// read in another value and base.  Repeat until the the
	// value is < 1 or the base is < 2 or > 36.
	//
	while ( value >= 1 && base >= 2 && base <= 36) {
		// Convert the value into the desired base and put the
		// result into digit[0..column-1].  In general, we've
		// calculated the digits whose powers are less than the
		// current column, with to_convert as the unconverted
		// part of the original value.
		// 
		// value == to_convert * (base ^ column) + digits calculated so far
		// with column_value = base ^ column
		//
		int column = 0, to_convert = value;
		int newNum = 0;
		int digit[ARRAYLEN];
		int remainder;

		while(to_convert > 0)
		{

			//Do the mode operation to get 
			//the remainder, which is the 
			//digit of the new number
			remainder = base % to_convert;
				//Add the remainder to the new number
				//which is the number in the requested
				//base
					//newNum += remainder;
				//Shift the newNumber to the left 1 spot 
				//in order to add a new digit
					//newNum << 1;
			to_convert = base/to_convert;
			digit[ARRAYLEN-column] = remainder;
			column++;
		}
		
		if (column >= ARRAYLEN || to_convert < 0) {
			printf("Ran out of room or to_convert is < 0");
			printf(" -- This should never happen!\n");
		}
		else {
			// Print out the digits (note they're stored in
			// reverse: digit[0] is the rightmost digit,
			// ..., digit[column-1] is the leftmost digit
			//
			char prt_digits[37] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
			// *** STUB ***
		}
		printf("\n");

		// Get next value, base pair to process
		//
		
		// *** STUB ***
	}
}
