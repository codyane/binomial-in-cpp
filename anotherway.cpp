#include <iostream>
#include <cmath>

using namespace std;

//function to create factorial 
int factorial(int num){
    int result = 1;
    for (int i = 1; i < num; i ++){
        result *= i;
    }
    return result;
}

//function to calculate C