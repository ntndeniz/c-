#include <iostream>
using namespace std;


int main()
{
    int x,y,z,t;
    cout<<"Üç basamkalı bir sayı giriniz =";
    cin>>x;
    y=x/100;
    z=x%100/10;
    t=x%10;
    cout<<"Üç basamaklı sayının basamaklar toplamı ="<<y+z+t;
    return 0;
}

