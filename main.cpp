#include <iostream>
#include <stdlib.h>
#include <fstream> 

using namespace std;

int main()
{
   string nombre;
   string apellido;
   int edad;
   char r='n';
   ofstream archivoprueba;
   string nombrearchivo;
   cout<<"Ingrese el nombre del archivo: ";
   getline(cin,nombrearchivo);
   archivoprueba.open(nombrearchivo.c_str(),ios::app);
   do
    {
    cout<<"\tIngrese el nombre: ";
    getline(cin,nombre,'\n');

    cout<<"\tIngrese el apellido: ";
    getline(cin,apellido,'\n');

    cout<<"\tIngrese la edad: ";
    cin>>edad;

    archivoprueba<<nombre<<" "<<apellido<<" "<<edad<<"\n";
    cin.ignore();
    }
   while(r=='s');
   
   archivoprueba.close();


   ifstream archivolectura("contactos.txt");
   string texto;

   while(!archivolectura.eof())
    {
        archivolectura>>nombre>>apellido>>edad;

        if(!archivolectura.eof())
            {
        getline(archivolectura,texto);
        cout<<"Su nombre es: "<<nombre<<"\n";
        cout<<"Su Apellido es: "<<apellido<<"\n";
        cout<<"Su edad es: "<<edad<<"\n";

            }

    }
   archivolectura.close();


    return 0;
}
