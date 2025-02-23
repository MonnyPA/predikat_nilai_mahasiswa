#include<iostream>
using namespace std;

int main(){
	int nilai;
	string ulang, nama_mahasiswa, mata_kuliah;
	
	cout << "Selamat Datang di ITB Stikom Ambon" << endl;
	cout << "==================================" << endl;
	
	cout << "\nMasukan Nama\t\t: "; cin >> nama_mahasiswa;
	cout << "Masukan Mata Kuliah\t: "; cin >> mata_kuliah;
	cout << "Masukan Nilai\t\t: "; cin >> nilai;

	cout << "\n=================================" << endl << endl;
	cout << "Nama Mahasiswa\t\t: " << nama_mahasiswa << endl;
	cout << "Mata Kuliah\t\t: " << mata_kuliah << endl << endl;
		
	if (nilai >= 80){
		cout << "Predikat Nilai adalah A" << endl;
	} else if (nilai >= 70){
		cout << "Predikat Nilai adalah B" << endl;
	} else if (nilai >= 60){
		cout << "Predikat Nilai adalah C" << endl;
	} else if (nilai >= 50){
		cout << "Predikat Nilai adalah D" << endl;
	} else {cout << "Predikat Nilai adalah E" << endl;}
	
	return 0;	
}
