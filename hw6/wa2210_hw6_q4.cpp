#include<iostream>
#include<cmath>
using namespace std;

void printDivisors(int num);

int main(){

    int userInput;

    cout<<"please enter positive number >=: ";
    cin>>userInput;
    if(userInput>=2)
        printDivisors(userInput);

    return 0;
}
// print Divisors function
void printDivisors(int num){

    for(int i=1;i<sqrt(num);i++){
        if(num%i==0){
            cout<<i<<" ";
        }
    }
     for(int j=sqrt(num);j>=1;j--){
         if(num%j==0){
        cout<<(num/j)<<" ";}
    }    



}