#include<bits/stdc++.h>
using namespace std;

void fun(int n){
    if(n==-100){
        return ;
    }
    cout<<n<<" ";
    fun(n-1);
}
int main(){
    int n=10;
    fun(n);
}
