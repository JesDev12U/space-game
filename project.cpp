/*NOMBRE: L�pez Bandala Jes�s Antonio
GRUPO: 4IM14
BOLETA: 2020120706*/
#include<iostream>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

void ubicacion(int x, int y)
{
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hCon,dwPos);
}

/*Las funciones ocultar_cursor() y mostrar_cursor() me sirven para habilitar y deshabilitar el cursor
para eso, si quiero que se quite el cursor, en el comando cci.bVisible lo igualo a FALSE
Si quiero que se habilite el cursor, lo igualo a TRUE, y si quiero cambiarle de grosor al cursor, en el 
comando cci.dwSize lo igualo a un n�mero que quiera (entre m�s peque�o sea el n�mero, m�s peque�o va a 
ser el grosor del cursor)*/

void ocultar_cursor() //Esta funci�n me sirve para ocultar el cursor '_'
{
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 2;
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(hCon,&cci);
}

void mostrar_cursor() //Esta funci�n me sirve para poder mostrar el cursor '_'
{
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 2;
	cci.bVisible = TRUE;
	SetConsoleCursorInfo(hCon,&cci);
}

/*Aqu� us� el comando printf para poner caracteres ASCII; para poder colocarlos, se debe de poner
dentro de las comillas el texto %c, eso hace que el comando pueda mostrar el caracter ASCII
despu�s de las comillas, se coloca una coma "," y despu�s el n�mero del caracter ASCII
El %c indica que hay una salida de una variable de tipo char, y en el programa en vez de aparecer
%c aparece el caracter ASCII*/
void marco() //Funci�n para el marco del juego
{
	int x=3, y=2;
	for(x=3;x<=115;x++)
	{
		ubicacion(x,y); printf("%c",205);
	}
	for(y=2;y<=27;y++)
	{
		ubicacion(x,y); printf("%c",186);
	}
	for(x=116;x>=3;x--)
	{
		ubicacion(x,y); printf("%c",205);
	}
	for(y=27;y>=2;y--)
	{
		ubicacion(x,y); printf("%c",186);
	}
	ubicacion(2,2); printf("%c",201); //esquina superior izquierda
	ubicacion(2,28); printf("%c",200); //esquina inferior izquierda
	ubicacion(116,2); printf("%c",187); //esquina superior derecha
	ubicacion(116,28); printf("%c",188); //esquina inferior derecha
}

//En algunas palabras, en vez de colocar las letras � � � � � � coloqu� � � � � � �
//y cuando se ejectuta el programa, en vez de mostrarme esos caracteres, me muestra los caracteres
// � � � � � �
//para que yo pueda saber qu� caracteres colocar, hago los siguientes pasos:
//1.- Abro el CMD (MS-DOS)
//2.- pongo el comando 'echo'
//3.- pongo un espacio y luego escribo los caracteres que quiero convertir, en este caso � � � � � �
//4.- Despu�s de colocar los caracteres, poner un espacio y poner el signo mayor que >
//5.- Despu�s le tenemos que poner nombre al archivo que queremos generar (el nombre que sea) y
//le ponemos la extensi�n txt EJEMPLO: caracteres.txt y luego se le da ENTER
//6.- Despues se pone el comando start y seguido de eso colocar el nombre junto la extensi�n de este
//EJEMPLO: start caracteres.txt
//7.- Autom�ticamente se abrir� el archivo en el Bloc de notas y ese archivo tendr� los caracteres
//que tengo que sustituir en el programa
//NOTA: No us� setlocale(LC_ALL,""); debido a que cuando pongo el comando, los caracteres ASCII me los
//cambia por otros caracteres.

void caratula() //Funci�n para la caratula o portada del juego
{
	int x=50, y=4;
	system("CLS");
	marco();
	for(x=5;x<=20;x++) 
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	x=5;
	for(y=4;y<=10;y++)
	{
		ubicacion(x,y); printf("%c",186);
		Sleep(10);
	}
	ubicacion(5,4); printf("%c",201);
	for(x=5;x<=20;x++)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	ubicacion(5,11); printf("%c",200);
	for(y=11;y<=16;y++)
	{
		ubicacion(x,y); printf("%c",186);
		Sleep(10);
	}
	ubicacion(21,11); printf("%c",187);
	for(x=20;x>=5;x--)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	ubicacion(21,17); printf("%c",188);
	y=4;
	for(x=28;x<=41;x++)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	for(y=4;y<=8;y++)
	{
		ubicacion(x,y); printf("%c",186);
		Sleep(10);
	}
	ubicacion(42,4); printf("%c",187);
	for(x=41;x>=28;x--)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	ubicacion(42,9); printf("%c",188);
	for(y=4;y<=17;y++)
	{
		ubicacion(x,y); printf("%c",186);
		Sleep(10);
	}
	ubicacion(27,4); printf("%c",201);
	y=4;
	for(x=49;x<=64;x++)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	for(y=4;y<=17;y++)
	{
		ubicacion(x,y); printf("%c",186);
		Sleep(10);
	}
	ubicacion(65,4); printf("%c",187);
	x=49;
	for(y=4;y<=17;y++)
	{
		ubicacion(x,y); printf("%c",186);
		Sleep(10);
	}
	ubicacion(49,4); printf("%c",201);
	y=9;
	for(x=50;x<=64;x++)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	y=4;
	for(x=72;x<=87;x++)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	x=72;
	for(y=4;y<=17;y++)
	{
		ubicacion(x,y); printf("%c",186);
		Sleep(10);
	}
	ubicacion(72,4); printf("%c",201);
	y=17;
	for(x=72;x<=87;x++)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	ubicacion(72,17); printf("%c",200);
	y=4;
	for(x=95;x<=110;x++)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	x=95;
	for(y=4;y<=17;y++)
	{
		ubicacion(x,y); printf("%c",186);
		Sleep(10);
	}
	ubicacion(95,4); printf("%c",201);
	y=17;
	for(x=95;x<=110;x++)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	ubicacion(95,17); printf("%c",200);
	y=9;
	for(x=96;x<=110;x++)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	ubicacion(20,1); cout<<"Hecho por: Jes�s Antonio L�pez Bandala    GRUPO: 4IM14   BOLETA: 2020120706";
	ubicacion(50,21); cout<<"�Salva al planeta tierra!";
	ubicacion(45,25); system("PAUSE");
	system("CLS");
}

