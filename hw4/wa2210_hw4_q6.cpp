#include<iostream>
using namespace std;

int main(){
    int mod,div,userInput,i;
    cout<<"Please enter positive integer: ";
    cin>>userInput;

    for(i=1;i<=userInput;i++){
        div=i/10;
        mod=i%10;
        if((mod%2==0)&&(div%2==0)){
            cout<<i<<endl;
        }
    }
    return 0;
}
