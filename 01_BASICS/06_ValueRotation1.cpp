#include <iostream>
using namespace std;
int main()
{
    int a=1, b=2, c=3, temp;
    cout<<"VALUE OF A B C BEFORE ROTATION \n";
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
    temp=a;
    a=b;
    b=c;
    c=temp;
    cout<<"VALUE OF A B C AFTER ROTATION \n";
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
    
    return 0;
}
