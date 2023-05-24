#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main() {
	ibu* varibu = new ibu("dini");
	ibu* varibu2 = new ibu("novi");
	anak* varanak1 = new anak("tono");
	anak* varanak2 = new anak("rini");
	anak* varanak3 = new anak("dewi");

	varibu->tambahAnak(varanak1);
	varibu->tambahAnak(varanak2);
	varibu2->tambahAnak(varanak3);
	varibu2->tambahAnak(varanak1);

	varibu->cetakAnak();
	varibu2->cetakAnak();

	delete varibu;
	delete varibu2;
	delete varanak1;
	delete varanak2;
	delete varanak3;

	return 0;
}