void historia() 
{
	marco();
	ubicacion(50,4); cout<<"HISTORIA";
	ubicacion(5,8); cout<<"EL APOCALIPSIS HA EMPEZADO!";
	ubicacion(5,10); cout<<"La NASA ha confirmado que hay tres meteoritos que est�n a punto de caer en el planeta tierra. Estos";
	ubicacion(5,11); cout<<"meteoritos son muy grandes que si llegan a caer en la tierra, ser�n capaces de extinguir la";
	ubicacion(5,12); cout<<"vida humana!!";
	ubicacion(5,14); cout<<"S�lo un valiente puede ir a destruir esos meteoritos y as� hacer que la vida humana est� a salvo";
	ubicacion(5,18); cout<<"El valiente elegido ser�s t�, �Ve y destroza a esos meteoritos, no permitas que caigan a la tierra!";
	ubicacion(40,25); system("PAUSE");
	system("CLS");
}

void instrucciones()
{
	marco();
	ubicacion(50,4); cout<<"INSTRUCCIONES";
	ubicacion(5,8); printf("%c",271); cout<<" Con las teclas de navegaci�n IZQUIERDA y DERECHA (<- ->) mueves la nave";
	ubicacion(5,10); printf("%c",271); cout<<" S�lo cuentas con 5 vidas";
	ubicacion(5,12); printf("%c",271); cout<<" Mientras est�s jugando, van a caer asteroides, si los asteroides caen a tu nave, te quitar�n 1 vida";
	ubicacion(5,14); printf("%c",271); cout<<" Los meteoritos cuentan con 100 vidas; Con la tecla X puedes dispararles y as� bajarles 1 vida";
	ubicacion(5,16); printf("%c",271); cout<<" Si logras destruir a los 3 meteoritos, ganas el juego; pero, si tus vidas llegan a 0, pierdes el juego";
	ubicacion(5,18); printf("%c",271); cout<<" Si deseas ponerle pausa al juego, pulsa la tecla P";
	ubicacion(5,21); cout<<"SUERTE :)";
	ubicacion(45,25); system("PAUSE");
	system("CLS");
}

