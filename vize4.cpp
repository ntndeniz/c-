#include <iostream>
using namespace std;

class Para
{
public:
    int lira, kurus;
    int getLira()
    {
        return lira;
    };
    int getKurus()
    {
        return kurus;
    };
    Para();
    Para(int l, int k)
    {
        lira = l;
        kurus = k;
    };
    Para toplama(Para p1);
};
Para Para::toplama(Para p1)
{
    int x = p1.lira;
    int y = p1.kurus;
    return Para(lira + x , kurus + y);
};

int main()
{
    Para maliyet(7, 35);
    Para vergi(2, 0);
    Para toplam = maliyet.toplama(vergi);

    cout << "Maliyet: " << maliyet.lira << "," << maliyet.kurus << endl;
    cout << "Vergi: " << vergi.lira << "," << vergi.kurus << endl;
    cout << "Toplam: " << toplam.getLira() << "," << toplam.getKurus();
    return 0;
}
