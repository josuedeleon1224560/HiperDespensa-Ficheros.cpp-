#include<cstdlib>
#include<iostream>
#include<fstream>
#include <conio.h>
#include <iomanip>
#include<string.h>

using namespace std;
void Menu(), Consulta(), Todo(), Pagar(), Modificar(), Eliminar(), Nuevo(), Buscar();
int codigo, auxClave=0, sueldo, horaX, pagar, total;
int codigo2, sueldo2, horaX2;
	int opcion;
char nombre[30], apellido[30];
char nombre22[30], apellido22[30];
string apellido2, nombre2, apellido3;
string puesto;
bool encontrado=false;
int main()
{
Menu();

return 0;
system("PAUSE");
}

void Menu()
{
	do{
		system("COLOR 0B");
cout<<"( ^_^)/ -----------------HIPER DESPENSA----------------- \( ^_^)"<<endl;
cout<<"////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////";
cout<<setw(1)<<"1.-Generar registros dados. "<<setw(35)<<"|"<<setw(20)<<" 5.-Modificar los datos de los empleados existentes."<<endl;

cout<<setw(1)<<"2.-Mostrar el total a pagar. "<<setw(34)<<"|"<<setw(20)<<"6.-Opcion para eliminar datos del empleado."<<endl;

cout<<setw(1)<<"3.-Mostrar datos completos del personal por departamento. "<<setw(5)<<"|"<<setw(5)<<"7.-Opcion para buscar empleado."<<endl;

cout<<setw(1)<<"4.-Imprimir total a pagar por Departamento."<<setw(20)<<"|"<<setw(10)<<"8.-Salir."<<endl;
cout<<"////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////"<<endl;
//printf("5.-Modificar los datos de los empleados existentes. \n");
//printf("6.-Opcion para eliminar datos del empleado. \n");
//printf("7.-Opcion para buscar empleado. \n");
//cout<<setw(10)<<"8.-Salir. \n"<<endl;
printf("----------------------------------------------------\n");
cout<<"NOTA: Por recomendacion se le pide acceder a la opcion 1 para generar los datos. (-_-)"<<endl;
cout<<"____________________________\n";
printf("Escoga su opcion:\n");
scanf("%d", &opcion);
cout<<"____________________________\n";
system("cls");
	switch (opcion)
	{
		case 1:
			{
				Nuevo();
			}
		break;
		case 2: 
		{
			cout<<"_____________________________________________________________\n";
	Consulta();	
	cout<<"\n____________________________________________________\n";
		}
	break;
		case 3:
		{
		Todo();
		}
	break;
	case 4:
		{
			Pagar();
		}
	break;
	case 5:
		{
			Modificar();
		}
	break;
	case 6:
		{
		Eliminar();	
		}
	break;
	case 7: 
	{
		Buscar();
	}
	break;
	case 8:
		{
		cout<<"_G"<<setw(10)<<"_V"<<setw(20)<<"_P"<<endl;
cout<<"__R"<<setw(10)<<"__U"<<setw(20)<<"__R"<<endl;
cout<<"___A"<<setw(10)<<"___E"<<setw(20)<<"___O"<<endl;
cout<<"____C"<<setw(10)<<"____L"<<setw(20)<<"___N"<<endl;
cout<<"_____I"<<setw(10)<<"____V"<<setw(20)<<"____T"<<endl;
cout<<"______A"<<setw(10)<<"_____A"<<setw(20)<<"____O"<<endl;
cout<<"_______S"<<endl;	
		}
		break;
	default:
		{
			cout<<"¡Opcion Incorrecta!"<<endl;
			cout<<"Presione cualquier tecla para continuar......."<<endl;
			getch();
			system("cls");
		}
	}
}while(opcion!=8);
system("color 0A");
cout<<"\nHIPER DESPENSA"<<endl;
}
void Consulta()
{
	system("COLOR F8");
	   ifstream lectura;//Creamos la variable de tipo lectura
    lectura.open("archivo.txt",ios::out|ios::in);//Abrimos el archivo
    //validando la apertura del archivo
    encontrado=false;
    if(lectura.is_open()){
        cout<<"Ingresa el codigo del empleado que deseas Buscar: ";
        cin>>auxClave;
        lectura>>codigo;//lectura adelantada

        while(!lectura.eof()){ //Mientras no termine de leer todos los datos seguira repitiendose
            lectura>>nombre>>apellido>>puesto>>sueldo>>horaX;//leyendo los campos del registro
            //Comparar cada registro para ver si es encontrado
            if(auxClave==codigo){
                cout<<"__________________________________________________"<<endl;
                cout<<"Codigo: "<<codigo<<setw(10)<<"////////////////"<<endl;
                cout<<"Nombre: "<<nombre<<setw(10)<<"////////////////"<<endl;
                cout<<"Apellido: "<<apellido<<setw(10)<<"////////////////"<<endl;
                if (codigo>=0 && codigo<=100)
                {
                cout<<"Puesto: "<<puesto<<" de Produccion"<<setw(10)<<"////////////////"<<endl;	
                cout<<"Sueldo: "<<sueldo<<setw(10)<<"////////////////"<<endl;
                cout<<"Horas extras: "<<horaX<<setw(10)<<"////////////////"<<endl;
                pagar = horaX*25;
                total=pagar+sueldo;
                cout<<"Su sueldo total es de: Q"<<total<<setw(10)<<"////////////////"<<endl;
				}
				else if (codigo>100 && codigo<=200)
				{
				cout<<"Puesto: "<<puesto<<" de Venta"<<setw(10)<<"////////////////"<<endl;		
				cout<<"Sueldo: "<<sueldo<<setw(10)<<"////////////////"<<endl;
				cout<<"Horas extras: "<<horaX<<setw(10)<<"////////////////"<<endl;
				pagar = horaX*20;
                total=horaX+sueldo;
                cout<<"Su sueldo total es de: Q"<<total<<setw(10)<<"////////////////"<<endl;
				}
				else if (codigo>200 && codigo<=300)
				{
				cout<<"Puesto: Operadores "<<puesto<<setw(10)<<"////////////////"<<endl;		
				cout<<"Sueldo: "<<sueldo<<setw(10)<<"////////////////"<<endl;
				cout<<"Horas extras: "<<horaX<<setw(10)<<"////////////////"<<endl;
				pagar = horaX*15;
                total=horaX+sueldo;
                cout<<"Su sueldo total es de: Q"<<total<<setw(10)<<"////////////////"<<endl;
				}
				else if(codigo>300 && codigo<=400)
				{
				cout<<"Puesto: "<<puesto<<" de Venta"<<setw(10)<<"////////////////"<<endl;			
				cout<<"Sueldo: "<<sueldo<<setw(10)<<"////////////////"<<endl;
				cout<<"Horas extras: "<<horaX<<setw(10)<<"////////////////"<<endl;
			  pagar = horaX*10;
                total=horaX+sueldo;
                cout<<"Su sueldo total es de: Q"<<total<<setw(10)<<"////////////////"<<endl;
				}
                cout<<"__________________________________________________\a"<<endl;
                encontrado=true;
            }

            lectura>>codigo;//lectura adelantada
        }
        if(encontrado==false){
        	system("cls");
            cout<<"No hay registros con la Clave: "<<auxClave<<endl;
            system ("COLOR E9");
        }
    }else{
        cout<<"Se ha encontrado un error con el archivo. \(*T.T*)/\n"<<endl;
    }
    lectura.close(); //Cerrar siempre el fichero para que no siga ejecutando
    cout<<"\n------------------Presione para continuar---------------------";
    getch(); //Para que el usuario vea sus resultados
    system("cls");
}

