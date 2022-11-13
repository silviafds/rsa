#include <iostream>
#include <math.h>
#include <vector>
#include <stdio.h>
using namespace std;

void validaNumerosPrimos(int primoUm, int primoDois);
bool eh_primo(int numero);
int produtoPrimos();
int PrimoUmGlobal = 0, PrimoDoisGlobal = 0;

void preenchePrimos() {
    int primoUm, primoDois;
    cout << "Entre com dois numeros entre 2 e 100000 primos \n" << endl;
    cout << "Entre com o primeiro numero primo: \n" << endl;
    cin >> primoUm;

    cout << "Entre com o segundo numero primo: \n" << endl;
    cin >> primoDois;

    validaNumerosPrimos(primoUm, primoDois);
}

void validaNumerosPrimos(int primoUm, int primoDois) {
    bool validaPrimoUm = eh_primo(primoUm);
    bool validaPrimoDois = eh_primo(primoDois);

    if(validaPrimoUm == true && validaPrimoDois == true) {
        cout << "Os dois números digitados são primos" << endl;
        PrimoUmGlobal = primoUm;
        PrimoDoisGlobal = primoDois;
    } 
    if ( validaPrimoUm == true && validaPrimoDois == false ) {
        cout << "O segundo numero informado nao e primo, o sistema ira usar o numero primo 11";
        PrimoUmGlobal = primoUm;
        PrimoDoisGlobal = 11;
    } 
    if (validaPrimoUm == false && validaPrimoDois == true) { 
        cout << "O primeiro numero informado nao e primo, o sistema ira usar o numero primo 53";
        PrimoUmGlobal = 53;
        PrimoDoisGlobal = primoDois;
    } 
    if (validaPrimoUm == false && validaPrimoDois == false) {
        cout << "Os numeros informados nao sao primos, o sistema ira usar os numeros primos 1001 e 3995";
        PrimoUmGlobal = 1001;
        PrimoDoisGlobal = 3995;
    }
}

bool eh_primo(int numero) {
    int eh_primo = true;
    for(int i=2;i<numero;i++) {
        if(numero % i == 0) {
            eh_primo = false;
        }
    }
    return eh_primo;
}

int produtoPrimos() {
    return PrimoUmGlobal*PrimoDoisGlobal;
}

int main(int argc, char *argv[]) {
    
    preenchePrimos();
    int produtoDosPrimos = produtoPrimos();

    return 0;
}

