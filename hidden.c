glEnable(GL_DEPTH_TEST);
while (1) 
{ 
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); 
    GetCurrentViewingPosition(); 
    DrawObjectA(); 
    DrawObjectB();
}
