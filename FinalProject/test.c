#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num = 5;
	
	long int decimalNumber,remainder,quotient;
	int binaryNumber[100],i=1,j;

	quotient = num;


	while(quotient!=0){

		binaryNumber[i++]= quotient % 2;
	
		quotient = quotient / 2;

	}
	for(j = i -1 ;j> 0;j--)
	{
		printf("%d",binaryNumber[j]);


		return 0;
	}

}
