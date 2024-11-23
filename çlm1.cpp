#include<iostream>
using namespace std;

int main()
{
    int a= 9;
    double b= 5.2;
    const float c= 29.5;
    string str ="C++";
    char ch='*';
    cout<<"a="<< a<<" b="<<b<<" c="<< c;
    cout<<" ch='"<<ch<<"' str="<<str<<endl;
    a = b;
    b = c;
    cout<<"a="<< a<<" b="<<b<<" c="<< c;
    cout<<" ch='"<<ch<<"' str="<<str<<endl;
    return 0;
    


}