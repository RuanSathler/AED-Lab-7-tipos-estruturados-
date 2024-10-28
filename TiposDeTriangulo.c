#include<stdio.h>
#include<stdlib.h>

typedef struct triangulo{
  	float l1, l2, l3;

}triangulo;

int verifica_triangulo(triangulo* t){
  if(t->l1<=0 || t->l2<=0 || t->l3<=0 ||
     t->l1 + t->l2  <= t->l3 ||
     t->l1 + t->l3  <= t->l2 ||
     t->l2 + t->l3  <= t->l1){
    return 0;
  }

  if(t->l1==t->l2 && t->l2==t->l3) return 1;
  if(t->l1==t->l2 || t->l1==t->l3 || t->l2==t->l3) return 2;

  return 3;
}

int main(void) {
  int tipo;
  triangulo t;

  while(scanf("%f %f %f", &t.l1, &t.l2, &t.l3)!=EOF){
    tipo =   verifica_triangulo(&t);

    switch(tipo){
      case 0:
              printf("triangulo inexistente\n");
              continue;
      case 1:
              printf("triangulo equilatero\n");
              continue;
      case 2:
              printf("triangulo isosceles\n");
              continue;
      case 3:
              printf("triangulo escaleno\n");
              continue;      
    }  
  }

  return 0;
  
}
