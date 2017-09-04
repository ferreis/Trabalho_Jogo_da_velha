// Trabalho.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include "jogo.h"

using namespace std;

int main()
{
	char jogodavelha[TAMANHO][TAMANHO];
	int selecao;
	cout << "1-Player vs Player << endl";
	cout << "2-Player vs CPU << endl";
	cin >> selecao;
		switch (selecao)
		{
		case 1:
			cout << jogodavelha;
			InterfacedoJogo(jogodavelha);
			break;
		case 2:

			break;
		default: 
		cout << "Numero digitado invalido";
			break;
		}
		system("pause");
	return 0;
}

