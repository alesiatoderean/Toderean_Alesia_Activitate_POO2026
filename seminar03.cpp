#include <iostream>
using namespace std;

class Telefon {
public:
	float rezolutie;
	float memorie;
	string model;
	char* producator;
	float pret;
	int nrAplicatii;
	float* memorieAplicatii;


	Telefon()
	{
		this->rezolutie = 5.3;
		this->memorie = 128;
		this->model = " Iphone 17 ";
		this->producator = new char[strlen("Apple") + 1];
		strcpy_s(producator, strlen("Apple") + 1, "Apple");
		this->pret = 4000;
		this->nrAplicatii = 5;
		this->memorieAplicatii = new float[this->nrAplicatii];
		this->memorieAplicatii[0] = 2;
		this->memorieAplicatii[1] = 3;
		this->memorieAplicatii[2] = 1.4;
		this->memorieAplicatii[3] = 1.6;
		this->memorieAplicatii[4] = 2.4;


	}
	Telefon(float rezolutie, float memorie)
	{
		this->rezolutie = rezolutie;
		this->memorie = memorie;
		this->model = "Iphone 17 ";
		this->producator = new char[strlen("Apple") + 1];
		strcpy_s(producator, strlen("Apple") + 1, "Apple");
		this->pret = 4000;
		this->nrAplicatii = 5;
		this->memorieAplicatii = new float[this->nrAplicatii];
		this->memorieAplicatii[0] = 2;
		this->memorieAplicatii[1] = 3;
		this->memorieAplicatii[2] = 1.4;
		this->memorieAplicatii[3] = 1.6;
		this->memorieAplicatii[4] = 2.4;


	}


	void afisare()
	{
		cout << "rezolutie: " << this->rezolutie << "\n";
		cout << "memorie: " << this->memorie << "\n";
		cout << "model: " << this->model << "\n";
		cout << "Producator: " << this->producator << "\n";
		cout << "Pret: " << this->pret << "\n";
		cout << "NrAplicatii: ";
		for (int i = 0; i < this->nrAplicatii; i++)
			cout << this->memorieAplicatii[i] << "; ";
		cout << endl;



	}
	float CaluleazaMemorieOcupata()
	{
		int sumaMemorie = 0;
		for (int i = 0; i < this->nrAplicatii; i++)
			sumaMemorie += memorieAplicatii[i];
		return sumaMemorie;
	}
	float CalculeazaMemorieLibera()
	{
		return memorie - CaluleazaMemorieOcupata();
	}
	void modificaproducator(const char* producatorNou)
	{
		delete[]this->producator;
		producator = new char[strlen(producatorNou) + 1];
		strcpy_s(producator, strlen(producatorNou) + 1, producatorNou);


	}


};
void main()
{
	Telefon t;

	cout << t.model;
	t.afisare();
	cout << endl << "Spatiu liber: " << t.CalculeazaMemorieLibera();
	Telefon t1(5.6, 256);
	t1.afisare();
	cout << endl << "Spatiu liber: " << t1.CalculeazaMemorieLibera() << endl;
	Telefon* telefoane = new Telefon[4];
	telefoane[0].modificaproducator("Samsung");
	telefoane[1].modificaproducator("xiaomi");
	telefoane[2].modificaproducator("Huawei");
	for (int i = 0; i < 4; i++)
		telefoane[i].afisare();


}