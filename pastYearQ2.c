#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable :4996)

#define S_V -1

void main()
{
	//variable declaration
	int i=0;
	double otAllowance, total =0;

	printf("Enter allowance for employee (%d) :", i + 1);
	scanf("%lf", &otAllowance);

	if (otAllowance != S_V)
	{
		i++;
		total += otAllowance;
	}	

	while (otAllowance != S_V)
	{
		printf("Enter allowance for employee (%d) :", i + 1);
		scanf("%lf", &otAllowance);

		if (otAllowance != S_V)
		{
			i++;
			total += otAllowance;
		}
	}

	printf("Total allowance paid for %d employees : RM %.2f",i, total);
	puts("");
	system("pause");


}
