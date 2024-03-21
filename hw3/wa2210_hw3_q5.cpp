#include<iostream>
using namespace std;
const double poundToKg =0.453592;
const double inchToMeter=0.0254;
int main(){

    double weightInPounds,heightInInches,result;
 

    cout<<"Please enter weight (in pounds):";
    cin>>weightInPounds;
    cout<<"Please enter height (in inches):";
    cin>>heightInInches;

    result= (weightInPounds*poundToKg)/((heightInInches*inchToMeter)*(heightInInches*inchToMeter));

    if(result<18.5){
        cout<<"The weight status is : Underweight";
    }else if((result>=18.5)&&(result<25.0)){
        cout<<"The weight status is : Normal";
    }else if(result>=25.0&&result<30){
        cout<<"The weight status is : Overweight";
    }else if(result>=30){
        cout<<"The weight status is : Obese";
    }
return 0;
}