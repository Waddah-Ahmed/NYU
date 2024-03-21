#include<iostream>
using namespace std;

void oddsKeepEvensFlip(int arr[], int arrSize);



int main(){
    int arr[6]={5, 2, 11, 7, 6, 4};
    oddsKeepEvensFlip(arr, 6);

    return 0;
}

void oddsKeepEvensFlip(int arr[], int arrSize){
int oddIndex=0;
int evenIndex=arrSize-1;
int* ordered =new int[arrSize];
for(int i=0;i<arrSize;i++){
    if(arr[i]%2==0){
       ordered[evenIndex]=arr[i];
        evenIndex--;
    }else if(arr[i]%2!=0){
        ordered[oddIndex]=arr[i];
        oddIndex++;
    }
}
cout<<"Original array: ";
for(int i=0;i<arrSize;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"Reorderd array: ";
for(int i=0;i<arrSize;i++){
    cout<<ordered[i]<<" ";
}
delete [] ordered;
}



