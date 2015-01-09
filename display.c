void display(void)
{ 
    UpdateWorld(); 
    
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); 
    
    glMatrixMode(GL_PROJECTION); 
    glLoadIdentity(); 
    gluPerspective(fovy, aspect, zNear, zFar); 
    
    glMatrixMode(GL_MODELVIEW); 
    glLoadIdentity(); 
    gluLookAt(0.0, 0.0, 150.0, 
              0.0, 0.0, 0.0, 
              0.0, 1.0, 0.0); 
    
    RenderScene(); 
    glutSwapBuffers();
}

