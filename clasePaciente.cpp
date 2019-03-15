//Carlos Ivan Romero Hernandez

//librerias necesarias
#include <iostream>
#include <conio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class Paciente{
	
    private:
    	     int correlativo;
    	     char nombre[20];
    	     char apellido[20];
			 int edad;
			 char sexo[2]; 
			 char enfC[50];
    public:
    	  Paciente();
    	  void Mostrar();
    	  void Pedir();
    	  ~Paciente();
    	
};

Paciente::Paciente()
{

}
Paciente::~Paciente()
{

}

void Paciente::Pedir()
{
 	
  cout<<"\tIngrese la informacion correspondiente"<<endl;	
  cout<<"\n\nCorrelativo: ";
  cin>>correlativo;
  cout<<"\nNombre: ";
  cin>>nombre;
  cout<<"\nApellidos: ";
  cin>>apellido;
  cout<<"\nEdad: ";
  cin>>edad;
  cout<<"\nSexo:";
  cin>>sexo;
  cout<<"\nEnfermedad cronica: ";
  cin>>enfC;
}

void Paciente::Mostrar()
{
    getch();
	system("cls");
   cout<<"\tDatos del Paciente"<<endl;
   cout<<"\nCorrelativo: "<<correlativo<<endl;
   cout<<"\nNombre: "<<nombre<<endl;
   cout<<"\nApellido: "<<apellido<<endl;
   cout<<"\nEdad: "<<edad<<endl;
   cout<<"\nSexo: "<<sexo<<endl;
   cout<<"\nEnfermedad Cronica: "<<enfC<<endl;
}

int main(int argc, char** argv) {
	Paciente *o1;
	Paciente *o2;
	
	o1=new Paciente();
	o1->Pedir();
		
	o1->Mostrar();
	
	getch();
	system("cls");
	
	o2=new Paciente();
	o2->Pedir();
	o2->Mostrar();
	getch();
	return 0;
}
