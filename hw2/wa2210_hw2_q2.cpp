#include <iostream>
using namespace std;

int main(){

    int quarters,dimes,nickels,pennies,total,cents,dollars;

    cout<<"please enter your amount in the format of dollars and cents separated by spacce: "<<endl;
    cin>>dollars>>cents;
    
    total= (dollars*100)+cents;
    
    quarters=total/25;
    total %= 25;

    dimes=total/10;
    total %= 10;

    nickels= total/5;
    total%= 5;

    pennies=total;

    cout<<dollars<<" dollars and "<<cents<<" cents are: "<<endl;

    cout<<quarters<<" quarters, "<<dimes<<" dimes, "<<nickels<<" nikels and "<<pennies<<" pennies ";
    return 0;
}