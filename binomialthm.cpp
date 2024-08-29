#include <iostream>
#include <cmath>

using namespace std;

int main() 
{

    int position;
    int number;
    std::cout << "Enter The Position of C: \n";
    std::cin >> position;

// didnt use switch here because only two conditions.

    if (position == 0){
        std::cout << "The Value of C is 1";
    }

    if (position == 1){
        std::cout << "The Value of C is N\n";
    }
   

// * the following code is for factoral and its output.

/*

        int prod = 1;  // Initialize product to 1

    std::cout << "Enter a number to calculate the value of C: ";
    std::cin >> num;
    std::cout << endl;

    if (num < 1 || num > 10) {
        cout << "Please enter a number from 1 to 10 only!";
    }
    else {
        for (int i = num; i > 0; i--) {
           std::cout << i;
            if (i-1 > 0) {
               std::cout << " * ";
            }
            prod *= i;  // Multiply prod by the current value of i
        }
      std::cout << " = " << prod << endl;  // Output the final product (factorial)
    }
*/

    return 0;
}
