#include <math.h>
#include <stdio.h>

typedef struct ponto{
  float x, y;

} ponto;

typedef struct circulo{
  ponto c;
  float r;

} circulo;

int intersecao(circulo *circulo1, circulo *circulo2){
  //distanciaEntreosCentros recebe a distancia entre os centros dos circulos, se essa distancia for 
  //igual ou menor isso quer dizer que os circulos se interceptam
  float distanciaEntreosCentros = sqrt(((circulo1->c.x - circulo2->c.x) * (circulo1->c.x - circulo2->c.x)) +
                                      ((circulo1->c.y - circulo2->c.y) * (circulo1->c.y - circulo2->c.y)));

  if((circulo1->r + circulo2->r)>=distanciaEntreosCentros) return 1;
  else return 0;
  
}

int main(void){
  circulo circulo1, circulo2;

  scanf("%f %f %f", &circulo1.c.x, &circulo1.c.y, &circulo1.r);
  scanf("%f %f %f", &circulo2.c.x, &circulo2.c.y, &circulo2.r);

  printf("%d", intersecao(&circulo1, &circulo2));
  


  return 0;
}
