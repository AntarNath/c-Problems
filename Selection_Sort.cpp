#include<bits/stdc++.h>
using namespace std;

void selectionSort(int n,int arr[]){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        cout<<"step - >"<<i+1<<": ";
        for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;

    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(n,arr);
    return 0;
}