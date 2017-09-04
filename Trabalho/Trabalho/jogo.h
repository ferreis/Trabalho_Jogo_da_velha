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
}


#endif 

