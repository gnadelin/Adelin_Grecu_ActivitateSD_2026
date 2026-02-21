#include<stdio.h>
#include<malloc.h>

//declaram un alias
typedef struct Depozit Depozit;

struct Depozit {
	int id; //4octeti
	int volum;
	float suprafata;  //4octeti ;
	char* denumire; //32/64 biti
	char clasa;
};
struct Depozit initializare(int id, int volum, float suprafata, char* denumire, char clasa) {
	//initializare structura 
	struct Depozit s;
	s.id = id;
	s.suprafata = suprafata;
	s.volum = volum;
	s.denumire = (char*)malloc(sizeof(char) * (strlen(denumire) + 1));
	strcpy(s.denumire, denumire);
	s.clasa = clasa;

	return s;
}

/// <summary>
/// functie extra
/// </summary>

/*struct Depozit copiaza(Depozit depozit) {
	//initializare structura 
	return Depozit s =initializare(d.id,d.suprafata,d.volum,d.denumire,d.clasa);
	
	
}

*/


void afisare(struct Depozit s) {
	//afisarea tuturor atributelor.
	printf("%d. Depozitul %s de clasa %c are o suprafata de %5.2f si un volum de %d.\n", s.id, s.denumire, s.clasa, s.suprafata, s.volum);
}

void afisareVector(struct Depozit* vector, int nrElemente) {
	//afisarea elementelor din vector apeland functia afisare
	for (int i = 0; i < nrElemente; i++)
		afisare(*(vector + i));
	vector++;

}

/*struct Depozit* copiazaPrimeleNElemente(struct Depozit* vector, int nrElemente, int nrElementeCopiate) {
	//copiem intr-un vector nou pe care il vom returna primele nrElementeCopiate

	if (nrElementeCopiate < nrElemente)
	{

	struct Depozit *vectorNou=malloc(sizeof(Depozit)*nrElementeCopiate);
	
	for (i = 0; i < nrElementeCopiate; i++) 
	{
		vectorNou[i] = copiaza(vector[i]);
	}

	}

		return vectorNou;
} */

void dezalocare(struct Depozit** vector, int* nrElemente) {
	//dezalocam elementele din vector si vectorul
}

void copiazaAnumiteElemente(struct Depozit* vector, char nrElemente, float prag, struct Depozit** vectorNou, int* dimensiune) {
	//parametrul prag poate fi modificat in functie de 
	// tipul atributului ales pentru a indeplini o conditie
	//este creat un nou vector cu elementele care indeplinesc acea conditie
}

struct Depozit getPrimulElementConditionat(struct Depozit* vector, int nrElemente, const char* conditie) {
	//trebuie cautat elementul care indeplineste o conditie
	//dupa atributul de tip char*. Acesta este returnat.
	struct Depozit s;
	s.id = 1;

	return s;
}
	


int main() {

	struct Depozit depozit = initializare(1, 34.3, 70, "Emag", 'A');
	afisare(depozit);

	int nrDepozite = 4;
	Depozit* vector = (Depozit*)malloc(sizeof(Depozit) * nrDepozite);
		vector[0] = initializare(2, 34, 45, "DPD", 'B');
		vector[1] = initializare(3, 35, 89, "Amazon", 'A');
		vector[2] = initializare(4, 70, 89, "DSC", 'A');
		vector[3] = initializare(5, 60, 67, "Emag", 'A');

		afisareVector(vector, nrDepozite);

	return 0;
}