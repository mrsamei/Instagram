#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define TYPE double
#define Range stop
#define N decimal_points

double power_of_ten(int times)
{
    double power_of_ten = 1;
    for (int i = 1; i <= times; i++)
    {
        power_of_ten *= 10;
    }
    return power_of_ten;
}

double random_float(double start , double stop , int decimal_points)
{
    TYPE random_num;
    stop = stop - start;
    
    // rand() : [0, RAND_MAX]
    random_num = (rand()*Range)/((TYPE)(RAND_MAX));
    // a random number will be created in range [0, stop - start]

    // converting that random float/int number into our demand...(with given decimal points) :
    random_num = (round(random_num*power_of_ten(N)))/power_of_ten(N) + start;
    // by using round we will have : [start, stop]
    // (round(a*power_of_ten(N)))/power_of_ten(N) :
    //   just to make sure that we will get : [a, b] not [a, b)

    return random_num;
}

int main()
{
    srand(time(NULL));
    TYPE start = 5.1, stop = 13.4;
    TYPE num;
    
    for(int i = 0 ; i < 10 ; i++)
    {
        num = random_float(start, stop, 1);
        printf("%lg\n", num);
    }
    return 0;
}