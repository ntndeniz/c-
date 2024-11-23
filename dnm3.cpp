#include <iostream>
using namespace std;
class prt
{

};
int main ()
{
    int a, b, top;
    top = 0;
    double yuz;
    cout<<"Parti Sayısını Giriniz:";
    cin>>a;
    int *prt = new int [a];

    for(int i=0; i<a; i++)
    {
        cout<<i+1<<". Partinin Oy Sayısı:"<<endl;
        cin>>b;
        prt[i] = b;
        top= top+b;
    }
    cout<<"Toplam Oy Sayısı"<<top<<endl;

    for(int i=0; i<a; i++)
    {
        yuz=prt[i]*100/top;
        cout<<i+1<<". Partinin Oy Syısı:"<<(prt[i])<<"  Oy Yüzdesi:  %"<<yuz<<endl;
    }
    int enbyk=0;
    int kzn=0;

    for(int i=0; i<a; i++)
    {
        if(prt[i]>enbyk)
        {
            enbyk=prt[i];
            kzn = i+1;
        }
      
    }
      cout<<kzn<<". Parti Secimi Kazandı."<<endl;
    delete[] prt;
    return 0;
}