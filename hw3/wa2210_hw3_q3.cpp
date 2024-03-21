#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main(){
    double a,b,c,squrtResult,firstResult,secondResult;
   

    cout<<"Please inter value of a:";   
    cin>>a;
    cout<<"Please inter value of b:";   
    cin>>b;
    cout<<"Please inter value of c:";   
    cin>>c; 

    if( a==0.0 && b==0.0 && c==0.0 ){
        cout<<"This equation has an Infinte number of solutions";
    }else if( a==0.0 && b==0.0 && c!=0.0 ){
        
        cout<<"This equation has No solution";
    }else if(((b*b)-(4*a*c))<0){
        cout<<"This equation has No real solution";
    }else{
        
        squrtResult=sqrt((b*b)-(4*a*c));
        firstResult=(-b+squrtResult)/(2*a);
        firstResult=(-b-squrtResult)/(2*a);

        if (((b*b)-(4*a*c))==0){
            cout<<"This equation has single real solution x="<<firstResult;
            
        }else{
            cout<<"This equation has two real solution x="<<firstResult<<" ,y= "<<secondResult;
            
        }
    }

    
    return 0;
}