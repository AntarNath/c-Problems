#include<bits/stdc++.h>
using namespace std;

/* int main(){
    int n,sum;
    cin>>n>>sum;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int currsum = 0;
        for(int j=i;j<n;j++){
            currsum += a[j];
            if(currsum == sum){
                cout<<i+1<<" "<<j+1;
                return 0;
            }
        }
    }
    cout<<"Not match";
    return 0;
} */
int main(){
    int n,s;
    cin >> n >> s;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum = 0;
    int i=0, j=0;
    while (j<n && sum+a[j] <= s)
    {
        sum += a[j];
        j++;
    }
    
    if(sum == s){
        cout<<i+1<<" "<<j+1;
        return 0;
    } 
    while(j<n){
        sum += a[j];
        while(sum > s){
            sum -= a[i];
            i++;
        }

        if(sum == s){
            cout<<i+1<<" "<<j+1<<endl;
            return 0;
        }
    }
    return 0;
    
}