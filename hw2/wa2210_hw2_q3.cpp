#include <iostream>
using namespace std;

int main (){
    int johnDays,johnHours,johnMinutes;
    int billDays,billHours,billMinutes;
    int totalMinutes,totalHours,totalDays;
    int carryOver;

    cout<<" please enter the number of days John has worked: ";
    cin>>johnDays;
    cout<<" please enter the number of hours John has worked: ";
    cin>>johnHours;
    cout<<" please enter the number of minutes John has worked: ";
    cin>>johnMinutes;

    cout<<""<<endl;

    cout<<" please enter the number of days Bill has worked: ";
    cin>>billDays;
    cout<<" please enter the number of hours Bill has worked: ";
    cin>>billHours;
    cout<<" please enter the number of minutes Bill has worked: ";   
    cin>>billMinutes;

    totalMinutes=(johnMinutes+billMinutes)% 60;
    carryOver=(johnMinutes+billMinutes)/60;

    totalHours=(johnHours+billHours+carryOver)% 24;
    carryOver=(johnHours+billHours+carryOver)/24;


    totalDays=(johnDays+billDays+carryOver);
    

    cout<<"The total time both of them worked together is: "<<totalDays<<" days, "<<totalHours<<" hours and "<<totalMinutes<<" minutes. ";

    return 0;
    }