void Todo()
{
	ifstream lectura;
    lectura.open("archivo.txt",ios::out|ios::in);
       if(lectura.is_open()){
        cout<<"Datos de los Empleados: "<<endl;
        cout<<"________________________________"<<endl;
        lectura>>codigo;
        while(!lectura.eof()){
            lectura>>nombre>>apellido>>puesto>>sueldo>>horaX;
if(codigo>=0 && codigo<=100)
            {
            	system("COLOR 01");
cout<<"______DEPARTAMENTO_DE_GERENTES_DE_PRODUCCION_____"<<endl;
            cout<<"Codigo: "<<codigo<<endl;
            cout<<"Nombre: "<<nombre<<endl;
            cout<<"Apellido: "<<apellido<<endl;
            cout<<"Puesto: "<<puesto<<" de Produccion"<<endl;
            cout<<"Sueldo: "<<sueldo<<endl;
            cout<<"Horas extras: "<<horaX<<endl;            
cout<<"________________________________________________\a"<<endl;	
			}
	else if(codigo>100 && codigo<=200)
	{
		system("COLOR 02");
cout<<"______DEPARTAMENTO_DE_JEFAS_DE_VENTAS_____"<<endl;
        cout<<"Codigo: "<<codigo<<endl;
            cout<<"Nombre: "<<nombre<<endl;
            cout<<"Apellido: "<<apellido<<endl;
            cout<<"Puesto: "<<puesto<<" de Venta"<<endl;
            cout<<"Sueldo: "<<sueldo<<endl;
            cout<<"Horas extras: "<<horaX<<endl;
cout<<"_________________________________________\a"<<endl;
	}
		else if(codigo>200 && codigo<=300)
		{
			system("COLOR 03");
	cout<<"______DEPARTAMENTO_DE_JEFES_DE_VENTAS_____"<<endl;
		cout<<"Codigo: "<<codigo<<endl;
            cout<<"Nombre: "<<nombre<<endl;
            cout<<"Apellido: "<<apellido<<endl;
      cout<<"Puesto: Operadores "<<puesto<<endl;
            cout<<"Sueldo: "<<sueldo<<endl;
            cout<<"Horas extras: "<<horaX<<endl;
cout<<"_________________________________________\a"<<endl;        
		}
		else if(codigo>300 && codigo<=400)
		{
			system("COLOR 05");
	cout<<"______DEPARTAMENTO_DE_GERENTES_DE_VENTAS_____"<<endl;
		cout<<"Codigo: "<<codigo<<endl;
            cout<<"Nombre: "<<nombre<<endl;
            cout<<"Apellido: "<<apellido<<endl;
	cout<<"Puesto: "<<puesto<<" de Venta"<<endl;
            cout<<"Sueldo: "<<sueldo<<endl;
            cout<<"Horas extras: "<<horaX<<endl;
cout<<"_________________________________________\a"<<endl;  
		}
		system("COLOR 0F");
            lectura>>codigo;
            cout<<"________________________________"<<endl;
        }
    }else{
        cout<<"Se ha encontrado un error con el archivo. \(*T.T*)/\n"<<endl;
    }
    lectura.close();
       cout<<"\n------------------Presione para continuar---------------------";
    getch(); //Para que el usuario vea sus resultados
    system("cls");
}

