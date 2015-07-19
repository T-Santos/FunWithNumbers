#ifndef NUMSTOWORDS_H_INCLUDED
#define NUMSTOWORDS_H_INCLUDED


int MAX_NUM = 999999;

std::string gOnes[] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten"};
std::string gUnique[] = {"eleven","twelve"};
std::string gPrefix[] = {"twen","thir","for","fif","six","seven","eigh","nin"};
std::string gSuffix[] = {"teen","ty","hundred","thousand"};

// void toWords(int x);

void toWords(int x)
{
    if ( (x > MAX_NUM) || x < 0 )
    {
        std::cout << "Invalid number";
    }else if ( x >= 1000) // thousands
    {
        int base =  x/1000;
	    int remainder = x%1000;

	    toWords(base);
	    std::cout << " " << gSuffix[3];
	    if(remainder)
        {
            std::cout << " ";
            toWords(remainder);
	    }
    }else if ( x >= 100) // hundreds
    {
        int base =  x/100;
	    int remainder = x%100;

	    std::cout << gOnes[base] << " " << gSuffix[2];
	    if(remainder)
        {
            std::cout << " ";
            toWords(remainder);
        }
    }else if ( x > 10) // tens
    {
        int base =  x/10;
	    int remainder = x%10;
	    if (base > 1)
        {
            std::cout << gPrefix[base-2] << gSuffix[1] << " ";
            if (remainder){
            toWords(remainder);
            }
        }else // teens
        {
            if( (remainder == 1) || (remainder == 2) )
            {
                std::cout << gUnique[remainder-1];
            }else if (remainder)
            {
                std::cout << gPrefix[remainder-2] << gSuffix[base-1];
            }else
            {
                std::cout << gPrefix[base-2] << gSuffix[remainder+1];
            }

         }
	}else
	{
	    std::cout << gOnes[x];
	}

};



#endif // NUMSTOWORDS_H_INCLUDED
