#include <GL/glut.h>
#include <Math.h>
#define PI 3.14159265f

GLfloat ballRadius = 0.02f;
int triangles = 100;
GLfloat angle;

void init()
{
    glClearColor(0.23, 0.37, 0.80, 1.0);
    glColor3f(1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
}

void myDisplay()
{
    //----------------------------------------------------------------------------------------------
    //daun
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);
    glVertex2f(-0.10, 0.30);
    glVertex2f(-0.15, 0.60);
    glVertex2f(0.00, 0.75);
    glVertex2f(0.15, 0.60);
    glVertex2f(0.10, 0.30);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);
    glVertex2f(-0.10, -0.30);
    glVertex2f(-0.15, -0.60);
    glVertex2f(0.00, -0.75);
    glVertex2f(0.15, -0.60);
    glVertex2f(0.10, -0.30);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);
    glVertex2f(-0.10, 0.20);
    glVertex2f(-0.30, 0.50);
    glVertex2f(-0.50, 0.50);
    glVertex2f(-0.50, 0.30);
    glVertex2f(-0.20, 0.10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);
    glVertex2f(0.10, 0.20);
    glVertex2f(0.30, 0.50);
    glVertex2f(0.50, 0.50);
    glVertex2f(0.50, 0.30);
    glVertex2f(0.20, 0.10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);
    glVertex2f(-0.10, -0.20);
    glVertex2f(-0.30, -0.50);
    glVertex2f(-0.50, -0.50);
    glVertex2f(-0.50, -0.30);
    glVertex2f(-0.20, -0.10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);
    glVertex2f(0.10, -0.20);
    glVertex2f(0.30, -0.50);
    glVertex2f(0.50, -0.50);
    glVertex2f(0.50, -0.30);
    glVertex2f(0.20, -0.10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);
    glVertex2f(-0.75, -0.00);
    glVertex2f(-0.60, 0.15);
    glVertex2f(-0.35, 0.10);
    glVertex2f(-0.35, -0.10);
    glVertex2f(-0.60, -0.15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);
    glVertex2f(0.75, -0.00);
    glVertex2f(0.60, 0.15);
    glVertex2f(0.35, 0.10);
    glVertex2f(0.35, -0.10);
    glVertex2f(0.60, -0.15);
    glEnd();
    //--------------------------------------------------------------------------------------------------
    //circle
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.90, 0.90, 1.00);
    glVertex2f(0.0, 0.0);       // Center of circle

    for (int i = 0; i <= triangles; i++)
    {
        angle = i * 2.0f * PI / triangles;
        glVertex2f(cos(angle) * 0.4, sin(angle) * 0.4);
    }
    glEnd();
    //--------------------------------------------------------------------------------------------------
    //bintang tengah
    //atas
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);
    glVertex2f(-0.10, -0.10);
    glVertex2f(0.00, -0.35);
    glVertex2f(0.10, -0.10);
    glEnd();
    //bawah
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);
    glVertex2f(-0.10, 0.10);
    glVertex2f(0.00, 0.35);
    glVertex2f(0.10, 0.10);
    glEnd();
    glBegin(GL_TRIANGLES);
    //kanan
    glColor3f(0.00, 0.00, 0.00);
    glVertex2f(0.10, 0.10);
    glVertex2f(0.35, 0.00);
    glVertex2f(0.10, -0.10);
    glEnd();
    //kiri
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);
    glVertex2f(-0.10, 0.10);
    glVertex2f(-0.35, 0.00);
    glVertex2f(-0.10, -0.10);
    glEnd();
    //kanan atas 
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);
    glVertex2f(0.00, 0.15);
    glVertex2f(0.25, 0.25);
    glVertex2f(0.15, 0.00);
    glEnd();
    //kanan bawah
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);
    glVertex2f(0.00, -0.15);
    glVertex2f(0.25, -0.25);
    glVertex2f(0.15, 0.00);
    glEnd();
    //kiri bawah
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);
    glVertex2f(0.00, -0.15);
    glVertex2f(-0.25, -0.25);
    glVertex2f(-0.15, 0.00);
    glEnd();
    //kiri atas 
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);
    glVertex2f(0.00, 0.15);
    glVertex2f(-0.25, 0.25);
    glVertex2f(-0.15, 0.00);
    glEnd();
    //kotak
    glBegin(GL_POLYGON);
    glColor3f(0.00, 0.00, 0.00);
    glVertex2f(-0.15, 0.15);
    glVertex2f(0.15, 0.15);
    glVertex2f(0.15, -0.15);
    glVertex2f(-0.15, -0.15);
    glEnd();
    //---------------------------------------------------------------------------------------------------
    //circle
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.0, 0.0);       // Center of circle

    for (int i = 0; i <= triangles; i++)
    {
        angle = i * 2.0f * PI / triangles;
        glVertex2f(cos(angle) * ballRadius, sin(angle) * ballRadius);
    }
    glEnd();
    //------------------------------------------------------------------------------------------------------
      //..pojok kanan atas
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);
    glVertex2f(0.20, 1.00);
    glVertex2f(0.30, 0.85);
    glVertex2f(0.65, 0.92);
    glVertex2f(0.65, 1.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);
    glVertex2f(1.00, 0.20);
    glVertex2f(0.82, 0.30);
    glVertex2f(0.95, 0.80);
    glVertex2f(1.00, 0.80);
    glEnd();
    //..pojok kiri atas
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);
    glVertex2f(-0.20, 1.00);
    glVertex2f(-0.30, 0.85);
    glVertex2f(-0.65, 0.92);
    glVertex2f(-0.65, 1.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);
    glVertex2f(-1.00, 0.20);
    glVertex2f(-0.82, 0.30);
    glVertex2f(-0.95, 0.80);
    glVertex2f(-1.00, 0.80);
    glEnd();
    //..pojok kiri bawah
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);
    glVertex2f(-0.20, -1.00);
    glVertex2f(-0.30, -0.85);
    glVertex2f(-0.65, -0.92);
    glVertex2f(-0.65, -1.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);
    glVertex2f(-1.00, -0.20);
    glVertex2f(-0.82, -0.30);
    glVertex2f(-0.95, -0.80);
    glVertex2f(-1.00, -0.80);
    glEnd();
    //..pojok kanan bawah
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);
    glVertex2f(0.20, -1.00);
    glVertex2f(0.30, -0.85);
    glVertex2f(0.65, -0.92);
    glVertex2f(0.65, -1.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);
    glVertex2f(1.00, -0.20);
    glVertex2f(0.82, -0.30);
    glVertex2f(0.95, -0.80);
    glVertex2f(1.00, -0.80);
    glEnd();
    //------------------------------------------------------------------------------------------------------   
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);
    glVertex2f(1.00, 1.00);
    glVertex2f(0.65, 1.00);
    glVertex2f(0.65, 0.65);
    glVertex2f(1.00, 0.65);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);
    glVertex2f(-1.00, 1.00);
    glVertex2f(-0.65, 1.00);
    glVertex2f(-0.65, 0.65);
    glVertex2f(-1.00, 0.65);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);
    glVertex2f(-1.00, -1.00);
    glVertex2f(-0.65, -1.00);
    glVertex2f(-0.65, -0.65);
    glVertex2f(-1.00, -0.65);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);
    glVertex2f(1.00, -1.00);
    glVertex2f(0.65, -1.00);
    glVertex2f(0.65, -0.65);
    glVertex2f(1.00, -0.65);
    glEnd();
    //------------------------------------------------------------------------------------------------------
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(350, 100);
    glutCreateWindow("TTS_GRAFKOM_H_672018072");
    glutDisplayFunc(myDisplay);
    init();
    glutMainLoop();
}