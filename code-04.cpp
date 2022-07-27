#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a = n/15;
    if(n<15){
        cout<<n*800;
    }
    else{
        cout<<((n*800)-a*200);
    }
    return 0;
}