void final()
{
	int x=10, y=3;
	system("CLS");
	marco();
	for(x=10;x<=25;x++)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	x=10;
	for(y=3;y<=12;y++)
	{
		ubicacion(x,y); printf("%c",186);
		Sleep(10);
	}
	ubicacion(10,3); printf("%c",201);
	y=7;
	for(x=11;x<=25;x++)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	x=29;  
	for(y=3;y<=12;y++) 
	{
		ubicacion(x,y); printf("%c",186);
		Sleep(10); 	
	}
	x=35; 
	for(y=3;y<=12;y++)
	{
		ubicacion(x,y); printf("%c",186);
		Sleep(10);
	}
	ubicacion(36,3); printf("%c",92); 
	Sleep(10);
	ubicacion(37,4); printf("%c",92);
	Sleep(10);
	ubicacion(38,5); printf("%c",92);
	Sleep(10);
	ubicacion(39,6); printf("%c",92);
	Sleep(10);
	ubicacion(40,7); printf("%c",92);
	Sleep(10);
	ubicacion(41,8); printf("%c",92);
	Sleep(10);
	ubicacion(42,9); printf("%c",92);
	Sleep(10);
	ubicacion(43,10); printf("%c",92);
	Sleep(10);
	ubicacion(44,11); printf("%c",92);
	Sleep(10);
	ubicacion(45,12); printf("%c",92);
	Sleep(10);
	x=45;
	y=12;
	for(y=12;y>=3;y--)
	{
		ubicacion(x,y); printf("%c",186);
		Sleep(10);
	}
	x=56; 
	for(y=3;y<=12;y++)
	{
		ubicacion(x,y); printf("%c",186);
		Sleep(10);
	}
	y=3;
	for(x=56;x<=64;x++)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	ubicacion(56,3); printf("%c",201);
	x=65;
	for(y=4;y<=11;y++)
	{
		ubicacion(x,y); printf("%c",186);
		Sleep(10);
	}
	y=12;
	for(x=56;x<=64;x++)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	ubicacion(56,12); printf("%c",200);
	y=3;
	for(x=71;x<=79;x++)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	x=71;
	for(y=3;y<=12;y++)
	{
		ubicacion(x,y); printf("%c",186);
		Sleep(10);
	}
	ubicacion(71,3); printf("%c",201);
	y=12;
	for(x=71;x<=79;x++)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	ubicacion(71,12); printf("%c",200); 
	y=7;
	for(x=72;x<=79;x++)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	x=84;
	for(y=3;y<=12;y++)
	{
		ubicacion(x,y); printf("%c",186);
		Sleep(10);
	}
	y=12;
	for(x=84;x<=91;x++)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	ubicacion(84,12); printf("%c",200); 
	x=10;
	y=16;
	for(x=10;x<=25;x++)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	x=18;
	for(y=16;y<=25;y++)
	{
		ubicacion(x,y); printf("%c",186);
		Sleep(10);
	}
	ubicacion(18,16); printf("%c",201);
	y=25;
	for(x=18;x>=10;x--)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	ubicacion(18,25); printf("%c",188);
	x=31;
	for(y=16;y<=25;y++)
	{
		ubicacion(x,y); printf("%c",186);
		Sleep(10);
	}
	y=25;
	for(x=31;x<=39;x++)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	ubicacion(31,25); printf("%c",200);
	for(y=25;y>=16;y--)
	{
		ubicacion(x,y); printf("%c",186);
		Sleep(10);
	}
	ubicacion(40,25); printf("%c",188);
	y=16;
	for(x=46;x<=54;x++)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	x=46;
	for(y=16;y<=25;y++)
	{
		ubicacion(x,y); printf("%c",186);
		Sleep(10);
	}
	ubicacion(46,16); printf("%c",201);
	y=25;
	for(x=46;x<=54;x++)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	ubicacion(46,25); printf("%c",200);
	y=20;
	for(x=47;x<=54;x++)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	y=16;
	for(x=59;x<=70;x++)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	x=59;
	for(y=16;y<=25;y++)
	{
		ubicacion(x,y); printf("%c",186);
		Sleep(10);
	}
	ubicacion(59,16); printf("%c",201);
	y=25;
	for(x=59;x<=70;x++)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	ubicacion(59,25); printf("%c",200);
	x=70;
	for(y=25;y>=20;y--)
	{
		ubicacion(x,y); printf("%c",186);
		Sleep(10);
	}
	ubicacion(70,25); printf("%c",188);
	y=20;
	for(x=70;x>=60;x--)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	ubicacion(70,20); printf("%c",187);
	y=16;
	for(x=76;x<=86;x++)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	x=87;
	for(y=17;y<=24;y++)
	{
		ubicacion(x,y); printf("%c",186);
		Sleep(10);
	}
	y=25;
	for(x=86;x>=76;x--)
	{
		ubicacion(x,y); printf("%c",205);
		Sleep(10);
	}
	x=75;
	for(y=24;y>=17;y--)
	{
		ubicacion(x,y); printf("%c",186);
		Sleep(10);
	}
}

/*CLASES
Las clases quieren decir que son un grupo de OBJETOS que tiene caracter�sticas similares
Un ejemplo en la vida real son los vasos, hay muchos tipos de vasos (de vidrio, plastico, etc)
Y tambi�n de diferentes tama�os (chico, mediano, grande); Pero, independientemente de sus 
caracter�sticas, pues son vasos; Una clase es en general un modelo, receta o plantilla que define el 
estado y comportamiento de cierto tipo de objetos. Una clase puede pensarse como una colecci�n de 
variables (atributos o propiedades) y funciones (m�todos) que permiten representar un conjunto de datos 
y especificar las operaciones o procedimientos que permiten manipular tales datos.

OBJETO: Un objeto quiere decir que es un conjunto de atributos y m�todos; Los atributos son las
caracter�sticas que tiene el objeto y metodos son las acciones que puede tener el objeto
Un ejemplo en la vida real ser�a una persona, esta persona tiene atributos y m�todos; sus atributos
son sus CARACTER�STICAS, y pueden ser su color de pelo, sus a�os, Su peso, su talla, etc. Y sus 
METODOS son las ACCIONES que puede hacer, por ejemplo Comer, Dormir, Trabajar, Estudiar, etc

Otro concepto que se puede manejar es el de ABSTRACCI�N: La abstracci�n es un proceso mental
en el que solo se extraen las caracter�sticas principales de algo
Por ejemplo, si yo quiero sacar la abstracci�n de una persona, pues ser�an sus caracter�sticas
m�s importantes, por ejemplo: Su nombre, edad, peso, talla; Las caracter�sticas que NO ser�an
principales de esa persona ser�a la marca de su ropa, su auto, en donde trabaja, etc.*/

