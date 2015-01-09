void InitGL(void)
{ 
    glClearColor(0.0, 0.0, 0.0, 0.0); 
    glClearDepth(1.0); 
    glDepthFunc(GL_LEQUAL); 
    glEnable(GL_DEPTH_TEST); 
    glEnable(GL_COLOR_MATERIAL); 
    glShadeModel(GL_SMOOTH); 
    glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE); 
    glEnable(GL_BLEND); 
    
    glLightModel(GL_LIGHT_MODEL_AMBIENT, [0.5, 0.5, 0.5, 1.0]); 
    glLightfv(GL_LIGHT0, GL_AMBIENT,  (0.4, 0.4, 0.4, 1.0)); 
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  (0.4, 0.4, 0.4, 1.0)); 
    glLightfv(GL_LIGHT0, GL_POSITION, (0.0, 0.0, -100.0, 1.0)); 
    glEnable(GL_NORMALIZE); 
    glEnable(GL_LIGHTING); 
    glEnable(GL_LIGHT0); 
    
    glMatrixMode(GL_PROJECTION); 
    glLoadIdentity(); 
    gluPerspective(fovy, aspect, zNear, zFar); 
    glMatrixMode(GL_MODELVIEW);
}

