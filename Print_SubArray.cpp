#include<bits/stdc++.h>
using namespace std;

///Cumulative Sum: 

/* int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int currsum[n+1];
    currsum[0] = 0;

    for(int i=1;i<=n;i++){
        currsum[i] = currsum[i-1] + a[i-1];
    }
    for(int i=0;i<n+1;i++){
        cout<<currsum[i]<<" ";
    }
    cout<<endl;
    int maxsum = INT_MIN;
    for(int i=1;i<=n;i++){
        int sum = 0;
        for(int j=0;j<i;j++){
            sum = currsum[i] - currsum[j];
            maxsum = max(maxsum,sum);
        }
    }
    cout<<maxsum<<endl;
} */

///Kadane's algorithm : 

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int current_sum = arr[0];
    int Max = INT_MIN;
    for(int i=1;i<n;i++){
        if(current_sum < 0){
            current_sum = 0;
        }
        current_sum += arr[i];
        Max = max(current_sum,Max);
    }
    cout<<Max;
}