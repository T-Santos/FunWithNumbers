#include <iostream>

#include "NumsToWords.h"

int main( int argc, const char* argv[] )
{
    char quit = '\0';
    do{
	    int x = 0;
	    std::cout << "\n\nEnter a number: ";
	    std::cin >> x;
	    toWords(x);
	    std::cout << "\n\nEnter q to quit: ";
	    std::cin >> quit;
    }while (quit != 'q');

	return 0;
};

