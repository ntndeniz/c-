#include<iostream>
using namespace std;
class dik
{
    int en, boy;
    public:
     dik(int e, int b)
        {
            en=e; 
            boy =b;
         }
        int alan()
        {
            return en*boy;
        }        
    
};
int main()
{
    dik x(5,10);
    cout<<"Alan="<<x.alan()<<endl;
    return 0;
}