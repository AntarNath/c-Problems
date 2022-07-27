#include<bits/stdc++.h>
using namespace std;

class Antar{
private:
    int taka;
protected:
    int password;
public:
    Antar(int tk,int pass){
        taka = tk;
        password = pass;
    }
    friend void tellSecret(Antar *ptr);
};

void tellSecret(Antar *ptr){
    cout<<ptr -> taka<<endl;
    cout<<ptr -> password<<endl;
}
int main(){
    Antar pt(1500,23456);
    tellSecret(&pt);
    return 0;
}