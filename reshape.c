void reshape(int width, int height);
{ 
    glViewport(0, 0, width, height); 
    glMatrixMode(GL_PROJECTION); 
    glLoadIdentity(); 
    gluPerspective(fovy, aspect, zNear, zFar);
}

