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

/* int main(){
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
} */

///Maximum sum of circular Subarray Sum:

int kadane(int arr[],int n){
    int current_sum = 0;
    int maxsum = INT_MIN;
    for(int i=0;i<n;i++){
        current_sum += arr[i];
        if(current_sum < 0){
            current_sum = 0;
        }
        maxsum = max(maxsum,current_sum);
    }
    return maxsum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(arr,n);
    cout<<nonwrapsum<<endl;
    int total_sum = 0;
    for(int i=0;i<n;i++){
        total_sum += arr[i];
        arr[i] = -arr[i];
    }
    wrapsum = total_sum + kadane(arr,n);
    cout<<max(wrapsum,nonwrapsum);
    
}