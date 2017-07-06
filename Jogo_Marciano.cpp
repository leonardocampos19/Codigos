//Leonardo Campos
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>
using namespace std;

int main()
{
	system("color e");
	bool matriz[10][10];
	int win=0,i,j,l,c,balas,continuar=1,apr;
	int a,z;
	int m;
	cout << "Introducao: Um marciano chegou a uma floresta e escondeu-se\n";
	cout << "em uma arvore das cem arvores, o cacador deve acerta-lo...\n";
	cout << "porem ele so tem 5 balas, caso nao acerte o marciano\n";
	cout << "O caçador será levado para marte.\n\n";
	cout << "Instrucoes:\n1: Indica a ultima arvore que o cacador atirou.\n";
	cout << "0: Arvore que ainda nao foi escolhida para atirar\n\n";
	cout << "Aperte qualquer tecla para continuar...\n"; getch(); system("cls");
	do
	{
		cout << "JOGO MARCIANO\n\n";
		for (i=0;i<10;i++) 	 //Populando a Matriz com valor "nulo" (0)
			for(j=0;j<10;j++)
			{
				matriz[i][j]=0;
			}
		do
		{
			cout << "MARCIANO\n\n";
			cout << "Escolha uma arvore para o Marciano se esconder...\n";
			cout << "(Modelo do Campo 10x10)\n";
			cout << "Informe a linha (0..9): ";
			cin >> i;
			cout << "Informe a coluna (0..9): ";
			cin >> j;
			l=i; //Pegando linha do Marciano
			c=j; //Pegando Coluna do Marciano
			system("cls");
			apr = 1;
			if (i > 9 || j > 9 || i < 0 || j < 0)
			{
				cout << "Somente valor entre 0 a 9!!"; getch(); system("cls");
				apr=0;
			}
		}
		while(apr==0);
		balas=5;
		do
		{
			win=0;
			if(balas > 0)
			{
				do
				{
					cout << "CACADOR\n\n";
					cout << "Balas: " << balas; cout << endl;
					cout << "Escolha uma arvore para atirar...\n";
					cout << "Informe a linha: ";
					cin >> i; //Linha Tiro
					cout << "Informe a coluna: ";
					cin >> j; //Coluna Tiro
					balas--;
					cout << endl;
					apr=1;
					matriz[i][j]= true;
					cout << setw(10) << "    0    1    2    3    4    5    6    7    8    9\n";
					for (z=0;z<=9;z++)
					{
						cout << z;
						for (a=0;a<=9;a++) //matriz[10][10]
						{
							cout << setw(3) << "[" << matriz[z][a] << "]";
							if(a==9)
							{
								cout << endl;
							}
						}							
					}
					if (i > 9 || j > 9 || i < 0 || j < 0)
					{
						system("cls");
						cout << "Somente valor entre 0 a 9!!\n"; getch(); system("cls");
						balas++;
						apr=0;
					}
				}
				while(apr==0);
				if (i == l && j == c)
				{
					system("cls");
					cout << "Marciano: Argh! Voce me acertou...\n\n";getch();
					system("cls");
					win=1;
				}
				else
				{
					cout << "\nVoce errou!!\n";getch();
					
					if(i > l && j == c)
					{
						
						cout << "Marciano: Estou para o Norte\n\n";getch();
						system("cls");
					}
					else if(i > l && j < c)
					{
						
						cout << "Marciano: Estou para o Nordeste\n\n";getch();
						system("cls");
					}
					else if(i > l && j > c)
					{
						
						cout << "Marciano: Estou para o Noroeste\n\n";getch();
						system("cls");
					}
					else if(i < l && j == c)
					{
					
						cout << "Marciano: Estou para o Sul\n\n";getch();
						system("cls");
					}
					else if(i < l && j > c)
					{
						
						cout << "Marciano: Esou para o Sudoeste\n\n";getch();
						system("cls");
					}
					else if(i < l && j < c)
					{
						
						cout << "Marciano:Estou para o Sudeste\n\n";getch();
						system("cls");
					}
					else if(i == l && j > c)
					{
					
						cout << "Marciano: Estou para o Leste\n\n";getch();
						system("cls");
					}
					else if(i == l && j < c)
					{
					
						cout << "Marciano: Estou para o Oeste\n\n";getch();
						system("cls");
					}
				}
			}
			else
				win=2;
		}
		while(win==0);
		if(win==2)
		{
			cout << "Marciano: HAHAHA...\n";getch(); system("cls");
			cout << "Marciano: Parece que voce esta sem balas...\n";getch(); system("cls");
			cout << "Marciano: HEHEHEHE...";getch(); system("cls");
			cout << "GAME OVER\n";
			cout << "Jogar novamente?\n";
			cout << "[1]SIM [2]NAO: "; cin >> continuar; system("cls");
			matriz[i][j]= false;
		}
		else if(win==1)
		{
			cout << "Parabens por acertar o Marciano !!\n";getch();
			cout << "Jogar novamente?\n";
			cout << "[1]SIM [2]NAO: "; cin >> continuar; system("cls");
			matriz[i][j]= false;
		}
	}
	while(continuar==1);
}
