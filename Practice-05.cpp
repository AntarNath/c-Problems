/* #include<bits/stdc++.h>
using namespace std;

bool pairSum(int arr[],int n,int k){
    int low = 0;
    int high = n-1;
    for(;low<high;){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]<k){
            low++;
        }
        else {
            high--;
        }
    }
    return false;
}
int main(){
    int arr[]={2,4,7,11,14,16,20,21};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=31;
    cout<<pairSum(arr,n,k)<<endl;


    return 0;
}
 */

#include <bits/stdc++.h>
using namespace std;

bool pairsum(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << low << " " << high << endl;
            return true;
        }
        else if (arr[low] + arr[high] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}

int main()
{
    int n = 8;
    int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
    int k = 31;
    cout << pairsum(arr, n, k);
}