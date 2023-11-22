#include <stdio.h>
#include <stdlib.h>
//======================
typedef struct node{
    int num;
    struct node *next;
} node;
//======================
void AdicionarFim(node *HEAD){ //PUSH
     
     node *newnode = (node *) malloc(sizeof(node));
     if(!newnode){
        printf("Sem memoria disponivel!\n");
        system("pause");
     } else {
        newnode -> next = NULL;
        if(HEAD -> next == NULL)
        HEAD -> next = newnode;
        else {
            node *tmp = HEAD -> next;
            while(tmp -> next != NULL)
                  tmp = tmp -> next;
            tmp -> next = newnode;
        }
    printf("newnode elemento:");
    scanf("%d", &newnode -> num);
    } 
}