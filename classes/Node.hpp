/*  Node.hpp
    Jean Paul López Pándura A01637266
    
    ultima modificación: 10/10/2023
    Un archivo header que crea un nodo para la clase lista */
#ifndef NODE_HPP
#define NODE_HPP

#include <string>
class Node {
    public:
        // atributos
        std::string *text;
        Node *next;
        // constructor
        Node();
        Node(Node *ptr);
};

#endif /* NODE_HPP */