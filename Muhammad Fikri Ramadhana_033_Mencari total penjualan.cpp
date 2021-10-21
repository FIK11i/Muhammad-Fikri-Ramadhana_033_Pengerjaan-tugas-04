//Progam mencari total penjualan dari n jenis barang !
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main(){
	
	int totalharga_brg=0,jumlah_brg,totaljumlahunit_brg=0,totalpotongan_hrg,diskon_hrg;
	char jenisbarang,yn;
	float totalkeseluruhanakhir_hrg;
	
	struct dataharga
	{
		float harga_brg[40],jumlahjenis_brg[40],totalhargajenis_brg[40];
	};
	dataharga hrg[45];
	
	awal :
	cout<<"[     Progam Menghitung Penjualan Barang   ]"<<endl;
	cout<<"********************************************"<<endl;
	cout<<"\n";
	cout<<"========== KASIR PENJUALAN BARANG =========="<<endl;
	cout<<"\n";
	
	cout<<" Masukkan Jumlah Jenis Barang : "; cin>>jumlah_brg;
	
	cout<<"============================================"<<endl;
	cout<<"\n";
	
	for (int i=1;i<=jumlah_brg;i++)
	{
		cout<<"============================================"<<endl;
		cout<<"       << Jenis Barang ke "<<i<<" >>        "<<endl;
		cout<<"--------------------------------------------"<<endl;
		cout<<" Harga Barang       : Rp. "; cin>>hrg[i].harga_brg[i];
		cout<<" Jumlah Barang Unit : "; cin>>hrg[i].jumlahjenis_brg[i];
		cout<<"============================================"<<endl;
		
		hrg[i].totalhargajenis_brg[i]=hrg[i].harga_brg[i]*hrg[i].jumlahjenis_brg[i];
		
		cout<<" Total Harga Barang : Rp. "<<hrg[i].totalhargajenis_brg[i]<<endl;
		cout<<"============================================"<<endl;
		cout<<"\n";
		
		totalharga_brg += hrg[i].harga_brg[i];
		totaljumlahunit_brg += hrg[i].jumlahjenis_brg[i];
	}
	
	totalkeseluruhanakhir_hrg=totalharga_brg;
	
	if (totalkeseluruhanakhir_hrg>=500000)
	{
		diskon_hrg=(totalkeseluruhanakhir_hrg*0.1);
	}
	else if (totalkeseluruhanakhir_hrg>200000&&totalkeseluruhanakhir_hrg>500000)
	{
		diskon_hrg=(totalkeseluruhanakhir_hrg*0.05);
	}
	else if (totalkeseluruhanakhir_hrg<=200000)
	{
		diskon_hrg=(totalkeseluruhanakhir_hrg*0);
	}
	
	totalpotongan_hrg=totalkeseluruhanakhir_hrg-diskon_hrg;
	
	cout<<"--------------------------------------------"<<endl;
	cout<<" Total Keseluruhan Barang      : Rp. "<<totalkeseluruhanakhir_hrg<<endl;
	cout<<" Total Jumlah Unit Barang      : "<<jumlah_brg<<endl;
	cout<<" Pemberian Diskon              : Rp. "<<diskon_hrg<<endl;
	cout<<" Total Setelah Potongan Diskon : Rp. "<<totalpotongan_hrg<<endl;
	cout<<"============================================"<<endl;
	cout<<"\n";
	
	cout<<" Terima kasih telah menggunakan layanan ini "<<endl<<endl;
		
	return 0;
	getch ();
}
