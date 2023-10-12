/*  Jean Paul López Pándura A01637266
    
    ultima modificación: 10/10/2023
    definición de clase Nodo */
#include "Node.hpp"

// constructores
Node::Node() {
    this->text = new(std::string);
    this->next = NULL;
    this->prev = NULL;
}
Node::Node(std::string string) : Node::Node() {
    *this->text = string;
}

/*  isBiggerThan recibe un pointer a un Nodo, con el cual compara el valor de la ID,
    en caso de que el ID propio sea mayor regresa true, en el caso contrario false */
bool Node::isBiggerThan(Node *ptr) {
    std::stringstream streamA(*ptr->text), streamB(*this->text);
    std::string ipA, ipB, auxA, auxB;
    int ipa, ipb;
    for (int i=0;i <= 3;i++){
        std::getline(streamA,ipA,' ');
    }
    for (int i=0;i <= 3;i++){
        std::getline(streamB,ipB,' ');
    }
    std::stringstream IPa(ipA),IPb(ipB);
    for (int i = 0;i < 3;i++){
        std::getline(IPa,auxA,'.');
        std::getline(IPb,auxB,'.');
        ipa = stoi(auxA);
        ipb = stoi(auxB);
        if (ipa < ipb){
            return true;
        } else if (ipa > ipb){
            return false;
        }
    }

    std::getline(IPa,auxA,':');
    std::getline(IPb,auxB,':');
    if (ipa < ipb){
            return true;
    } else {
        return false;
    }
}
