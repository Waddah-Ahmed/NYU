#include<iostream>
using namespace std;

const int FLOOR_ROUND =1;
const int CELING_ROUND =2;
const int ROUND =3;

int main (){

    double userNumber,modResult;
    int userChoice;
    int result,divResult;

    cout<<"Please enter a Real number: ";
    cin>>userNumber;

    divResult=(int)userNumber;
    modResult= int(userNumber*100) % 100;


    cout<<"Choose your rounding method: "<<endl<<"1.Floor round"<<endl<<"2.Ceiling round "<<endl<<"3.Round to the nearest whole number"<<endl;
    cin>>userChoice;

    switch(userChoice){
        case(FLOOR_ROUND):{
            result= divResult;
            break;
        }
        case(CELING_ROUND):{
            if(modResult>0){
                result=divResult+1;
            }else{
                result=divResult;
            }
            break;
        }
        case(ROUND):{
            if(modResult<50){
                result=divResult;
            }else if(modResult>=50){
                result=divResult+1;
            }
            break;

        }
        
    }
    cout<<result;
    return 0;
}