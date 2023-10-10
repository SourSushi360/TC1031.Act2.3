/*  Node.hpp
    Jean Paul López Pándura A01637266
    
    ultima modificación: 10/10/2023
    Un archivo header que crea un nodo para la clase lista, cada nodo tiene:}
    - un puntero al siguiente nodo
    - un string */
#ifndef NODE_HPP
#define NODE_HPP

#include <string>
#include <sstream>
class Node {
    public:
        // atributos
        std::string *text;
        Node *next,*prev;
        // constructor
        Node();
        Node(Node *prev,Node *next);
        // extra
        bool operator>(Node *ptr);
};

#endif /* NODE_HPP */