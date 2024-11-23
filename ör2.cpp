#include <iostream>
using namespace std;
int*    kopya (int* a, int boyut)
{
    int* b= new int[boyut];
    for (int i=0;i<boyut;i++)
    b[i]=a[i];
    return b;
}
int main()
{
    int a[5]={2,4,6,8,10};
    int *b=kopya (a,5);
    for (int i=1;i<4;i++)
    cout<<b[i]<<" ";
    return 0;
}