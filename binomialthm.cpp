#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int num;
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
  

    return 0;
}
