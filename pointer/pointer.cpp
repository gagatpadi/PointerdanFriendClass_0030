#include <iostream>
using namespace std;

class mahasiswa {
		public:
		int nim;
		void showNim() {
		cout << "No Induk = "<<nim<< endl;
	}
};

int main() {
	
	mahasiswa mhs{1}; // Object mhs
	mhs.showNim();  // Member access operator

	mahasiswa& refMhs = mhs; //pointer reference regmhs
	refMhs.nim = 2; //member access operator
	mhs.showNim();

	mahasiswa* pMhs = &mhs; //pointer deference pmhs
	pMhs->nim = 3; // arrow operator
	pMhs->showNim();
	return 0;

}