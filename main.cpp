#include <iostream>
using namespace std;

int factorial(int x){
    if (x <=1){
        return 1;
    }
    else {
        return x * factorial(x-1);
    }
}
int fib(int x){
    if (x < 2){
        return 1;
    }
    return fib(x-1) + fib(x-2);
}

int main(){
    cout<<"Hello world!"<<endl;
    int solution = factorial(4);
    int solution2 = fib(5);
    cout<<solution<<endl;
    cout<<solution2<<endl;
}