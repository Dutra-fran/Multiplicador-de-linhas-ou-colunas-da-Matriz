#include <stdio.h>
#include <stdlib.h>

int main(void){
  unsigned int linha, coluna; // Variável da linha e da coluna da matriz
  
  printf("\nCriador: Francisco Robson");
  printf("\nInstagram: @robsondutra_");
  printf("\nGitHub: Dutra-fran");
  printf("\nMembro da Kerberos Sec!");
  printf("\n==========\n");
  
  printf("\nQuantas linha você quer para a matriz: ");
  scanf("%i", &linha);
  printf("Quantas colunas você quer para a matriz: ");
  scanf("%i", &coluna);
  printf("\n");
  
  void getMatriz(int i, int j);
  getMatriz(linha, coluna);
  
  system("pause");
  return 0;
}

void getMatriz(int i, int j){
  int matriz[i][j];
  void viewMatriz(int elemento);
  int multiplicaMatriz(int valorMatriz, int num);
  
  int elemento;
  int escolha, chooseLine, chooseColumn;
  int num;
  
  for(int linha = 0; linha < i; linha++){
    for(int coluna = 0; coluna < j; coluna++){
      printf("Qual elemento você quer para a linha %i e coluna %i: ", linha+1, coluna+1);
      scanf("%i", &matriz[linha][coluna]);
    }
  }
  
  printf("\n==========\n");
  printf("Visualizando a matriz:\n\n");
  
  for(int linha = 0; linha < i; linha++){
    for(int coluna = 0; coluna < j; coluna++){
      viewMatriz(matriz[linha][coluna]);
      
      if(coluna == (j - 1)){
        printf("\n");
      }
    }
  }
  printf("\n==========");
  
  printf("\n");
  
  do{
    printf("\nVocê deseja multiplicar a linha ou coluna?\nDigite 0 para a linha, e 1 para coluna: ");
    scanf("%i", &escolha);
    
    switch(escolha){
      case 0:
        printf("\tVocê escolheu a linha!");
        do{
          printf("\n\nAgora escolha a linha que você deseja multiplicar (sua matriz contém %i linhas): ", i);
          scanf("%i", &chooseLine);
        } while(chooseLine <= 0 && chooseLine > i);
      break;
      case 1:
        printf("\tVocê escolheu a coluna!");
        do{
          printf("\n\nAgora escolha a coluna que você deseja multiplicar (sua matriz contém %i colunas): ", j);
          scanf("%i", &chooseColumn);
        } while(chooseColumn <= 0 && chooseColumn > j);
      break;
      default:
        printf("\n\tPor favor, escolha um número que seja 0 ou 1");
    }
  } while(escolha != 0 && escolha != 1);
  printf("\n==========");
  switch(escolha){
      case 0:
        printf("\n\nQual número você deseja multiplicar a linha: ");
        scanf("%i", &num);
      break;
      case 1:
        printf("\n\nQual número você deseja multiplicar a coluna: ");
        scanf("%i", &num);
      break;
  }
  
  printf("\n");
  
  for(int linha = 0; linha < i; linha++){
    for(int coluna = 0; coluna < j; coluna++){
      if(linha == (chooseLine - 1)){
        viewMatriz(multiplicaMatriz(matriz[linha][coluna], num));
      }
      else if(coluna == (chooseColumn - 1)){
        viewMatriz(multiplicaMatriz(matriz[linha][coluna], num));
      }
      else {
        viewMatriz(matriz[linha][coluna]);
      }
      
      if(coluna == (j - 1)){
        printf("\n");
      }
    }
  }
  
  printf("\n");
}

void viewMatriz(int elemento){
  printf("%5i", elemento);
}

int multiplicaMatriz(int valorMatriz, int num){
  int multiplicacao = num * valorMatriz;
  
  return multiplicacao;
}
