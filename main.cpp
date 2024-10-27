#include "SFML/Graphics.hpp"
#include "iostream"

using namespace sf;
using namespace std;



// Ajedrez - Ajedrez - Ajedrez - Ajedrez - Ajedrez - Ajedrez -Ajedrez -Ajedrez -////////////////////////////////////

int main() {
	RenderWindow ventana(VideoMode(800, 800), "Ajedrez");
	
	float escala_x;
	float escala_y;
	float tamanio_x;
	float tamanio_y;
	int incremento_x = 1;
	int incremento_y = 0;

	Texture negro;
	negro.loadFromFile("chessb.png");
	escala_x = 0.78;
	escala_y = 0.78;
	tamanio_x = negro.getSize().x * escala_x;
	tamanio_y = negro.getSize().y * escala_y;
	
	Sprite cuadro1, cuadro2, cuadro3, cuadro4, cuadro5, cuadro6, cuadro7, cuadro8;
	Sprite cuadro9, cuadro10, cuadro11, cuadro12, cuadro13, cuadro14, cuadro15, cuadro16;
	Sprite cuadro17, cuadro18, cuadro19, cuadro20, cuadro21, cuadro22, cuadro23, cuadro24;
	Sprite cuadro25, cuadro26, cuadro27, cuadro28, cuadro29, cuadro30, cuadro31, cuadro32;
	
	
	Sprite cuadros[32];
	cuadros[0] = cuadro1;
	cuadros[1] = cuadro2;
	cuadros[2] = cuadro3;
	cuadros[3] = cuadro4;
	cuadros[4] = cuadro5;
	cuadros[5] = cuadro6;
	cuadros[6] = cuadro7;
	cuadros[7] = cuadro8;
	cuadros[8] = cuadro9;
	cuadros[9] = cuadro10;
	cuadros[10] = cuadro11;
	cuadros[11] = cuadro12;
	cuadros[12] = cuadro13;
	cuadros[13] = cuadro14;
	cuadros[14] = cuadro15;
	cuadros[15] = cuadro16;
	cuadros[16] = cuadro17;
	cuadros[17] = cuadro18;
	cuadros[18] = cuadro19;
	cuadros[19] = cuadro20;
	cuadros[20] = cuadro21;
	cuadros[21] = cuadro22;
	cuadros[22] = cuadro23;
	cuadros[23] = cuadro24;
	cuadros[24] = cuadro25;
	cuadros[25] = cuadro26;
	cuadros[26] = cuadro27;
	cuadros[27] = cuadro28;
	cuadros[28] = cuadro29;
	cuadros[29] = cuadro30;
	cuadros[30] = cuadro31;
	cuadros[31] = cuadro32;
	

	for(int i=0; i<32; i++){//seteo la textura y la escala a cada recuadro
		cuadros[i].setTexture(negro);
		cuadros[i].setScale(Vector2f(escala_x,escala_y));
	}

	
	for(int i = 0; i<32; i++){//le doy la pisicion a cada cuadro
		cuadros[i].setPosition(Vector2f(tamanio_x *incremento_x,tamanio_y *incremento_y));
	   	incremento_x = incremento_x +2;
		
		if(incremento_x >= 8 && incremento_x != 9){//si el incremento es distinto de 9 es porque viene de la columna par, lo paso a la columna impar con incremento impar
			incremento_x = 1;//comienza en impara porque viene de la columna par
			incremento_y++;//el incremento en y aumenta por uno para bajar a la proxima fila
		}
		if(incremento_x >= 8){//si el incremento es 9 es porque viene de la columna impar, lo paso a la columna par con incremento par. 
			incremento_x = 0;//comienza par porque viene de la columna impar
			incremento_y++;//el incremento en y aumenta por uno para bajar a la proxima fila
		}
	    cout<<cuadros[i].getPosition().x<<"  "<<cuadros[i].getPosition().y<<endl; 
	}
	
	
	while(ventana.isOpen()) {
		ventana.clear(Color::White);
		for(int i =0; i<32; i++){
			ventana.draw(cuadros[i]);
		}
		ventana.display();
		
	}
	return 0;
}