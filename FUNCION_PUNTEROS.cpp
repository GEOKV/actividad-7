#include<iostream>
using namespace std;
struct Estudiante{
	int *codigo;
	string *nombre;
	int **notas;
};

int main(){
	
int fila =0,columna =0;
	Estudiante estudiante;
	
	cout<<"Cuantos Estudiantes Desea Agregar: ";
	cin>>fila;	
	cout<<"Cuantas Notas Por Estudiante Desea Agregar: ";
	cin>>columna;	
	
	estudiante.codigo = new int[fila];
	estudiante.notas = new  int *[fila];
	estudiante.nombre = new string[fila];
	for (int i=0;i<fila;i++){
	estudiante.notas[i] = new int[columna]; 	
}	
	cout<<"--------------Ingrese Notas--------------"<<endl;

	for (int i=0;i<fila;i++){
	cout<<"Codigo["<<i<<"]: ";
	cin>>estudiante.codigo[i];
	cin.ignore();
	cout<<"Nombre["<<i<<"]:";
	getline(cin,estudiante.nombre[i]);
   	for (int ii=0;ii<columna;ii++){
	 
		cout<<"Ingrese Nota "<<ii<<": ";
		cin>>*(*(estudiante.notas+i)+ii);
	}
	cout<<"------------------------------------"<<endl;
}
	cout<<"--------------Mostrar Datos--------------"<<endl;
for (int i=0;i<fila;i++){
	cout<<"Codigo: "<<estudiante.codigo[i]<<" Estudiante:"<<estudiante.nombre[i]<<"."<<endl;
for (int ii=0;ii<columna;ii++){
	cout<<"Ingrese Nota ["<<ii<<"]: "<<*(*(estudiante.notas+i)+ii)<<endl;

	}
		cout<<"------------------------------------"<<endl;
}

for (int i=0;i<fila;i++){
	delete [] estudiante.notas[i];
}


delete[] estudiante.codigo;
delete[] estudiante.nombre;
delete [] estudiante.notas;

	system("PAUSE");

	
}
