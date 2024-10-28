#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno {
  char nome[81];
  char matricula[8];
  char turma;
  float p1, p2, p3;
  float media;
} aluno;

void ImprimeAluno(aluno aluno){
  printf("%s \n%s \n%c \n%.2f \n", aluno.nome, aluno.matricula, aluno.turma, aluno.media);
}

void imprime_aprovado(int n, aluno** turma){
  int cont;

  for(cont=0; cont<n; cont++){
    if(turma[cont]->media>=7) ImprimeAluno(*turma[cont]);
  }
  
}

int main(void){
  int cont, qntAluno;
  scanf("%d", &qntAluno);
  
  aluno **alunos = (aluno **)malloc(qntAluno * sizeof(aluno*));

  for(cont=0; cont<qntAluno; cont++){
    alunos[cont] = (aluno* )malloc(sizeof(aluno));

    scanf("%s", alunos[cont]->nome);
    scanf("%s", alunos[cont]->matricula);
    scanf(" %c", &alunos[cont]->turma);
    scanf("%f %f %f", &alunos[cont]->p1, &alunos[cont]->p2, &alunos[cont]->p3);

    alunos[cont]->media = (alunos[cont]->p1 + alunos[cont]->p2 + alunos[cont]->p3)/3;
  }


  imprime_aprovado(qntAluno, alunos);
  
  return 0;
}
