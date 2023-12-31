/*  List.hpp
    Jean Paul López Pándura A01637266
    
    ultima modificación: 10/10/2023
    Un archivo header que crea una lista de nodos y los ordena al introducir
    un nodo nuevo */
#ifndef LIST_HPP
#define LIST_HPP

#include "Node.hpp"
class List {
    private:
        // atributos
        Node *head;
        Node *tail;
    public:
        // constructor
        List();
        // manipulación de nodos
        void add(std::string string);
        // extra
        void print(std::string start, std::string end);
};

#endif /* LIST_HPP */