/*Aqu� creo una clase llamada NAVE*/
class NAVE
{
	int x,y,corazon, bala, vida1, vida2, vida3; //Estos son los atributos de la clase; Quiere decir
	//que son las caracter�sticas de la Nave, y estos valores son PRIVADOS, es decir, s�lo la clase NAVE
	//puede usar estos atributos; A eso se le llama ENCAPSULACI�N
//Tambi�n se le pueden agregar caracter�sticas de otras clases y no afecta en nada. Aqu� los atributos
// vida1, vida2, y vida3 son las vidas que tienen los meteoritos, pero estos atributos tambi�n entran
//en esta clase (clase NAVE) ya que la nave puede disparar y cuando dispara, pues le baja vida a los 
//meteoritos.
public: /*public significa p�blico, y quiere decir que lo que yo ponga aqu� lo puedo utilizar en esta clase
o tambi�n en otras clases.
Dentro del public, defino mis METODOS, estos metodos son funciones que voy a ocupar para la clase NAVE*/
/*Aqu� empiezo a definir mis metrodos (funciones) pero primero tengo que definir a mi constructor, este
me va a servir para poder programar los m�todos; Para poder definir mi constructor tengo que ponerle
el mismo nombre que tiene la clase (en este caso, como la clase se llama NAVE, pues mi constructor
tambi�n se llamar� NAVE); este constructor debe de llevar par�metros, y estos par�metros me van a servir
para poder usralos dentro de las funciones de la clase, y para ello, debo de poner () y dentro de los
par�ntesis poner el tipo de variable y el nombre de la variable, EL NOMBRE NO DEBE DE SER IGUAL AL DEL
ATRIBUTO, despu�s, para poder definir completamente el constructor, tenemos que igualar los atributos
con las variables que creamos dentro de los par�ntesis, para eso, hay dos metodos, uno es por
asignaci�n y el otro es por constructores de datos miembro

Por asignaci�n ser�a as�:
NAVE::NAVE (int x1, int y1, int corazon1, int bala1, int_vida1, int _vida2, int _vida3)
{
	x = x1;
	y = y1;
	corazon = corazon1;
	bala = bala1;
	vida1 = _vida1;
	vida2 = _vida2;
	vida3 = _vida3;
}
NOTA: Esto se debe de poner fuera de la clase.

Por constructores de datos miembro es as�:

	:x(x1),y(y1),corazon(corazon1), bala(bala1), vida1(_vida1), vida2(_vida2), vida3(_vida3) {}

NOTA: Esto se debe de poner a lado de haber definido el nombre del constructor

Para poder definir los constructores de datos miembro fuera de la estructura de la clase es as�:

NAVE::NAVE (int x1, int y1, int corazon1, int bala1, int_vida1, int _vida2, int _vida3):x(x1),y(y1),corazon(corazon1), bala(bala1), vida1(_vida1), vida2(_vida2), vida3(_vida3)

Los dos m�todos hacen exactamente lo mismo (igualar los atributos de la clase con los del constructor)
Yo opt� en hacerlo por constructores de datos miembro ya que as� se ahorran l�neas de c�digo.

�Porqu� tengo que igualar los atributos de la clase con las variables del constructor? Pues esto es para
poder utilizar los atributos dentro de los m�todos (funciones) de la clase.*/

	//CONSTRUCTOR hecho por datos miembro:
	NAVE(int x1, int y1, int corazon1, int bala1, int _vida1, int _vida2, int _vida3):x(x1),y(y1),corazon(corazon1), bala(bala1), vida1(_vida1), vida2(_vida2), vida3(_vida3) {}
	//METODOS:
	int _x(){return x;} //En los m�todos tambi�n puedo manipular o modificar los valores de los atributos.
	int _y(){return y;} //estos m�todos se pueden utilizar en otras clases, y para eso, se tiene que
	int CORAZONES() {corazon--;} //definir un nombre de referencia para la clase NAVE, 
	int _vida1(){return vida1;} //m�s abajo del programa explico c�mo hacerlo
	int _vida2(){return vida2;}
	int _vida3(){return vida3;}
	int VIDA1() {vida1--;}
	int VIDA2() {vida2--;}
	int VIDA3() {vida3--;}
	int NUMVIDAS(){return corazon;}
	void teclas();
	void diseno_nave();	
	void borrar_rastro();
	void corazones();
	void destruccion();
	void disparos();
	void balas();
}; //Aqu� es el final de la estructura de la clase, nos damos cuenta que es el final ya que despues del
//caracter } hay un ;

/*Despu�s del final de la estructura de la clase, tengo que programar los m�todos, y para poder
programarlos, debo de poner:

1.-El tipo de funci�n que definimos en la estructura de la clase (void, int, float, etc). Generalmente
se maneja de tipo void.
2.-El nombre de la clase (en este caso NAVE)
3.-Debemos de poner el operador doble dos puntos :: este operador sirve para poder acceder a los m�todos
de la clase
4.-Por �ltimo, poner el nombre que le pusimos al m�todo*/

