//
//  main.cpp
//  CicloFOR
//
//  Created by Gustavo Méndez on 13/02/24.
//

#include <iostream>

int x=0;
int nTabla=0;

int main(int argc, const char * argv[]) {
    
    std::cout << "Ingrese tabla de multiplicar \n";
    std::cin >> nTabla;
    for (x=0;x<=10;x++)
     std::cout << x << "X" << nTabla <<"=" <<x*nTabla<<"\n";
    return 0;
}
