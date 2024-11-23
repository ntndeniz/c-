#include<iostream>
using namespace std;


int main()
{
    int say,x,y,z;
    cout<<"Üç Basamaklı Bir Sayı Giriniz=";
    cin>>say;
    x=say/100;
    y=say%100/10;
    z=say%10;
    cout<<"Sayıların Basamak Toplamları=";
    cout<<x+y+z;
    return 0;

}