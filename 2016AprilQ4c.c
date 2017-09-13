#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable :4996)
const int SENTINEL_VALUE = -999;

void main()
{
	int celcius, celciusCount=0,tempMore=0;
	int largest=0, smallest=0;
	double total = 0, average;

	printf("Enter the temperature (-999 to stop)");
	scanf("%d", &celcius);

	if (celcius != SENTINEL_VALUE)
	{
		celciusCount++;
		smallest = celcius;
		largest  = celcius;
		total   += celcius;

		do
		{
			printf("Enter the temperature (-999 to stop)");
			scanf("%d", &celcius);

			if (celcius != SENTINEL_VALUE)
			{
				celciusCount++;
				total += celcius;

				if (celcius < smallest)
					smallest = celcius;

				if (celcius > largest)
					largest = celcius;

				if (celcius > 40)
					tempMore++;
			}
			
		} while (celcius != SENTINEL_VALUE);

		average = total / celciusCount;

		//output
		printf("Total days with temperature more than 40'C = %d", tempMore);
		puts("");
		printf("The lowest temperature  = %d", smallest);
		puts("");
		printf("The highest temperature = %d", largest);
		puts("");
		printf("Average of the temperature = %lf", average);
	}
	else
	{
		puts("No number was entered");
	}

	system("pause");
}
