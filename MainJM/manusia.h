#pragma once
#include <iostream>
#include <string>
#ifndef MANUSIA_H
#define MANUSIA_H
#include "jantung.h"
using namespace std;

class manusia {
public:
	string nama;
	jantung varJantung;

	manusia(string pNama)
		: nama(pNama) {
		cout << nama << " hidup\n";
	}
	~manusia() {
		cout << nama << " mati\n";
	}
};
#endif // !MANUSIA_h
