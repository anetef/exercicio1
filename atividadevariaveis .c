#include <stdio.h>

int main(void) {
  char nome[50];
  int idade;
  int matricula[16];
  char endereco[100];
  char curso[50];
  int periodo;
  char disciplinas[50];
  float mensalidade;
  
  printf("_________");
  printf("Cadastro de aluno");
  printf("_________");
 
  printf("\n Nome: ");
  scanf("%d",&idade );
  fflush(stdin);

  printf("\n Matricula: "); 
  fgets(matricula,16,stdin); 
  fflush(stdin);
  
  printf("\n Endereco: "); 
  fgets(endereco,100,stdin); 
  fflush(stdin);

  printf("\n Curso: "); 
  fgets(curso,50,stdin); 
  fflush(stdin);

  printf("\n Periodo: ");
  scanf("%d",&periodo );
  fflush(stdin);

  printf("\n Disciplinas: "); 
  fgets(disciplinas,50,stdin); 
  fflush(stdin);

  printf("\n Mensalidade: ");
  scanf("%f",&mensalidade );
  fflush(stdin);

  printf("_________");
  printf("Dados Cadastrados");
  printf("_________");
 

 printf("\n Nome: %s", nome);
 printf("\n Idade: %d",idade);
 printf("\n Matricula: %s", matricula);
 printf("\n Endereco: %s", endereco);
 printf("\n curso: %s", curso);
 printf("\n periodo: %i", periodo);
 printf("\n Disciplinas: %s", disciplinas);
 printf("\n Mensalidade: %.lf", mensalidade);
}