#include <iostream>
using namespace std;
class daire
{
    double yariCap;
    public:
        void yariCapAta(double _yariCap){ yariCap= _yariCap;}
        double yariCapAl(){   return yariCap; }
        double alan(){ return 3.14*yariCap*yariCap; }
        double cevre(){ return 2*3.14*yariCap; }
};
int main()
{
    daire d;
    double r;
    cout<<"Yari Çapı Girin:";
    cin>>r;
    d.yariCapAta(r);
    double Alan = d.alan();
    double Cevre = d.cevre();
    cout<<"Yarı Çap="<<r<<endl<<"Alan="<<Alan<<endl<<"Çevre="<<Cevre<<endl;
    return 0;
}