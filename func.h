#include <stdbool.h>


typedef struct node node;

struct node** create_graph_start(int);


void create_list_adj_start(struct node**, int, int (*)[],int*);

void create_list_adj(struct node**, int, int (*)[]);

