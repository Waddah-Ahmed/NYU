#include <iostream>
using namespace std;

int main (){

    int firstNumb,secondNumb;
    
    int addValue,subValue,multplyValue,modeValue,divIntValue;
    double divDoubleVlue;


    cout<<"Please enter two positive integer, separated by a space: "<<endl;
    cin>>firstNumb>>secondNumb;

    addValue=firstNumb+secondNumb;
    subValue=firstNumb-secondNumb;
    multplyValue=firstNumb*secondNumb;
    divIntValue=firstNumb/secondNumb;
    divDoubleVlue=(double)firstNumb/(double)secondNumb;
    modeValue=firstNumb%secondNumb;

    cout<<firstNumb<<" + "<<secondNumb<<" = "<<addValue<<endl;
    cout<<firstNumb<<" - "<<secondNumb<<" = "<<subValue<<endl;
    cout<<firstNumb<<" * "<<secondNumb<<" = "<<multplyValue<<endl;
    cout<<firstNumb<<" / "<<secondNumb<<" = "<<divDoubleVlue<<endl;
    cout<<firstNumb<<" div "<<secondNumb<<" = "<<divIntValue<<endl;
    cout<<firstNumb<<" mod "<<secondNumb<<" = "<<modeValue<<endl;

    return 0;
}