void Pagar()
{
	ifstream lectura;
    lectura.open("archivo.txt",ios::out|ios::in);
       if(lectura.is_open()){
        cout<<"Datos de los Empleados: "<<endl;
        cout<<"________________________________"<<endl;
        lectura>>codigo;
        while(!lectura.eof()){
            lectura>>nombre>>apellido>>puesto>>sueldo>>horaX;
if(codigo>=0 && codigo<=100)
            {
            	system("COLOR 01");
cout<<"______DEPARTAMENTO_DE_GERENTES_DE_PRODUCCION_____"<<endl;
            	cout<<"Codigo: "<<codigo<<endl;
        	    cout<<"Sueldo: "<<sueldo<<endl;
    	        cout<<"Horas extras: "<<horaX<<endl;            
	            cout<<"Costo de la hora extra: Q25"<<endl;
			pagar = horaX*25;
			cout<<"El aumento es de: "<<horaX<<"*25= "<<pagar<<endl;
	        cout<<"Pago de horas extras: Q"<<pagar<<endl;
    	total=horaX+sueldo;
	cout<<"Su sueldo total es de: Q"<<total<<endl;
cout<<"________________________________________________\a"<<endl;	
			}
	else if(codigo>100 && codigo<=200)
	{
		system("COLOR 02");
cout<<"______DEPARTAMENTO_DE_JEFAS_DE_VENTAS_____"<<endl;
        cout<<"Codigo: "<<codigo<<endl;
            cout<<"Sueldo: "<<sueldo<<endl;
            cout<<"Horas extras: "<<horaX<<endl;
            cout<<"Costo de la hora extra: Q20= "<<pagar<<endl;
			pagar = horaX*20;
			cout<<"El aumento es de: "<<horaX<<"*20= "<<pagar<<endl;
	        cout<<"Pago de horas extras: Q"<<pagar<<endl;
    	total=horaX+sueldo;
	cout<<"Su sueldo total es de: Q"<<total<<endl;
cout<<"_________________________________________\a"<<endl;
	}
		else if(codigo>200 && codigo<=300)
		{
			system("COLOR 03");
	cout<<"______DEPARTAMENTO_DE_JEFES_DE_VENTAS_____"<<endl;
		cout<<"Codigo: "<<codigo<<endl;
            cout<<"Sueldo: "<<sueldo<<endl;
            cout<<"Horas extras: "<<horaX<<endl;
        cout<<"Costo de la hora extra: Q15= "<<pagar<<endl;
			pagar = horaX*15;
			cout<<"El aumento es de: "<<horaX<<"*15= "<<pagar<<endl;
	        cout<<"Pago de horas extras: Q"<<pagar<<endl;
    	total=horaX+sueldo;
	cout<<"Su sueldo total es de: Q"<<total<<endl;
cout<<"_____________________________________\a____"<<endl;        
		}
		else if(codigo>300 && codigo<=400)
		{
			system("COLOR 05");
	cout<<"______DEPARTAMENTO_DE_GERENTES_DE_VENTAS_____"<<endl;
		cout<<"Codigo: "<<codigo<<endl;
            cout<<"Sueldo: "<<sueldo<<endl;
            cout<<"Horas extras: "<<horaX<<endl;
           cout<<"Costo de la hora extra: Q10"<<endl;
			pagar = horaX*10;
			cout<<"El aumento es de: "<<horaX<<"*10= "<<pagar<<endl;
	        cout<<"Pago de horas extras: Q"<<pagar<<endl;
    	total=horaX+sueldo;
	cout<<"Su sueldo total es de: Q"<<total<<endl;
cout<<"______________________________\a___________\a"<<endl;  
		}
		system("COLOR 0F");
            lectura>>codigo;
            cout<<"________________________________"<<endl;
        }
    }else{
   cout<<"Se ha encontrado un error con el archivo. \(*T.T*)/\n"<<endl;
    }
    lectura.close();
       cout<<"\n------------------Presione para continuar---------------------";
    getch(); //Para que el usuario vea sus resultados
    system("cls");
}

