/*  main.cpp
    Jean Paul López Pándura 0163726
    Cared Nicolle Castaños Manjarrez A01742620
    Luis Fernando Cueevas Arroyo A01637254

    ultima modificación: 10/10/2023
    Este programa recibe un archivo de lectura bitácora.txt, lo pasa a un vector y
    lo ordena usando la dirección IP del usuario, te deja buscar dentro del vector
    a partir de una IP  que introduzca el usuario y al final guarda la bitácora
    ordenada en un archivo 'sorted.txt' */
#include <iostream>
#include <fstream>
#include "classes/List.hpp"

/* funciones que ayudan a leer el archivo */

int main() {
    // recopila los datos de la bitácora en un vector
    List lista;
    std::string line;

    // abre la bitácora
    std::ifstream bitacora ("bitacora.txt");
    
    while (getline(bitacora,line)) {
        lista.add(line);
    }

    bitacora.close();

    std::string start,end;
    std::cout << "IP de inicio\n: ";
    std::cin >> start;
    std::cout << "IP de fin\n: ";
    std::cin >> end;

    lista.print(start,end);
}