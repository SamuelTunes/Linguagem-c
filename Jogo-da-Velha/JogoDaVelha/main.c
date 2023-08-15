#include <gl/glut.h>
#include <string.h>
#include <stdio.h>
#include <locale.h>

char texto[30];
GLfloat win;
GLint posX=0,posY=0,op=2,gg=0,pos[3][3],v[9],menu=0,acabar=0,vencedor=2,i[9]={2,2,2,2,2,2,2,2,2};


void DesenhaTexto(char *string){
  	glPushMatrix();

        glRasterPos2f(-win,win-(win*0.08));
        while(*string)
             glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,*string++);
	glPopMatrix();
}

void textoTela(void *font, char *string){
	while(*string)
		glutStrokeCharacter(GLUT_STROKE_ROMAN,*string++);
}

void Vezdo(float px, float py){
    glPushMatrix();
	glTranslatef(px,py,0);
	glScalef(0.18, 0.18, 0.18);
	glLineWidth(2);
	glColor3f(1.0f, 0.0f, 0.0f);
}

void Desenha(void){
     glMatrixMode(GL_MODELVIEW);
     glLoadIdentity();

     glColor3f(1.0f,0.0f,0.0f);

    glColor3f(1,0,0);
    glBegin(GL_LINES);
        glVertex2f(-70.0f, -30.0f);
        glVertex2f(70.0f, -30.0f);

        glVertex2f(-70.0f, 30.0f);
        glVertex2f(70.0f, 30.0f);

        glVertex2f(-30.0f, 70.0f);
        glVertex2f(-30.0f, -70.0f);

        glVertex2f(30.0f, 70.0f);
        glVertex2f(30.0f, -70.0f);
    glEnd();

    Vezdo(-70,100);
    textoTela(GLUT_STROKE_ROMAN,"Vez do: X");
    glPopMatrix();

    Vezdo(70,-145);
	glScalef(0.4, 0.4, 0.4);
	textoTela(GLUT_STROKE_ROMAN,"Samuel Tunes");
	glPopMatrix();
    glutSwapBuffers();
}


void Jogada(void){
    Vezdo(-70,100);
	if(op==2){
	    glColor3f(1.0f, 0.0f, 0.0f);
        textoTela(GLUT_STROKE_ROMAN,"Vez do: X");
        }
	else {
	    glColor3f(1.0f, 0.0f, 0.0f);
        textoTela(GLUT_STROKE_ROMAN,"Vez do: O");}
	glPopMatrix();


    Vezdo(-58.15,100);
    if(op==2){
        glColor3f(0.0f,0.0f, 0.0f);
	    textoTela(GLUT_STROKE_ROMAN,"     O");}
    else {
        glColor3f(0.0f,0.0f, 0.0f);
	    textoTela(GLUT_STROKE_ROMAN,"     X");}
    glPopMatrix();


    if (op==1){
        Vezdo(posX,posY);
        textoTela(GLUT_STROKE_ROMAN,"X");
        glPopMatrix();
        glutSwapBuffers();
        }

    else if(op==2){
        Vezdo(posX,posY);
        textoTela(GLUT_STROKE_ROMAN,"O");
        glPopMatrix();
        glutSwapBuffers();
    }
}

void Finaliza(void){
   /* glColor3f(1.0f, 1.0f, 1.0f);
     glBegin(GL_QUADS);
               glVertex2f(-75.0f, -35.0f);
               glVertex2f(-75.0f, 35.0f);
               glVertex2f(75.0f, 35.0f);
               glVertex2f(75.0f, -35.0f);
     glEnd();


    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
               glVertex2f(-50.0f, -20.0f);
               glVertex2f(-50.0f, 0.0f);
               glVertex2f(-10.0f, 0.0f);
               glVertex2f(-10.0f, -20.0f);

               glVertex2f(10.0f, -20.0f);
               glVertex2f(10.0f, 0.0f);
               glVertex2f(50.0f, 0.0f);
               glVertex2f(50.0f, -20.0f);
     glEnd();
*/
    if(gg==1){
        if (vencedor==0){
            Vezdo(-40,-120);
            glScalef(0.4, 0.4, 0.4);
            textoTela(GLUT_STROKE_ROMAN,"Vencedor: O");
            glPopMatrix();
            glutSwapBuffers();
                }


        if (vencedor==1){
            Vezdo(-40,-120);
            glScalef(0.4, 0.4, 0.4);
            textoTela(GLUT_STROKE_ROMAN,"Vencedor: X");
            glPopMatrix();
            glutSwapBuffers();
                }
            }


        if (gg==2){
            Vezdo(-40,-120);
            glScalef(0.4, 0.4, 0.4);
            textoTela(GLUT_STROKE_ROMAN,"Empate");
            glPopMatrix();
            glutSwapBuffers();}

/*  glPushMatrix();
	glTranslatef(-65,10,0);
	glScalef(0.08, 0.08, 0.08);
	glLineWidth(2);
	textoTela(GLUT_STROKE_ROMAN,"Deseja tentar novamente?");
	glPopMatrix();

    glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
	glTranslatef(-40,-15,0);
	glScalef(0.08, 0.08, 0.08);
	glLineWidth(2);
	textoTela(GLUT_STROKE_ROMAN,"Sim");
	glPopMatrix();

    glPushMatrix();
	glTranslatef(20,-15,0);
	glScalef(0.08, 0.08, 0.08);
	glLineWidth(2);
	textoTela(GLUT_STROKE_ROMAN,"Sair");
	glPopMatrix();
    glutSwapBuffers();
*/

}
/*
void MoveMouse(int x, int y){
     sprintf(texto, "(%d,%d)", x, y);
     glutPostRedisplay();

}*/

