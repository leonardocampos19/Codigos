#Leonardo Campos -
#include <iostream>
#include <cctype>
#include <stdio.h>
#include <iomanip>
#include <math.h>
#include <cstdlib>
#include <conio.h>
#include <cstring>
using namespace std;

int main()
{
	float ms,s,m,h;
	int ano,mes,semana,dia,lim,esc,aux,aux2,aux3;
	string nome;
	
	do
	{
		cout << "Voce deseja iniciar o relogio em modo acelerado?\n";
		cout << "[1] SIM [2] NAO: ";
		cin >> esc;
		if (esc == 1)
		{
			aux = 999;
			aux2 = 59;
			aux3 = 59;
		}
	else if (esc == 2)
	{
		aux = 901;
		aux2 = 00;
		aux3 = 00;
	}
	else
	{
		cout << "Escolha Invalida !!!\n";
		getch();
	}
	}
	while (esc != 1 and esc != 2);
	
	for(ano=0001;ano<=5000;ano++)
	{
		for(mes=1;mes<=12;mes++)
		{
			switch(mes)
			{
				case 1: lim = 31;
						nome = "Janeiro";
				break;
				case 2: nome = "Fevereiro";
					if (ano%4==0)
					{
						if(ano%10!=00)
						{
							if(ano%400==0)
							lim=29;
						}
						else
						{
							lim=28;
						}
					}
					else
					{
						lim=28;
					}
				break;
			
				case 3: nome = "Marco";
						lim = 31;	
				break;
			
				case 4: nome = "Abril";
						lim = 30;
				break;
			
				case 5: nome = "Maio";
						lim = 31;
				break;
		
				case 6: nome = "Junho";
						lim = 30;
				break;
			
				case 7: nome = "Julho";
						lim = 31;
				break;
			
				case 8: nome = "Agosto";
						lim = 31;
				break;
			
				case 9: nome = "Setembro";
						lim = 30;				
				break;
			
				case 10:nome ="Outubro";
						lim = 31;
				break;
			
				case 11:nome ="Novembro";
						lim = 30;
				break;
			
				case 12:nome ="Dezembro";
						lim = 31;
				break;
			}
			for(dia=01;dia<=lim;dia++)
			{
				for(h=00;h<=23;h++)
				{
					for(m=aux3;m<=59;m++)
					{
						for(s=aux2;s<=59;s++)
						{
							for(ms=aux;ms<=999;ms++)
							{
								system("cls");
								cout << setw(63) << "Calendario"; cout << endl;
								cout << "horas: " << h<<":"<< m<< ":" <<s;cout << endl;
								cout << "Mes: "<< setw(10) << nome;cout<< setw(53)<< " 1  2  3  4  5  6  7\n";
								cout << "Ano: " << setw(10) << ano;cout<< setw(53) << " 8  9 10 11 12 13 14\n";
								cout << "Mes: " << setw(10) << mes;cout<< setw(53) << "15 16 17 18 19 20 21\n";
								cout << "Dia: " << setw(10) << dia;cout<< setw(52) << "22 23 24 25 26 27 28";
								if(mes==2)
								{
									if(lim==29)
									{
										cout << setw(62);
										cout << "29";
									}
								}
								else if (mes==1 or mes==3 or mes==5 or mes==7 or mes==8 or mes==10 or mes==12)
								{
									cout << setw(68);
									cout << "29 30 31";
								}
								else
								{
									cout << setw(65);
									cout << "29 30";
								}
							}
						}
					}
				}
			}
		}
	}
}
