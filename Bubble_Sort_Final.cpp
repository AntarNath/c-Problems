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
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Before Sort : ";
    printArray(arr,n);
    cout<<endl;

    //Implement Bobble Sort : 
    for(int i=1; i<n; i++){
        cout<<"iteration no :"<<i<<endl;
        int Flag=0;
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                Flag = 1;
            }
            printArray(arr,n);
        }
        if(Flag == 0){
            break;
        }
        cout<<endl;
    }
    
    cout<<"After Sort :";
    printArray(arr,n);
    cout<<endl;
    
    return 0;
}