#include<iostream>
using namespace std;
class istanbul
{
    int yil;
    string sen;
    public:
        istanbul() : yil(1453), sen("0'nun yaşındasın."){}
        istanbul(int x, string a): yil(x), sen(a){}
        void ekranayaz(){
            cout<<"yıl"<<yil<<endl<<"sen"<<sen<<endl;
        }

};
int main()
{
    istanbul ob1, ob2(2024,"Algoritma Ve Programlama Vize Sınavındasın");
    ob1.ekranayaz();
    ob2.ekranayaz();
    system("pause");
    return 0;
}