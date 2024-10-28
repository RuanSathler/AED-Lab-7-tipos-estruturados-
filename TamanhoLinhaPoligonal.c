#include<stdio.h>
#include<math.h>

typedef struct ponto {
    float x,y;
}ponto;

/*funcioan inicializando o contador com o segundo elemento do vetor de coordenadas
depois calcula a distancia dele com o primeiro elemento, em seguida calcula a distancia entre o 3 e o seguno
ao juntar as distancias de todos as coordenadas na variavel distancia temos o tamanho total*/
float comprimento(int n, ponto *v){
  int cont;
  float distancia=0;

  for(cont=1; cont<n; cont++){
    distancia += sqrt(((v[cont-1].x - v[cont].x) * (v[cont-1].x - v[cont].x)) +
                     ((v[cont-1].y - v[cont].y) * (v[cont-1].y - v[cont].y)));
  }

  return distancia;
}

int main(void){
  int tamanhoLinha, cont;
  scanf("%d", &tamanhoLinha);

  ponto ponto[tamanhoLinha];
  
  for(cont=0; cont<tamanhoLinha; cont++){
    scanf("%f %f", &ponto[cont].x, &ponto[cont].y);    
  }

  printf("%.2f", comprimento(tamanhoLinha, ponto));

  return 0;
}
