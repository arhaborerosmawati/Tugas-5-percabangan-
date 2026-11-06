#include<iostream>
using namespace std;

int main()
{ 

 double tot_beli, potong, jum_bayar;
 cout<<"total,pembelian Rp.";
 cin>>tot_beli;
 if(tot_beli>=50000)
 potong= 0.2 * tot_beli;
 cout<<" Besarnya potongan Rp."<< potong << endl;
 jum_bayar=tot_beli - potong;
 cout<<" jumlah yang harus dibayarkan Rp." <<jum_bayar;
}
