#include<bits/stdc++.h>
using namespace std;
#define n 4
#define m 4

void spiralMatrix(int arr[n][m]){
    int a = 0;      //starting row index
    int b = n-1;    //ending row index
    int c = 0;      //starting column index
    int d = m-1;    //ending column index  

    while(a<=b && c<=d){
        //first row print:
        for(int i=c; i<=d; i++){
            cout<<arr[a][i]<<" ";
        }
        a++;
        //last column print:
        for(int i=a; i<=b; i++){
            cout<<arr[i][d]<<" ";
        }
        d--;
        //last row print:
        for(int i=d; i>=c;i--){
            cout<<arr[b][i]<<" ";
        }
        b--;
        //first column print:
        for(int i=b; i>=a; i--){
            cout<<arr[i][c]<<" ";
        }
        c++;
        
    } 
}

int main(){
    
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    spiralMatrix(arr);

    return 0;
}