void NAVE::diseno_nave()
{
	ubicacion(x,y); printf("%c",286);
	ubicacion(x-1,y+1); cout<<"/";
	ubicacion(x,y+1); cout<<"|";
	ubicacion(x+1,y+1); printf("%c",348);
	ubicacion(x-2,y+2); printf("%c",273);
	ubicacion(x-1,y+2); cout<<"=";
	ubicacion(x,y+2); cout<<"=";
	ubicacion(x+1,y+2); cout<<"=";
	ubicacion(x+2,y+2); printf("%c",272);
}
void NAVE::teclas()
{
	char tecla;
	if(kbhit()) //el comando kbhit() pertenece a la librer�a conio.h; este comando es util en condiciones
	{ //y significa que esta condici�n se ejecutar� solo si se pulsa una tecla, ya que si no pongo esta
		//condici�n, el sistema va a esperar hasta que pulse una tecla (esto pasa por el getch), haciendo
		//que todo el juego se detenga y lo dem�s no se ejecute.
		tecla=getch();
		borrar_rastro();
		if((tecla==75)and(x>7)) x--; //IZQUIERDA
		if((tecla==77)and(x+7<117)) x++; //DERECHA
		diseno_nave();
		corazones();
		if((tecla=='x')or(tecla=='X'))
		{
			disparos(); //Dentro de los m�todos tambi�n puedo llamar a otros m�todos de la misma clase
		}
		if((tecla=='p')or(tecla=='P'))
		{
			ubicacion(20,1); cout<<"PAUSA";
			Beep(1000,70);
			Beep(500,70);
			Beep(1000,70);
		    //El comando Beep pertenece a la librer�a windows.h y sirve para generar un sonido 
			getch(); //producido por la misma computadora para poder aplicarlo, tengo que poner dos n�meros, 
			ubicacion(20,1); cout<<"     "; //el primero es la frecuencia en Hertz, y el otro n�mero es la 
		}//duraci�n en milisegundos.									
	}
}
/*Esta funci�n me sirve para borrar el rastro o huella que va dejando la nave cada vez que la muevo
ya sea a la izquierda o a la derecha, para borrarlo, solo se deja un cout vac�o en las coordenadas
de la izquierda y derecha de la nave*/
void NAVE::borrar_rastro()
{ 
	ubicacion(x+1,y); cout<<"     "; //DERECHA
	ubicacion(x,y+1); cout<<"     "; //DERECHA
	ubicacion(x,y+2); cout<<"     "; //DERECHA
	ubicacion(x-1,y); cout<<"     "; //DERECHA
	ubicacion(x-2,y); cout<<"     ";//DERECHA
	ubicacion(x-4,y+1); cout<<"      "; //IZQUIERDA
	ubicacion(x-3,y+2); cout<<"      "; //IZQUIERDA
	ubicacion(x,y-3); cout<<"     ";
}

void NAVE::corazones()
{
	int i=0;
	ubicacion(70,1); cout<<"VIDAS";
	ubicacion(77,1); cout<<"     ";
	for(i=0;i<corazon;i++) //Este for me sirve para poner el c�digo ASCII de coraz�n; es un indicador de
	{						//cu�ntas vidas le quedan a la nave expresado en caracteres de coraz�n
		ubicacion(77+i,1); printf("%c",3); 
	}
	ubicacion(85,1); cout<<corazon; //Contador de vidas que le quedan a la nave expresado en un n�mero
	if(corazon<0) //Esta condici�n es en caso de que si caen dos asteroides al mismo tiempo e impactan
	{				// a la nave al mismo tiempo, el contador de vidas no llegue a -1, -2, etc.
		corazon=0;
	}
}

void NAVE::destruccion()
{
	if(corazon==0)
	{
		borrar_rastro();
		ubicacion(x,y+1); cout<<"X   X";
		ubicacion(x,y+2); cout<<"  X";
		ubicacion(x,y+3); cout<<"X   X";
		ubicacion(x-2,y+2); cout<<" ";
		ubicacion(x-1,y+1); cout<<" ";
		Sleep(700);
	}
}

void NAVE::balas()
{
	ubicacion(x,bala); printf("%c",260);
}

void NAVE::disparos()
{
	int i=0, j=0, k=0;
	bala--;
	if(bala>9)
	{
		bala=11;
	}
	ubicacion(x,bala); balas();
	Sleep(20);
	ubicacion(x,bala); cout<<" "; //Borra rastro de la bala
	for(i=12;i<=33;i++) //Cordenadas 12,33 del primer meteorito
	{
		if(x==i)
		{
			vida1--; //Vida del 1er meteorito
			if(vida1<0) vida1=0; //Esta condici�n sirve si la nave le sigue disparando a las coordenadas
			//del meteorito, pues este no siga bajando vida y se vaya a n�meros negativos
			ubicacion(22,3); cout<<vida1; //N�mero de vidas restantes del meteorito 1	
		}
	}
	for(j=45;j<=66;j++) //Coordenadas 45,66 del segundo meteorito
	{
		if(x==j)
		{
			vida2--; //Vida del 2do meteorito
			if(vida2<0) vida2=0;
			ubicacion(56,3); cout<<vida2; //N�mero de vidas restantes del meteorito 2
		}
	}
	for(k=78;k<=99;k++) //Coordenadas 78,99 del segundo meteorito
	{
		if(x==k)
		{
			vida3--; //Vida del 2do meteorito
			if(vida3<0) vida3=0;
			ubicacion(88,3); cout<<vida3; //N�mero de vidas restantes del meteorito 3
		}
	}
	if(vida1<=9) //Esta condici�n la hice ya que al momento de que el n�mero de vidas que le quedan al
	{			//meteorito llega a menor igual que 9, se genera un error que en vez de ponerme 9, 8, 7...
		ubicacion(23,3); cout<<" "; //me pone, 90, 80, 70... (es decir, se genera un 0 de m�s) entonces
	}								//para quitarlo, simplemente puse en la ubicaci�n de ese 0 un espacio
	if(vida2<=9)						//vac�o, y as� ya no se genera ese error.
	{
		ubicacion(57,3); cout<<" ";
	}
	if(vida3<=9)
	{
		ubicacion(89,3); cout<<" ";
	}
}

