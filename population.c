#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size;
    do
    {
        start_size = get_int("Start Size: ");
    } while (start_size < 3);

    // TODO: Prompt for end size

    int end_size;
    do
    {
        end_size = get_int("End Size: ");

    } while (end_size <= start_size);


    // TODO: Calculate number of years until we reach threshold

    int year_count = 0;
    do
     {
         year_count ++;
         start_size = start_size + round(start_size/3) - round(start_size/4);
     } while (end_size > start_size);



    // TODO: Print number of years

    printf("Years: %i \n",year_count);
}