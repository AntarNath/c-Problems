#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum = n;
    int left_value = 0;
    while(n>=3){ 
        int a = n/3;
        left_value = left_value + (n-(a*3));
        sum = sum + a;
        n = a;
    }
    n = n + left_value;
    if(n>=3){
        sum = sum + n/3;
    }
    cout<<sum<<endl;
    
}