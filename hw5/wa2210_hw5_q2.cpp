#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    int num,guess,count=0,startRange=1,endRange=100;

    srand(time(0));
    num=(rand()%100)+1;

    cout<<"I thought of a number between 1 and 100! Try to guess it. "<<endl;

    do{ 
        cout<<" Range: ["<<startRange<<", "<<endRange<<"], Number of guesses left: "<<5-count<<"\""<<endl;
        cout<<"Your guess: ";
        cin>>guess;
        count++;
        if(count>=5){
             if(num==guess){
                cout<<"Congrats! You guessed my number in "<< count <<"  guesses."<<endl;}
             else{
                cout<<"Out of guesses! My number is "<<num<<endl;
                break;}
        }else
        {

        if(num==guess){
            cout<<"Congrats! You guessed my number in"<< count <<"  guesses."<<endl;
        }
        else if(num<guess){
            cout<<"Wrong! My number is smaller.\n"<<endl;
            endRange=guess;
        }
        else if(num>guess){
            cout<<"Wrong! My number is bigger.\n"<<endl;
            startRange=guess;
        }

        }
        
    }
    while(num!=guess);




    return 0;
}