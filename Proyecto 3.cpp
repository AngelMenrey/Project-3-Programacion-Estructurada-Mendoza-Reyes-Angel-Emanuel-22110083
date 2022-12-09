// Angel Emanuel Mendoza Reyes / 22110083 / Grupo 1 O / Programacion Estructurada 
// Parcial 3 / Ceti Colomos / Mtro. Francisco Javier Medina Garcia 

// PRACTICA DE TERCER PARCIAL 


/*Realizar un programa que sea capaz de calcular el perímetro de un triángulo, cuadrado o círculo;
usando funciones para realizar dicho cálculo.
El programa debe preguntar si se quiere calcular otra figura geométrica o salir del programa.
Explicar con comentarios las líneas de código que se escriben en el programa.*/

#include<iostream>// Se incluye una Libreria
#include<stdlib.h>// Se incluye una Libreria 
#include<string.h>// Se incluye una Libreria
#include<math.h>// Se incluye una Libreria 
#include<conio.h>// Se incluye una Libreria
#define PI 3.141592 // Se declara o define el valor de PI que es igual a 3.141592
using namespace std; // Evitas escribir en cada cout std::
int main()// Es la funcion principal del programa
{
	int opcion=10;// Se declara la variable opcion que es igual a 10
	while (opcion > 0) // Empieza el ciclo While y se encierra la variable en parentesis, opcion que es mayor que cero
	{
		cout<< "##### INGRESE LA OPCION DESEADA #####"<<endl;// Esto se va imprimir en la pantalla de la consola y endl es un salto de linea
		cout<< "##### OPCION #####"<<endl;// Esto se va imprimir en la pantalla de la consola y endl es un salto de linea
		cout<< " 1 - PERIMETRO DE UN TRIANGULO"<<endl;// Esto se va imprimir en la pantalla de la consola y endl es un salto de linea
		cout<< " 2 - PERIMETRO DE UN CUADRADO"<<endl;// Esto se va imprimir en la pantalla de la consola y endl es un salto de linea
		cout<< " 3 - PERIMETRO DE UN CIRCULO"<<endl;// Esto se va imprimir en la pantalla de la consola y endl es un salto de linea
		cout<< " 0 - SALIR DEL PROGRAMA"<<endl;// Esto se va imprimir en la pantalla de la consola y endl es un salto de linea
		cin>> opcion;// Aqui se va ingresar la opcion que el usuario requiera ejectutar, ya sea 1, 2, 3 o 0 para salir del programa
		switch (opcion)  //Ejecuta un bloque de sentecia que es llamada opcion
		{
		case 1: // Este es el caso uno de las opciones que el usuario decidio elegir para ejecutar el programa.
			
			cout<<"PROGRAMA PARA CALCULAR EL PERIMETRO DE UN TRIANGULO"<<endl;// Esto se va imprimir en la pantalla de la consola y endl es un salto de linea
				float L1, L2, L3, Perimetro; // Se declaran las variables L1, L2, L3 y Perimetro de tipo flotante 
		    	cout<<"INGRESE EL LADO 1"<<endl;// Esto se va imprimir en la pantalla de la consola y endl es un salto de linea
		    		cin>>L1; // Se debe ingresar el valor de la variable L1
		   			 cout<<"INGRESE EL LADO 2"<<endl; // Esto se va imprimir en la pantalla de la consola y endl es un salto de linea
		   				 cin>>L2; // Se debe ingresa el valor de la variable L2
		   					 cout<<"INGRESE EL LADO 3"<<endl;// Esto se va imprimir en la pantalla de la consola y endl es un salto de linea
		  						  cin>>L3; // Se debe ingresar el valor de la variable L3
		  							  Perimetro = L1 + L2 + L3; // El perimetro es igual a la suma de las variables L1, L2 y L3
		  								  cout<<" EL PERIMETRO DEL TRIANGULO ES : "<< Perimetro<<endl;// Esto se va imprimir en la pantalla de la consola y endl es un salto de linea
											cout<<"##### GRACIAS POR USAR EL PROGRAMA :)#####" <<endl;// Esto se va imprimir en la pantalla de la consola y endl es un salto de linea
												break;// Es la parte donde concluye el case o el programa ejecutado.
											
										
											
			case 2:// Este es el caso dos de las opciones que el usuario decidio elegir para ejecutar el programa.
				
				cout<<"PROGRAMA PARA CALCULAR EL PERIMETRO DE UN CUADRADO"<<endl;// Esto se va imprimir en la pantalla de la consola y endl es un salto de linea
				 	float l1, l2, l3, l4, perimetro; // Se declaran las variables l1, l2, l3, l4 y perimetro de tipo flotante 
					 cout<<"INGRESE EL LADO 1"<<endl;// Esto se va imprimir en la pantalla de la consola y endl es un salto de linea
						 cin>>l1;// Se debe ingresar el valor de la variable l1
						 	cout<<"INGRESE EL LADO 2"<<endl;// Esto se va imprimir en la pantalla de la consola y endl es un salto de linea
						 		cin>>l2;// Se debe ingresar el valor de la variable l2
						 			cout<<"INGRESE EL LADO 3"<<endl;// Esto se va imprimir en la pantalla de la consola y endl es un salto de linea
						 				cin>>l3;// Se debe ingresar el valor de la variable l3
						 					cout<<"INGRESE EL LADO 4"<<endl;// Esto se va imprimir en la pantalla de la consola y endl es un salto de linea
						 						cin>>l4;// Se debe ingresar el valor de la variable l4
						 							perimetro = l1 + l2 + l3 + l4;// perimetro es igual a la suma de las variables l1, l2, l3 y l4
						 								cout<<"EL PERIMETRO DEL CUADRADO ES : "<<perimetro<<endl;// Esto se va imprimir en la pantalla de la consola y endl es un salto de linea			
															cout<<"##### GRACIAS POR USAR EL PROGRAMA :)#####" <<endl;// Esto se va imprimir en la pantalla de la consola y endl es un salto de linea	
															break;// Es la parte donde concluye el case o el programa ejecutado
				
				
				
		      case 3:// Este es el caso tres de las opciones que el usuario decidio elegir para ejecutar el programa.
		      	cout<<"PROGRAMA PARA CALCULAR EL PERIMETRO DE UN CIRCULO"<<endl;// Esto se va imprimir en la pantalla de la consola y endl es un salto de linea
		      	    float RADIO, PERIMETRO; // Se declaran las variables RADIO y PERIMETRO de tipo flotante 
		      	    	cout<<"INGRESE EL VALOR DEL RADIO"<<endl;// Esto se va imprimir en la pantalla de la consola y endl es un salto de linea
		      	    		cin>>RADIO;// Se debe ingresar el valor de la variable RADIO
		      	    			PERIMETRO = 2 * PI * RADIO;// PERIMETRO ES IGUAL A 2 por PI por la variable RADIO
		      	    				cout<<"EL PERIMETRO DEL CIRCULO ES : "<<PERIMETRO<<endl;// Esto se va imprimir en la pantalla de la consola y endl es un salto de linea
		    							cout<<"##### GRACIAS POR USAR EL PROGRAMA :)#####" <<endl;// Esto se va imprimir en la pantalla de la consola y endl es un salto de linea
										break;	// Es la parte donde concluye el case o el programa ejecutado
				
		}
		
	}
	
     cout<< " ##### GRACIAS POR USAR EL PROGRAMA :) ######"<<endl;	// Esto se va imprimir en la pantalla de la consola y endl es un salto de linea
}

