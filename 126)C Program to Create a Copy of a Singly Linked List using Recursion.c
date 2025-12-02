#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node *next; };

struct Node* copyList(struct Node* h) {
    if(!h) return NULL;
    struct Node* n = malloc(sizeof(struct Node));
    n->data = h->data;
    n->next = copyList(h->next);
    return n;
}

int main() {
    struct Node *h = malloc(sizeof(struct Node)), *c;
    h->data=1; h->next=malloc(sizeof(struct Node));
    h->next->data=2; h->next->next=NULL;

    for(c=copyList(h); c; c=c->next) printf("%d ", c->data);
}