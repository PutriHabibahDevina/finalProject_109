#include<iostream>
using namespace std;


class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	string NilaiAkhir;
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}

	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return ; }
	virtual void input() { return ; }

	void setPresensi(float nilai){
		this->presensi = nilai;
	}

	float getPresensi() {
		return presensi;
	}

	float presensi() {
		cout << "Masukkan nilai Presensi: ";
		cin >> presensi;
	}
	float activity() {
		cout << "\nMasukkan nilai Activity: ";
		cin >> activity;
	}
	float exercise() {
		cout << "\nMasukkan nilai Exercise: ";
		cin >> exercise;
	}
	float tugasAkhir() {
		cout << "\nMasukkan nilai Tugas Akhir: ";
		cin >> tugasAkhir;
	}
	
	virtual float hitungNilaiAkhir() {
		NilaiAkhir = ((presensi * 0.10) + (activity * 0.20) + (exercise * 0.30) + (tugasAkhir * 0.40)) / 4;
		return 0;
	}
	
};

class Pemrograman : public MataKuliah {
	string presensi;
	string activity;
	string exercise;
	virtual void cekKelulusan() {
		if (NilaiAkhir > 75) {
			cout << "\nSelamat, Anda lulus mata kuliah Pemrograman dengan nilai akhir " << NilaiAkhir << " ";
		else
			cout << "\nMaaf Anda tidak lulus";
		}
		return ;
	}
	float setP() {
		presensi = &p;
	}
	float setA() {
		activity = &a;
	}
	float setE() {
		exercise = &e;
	}
	float setUA() {
		NilaiAkhir = &ua;
	}
};

int main() {
	MataKuliah;
	Pemrograman;

	cout << "\nApakah anda ingin mengulang program? Y/N: " << endl;
}