// Trabalho.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include "jogo.h"
#include <string>
using namespace std;


int main()
{
	char jogodavelha[TAMANHO][TAMANHO] = { 0 };
	int verificadorjogodavelha[TAMANHO][TAMANHO] = {0};
	int selecao, jogador, jogadorX, jogadorO, turno;
	bool vencedor = false;
	bool fim = false;
	cout << "1-Player vs Player" << endl;
	cout << "2-Player vs CPU" << endl;
	cin >> selecao;
	do{
		switch (selecao)
		{
		case 1:
			do {
				system("cls");
				InterfacedoJogo(jogodavelha);
				cout << "vez do Jogador X" << endl;
				cin >> jogadorX;
				turno++;
				jogoX(verificadorjogodavelha, jogodavelha, jogadorX);
				system("cls");
				InterfacedoJogo(jogodavelha);
				verificado(verificadorjogodavelha, vencedor, turno, selecao);
				cout << "vez do Jogador O" << endl;
				cin >> jogadorO;
				jogoO(verificadorjogodavelha, jogodavelha, jogadorO);
				system("cls");
				InterfacedoJogo(jogodavelha);
				verificado(verificadorjogodavelha, vencedor, turno, selecao);
			} while (vencedor == true);
			break;
		case 2:

			break;
		default:
			cout << "Numero digitado invalido";
			break;
		}
	
	} while (fim = false);
		system("pause");
	return 0;
}

