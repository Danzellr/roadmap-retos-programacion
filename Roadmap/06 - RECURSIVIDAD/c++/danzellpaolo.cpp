/*
 * EJERCICIO:
 * Entiende el concepto de recursividad creando una función recursiva que imprima
 * números del 100 al 0.
 *
 * DIFICULTAD EXTRA (opcional):
 * Utiliza el concepto de recursividad para:
 * - Calcular el factorial de un número concreto (la función recibe ese número).
 * - Calcular el valor de un elemento concreto (según su posición) en la
 *   sucesión de Fibonacci (la función recibe la posición).
 */

 #include <bits/stdc++.h>
 #pragma GCC target("avx2")
 #pragma GCC optimize("Ofast")
 using namespace std;
int dato;
 void numeros100(int a){
    if(a>=0) {
        cout<<a<<" ";
        numeros100(a-1);
    }else {
        return;
    }
}

int facto(int a){

    if(a<=1){
        return 1;
    }

    return a * facto(a-1);
}
int fibo(int a){
     if(a <= 1 ){
        return 1;
     }

    return fibo(a-1) + fibo(a-2);
}


int main(){
    //numeros del 100 al 0
numeros100(100);
cout<<endl;
//factorial de un numero
cout<<facto(5);

// fibonacci
cout<<endl;
cout << fibo(5);

}
