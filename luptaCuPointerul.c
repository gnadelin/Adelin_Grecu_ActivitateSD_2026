#include<stdio.h>
#include<malloc.h>

int main() {

  
    //de ce sunt necesari pointerii:
    //in c totul trece prin valori, asa ca ai nevoie de pointeri ca sa modifici originalul
    // //atunci cand nu stii dimensiunea
    //pt a evita copierea structurilor mari si a arrayurilor
    //stringurile sunt pointeri
    //arrayurile devin pointeri
    //fisiere, struncturi inlantuite

    int x = 5;       // Create an integer variable x and store the value 5 in it.

    int* px = &x;    // Create a pointer to int named px and set it to the memory address of x.

    int y = *px;     // Create an integer y and set it to the value stored at the address px points to.

    int** ppx = &px; // help me with the same type of comments
    
   *px = 7;

   int* px = 10;

  //  int** ppx = &px;

    //ce se intampla daca asignez direct cu *px=7
    //de ce e neaparat nevoie sa folosesc pointer to pointer
    //by ref by value

    printf("x = %d\n", x);
    printf("&x = %d\n", &x);


    printf("*px = %d\n", *px);
    printf("px = %d\n", px);
    printf("&px = %d\n", &px);
    printf("&*px = %d\n", &*px);

    printf("**ppx = %d\n", **ppx);
    printf("ppx = %d\n", ppx);
    printf("&ppx = %d\n", &ppx);
    printf("&**ppx = %d\n", &**ppx);

}
    
//
//    printf("pp = %d\n", pp);
//    printf("&pp = %d\n", &pp);
//
//    printf("**pp = %d\n", **pp);
//    printf("&**pp = %d\n", &**pp);
//
//
//
//   /*
//    
//    int* p = &x;
//   
//   // int** pp = &p;
//        
//   /*printf("x = %d\n", x);
//   // printf("*x = %d\n", *x);
//    printf("&x = %d\n", &x);
//
//    printf("*p = %d\n", *p);
//    printf("*p = %d\n", &*p);
//
//    printf("**pp = %d\n", **pp);
//    printf("**pp = %d\n", &**pp);
//
//    /*
//int a = 5;
//int *p = &a;
//int **pp = &p;
//
//a   = 5           (value: 5)
//p   = &a          (value: address of a)
//*p  = 5           (value at address p)
//pp  = &p          (value: address of p)
//*pp = p           (value at address pp)
//**pp = 5          (value at address stored in p)
//
//
//   
//    print("&*p=%d\n", &*p);
//    print("&pp=%d\n", &**pp);
//    print("&*pp=%d\n", &pp); */
//
//  
//
//    
//    //--printf(a);
//
//}
//
//
//
////    int main() {
////        int x = 5;
////        int* p = &x;
////        int** pp = &p;
////        
////        int a = p;
////        int b = *p;
////        int c = pp;
////        int d = *pp;
////        int e = **pp;
////        
////        int f= &*p;
////        int g=&**pp;
////
////        printf("a = %d\n", a);
////        printf("*p = %d\n", *p);
////        printf("**pp = %d\n", **pp);
////
////
////
////        printf("a = %d\n", a);
////        printf("b = %d\n", b);
////        printf("c = %d\n", c);
////        printf("d = %d\n", d);
////
////        printf("e = %d\n", e);
////        printf("f = %d\n", f);
////
////        //--printf(a);
////
////}