class METEORITO //CLASE METEORITO
{
	int x,y,x1,y1; //Atributos
public:
	METEORITO(int _x, int _y, int _x1, int _y1):x(_x),y(_y), x1(_x1), y1(_y1) {} //Constructor hecho por 	
	void estructura();       //M�todos de la clase								//datos miembro
	void quitar_estructura();
};

//PROGRAMACI�N DE LOS M�TODOS DE LA CLASE
void METEORITO::estructura()
{
	int i=0, j=0;
	for(i=x;i<=x1;i++)      
	{
		for(j=y;j<=y1;j++) 
		{
			ubicacion(i,j);
			printf("%c",6);
		}
	}
	marco(); //Dentro de los m�todos tambi�n puedo llamar a funciones que no est�n en ninguna clase
}

void METEORITO::quitar_estructura()
{
	int i=0, j=0;
	for(i=x;i<=x1;i++)    
	{
		for(j=y;j<=y1;j++) 
		{
			ubicacion(i,j);
			cout<<" ";
		}
	}
}

class ASTEROIDE //CLASE ASTEROIDE
{
	int x,y; //Atributos de la clase
public: 
	ASTEROIDE(int x1, int y1):x(x1), y(y1) {} //Constructor hecho por datos miembro
	void aste();        //M�todos
	void trayectoria();
	void choque(class NAVE &NAV); //En este m�todo estoy llev�ndome a los m�todos de la clase NAVE, 
//(en este caso, solo ocupar� los m�todos que retornan a los atributos x Y y), y para poderlos utilizar aqu�, debo
//de poner dentro de los par�ntesis del m�todo el texto struct o class, despues el nombre de la clase
//y por �ltimo, poner el nombre con el que vamos a llamar a los m�todos de la clase NAVE (en este caso
// le puse el nombre NAV) pero, antes de poner ese nombre, tenemos que ponerle este caracter &, y este
//caracter se utiliza para hacer referencia (en este caso, para hacer referencia a la clase NAVE
//utilizamos el nombre NAV)
};//Fin de la estructura de la clase

void ASTEROIDE::aste()
{
	ubicacion(x,y);	printf("%c",31);
}

void ASTEROIDE::trayectoria()
{
	ubicacion(x,y); cout<<" ";
	y++;
	if(y>25) 
	{
		x=rand()%98+4;
		y=11;
	}
	aste();
}

void ASTEROIDE::choque(class NAVE &NAV) //El m�todo lo llamo igual como lo hab�a definido en la clase ASTEROIDE
{
	/*Aqu� estoy haciendo una condici�n que es cuando el asteroide cae en la nave pues le baja vida a este.
	Para eso, debo de considerar las coordenadas X y Y tanto del asteroide como las de la nave,
	para poder llamar a esas coordenadas de la nave (el atributo x y el atributo y) debo de poner primero
	el nombre que le hab�a dado a la referencia de la clase NAVE (en este caso NAV), despu�s poner el
	nombre de la referencia, ponemos un punto, este punto sirve para llamar al m�todo de la clase NAVE
	despues ponemos el nombre que le dimos a los m�todos (en este caso los m�todos en los que
	retorne los atributos X y Y de la clase NAVE), y por �ltimo, indicar con que son funciones poniendo
	los par�ntesis ()
	
	En las condiciones puse signos de mayor que y menor que, esto es para hacer que si uno de los bordes
	tanto de izquierda, derecha y arriba llega a caer un asteroide se ejcuta la condicion.
	Esto es necesario ponerlo ya que si solo ponemos que sea igual (==) pues no va a considerar lo que es
	la parte de arriba y la parte de la izquierda y derecha de la nave, solo considerar� el centro de la nave
	Y le puse n�meros (-2, +2, +3) porque pasa de que si nos los pongo, el asteroide borra parte
	de la nave (traspasa la nave y borra la parte en la que cay�). Para evitar este error, solo es sumarle
	o restarle a los asteroides para que no traspasen la nave (de igual manera, se ejecuta la condici�n)*/
	if((x>=NAV._x()-2)and(x<NAV._x()+2)and(y>=NAV._y())and(y<=NAV._y()+3)) 
	{
		//Aqu� vuelvo a llamar a los m�todos de la clase NAVE, puedo llamar a los m�todos las veces que quiera
		NAV.CORAZONES();
		NAV.borrar_rastro();
		NAV.diseno_nave();
		NAV.corazones();
		//Aqu� gener� un n�mero aleatorio para x del asteroide y en Y el n�mero 11, esto es para que cuando
		//se ejecute la condici�n, pues que los asteroides cambien de lugar y no caigan en el mismo punto
		//ya que si no pongo esto, pasa un error en el que en vez de bajarme 1 vida, me baja m�s.
		//en Y le puse que sea igual a 11 ya que en la parte de arriba est�n los meteoritos, si yo le pongo 
		//que se generen en el l�mite superior de la pantalla, pues se borrar�n poco a poco los meteoritos
		x=rand()%98+4;
		y=11;
	}
}

