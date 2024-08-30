#include <iostream>
#include <cmath>

using namespace std;

void inputmenu(int &x, int &a, int &n); // Pass by reference
void factorial(int &n);
void valueofC(int &n);
void calc(int &x, int&a, int &n);
void terms();

int main(){
    int x;
    int a;
    int n;

    std::cout << "Solving Binomial Thm: ";
    inputmenu(x , a , n);  // Values will now be updated

    //* factorial(n);          
    calc(x , a , n);

    return 0;
    
}

void inputmenu(int &x, int &a, int &n) // Passing by reference
{

    std::cout << "(X + A)^n\n";
    std::cout << "Enter the Values of the Following: \n";
    std::cout << "X :";
    std::cin >> x;
    std::cout << endl;
    std::cout << "A :";
    std::cin >> a;
    std::cout << endl;
    std::cout << "N : ";
    std::cin >> n;
    std::cout << endl;

}

void factorial(int &n)
{

    int prod = 1;

    if (n < 1 || n > 10 ) {
        std::cout << "Enter Value of N from 1 to 10 only! \n";
    }
    else {
        for (int i = n; i > 0; i--){
            prod *= i; // Now calculating the factorial
        }
        std::cout << "Factorial of " << n << " = " << prod << endl;
    }
}

void valueofC(int &n)
{

    int c;

    for (int i = n; i >= 0; i++ ) {
        if(i = 0 ){
            c = 1;
            break;
        } 
        if(i = 1){
            c = n;
            break;
        }  
    }
}

void calc(int &x, int &a, int &n)
{

double raisedx;

    for (int i = 1; i > n ; i++){
       raisedx = pow(x,i);
    } 

    std::cout << raisedx << endl;

}

void terms()
{
    
}
