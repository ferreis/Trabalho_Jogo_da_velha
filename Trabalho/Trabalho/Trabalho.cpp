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
	int selecao, jogadorX, jogadorO, vencedornumb;
	int  turno = 0;
	bool vencedor = false;
	bool fim = false;
	do{
	cout << "1-Player vs Player" << endl;
	cout << "2-Player vs CPU" << endl;
	cout << "3-Sair" << endl;
	cin >> selecao;
		switch (selecao)
		{
		case 1:
			do {
				system("cls");
				InterfacedoJogo(jogodavelha);

				if (vencedor == false) {
					cout << "vez do Jogador X" << endl;
					cin >> jogadorX;
					jogoX(verificadorjogodavelha, jogodavelha, jogadorX);
					turno++;
				}

				system("cls");	
				vencedornumb = verificado(verificadorjogodavelha, turno);
				InterfacedoJogo(jogodavelha);
				
				if (vencedornumb == 1) { vencedor = true; }
				if (vencedor == false) {
					cout << "vez do Jogador O" << endl;
					cin >> jogadorO;
					jogoO(verificadorjogodavelha, jogodavelha, jogadorO);
					turno++;
				}

				system("cls");
				vencedornumb = verificado(verificadorjogodavelha, turno);
				InterfacedoJogo(jogodavelha);

				if (vencedornumb == 1) { vencedor = true; }
			} while (vencedor == false);
			break;
		case 2:
			
			break;
		case 3:
			fim = true;
			break;
		default:
			cout << "Numero digitado invalido";
			break;
		}
	}while (fim == false);
	return 0;
}
