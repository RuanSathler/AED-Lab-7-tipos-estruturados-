#include<stdio.h>

struct vetor{
  float x,y,z;
} typedef vetor;

void caclculaEscalar(vetor *v1, vetor *v2){
  printf("%.2f", (v1->x*v2->x + v1->y*v2->y + v1->z*v2->z));
}

int main(void){
  vetor vet1, vet2;

  scanf("%f %f %f",&vet1.x, &vet1.y, &vet1.z);
  scanf("%f %f %f",&vet2.x, &vet2.y, &vet2.z);

  caclculaEscalar(&vet1, &vet2);
  
  return 0;
}
