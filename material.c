GLfloat material[] = {0.1, 0.5, 0.8, 1.0 };
glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, material);

GLfloat matSpecular[] = { 1.0, 1.0, 1.0, 1.0 }; 
GLfloat lowShininess[] = { 5.0 }; 

glMaterialfv(GL_FRONT, GL_SPECULAR, matSpecular); 
glMaterialfv(GL_FRONT, GL_SHININESS, lowShininess);
