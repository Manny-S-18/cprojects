#include <cs50.h>
#include <stdio.h>
#include <math.h>


// Adding function prototypes to tell the code that these functions will be declared later
int get_s_pop(void);
int get_e_pop(int start_pop);
void n_years(int start_pop, int end_pop);


// Main function to print out number of years it takes for a starting population to hit a certain level
// This code assumes the population increases by third and the original population decreases by a quarter

int main(void)
{
    int start_pop = get_s_pop();

    int end_pop = get_e_pop(start_pop);

    n_years(start_pop, end_pop);
}



//Function to get the starting population from the user
int get_s_pop(void)

{
    int start_pop;
    do
    {
        start_pop = get_int("What is your starting population?: ");
    }
    while(start_pop < 9);
    return start_pop;
}

//Function to get the end population from the user
int get_e_pop(int start_pop)

{
    int end_pop;
    do
    {
        end_pop = get_int("What is your ending population? : ");
    }
    while(end_pop < start_pop);

    return end_pop;
}

// Function to calculate number of  years it will take for the start pop to reach the end pop
void n_years(int start_pop, int end_pop)

{

    int zero = 0;

    if (start_pop == end_pop)
    {
        printf("Years: %d ", zero);
        printf("\n");
    }

    else

    {

    double curr_pop = start_pop;
    double inc = 1.3333333f;
    double dec = 0.25f;
    int n_years = -1;
    while (curr_pop < end_pop)
    {
        curr_pop = ceil((curr_pop*inc) - (curr_pop*dec));
        n_years++;
    }
    printf("Years: %d\n", n_years);


    }


}