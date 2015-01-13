glPushMatrix();
glTranslatef(10, 10, 0);
DrawRedTriangle();
  glPushMatrix();
  glTranslatef(20, 10, 0); 
  DrawBlueTriangle(); 
  glPopMatrix();
glPopMatrix();
DrawGreenTriangle();
