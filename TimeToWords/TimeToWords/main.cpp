#include <iostream>
#include "../../../InputUtils/Time/Time.h"
//#include <limits>
//#include "../../../InputUtils/Integer/IntegerInput.h"
//#include <regex>

//using namespace std;
/*
void getInput1(int&,int&);
bool getInput2(int&,int&,std::string&);

bool isValidPeriod(std::string&);
*/

int main()
{
    Time aTime;

    aTime.GetTime();
    aTime.QueryForTime();
    aTime.GetTime();
    /*
    int hours = 0;
    int minutes = 0;
    std::string period = "";

    //getInput1(hours,minutes);
    if( !getInput2(hours,minutes,period) )
    {
        std::cout << "Thanks for playing.\n\n";
    }else
    {
        std::cout << hours << ":" << minutes << " " << period << std::endl;
        if ( hours == 12 && minutes == 0 && ( period == "" || period == "A") )
        {
            std::cout << "Noon" << std::endl;
        }else if ( hours == 23 && minutes == 0 && ( period == "" || period == "P") )
        {
            std::cout << "Midnight" << std::endl;
        }else
        {


        }
    }
    */

    return 0;
}

/*
void getInput1(int& hours,int& minutes)
{
    bool validInput = false;
    char delim = '0';

    //std::cout << "Please enter a time: ";

        do{
            std::cout << "Enter hours: ";
            if( !(std::cin >> hours) )
            {
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cin.clear();
                std::cout << "Incorrect hours. Please reenter hours. \n";
                hours = 0;
            }else if ( (hours > 24) || (hours < 0) )
            {
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cin.clear();
                std::cout << "Hours must be between 0 and 24 \n";
                hours = 0;
            }else
            {
                validInput = true;
            }

        }while (!validInput);

        validInput = false;
        std::cin.ignore(1);

        do{
            std::cout << "Enter delim: ";
            std::cin >> delim;
            if( !(delim == ':') )
            {
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cin.clear();
                std::cout << "Incorrect delimeter between hours and minutes. Please reenter. \n";
                delim = 0;
            }else
            {
                validInput = true;
            }
        }while (!validInput);

        validInput = false;
        std::cin.ignore(1);

        do{
            std::cout << "Enter minutes: ";
            if ( !(std::cin >> minutes) )
            {
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cin.clear();
                std::cout << "Incorrect minutes. Please renter minutes. \n";
                minutes = 0;
            }else if ( (minutes > 59) || (minutes < 0) )
            {
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cin.clear();
                std::cout << "Minutes must be between 0 and 59 \n";
                minutes = 0;
            }else
            {
                validInput = true;
            }
        }while (!validInput);

        std::cin.ignore(1);

};

bool getInput2(int& hours,int& minutes,std::string& strPeriod)
{
    std::string stringTime = "";
    bool validInput = false;

    do{
        std::string strHours = "";
        std::string strMinutes = "";
        bool delimFound = false;
        bool spaceFound = false;

        std::cout << "Enter a time in (N)N:NN (am/pm) form\n () is optional: ";
        std::getline(std::cin,stringTime);

        if ( stringTime[0]=='Q' || stringTime[0]=='q' )
        {
            // user wants to quit
            break;
        }else
        {
            // check input form
            for ( std::string::iterator it = stringTime.begin() ; it < stringTime.end(); it++ )
            {

                if ( (*it) == ':' )
                {
                    delimFound = true;
                }else if ( !delimFound )
                {
                    strHours += *it;
                }else if ( (*it) == ' ' )
                {
                    spaceFound = true;
                }else if ( !spaceFound )
                {
                    strMinutes+= *it;
                }else
                {
                    strPeriod += *it;
                }
            }

            // Determine if hours and minutes are integers of correct length
            if (strHours.length() > 2)
            {
                std::cout << "Invalid Hours.\n\n";
            }else if ( !isValidInt(strHours) )
            {
                std::cout << "Invalid Hours.\n\n";
            }else if ( strMinutes.length() != 2 )
            {
                std::cout << "Invalid Minutes.\n\n";
            }else if (!isValidInt(strMinutes))
            {
                std::cout << "Invalid Minutes.\n\n";
            }else if ( !isValidPeriod(strPeriod) )
            {
                std::cout << "Invalid Period.\n\n";
            }else
            {
                //
                // convert to integers
                hours = toInt(strHours);
                minutes = toInt(strMinutes);

                if ( !(minutes < 60) )
                {
                    std::cout << "Minutes must be between 0 and 59.\n\n";
                }
                else if ( strPeriod == "" )
                {
                    if ( !(hours < 24) )
                    {
                        std::cout << "Hours must be between 0 and 23.\n\n";
                    }else
                    {
                        validInput = true;
                    }

                }else
                {
                    if ( hours > 12 )
                    {
                        std::cout << "Hours must be between 0 and 12.\n\n";
                    }else
                    {
                        validInput = true;
                    } // end if 24h or 12 h valid numbers
                } // end if correct
            } // end if valid format
        } // end if continue playing

    }while(!validInput);

    return validInput;

};

bool isValidPeriod(std::string& period)
{
   if ( period == "" )
   {
       return true;
   }else if ( (period == "A")   ||
              (period == "a")   ||
              (period == "A.M") ||
              (period == "a.m") ||
              (period == "AM")  ||
              (period == "am") )
   {
       period = "A";
       return true;
   }else if ( (period == "P")   ||
              (period == "p")   ||
              (period == "P.M") ||
              (period == "p.m") ||
              (period == "PM")  ||
              (period == "pm") )
   {
       period = "P";
       return true;
   }

   return false;
};
*/
