#include "func.h"
#include <stdbool.h>
#include <stdlib.h>

struct node{
  int state;
  struct node* list_next;
  int op_i_t,op_i_t1;
  int name;
};


struct node** create_graph_start(int qtd){

    struct node** graph = (struct node**)malloc(qtd*sizeof(struct node*));
    if(graph == NULL) printf("error");

    return graph;
};


void create_list_adj_start(struct node** graph,int qtd, int adj_m[][qtd],int *states){

    for (size_t i=0;i<qtd;i++){
        node* aux = (node*)malloc(sizeof(node));

        aux->list_next = NULL;
        aux->name = i;
        aux->op_i_t1 = 0;
        aux->op_i_t = -1;
        aux->state = states[i];

        for (size_t count=0;count<qtd;count++){
            if (adj_m[i][count] == 1) aux->op_i_t1++;
        }


        graph[i] = aux;

    }




}


//does not recognize multiple arrows coming form the same vertice for now
create_list_adj(struct node** graph,int qtd,int adj_m[][qtd]){
    for (int i=0;i<qtd;i++){
        int count = 0;
        for (int j=0;j<qtd;j++){


            if (adj_m[i][j] == 1){
                node* aux = (node*)malloc(sizeof(node));
                aux = graph[i];
                count++;

                while(aux->list_next != NULL){
                    aux = aux->list_next;

                }

                printf("\n\nPara v[%d] = %d vizinhos\n\n",i,count);



            }

        }
    }
}

/*
int test(struct node* graph, int qtd){
    for (int i=0;i<qtd;i++){
        printf("o %d", graph[i].name);
        printf("o %d atinge o %d", graph[i].name, graph[i].list_next->name);
    }
}

*/



