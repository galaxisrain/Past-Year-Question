#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable :4996)

const int SENTINEL_VALUE = -999;

void main()
{
    int    celcius, largest = 0, smallest = 0, celciusCount = 0, tempMore = 0;
    double total = 0, average;

    printf("Enter temperature (-999 to stop) > ");
    scanf("%d", &celcius);

    if (celcius != SENTINEL_VALUE)
    {
        celciusCount++;
        total += celcius;

        smallest = celcius; // assume the 1st entry is smallest
        largest  = celcius; // assume the 1st entry is largest

        if (celcius > 40)
            tempMore++;

        do
        {
            printf("Enter temperature (-999 to stop) > ");
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
        printf("The lowest temperature     = %d", smallest);
        puts("");
        printf("The highest temperature    = %d", largest);
        puts("");
        printf("Average of the temperature = %.2f", average);
    }
    else
    {
        puts("\nNo temperature is entered.");
    }

    puts("\n");
    system("pause");
}
