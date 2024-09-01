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

//function to calculate Combination
int binomialfunction(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k)); 
}

void binomialexpansion(int a, int b, int n){

    double result;

    //loop for term in expansion
    for(int k = 1; k <= n; k++){
        //binomial coffeicicent nCk
        int coeff = binomialfunction(n, k);

        //a^(n-k) * b^k
        double term = coeff * pow(a, n - k) * pow(b, k);

        //Output ther current term
       
        std::cout << "Term " << k + 1 << ": " << coeff << " * " << a << "^" << (n - k) << " * " << b << "^" << k << " = " << term << '\n';
    
        // Add the term to the result
        result += term;
    }

    //output the final result
    std::cout << "(a + b)^" << n << " = " << result << '\n';
}

int main () {
    int a, b, n;

    // Input values for a, b, and n
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of n: ";
    cin >> n;

      // Call function to calculate the binomial expansion
    binomialexpansion(a, b, n);

    return 0;
}