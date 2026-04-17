//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//trebuie sa folositi fisierul masini.txt
//sau va creati un alt fisier cu alte date
//
//struct StructuraMasina {
//	int id;
//	int nrUsi;
//	float pret;
//	char* model;
//	char* numeSofer;
//	unsigned char serie;
//};
//typedef struct StructuraMasina Masina;
//
//creare structura pentru un nod dintr-o lista dublu inlantuita
//
//creare structura pentru Lista Dubla 
//
//Masina citireMasinaDinFisier(FILE* file) {
//	char buffer[100];
//	char sep[3] = ",\n";
//	fgets(buffer, 100, file);
//	char* aux;
//	Masina m1;
//	aux = strtok(buffer, sep);
//	m1.id = atoi(aux);
//	m1.nrUsi = atoi(strtok(NULL, sep));
//	m1.pret = atof(strtok(NULL, sep));
//	aux = strtok(NULL, sep);
//	m1.model = malloc(strlen(aux) + 1);
//	strcpy_s(m1.model, strlen(aux) + 1, aux);
//
//	aux = strtok(NULL, sep);
//	m1.numeSofer = malloc(strlen(aux) + 1);
//	strcpy_s(m1.numeSofer, strlen(aux) + 1, aux);
//
//	m1.serie = *strtok(NULL, sep);
//	return m1;
//}
//
//void afisareMasina(Masina masina) {
//	printf("Id: %d\n", masina.id);
//	printf("Nr. usi : %d\n", masina.nrUsi);
//	printf("Pret: %.2f\n", masina.pret);
//	printf("Model: %s\n", masina.model);
//	printf("Nume sofer: %s\n", masina.numeSofer);
//	printf("Serie: %c\n\n", masina.serie);
//}
//
//void afisareListaMasini(/*lista dubla de masini*/) {
//	afiseaza toate elemente de tip masina din lista dublu inlantuita
//	prin apelarea functiei afisareMasina()
//}
//
//void adaugaMasinaInLista(/*lista dubla de masini*/ Masina masinaNoua) {
//	adauga la final in lista primita o noua masina pe care o primim ca parametru
//}
//
//void adaugaLaInceputInLista(/*lista dubla de masini*/ Masina masinaNoua) {
//	adauga la inceputul listei dublu inlantuite o noua masina pe care o primim ca parametru
//}
//
//void* citireLDMasiniDinFisier(const char* numeFisier) {
//	functia primeste numele fisierului, il deschide si citeste toate masinile din fisier
//	prin apelul repetat al functiei citireMasinaDinFisier()
//	ATENTIE - la final inchidem fisierul/stream-ul
//}
//
//void dezalocareLDMasini(/*lista dubla de masini*/) {
//	sunt dezalocate toate masinile si lista dublu inlantuita de elemente
//}
//
//float calculeazaPretMediu(/*lista de masini*/) {
//	calculeaza pretul mediu al masinilor din lista.
//	return 0;
//}
//
//void stergeMasinaDupaID(/*lista masini*/ int id) {
//	sterge masina cu id-ul primit.
//	tratati situatia ca masina se afla si pe prima pozitie, si pe ultima pozitie
//}
//
//char* getNumeSoferMasinaScumpa(/*lista dublu inlantuita*/) {
//	cauta masina cea mai scumpa si 
//	returneaza numele soferului acestei maasini.
//	return NULL;
//}
//
//int main() {
//
//
//	return 0;
//}
//
//
///////////////////////////////////////////////////
//
//
//#include<stdio.h>
//#include<malloc.h>
//
//struct Telefon {
//	int id;
//	int RAM;
//	char* producator;
//	float pret;
//	char serie;
//};
//
//struct Telefon initializare(int id, int ram,const char* producator, float pret, char serie) {
//	struct Telefon t;
//	t.id = id;
//	t.RAM = ram;
//	t.producator = (char*)malloc(sizeof(char) * (strlen(producator) + 1));
//	strcpy_s(t.producator, strlen(producator) + 1, producator);
//	t.pret = pret;
//	t.serie = serie;
//	return t;
//}
//
//void afisare(struct Telefon t) {
//	if (t.producator != NULL) {
//		printf("%d. Telefonul %s seria %c are %d GB RAM si costa %5.2f RON.\n",
//			t.id, t.producator, t.serie, t.RAM, t.pret);
//	}
//	else {
//		printf("%d. Telefonul din seria %c are %d GB RAM si costa %5.2f RON.\n",
//			t.id, t.serie, t.RAM, t.pret);
//	}
//}
//
//void afisareVector(struct Telefon* vector, int nrElemente) {
//		for (int i = 0; i < nrElemente; i++) {
//			afisare(vector[i]);
//		}
//
//		int main() {
//			struct Telefon t;
//			t = initializare(1, 256, "Samsung", 2000.5, 'A');
//			afisare(t);
//			struct Telefon* telefoane = NULL;
//			int nrTelefoane = 3;
//			telefoane = (struct Telefon*)malloc(sizeof(struct Telefon) * nrTelefoane);
//			telefoane[0] = initializare(1, 256, "Samsung", 2000, 'S');
//			telefoane[1] = initializare(2, 512, "Motorola", 1500, 'M');
//			telefoane[2] = initializare(3, 256, "Apple", 2200, 'A');
//
//			afisareVector(telefoane, nrTelefoane);
//
//			return 0;
//		}
//		
//
//		struct Telefon* copiazaPrimeleNElemente(struct Telefon* vector, int nrElemente, int nrElementeCopiate) {
//		struct Telefon*vectorNou=NULL;
//		vectorNou = (struct Telefon*)malloc(sizeof(struct Telefon) * nrElementeCopiate);
//		for (int i = 0; i < nrElementeCopiate; i++) {
//			vectorNou[i] = vector[i];
//			vectorNou[i].producator = (char*)malloc(strlen(vector[i].producator) + 1);
//			strcpy_s(vectorNou[i].producator, strlen(vector[i].producator) + 1, vector[i].producator);
//		}
//		return vectorNou;
//	}
//
//		void dezalocare(struct Telefon** vector, int* nrElemente) {
//	for (int i = 0; i < (*nrElemente); i++) {
//		if ((*vector)[i].producator != NULL) {
//			free((*vector)[i].producator);
//		}
//	}
//	free(*vector);
//	*vector = NULL;
//	*nrElemente = 0;
//}
//		struct Telefon* copiazaPrimeleNElemente(struct Telefon* vector, int nrElemente, int nrElementeCopiate) {
//				struct Telefon*vectorNou=NULL;
//				vectorNou = (struct Telefon*)malloc(sizeof(struct Telefon) * nrElementeCopiate);
//				for (int i = 0; i < nrElementeCopiate; i++) {
//					vectorNou[i] = vector[i];
//					vectorNou[i].producator = (char*)malloc(strlen(vector[i].producator) + 1);
//					strcpy_s(vectorNou[i].producator, strlen(vector[i].producator) + 1, vector[i].producator);
//				}
//				return vectorNou;
//			}
//		void copiazaAnumiteElemente(struct Telefon* vector, char nrElemente, float pretMinim, struct Telefon** vectorNou, int* dimensiune) {
//				parametrul prag poate fi modificat in functie de 
//				 tipul atributului ales pentru a indeplini o conditie
//				este creat un nou vector cu elementele care indeplinesc acea conditie
//			struct Telefon* vectorNou = NULL;
//
//			*dimensiune = 0;
//
//			for (i=0;i<nrElemente;i++)
//			{
//				if(vectori[i]>=pretMinim)
//				{
//					(*dimensiune)++
//				}
//
//				*vectorNou=(struct Telefon)malloc(sizeof(Telefon)*dimensiune)
//
//			vectorNou = (struct Telefon*)malloc(sizeof(struct Telefon) * dimensiune);
//
//			}
//
//			void copiazaTelefoaneScumpe(struct Telefon* vector, char nrElemente, float pretMinim, struct Telefon** vectorNou, int* dimensiune) {
//	*dimensiune = 0;
//	for (int i = 0; i < nrElemente; i++) {
//		if (vector[i].pret >= pretMinim) {
//			(*dimensiune)++;
//		}
//	}
//	if ((*vectorNou) != NULL) {
//		free(*vectorNou);
//	}
//	*vectorNou = (struct Telefon*)malloc(sizeof(struct Telefon) * (*dimensiune));
//	int k = 0;
//	for (int i = 0; i < nrElemente; i++) {
//		if (vector[i].pret >= pretMinim) {
//			(*vectorNou)[k] = vector[i];
//			(*vectorNou)[k].producator = (char*)malloc(strlen(vector[i].producator) + 1);
//			strcpy_s((*vectorNou)[k].producator, strlen(vector[i].producator) + 1, vector[i].producator);
//			k++;
//		}
//	}
//}
//
//
//	/////
//
//	struct Telefon getPrimulTelefonByProducator(struct Telefon* vector, int nrElemente, const char* producator) {
//			struct Telefon t;
//			t.producator = NULL;
//			for (int i = 0; i < nrElemente; i++) {
//				if (strcmp(vector[i].producator, producator) == 0) {
//					t = vector[i];
//					t.producator = (char*)malloc(strlen(vector[i].producator) + 1);
//					strcpy_s(t.producator, strlen(vector[i].producator) + 1, vector[i].producator);
//					return t;
//				}
//			}
//			return t;
//
//
//			void change(int* x) {
//				*x = 10;   // modifies original variable
//			}
//
//			int main() {
//				int a = 5;
//				change(&a);
//			}
//
//			void change(int x) {
//				x = 10;   // modifies original variable
//			}
//
//			int main() {
//				int a = 5;
//				change(a);
//			}
