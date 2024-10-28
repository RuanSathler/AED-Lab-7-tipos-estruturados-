#include<math.h>
#include <stdlib.h>
#include<stdio.h>

typedef struct retangulo{
  float base, altura;
  
}ret;

typedef struct circulo{
  float raio;
} cir;

ret* RetCircunscrito(cir circulo, float altura){
  /* o retagulo circunscrito tera uma diagonal(hipotenusa) equivalente ao diametro do circulo
  podemos usar isso e a altura para descobrir a base atraves de pitagoras*/

  ret* retCircunscrito = (ret*)malloc(sizeof(ret));
  float hipotenusa = circulo.raio * 2;
  
  retCircunscrito->altura = altura;
  retCircunscrito->base = sqrt((hipotenusa * hipotenusa) - (altura * altura));

  return retCircunscrito;  
}

cir* CirCircunscrito(ret retangulo){
  //o dianmetro do maior circulo circunscrito vai ser sempre igual ao menor lado do retangulo
  
  cir *circulo = (cir*)malloc(sizeof(cir));

  //pega o menor lado do retangulo e divide por 2, assim obetemos o raior do maior circulo;
  circulo->raio = fmin(retangulo.base, retangulo.altura)/2;
  
  return circulo;
}

int main(void){

  ret *retCircunscrito, retangulo;
  cir  *cirCircunscrito, circulo;

  scanf("%f %f %f",&circulo.raio, &retangulo.base, &retangulo.altura);

  cirCircunscrito = CirCircunscrito(retangulo);
  printf("%.2f\n", cirCircunscrito->raio);
  
  retCircunscrito = RetCircunscrito(circulo, retangulo.altura);
  printf("%.2f %.2f\n", retCircunscrito->base, retCircunscrito->altura);
  
  

  return 0;
}
