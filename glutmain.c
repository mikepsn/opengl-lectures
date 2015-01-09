#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

int main(int argc, char** argv)
{ 
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE); 
    glutInitWindowSize(1024, 768); 
    glutInitWindowPosition(0, 0); 
    glutInit(argc, argv); 
    
    glutCreateWindow("OpenGL Demo"); 
    glutReshapeFunc(reshape); 
    glutDisplayFunc(display); 
    glutIdleFunc(display); 
    glutKeyboardFunc(keyboard); 
    glutMouseFunc(mouse); 
    glutMotionFunc(motion); 
    InitGL(); 
    glutMainLoop();
}

