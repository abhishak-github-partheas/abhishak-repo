#include<iostream>
using namespace std;

class X {
int i;
int j;
int k;
};

//---------------------------------------------
class Y : public X {
int i;
};

//--------------------------------------------

int main() {
cout << "sizeof(X) = " << sizeof(X) << endl;
cout << "sizeof(Y) = "<< sizeof(Y) << endl;
Y y;
y.j=10;
}
