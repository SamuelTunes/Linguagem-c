//*************************************************************
//Trabalho 2 de Modelagem 3d
//Nome: Samuel Munhoz Tunes  2ºPeríodo de Ciência da Computação
//*************************************************************

/*Explicação do funcionamento do programa

    ->Utiliza de tecnicas primitivas de gráficas a fim de escrever com
         pontos e linhas o nome(SAMUEL TUNES).Além do funcionamento de
         teclas para a utlização de transformações afins sendo elas :
         translação,rotação e redimensionamento; e

    -> As teclas '+' e '-' tem a função de escalamento, ou seja, mudar
        o tamanho do objeto/imagem; e


    -> As teclas w,a,s,d tem a função de translação, movimentando a
         figura(nome) janela do glut; e

    -> As teclas 'q' e 'e' tem a função de rotação, movimento a
         figura(nome) em torno do eixo z;

    -> O programa também possui a função de redimensionamento automático
         da figura.
*/

#include <GL/freeglut.h>
#include <stdlib.h>
GLfloat tx = 0,ty=0;
GLfloat angulo = 0;
GLfloat escala = 1;

void teclas(unsigned char key, GLint x, GLint y){
    switch(key){
        //escalamento
        case '+': escala++;
                  break;

        case '-': if (escala>0)escala--;
                    else escala++;
                  break;
//---------------------------------------------------
        //Translação
        case 'W':
        case 'w':  ty++;
                  break;

        case 'S':
        case 's':  ty--;
                  break;

        case 'A':
        case 'a':  tx--;
                  break;

        case 'D':
        case 'd':  tx++;
                  break;

//---------------------------------------------------
       //Rotação
        case 'Q':
        case 'q':angulo++;
                  break;

        case 'E':
        case 'e':angulo--;
                  break;
    }
    glutPostRedisplay();
}

void desenhaNome(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-5, 5, -5, 5);

    glScalef(escala, escala, 0);
    glTranslatef(tx,ty,0);
    glRotatef(angulo,0,0,1);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();


    glBegin(GL_LINES);
//**********************************************************
//Nome: Samuel
//Letra S
//                  X   Y
        glVertex2d(-4.5, 2);
        glVertex2d(-4, 2);

        glVertex2d(-4.5, 2);
        glVertex2d(-4.5, 1.5);

        glVertex2d(-4.5, 1.5);
        glVertex2d(-4, 1.5);

        glVertex2d(-4, 1.5);
        glVertex2d(-4, 1);

        glVertex2d(-4, 1);
        glVertex2d(-4.5, 1);
//**********************************************************
//Letra A
        glVertex2d(-3.7, 1);
        glVertex2d(-3.45, 2);

        glVertex2d(-3.45, 2);
        glVertex2d(-3.25, 1);

        glVertex2d(-3.6, 1.5);
        glVertex2d(-3.35, 1.5);
//**********************************************************
//Letra M
        glVertex2d(-3, 1);
        glVertex2d(-3, 2);

        glVertex2d(-3, 2);
        glVertex2d(-2.775, 1.5);

        glVertex2d(-2.775, 1.5);
        glVertex2d(-2.55, 2);

        glVertex2d(-2.55, 2);
        glVertex2d(-2.55, 1);
//**********************************************************
//Letra U
        glVertex2d(-2.25, 1);
        glVertex2d(-2.25, 2);

        glVertex2d(-2.25, 1);
        glVertex2d(-1.75, 1);

        glVertex2d(-1.75, 2);
        glVertex2d(-1.75, 1);

//**********************************************************
//Letra E
        glVertex2d(-1.45, 1);
        glVertex2d(-1.45, 2);

        glVertex2d(-1.45, 2);
        glVertex2d(-0.95, 2);

        glVertex2d(-1.45, 1.5);
        glVertex2d(-0.95, 1.5);

        glVertex2d(-1.45, 1);
        glVertex2d(-0.95, 1);
//**********************************************************
//Letra L
        glVertex2d(-0.65, 1);
        glVertex2d(-0.65, 2);

        glVertex2d(-0.65, 1);
        glVertex2d(-0.15, 1);
//**********************************************************

//Sobrenome: Tunes
//Letra T
        glVertex2d(1, 1);
        glVertex2d(1, 2);

        glVertex2d(0.7, 2);
        glVertex2d(1.3, 2);
//**********************************************************

//Letra U
        glVertex2d(1.6, 1);
        glVertex2d(1.6, 2);

        glVertex2d(1.6, 1);
        glVertex2d(2.1, 1);

        glVertex2d(2.1, 2);
        glVertex2d(2.1, 1);

//**********************************************************
//Letra N
        glVertex2d(2.4, 1);
        glVertex2d(2.4, 2);

        glVertex2d(2.4, 2);
        glVertex2d(2.8, 1);

        glVertex2d(2.8, 1);
        glVertex2d(2.8, 2);
//**********************************************************
//Letra E
        glVertex2d(3.1, 1);
        glVertex2d(3.1, 2);

        glVertex2d(3.1, 2);
        glVertex2d(3.55, 2);

        glVertex2d(3.1, 1.5);
        glVertex2d(3.55, 1.5);

        glVertex2d(3.1, 1);
        glVertex2d(3.55, 1);
//**********************************************************
//Letra S
        glVertex2d(3.85, 2);
        glVertex2d(4.35, 2);

        glVertex2d(3.85, 2);
        glVertex2d(3.85, 1.5);

        glVertex2d(3.85, 1.5);
        glVertex2d(4.35, 1.5);

        glVertex2d(4.35, 1.5);
        glVertex2d(4.35, 1);

        glVertex2d(4.35, 1);
        glVertex2d(3.85, 1);
//**********************************************************
    glEnd();

    glFlush();
}


int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowSize(800,600);
    glutInitWindowPosition(10,10);

    glutCreateWindow("GLUT Shapes");
    glutKeyboardFunc(teclas);
    glutDisplayFunc(desenhaNome);

    glClearColor(0,0,1,0);
    glutMainLoop();


    return EXIT_SUCCESS;
}
