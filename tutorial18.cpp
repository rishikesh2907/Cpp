#include <iostream>
using namespace std;
int factorial(int n){
    if(n<=1){
        return n;
    }
    return  n * factorial(n-1);
}
// Step by step calculation of factorial(4)
// factorial(4) = 4 * factorial(3); 
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;
// factorial(4) = 24;

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}
// fib(5)
// fib(4) + fib(3)
// fib(2) + fib(3) + fib(2) + fib(3)


int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    // cout<<"The factorial of "<<n<<" is "<<factorial(n)<<endl;
     cout<<"The term in fibonacci sequence at position "<<n<< " is "<<fib(n)<<endl;

    return 0;
}