/*  Jean Paul López Pándura A01637266
    
    ultima modificación: 10/10/2023
    definición de clase Lista */
#include "List.hpp"

// constructor
List::List() {
    this->head = NULL;
    this->tail = NULL;
}

/*  add recibe un pointer a un nodo y no regresa nada, más lo coloca en un lugar
    ordenado dentro de la lista */
void List::add(Node *ptr) {
    if (this->head == NULL) {
        this->head = ptr;
        this->tail = ptr;
    } else {
        Node *aux = head;
        while (true){
            if (aux > ptr){
                aux = aux->next;
            } else {
                
            }
        }
    }
}
