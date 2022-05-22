/*
//ejetcicio 1 

// Persona.h

#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <stdlib.h>



using namespace std;

class Persona {
protected:
string nombre;
int edad;
public:

Persona(string,int);
//void mostrar();
private:
};

#endif

// Persona.cpp

#include "Persona.h"


Persona::Persona(string nom ,int eda){
nombre=nom;
edad=eda;

}

//Alumno.h

#ifndef ALUMNO_H
#define ALUMNO_H
#include "Persona.h"

class Alumno : public Persona {
public:
//Alumno();
Alumno(string,int);
string getNombre(){return nombre;}
int getEdad(){return edad;}
void mostrar();
private:
};

#endif

// Alumno.cpp

#include "Alumno.h"


Alumno::Alumno(string nom,int eda):Persona(nom,eda){
}
void Alumno::mostrar(){
cout<<"nombre : "<<nombre<<endl;
cout<<"edad : "<<edad<<endl;
}

//main.cpp

#include "Alumno.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){

Alumno a =  Alumno("ebert",18);
a.mostrar();
return 0;

}


*/


/*
//ejercicio 2 

//Color.h

#ifndef COLOR_H
#define COLOR_H

#include <iostream>
#include <stdlib.h>

using namespace std;


class Color{
protected:
string color;
public:
Color(string);

};
#endif

//Color.cpp

#include "Color.h"

Color::Color(string _color){
color=_color;
}


//Material.h

#ifndef MATERIAL_H
#define MATERIAL_H
#include "Color.h"

class Material:public Color{

protected:
string materia;
public:
Material(string,string);

};

#endif

//Material.cpp

#include "Material.h"

Material::Material(string _color,string mate):Color(_color){
materia=mate;

}

//Objeto.h 

#ifndef OBJETO_H
#define OBJETO_H
#include "Material.h"

class Objeto:public Material{
protected:
public:
Objeto(string,string);
void mostar();
};

#endif

//Objeto.cpp

#include "Objeto.h"
void Objeto::mostar(){
cout<<materia<<" de color "<<color<<endl;
}

Objeto::Objeto(string color, string materia):Material(color,materia){

}

//main.cppp


#include<iostream>
using namespace std;
#include "Objeto.h"
int main (int argc, char *argv[]) {

Objeto a=Objeto("rosado","mesa");
Objeto b=Objeto("negro","reloj");
Objeto c=Objeto("blanco","camisa");
a.mostar();
b.mostar();
c.mostar();

return 0;
}



*/


/*
//ejercicio3

//ProductoBancario.h

#ifndef PRODUCTOBANCARIO_H
#define PRODUCTOBANCARIO_H
#include<iostream>
#include <stdlib.h>
using namespace std;

class ProductoBancario{
protected:
string cliente;
int saldo;
int numeroProductos;
public:
ProductoBancario(string,int,int);
void imprimir();
~ProductoBancario();
};
#endif


//ProductoBancario.cpp

#include "ProductoBancario.h"


ProductoBancario::ProductoBancario(string _cliente,int _saldo,int _numeroProductos){
cliente=_cliente;
saldo=_saldo;
numeroProductos=_numeroProductos;
}

//CuentaJoven.h

#ifndef CUENTAJOVEN_H
#define CUENTAJOVEN_H
#include "ProductoBancario.h"
#include<iostream>
#include <stdlib.h>
using namespace std;

class CuentaJoven:public ProductoBancario{
protected:
public:
CuentaJoven();
void imprimir();
~CuentaJoven();
private:

};

#endif

//CuentaJoven.cpp

#include "CuentaJoven.h"
#include<iostream>
#include <stdlib.h>
using namespace std;

CuentaJoven::CuentaJoven(string,int,int) {

}


//Hipoteca.h


#ifndef HIPOTECA_H
#define HIPOTECA_H
#include "ProductoBancario.h"
#include<iostream>
#include <stdlib.h>
using namespace std;

class Hipoteca:public ProductoBancario{
protected:
public:
Hipoteca();
void imprimir();
~Hipoteca();
};
#endif


//hipoteca.cpp 

#include "Hipoteca.h"

Hipoteca::Hipoteca() {

}


//main.cpp
#include<iostream>
#include <stdlib.h>
using namespace std;
#include "Hipoteca.h"
#include "ProductoBancario.h"

int main (int argc, char *argv[]) {

return 0;
}





*/

