#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien {
public :
	string nama;
	vector<dokter*> daftar_dokter;
	pasien(string pNama) :nama(pNama) {
		cout << "Pasien \"" << nama << "\" ada\n";
	}
	~pasien() {
		cout << "Pasien \"" << nama << "\" tidak ada\n";
	}
	void tambahDokter(dokter*);
	void cetakDokter();
};

class dokter {
public :
	string nama;
	vector<pasien*> daftar_pasien;

	dokter(string pNama) :nama(pNama) {
		cout << "Dokter \"" << nama << "ada \"";
	}
	~dokter() {
		cout << "Dokter \"" << nama << " tidak ada \"";
	}

	void tambahpasien(pasien*);
	void cetakpasien();

};

void pasien::tambahDokter(dokter* pDokter) {
	daftar_dokter.push_back(pDokter);
}
void pasien::cetakDokter() {
	cout << "Daftar dokter yang menangani pasien \"" << this->nama << "\":\n";
	for (auto& a : daftar_dokter) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
void dokter::tambahpasien(pasien* pPasien) {
	daftar_pasien.push_back(pPasien);
}
void dokter::cetakpasien() {
	cout << "Daftar pasien dari dokter \"" << this->nama << "\":\n";
	for (auto& a : daftar_pasien) {
		cout << a->nama << "\n";
	}
}