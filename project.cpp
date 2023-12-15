/*NOMBRE: López Bandala Jesús Antonio
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
comando cci.dwSize lo igualo a un número que quiera (entre más pequeño sea el número, más pequeño va a 
ser el grosor del cursor)*/

void ocultar_cursor() //Esta función me sirve para ocultar el cursor '_'
{
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 2;
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(hCon,&cci);
}

void mostrar_cursor() //Esta función me sirve para poder mostrar el cursor '_'
{
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 2;
	cci.bVisible = TRUE;
	SetConsoleCursorInfo(hCon,&cci);
}

/*Aquí usé el comando printf para poner caracteres ASCII; para poder colocarlos, se debe de poner
dentro de las comillas el texto %c, eso hace que el comando pueda mostrar el caracter ASCII
después de las comillas, se coloca una coma "," y después el número del caracter ASCII
El %c indica que hay una salida de una variable de tipo char, y en el programa en vez de aparecer
%c aparece el caracter ASCII*/
void marco() //Función para el marco del juego
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

//En algunas palabras, en vez de colocar las letras á é í ó ú ¿ coloqué   ‚ ¡ ¢ £ ¨
//y cuando se ejectuta el programa, en vez de mostrarme esos caracteres, me muestra los caracteres
// á é í ó ú ¿
//para que yo pueda saber qué caracteres colocar, hago los siguientes pasos:
//1.- Abro el CMD (MS-DOS)
//2.- pongo el comando 'echo'
//3.- pongo un espacio y luego escribo los caracteres que quiero convertir, en este caso á é í ó ú ¿
//4.- Después de colocar los caracteres, poner un espacio y poner el signo mayor que >
//5.- Después le tenemos que poner nombre al archivo que queremos generar (el nombre que sea) y
//le ponemos la extensión txt EJEMPLO: caracteres.txt y luego se le da ENTER
//6.- Despues se pone el comando start y seguido de eso colocar el nombre junto la extensión de este
//EJEMPLO: start caracteres.txt
//7.- Automáticamente se abrirá el archivo en el Bloc de notas y ese archivo tendrá los caracteres
//que tengo que sustituir en el programa
//NOTA: No usé setlocale(LC_ALL,""); debido a que cuando pongo el comando, los caracteres ASCII me los
//cambia por otros caracteres.

void caratula() //Función para la caratula o portada del juego
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
	ubicacion(20,1); cout<<"Hecho por: Jes£s Antonio L¢pez Bandala    GRUPO: 4IM14   BOLETA: 2020120706";
	ubicacion(50,21); cout<<"­Salva al planeta tierra!";
	ubicacion(45,25); system("PAUSE");
	system("CLS");
}

void historia() 
{
	marco();
	ubicacion(50,4); cout<<"HISTORIA";
	ubicacion(5,8); cout<<"EL APOCALIPSIS HA EMPEZADO!";
	ubicacion(5,10); cout<<"La NASA ha confirmado que hay tres meteoritos que est n a punto de caer en el planeta tierra. Estos";
	ubicacion(5,11); cout<<"meteoritos son muy grandes que si llegan a caer en la tierra, ser n capaces de extinguir la";
	ubicacion(5,12); cout<<"vida humana!!";
	ubicacion(5,14); cout<<"S¢lo un valiente puede ir a destruir esos meteoritos y as¡ hacer que la vida humana est‚ a salvo";
	ubicacion(5,18); cout<<"El valiente elegido ser s t£, ­Ve y destroza a esos meteoritos, no permitas que caigan a la tierra!";
	ubicacion(40,25); system("PAUSE");
	system("CLS");
}

