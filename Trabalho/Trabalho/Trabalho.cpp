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
	bool vencedor = false, jogadavalida;
	bool fim = false;
	do{
	system("cls");
	cout << "1-Player vs Player" << endl;
	cout << "2-Player vs CPU" << endl;
	cout << "3-Limpar" << endl;
	cout << "4-Sair" << endl;
	cin >> selecao;
		switch (selecao)
		{
		case 1:
			vencedor = false;
			do {
				system("cls");
				InterfacedoJogo(jogodavelha);

				if (vencedor == false) {
					jogadavalida = false;
					cout << "vez do Jogador X" << endl;
					do {
						cin >> jogadorX;
						jogoX(verificadorjogodavelha, jogodavelha, jogadorX, jogadavalida);
					} while (jogadavalida == false);
					turno++;
				}

				system("cls");	
				vencedornumb = verificado(verificadorjogodavelha, turno);
				InterfacedoJogo(jogodavelha);
				
				if (vencedornumb == 1) { vencedor = true; }
				if (vencedor == false) {
					jogadavalida = false;
					cout << "vez do Jogador O" << endl;
					do {
						cin >> jogadorO;
						jogoO(verificadorjogodavelha, jogodavelha, jogadorO, jogadavalida);
					} while (jogadavalida == false);
					turno++;
				}

				system("cls");
				vencedornumb = verificado(verificadorjogodavelha, turno);
				InterfacedoJogo(jogodavelha);

				if (vencedornumb == 1) { vencedor = true; }

			
			} while (vencedor == false);
			system("pause");
			break;
		case 2:
			do {
				system("cls");
				InterfacedoJogo(jogodavelha);

				if (vencedor == false) {
					jogadavalida = false;
					cout << "vez do Jogador X" << endl;
					do {
					cin >> jogadorX;
					jogoX(verificadorjogodavelha, jogodavelha, jogadorX, jogadavalida);
					} while (jogadavalida == false);
					turno++;
				}

				system("cls");
				vencedornumb = verificado(verificadorjogodavelha, turno);
				InterfacedoJogo(jogodavelha);

				if (vencedornumb == 1) { vencedor = true; }

				if (vencedor == false) {
					jogadavalida = false;
					do {
						jogadorO = numeroAleatorio();
						BotO(verificadorjogodavelha, jogodavelha, jogadorO, jogadavalida);
					} while (jogadavalida == false);
					turno++;
				}

				system("cls");
				vencedornumb = verificado(verificadorjogodavelha, turno);
				InterfacedoJogo(jogodavelha);

				if (vencedornumb == 1) { vencedor = true; }

			} while (vencedor == false);
			break;
		case 3:
			for (int linha = 0; linha < TAMANHO;linha++) {
				for (int coluna = 0; coluna < TAMANHO; coluna++) {
					jogodavelha[linha][coluna] = NULL;
					verificadorjogodavelha[linha][coluna] = NULL;
				}
			}
			break;
		case 4:
			fim = true;
			break;
		default:
			cout << "Numero digitado invalido";
			break;
		}
	} while (fim == false);
	return 0;
}
