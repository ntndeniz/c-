#include <iostream>
using namespace std;
class silindir
{
    int yukseklik;
    int tabanYariCapi;
    public:
        void yukseklikAta(int __yukseklikAta){yukseklik= __yukseklikAta; }
        void TabanYariCapi(int __tabanYariCapi){tabanYariCapi= __tabanYariCapi;}
        double yuzeyAlaniHesapla(){return (2*3.14*tabanYariCapi*yukseklik+2*3.14*tabanYariCapi*tabanYariCapi);}
        double hacimHesapla(){return 3.14*tabanYariCapi*tabanYariCapi*yukseklik;}
};
int main()
{
    silindir s;
    int r;
    int h;
    cout<<"Yarı Çapı Giriniz:";
    cin>>r;
    cout<<"Yükseklik Giriniz:";
    cin>>h;
    s.TabanYariCapi(r);
    s.yukseklikAta(h);
    double YuzeyAlanı = s.yuzeyAlaniHesapla();
    double Hacmi = s.hacimHesapla();
    cout<<"Yukseklik (h):"<<h<<endl<<"Taban Yarıcapı (r):"<<r<<endl;
    cout<<"Yuzey Alanı (A):"<<YuzeyAlanı<<endl<<"Hacmi (H):"<<Hacmi;
    return 0;

}