void instrucciones()
{
	marco();
	ubicacion(50,4); cout<<"INSTRUCCIONES";
	ubicacion(5,8); printf("%c",271); cout<<" Con las teclas de navegaci¢n IZQUIERDA y DERECHA (<- ->) mueves la nave";
	ubicacion(5,10); printf("%c",271); cout<<" S¢lo cuentas con 5 vidas";
	ubicacion(5,12); printf("%c",271); cout<<" Mientras est‚s jugando, van a caer asteroides, si los asteroides caen a tu nave, te quitar n 1 vida";
	ubicacion(5,14); printf("%c",271); cout<<" Los meteoritos cuentan con 100 vidas; Con la tecla X puedes dispararles y as¡ bajarles 1 vida";
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
Las clases quieren decir que son un grupo de OBJETOS que tiene características similares
Un ejemplo en la vida real son los vasos, hay muchos tipos de vasos (de vidrio, plastico, etc)
Y también de diferentes tamaños (chico, mediano, grande); Pero, independientemente de sus 
características, pues son vasos; Una clase es en general un modelo, receta o plantilla que define el 
estado y comportamiento de cierto tipo de objetos. Una clase puede pensarse como una colección de 
variables (atributos o propiedades) y funciones (métodos) que permiten representar un conjunto de datos 
y especificar las operaciones o procedimientos que permiten manipular tales datos.

OBJETO: Un objeto quiere decir que es un conjunto de atributos y métodos; Los atributos son las
características que tiene el objeto y metodos son las acciones que puede tener el objeto
Un ejemplo en la vida real sería una persona, esta persona tiene atributos y métodos; sus atributos
son sus CARACTERÍSTICAS, y pueden ser su color de pelo, sus años, Su peso, su talla, etc. Y sus 
METODOS son las ACCIONES que puede hacer, por ejemplo Comer, Dormir, Trabajar, Estudiar, etc

Otro concepto que se puede manejar es el de ABSTRACCIÓN: La abstracción es un proceso mental
en el que solo se extraen las características principales de algo
Por ejemplo, si yo quiero sacar la abstracción de una persona, pues serían sus características
más importantes, por ejemplo: Su nombre, edad, peso, talla; Las características que NO serían
principales de esa persona sería la marca de su ropa, su auto, en donde trabaja, etc.*/

/*Aquí creo una clase llamada NAVE*/
class NAVE
{
	int x,y,corazon, bala, vida1, vida2, vida3; //Estos son los atributos de la clase; Quiere decir
	//que son las características de la Nave, y estos valores son PRIVADOS, es decir, sólo la clase NAVE
	//puede usar estos atributos; A eso se le llama ENCAPSULACIÓN
//También se le pueden agregar características de otras clases y no afecta en nada. Aquí los atributos
// vida1, vida2, y vida3 son las vidas que tienen los meteoritos, pero estos atributos también entran
//en esta clase (clase NAVE) ya que la nave puede disparar y cuando dispara, pues le baja vida a los 
//meteoritos.
public: /*public significa público, y quiere decir que lo que yo ponga aquí lo puedo utilizar en esta clase
o también en otras clases.
Dentro del public, defino mis METODOS, estos metodos son funciones que voy a ocupar para la clase NAVE*/
/*Aquí empiezo a definir mis metrodos (funciones) pero primero tengo que definir a mi constructor, este
me va a servir para poder programar los métodos; Para poder definir mi constructor tengo que ponerle
el mismo nombre que tiene la clase (en este caso, como la clase se llama NAVE, pues mi constructor
también se llamará NAVE); este constructor debe de llevar parámetros, y estos parámetros me van a servir
para poder usralos dentro de las funciones de la clase, y para ello, debo de poner () y dentro de los
paréntesis poner el tipo de variable y el nombre de la variable, EL NOMBRE NO DEBE DE SER IGUAL AL DEL
ATRIBUTO, después, para poder definir completamente el constructor, tenemos que igualar los atributos
con las variables que creamos dentro de los paréntesis, para eso, hay dos metodos, uno es por
asignación y el otro es por constructores de datos miembro

Por asignación sería así:
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

Por constructores de datos miembro es así:

	:x(x1),y(y1),corazon(corazon1), bala(bala1), vida1(_vida1), vida2(_vida2), vida3(_vida3) {}

NOTA: Esto se debe de poner a lado de haber definido el nombre del constructor

Para poder definir los constructores de datos miembro fuera de la estructura de la clase es así:

NAVE::NAVE (int x1, int y1, int corazon1, int bala1, int_vida1, int _vida2, int _vida3):x(x1),y(y1),corazon(corazon1), bala(bala1), vida1(_vida1), vida2(_vida2), vida3(_vida3)

Los dos métodos hacen exactamente lo mismo (igualar los atributos de la clase con los del constructor)
Yo opté en hacerlo por constructores de datos miembro ya que así se ahorran líneas de código.

¿Porqué tengo que igualar los atributos de la clase con las variables del constructor? Pues esto es para
poder utilizar los atributos dentro de los métodos (funciones) de la clase.*/

	//CONSTRUCTOR hecho por datos miembro:
	NAVE(int x1, int y1, int corazon1, int bala1, int _vida1, int _vida2, int _vida3):x(x1),y(y1),corazon(corazon1), bala(bala1), vida1(_vida1), vida2(_vida2), vida3(_vida3) {}
	//METODOS:
	int _x(){return x;} //En los métodos también puedo manipular o modificar los valores de los atributos.
	int _y(){return y;} //estos métodos se pueden utilizar en otras clases, y para eso, se tiene que
	int CORAZONES() {corazon--;} //definir un nombre de referencia para la clase NAVE, 
	int _vida1(){return vida1;} //más abajo del programa explico cómo hacerlo
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
}; //Aquí es el final de la estructura de la clase, nos damos cuenta que es el final ya que despues del
//caracter } hay un ;

/*Después del final de la estructura de la clase, tengo que programar los métodos, y para poder
programarlos, debo de poner:

1.-El tipo de función que definimos en la estructura de la clase (void, int, float, etc). Generalmente
se maneja de tipo void.
2.-El nombre de la clase (en este caso NAVE)
3.-Debemos de poner el operador doble dos puntos :: este operador sirve para poder acceder a los métodos
de la clase
4.-Por último, poner el nombre que le pusimos al método*/

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
	if(kbhit()) //el comando kbhit() pertenece a la librería conio.h; este comando es util en condiciones
	{ //y significa que esta condición se ejecutará solo si se pulsa una tecla, ya que si no pongo esta
		//condición, el sistema va a esperar hasta que pulse una tecla (esto pasa por el getch), haciendo
		//que todo el juego se detenga y lo demás no se ejecute.
		tecla=getch();
		borrar_rastro();
		if((tecla==75)and(x>7)) x--; //IZQUIERDA
		if((tecla==77)and(x+7<117)) x++; //DERECHA
		diseno_nave();
		corazones();
		if((tecla=='x')or(tecla=='X'))
		{
			disparos(); //Dentro de los métodos también puedo llamar a otros métodos de la misma clase
		}
		if((tecla=='p')or(tecla=='P'))
		{
			ubicacion(20,1); cout<<"PAUSA";
			Beep(1000,70);
			Beep(500,70);
			Beep(1000,70);
		    //El comando Beep pertenece a la librería windows.h y sirve para generar un sonido 
			getch(); //producido por la misma computadora para poder aplicarlo, tengo que poner dos números, 
			ubicacion(20,1); cout<<"     "; //el primero es la frecuencia en Hertz, y el otro número es la 
		}//duración en milisegundos.									
	}
}
/*Esta función me sirve para borrar el rastro o huella que va dejando la nave cada vez que la muevo
ya sea a la izquierda o a la derecha, para borrarlo, solo se deja un cout vacío en las coordenadas
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
	for(i=0;i<corazon;i++) //Este for me sirve para poner el código ASCII de corazón; es un indicador de
	{						//cuántas vidas le quedan a la nave expresado en caracteres de corazón
		ubicacion(77+i,1); printf("%c",3); 
	}
	ubicacion(85,1); cout<<corazon; //Contador de vidas que le quedan a la nave expresado en un número
	if(corazon<0) //Esta condición es en caso de que si caen dos asteroides al mismo tiempo e impactan
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
			if(vida1<0) vida1=0; //Esta condición sirve si la nave le sigue disparando a las coordenadas
			//del meteorito, pues este no siga bajando vida y se vaya a números negativos
			ubicacion(22,3); cout<<vida1; //Número de vidas restantes del meteorito 1	
		}
	}
	for(j=45;j<=66;j++) //Coordenadas 45,66 del segundo meteorito
	{
		if(x==j)
		{
			vida2--; //Vida del 2do meteorito
			if(vida2<0) vida2=0;
			ubicacion(56,3); cout<<vida2; //Número de vidas restantes del meteorito 2
		}
	}
	for(k=78;k<=99;k++) //Coordenadas 78,99 del segundo meteorito
	{
		if(x==k)
		{
			vida3--; //Vida del 2do meteorito
			if(vida3<0) vida3=0;
			ubicacion(88,3); cout<<vida3; //Número de vidas restantes del meteorito 3
		}
	}
	if(vida1<=9) //Esta condición la hice ya que al momento de que el número de vidas que le quedan al
	{			//meteorito llega a menor igual que 9, se genera un error que en vez de ponerme 9, 8, 7...
		ubicacion(23,3); cout<<" "; //me pone, 90, 80, 70... (es decir, se genera un 0 de más) entonces
	}								//para quitarlo, simplemente puse en la ubicación de ese 0 un espacio
	if(vida2<=9)						//vacío, y así ya no se genera ese error.
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
	void estructura();       //Métodos de la clase								//datos miembro
	void quitar_estructura();
};

//PROGRAMACIÓN DE LOS MÉTODOS DE LA CLASE
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
	marco(); //Dentro de los métodos también puedo llamar a funciones que no están en ninguna clase
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
	void aste();        //Métodos
	void trayectoria();
	void choque(class NAVE &NAV); //En este método estoy llevándome a los métodos de la clase NAVE, 
//(en este caso, solo ocuparé los métodos que retornan a los atributos x Y y), y para poderlos utilizar aquí, debo
//de poner dentro de los paréntesis del método el texto struct o class, despues el nombre de la clase
//y por último, poner el nombre con el que vamos a llamar a los métodos de la clase NAVE (en este caso
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

void ASTEROIDE::choque(class NAVE &NAV) //El método lo llamo igual como lo había definido en la clase ASTEROIDE
{
	/*Aquí estoy haciendo una condición que es cuando el asteroide cae en la nave pues le baja vida a este.
	Para eso, debo de considerar las coordenadas X y Y tanto del asteroide como las de la nave,
	para poder llamar a esas coordenadas de la nave (el atributo x y el atributo y) debo de poner primero
	el nombre que le había dado a la referencia de la clase NAVE (en este caso NAV), después poner el
	nombre de la referencia, ponemos un punto, este punto sirve para llamar al método de la clase NAVE
	despues ponemos el nombre que le dimos a los métodos (en este caso los métodos en los que
	retorne los atributos X y Y de la clase NAVE), y por último, indicar con que son funciones poniendo
	los paréntesis ()
	
	En las condiciones puse signos de mayor que y menor que, esto es para hacer que si uno de los bordes
	tanto de izquierda, derecha y arriba llega a caer un asteroide se ejcuta la condicion.
	Esto es necesario ponerlo ya que si solo ponemos que sea igual (==) pues no va a considerar lo que es
	la parte de arriba y la parte de la izquierda y derecha de la nave, solo considerará el centro de la nave
	Y le puse números (-2, +2, +3) porque pasa de que si nos los pongo, el asteroide borra parte
	de la nave (traspasa la nave y borra la parte en la que cayó). Para evitar este error, solo es sumarle
	o restarle a los asteroides para que no traspasen la nave (de igual manera, se ejecuta la condición)*/
	if((x>=NAV._x()-2)and(x<NAV._x()+2)and(y>=NAV._y())and(y<=NAV._y()+3)) 
	{
		//Aquí vuelvo a llamar a los métodos de la clase NAVE, puedo llamar a los métodos las veces que quiera
		NAV.CORAZONES();
		NAV.borrar_rastro();
		NAV.diseno_nave();
		NAV.corazones();
		//Aquí generé un número aleatorio para x del asteroide y en Y el número 11, esto es para que cuando
		//se ejecute la condición, pues que los asteroides cambien de lugar y no caigan en el mismo punto
		//ya que si no pongo esto, pasa un error en el que en vez de bajarme 1 vida, me baja más.
		//en Y le puse que sea igual a 11 ya que en la parte de arriba están los meteoritos, si yo le pongo 
		//que se generen en el límite superior de la pantalla, pues se borrarán poco a poco los meteoritos
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
		//Para eso se debe de poner primero el nombre de la clase, después poner el 
		//nombre del constructor (puede ser el nombre que sea) y dentro de los paréntesis poner los valores
		//de todos los atributos que definimos en esa clase.
		//Haciendo esto, ya definimos un constrctor, ahora este constructor nos permite llamar a los métodos
		//de la clase a la que nos referimos, para llamarla solo ponemos el nombre del constructor, despues
		//poner un punto (este punto sirve para llamar a un método) y por último, poner el nombre del
		//método que queremos llamar, y haciendo esto, se genera un objeto.
		//NOTA: Puedo crear los constructores y llamar a los métodos las veces que quiera; osea, puedo
		//crear objetos las veces que quiera 
		//Los constructores nos van a ayudar a definir los objetos y a darle valor a los atributos de
		//la clase
		NAVE NAV(50,23,5,22,100,100,100); //CONSTRUCTOR DE LA CLASE NAVE
		NAV.diseno_nave();	//EL CONSTRUCTOR LLAMA A UN MÉTODO DE LA CLASE NAVE			
		NAV.corazones(); //EL CONSTRUCTOR LLAMA A UN MÉTODO DE LA CLASE NAVE
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
		//EL CONSTRUCTOR LLAMA A UN MÉTODO DE LA CLASE METEORITO
		bloq1.estructura(); 
		bloq2.estructura(); 
		bloq3.estructura(); 
		//Aquí definí a una variable de tipo bool, esta variable sirve para hacer verdaderas o falsas las 
		//variables, para hacer falsa una variable la tengo que igualar a false, si la quiero hacer 
		//verdadera, debo de ponerle true; estas variables se utilizan mucho para comparar condiciones
		//es decir si estas son verdaderas o falsas por ejemplo, si a = 1 y b = 2, pues b>a, entonces
		//si se cumple la condición, la variable bool se vuelve verdadera, pero si es el caso contrario,
		//se vuelve falsa, si yo quiero saber si la expresion es verdadera, la defino así:
		//bool comparacion = b>a
		//al momento de mostrar la variable en pantalla, me va a poner un 1, si fuera el caso contrario, 
		//me pondría un 0, ya que este tipo de variables tienen un lenguaje binario
		// (0 es no, falso o cerrado; 1 es si, verdadero o abierto).
		//En este caso, la variable bool la utilizé como una expresión lógica, ya que pues al momento de
		//que empieza el juego, pues aún no llega su fin, llega su fin hasta que la nave se destruya ó 
		//la nave logre destruir a los tres meteoritos por eso, definí a la variable fin_del_juego
		//como false, y al momento de que la vida de la nave llega a 0 o las vidas de los meteoritos llegan
		//a 0, pues ya llega el fin del juego, entonces la variable la vuelvo verdad (true).
		//Haciendo esta expresión lógica, puedo crear un ciclo while, en el que este se ejecutará mientras
		//fin del juego sea igual a falso y se romperá hasta que la variable sea igual a verdad
		//¿Porqué puse un ciclo while? pues porque la nave y los asteroides van a estar moviendose
		//constantemente, ya que si no pongo el ciclo while, solo se moverán una vez y ya no seguira
		//el juego.
		//NOTA: las variables booleanas también las puedo igualar 0 si es falso o a 1 si es verdad, 
		//recordemos que estas variables se manejan con lenguaje binario.
		bool fin_del_juego=false; 
		while(fin_del_juego==false)	
		{
			/*En esta parte puse al los constructores llamando al método choque, pero dentro de los
			paréntesis puse NAV, esto lo hice ya que en el método choque me había llevado a los
			atributos x Y y de la clase NAVE, y pues había definido un nombre de referencia, pues
			ese nombre lo debo de poner en los paréntesis ya que si no lo pongo, NO ME COMPILA EL PROGRAMA*/
			aste1.trayectoria(); aste1.choque(NAV);
			aste2.trayectoria(); aste2.choque(NAV);
			aste3.trayectoria(); aste3.choque(NAV);
			if(NAV._vida1()==0)
			{
				quitar1.quitar_estructura();
				NAV.VIDA1(); //Este método hace que tenga un decremento de 1 a la vida del meteorito
				//y esto lo puse ya que al destruir el meteorito, su valor de vida va a ser igual a 0
				//y como esta condición está dentro de un ciclo, pues se va a seguir ejecutando, haciendo
				//que el programa se empieze a ejecutar lento; Ese método sólo me sirve para que esa 
				//condición no se siga ejecutando cada vez que el ciclo se repita.	
			}
			if(NAV._vida2()==0)
			{
				quitar2.quitar_estructura();
				NAV.VIDA2(); //Este método tiene la misma función que el método VIDA1	
			}
			if(NAV._vida3()==0)
			{
				quitar3.quitar_estructura();
				NAV.VIDA3(); //Este método tiene la misma función que el método VIDA1
			}
			NAV.teclas(); //El método teclas lo pongo ya que es el que me permite que la nave se mueva
			//y la pongo dentro del while porque la nave la vamos a mover constantemente
			Sleep(30);
			if(NAV.NUMVIDAS()==0) //Aquí llamo al método NUMVIDAS (este método retorna el valor de los
			//corazones o vidas que le quedan a la nave) y para llamar ese método son los mismos pasos:
			//pongo el nombre del constructor, pongo un punto que me sirve para llamar al método y pongo 
			//el nombre del método
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
				ubicacion(10,9); cout<<"Suerte para la pr¢xima ;D";
				Sleep(5000);
				final();
				fin_del_juego = true; //En esta parte, indica el final del juego cuando la vida de la nave
				//llega a ser 0, entonces, como ya es el final del juego, pues la variable booleana que 
				//había declarado inicialmente, la vuelvo verdad
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
				ubicacion(10,7); cout<<"El planeta tierra est  a salvo gracias a t¡ !!";
				ubicacion(10,9); cout<<"Eres un h‚roe sin capa!! ;D";
				Sleep(5000);
				final();
				fin_del_juego = true; //Como logré destruir a los tres meteoritos, gano el juego, entonces
				//al ganar, pues ya es el fin del juego, entonces la varable booleana la igualo a true.
			}
		}
		mostrar_cursor(); //Aquí hago que el cursor se muestre, ya que el usuario ingresará un texto
		//y el cursor puede servir como guía para que el usuario sepa dónde está escribiendo.
		ubicacion(10,26); cout<<"¨Deseas volver a jugar? (Si/No): "; cin>>resp;
	}
	while((resp=="SI")or(resp=="Si")or(resp=="si")or(resp=="sI"));
	ubicacion(10,30); cout<<"Es todo...";
	ubicacion(10,32); system("PAUSE");
	return 0;
}
/*En este programa, se puede dar cuenta que dejé al final el principal (main) esto lo hice ya que
es más cómodo programar primero las funciones o las clases ya que si dejo el main al principio
tengo que primero definir las funciones antes del main, y ya después del main empezar
a programar cada una de las funciones; pero, si dejo al final el main y empiezo primero a
programar las funciones o clases, ya no está la necesidad de primero nombrarlas y después programarlas.*/
