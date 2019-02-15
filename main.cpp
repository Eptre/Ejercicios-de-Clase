/*Paniagua Trejo Erick
Grupo 02
Visual Studio 2017
Ejercicio en clase #2

Este código muestra las letras E P C G.
Cada una hecha con la función LG_QUADS para armar cada
palabra con rectángulos.
*/

#include "Main.h"
void InitGL(GLvoid)     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	//glClearDepth(1.0f);									// Configuramos Depth Buffer
	//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar


}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

	//Poner aqui codigo ha dibujar

    ///////////////////////////////////////
	glBegin(GL_QUADS);                   //
	glColor3f(1, 0, 0);                  //
	glVertex3f(5.0f, 3.0f, -1.0f);       // 
	glVertex3f(5.0f, 1.0f, -1.0f);       // 
	glVertex3f(11.0f, 1.0f, -1.0f);      //
	glVertex3f(11.0f, 3.0f, -1.0f);      //
									     //
	glColor3f(1, 0, 0);                  //
	glVertex3f(5.0f, -4.0f, -1.0f);      //
	glVertex3f(5.0f, 3.0f, -1.0f);       //
	glColor3f(0, 1, 0);                  //--------> C
	glVertex3f(7.0f, 3.0f, -1.0f);       //
	glVertex3f(7.0f, -4.0f, -1.0f);      //
	                                     //
	glColor3f(0, 1, 0);                  //
	glVertex3f(7.0f, -4.0f, -1.0f);      //
	glVertex3f(7.0f, -2.0f, -1.0);       //
	glVertex3f(11.0f, -2.0f, -1.0);      //
	glVertex3f(11.0f, -4.0f, -1.0);      //
	                                     //
	glEnd();                             //
	                                     //
	///////////////////////////////////////

	//////////////////////////////////////
	glBegin(GL_QUADS);                  //
	glColor3f(1, 0,0);                  //
	glVertex3f(-4.0f, 3.0f, -1.0f);     //
	glVertex3f(-2.0f, 3.0f, -1.0f);     //
	glColor3f(0, 1, 0);                 //
	glVertex3f(-2.0f, -4.0f, -1.0f);    //
	glVertex3f(-4.0f, -4.0f, -1.0f);    //-----> P
	                                    //
	glColor3f(1, 0, 0);                 //
	glVertex3f(-2.0f, -1.0f, -1.0f);    //
	glVertex3f(-2.0f, 3.0f, -1.0f);     //
	glVertex3f(2.0f, 3.0f, -1.0f);      //
	glVertex3f(2.0f, -1.0f, -1.0f);     //
	glEnd();                            //
	////////////////////////////////////// 



	///////////////////////////////////////
	                                     //
	glBegin(GL_QUADS);                   //
	                                     //
	glColor3f(0, 1, 0);                  //
	glVertex3f(-15.0f,-2.0f,-1.0f);      //
	glVertex3f(-15.0f, -4.0f, -1.0f);    //
	glVertex3f(-10.0f, -4.0f, -1.0);     //
	glVertex3f(-10.0f, -2.0f, -1.0);     //
	                                     //
	glColor3f(0, 1, 0);                  //
	glVertex3f(-15.0f, 2.5f, -1.0f);     //
	glVertex3f(-15.0f, -4.0f, -1.0f);    //----------> E
	glColor3f(1, 0, 0);                  //
	glVertex3f(-13.0f, -4.0f, -1.0f);    //
	glVertex3f(-13.0f, 2.5f, -1.0f);     //
	                                     //
	glColor3f(1, 0, 0);                  //
	glVertex3f(-13.0f, -1.0f,-1.0);      //
	glColor3f(0, 1, 0);                  //
	glVertex3f(-13.0f,-0.5f,-1.0);       //
	glVertex3f(-10.0f, -0.5f, -1.0);     //
	glVertex3f(-10.0f, -1.0f, -1.0f);    //
	                                     //
	                                     //
	glColor3f(1, 0, 0);                  //
	glVertex3f(-13.0f, 2.5f,-1.0);       //
	glVertex3f(-13.0f, 0.5f, -1.0f);     //
	glVertex3f(-10.0,0.5f,-1.0f);        //
	glVertex3f(-10.0f, 2.5f, -1.0f);     //
	glEnd();                             //
	//////////////////////////////////////


    ///////////////////////////////////////
										 //
	glBegin(GL_QUADS);                   //
										 //
	glColor3f(0, 1, 0);                  //
	glVertex3f(12.0f, -2.0f, -1.0f);     //
	glVertex3f(12.0f, -4.0f, -1.0f);     //
	glVertex3f(18.0f, -4.0f, -1.0);      //
	glVertex3f(18.0f, -2.0f, -1.0);      //
	                                     //
	glColor3f(0, 1, 0);                  //
	glVertex3f(12.0f, 2.5f, -1.0f);      //
	glVertex3f(12.0f, -4.0f, -1.0f);     //
	glColor3f(1, 0, 0);                  //
	glVertex3f(14.0f, -4.0f, -1.0f);     //
	glVertex3f(14.0f, 2.5f, -1.0f);      //
	                                     //
	glColor3f(0, 1, 0);                  //
	glVertex3f(17.0f, -0.5f, -1.0f);     //
	glVertex3f(17.0f, -4.0f, -1.0f);     //
	glColor3f(1, 0, 0);                  //
	glVertex3f(18.0f, -4.0f, -1.0f);     //
	glVertex3f(18.0f, -0.5f, -1.0f);     //
                                         //---------------> G
	glColor3f(1, 0, 0);                  //
	glVertex3f(12.0f, -1.0f, -1.0);      //
	glColor3f(0, 1, 0);                  //
	glVertex3f(12.0f, -0.5f, -1.0);      //
	glVertex3f(18.0f, -0.5f, -1.0);      //
	glVertex3f(18.0f, -1.0f, -1.0f);     //
	                                     //
	glColor3f(1, 0, 0);                  //
	glVertex3f(12.0f, 3.0f, -1.0);       //
	glVertex3f(12.0f, 0.5f, -1.0f);      //
	glVertex3f(18.0, 0.5f, -1.0f);       //
	glVertex3f(18.0f, 3.0f, -1.0f);      //
	glEnd();                             //
	//////////////////////////////////////

	glEnd();

	glFlush();
}

void reshape(int width, int height)   // Creamos funcion Reshape
{
	if (height == 0)										// Prevenir division entre cero
	{
		height = 1;
	}

	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Ortogonal
	glOrtho(-20, 20, -20, 20, 0.1, 2);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 27: exit(0);
		break;
	}
	glutPostRedisplay();
}

int main(int argc, char** argv)   // Main Function
{
	glutInit(&argc, argv); // Inicializamos OpenGL
	glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
	glutInitWindowSize(700, 700);	// Tamaño de la Ventana
	glutInitWindowPosition(0, 0);	//Posicion de la Ventana
	glutCreateWindow("Practica 2"); // Nombre de la Ventana
	InitGL();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(display);  //Indicamos a Glut función de dibujo
	glutReshapeFunc(reshape);	//Indicamos a Glut función en caso de cambio de tamano
	glutKeyboardFunc(keyboard);	//Indicamos a Glut función de manejo de teclado
	glutMainLoop();          // 

	return 0;
}



