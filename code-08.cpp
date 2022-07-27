#include<bits/stdc++.h>
using namespace std;

int BinaryToDecimal(int n){
    int ans = 0;
    int x = 1;
    while (n>0)
    {
        int y = n%10;
        ans += x * y;
        x *= 2;
        n = n/10;
    }
    return ans;
}
int OctalToDecimal(int n){
    int ans = 0;
    int x = 1;
    while (n>0)
    {   
        int y = n%10;
        ans += y*x;
        x *= 8;
        n /= 10;
        /* code */
    }
    return ans;   
}
int HexaToDecimal(string n){
    int  ans = 0;
    int x = 1;
    int s = n.size();
    for(int i=s-1;i>=0;i--){
        if(n[i] >= '0' && n[i] <= '9'){
            ans += x * (n[i]-'0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F'){
            ans += x * (n[i]-'A'+10);
        }
        x *= 16;
    }
    return ans ; 
}
int DecimalToBinary(int n){
    int binary = 0,product = 1,remainder;
    while(n>0){
        remainder = n%2;
        binary += (remainder * product);
        n /= 2;
        product *= 10;    
    }
    return binary;
}
int DecimalToOctal(int n){
    int oct = 0,product = 1, remainder;
    while (n>0)
    {
        remainder = n%8;
        oct += (remainder * product);
        n /= 8;
        product *= 10;
        /* code */
    }
    return oct;
    
}
void DecimalToHexadecimal(int n){
    char hexa[100];
    int remainder;
    int i=0;
    while(n!=0){
        remainder = n%16;
        if(remainder < 10){
            hexa[i] = remainder + 48;
            i++;
        }
        else{
            hexa[i] = remainder + 55;
            i++;
        }
        n = n/16;
    }
    for(int j=i-1;j>=0;j--){
        cout<<hexa[j];
    }
}
int main(){
    int n;
    cin>>n;
    int a = OctalToDecimal(n);
    DecimalToHexadecimal(a);
}