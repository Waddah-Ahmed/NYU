#include<iostream>
using namespace std;

int* findMissing(int arr[], int n, int& resArrSize);
void print(int arr[],int size);

int main(){
   const int arrSize=6;
   int missingSize;

    int arr[arrSize]={3, 1, 3, 0, 6, 4};
    int *missing=findMissing(arr,arrSize,missingSize);
    print(arr,arrSize);
    cout<<endl;
    for (int i=0;i<missingSize;i++){
        cout<<missing[i]<<" ";
    }

    return 0;
}

int* findMissing(int arr[], int n, int& resArrSize){
    int *show=new int[n+1]();
    for(int i=0;i<n;i++){
        show[arr[i]]++;
    }
    int *missing = new int[n];
    int count=0;
    for(int i=0;i<n+1;i++){
        if(show[i]==0){
            missing[count]=i;
            count++;

        }
    }
 resArrSize=count;
 return missing;   
}
void print(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}