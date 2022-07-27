#include<bits/stdc++.h>
using namespace std;

/*class Example{
public:
    int x;
    int y;
    int z;
    Example(int a,int b,int c){
        x=a;
        y=b;
        z=c;
    }
};

int main(){
    Example a(10,20,30);
    cout<<a.x<<" "<<a.y<<" "<<a.z<<endl;
    return 0;
} */
class Parent{
public:
    int x;
private:
    int y;
protected:
    int z;
public:
    Parent(int a,int b,int c){
        x = a;
        y = b;
        z = c;
    }
};

class Child: public Parent{
public:
    int xx;
    Child(int aa,int a,int b,int c) : Parent(a,b,c){
        xx = aa;
    }
    void tellMe(){
        cout<<"protected value: "<<z<<endl;
    }
};

int main(){
    Parent pt(10,20,30);
    Child ch(100,10,20,30);
    cout<<"public value : "<<ch.x<<endl;
    ch.tellMe();

    return 0;
}