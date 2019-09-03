#include <iostream>
#include <ctime>
#include <string>
#include <string.h>
using namespace std;

int random() {

	int valor = rand() % 36;
	return valor;

}

int mod(int b, int total) {
	if (b == 0) {
		return b;
	}
	else if (b < 0) {
		return total % -b;
	}
	else {
		return total % b;
	}
}
string binario(int numero) {

	int dividendo, resto, divisor = 2;
	string binario = "";
	cout << "Ingrese el numero decimal a convertir a sistema binario" << endl;
	dividendo = numero;
	while (dividendo >= divisor) {
		resto = dividendo % 2;
		if (resto == 1)
			binario = "1" + binario;
		else
			binario = "0" + binario;
		dividendo = dividendo / divisor;
	}
	if (dividendo == 1)
		binario = "1" + binario;
	else
		binario = "0" + binario;
	//cout << "En sistema binario " << numero << " se escribe " << binario << endl;
	return binario;

}
void cifrar() {

	string alf = "abcdefghijklmnopqrstuvwxyz0123456789 ";
	string msj;
	string clave;
	string cif;
	string bmsj;
	string bclave;
	string bres;
	getline(cin, msj);
	int tam2 = alf.size();
	cout << tam2;
	int tam = msj.size();
	int arr[1000] = {};
	int arr2[1000] = {};
	int arr3[1000] = {};
	int n = 0;
	srand(time(NULL));


	for (int i = 1; i < tam; i++) {
		arr[i] = random();
	}

	for (int j = 0; j < tam; j++) {
		for (int i = 0; i < alf.size(); i++) {
			if (msj[j] == alf[i]) {
				arr2[n] = i;
				n++;
				break;
			}
		}
	}

	for (int i = 0; i < tam; i++) {
		bmsj += arr[i];
	}

	for (int i = 0; i < tam; i++) {
		bclave += arr2[i];
	}



	for (int i = 0; i < tam; i++) {
		bmsj = binario(arr[i]);
		bclave = binario(arr2[i]);
		for (int j = 0; j < 6; j++) {
			if (bmsj[j] != bclave[j]) {

			}
		}
		binario(arr[i])
			binario(arr2[j])
	}









}

int main() {

}