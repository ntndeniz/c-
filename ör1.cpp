#include <iostream>
using namespace std;

class ör1
{
    public:
    int i;
    void yaz()
    {
        m = 6;
        k = 7;
        cout<<"m="<<m<<endl<<"k="<<k<<endl;
        cout<<"i="<<i<<endl;
    }
    private:
    int m;
    int k;

    
};
int main()
{
    ör1 x;
    x.i= 5;
    x.yaz();
    return 0;
}