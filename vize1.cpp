#include <iostream>
using namespace std;
int y=5;
int fun(int x)
{
    if  (x>y)
    {
        y--;
        cout<<x<<" "<<y<<endl;
        return x+fun(x-2);
    }
    else if (x<y)
    {
        cout<<x<<" "<<y<<endl;
        return fun(x+2)+x;
    }
    else return x*y;
}

int main()
{
    int a=4;
    cout<<fun(a);
    return 0;

}
