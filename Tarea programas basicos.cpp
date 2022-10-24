#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <iomanip>
#include<conio.h>
#include<windows.h>


using namespace std;

int main(){
	int opcion;
	char salir='f';

	do{
	cout<<"                           "<<endl;
	cout<<"__________________________ MENU __________________________"<<endl;
	cout<<"                           "<<endl;
	cout<<"  1: Operaciones basicas [1] \n  2: Determinar si un numero es par o impar [2] \n  3: Convertor de medidas [3] \n  4: Detector de palindromos [4] \n  5: Conversor de arabigo a romano [5] \n  6: Conversor de numeros enteros a letras [6] \n  7: Conversor de numero con decimal a letras [7] \n  8: Tabla de multiplicar personalizada [8] \n  9: Todas las tablas de multiplicar [9] \n  10: Tabla de multipicar grafica [10] \n  11: Conversor de decimales a binario [11] \n  12: Conversor de decimales a hexadecimal [12] \n  13: Creacion de figuras geometricas [13] \n  14: Mover un punto en la pantalla [14] \n  15: Cajero automatico [15] \n  16: Calcular hipotenusa [16]"<<endl;
	cout<<"                           "<<endl;
	cout<<endl<<" ¿Que operacion desea realizar?: ";
	cin>>opcion;
	cout<<"                           "<<endl;
	
switch (opcion){
	case 1: system("cls");cout<<"________Operaciones basicas________ "<<endl;
{
	
		
	float n1,n2, suma=0,resta=0;
	float multiplicacion=0,division=0;
	
	cout<<"ingrese primer numero:   "; cin>>n1;
	cout<<"ingrese segundo numero:  "; cin>>n2;
	cout<<endl;
	
	suma=n1+n2;
	resta=n1-n2;
	multiplicacion=n1*n2;
	division=n1/n2;
	
	cout<<"El resultado de la suma es:   "<<suma<<endl;
	cout<<"El resultado de la resta es   "<<resta<<endl;
	cout<<"El resultado de la multimplicacion:   "<<multiplicacion<<endl;
	cout<<"El resultado de la division:  "<<division<<endl;

	system("pause");
	break;
}

	case 2: system("cls");cout<<"____Determinar si un numero es par o impar____ "<<endl;
{
	cout<<"                           "<<endl;
{
	int num2=0;
	cout<<"Ingrese un numero: ";cin>>num2;
	cout<<"                   "<<endl;
	
	if ((num2%2)==0){
		cout<<"El numero "<<num2<<" es par"<<endl;
	}else{
		cout<<"El numero "<<num2<<" es impar"<<endl;
}
	} 	system("pause");
		break;
}
	
	case 3: system("cls");cout<<"Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa: "<<endl;
{	
	cout<<"                           "<<endl;
	cout<<"Bienvenido al conversor de medidas, ingrese el sistema de medición que desea realizar"<<endl;
	int medida;
	cout<<" 1. Kilometros a millas \n 2. Metros a pulgadas \n 3. Libras a kilos \n 4. Millas a kilometros \n 5. Pulgadas a metros \n 6. Kilos a libras"<<endl;
	cout<<"                           "<<endl;
	cin>>medida;
	double km, mi, me, pu, lib, kg;
	switch (medida){
		case 1: cout<<"Convertir kilometros a millas"<<endl;
	{
		cout<<"                           "<<endl;
		cout<<"Ingrese los kilometros: ";
		cin>>km;
		mi=km*0.621371;
		cout<<"                           "<<endl;
		cout<<km<<" kilometros es igual a "<<mi<<" millas"<<endl;
	}	break;
		case 2: cout<<"Convertir metros a pulgadas"<<endl;
	{	cout<<"                           "<<endl;
		cout<<"Ingrese los metros: ";
		cin>>me;
		pu=me*39.3701;
		cout<<"                           "<<endl;
		cout<<me<<" metros es igual a "<<pu<<" pulgadas"<<endl;
	}	break;
		case 3: cout<<"Convertir libras a kilos"<<endl;
	{	cout<<"                           "<<endl;
		cout<<"Ingrese las libras: ";
		cin>>lib;
		kg=lib*2.2;
		cout<<"                           "<<endl;
		cout<<lib<<" libras es igual a "<<kg<<" kilogramos"<<endl;
	}	break;
		case 4: cout<<"Millas a kilometros"<<endl;
	{	cout<<"                           "<<endl;
		cout<<"Ingrese las millas: "<<endl;
		cin>>mi;
		km=mi*1.6;
		cout<<"                           "<<endl;
		cout<<mi<<" Millas es igual a "<<km<<" kilometros"<<endl;
	}	break;
		case 5: cout<<"Convertir pulgadas a metros"<<endl;
	{	cout<<"                           "<<endl;
		cout<<"Ingrese las pulgadas: ";
		cin>>pu;
		me=pu*0.025;
		cout<<"                           "<<endl;
		cout<<pu<<" Pulgadas es igual a "<<me<<" metros"<<endl;
	}	break;
		case 6: cout<<"Convertir kilos a libras: ";
	{	
		cout<<"                           "<<endl;
		cout<<"Ingrese los kilos: ";
		cin>>kg;
		lib=kg*0.45;
		cout<<"                           "<<endl;
		cout<<kg<<" kilos es igual a "<<lib<<" libras"<<endl;
	}	break;
		default: cout<<"Esa no es una opcion"<<endl;
	}
	
	system("pause");
		break;
}
	
	case 4: system("cls");cout<<"Determinar si una palabra o un numero es palindromo: "<<endl;
{
    string texto;
    int aux = 0, igual = 0;
    cout<<"                           "<<endl;
    cout << "Ingrese la palabra o numero a evaluar: ";
    getline(cin >> ws, texto);
    
    for(int ind = texto.length() - 1; ind >= 0; ind--) {
        if(texto[ind] == texto[aux]) {
            igual++;
        }
        aux++;
    }
    
    if(texto.length() == igual) {
    	cout<<"                           "<<endl;
        cout << "La palabra ingresada es un palindromo" << endl;
    } else {
        cout << "La palabra ingresada no es un palindromo" << endl;
    }
    
	system("pause");
		break;
}

	case 5: system("cls");cout<<"Conversion de numeros arabigos a romanos : "<<endl;
{
{
	int numero, unidades, decenas, centenas, millares;
 
 	cout<< "Ingrese un numero"<<endl;
 	cout<<"                           "<<endl;
 	cin>> numero;
	cout<<"Su numero en romanos es: ";

 	unidades = numero % 10; numero /= 10;
 	decenas = numero % 10; numero /= 10;
 	centenas = numero % 10; numero /= 10;
 	millares = numero % 10; numero /= 10;

	 switch (millares)
 	{
 	 case 1: cout<<"M"; break;
 	 case 2: cout<<"MM"; break;
 	 case 3: cout<<"MMM"; break;
 	}
 	switch (centenas)
 	{
 	 case 1: cout<<"C"; break;
 	 case 2: cout<<"CC"; break;
 	 case 3: cout<<"CCC"; break;
  	case 4: cout<<"CD"; break;
 	 case 5: cout<<"D"; break;
 	 case 6: cout<<"DC"; break;
 	 case 7: cout<<"DCC"; break;
 	 case 8: cout<<"DCCC"; break;
  	case 9: cout<<"CM"; break; 
 }
 	switch (decenas)
  	{
  	case 1: cout<<"X"; break;
  	case 2: cout<<"XX"; break;
 	 case 3: cout<<"XXX"; break;
 	 case 4: cout<<"XL"; break;
 	 case 5: cout<<"L"; break;
 	 case 6: cout<<"LX"; break;
  	case 7: cout<<"LXX"; break;
 	 case 8: cout<<"LXXX"; break;
 	 case 9: cout<<"XC"; break; 
 }
 	switch (unidades)
 	{
  	case 1: cout<<"I"; break;
	case 2: cout<<"II"; break;
 	case 3: cout<<"III"; break;
  	case 4: cout<<"IV"; break;
  	case 5: cout<<"V"; break;
  	case 6: cout<<"VI"; break;
  	case 7: cout<<"VII"; break;
  	case 8: cout<<"VIII"; break;
  	case 9: cout<<"IX"; break;
 }
    cout<<"                           "<<endl;
 system("pause");
	break;
}

}
	
	case 6: system("cls");cout<<"Conversion de numeros enteros a letras: "<<endl;
{
		cout<<"                           "<<endl;
		int x;
    cout<<"ingrese un numero:"<<endl;
    cin>>x;
if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
else
 
    {
        if(x>=900)   {cout<<"NOVECIENTOS " ;x=x-900;}
       else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
       else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
       else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
       else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
       else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
       else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
       else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
       else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
       else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
        if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
            if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
            if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
            if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
            if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
            if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
            if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
            if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
            if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
            if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
            if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
            if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
            if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
            if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
            if(x>20) {cout<<"VEINTI"       ;x=x-20; }
            if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
        if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
       else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
       else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
       else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
       else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
       else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
       else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
        if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
        if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
        if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
            if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
       else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
       else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
       else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
       else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
       else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
       }
    cout<<endl;
	cin.ignore();
	 system("pause");
		break;
	}
	
	case 7: system("cls");cout<<"Conversion de números enteros con decimal a letras: "<<endl;
{
		cout<<"                           "<<endl;
		int x,y;
    cout<<"ingrese el numero antes del punto"<<endl;
    cin>>x;
    cout<<"ingrese el numero despues del punto:"<<endl;
    cin>>y;
if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
else
 
    {
        if(x>=900)   {cout<<"NOVECIENTOS " ;x=x-900;}
       else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
       else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
       else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
       else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
       else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
       else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
       else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
       else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
       else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
        if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
            if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
            if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
            if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
            if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
            if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
            if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
            if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
            if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
            if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
            if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
            if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
            if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
            if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
            if(x>20) {cout<<"VEINTI"       ;x=x-20; }
            if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
        if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
       else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
       else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
       else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
       else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
       else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
       else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
        if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
        if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
        if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
            if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
       else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
       else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
       else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
       else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
       else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
       }
	cin.ignore();
	cout<<" PUNTO ";
	if((y<1)||(y>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
	else
    {
        if(y>=900)   {cout<<"NOVECIENTOS " ;y=y-900;}
       else if(y>=800)   {cout<<"OCHOCIENTOS " ;y=y-800;}
       else if(y>=700)   {cout<<"SETECIENTOS " ;y=y-700;}
       else if(y>=600)   {cout<<"SEISCIENTOS " ;y=y-600;}
       else if(y>=500)   {cout<<"QUINIENTOS "  ;y=y-500;}
       else if(y>=400)   {cout<<"CUATROCIENTOS "   ;y=y-400;}
       else if(y>=300)   {cout<<"TRESCIENTOS " ;y=y-300;}
       else if(y>=200)   {cout<<"DOSCIENTOS "  ;y=y-200;}
       else if(y>100)    {cout<<"CIENTO "  ;y=y-100;}
       else if(y==100)  {cout<<"CIEN"     ;y=y-100;}
        if(y>90) {cout<<"NOVENTA Y "   ;y=y-90; }
            if(y==90)   {cout<<"NOVENTA"  ;y=y-90; }  
            if(y>80) {cout<<"OCHENTA Y "   ;y=y-80; }
            if(y==80)   {cout<<"OCHENTA"  ;y=y-80; }
            if(y>70) {cout<<"SETENTA Y "   ;y=y-70; }
            if(y==70)   {cout<<"SETENTA"  ;y=y-70; }
            if(y>60) {cout<<"SESENTA Y "   ;y=y-60; }
            if(y==60)   {cout<<"SESENTA"  ;y=y-60; }
            if(y>50) {cout<<"CINCUENTA Y " ;y=y-50; }
            if(y==50)   {cout<<"CINCUENTA"    ;y=y-50; }
            if(y>40) {cout<<"CUARENTA Y "  ;y=y-40; }
            if(y==40)   {cout<<"CUARENTA" ;y=y-40; }
            if(y>30) {cout<<"TREINTA Y "   ;y=y-30; }
            if(y==30)   {cout<<"TREINTA"  ;y=y-30; }
            if(y>20) {cout<<"VEINTI"       ;y=y-20; }
            if(y==20)   {cout<<"VEINTE"       ;y=y-20; }
        if(y>=16)    {cout<<"DIECI"        ;y=y-10; }
       else if(y==15)   {cout<<"QUINCE"       ;y=y-15; }
       else if(y==14)   {cout<<"CATORCE"  ;y=y-14; }
       else if(y==13)   {cout<<"TRECE"        ;y=y-13; } 
       else if(y==12)   {cout<<"DOCE"     ;y=y-12; }
       else if(y==11)   {cout<<"ONCE"     ;y=y-11; }
       else if(y==10)   {cout<<"DIEZ"     ;y=y-10; }      
        if(y==9)    {cout<<"NUEVE"        ;y=y-9;  }
        if(y==8)    {cout<<"OCHO"     ;y=y-8;  }
        if(y==7)    {cout<<"SIETE"        ;y=y-7;  }
            if(y==6)    {cout<<"SEIS"     ;y=y-6;  }
       else if(y==5)    {cout<<"CINCO"        ;y=y-5;  }
       else if(y==4)    {cout<<"CUATRO"       ;y=y-4;  }
       else if(y==3)    {cout<<"TRES"     ;y=y-3;  }
       else if(y==2)    {cout<<"DOS"      ;y=y-2;  }
       else if(y==1)    {cout<<"UNO"      ;y=y-1;  }
       }
	cin.ignore();
	 system("pause");
		break;
	}
	
	case 8: system("cls");cout<<"Una tabla de multiplicar personalizada: "<<endl;
{
	cout<<"                           "<<endl;
	cout<<"Tabla de multiplicaciones"<<endl;
		cout<<"                           "<<endl;
	int tabla = 0,respuesta=0;
	cout<<"Ingrese la tabla:";
	cin>>tabla;
	cout<<"Esta es la tabla del "<<tabla<<endl;
	for (int i=1;i<=12;i++){
	respuesta = tabla  * i;
	cout<<tabla<<" X "<<i<<" = "<<respuesta<<endl;
} 	system("pause");
	break;
}

	case 9: system("cls");cout<<"Todas las tablas de multiplicar del 1 al 10: "<<endl;
{
		for (int i=1; i<=10;i++){
			cout<<"                           "<<endl;
			cout<<"-------------------------"<<endl;
			cout<<"La tabla de multiplicar del "<<i<<endl;
			cout<<"                           "<<endl;
			
		for (int m=0; m<=12; m++){
			cout<<i<<" x "<<m<<"="<<i*m<<endl;
		}
		}	system("pause");
			return 0;
			break;
	} 

	case 10: system("cls");cout<<"Crear de forma grafica la multiplicacion: "<<endl;
{
	{
		int factor_1, factor_2, producto;
		cout<<"                           "<<endl;
		cout<<"Tabla de multiplicar grafica: "<<endl;
		cout<<"     ";
		cin>>factor_1;
		cout<<"    X";
		cin>>factor_2;
		cout<<"_______"<<endl;
		producto=factor_1*factor_2;
		cout<<"    "<<producto<<endl;
		
	} 
	system("pause");
	break;
}
	
	case 11: system("cls");cout<<"Conversion de numeros decimales a binario: "<<endl;
{
	cout<<"                           "<<endl;
	int decimal;
	short binario[8];
	
	cout<<"Escribe el numero que deseas convertir: "<<endl;
	cin>>decimal;
	
	for(int i=0;i<8;i++){
		binario[i]=decimal%2;
		decimal /= 2;
	}
	cout<<"El numero en binario es: "<<endl;
		for(int i=7;i>=0;i--){
			cout<<binario[i];
	}
	cout<<endl;
	system("pause");
	break;
}
	
	case 12: system("cls");cout<<"Conversión de numeros decimales a hexadecimales"<<endl;
{
	cout<<"                           "<<endl;
 	int digitoex[20];
    int decimal, residuo, resultado, i = 0;

    cout << "Introduce el numero decimal a convertir: " << endl;
    cin >> decimal;

    do
    {
        residuo = decimal % 16;
        resultado = decimal / 16;
        digitoex[i] = residuo;
        decimal = resultado;
        i++;
    } while (resultado > 15);

    digitoex[i] = resultado;

	cout<<"                           "<<endl;
    cout << "El equivalente en hexadecimal es: ";

    for (int j = i; j >= 0; j--)
    {
        if (digitoex[j] == 10)
        {
            cout << "A";
        }
        else if (digitoex[j] == 11)
        {
            cout << "B";
        }
        else if (digitoex[j] == 12)
        {
            cout << "C";
        }
        else if (digitoex[j] == 13)
        {
            cout << "D";
        }
        else if (digitoex[j] == 14)
        {
            cout << "E";
        }
        else if (digitoex[j] == 15)
        {
            cout << "F";
        }
        else
        {
            cout << digitoex[j];
        }   
    }
    cout << endl;


	system("pause");
	break;	
}
	
	case 13: system("cls");cout<<"Crear figuras geometricas basicas: "<<endl;
{
	cout<<"                           "<<endl;
		int x;
		cout<<"\tEste apartado es para crear figuras basicas"<<endl;
		cout<<"                           "<<endl;
			cout<<"Que figura desea dibujar?"<<endl;
			cout<<"\t 1) Cuadrado"<<endl;
			cout<<"\t 2) Rectangulo"<<endl;
			cout<<"\t 3) Triangulo"<<endl;
			cout<<"\t 4) Circulo"<<endl;
			cin>>x;

		if (x==1)
		{	int lado;
			cout<<"                           "<<endl;
			cout<<"Ingrese el tamaño de una de las caras del cuadrado: ";
			cout<<"                           "<<endl;
			cin>>lado;
			for (int i=0; i<lado;i++){
				for (int j=0;j<lado;j++){
					cout<<"[]";
				}
				cout<<endl;
			}		
		}
		
		if (x==2)
		{	int ladoc, ladol;
			cout<<"                           "<<endl;
			cout<<"Ingrese el tamaño la cara larga del rectangulo: ";
			cin>>ladol;
			cout<<"                           "<<endl;
			cout<<"Ingrese el tamaño de la cara corta del rectangulo: ";
			cout<<"                           "<<endl;
			cin>>ladoc;
			for (int i=0; i<ladol;i++){
				for (int j=0;j<ladoc;j++){
					cout<<"[]";
				}
				cout<<endl;
				}	
		}
		
		if (x==3)
		{	int h;
			cout<<"                           "<<endl;
			cout<<"Ingrese la altura del triangulo: ";
			cin>>h;
			for (int i=0; i<h;i++){
				for (int j=0;j<=i;j++){
					cout<<"[]";
				}
				cout<<endl;
				}	
		}
		if (x==4)
		{	int n;
			cout<<"ingrese el tamaño del circulo: ";
			cin>>n;
			for (int f=0;f<=n;f++){
				for(int c=0; c<=n;c++){
					if(sqrt(pow(f-(n/2),2)+pow(c-(n/2),2))<=n/2){
					cout<<"*";}else{cout<<" ";}
				}cout<<endl;
			}cout<<endl;
}
	system("pause");
	break;	
}

	case 14: system("cls");cout<<"Mover un punto en la pantalla: "<<endl;
	{
		cout<<endl;
		
		cout<<"ingeniero Disculpe no logre hacer que me funcionara ya en conjunto pero el codigo quedara impreso en pantalla "<<endl;
		cout<<"              "<<endl;
		cout<<"void gotoxy(int x1, int y1){"<<endl; 
		cout<<"   HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);"<<endl;
		cout<<"   COORD dwPos;"<<endl;
		cout<<"   dwPos.X = x1;"<<endl;
		cout<<"   dwPos.Y = y1;"<<endl;
		cout<<"   SetConsoleCursorPosition(hcon, dwPos);"<<endl;
		cout<<"              "<<endl;
	// OCULTAR CURSOR
		cout<<"   CONSOLE_CURSOR_INFO cci;"<<endl;
		cout<<"   GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);"<<endl;
		cout<<"   cci.bVisible = 0;"<<endl;
		cout<<"   SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);"<<endl;
		cout<<"   }"<<endl;
		cout<<"              "<<endl;
		cout<<"char opcion;"<<endl;
		cout<<"int x=10, y=10;"<<endl;
		cout<<"int main(){"<<endl;
		cout<<"   while(opcion!='z')"<<endl;
		cout<<"   {"<<endl;
		cout<<"              "<<endl;
		cout<<"        system(cls);"<<endl;
		cout<<"        gotoxy(x,y); printf( '.' );"<<endl;
		cout<<"        opcion=getch();"<<endl;
		cout<<"        switch(opcion)"<<endl;
		cout<<"	{"<<endl;
		cout<<"              "<<endl;
			// MOVER EL PUNTO
		cout<<"         	case 'w': y--; break;"<<endl;
		cout<<"         	case 's': y++; break;"<<endl;
		cout<<"         	case 'a': x--; break;"<<endl;
		cout<<"         	case 'd': x++; break;"<<endl;
		cout<<"      }"<<endl;
		cout<<"}"<<endl;		
	
	system("pause");
	break;
	
	
	}

	case 15: system("cls");cout<<"Cajero Automático: "<<endl;
{	cout<<"                           "<<endl;

	int saldo_inicial = 1000,opc;
	float extra,saldo = 0,retiro; 
	
	cout<<"\tBienvenido a su cajero automatico"<<endl;
	cout<<"1. Ingresar dinero en cuenta"<<endl;
	cout<<"2. Retirar dinero de la cuenta"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Opcion: "; 
	cin>>opc;
	
	switch(opc){
		case 1: cout<<"\nCuanto dinero desea ingresar en cuenta: "; 
				cin>>extra;
				
				saldo = saldo_inicial + extra;
				cout<<"\nDinero en cuenta: "<<saldo<<endl;
				break;
		case 2: cout<<"\nCuanto dinero desea retirar: "; 
				cin>>retiro;
				
				if(retiro > saldo_inicial){
					cout<<"No cuenta con esa cantidad";
				}
				else{
					saldo = saldo_inicial - retiro;
					cout<<"\nDinero en cuenta: "<<saldo<<endl;
					break;
				}
		case 3: break;
		dafault: cout<<"Se equivoco de opcion de menu";break;
	}
		system("pause");
	break;
}
	
	case 16: system("cls");cout<<"Calcular la hipotenusa: "<<endl;
{
{
	float cateto_1, cateto_2, cuad, hipot;
	cout<<"                     "<<endl;
	cout<<"Ingrese el primer cateto: ";
	cin>>cateto_1;
	cout<<"Ingrese el segundo cateto: ";
	cin>>cateto_2;
	cuad=(cateto_1*cateto_1)+(cateto_2*cateto_2);
	hipot=sqrt(cuad);
	cout<<"                     "<<endl;
	cout<<"La hipotenusa es: "<<hipot<<endl;
} 	system("pause");
	break;
}
	
	default: system("cls");cout<<"Esa no es una opcion"<<endl;
}

	cout<<"                                          "<<endl;
	cout<<"Si desea regresar al menu ingrese 'f'\n";
	cout<<"Si desea salir ingrese cualquier caracter \n";
	cin>>salir;
	system("cls");
}while(salir=='f');

return 0;
}