/*
//ejercicio 4

//ClaseMultimedia.h

#ifndef CLASEMULTIMEDIA_H
#define CLASEMULTIMEDIA_H
#include <iostream>
#include <stdlib.h>
using namespace std;

class ClaseMultimedia{
protected:
string nombre;
public:
ClaseMultimedia(string);
};
#endif

//ClaseMultimedia.cpp

#include "ClaseMultimedia.h"

ClaseMultimedia::ClaseMultimedia(string _nombre){
nombre=_nombre;

}

//ClaseDisco.h

#ifndef CLASEDISCO_H
#define CLASEDISCO_H
#include "ClaseMultimedia.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

class ClaseDisco:public ClaseMultimedia{
protected:
int edad;
public:
ClaseDisco(string,int);
void imprimir();
};

#endif

//ClaseDisco.cpp 

#include "ClaseDisco.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

ClaseDisco::ClaseDisco(string _nombre,int _edad):ClaseMultimedia(_nombre){
edad=_edad;
}

void ClaseDisco::imprimir(){
cout<<"mi nombre es  "<<nombre<<" y tengo "<<edad<<" años";
}

//main.cpp


#include<iostream>
using namespace std;
#include <stdlib.h>
#include "ClaseDisco.h"

int main (int argc, char *argv[]) {

ClaseDisco a =ClaseDisco("Ebert ",20);
a.imprimir();
return 0;
}




*/



/*
//ejercicio 5


//OperacionBase.h

#ifndef OPERACIONBASE_H
#define OPERACIONBASE_H

class OperacionBase{
protected:
int numero;
public:

OperacionBase(int);
int getNumero(){return numero;}
};
#endif

//OperacionBase.cpp

#include "OperacionBase.h"

OperacionBase::OperacionBase(int _numero){
numero=_numero;
}

//OperacionFactorial.h

#ifndef OPERACIONFACTORIAL_H
#define OPERACIONFACTORIAL_H
#include "OperacionBase.h"

class OperacionFactorial:public OperacionBase{
protected:
int factorial;
public:
OperacionFactorial(int,int);
int getFactorial(){return factorial;}
void resultado();
};

#endif

//OperacionFactorial.cpp

#include "OperacionFactorial.h"
#include<iostream>
using namespace std;
#include <stdlib.h>
OperacionFactorial::OperacionFactorial(int _numero,int _factorial):OperacionBase(_numero){
factorial=_factorial;
}

int factorialn(int n) {
if(n < 0) return 0;
else if(n > 1) return n*factorialn(n-1);
return 1;
}

void OperacionFactorial::resultado(){
cout<<factorialn(factorial);

}

//main.cpp

#include<iostream>
using namespace std;
#include <stdlib.h>
#include "OperacionFactorial.h"
int main(int argc, char *argv[]) {

OperacionFactorial a=OperacionFactorial(6,6);
cout<<"numero ingreaso es : "<<a.getNumero()<<endl;
a.getNumero();
cout<<"el factorial de "<<a.getFactorial()<<" es : ";
a.resultado();
return 0;
}




*/


/*
//ejercicio 6

#include <iostream>
#include <stdlib.h>
using namespace std;
class Ave{
protected:
string nombre;
public:
Ave(string);
};
Ave::Ave(string _nombre){
nombre=_nombre;
}
class Pato:public Ave{
protected:
int alturapromedio;
public:
Pato(string,int);
void mostrarpato();
};

Pato::Pato(string _nombre,int _alturapromedio): Ave(_nombre){
alturapromedio=_alturapromedio;
}
void Pato::mostrarpato(){
cout<<"nombre : "<<nombre<<endl;
cout<<"altura poremedio : "<<alturapromedio<<" cm"<<endl;
}

class Ganso:public Ave{
protected:
int alturapromedio2;
public:
Ganso(string,int);
void mostrarganso();
};
Ganso::Ganso(string _nombre,int _alturapromedio2): Ave(_nombre){
alturapromedio2=_alturapromedio2;
}
void Ganso::mostrarganso(){
cout<<"nombre : "<<nombre<<endl;
cout<<"altura poremedio : "<<alturapromedio2<<" cm"<<endl;
}

class Gallina:public Ave{
protected:
int alturapromedio3;
public:
Gallina(string,int);
void mostrargallina();
};
Gallina::Gallina(string _nombre,int _alturapromedio3): Ave(_nombre){
alturapromedio3=_alturapromedio3;
}
void Gallina::mostrargallina(){
cout<<"nombre : "<<nombre<<endl;
cout<<"altura poremedio : "<<alturapromedio3<<" cm"<<endl;
}

int main(int argc, char *argv[]) {
Pato a =Pato("Pato",45);
a.mostrarpato();
Ganso b =Ganso("Ganso",25);
b.mostrarganso();
Gallina c =Gallina("Gallina",30);
c.mostrargallina();

return 0;
}
*/
