#include<iostream>
using namespace std;

int fib(int n);
// main function
int main(){
    int n;
    cout<<"Please enter positive integer :";
    cin>> n;
    cout<<fib(n);
    return 0;
}


// The function of Fibonacci numbers sequence 
int fib(int n){

    int fibValue,firstValue=1,secondValue=0;

    for(int i=1;i<=n;i++){
        fibValue=firstValue+secondValue;
        if(i>1){
        secondValue=firstValue;
        firstValue=fibValue;}


    }

    return fibValue ;
}