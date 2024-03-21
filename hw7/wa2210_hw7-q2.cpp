#include <iostream>
#include <cmath>
using namespace std;
void analyzeDividors(int num, int& outCountDivs, int& outSumDivs);
bool isPerfect(int num);


int main(){
    int num;
    cout<<"Please enter postive >= 2: ";
    cin>>num;
    
 
 

    cout<<"All perfect numbers in the range are : "<<endl;
    for(int i=2;i<=num;i++){
        
         if(isPerfect(i))
              cout<<i<<endl;
    }
  
    cout<<"All Amicable numbers in the range are : "<<endl;    
    for(int i=2;i<=num;i++){
        if(!isPerfect(i))
              {
                int outCountDivs1=0,outSumDivs1=0;
               int outCountDivs2=0,outSumDivs2=0;
               analyzeDividors(i,outCountDivs1,outSumDivs1);  
               analyzeDividors(outSumDivs1,outCountDivs2,outSumDivs2);
               if(i==outSumDivs2&& outSumDivs1<=num&&i<outSumDivs1){
             
                cout<<i<<" & "<<outSumDivs1<<endl;}
               }

    }

    return 0;
}

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs)
{
    for(int i=1;i<=(sqrt(num));i++){
        if(num%i==0){
            if(i!=(sqrt(num))&& i!=1){
                 outCountDivs+=2;
                 outSumDivs+=i;
                 outSumDivs+=num/i; 
               
                 }
            else{outCountDivs++;
                outSumDivs+=i;
              
                }
             }
    }
}

bool isPerfect(int num){
         int outCountDivs=0,outSumDivs=0;
         analyzeDividors(num,outCountDivs,outSumDivs);
        if (num==outSumDivs){
            return true;
        }else{
            return false;
        }
    }

