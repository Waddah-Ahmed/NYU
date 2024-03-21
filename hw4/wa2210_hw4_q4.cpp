#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int lengthOfSequence,n,userInput,count;
    double geometric=1.0;
    n=1;
    //section a
    cout<<"section a"<<endl;
    cout<<"Please enter the length of the sequence: ";
    cin>>lengthOfSequence;
    cout<<"Please enter your sequence:"<<endl;
    while(n<=lengthOfSequence){
        cin>>userInput;
        geometric=geometric*userInput;
        n++;
    }
    geometric=pow(geometric,(1.0/(double)lengthOfSequence));
    cout<<"The geometric mean is: "<<geometric<<endl;

    //section b
    cout<<"section b"<<endl;
    cout<<"Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1:"<<endl;
    n=userInput;
    count=0;
    while(n!=-1){
        cin>>userInput;
        n=userInput;
        if(userInput!=-1)
            geometric=geometric*userInput;
        count++;

    }
    geometric=pow(geometric,(1.0/(double)count));
    cout<<"The geometric mean is: "<<geometric;


    return 0;
}