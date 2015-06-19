#include <iostream>
#include "../../../InputUtils/Integer/IntegerInput.h"

void fibRecurse(int);
int fibSeq(int);
void fibIterate(int);

int main()
{
    int x = getInt();
    //fibRecurse(x);
    fibIterate(x);
    return 0;
};

void fibRecurse(int x)
{
    for(int j=0;j<x;j++)
    {
        std::cout << fibSeq(j) << " ";
    }
};

int fibSeq(int x)
{
    return ( x == 0 || x == 1 ) ? x : (fibSeq(x-1) + fibSeq(x-2));
};

void fibIterate(int x)
{
    long long int y = 1;
    long long int z = 0;
    long long int a = 0;

    for(int j = 0 ; j < x ; j++)
    {

        if (z < a)
        {
           std::cout << "*** ERROR ***\n Largest fib number to be computed is: " << j << std::endl;
            break;
        }

        std::cout << j+1 << ": " << z << std::endl;
        // calculate next number
        a = z;
        z = y + z;
        y = a;

    }
};
