#include <stdio.h>
#include <stdlib.h>

unsigned char meses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

typedef struct data {
    unsigned char dias, mes;
    short unsigned ano;
} data;

int diasNoAno(data data){
  int cont, dias = data.dias;

  for(cont=0; cont<data.mes-1; cont++){
    dias += meses[cont];
  }

  return dias;
}

int DiasAnosAnteriores(data data){
  int cont, totalDias = 0;

  for(cont =0; cont<data.ano; cont++){
    totalDias += 365;
  }

  totalDias += diasNoAno(data);
  return totalDias;
}

//funciona transformando as datas em dias, não e muito eficiente se as datas fotes longas como 2017
//mas serve neste exemplo onde as dtas sao peguenas como 17 ou 18
int DiasPassados(data d1, data d2){
  int dias1 = DiasAnosAnteriores(d1);
  int dias2 = DiasAnosAnteriores(d2);

  return abs(dias1-dias2);

  
}

int main(void) {
  int qntDatas, qntOperacoes, cont, dataInit, dataFim;

  scanf("%d", &qntDatas);

  data datas[qntDatas];

  for(cont=0; cont<qntDatas; cont++){
    scanf("%hhu/%hhu/%hu", &datas[cont].dias, &datas[cont].mes, &datas[cont].ano);
  }

  scanf("%d", &qntOperacoes);

  for(cont=0; cont<qntOperacoes; cont++){
    scanf("%d %d", &dataInit, &dataFim);
    printf("%d\n",  DiasPassados(datas[dataInit], datas[dataFim]));
  }
  
  return 0;
  
}
