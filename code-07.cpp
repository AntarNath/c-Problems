#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=2;i<=n;i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int ans = factorial(i)/(factorial(i-j)*factorial(j));
            cout<<ans<<" ";
        }
        cout<<endl;
    }
}