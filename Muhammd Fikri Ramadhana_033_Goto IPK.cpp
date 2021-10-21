// Progam untuk Menghitung IPK dengan penggunaan goto
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main(){
	
		
	int total_poin=0,total_sks=0;
	char yn;
	
	struct data
	{
		float ip[10],jumlahsks[15],jumlahpoin[15];
	};
	data data1[10];
	
	struct mahasiswa
	{
		char nama[30],nim[15],prodi[30];
		int jumlahsmt;
		float total_akhir;
	};
	mahasiswa mhs;
	
	awal :
	cout<<"[          Progam Menghitung IPK          ]"<<endl;
	cout<<"*******************************************"<<endl;
	cout<<"\n";
	
	cout<<"=========== Data Diri Mahasiswa ==========="<<endl;
	cout<<"\n";
	cout<<" Nama Mahasiswa  : "; cin.getline (mhs.nama,30);
	cout<<" NIM             : "; cin.getline (mhs.nim,15);
	cout<<" Progam Studi    : "; cin.getline (mhs.prodi,30);
	cout<<" Jumlah Semester : "; cin>>mhs.jumlahsmt;
	
	cout<<"==========================================="<<endl;
	cout<<"\n";
	
	for (int i=1;i<=mhs.jumlahsmt;i++)
	{
		cout<<"            Semester ke "<<i<<"          "<<endl;
		cout<<"==========================================="<<endl;
		cout<<" Jumlah SKS  : "; cin>>data1[i].jumlahsks[i];
		cout<<" Jumlah Poin : "; cin>>data1[i].jumlahpoin[i];
		cout<<"==========================================="<<endl;
		
		data1[i].ip[i]=data1[i].jumlahpoin[i]/data1[i].jumlahsks[i];
		
		cout<<" Indeks Prestasi Semester (IP) : "<<data1[i].ip[i]<<endl;
		cout<<"==========================================="<<endl;
		cout<<"\n";
		
		total_poin +=data1[i].jumlahpoin[i];
		total_sks +=data1[i].jumlahsks[i];
		
	}
	
	mhs.total_akhir=total_poin/total_sks;
	
	cout<<" Total Poin Keseluruhan : "<<total_poin<<endl;
	cout<<" Total SKS Keseluruhan  : "<<total_sks<<endl;
	cout<<" IPK Selama "<<mhs.jumlahsmt<<" Semester : "<<mhs.total_akhir<<endl;
	cout<<"================================================"<<endl;
	cout<<"\n";
	
	cout<<" Kembali ke Menu Awal (y/n) ? : "; cin>>yn;
	cout<<"\n";
	if (yn=='Y' || yn=='y'){
		goto awal;
	}	
	else if (yn=='N' || yn=='n'){
		goto akhir;
	}
	
	akhir :
		cout<<" Terima kasih telah menggunakan layanan ini "<<endl<<endl;
	
	return 0;
	getch ();
}
