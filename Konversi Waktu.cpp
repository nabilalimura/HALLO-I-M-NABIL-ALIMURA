#include<iostream>
using namespace std;
int main ()
{
int idetik,detik,hari,jam,menit,dtk1,dtk2;

cout<<"PROGRAM KONVERSI WAKTU"<<endl;
cout<<"MASUKKAN DETIK = ";
cin>>idetik;
hari=idetik/86400;
dtk1=idetik%86400;

jam=dtk1/3600;
dtk2=dtk1%3600;

menit=dtk2/60;
detik=dtk2%60;

cout<<"HARI = "<<hari<<endl;
cout<<"JAM = "<<jam<<endl;
cout<<"MENIT = "<<menit<<endl;
cout<<"DETIK = "<<detik<<endl;




}
