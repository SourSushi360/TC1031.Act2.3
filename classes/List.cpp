/*  Jean Paul López Pándura A01637266
    
    ultima modificación: 10/10/2023
    definición de clase Lista */
#include "List.hpp"

// constructor
List::List() {
    this->head = NULL;
}

// agrega un nodo a la lista en un lugar ordenado
void List::add(Node *ptr) {
    if (this->head == NULL) {
        this->head = ptr;
    } else {
        Node *aux = head;
        while (aux->next != NULL){
            aux = aux->next;
        }
    }
}
