#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string.h>

#include <windows.h>
/*#include "mmsystem.h"
// beep(800,300);*/
using namespace std;

int main (void)
{
	//PlaySound(TEXT("Spooky.wav"), NULL, SND_SYNC);
	PlaySound(TEXT("Spooky.wav"), NULL, SND_ASYNC);
	
	char letra[1]; 
	char pregunta[31]; 
	//char respuesta[31]; 						//******************************George
	string respuesta;
	char muestra[31][10]; //texto que se muestra
	bool valido= true;
	int x=0, a=0;
	
	
	system("color f3");
	cout<< "\n Comencemos con este juego"; 	
	cout<< "\n Invocaremos a un espiritu, espera..." << endl;
	
	//getch();
	Sleep(1500);
	string cadena1 = " Logramos conectar con ella, se llama Lisa";
	//cout<< "\n Logramos conectar con ella, se llama Lisa";
	for (x = 0; x < cadena1.length(); x++)
	{
		Sleep(100);
		cout << cadena1[x];
	}
	//getch();
	Sleep(700);
	system("color 04");
	
	cout<< "\n Nunca debiste comenzar con este juego maldito...  ";
	cout<< "\n\n Reglas:";
	cout<< "\n 1.Nunca debes jugar solo.";
	cout<< "\n 2.Nunca debes jugar en un lugar donde alguien fue enterrado o lugares sagrados.";
	cout<< "\n 3.Nunca dejes el juego sin concluir.";
	cout<< "\n 4.Siempre debes terminar despidiendote." << endl;
	getch();
	srand(time(NULL));
	regresa: cout << "";
	do
	{
		system("cls");
		cout<< "\n\n Preguntame lo que quieras pero ten cuidado con lo que me preguntaras:  " << endl << " ";
		gets(pregunta);
		if(strcmp(pregunta,"bye")==0)
		{
			
			if (rand() % 5 == 0 or rand() % 3 == 0 )
			{
				cout<< "\n bye... ";
				exit(-1);	
			}
			else
			{
				cout << "You can't... leave... for now" << endl;
				getch();
				goto regresa;
			}
		}	
		
		string poseido = " Responde por favor lisa\n";
		gets(letra);
		respuesta = "";
		x=0;
		a=0;
		if(letra[0] ==' ')
		{
			
			
			do
			{
				letra[0]=getch();
				
				if (x < poseido.length())
		    	{
		    		cout << poseido[x];
				}
				else
				{
					//cout << endl;
				}
				
				respuesta += letra;
				x++;
				a++;
			}while(letra[0] != 13); //  'enter'.			
			respuesta[x-1]='\0'; // final de la cadena.
			
			for (x = x; x < poseido.length(); x++)
		    {
		    	cout << poseido[x];
			}
		
		}
		
		
		if(a!=0)
		{
			cout<< "\n " << respuesta;
			getch();
		}
		else 
		{
			if ( (pregunta[0] >= 65 && pregunta[0] < 75) or (pregunta[0] >= 97 && pregunta[0] < 107) )
			{
				cout << "I'm h...a...p...p...y..." << endl;
				getch();
				cout << "It's not right... not... right..." << endl;
				getch();
				cout << "...friends..." << endl;
				getch();
			}
			if ( (pregunta[0] >= 75 && pregunta[0] < 85) or (pregunta[0] >= 107 && pregunta[0] < 117) )
			{
				cout << "Ahh, Grr, Ohhh..." << endl;
				getch();
				cout << "It hurts..." << endl;
				getch();
				cout << ".It's not right... not right... not right..." << endl;
				getch();
			}
			if ( (pregunta[0] >= 85 && pregunta[0] <= 90) or (pregunta[0] >= 117 && pregunta[0] <= 122) )
			{
				cout << "I'm h...a...p...p...y..." << endl;
				getch();
				cout << "...go...b...a...c...k...." << endl;
				getch();
				cout << "...friends..." << endl;
				getch();
			}
			//cout<< "\n Tu no crees en mi... ";
			//getch();
		}
		
	}while(valido);
	
	return 0;
}
