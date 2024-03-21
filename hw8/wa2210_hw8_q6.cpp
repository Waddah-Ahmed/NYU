#include<iostream>
#include<string>

using namespace std;

void hidingNumbers(string & str);

int main(){

string userInput;
cout<<"Please enter a line of text: \n";
getline(cin,userInput);
hidingNumbers(userInput);
cout<<userInput;

   

return 0;
}


void hidingNumbers(string & userInput){
    
for(int i=0;i<userInput.length();i++){
    //when the digit at the middle or the end.
    if(userInput[i]==' '&&(userInput[i+1]>='0'&&userInput[i+1]<='9')){
        int j=i+1;
        while(userInput[j]>='0'&&userInput[j]<='9'){
            userInput[j]='x';
            j++;
        }
    }
    //when the digit at the beginning.
    if((userInput[0]>='0'&&userInput[0]<='9')){
        int j=i;
        while(userInput[j]>='0'&&userInput[j]<='9'){
            userInput[j]='x';
            j++;
         }
        }
    }
}