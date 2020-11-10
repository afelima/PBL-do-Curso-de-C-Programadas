/*Criar a struct “Curso” e dentro dela a struct “Proposta”.
Criar um menu (podendo ser com switch case) e representar as funções para cada opção.
Fazer a base de cada função pedida pelo problema.*/

typedef struct{
  char nome_do_curso;
}Curso;
typedef struct{
  Curso titulo;
  Curso titulo;
  Curso data;
  Curso horario;
  Curso apresentacao;
  Curso proponentes;
}

int cadastro(Curso){
  printf("Digite o nome do curso: ")
  scanf("%d", &Curso)
  printf("etc...")
}



#include <stdio.h>

int main() {
  int resposta;
  printf("O que deseja fazer? \n [1] - Cadastrar nova proposta \n [2] Mostrar quantas apresentações de cada tipo acontecerão em cada um dos dias \n [3] Mostrar qual curso tem maior representativa na Feira de Graduação. \n [4] Mostrar qual curso tem menor representativa na Feira de Graduação. [5] Mostrar todas as propostas ofertadas apenas por estudantes\n >> ")
  scanf("%d", &resposta)
  
  switch(resposta){
    case 1:
      printf("[1] Cadastrar nova proposta");
      cadastro();
    case 2:
      printf("[2] Mostrar apresentações...")
    case 3:
      printf("[3] Mostrar qual curso tem maior representativa na Feira de Graduação...")
    case 4:
      printf("[4] Mostrar qual curso tem menor representativa na Feira de Graduação")
    case 5:
      printf("[5] Mostrar todas as propostas ofertadas apenas por estudantes")
    default:
      printf("Erro, essa não é uma opção.")
      break;
  }

}