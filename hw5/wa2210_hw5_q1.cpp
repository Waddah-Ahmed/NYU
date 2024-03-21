#include<iostream>
using namespace std;

int main(){
    int userInput;
    cout<<"Pleace enter positive integer: ";
    cin>>userInput;
    int num=1;
    for(int i=1;i<=userInput;i++){
        for(int j=1;j<=userInput;j++){
            cout<<num<<"\t";
            
            num++;

        }
        cout<<endl;
    }



    return 0;
}