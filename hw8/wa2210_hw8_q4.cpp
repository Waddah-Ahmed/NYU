#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
const int PIN[5]={1,2,3,4,5};
int main(){
    
    int userPassword;

    cout<<"Please enter your PIN according to the following mapping:"<<endl;
    cout<<"PIN: 0 1 2 3 4 5 6 7 8 9"<<endl;
    cout<<"NUM: ";

    int  random[10];

    srand(time(0));
    for(int i=0;i<10;i++){
        random[i]=(rand()%3)+1;
        cout<<random[i]<<" ";
    }
    cout<<endl;
    cin>>userPassword;

    int inputToRandom=0;    
    for(int i=0;i<5;i++){
        
        inputToRandom=inputToRandom*10+random[PIN[i]];
    }
    if(userPassword==inputToRandom){
        cout<<"Your PIN is correct";
    }else{
        cout<<"Your PIN is not correct";
    }


    return 0;
}