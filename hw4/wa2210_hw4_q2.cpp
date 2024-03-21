#include<iostream>
#include<string>
using namespace std;

int main(){
    //defin variables
    int decimalNumber,div,mod,n,userInput;
    string romanNumber="";

    //userInput
    cout<<"Enter decimal number:"<<endl;
    cin>>decimalNumber;
    userInput=decimalNumber;

    //convert decimal number to M if any 
    if(decimalNumber/1000!=0){
        div=decimalNumber/1000;
        mod=decimalNumber%1000;
        for(n=1;n<=div;n++){
            romanNumber+="M";
        }
        decimalNumber=mod;
    }
    //convert decimal number to D if any
    if(decimalNumber/500!=0){
        div=decimalNumber/500;
        mod=decimalNumber%500;
        romanNumber+="D";
        decimalNumber=mod;
    }
    //convert decimal number to C if any
    if(decimalNumber/100!=0){
       div=decimalNumber/100;
       mod=decimalNumber%100;
       for(n=1;n<=div;n++){
        romanNumber+="C";
        decimalNumber=mod;
       } 
    //convert decimal number to L if any
    if(decimalNumber/50!=0){
        div=decimalNumber/50;
        mod=decimalNumber%50;
        romanNumber+="L";
        decimalNumber=mod;
        }
    //convert decimal number to X if any
    if(decimalNumber/10!=0){
        div=decimalNumber/10;
        mod=decimalNumber%10;
        for(n=1;n<=div;n++){
            romanNumber+="X";
        }
        decimalNumber=mod;
        }
    //convert decimal number to V if any
    if(decimalNumber/5!=0){
        div=decimalNumber/5;
        mod=decimalNumber%5;
        romanNumber+="V";
        decimalNumber=mod;
    }
    //convert decimal number to I if any
    if(decimalNumber/1!=0){
        div=decimalNumber/1;
        mod=decimalNumber%1;
        for(n=1;n<=div;n++){
            romanNumber+="I";
        }
    }
    }
    //final results
    cout<<userInput<<" is "<<romanNumber;
    return 0; 
}