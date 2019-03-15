//Carlos Ivan Romero Hernandez RH18030

//Librerias necesarias
#include <cstdlib> 
#include <iostream> 
#include <queue> 


using namespace std;

//declaracion de la estructura que contiene los valores de la coordenada 
struct coor
{   //variables
    int x;
    int y;
    int z;
};


//funcion menu
void menu()
{
    cout<<"\n\t Menu Pincipal\n\n";
    cout<<"\t 1. AGREGAR DATOS"<<endl;
    cout<<"\t 2. MOSTRAR COLA"<<endl;
    cout<<"\t 3. MOSTRAR DATOS"<<endl;
    cout<<"\t 4. SALIR"<<endl;
 
    cout<<"\n INGRESE OPCION: ";
}

int main()
{
    system("color 1F");

    coor aux; //variable auxiliar
    coor *ptr; /*Puntero que permite almacenar la direccion de los datos*/
    queue<coor> cola; //declaracion del nodo
    
    //Variables para calcular los valores medios de cada coordenada
    int xacum=0;//x acumulado es decir x+x+...
    int yacum=0;//y acumulado es decir y+y+...
	int zacum=0;//z acumulado es decir z+z+...
	int n = 0;//Valor inicial de las iteraciones, es decir, las veces que se guardan valores en las coordenadas
	float promx;//calculo de xacum\n
	float promy;//calculo de yacum\n
	float promz;//calculo de zacum\n

    /*Para obtener el tamanio de las coordenadas en bytes*/
	int tamanio;
	/* Tamanio de una variable */
    tamanio=sizeof(struct coor);
    
    int memtot;
    int op;//opcion de menu
   
    do{
        menu();  cin>> op; 
       
       switch(op)//segun la opcion seleccionada se realizan las acciones
        {
            case 1:
            	
            	//Agregar un nuevo registro
                    system("cls");
					do {                    
                    cout << "\n\t\tIngresar Datos" << endl;
                    cout << "\n\tValor de X: ";
                    cin >> aux.x;
                    cout << "\n\tValor de Y: ";
                    cin >> aux.y;
                    cout << "\n\tValor de Z: ";
                    cin >> aux.z;
                    
                    //Se va haciendo la suma de x, y, z
                     xacum = xacum + aux.x;
                     yacum = yacum + aux.y;
                     zacum = zacum + aux.z;
                     
                     
                     memtot = tamanio + (n * tamanio);//para calcular el tamanio segun la cantidad de nodos ingresados
                     
                      n++;//se aumenta en 1 con cada ingreso de datos
                 }while(aux.x<=0 || aux.y<=0 || aux.z<=0);//se evita que se ingrese un valor menor a 0
                 
                 
                 /*Calculo de valores medios*/
                 promx=xacum/n;
                 promy=yacum/n;
                 promz=zacum/n;
                

                 cola.push(aux);//se guardan en la cola        
             
                break;
                
            case 2:

               
                system("cls");
                int deltax;
                int n;
                cout << "\n\t\tMostrar cola\n" << endl;
                //Se comprueba si la cola tiene datos
               if(cola.empty()==true){
               	
               	cout<<"\tNo hay Registros!";
               	
			   }else{
			   
                ptr = &cola.front();
                //Se imprimen los datos de la cola usando un for
                for (int i = 1; i <= cola.size(); i++) {

                    aux = *ptr;
                    cout << "Numero en cola: "<<i<<endl;
                    cout << "\n\tValor de X: " << aux.x;
                    cout << "\n\tValor de Y: " << aux.y;
                    cout << "\n\tValor de Z: " << aux.z << endl;

                    ptr++;
                }
				
}
                break;
            case 3:
                    
          //Mostrando los valores medios y el tamanio de memoria usado
                    system("cls");
                    
                    cout << "\n\t\tMostrar Datos" << endl;
                    
                //Se comprueba si la cola tiene datos
               if(cola.empty()==true){
               	
               	cout<<"\n\n\tActualmente no hay registros para Calcular la Media!";
               	
			   }else{
                    //Se muestran los valores medios de x, y, z
                    cout<<"\nLa media de X es igual a: "<<promx<<endl;
                    cout<<"\nLa media de Y es igual a: "<<promy<<endl;
                    cout<<"\nLa media de Z es igual a: "<<promz<<endl;
                    
                    cout<<"\n\n\nLa cantidad de memoria aproximada que esta usando la cola es igual a: "<<memtot<<"bytes"<<endl;
                    
            }
                break;

            case 4:
            	//Salida
            	system("cls");

                cout<<"\n\n\tEsta saliendo del programa\n";					
			    cout<<"\tQue pase un buen dia!\n";					

                break;
        }


        cout<<endl<<endl;
        system("pause");  system("cls");
        
   }while(op!=4);

 
  return EXIT_SUCCESS;
}
