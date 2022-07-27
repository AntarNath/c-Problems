#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int n,int a[],int key){
    int start = 0;
    int end = n;
    while(start <= end){
        int mid = (start + end)/2;
        if(key == a[mid]){
            return mid;
        }
        else if(key < a[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<BinarySearch(n,a,key);
    return 0;
}