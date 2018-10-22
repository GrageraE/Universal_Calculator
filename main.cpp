#include <iostream>
#include <cmath>
#include <string>
#include "fstream"
using namespace std;

int main()
{
	float numero1;      //Primero creamos las variables
	float numero2;
	float raiz_cuadrada;
	float semi_suma;
	float semi_suma2;
	
	const int semi = 2;

	string op_log;
	op_log = "";
	
	int opcion;
	opcion = 0;
	
	numero1 = 0;         // y las inicializamos 
	numero2 = 0;
	raiz_cuadrada = 0;
	semi_suma = 0;
	semi_suma2 = 0;

	
	cout <<" Escriba el primer numero " <<endl;       //Pedimos informacion
	cout <<" ===> ";
	cin >> numero1;
	
	cout << " Escriba el segundo numero (pulse 0 para no introducir en caso de opcion 5,6,7,8) " <<endl;
	cout <<" ===> ";
	cin >> numero2;
	do
	{
	cout <<" Que desea hacer ahora? " <<endl;       //Seguimos pidiendo informacion al usuario ...
	cout <<" 1.Sumar " <<endl;
	cout <<" 2.Restar " <<endl;
	cout <<" 3.Multiplicar " <<endl;
	cout <<" 4.Dividir " <<endl;
	cout <<" 5.Calcular el IVA (Solo se usa el primer numero) " <<endl;
	cout <<" 6.Calcular al cuadrado (Solo se usa el primer nuemro)" <<endl;
	cout <<" 7.Calcular al cubo (Solo se usa el primer nuemro) " <<endl;
	cout <<" 8.Calcular raiz cuadrada " <<endl;
	cout <<" 9.Calcular la semisuma " <<endl;
	cout <<" ===> ";
	cin >> opcion;
	switch(opcion)         //En este caso he decidido usar una condicional "Switch" para los calculos 
	{
		case 1: cout <<" El resultado es " <<numero1+numero2 <<endl;
		break;
		case 2: cout <<" El resultado es " <<numero1-numero2 <<endl;
		break;
		case 3: cout <<" El resultado es " <<numero1*numero2 <<endl;
		break;
		case 4: cout <<" El resultado es " <<numero1/numero2 <<endl;
		break;
		case 5: cout <<" El resultado es " <<numero1*21/100 <<endl;
		break;
		case 6: cout <<" El resultado es " <<numero1*numero1 <<endl;
		break;
		case 7: cout <<" El resultado es " <<numero1*numero1*numero1 <<endl;
		break;
		case 8: if (opcion = 8)        //Aqui he tenido que utilizar una condicional "if" ...
		{
			raiz_cuadrada = sqrt(numero1);
			cout <<" El resultado es " <<raiz_cuadrada <<endl;
		}
		break;
		case 9:{
			semi_suma2 = numero1+numero2;
			semi_suma = semi_suma2/semi;
			cout <<" El resultado es " <<semi_suma <<endl;
		}
		break;
		default: cout <<" Opcion invalida" <<endl;
	}
	}
	while (opcion >= 10);

	cout <<" Quiere crear un archivo con los resultados? (S/n) ";
	cin >> op_log;
	if (op_log == "s"|op_log == "S")
	{
		ofstream archivo;
		archivo.open("resultados.txt", ios::out);
		cout <<" Creando archivo ... " <<endl;

		archivo <<" Numero 1 = "<<numero1 <<endl;
		archivo <<" Numero 2 = "<<numero2 <<endl;
		archivo <<" Suma = " <<numero1+numero2 <<endl;
		archivo <<" Resta = " <<numero1-numero2 <<endl;
		archivo <<" Multiplicacion = "<<numero1*numero2 <<endl;
		archivo <<" Division = "<<numero1/numero2 <<endl;
		archivo <<" IVA = " <<numero1*21/100 <<endl;
		archivo <<" Cuadrado = " <<numero1*numero1 <<endl;
		archivo <<" Cubo = " <<numero1*numero1*numero1 <<endl;
		archivo <<" Raiz = " <<raiz_cuadrada <<endl;
		archivo <<" Semisuma = " <<semi_suma <<endl;

		if (archivo.fail())
		{
			cout <<" No se ha podido crear el archivo " <<endl;
			system("PAUSE");
		}

		archivo.close();
		cout <<" Archivo creado correctamente. Si crea otro archivo, este sera sobreescrito " <<endl;
	}

	cout <<" Saliendo ... " <<endl;
	cout <<" ";         //Pausamos el programa y se retorna 0 
	system ("PAUSE");
	return 0;
}