void Modificar()
{	
	
		ofstream Temp;
	  ifstream lectura;//Creamos la variable de tipo lectura
    lectura.open("archivo.txt",ios::out|ios::in);//Abrimos el archivo
    Temp.open("reemplazo.txt",ios::out);
    //validando la apertura del archivo
    encontrado=false;
    if(lectura.is_open()){
        cout<<"Ingresa el codigo del empleado que deseas Modificar: ";
        cin>>auxClave;
        lectura>>codigo;//lectura adelantada

        while(!lectura.eof()){ //Mientras no termine de leer todos los datos seguira repitiendose
            lectura>>nombre>>apellido>>puesto>>sueldo>>horaX;//leyendo los campos del registro
            //Comparar cada registro para ver si es encontrado
            if(auxClave==codigo){
            	system("COLOR 01");
                cout<<"______________________________"<<endl;
                cout<<"Codigo: "<<codigo<<endl;
                cout<<"Nombre: "<<nombre<<endl;
                cout<<"Apellido: "<<apellido<<endl;
                cout<<"-----------------------------------"<<endl;
                if (codigo>=0 && codigo<=100)
                {
                	system("COLOR 01");
                cout<<"Puesto: "<<puesto<<" de Produccion"<<endl;	
                cout<<"Sueldo: "<<sueldo<<endl;
                cout<<"Horas extras: "<<horaX<<endl;
				}
				else if (codigo>100 && codigo<=200)
				{
					system("COLOR 02");
				cout<<"Puesto: "<<puesto<<" de Venta"<<endl;		
				cout<<"Sueldo: "<<sueldo<<endl;
				cout<<"Horas extras: "<<horaX<<endl;
				}
				else if (codigo>200 && codigo<=300)
				{
					system("COLOR 03");
				cout<<"Puesto: Operadores "<<puesto<<endl;		
				cout<<"Sueldo: "<<sueldo<<endl;
				cout<<"Horas extras: "<<horaX<<endl;
				}
				else if(codigo>300 && codigo<=400)
				{
					system("COLOR 05");
				cout<<"Puesto: "<<puesto<<" de Venta"<<endl;			
				cout<<"Sueldo: "<<sueldo<<endl;
				cout<<"Horas extras: "<<horaX<<endl;
				}
				else
				{
					
				}
                cout<<"______________________________"<<endl;
                cout<<"Presiona cualquier tecla para continuar..........."<<endl;
                getch();
                system("cls");
                cout<<"//////////////////////////////////////////////////////////////\a"<<endl;
                system("COLOR F0");
                
                cout<<"(-_-;)"<<endl;
            cout<<"////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////";
                cout<<"Ingrese nuevo nombre"<<endl;
    cin>>nombre2;
                cout<<"Ingrese nuevo apellido"<<endl;
	cin>>apellido2;    	
	        cout<<"////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////";
               	cout<<"______________DATOS_MODIFICADOS______________________"<<endl;
        Temp<<codigo<<" "<<nombre2<<" "<<apellido2<<" "<<puesto<<" "<<sueldo<<" "<<horaX<<endl;
                encontrado=true;
            }
			else 
			{
	Temp<<codigo<<" "<<nombre<<" "<<apellido<<" "<<puesto<<" "<<sueldo<<" "<<horaX<<endl;
			}
            lectura>>codigo;//lectura adelantada
        }
        if(encontrado==false){
            cout<<"No hay registros con la Clave: "<<auxClave<<endl;
            system ("COLOR E9");
        }
    }else{
        cout<<"Se ha encontrado un error con el archivo. \(*T.T*)/\n"<<endl;
    }
    lectura.close(); //Cerrar siempre el fichero para que no siga ejecutando
    Temp.close();
   remove("archivo.txt");
   rename("reemplazo.txt", "archivo.txt");
    cout<<"\n------------------Presione para continuar---------------------";
    getch(); //Para que el usuario vea sus resultados
    system("cls");	

}

