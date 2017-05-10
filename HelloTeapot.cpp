#include <conio.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <Windows.h>


// mainLoop ... The main GLUT rendering loop.
void mainLoop(void) {
}

// main ... The main function, in the end its goal is to render a tea-pot to a window.
int main(int argc, char *argv[]) {
	/****************************************************************************************************/
	//Initializing GLUT
	glutInit(&argc, argv);

	//Let's create the properties of window we'll create later.
	glutInitWindowSize(640, 480);
	
	//glutInitWindowPosition(x, y);
	//TODO: Figure out how to get this to center...?
	
	//Let's manage the display properties! TODO: Figure out how the display stuff works... UINT Flags.
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	//Createing the window.
	glutCreateWindow("Teapot - Hello World!");

	//Setting the polygon razterizing mode, draws wireframe.
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
		
	//Clear the buffer stuffs!
	glClearColor(0, 0, 0, 0);
	
	/**************************************************************************************************/

	//Entering the mainLoop!
	glutMainLoop();	
	
	//Wait to close;
	getch();

    	//Once everything is done and all is good. Quit.
	return 0;
}
