#include <iostream>

using namespace std;

//int Matriz[5][5];
int cidadesVisitadas[5];
int numeroCidades = 5;
int cost = 0;
//int lin, col;
//#define lin 3
//#define col 3

int tsp(int);

int tsp(int cidade)
{
	//int i;
	//int arestaCidade = 999;
	//int mini = 999;
	//int temp;
    /**
    A variavel cidadeVisitadas ela recebe também o vetor para
    se ter uma distancia correta entre as arresta.

    **/
	//for (i = 0; i < cidadesVisitadas[i]; i++){
	//	if ((Matriz[cidade][i] != 0) && (cidadesVisitadas[i] == 0)){
	//		if (Matriz[cidade][i] < mini){
	//			mini = Matriz[i][0] + Matriz[cidade][i];
	//		}
	//		temp = Matriz[cidade][i];
	//		arestaCidade = i;
	//	}
	//}
	//if (mini != 999){
    //    cost = cost + temp;
	//}

	//return arestaCidade;
}

int receberMatriz(int matriz[lin][col]){

    //int matriz[lin][col];
    int i, j;

    /**Ler os dados de uma matriz, percorrendo a linha e
    a coluna da matriz e armazenando com as variaveis lin e col.
    **/
	cout << "\n\n Entre com as distancias da matriz...\n";
	for (i = 0; i < lin; i++){
		cout << col << " elementos em coluna " << i + 1 << "\n";
		for (j = 0; j < col; j++){
            cin >> matriz[i][j];
		}

	}

}

int lerMatriz (int matriz[lin][col]){
    int i,j;
/**Mostrar a matriz e exibir na tela essa matriz**/
	cout << "\nDistancias entre a matriz:\n";
	for (i = 0; i < lin; i++){
		cout << endl;
		for (j = 0; j < col; j++){
			cout << matriz[i][j] << " ";
		}
	}
}

int main()
{
    int lin, col;



    int matriz[lin][col];

	receberMatriz(matriz);
	lerMatriz(matriz);


    return 0;
}
