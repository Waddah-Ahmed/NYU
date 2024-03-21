#include<iostream>
#include<string>
using namespace std;

int main(){
string fullName[3];

for(int i=0;i<3;i++){
    cin>>fullName[i];
}

cout<<fullName[2]<<", "<<fullName[0]<<" "<<fullName[1][0]<<".";


    return 0;
}