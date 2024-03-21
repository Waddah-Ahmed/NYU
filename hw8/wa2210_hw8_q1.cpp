#include <iostream>
using namespace std;

 int minInArray(int arr[], int arrSize);
 void printIndices(int arr[],int min);

int main(){

int arr[20];
cout<<"Please enter 20 integers separated by a space: "<<endl;
for(int i=0;i<20;i++){
    cin>>arr[i];
}

int min =minInArray(arr,20);
cout<<"The minimum value is "<<min<<" and it located in the following indices: ";
printIndices(arr,min);


    return 0;
}

 int minInArray(int arr[], int arrSize){
    int value=arr[0];
    for(int i=0; i<arrSize;i++){
        if(arr[i]<value)
            value=arr[i];
    }
    return value;

 }
void printIndices(int arr[],int min){
    for(int i=0;i<20;i++){
    if (arr[i]==min)
        cout<<i<<" ";
}
}