/*  Jean Paul López Pándura A01637266
    
    ultima modificación: 10/10/2023
    declaración de clase Nodo */
#include "Node.hpp"

// constructores
Node::Node() {
    this->text = new(std::string);
    this->next = NULL;
}
Node::Node(Node *ptr):Node::Node() {
    this->next = ptr;
}