int main()
{
	string resp="";
	int i=0;
	do //Este do sirve para repetir el programa
	{
		resp="";
		i=0;
		ocultar_cursor();
		caratula();
		historia();
		instrucciones();
		//En esta parte, estoy creando objetos
		//cuando los creo, estos se muestran en pantalla, para poder crear estos objetos, primero tengo
		//que crear un constructor
		//Para eso se debe de poner primero el nombre de la clase, despu�s poner el 
		//nombre del constructor (puede ser el nombre que sea) y dentro de los par�ntesis poner los valores
		//de todos los atributos que definimos en esa clase.
		//Haciendo esto, ya definimos un constrctor, ahora este constructor nos permite llamar a los m�todos
		//de la clase a la que nos referimos, para llamarla solo ponemos el nombre del constructor, despues
		//poner un punto (este punto sirve para llamar a un m�todo) y por �ltimo, poner el nombre del
		//m�todo que queremos llamar, y haciendo esto, se genera un objeto.
		//NOTA: Puedo crear los constructores y llamar a los m�todos las veces que quiera; osea, puedo
		//crear objetos las veces que quiera 
		//Los constructores nos van a ayudar a definir los objetos y a darle valor a los atributos de
		//la clase
		NAVE NAV(50,23,5,22,100,100,100); //CONSTRUCTOR DE LA CLASE NAVE
		NAV.diseno_nave();	//EL CONSTRUCTOR LLAMA A UN M�TODO DE LA CLASE NAVE			
		NAV.corazones(); //EL CONSTRUCTOR LLAMA A UN M�TODO DE LA CLASE NAVE
		//CONSTRUCTORES DE LA CLASE ASTEROIDE
		ASTEROIDE aste1(10,4);
		ASTEROIDE aste2(30,16);
		ASTEROIDE aste3(40,16);
		//CONSTRUCTORES DE LA CLASE METEORITO
		METEORITO bloq1(12,4,33,10);
		METEORITO bloq2(45,4,66,10);
		METEORITO bloq3(78,4,99,10);
		METEORITO quitar1(12,4,33,10);
		METEORITO quitar2(45,4,66,10);
		METEORITO quitar3(78,4,99,10);
		//EL CONSTRUCTOR LLAMA A UN M�TODO DE LA CLASE METEORITO
		bloq1.estructura(); 
		bloq2.estructura(); 
		bloq3.estructura(); 
		//Aqu� defin� a una variable de tipo bool, esta variable sirve para hacer verdaderas o falsas las 
		//variables, para hacer falsa una variable la tengo que igualar a false, si la quiero hacer 
		//verdadera, debo de ponerle true; estas variables se utilizan mucho para comparar condiciones
		//es decir si estas son verdaderas o falsas por ejemplo, si a = 1 y b = 2, pues b>a, entonces
		//si se cumple la condici�n, la variable bool se vuelve verdadera, pero si es el caso contrario,
		//se vuelve falsa, si yo quiero saber si la expresion es verdadera, la defino as�:
		//bool comparacion = b>a
		//al momento de mostrar la variable en pantalla, me va a poner un 1, si fuera el caso contrario, 
		//me pondr�a un 0, ya que este tipo de variables tienen un lenguaje binario
		// (0 es no, falso o cerrado; 1 es si, verdadero o abierto).
		//En este caso, la variable bool la utiliz� como una expresi�n l�gica, ya que pues al momento de
		//que empieza el juego, pues a�n no llega su fin, llega su fin hasta que la nave se destruya � 
		//la nave logre destruir a los tres meteoritos por eso, defin� a la variable fin_del_juego
		//como false, y al momento de que la vida de la nave llega a 0 o las vidas de los meteoritos llegan
		//a 0, pues ya llega el fin del juego, entonces la variable la vuelvo verdad (true).
		//Haciendo esta expresi�n l�gica, puedo crear un ciclo while, en el que este se ejecutar� mientras
		//fin del juego sea igual a falso y se romper� hasta que la variable sea igual a verdad
		//�Porqu� puse un ciclo while? pues porque la nave y los asteroides van a estar moviendose
		//constantemente, ya que si no pongo el ciclo while, solo se mover�n una vez y ya no seguira
		//el juego.
		//NOTA: las variables booleanas tambi�n las puedo igualar 0 si es falso o a 1 si es verdad, 
		//recordemos que estas variables se manejan con lenguaje binario.
		bool fin_del_juego=false; 
		while(fin_del_juego==false)	
		{
			/*En esta parte puse al los constructores llamando al m�todo choque, pero dentro de los
			par�ntesis puse NAV, esto lo hice ya que en el m�todo choque me hab�a llevado a los
			atributos x Y y de la clase NAVE, y pues hab�a definido un nombre de referencia, pues
			ese nombre lo debo de poner en los par�ntesis ya que si no lo pongo, NO ME COMPILA EL PROGRAMA*/
			aste1.trayectoria(); aste1.choque(NAV);
			aste2.trayectoria(); aste2.choque(NAV);
			aste3.trayectoria(); aste3.choque(NAV);
			if(NAV._vida1()==0)
			{
				quitar1.quitar_estructura();
				NAV.VIDA1(); //Este m�todo hace que tenga un decremento de 1 a la vida del meteorito
				//y esto lo puse ya que al destruir el meteorito, su valor de vida va a ser igual a 0
				//y como esta condici�n est� dentro de un ciclo, pues se va a seguir ejecutando, haciendo
				//que el programa se empieze a ejecutar lento; Ese m�todo s�lo me sirve para que esa 
				//condici�n no se siga ejecutando cada vez que el ciclo se repita.	
			}
			if(NAV._vida2()==0)
			{
				quitar2.quitar_estructura();
				NAV.VIDA2(); //Este m�todo tiene la misma funci�n que el m�todo VIDA1	
			}
			if(NAV._vida3()==0)
			{
				quitar3.quitar_estructura();
				NAV.VIDA3(); //Este m�todo tiene la misma funci�n que el m�todo VIDA1
			}
			NAV.teclas(); //El m�todo teclas lo pongo ya que es el que me permite que la nave se mueva
			//y la pongo dentro del while porque la nave la vamos a mover constantemente
			Sleep(30);
			if(NAV.NUMVIDAS()==0) //Aqu� llamo al m�todo NUMVIDAS (este m�todo retorna el valor de los
			//corazones o vidas que le quedan a la nave) y para llamar ese m�todo son los mismos pasos:
			//pongo el nombre del constructor, pongo un punto que me sirve para llamar al m�todo y pongo 
			//el nombre del m�todo
			{
				NAV.destruccion();
				ubicacion(20,1); cout<<"SE AGOTARON TUS VIDAS!";
				for(i=1000;i>=200;i-=200)
				{
					Beep(i,100);
				}
				Sleep(3000);
				system("CLS");
				marco();
				ubicacion(10,5); cout<<"PERDISTE EL JUEGO!";
				ubicacion(10,7); cout<<"Los humanos se han extinguido, los meteoritos cayeron a la tierra";
				ubicacion(10,9); cout<<"Suerte para la pr�xima ;D";
				Sleep(5000);
				final();
				fin_del_juego = true; //En esta parte, indica el final del juego cuando la vida de la nave
				//llega a ser 0, entonces, como ya es el final del juego, pues la variable booleana que 
				//hab�a declarado inicialmente, la vuelvo verdad
			}
			/*Si la vida de los meteoritos llega a ser 0 y la vida de la nave es mayor a 0, entonces
			gano el juego*/
			if((NAV._vida1()<=0)and(NAV._vida2()<=0)and(NAV._vida3()<=0)and(NAV.NUMVIDAS()>0)) 
			{
				quitar1.quitar_estructura(); //Cuando la vida de los meteoritos llega a 0, entonces 
				quitar2.quitar_estructura();//los tengo que quitar de la pantalla
				quitar3.quitar_estructura();
				ubicacion(20,1); cout<<"GANASTE EL JUEGO !!!";
				Beep(200,100);
				Beep(1000,100);
				Beep(400,100);
				Beep(800,100);
				Beep(600,100);
				Beep(400,100);
				Beep(1000,100);
				Sleep(3000);
				system("CLS");
				marco();
				ubicacion(10,5); cout<<"GANASTE EL JUEGO!!";
				ubicacion(10,7); cout<<"El planeta tierra est� a salvo gracias a t� !!";
				ubicacion(10,9); cout<<"Eres un h�roe sin capa!! ;D";
				Sleep(5000);
				final();
				fin_del_juego = true; //Como logr� destruir a los tres meteoritos, gano el juego, entonces
				//al ganar, pues ya es el fin del juego, entonces la varable booleana la igualo a true.
			}
		}
		mostrar_cursor(); //Aqu� hago que el cursor se muestre, ya que el usuario ingresar� un texto
		//y el cursor puede servir como gu�a para que el usuario sepa d�nde est� escribiendo.
		ubicacion(10,26); cout<<"�Deseas volver a jugar? (Si/No): "; cin>>resp;
	}
	while((resp=="SI")or(resp=="Si")or(resp=="si")or(resp=="sI"));
	ubicacion(10,30); cout<<"Es todo...";
	ubicacion(10,32); system("PAUSE");
	return 0;
}
/*En este programa, se puede dar cuenta que dej� al final el principal (main) esto lo hice ya que
es m�s c�modo programar primero las funciones o las clases ya que si dejo el main al principio
tengo que primero definir las funciones antes del main, y ya despu�s del main empezar
a programar cada una de las funciones; pero, si dejo al final el main y empiezo primero a
programar las funciones o clases, ya no est� la necesidad de primero nombrarlas y despu�s programarlas.*/
