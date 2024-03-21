#include<iostream>
#include<string>
using namespace std;

int main(){

    string dayOfTheWeek;
    int callDuration,hour,min;
    double cost;
    char symbol;
    cout<<"Please enter the day of the week in this form(Mo Tu We Th Fr Sa Su)  :  ";
    cin>>dayOfTheWeek;

    cout<<"Please enter the time the call started in 24-hours notation  :  ";
    cin>>hour;
    cin>>symbol;
    cin>>min;

    cout<<"please enter the number of minutes for call duration  :  ";
    cin>>callDuration;

    
    if(dayOfTheWeek=="Sa"||dayOfTheWeek=="Su"){

      cost=(double)callDuration*0.15;  
    }else{
            if(hour>=8 && hour<=18){
                cost=(double)callDuration*0.40;
            }
            else {
                cost= (double)callDuration*0.25;
            }


    }

    cout<<"The total cost for you call = "<<cost<<"$";

    return 0;

}