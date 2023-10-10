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
void List::add(std::string string) {
int cc = 0;
    Node *ptr = new Node(string);
    if (this->head == NULL) {
        this->head = ptr;
        this->tail = ptr;
    } else {
        Node *temp = head;
        while (true){
            if (temp->compare(ptr)){
                temp = temp->next;
            } else if (temp->next == NULL){
                temp->next = ptr;
                ptr->prev = temp;
                tail = ptr;
                break;
            } else {
                ptr->prev = temp->prev;
                ptr->next = temp->next;
                ptr->prev->next = ptr;
                break;
            }
        }
    }
}

/*  print no recibe ni regresa nada, solo imprime en orden los elementos de la lista */
void List::print() {
    Node *aux = head;
    while (aux != NULL){
        std::cout << *aux->text << std::endl;
        aux = aux->next;
    }
}
