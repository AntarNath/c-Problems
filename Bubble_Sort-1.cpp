#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before Sort : ";
    printArray(arr,n);
    cout<<endl;

    //Implement Bubble Sort
    int counter = 1;
    while(counter < n){
        for(int i=0;i<n-counter;i++){
            cout<<"iteration no : "<<i<<endl;
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
            printArray(arr,n);

        }
        cout<<endl;
        counter++;
    }

    cout<<"After Sort : ";
    printArray(arr,n);
    cout<<endl;

    return 0;
}