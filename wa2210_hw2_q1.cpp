#include <iostream>
using namespace std;

int main(){
    int quarters,dimes,nickels,pennies,total,cents,dollars;


    cout<<"please enter number of coins:"<<endl;
    cout<<"# of quarters: ";
    cin>>quarters;
    cout<<"# of dimes: ";
    cin>>dimes;
    cout<<"# of nickels: ";
    cin>>nickels;
    cout<<"# of pennies: ";
    cin>>pennies;

    total= (quarters*25)+(dimes*10)+(nickels*5)+(pennies);

    dollars=  (total/100);
    cents=    (total%100);

    cout<<"The total is "<<dollars<<" dollars and "<<cents<<" cents. ";

    return 0;
}