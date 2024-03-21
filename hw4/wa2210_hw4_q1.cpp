#include<iostream>
using namespace std;

int main(){
    //defin variables
    int userInput,n,evenNumber;

    //asking user for input
    cout<<"Please enter a positive integer: ";
    cin>>userInput;



     //section a while loop
    cout<<"section a"<<endl;
    n=1;
    evenNumber=2;
    while(n<=userInput){
        cout<<evenNumber<<endl;
        evenNumber+=2; 
        n++;       

    }
    //section b For loop

    cout<<"section b"<<endl;
    evenNumber=2;
    for(n=1;n<=userInput;n++){

            cout<<evenNumber<<endl;
            evenNumber+=2;
            
    }
   




    return 0;
}