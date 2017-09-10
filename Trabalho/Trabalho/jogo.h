#pragma once
#ifndef jogo_h
#define jogo_h
#define TAMANHO 4

void InterfacedoJogo(char jogodavelha[TAMANHO][TAMANHO]) 
{	
	jogodavelha[1][0] = '1';
	jogodavelha[2][0] = '2';
	jogodavelha[3][0] = '3';
	jogodavelha[0][1] = '1';
	jogodavelha[0][2] = '2';
	jogodavelha[0][3] = '3';
	for (int linha = 0; linha < TAMANHO; linha++) {
		for (int coluna = 0; coluna < TAMANHO; coluna++) {
			std::cout << "|";
			std::cout << jogodavelha[linha][coluna];
		}
		std::cout << "|" << std::endl;
	}
}
void jogoX(int verificadorjogodavelha[TAMANHO][TAMANHO], char jogodavelha[TAMANHO][TAMANHO], int jogadorX) {
	switch (jogadorX)
		{
		case 11:
			if (verificadorjogodavelha[1][1] != 2) {
				jogodavelha[1][1] = 'X';
				verificadorjogodavelha[1][1] = 1;
			}
			break;
		case 12:
			if (verificadorjogodavelha[1][2] != 2) {
				jogodavelha[1][2] = 'X';
				verificadorjogodavelha[1][2] = 1;
			}
			break;
		case 13:
			if (verificadorjogodavelha[1][3] != 2) {
				jogodavelha[1][3] = 'X';
				verificadorjogodavelha[1][3] = 1;
			}
			break;
		case 21:
			if (verificadorjogodavelha[2][1] != 2) {
				jogodavelha[2][1] = 'X';
				verificadorjogodavelha[2][1] = 1;
			}
			break;
		case 22:
			if (verificadorjogodavelha[2][2] != 2) {
				jogodavelha[2][2] = 'X';
				verificadorjogodavelha[2][2] = 1;
			}
			break;
		case 23:
			if (verificadorjogodavelha[2][3] != 2) {
				jogodavelha[2][3] = 'X';
				verificadorjogodavelha[2][3] = 1;
			}
			break;
		case 31:
			if (verificadorjogodavelha[3][1] != 2) {
				jogodavelha[3][1] = 'X';
				verificadorjogodavelha[3][1] = 1;
			}
			break;
		case 32:
			if (verificadorjogodavelha[3][2] != 2) {
				jogodavelha[3][2] = 'X';
				verificadorjogodavelha[3][2] = 1;
			}
			break;
		case 33:
			if (verificadorjogodavelha[3][3] != 2) {
				jogodavelha[3][3] = 'X';
				verificadorjogodavelha[3][3] = 1;
			}
			break;
		default:
			std::cout << "cordernadas digitado invalido";
			break;
	}
}
void jogoO(int verificadorjogodavelha[TAMANHO][TAMANHO], char jogodavelha[TAMANHO][TAMANHO], int jogadorO) {

		switch (jogadorO)
		{
		case 11:
			if (verificadorjogodavelha[1][1] != 1) {
				jogodavelha[1][1] = 'O';
				verificadorjogodavelha[1][1] = 2;
			}
			break;
		case 12:
			if (verificadorjogodavelha[1][2] != 1) {
				jogodavelha[1][2] = 'O';
				verificadorjogodavelha[1][2] = 2;
			}
			break;
		case 13:
			if (verificadorjogodavelha[1][3] != 1) {
				jogodavelha[1][3] = 'O';
				verificadorjogodavelha[1][3] = 2;
			}
			break;
		case 21:
			if (verificadorjogodavelha[2][1] != 1) {
				jogodavelha[2][1] = 'O';
				verificadorjogodavelha[2][1] = 2;
			}
			break;
		case 22:
			if (verificadorjogodavelha[2][2] != 1) {
				jogodavelha[2][2] = 'O';
				verificadorjogodavelha[2][2] = 2;
			}
			break;
		case 23:
			if (verificadorjogodavelha[2][3] != 1) {
				jogodavelha[2][3] = 'O';
				verificadorjogodavelha[2][3] = 2;
			}
			break;
		case 31:
			if (verificadorjogodavelha[3][1] != 1) {
				jogodavelha[3][1] = 'O';
				verificadorjogodavelha[3][1] = 2;
			}
			break;
		case 32:
			if (verificadorjogodavelha[3][2] != 1) {
				jogodavelha[3][2] = 'O';
				verificadorjogodavelha[3][2] = 2;
			}
			break;
		case 33:
			if (verificadorjogodavelha[3][3] != 1) {
				jogodavelha[3][3] = 'O';
				verificadorjogodavelha[3][3] = 2;
			}
			break;
		default:
			std::cout << "cordernadas digitado invalido";
			break;
		
	}
}
int verificado(int verificadorjogodavelha[TAMANHO][TAMANHO], int turno)
{
	// vencador horizontal X
	if (verificadorjogodavelha[1][1] == 1 && verificadorjogodavelha[1][2] == 1 && verificadorjogodavelha[1][3] == 1) {
		std::cout << "Vencedor e jogardor X" << std::endl;
		system("pause");
		return 1;
	}
	else if (verificadorjogodavelha[2][1] == 1 && verificadorjogodavelha[2][2] == 1 && verificadorjogodavelha[2][3] == 1) {
		std::cout << "Vencedor e jogardor X" << std::endl;
		system("pause");
		return 1;
	}
	else if (verificadorjogodavelha[3][1] == 1 && verificadorjogodavelha[3][2] == 1 && verificadorjogodavelha[3][3] == 1) {
		std::cout << "Vencedor e jogardor X" << std::endl;
		system("pause");
		return 1;
	}
	// vencedor Vertical X
	else if (verificadorjogodavelha[1][1] == 1 && verificadorjogodavelha[2][1] == 1 && verificadorjogodavelha[3][1] == 1) {
		std::cout << "Vencedor e jogardor X" << std::endl;
		system("pause");
		return 1;
	}
	else if (verificadorjogodavelha[1][2] == 1 && verificadorjogodavelha[2][2] == 1 && verificadorjogodavelha[3][2] == 1) {
		std::cout << "Vencedor e jogardor X" << std::endl;
		system("pause");
		return 1;
	}
	else if (verificadorjogodavelha[1][3] == 1 && verificadorjogodavelha[2][3] == 1 && verificadorjogodavelha[3][3] == 1) {
		std::cout << "Vencedor e jogardor X" << std::endl;
		system("pause");
		return 1;
	}
	// vencedor Diagonal X
	else if (verificadorjogodavelha[1][1] == 1 && verificadorjogodavelha[2][2] == 1 && verificadorjogodavelha[3][3] == 1) {
		std::cout << "Vencedor e jogardor X" << std::endl;
		system("pause");
		return 1;
	}
	else if (verificadorjogodavelha[1][3] == 1 && verificadorjogodavelha[2][2] == 1 && verificadorjogodavelha[3][1] == 1) {
		std::cout << "Vencedor e jogardor X" << std::endl;
		system("pause");
		return 1;
	}

	// vencador horizontal O
	else if (verificadorjogodavelha[1][1] == 2 && verificadorjogodavelha[1][2] == 2 && verificadorjogodavelha[1][3] == 2) {
		std::cout << "Vencedor e jogardor O" << std::endl;
		system("pause");
		return 1;
	}
	else if (verificadorjogodavelha[2][1] == 2 && verificadorjogodavelha[2][2] == 2 && verificadorjogodavelha[2][3] == 2) {
		std::cout << "Vencedor e jogardor O" << std::endl;
		system("pause");
		return 1;
	}
	else if (verificadorjogodavelha[3][1] == 2 && verificadorjogodavelha[3][2] == 2 && verificadorjogodavelha[3][3] == 2) {
		std::cout << "Vencedor e jogardor O" << std::endl;
		system("pause");
		return 1;
	}
	// vencedor Vertical O
	else if (verificadorjogodavelha[1][1] == 2 && verificadorjogodavelha[2][1] == 2 && verificadorjogodavelha[3][1] == 2) {
		std::cout << "Vencedor e jogardor O" << std::endl;
		system("pause");
		return 1;
	}
	else if (verificadorjogodavelha[1][2] == 2 && verificadorjogodavelha[2][2] == 2 && verificadorjogodavelha[3][2] == 2) {
		std::cout << "Vencedor e jogardor O" << std::endl;
		system("pause");
		return 1;
	}
	else if (verificadorjogodavelha[1][3] == 2 && verificadorjogodavelha[2][3] == 2 && verificadorjogodavelha[3][3] == 2) {
		std::cout << "Vencedor e jogardor O" << std::endl;
		system("pause");
		return 1;
	}
	// vencedor Diagonal O
	else if (verificadorjogodavelha[1][1] == 2 && verificadorjogodavelha[2][2] == 2 && verificadorjogodavelha[3][3] == 2) {
		std::cout << "Vencedor e jogardor O" << std::endl;
		system("pause");
		return 1;
	}
	else if (verificadorjogodavelha[1][3] == 2 && verificadorjogodavelha[2][2] == 2 && verificadorjogodavelha[3][1] == 2) {
		std::cout << "Vencedor e jogardor O" << std::endl;
		system("pause");
		return 1;
	}
	if (turno == 9) {
		std::cout << "Velha, empate " << std::endl;
		system("pause");
		return 1;
	}
	return 0;
	return 0;
}

#endif 

