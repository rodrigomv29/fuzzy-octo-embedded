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
        return x;
    }
    return fib(x-1) + fib(x-2);
}

int main(){
    cout<<"Hello world!"<<endl;
    //int solution = factorial(4);
    int num;
    cin >> num;
    int solution = fib(num);
    //cout<<solution<<endl;
    cout << "The" << num << "th" << "fibonacci number is:"<< endl;
    cout<<solution<<endl;
    // edits
}