void GerenciaMouse(int button, int state, int x, int y){
    if (button == GLUT_LEFT_BUTTON)
         if (state == GLUT_DOWN){
                if(op==2){

                        if((x>210) && (x<320)){
                            if((y>160)&&(y<240)) {
                                //if(não desenhou O, Não terminou, Não desenhou X) ->
                                if((v[0]!=0) && (gg==0) && (v[0]!=1)){posX=-55; posY=40;glutDisplayFunc(Jogada);pos[0][0]=1;v[0]=1;op=1;}}

                            if((y>240)&&(y<360)) {
                                if((v[1]!=0)&& (gg==0) && (v[1]!=1)){posX=-55; posY=-10;glutDisplayFunc(Jogada);pos[0][1]=1;v[1]=1;op=1;}}

                            if((y>360)&&(y<440)) {
                                if((v[2]!=0)&& (gg==0) && (v[2]!=1)){posX=-55; posY=-60;glutDisplayFunc(Jogada);pos[0][2]=1;v[2]=1;op=1;}}
                            }


                        if((x>320) && (x<480)){
                            if((y>160)&&(y<240)) {
                                if((v[3]!=0)&& (gg==0) && (v[3]!=1)){posX=-5; posY=40;glutDisplayFunc(Jogada);pos[1][0]=1;v[3]=1;op=1;}}

                            if((y>240)&&(y<360)) {
                                if((v[4]!=0)&& (gg==0) && (v[4]!=1)){posX=-5; posY=-10; glutDisplayFunc(Jogada);pos[1][1]=1;v[4]=1;op=1;}}

                            if((y>360)&&(y<440)) {
                                if((v[5]!=0)&& (gg==0) && (v[5]!=1)){posX=-5; posY=-60;glutDisplayFunc(Jogada);pos[1][2]=1;v[5]=1;op=1;}}
                            }

                        if((x>480) && (x<590)){
                            if((y>160)&&(y<240)) {
                                if((v[6]!=0)&& (gg==0) && (v[6]!=1)){posX=42; posY=40;glutDisplayFunc(Jogada);pos[2][0]=1;v[6]=1;op=1;}}

                            if((y>240)&&(y<360)) {
                                if((v[7]!=0)&& (gg==0) && (v[7]!=1)){posX=42; posY=-10;glutDisplayFunc(Jogada);pos[2][1]=1;v[7]=1;op=1;}}

                            if((y>360)&&(y<440)) {
                                if((v[8]!=0)&& (gg==0) && (v[8]!=1)){posX=42; posY=-60;glutDisplayFunc(Jogada);pos[2][2]=1;v[8]=1;op=1;}}

                            }
                }

                else if(op==1){
                        if((x>210) && (x<320)){
                            if((y>160)&&(y<240)) {
                                if((v[0]!=1)&& (gg==0)&& (v[0]!=0)){posX=-55; posY=40;glutDisplayFunc(Jogada);pos[0][0]=0;v[0]=0;op=2;}}

                            if((y>240)&&(y<360)) {
                                if((v[1]!=1)&& (gg==0)&& (v[1]!=0)){posX=-55; posY=-10;glutDisplayFunc(Jogada);pos[0][1]=0;v[1]=0;op=2;}}

                            if((y>360)&&(y<440)) {
                                if((v[2]!=1)&& (gg==0)&& (v[2]!=0)){posX=-55; posY=-60; glutDisplayFunc(Jogada);pos[0][2]=0;v[2]=0;op=2;}}
                            }


                        if((x>320) && (x<480)){
                            if((y>160)&&(y<240)) {
                                if((v[3]!=1)&& (gg==0)&& (v[3]!=0)){posX=-5; posY=40;glutDisplayFunc(Jogada);pos[1][0]=0;v[3]=0;op=2;}}

                            if((y>240)&&(y<360)) {
                                if((v[4]!=1)&& (gg==0)&& (v[4]!=0)){posX=-5; posY=-10;glutDisplayFunc(Jogada);pos[1][1]=0;v[4]=0;op=2;}}

                            if((y>360)&&(y<440)) {
                                if((v[5]!=1)&& (gg==0)&& (v[5]!=0)){posX=-5; posY=-60;glutDisplayFunc(Jogada);pos[1][2]=0;v[5]=0;op=2;}}
                            }

                        if((x>480) && (x<590)){
                            if((y>160)&&(y<240)) {
                                if((v[6]!=1)&& (gg==0)&& (v[6]!=0)){posX=42; posY=40; glutDisplayFunc(Jogada);pos[2][0]=0;v[6]=0;op=2;}}

                            if((y>240)&&(y<360)) {
                                if((v[7]!=1)&& (gg==0)&& (v[7]!=0)){posX=42; posY=-10; glutDisplayFunc(Jogada);pos[2][1]=0;v[7]=0;op=2;}}

                            if((y>360)&&(y<440)) {
                                if((v[8]!=1)&& (gg==0)&& (v[8]!=0)){posX=42; posY=-60;glutDisplayFunc(Jogada);pos[2][2]=0;v[8]=0;op=2;}}

                            }
                }


        if((pos[0][0] == pos[0][1]) && (pos[0][1] == pos[0][2])){
                Finaliza();
                acabar=1;
                gg=1;
                if(pos[0][0]==1)vencedor=1;
                else vencedor=0;
            }

            else if((pos[0][0] == pos[1][0]) && (pos[1][0] == pos[2][0])){
                Finaliza();
                acabar=1;
                gg=1;
                if(pos[0][0]==1)vencedor=1;
                else vencedor=0;
            }


           else if((pos[0][0] == pos[1][1]) && (pos[1][1] == pos[2][2])){
                Finaliza();
                acabar=1;
                gg=1;
                if(pos[0][0]==1)vencedor=1;
                else vencedor=0;
            }


           else if((pos[0][1] == pos[1][1]) && (pos[1][1] == pos[2][1])){
                Finaliza();
                acabar=1;
                gg=1;
                if(pos[0][1]==1)vencedor=1;
                else vencedor=0;
            }

          else if((pos[0][2] == pos[1][1]) && (pos[1][1] == pos[2][0])){
                Finaliza();
                acabar=1;
                gg=1;
                if(pos[0][2]==1)vencedor=1;
                else vencedor=0;
            }

          else if((pos[0][2] == pos[1][2]) && (pos[1][2] == pos[2][2])){
            Finaliza();
                acabar=1;
                gg=1;
                if(pos[0][2]==1)vencedor=1;
                else vencedor=0;
            }



            else if((pos[1][0] == pos[1][1]) && (pos[1][1] == pos[1][2])){
                Finaliza();
                acabar=1;
                gg=1;
                if(pos[1][0]==1)vencedor=1;
                 else vencedor=0;
            }


            else if((pos[2][0] == pos[2][1]) && (pos[2][1] == pos[2][2])){
                Finaliza();
                acabar=1;
                gg=1;
                if(pos[1][0]==1)vencedor=1;
                else vencedor=0;
                }


                else if((pos[0][0] ==0) || (pos[0][0] == 1))
                        if((pos[0][1] ==0) || (pos[0][1] == 1))
                            if((pos[0][2] ==0) || (pos[0][2] == 1))
                                if((pos[1][0] ==0) || (pos[1][0] == 1))
                                    if((pos[1][1] ==0) || (pos[1][1] == 1))
                                        if((pos[1][2] ==0) || (pos[1][2] == 1))
                                            if((pos[2][0] ==0) || (pos[2][0] == 1))
                                                if((pos[2][1] ==0) || (pos[2][1] == 1))
                                                    if((pos[2][2] ==0) || (pos[2][2] == 1))
                                                        if(gg!=1){
                                                             gg=2;
                                                             acabar=1;
                                                             Finaliza();
                                                        }

/*
        if(acabar!=0){
        //continuar
            if((x>=240)&& (x<=300))
                if((y>300)&&(y<335)){
                    menu = 1;
                    Inicializa();}
        //sair
            if((x>=430) && (x<=530))
                if((y>=300)&&(y<=335)){
                   return EXIT_SUCCESS;}
            }
*/
         }

    glutPostRedisplay();
}

void AlteraTamanhoJanela(GLsizei w, GLsizei h){
if((w==800)&&(h==600))
   glViewport(0,0, w, h);
   else
    glViewport(w*0.01,h*0.28, 800, 600);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D (-win, win, -win, win);
}

void Inicializa (void){
    win=150.0f;
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    pos[0][0]=2;
    pos[0][1]=3;
    pos[0][2]=4;
    pos[1][0]=5;
    pos[1][1]=6;
    pos[1][2]=7;
    pos[2][0]=8;
    pos[2][1]=9;
    pos[2][2]=9;

    v[0]=2;
    v[1]=3;
    v[2]=4;
    v[3]=5;
    v[4]=6;
    v[5]=7;
    v[6]=8;
    v[7]=9;
    v[8]=2;

}

int main(void){
   // while(menu!=2){
     glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
     glutInitWindowSize(800,600);
     glutInitWindowPosition(10,10);
     glutCreateWindow("Jogo da Velha");
     Inicializa();
     glutDisplayFunc(Desenha);
     glutReshapeFunc(AlteraTamanhoJanela);
     //glutPassiveMotionFunc(MoveMouse);
     glutMouseFunc(GerenciaMouse);
     glutMainLoop();
    //}
     return EXIT_SUCCESS;
}
