#include <iostream>
#include <stdio.h>

using namespace std;

struct data
{
	char nama[30];
	int nip;
	float j_kerja;
}pegawai;

int main()
{
	float total;
	cout << "Program menghitung gaji harian pegawai\n";
	cout << "Masukkan nama: "; fflush(stdin); gets(pegawai.nama);
	cout << "Masukkan NIP: "; cin >> pegawai.nip;
	cout << "Masukkan jam kerja: "; cin >> pegawai.j_kerja;
	
	if (pegawai.j_kerja > 7){
		total =  (7 * 500) + ((pegawai.j_kerja - 7)*(15*500));
		cout << "\nGaji Harian " << pegawai.nama << " sebesar Rp. " << total;
	}
	else
	{
		total = pegawai.j_kerja * 500;
		cout << "Gaji Harian " << pegawai.nama << " sebesar Rp. " << total;
	}
	return 0;
}