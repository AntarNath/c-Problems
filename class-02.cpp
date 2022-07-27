#include<bits/stdc++.h>
using namespace std;

//Operator Overloading

/* class Example{
public:
    int x;
    Example(int a){
        x = a;
    }
    Example operator +(Example obj){
        Example ans(0);
        ans.x = x+obj.x;
        return ans;
    }
};
int main(){
    Example a(10),b(20),c(30);
    Example ans = a+b;
    cout<<ans.x<<endl;
    Example ans1 = ans + c;
    cout<<ans1.x<<endl;
    return 0;
} */

//Function Overloading

class Parent{
public:
    void fun(){
        cout<<"Parent"<<endl;
    }
};

class Child: public Parent{
public:
    void fun(){
        cout<<"Child"<<endl;
    }
};

int main(){
    Parent pt;
    Child obj;
    obj.fun();
    pt.fun();
    return 0;
}