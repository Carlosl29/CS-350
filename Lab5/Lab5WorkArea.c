#include <stdio.h>

int main(int argc, char *argv[])
{

	int b[] = {2,4,2,8};
	
	int *p, *q, *r;
	p = &b[0];
	q = &b[1];
	r = &b[2];

	if((p < q) && (q < r))
	{
		printf("aTrue");
	}
	else
	{
		printf("aFalse");
	}
	if((p != r) && (*p == *r))
	{
		printf("bTrue");
	}
	else
	{
		printf("bFalse");
	}
	if((p - b) == (&b[3] - &p[1]))
	{
		printf("cTrue");
	}
	else
	{
		printf("cFalse");
	}
	if((p[1]) == (r[-1]))
	{
		printf("dTrue");
	}
	else
	{
		printf("dFalse");
	}
	if((&r[-2]) == (&b[0]))
	{
		printf("eTrue");
	}
	else
	{
		printf("eFalse");
	}
	if(q-p+q-p == (q+q)-(p-p))
	{
		printf("f True");
	}
	else
	{
		printf("f False");
	}
	return 0;
}
