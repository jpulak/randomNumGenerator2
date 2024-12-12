/******************************************************************************
Assignment for creating random numbers based on user input and time
*******************************************************************************/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   
    // initializing variables
    
    unsigned int seed;
    
    // gather inputs
    
    cout << "Enter a seed for the random number generator: ";
    cin >> seed;
    cout << endl;
    
    // random number generated and outputted 5 times
    
    srand(seed);
    cout << "First 5 numbers (seed = user input): ";
    cout << rand() << ", " << rand() << ", " << rand() << ", "<<rand() << ", " << rand();
    cout << endl;
    
    //random number time generated and outputted 5 times
    
    srand(time(0));
    cout << "First 5 numbers (seed = current time): ";
    cout << rand() << ", " << rand() << ", " << rand() << ", " << rand() << ", " << rand();
    cout << endl;
    return 0;
}
