#include<bits/stdc++.h>
using namespace std;

int main(){
    //first matrix : 
    int row1,column1;
    cout<<"A matrix row and column Number : ";
    cin>>row1>>column1;
    int A[row1][column1];
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            cin>>A[i][j];
        }
    }
    //second matrix : 
    int row2,column2;
    cout<<"B matrix row and column Number : ";
    cin>>row2>>column2;
    int B[row2][column2];
    for(int i=0;i<row2;i++){
        for(int j=0;j<column2;j++){
            cin>>B[i][j];
        }
    }
    //ans matrix:
    int ans[row1][column2];
    for(int i=0;i<row1;i++){
        for(int j=0;j<column2;j++){
            ans[i][j]=0;
        }
    }
    cout<<"Matrix multiple ans : "<<endl;
    if(column1 == row2){
        for(int i=0;i<row1;i++){
            for(int j=0;j<column2;j++){
                for(int k=0;k<row2;k++){
                    ans[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        for(int i=0;i<row1;i++){
            for(int j=0;j<column2;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"This two matrix are not multiplication"<<endl;
    }

    return 0;
}