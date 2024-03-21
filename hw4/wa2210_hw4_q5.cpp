#include<iostream>
#include<string>
using namespace std;

int main(){
    int n,i,userInput;

    cout<<"Please enter positive integer: ";
    cin>>userInput;

    for(n=1;n<=userInput;n++){
        for(i=1;i<n;i++){
             cout<<" ";

        }
        for(i=1;i<=((2*userInput)-(2*n)+1);i++){
        
             cout<<"*";
        }

        cout<<""<<endl;
       

    }
        for(n=userInput;n>=1;n--){
        for(i=1;i<n;i++){
             cout<<" ";

        }
        for(i=1;i<=((2*userInput)-(2*n)+1);i++){
        
             cout<<"*";
        }

        cout<<""<<endl;
       

    }
    

                            
    


    return 0;
}