//Semestre 2017 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************											******//
//*************											******//
//************************************************************//
#include "Main.h"

float transZ = -5.0f;
float transX = 0.0f;
float angleX = 0.0f;
float angleY = 0.0f;
int screenW = 0.0;
int screenH = 0.0;
float angHombro = 0.0f;
float angcodo = 0.0f;
float angmu = 0.0f;
float angpul = 0.0f;
float angind = 0.0f;
float angmed = 0.0f;
float anganu = 0.0f;
float angme = 0.0f;

GLfloat Position[] = { 0.0f, 3.0f, 0.0f, 1.0f };			// Light Position
GLfloat Position2[] = { 0.0f, 0.0f, -5.0f, 1.0f };			// Light Position

void InitGL(void)     // Inicializamos parametros
{

	glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing

														//Configuracion luz
	glLightfv(GL_LIGHT0, GL_POSITION, Position);
	glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION, Position2);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);


	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	glEnable(GL_COLOR_MATERIAL);
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void prisma(void)
{
	GLfloat vertice[8][3] = {
		{ 0.5 ,-0.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ -0.5 ,-0.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ -0.5 ,-0.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 0.5 ,-0.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 0.5 ,0.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 0.5 ,0.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ -0.5 ,0.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ -0.5 ,0.5, 0.5 },    //Coordenadas Vértice 7 V7
	};

	glBegin(GL_POLYGON);	//Front
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glNormal3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glNormal3f(0.0f, 0.0f, -1.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
	glNormal3f(0.0f, -1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glNormal3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
														//glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glTranslatef(transX, 0.0f, transZ);
	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	//Poner Código Aquí.

	//hombro
	glRotatef(angHombro, 0, 0, 1);
	glScalef(0.3f, 0.5f, 0.5f);
	glColor3f(1, 1, 1);
	prisma();
	glScalef(3, 2, 1);
	//bicep
	glTranslatef(0.65f, 0.0f, 0.0f);
	glScalef(1, 0.5, 1);
	glColor3f(1, 0, 0);
	prisma();

	//codo
	glScalef(1, 2, 1);
	glTranslatef(0.6f, 0.0, 0.0);
	glRotatef(angcodo, 0, 0, 1);
	glScalef(0.2f, 0.5f, 1.0f);
	glColor3f(0, 1, 0);
	prisma();

	//antebrazo
	glScalef(5, 2, 0.5);
	glTranslatef(0.5f, 0.0f, 0.0f);
	glScalef(0.8f, 0.5f, 1.0f);
	glColor3f(0, 0, 1);
	prisma();

	//muñeca
	glScalef(1.25, 2, 1);
	glTranslatef(0.45, 0, 0);
	glRotatef(angmu, 0, 1, 0);
	glScalef(0.1, 0.5, 1);
	glColor3f(1, 1, 0);
	prisma();

	glScalef(10, 2, 1);
	//palma
	glTranslatef(0.35, 0, 0);
	glScalef(0.6, 0.5, 1);
	glColor3f(0, 1, 1);
	prisma();

	glScalef(1.66, 2, 1);
	//pulgar
	glTranslatef(-0.2, 0.285, 0);
	glScalef(0.2, 0.07, 1);
	glColor3f(0.5, 0.3, 0);
	prisma();

	glScalef(5, 14.28, 1);
	//falanje pulgar
	glTranslatef(0, 0.035, 0);
	glRotatef(angpul, 1, 0, 0);
	glTranslatef(0.0, 0.035, 0);
	glScalef(0.2, 0.07, 1);
	glColor3f(0.2, 0.3, 0.1);
	prisma();

	glScalef(5, 14.29, 1);
	// índice
	glTranslatef(0.60, -0.13, 0);
	glScalef(0.2, 0.05, 1);
	glColor3f(1, 0, 1);
	prisma();
	
	glScalef(2, 20, 1);
	//falanje índice 
	glTranslatef(0.50, 0, 0);
	glRotatef(angind, 0, 1, 0);
	glScalef(0.5, 0.05, 1);
	glColor3f(0, 0, 1);
	prisma();

	glScalef(2, 20, 1);
	// falanje índice 2
	glTranslatef(0.50, 0, 0);
	glRotatef(angind, 0, 0, 0);
	glScalef(0.5, 0.05, 1);
	glColor3f(1, 1, 0);
	prisma();

	glScalef(2, 20, 1);
	// medio
	glTranslatef(-1.0, -0.20, 0);
	glScalef(0.5, 0.05, 1);
	glColor3f(1, 0, 1);
	prisma();

	glScalef(2, 20, 1);
	//falanje medio 1
	glTranslatef(0.50, 0, 0);
	glRotatef(angmed, 0, 1, 0);
	glScalef(0.5, 0.05, 1);
	glColor3f(0, 0, 1);
	prisma();

	glScalef(2, 20, 1);
	//falanje medio 2
	glTranslatef(0.60, 0, 0);
	glRotatef(angmed, 0, 1, 0);
	glScalef(0.7, 0.05, 1);
	glColor3f(1, 1, 0);
	prisma();

	glScalef(1.48, 20, 1);
	//anular
	glTranslatef(-1.05, -0.13, 0),
	glScalef(0.5, 0.05, 1);
	glColor3f(1, 0, 1);
	prisma();

	glScalef(1.48, 20, 1);
	//falanje anular 1
	glTranslatef(0.58, 0, 0);
	glRotatef(anganu, 0, 1, 0);
	glScalef(0.5, 0.05, 1);
	glColor3f(0, 0, 1);
	prisma();

	glScalef(2, 20, 1);
	//falanje anular 2
	glTranslatef(0.60, 0, 0);
	glRotatef(anganu, 0, 1, 0); //////////////// 1 -> 0
	glScalef(0.71, 0.05, 1);
	glColor3f(1, 1, 0);
	prisma();

	glScalef(1.5, 20, 1);
	//meñique
	glTranslatef(-1.15, -0.12, 0);
	glScalef(-0.55, 0.05, 1);
	glColor3f(1, 0, 1);
	prisma();

	glScalef(1.9, 20, 1);
	// falanje meñique 1
	glTranslatef(-0.45, 0, 0);
	glRotatef(angme, 0, 1, 0);
	glScalef(0.4, 0.05, 1);
	glColor3f(0, 0, 1);
	prisma();

	glScalef(2.5, 20, 1);
	//falanje meñique 2
	glTranslatef(-0.40, 0, 0);
	glRotatef(angme, 0, 1, 0);
	glScalef(0.4, 0.05, 1);
	glColor3f(1, 1, 0);
	prisma();



	glutSwapBuffers();
	// Swap The Buffers
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

	// Tipo de Vista
	//glOrtho(-5,5,-5,5,0.2,20);	
	glFrustum(-0.1, 0.1, -0.1, 0.1, 0.1, 50.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
														//glLoadIdentity();									
}

void keyboard(unsigned char key, int x, int y)  // Create Keyboard Function
{
	switch (key) {

	case 'v':
		if (angme > 0)
			angme -= 0.5f;
		printf("ang menique: %f", angme);
		break;

	case 'V':
		if (angme >= 0 && angme <= 14)
			angme += 0.5f;
		printf("ang menique: %f", angme);
		break;

	case 'g':
		if (anganu < 0)
			anganu += 0.5f;
		printf("ang angular: %f", anganu);
		break;

	case 'G':
		if (anganu <= 0 && anganu <= 90)
			anganu -= 0.5f;
		printf("ang angular: %f", anganu);
		break;

	case 't':
		if (angmed < 0)
			angmed += 0.5f;
		printf("ang indice: %f", angmed);
		break;

	case 'T':
		if (angmed >= 0)
			angmed -= 0.5f;
		printf("ang indice: %f", angmed);
		break;

	
	case 'y':
		if (angind < 90)
			angind -= 0.5f;
		printf("ang indice: %f", angind);
		break;

	case 'Y':
		if (angind < 0)
			angind += 0.5f;
		printf("ang indice: %f", angind);
		break;

	case 'u':
		if (angpul < 90)
			angpul += 0.5f;
		printf("ang pulgar: %f", angpul);
		break;
	case 'U':
		if (angpul < 90)
			angpul -= 0.5f;
		printf("ang pulgar: %f", angpul);
		break;

	case 'i':
		if (angmu < 90)
			angmu += 0.5f;
		printf("ang muñeca: %f", angmu);
		break;
	case 'I':
		if (angmu < 90)
			angmu -= 0.5f;
		printf("ang muñeca: %f", angmu);
		break;
	case 'o':
		if (angcodo < 90)
			angcodo += 0.5f;
		printf("ang codo: %f", angcodo);
		break;
	case 'O':
		if (angcodo < 90)
			angcodo -= 0.5f;
		printf("ang codo: %f", angcodo);
		break;


	case 'p':
		if (angHombro < 90)
			angHombro += 0.5f;
		printf("ang: %f", angHombro);
		break;
	case 'P':
		if (angHombro > 90)
			angHombro -= 0.5f;
		break;

	case 'w':
	case 'W':
		transZ += 0.2f;
		break;
	case 's':
	case 'S':
		transZ -= 0.2f;
		break;
	case 'a':
	case 'A':
		transX += 0.2f;
		break;
	case 'd':
	case 'D':
		transX -= 0.2f;
		break;
	case 27:        // Cuando Esc es presionado...
		exit(0);   // Salimos del programa
		break;
	default:        // Cualquier otra
		break;
	}
	glutPostRedisplay();
}

void arrow_keys(int a_keys, int x, int y)  // Funcion para manejo de teclas especiales (arrow keys)
{
	switch (a_keys) {
	case GLUT_KEY_UP:		// Presionamos tecla ARRIBA...
		angleX += 2.0f;
		break;
	case GLUT_KEY_DOWN:		// Presionamos tecla ABAJO...
		angleX -= 2.0f;
		break;
	case GLUT_KEY_LEFT:
		angleY += 2.0f;
		break;
	case GLUT_KEY_RIGHT:
		angleY -= 2.0f;
		break;
	default:
		break;
	}
	glutPostRedisplay();
}


int main(int argc, char** argv)   // Main Function
{
	glutInit(&argc, argv); // Inicializamos OpenGL
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
	screenW = glutGet(GLUT_SCREEN_WIDTH);
	screenH = glutGet(GLUT_SCREEN_HEIGHT);
	glutInitWindowSize(500, 500);	// Tamaño de la Ventana
	glutInitWindowPosition(0, 0);	//Posicion de la Ventana
	glutCreateWindow("Practica 5"); // Nombre de la Ventana
	printf("Resolution H: %i \n", screenW);
	printf("Resolution V: %i \n", screenH);
	InitGL();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(display);  //Indicamos a Glut función de dibujo
	glutReshapeFunc(reshape);	//Indicamos a Glut función en caso de cambio de tamano
	glutKeyboardFunc(keyboard);	//Indicamos a Glut función de manejo de teclado
	glutSpecialFunc(arrow_keys);	//Otras
	glutMainLoop();          // 

	return 0;
}




