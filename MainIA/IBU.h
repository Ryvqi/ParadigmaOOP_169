#pragma once
#ifndef IBU_H
#define IBU_H

class ibu {
public:
	string nama;
	vektor<anak> daftar_anak;

	ibu(string pNama) : nama(pNama) {
		cout << "Ibu \"" << nama << "\" ada \n";
	}

};
#endif // !IBU_H
