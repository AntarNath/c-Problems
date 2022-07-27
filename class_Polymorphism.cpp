#include<bits/stdc++.h>
using namespace std;

class Example{
public:
    void add(int x,int y){
        cout<<"First Function"<<endl;
        cout<<x+y<<endl;
    }
    void add(double x,double y){
        cout<<"Second Function"<<endl;
        cout<<x+y<<endl;
    }
};

int main(){
    Example ex;
    ex.add(4.4 , 5.9);
}