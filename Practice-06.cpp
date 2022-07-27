/* #include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int lb, int ub, int k){
    if(lb<=ub){
        int mid=(lb+ub)/2;
        if(arr[mid]==k) return mid;
        else if(arr[mid]<k) binarySearch(arr,mid+1,ub,k);
            else binarySearch(arr,lb,mid-1,k);
    }
    else return -1;
}
int main(){
    int size;
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    sort(arr,arr+size);
    
    int checkvalue;
    cin>>checkvalue;

    int index = binarySearch(arr,0,size-1,checkvalue);
    if(index != -1){
        cout<<"FOUND at index position: "<<checkvalue<<","<<index<<endl;
    }
    else{
        cout<<"NOT FOUND "<<endl;
    }

    return 0;
} */



/* #include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cin>>m;
    int B[m];
    for(int i=0;i<m;i++){
        cin>>B[i];
    }

    int Flag = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i]==B[j]){
                cout<<A[i]<<" ";
                Flag = 1;
            }
        }
    }
    if(Flag == 0){
        cout<<"Empty set"<<endl;
    }
   
    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%3==0){
            a[i] = -1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
} */


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(a[i]==a[j]){
                for(int k=i;k<=n;k++){
                    a[k]=a[k+1];
                }
                n--;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}