void Eliminar()
{
	ofstream Temp;
	  ifstream lectura;//Creamos la variable de tipo lectura
    lectura.open("archivo.txt",ios::out|ios::in);//Abrimos el archivo
    Temp.open("reemplazo.txt",ios::out);
    //validando la apertura del archivo
    encontrado=false;
    if(lectura.is_open()){
        cout<<"Ingresa el codigo del empleado que deseas Buscar: ";
        cin>>auxClave;
        lectura>>codigo;//lectura adelantada

        while(!lectura.eof()){ //Mientras no termine de leer todos los datos seguira repitiendose
            lectura>>nombre>>apellido>>puesto>>sueldo>>horaX;//leyendo los campos del registro
            //Comparar cada registro para ver si es encontrado
            if(auxClave==codigo){
            	system("cls");
            	system("COLOR 01");
                cout<<"______________________________"<<endl;
                cout<<"Codigo: "<<codigo<<endl;
                cout<<"Nombre: "<<nombre<<endl;
                cout<<"Apellido: "<<apellido<<endl;
                if (codigo>=0 && codigo<=100)
                {
                	system("COLOR 01");
                cout<<"Puesto: "<<puesto<<" de Produccion"<<endl;	
                cout<<"Sueldo: "<<sueldo<<endl;
                cout<<"Horas extras: "<<horaX<<endl;
				}
				else if (codigo>100 && codigo<=200)
				{
					system("COLOR 02");
				cout<<"Puesto: "<<puesto<<" de Venta"<<endl;		
				cout<<"Sueldo: "<<sueldo<<endl;
				cout<<"Horas extras: "<<horaX<<endl;
				}
				else if (codigo>200 && codigo<=300)
				{
					system("COLOR 03");
				cout<<"Puesto: Operadores "<<puesto<<endl;		
				cout<<"Sueldo: "<<sueldo<<endl;
				cout<<"Horas extras: "<<horaX<<endl;
				}
				else if(codigo>300 && codigo<=400)
				{
					system("COLOR 05");
				cout<<"Puesto: "<<puesto<<" de Venta"<<endl;			
				cout<<"Sueldo: "<<sueldo<<endl;
				cout<<"Horas extras: "<<horaX<<endl;
				}
                cout<<"______________________________"<<endl;
                encontrado=true;
            }
			else 
			{
	Temp<<codigo<<" "<<nombre<<" "<<apellido<<" "<<puesto<<" "<<sueldo<<" "<<horaX<<endl;
			}
            lectura>>codigo;//lectura adelantada
        }
        if(encontrado==false){
            cout<<"No hay registros con la Clave: "<<auxClave<<endl;
        }
    }else{
        cout<<"Se ha encontrado un error con el archivo. \(*T.T*)/\n"<<endl;
    }
    lectura.close(); //Cerrar siempre el fichero para que no siga ejecutando
    Temp.close();
    remove("archivo.txt");
    rename("reemplazo.txt", "archivo.txt");
    cout<<"\a\n------------------Presione para continuar---------------------";
    getch(); //Para que el usuario vea sus resultados
    system("cls");

}

