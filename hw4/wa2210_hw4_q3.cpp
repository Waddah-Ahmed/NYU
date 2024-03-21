#include <iostream>
#include <string>
using namespace std;


int main() {

	int i,userInput,div,mod,decimalNumber;
    string binString="";
    cout<<"Enter decimal number: "<<endl;
    cin>>userInput;
    decimalNumber=userInput;
    div=userInput/2;

    while(div!=0){
        div=userInput/2;
        mod=userInput%2;
        binString=to_string(mod)+binString;
        userInput=div;
    }

    cout<<"The binary representation of "<<decimalNumber<<" is "<<binString;
    return 0;
    
}
