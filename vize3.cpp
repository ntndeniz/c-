#include <iostream>
using namespace std;
class nd
{
};
int main()
{
    int a, b, top;
    double yuz;
    top= 0;
    cout<<"Parti Sayısını Giriniz:";
    cin>>a;
    int *parti = new int[a];
    for (int i=0; i<a; i++)
        {
            cout<<i+1<<". Parti Oy Sayısını Giriniz:";
            cin>>b;
            parti[i]= b;
            top = top + b;
        }
     cout<<endl<<"Toplam Oy Sayısı:"<<top<<endl<<endl;

    for(int i=0; i<a; i++)
    {
        yuz = double (parti[i]*100/top);
        cout<<i+1<<". Parti Yüzdesi:"<< yuz<<"%    "<< "Parti Oy Sayısı:"<<parti[i]<<endl<<endl;
    } 

   int en_yuksek_oy = 0;
    int kazanan_parti = 0;
    for (int i=0; i<a; i++)
    {
      if (parti[i] > en_yuksek_oy)
        {
            en_yuksek_oy = parti[i];
            kazanan_parti = i + 1;
        }
    }
    cout<< kazanan_parti<<". Parti Secimi Kazandı.";

    delete[] parti;
    return 0;
}