void Nuevo()
{
	

	ofstream nuevo, archivo;
	ifstream archi;
	nuevo.open("archivo.txt",ios::out);
	archi.open("archivo.txt", ios::out|ios::in);
	if(nuevo.fail())
	{
		cout<<"No se pudo ejecutar bien el archivo.txt"<<endl;
	}		
	nuevo<<1<<" German "<<"Gonzalez "<<"Gerente "<<5500<<" "<<20<<endl;
	nuevo<<2<<" Fredy "<<"Luther "<<"Gerente "<<5500<<" "<<20<<endl;
	nuevo<<100<<" Telma "<<"Hernández "<<"Jefe "<<4600<<" "<<18<<endl;
	nuevo<<101<<" Orlando "<<"Gomez "<<"Jefe "<<4600<<" "<<18<<endl;
	nuevo<<200<<" Cristina "<<"Ochoa "<<"Tecnico "<<4550<<" "<<14<<endl;
	nuevo<<201<<" Ricardo "<<"Arriola "<<"Tecnico "<<4550<<" "<<14<<endl;
	nuevo<<202<<" Nicolas "<<"Avila "<<"Tecnico "<<4550<<" "<<14<<endl;
	nuevo<<300<<" Karla "<<"Urrutia "<<"Gerente "<<8450<<" "<<10<<endl;
	nuevo<<301<<" Julian "<<"Rendon "<<"Gerente "<<8450<<" "<<10<<endl;
	nuevo<<302<<" Nathali "<<"Chavez "<<"Gerente "<<8450<<" "<<10<<endl;
nuevo.close();
archivo.close();
	//remove("archivo.txt");
    //rename("reemplazo.txt", "archivo.txt");
}

void Buscar()
{
	 ifstream lectura;//Creamos la variable de tipo lectura
    lectura.open("archivo.txt",ios::out|ios::in);//Abrimos el archivo
    //validando la apertura del archivo
    encontrado=false;
    if(lectura.is_open()){
        cout<<"Ingresa el codigo del empleado que deseas Buscar: ";
        cin>>auxClave;
        lectura>>codigo;//lectura adelantada

        while(!lectura.eof()){ //Mientras no termine de leer todos los datos seguira repitiendose
            lectura>>nombre>>apellido>>puesto>>sueldo>>horaX;//leyendo los campos del registro
            //Comparar cada registro para ver si es encontrado
            if(auxClave==codigo){
                cout<<"______________________________"<<endl;
                cout<<"Codigo: "<<codigo<<endl;
                cout<<"Nombre: "<<nombre<<endl;
                cout<<"Apellido: "<<apellido<<endl;
                cout<<"______________________________"<<endl;
                encontrado=true;
            }

            lectura>>codigo;//lectura adelantada
        }
        if(encontrado==false){
            cout<<"No hay registros con la Clave: "<<auxClave<<endl;
            system ("COLOR E9");
        }
    }else{
        cout<<"Se ha encontrado un error con el archivo. \(*T.T*)/\n"<<endl;
    }
    lectura.close(); //Cerrar siempre el fichero para que no siga ejecutando
    cout<<"\n------------------Presione para continuar---------------------";
    getch(); //Para que el usuario vea sus resultados
    system("cls");
}
