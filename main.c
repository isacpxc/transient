#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "func.h"

int main () {
  node** graph;
  int vertices = 4;
  int states[vertices];
  printf("vertices: ");
  scanf("%d", &vertices);

  int adj_m[vertices][vertices];

  adj_m[0][0] = 0;
  adj_m[0][1] = 0;
  adj_m[0][2] = 0;
  adj_m[0][3] = 1;
  adj_m[1][0] = 1;
  adj_m[1][1] = 0;
  adj_m[1][2] = 0;
  adj_m[1][3] = 0;
  adj_m[2][0] = 0;
  adj_m[2][1] = 1;
  adj_m[2][2] = 0;
  adj_m[2][3] = 0;
  adj_m[3][0] = 0;
  adj_m[3][1] = 1;
  adj_m[3][2] = 1;
  adj_m[3][3] = 0;


  for (size_t i = 0; i<vertices;i++){
      if (i%2 == 0) states[i] = 0;
      else states[i] = 1;
  }

  /*for (size_t i = 0; i<vertices;i++){
    for (size_t j = 0; j < vertices; j++)
    {
      adj_m[i][j] = 0;
    }
  }*/

    /*for (size_t i = 0; i<vertices;i++){
      for (size_t j = 0; j < vertices; j++)
      {
        printf("%d <- %d: ", i,j);
        scanf("%d", &adj_m[i][j]);
      }
    }*/

    printf("\nMatrix:\n\n");

    for (size_t i = 0; i<vertices;i++){
      for (size_t j = 0; j < vertices; j++)
      {
        printf("%d ", adj_m[i][j]);
      }
      printf("\n");
    }


  // criar lista apenas para os vértices que tem vizinhança de entrada

  graph = create_graph_start(vertices);
  create_list_adj_start(graph, vertices, adj_m,states);
  create_list_adj(graph,vertices,adj_m);
  //test(graph, vertices);


  //create_list(graph,vertices,adj_m);


}
