#include <iostream>
using namespace std;

const int MAX_LINHAS = 3;
const int MAX_COLUNAS = 4;

/* 
  leNotas (notas, linhas, colunas)
  notas: matriz de notas com o tamanho máximo MAX_LINHAS por MAX_COLUNAS.
  linhas: quantidade de linhas da matriz notas.
  colunas: quantidade de colunas da matriz notas.
  Realiza a leitura de notas com valores de 0 até 10.
*/
void leNotas (float notas[MAX_LINHAS][MAX_COLUNAS], int linhas, int colunas) {
  for (int linha = 0; linha < linhas; linha++) {
    for (int coluna = 0; coluna < colunas; coluna++) {
      do {
        cin >> notas[linha][coluna];
      } while (notas[linha][coluna] < 0 || notas[linha][coluna] > 10);
    }
  }
}

/* 
  calculeMedias (notas, linhas, colunas, medias)
  Calcula as médias das notas por cada linha da matriz.
*/
void calculeMedias (float notas[MAX_LINHAS][MAX_COLUNAS], int linhas, int colunas, float medias[MAX_LINHAS]) {
  float soma;
  /*
  PARA cada linha da matriz EXECUTE
    a variável soma inicia com valor 0 (zero)
    PARA cada coluna da matriz EXECUTE
      soma recebe a soma anterior mais a j-ésima nota da linha
    FIM-PARA
    a média do i-ésimo aluno recebe soma dividido pela quantidade de notas
  FIM-PARA
  */
}

/* 
  mostreMedias (medias, linhas)
  Mostra as médias calculadas para cada linha da matriz.
*/
void mostreMedias (float medias[MAX_LINHAS], int linhas) {
  cout << "Medias: ";
  for (int i = 0; i < linhas; i++) {
    cout << medias[i] << " ";
  }
  cout << endl;
}

/* 
  maiorMedia (medias, linhas)
  Mostre a maior média e qual foi o aluno que obteve essa média.
*/
void maiorMedia (float medias[MAX_LINHAS], int linhas) {
  int   aluno = 0;
  float maior = medias[0];

  for (int i = 1; i < linhas; i++) {
    if (medias[i] > maior) {
      maior = medias[i];
      aluno = i;
    }
  }
  cout << "A maior media eh " << maior << " do aluno " << (aluno+1) << endl;
}

int main() {
  float notas[MAX_LINHAS][MAX_COLUNAS];
  float medias[MAX_LINHAS];

  leNotas (notas, MAX_LINHAS, MAX_COLUNAS);

  calculeMedias (notas, MAX_LINHAS, MAX_COLUNAS, medias);

  mostreMedias (medias, MAX_LINHAS);

  maiorMedia (medias, MAX_LINHAS);

  return 0;
}
