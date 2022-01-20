#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <math.h>
#define PI 3.14
GLfloat _angle1 = 0.0f;
GLfloat _move1 = 0.0f;
GLfloat _angle12 = 0.0f;
GLfloat _move2 = 0.0f;
GLfloat _move3 = 0.0f;
GLfloat position = 0.0f;
GLfloat position1 = 0.0f;
GLfloat position2 = 0.0f;
float rain = 0.0f;
bool rainyDay = false;
float _angle = 00.0f;
GLfloat p1 = 0.0f;
GLfloat p2 = 0.0f;
GLfloat s =0.05f;
void update(int value) ///Ah7
{
    //Boat 2 Right to Left
    position -= 0.3;
    if(position<-55.0){
        position=120.0f;
    }

    //Boat 1 Left to Right
    position1 += 0.3;
    if(position1>140.0){
      position1 = -30.0f;
    }

    //Boat 3 Left to Right
    position2 += 0.2;
    if(position2>120.0){
      position2 = -90.0f;
    }

    glutPostRedisplay();

    glutTimerFunc(20,update,0);
}
//Rain
void Rain(int value)///Ah5
{

    if (rainyDay)
    {
        rain += 0.01f;
        glLineWidth(2.0);
        glBegin(GL_POINTS);
        for (int i = 0; i <= 500; i++)
        {
            int x = rand();
            int y = rand();
            x %= 120;
            y %= 120;
            glBegin(GL_LINES);
            glColor3f(1.0, 1.0, 1.0);
            glVertex2d(x, y - 20);
            glVertex2d(x + 1, y - 16);
            glEnd();
        }
        glEnd();
    }
}
//Boat1
void Boat1()///Ah2
{
    glPushMatrix();
    glScalef(0.7f,0.7f, 0.0f);
    glTranslatef(position1, 0.0f, 0.0f);
    glTranslatef(0.0f,-7.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(71, 72, 76);
    glVertex2f(2.8f,8.0f);
    glVertex2f(7.0f,0.0f);
    glVertex2f(20.0f,0.0f);
    glVertex2f(24.2f,8.0f);
    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(3.0f,8.0f);
    glVertex2f(10.0f,5.0f);
    glVertex2f(10.0f,5.0f);
    glVertex2f(17.0f,5.0f);
    glVertex2f(17.0f,5.0f);
    glVertex2f(24.0f,8.0f);
    glVertex2f(24.0f,8.0f);
    glVertex2f(3.0f,8.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,215,0);
    glVertex2f(10.0f,5.0f);
    glVertex2f(17.0f,5.0f);
    glVertex2f(17.0f,12.0f);
    glVertex2f(10.0f,12.0f);
    glEnd();
    glPopMatrix();


}
//Boat2
void Boat2()///Ah3
{
    glPushMatrix();
    glScalef(0.7f,0.7f, 0.0f);
    glTranslatef(position, 0.0f, 0.0f);
    glTranslatef(30.0f,-27.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(71, 72, 76);
    glVertex2f(2.8f,8.0f);
    glVertex2f(7.0f,0.0f);
    glVertex2f(20.0f,0.0f);
    glVertex2f(24.2f,8.0f);
    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(3.0f,8.0f);
    glVertex2f(10.0f,5.0f);
    glVertex2f(10.0f,5.0f);
    glVertex2f(17.0f,5.0f);
    glVertex2f(17.0f,5.0f);
    glVertex2f(24.0f,8.0f);
    glVertex2f(24.0f,8.0f);
    glVertex2f(3.0f,8.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(65,105,225);
    glVertex2f(10.0f,5.0f);
    glVertex2f(17.0f,5.0f);
    glVertex2f(17.0f,12.0f);
    glVertex2f(10.0f,12.0f);
    glEnd();
    glPopMatrix();


}
//Boat3
void Boat3()///Ah4
{
    glPushMatrix();
    glScalef(0.7f,0.7f, 0.0f);
    glTranslatef(position2, 0.0f, 0.0f);
    glTranslatef(60.0f,10.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(71, 72, 76);
    glVertex2f(2.8f,8.0f);
    glVertex2f(7.0f,0.0f);
    glVertex2f(20.0f,0.0f);
    glVertex2f(24.2f,8.0f);
    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(3.0f,8.0f);
    glVertex2f(10.0f,5.0f);
    glVertex2f(10.0f,5.0f);
    glVertex2f(17.0f,5.0f);
    glVertex2f(17.0f,5.0f);
    glVertex2f(24.0f,8.0f);
    glVertex2f(24.0f,8.0f);
    glVertex2f(3.0f,8.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(165,42,42);
    glVertex2f(10.0f,5.0f);
    glVertex2f(17.0f,5.0f);
    glVertex2f(17.0f,12.0f);
    glVertex2f(10.0f,12.0f);
    glEnd();
    glPopMatrix();


}

//Boat4
void Boat4()///Ah1
{
    glPushMatrix();
    glScalef(0.35f,0.35f, 0.0f);
    glTranslatef(152.0f,145.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(71, 72, 76);
    glVertex2f(2.8f,8.0f);
    glVertex2f(7.0f,0.0f);
    glVertex2f(20.0f,0.0f);
    glVertex2f(24.2f,8.0f);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(3.0f,8.0f);
    glVertex2f(10.0f,5.0f);
    glVertex2f(10.0f,5.0f);
    glVertex2f(17.0f,5.0f);
    glVertex2f(17.0f,5.0f);
    glVertex2f(24.0f,8.0f);
    glVertex2f(24.0f,8.0f);
    glVertex2f(3.0f,8.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(10.0f,5.0f);
    glVertex2f(17.0f,5.0f);
    glVertex2f(17.0f,12.0f);
    glVertex2f(10.0f,12.0f);
    glEnd();
    glPopMatrix();


}

void u(int value)///Kr8
{
    if(p1>220)
    {
        p1=-50.0f;
    }
    p1 += s;
    glutPostRedisplay();
    glutTimerFunc(5,u,0);
}

void u1(int value)///Kr7
{
    if(p2<-100)
    {
        p2=70.0f;
    }
    p2 -= s;
    glutPostRedisplay();
    glutTimerFunc(5,u1,0);
}

void sun()///Kr1
{
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(247, 233, 25);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+10,y+80);
    }
    glEnd();
}

void plane()///kr2
{
    glPushMatrix();
    glScalef(0.4f,0.4f, 0.0f);
    glTranslatef(p1,0.0f,0.0f);
    glTranslatef(0.0f,140.0f,0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(36,0,0);
    glVertex2f(40.0f,85.0f);
    glVertex2f(55.0f,85.0f);
    glVertex2f(52.0f,89.0f);
    glVertex2f(40.0f,89.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(36,0,0);
    glVertex2f(43.0f,82.0f);
    glVertex2f(46.0f,82.0f);
    glVertex2f(48.0f,85.0f);
    glVertex2f(45.0f,85.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(36,0,0);
    glVertex2f(45.0f,89.0f);
    glVertex2f(48.0f,89.0f);
    glVertex2f(46.0f,92.0f);
    glVertex2f(43.0f,92.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(36,0,0);
    glVertex2f(36.0f,90.0f);
    glVertex2f(40.0f,85.0f);
    glVertex2f(40.0f,89.0f);
    glVertex2f(38.0f,91.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(192,192,192);
    glVertex2f(42.0f,86.0f);
    glVertex2f(44.0f,86.0f);
    glVertex2f(44.0f,88.0f);
    glVertex2f(42.0f,88.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(192,192,192);
    glVertex2f(46.0f,86.0f);
    glVertex2f(48.0f,86.0f);
    glVertex2f(48.0f,88.0f);
    glVertex2f(46.0f,88.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(224,0,0);
    glVertex2f(52.0f,85.0f);
    glVertex2f(55.0f,85.0f);
    glVertex2f(52.0f,89.0f);
    glEnd();
    glPopMatrix();
}

void cloud1()///kr3
{
    glPushMatrix();
    glTranslatef(p2,0.0f,0.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(192,192,192);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+30,y+85);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(192,192,192);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+25,y+85);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(192,192,192);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+27,y+88);
    }
    glEnd();
    glPopMatrix();
}

void cloud2()///kr4
{
    glPushMatrix();
    glTranslatef(p2,0.0f,0.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(192,192,192);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+65,y+85);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(192,192,192);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+70,y+85);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(192,192,192);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+67,y+88);
    }
    glEnd();
    glPopMatrix();
}

void cloud3()///kr5
{
    glPushMatrix();
    glTranslatef(p2,0.0f,0.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(192,192,192);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+75,y+90);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(192,192,192);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+80,y+90);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(192,192,192);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=5.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+77,y+92);
    }
    glEnd();
    glPopMatrix();
}
void drawSkyBottom(void)///Sha4
{

    glBegin(GL_QUADS);
    glColor3ub(30, 86, 49);
    glVertex2f(0.0f, 52.0f);
    glVertex2f(100.0f, 70.0f);
    glVertex2f(100.0f, 69.0f);
    glVertex2f(100.0f, 50.0f);
    glVertex2f(89.0f, 72.0f);
    glVertex2f(99.0f, 60.0f);
    glVertex2f(81.0f, 65.0f);
    glVertex2f(78.0f, 60.0f);
    glVertex2f(0.0f, 62.0f);
    glEnd();
}


void drawWindmillTop(void)///Sha1
{
    glPushMatrix();
    glTranslatef(54.5, 70.2, 0);
    glRotatef(_angle, 0, 0, 1);
    glBegin(GL_POLYGON);
    glColor3ub(0, 153, 0);
    glVertex2i(0, 0);
    glVertex2i(4, 3.7);
    glVertex2i(0, -1);
    glVertex2i(0, 0);
    glVertex2i(-4, 3.5);
    glVertex2i(1, -2);
    glVertex2i(0, 0);
    glVertex2i(1, -4.8);
    glVertex2i(1, 1);
    glEnd();
    glPopMatrix();

}

void drawWindmil2Top(void)///Sha2
{
    glPushMatrix();
    glTranslatef(59.5, 70.6, 0);
    glRotatef(_angle, 0, 0, 1);
    glBegin(GL_POLYGON);
    glColor3ub(0, 153, 0);
    glVertex2i(0, 0);
    glVertex2i(4, 3.7);
    glVertex2i(0, -1);
    glVertex2i(0, 0);
    glVertex2i(-4, 3.5);
    glVertex2i(1, -2);
    glVertex2i(0, 0);
    glVertex2i(1, -4.8);
    glVertex2i(1, 1);
    glEnd();
    glPopMatrix();
}

void drawWindmil3Top(void)///Sha3
{
    glPushMatrix();
    glTranslatef(64.3, 71.3, 0);
    glRotatef(_angle, 0, 0, 1);
    glBegin(GL_POLYGON);
    glColor3ub(0, 153, 0);
    glVertex2i(0, 0);
    glVertex2i(4, 3.7);
    glVertex2i(0, -1);
    glVertex2i(0, 0);
    glVertex2i(-4, 3.5);
    glVertex2i(1, -2);
    glVertex2i(0, 0);
    glVertex2i(1, -4.8);
    glVertex2i(1, 1);
    glEnd();
    glPopMatrix();
}


void drawWindmillOne(void)
{


    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2i(54, 61);
    glVertex2i(55, 61);
    glVertex2i(55, 70);
    glVertex2i(54, 70);
    glEnd();


    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(0, 153, 0); //249,215,28 //255,140,0
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.4;
        float x = r * cos(A) + 54.5;
        float y = r * sin(A) + 70.3;
        glVertex2f(x, y);
    }
    glEnd();
    drawWindmillTop();
}


void drawWindmillTwo(void)
{

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2i(59, 62);
    glVertex2i(60, 62);
    glVertex2i(60, 70);
    glVertex2i(59, 70);
    glEnd();

    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(0, 153, 0); //249,215,28 //255,140,0
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.4;
        float x = r * cos(A) + 59.5;
        float y = r * sin(A) + 70.4;
        glVertex2f(x, y);
    }
    glEnd();
    drawWindmil2Top();
}

void drawWindmillThree(void)
{
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2i(64, 63);
    glVertex2i(65, 63);
    glVertex2i(65, 71);
    glVertex2i(64, 71);
    glEnd();

    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(0, 153, 0); //249,215,28 //255,140,0
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.4;
        float x = r * cos(A) + 64.5;
        float y = r * sin(A) + 71.3;
        glVertex2f(x, y);
    }
    glEnd();
    drawWindmil3Top();
}
void updates(int value)///Sha6
{

    // Windmill head rotation
    _angle += 2.0;
    if (_angle > 360)
    {
        _angle -= 360;
    }
    glutPostRedisplay();          // Update the GLUT
    glutTimerFunc(25, updates, 0); // Re-call it
}


void Village()///Kr6
{
    //Ground
    glBegin(GL_QUADS);
	glColor3ub(0, 163, 0);
	glVertex2f(60.0f, 58.0f);
	glVertex2f(100.0f, 62.0f);
	glVertex2f(100.0f, 44.0f);
	glVertex2f(64.0f, 44.0f);
	glEnd();

	//Bank
	glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(60.0f,58.0f);
    glVertex2f(60.0f,56.0f);
    glVertex2f(62.0f,44.0f);
    glVertex2f(64.0f,44.0f);
    glEnd();

    //House1
    glBegin(GL_POLYGON);
    glColor3ub(128,128,0);
    glVertex2f(65.0f,45.0f);
    glVertex2f(70.0f,45.0f);
    glVertex2f(70.0f,50.0f);
    glVertex2f(67.5f,53.0f);
    glVertex2f(65.0f,50.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(224,146,0);
    glVertex2f(67.0f,53.0f);
    glVertex2f(70.0f,50.0f);
    glVertex2f(78.0f,50.0f);
    glVertex2f(75.0f,53.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(236,224,207);
    glVertex2f(70.0f,45.0f);
    glVertex2f(77.0f,46.0f);
    glVertex2f(77.0f,50.0f);
    glVertex2f(70.0f,50.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(36,0,0);
    glVertex2f(71.0f,47.0f);
    glVertex2f(73.0f,47.0f);
    glVertex2f(73.0f,49.0f);
    glVertex2f(71.0f,49.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(36,0,0);
    glVertex2f(74.0f,47.0f);
    glVertex2f(76.0f,47.0f);
    glVertex2f(76.0f,49.0f);
    glVertex2f(74.0f,49.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,36);
    glVertex2f(66.5f,49.5f);
    glVertex2f(66.5f,46.0f);
    glVertex2f(68.0f,46.0f);
    glVertex2f(68.0f,49.5f);
    glEnd();

    //Tree1
    glBegin(GL_QUADS);
    glColor3ub(163,106,0);
    glVertex2f(80.0f,45.0f);
    glVertex2f(80.8f,45.0f);
    glVertex2f(80.8f,50.0f);
    glVertex2f(80.0f,50.0f);
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(0, 224, 0);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=2.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+79,y+50);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(0, 224, 0);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=2.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+78,y+53);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(0, 224, 0);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=2.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+81,y+52);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        glColor3ub(0, 224, 0);
        float pi=3.1416;
        float A=(i*2*pi)/50;
        float r=2.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+80,y+55);
    }
    glEnd();

    //Tree2
    glBegin(GL_QUADS);
    glColor3ub(163,106,0);
    glVertex2f(84.0f,50.0f);
    glVertex2f(84.7f,50.0f);
    glVertex2f(84.7f,58.0f);
    glVertex2f(84.0f,58.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 224, 0);
    glVertex2f(82.0f,58.0f);
    glVertex2f(86.7f,58.0f);
    glVertex2f(84.3f,62.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 224, 0);
    glVertex2f(82.0f,60.0f);
    glVertex2f(86.7f,60.0f);
    glVertex2f(84.3f,65.0f);
    glEnd();

    //House2
    glBegin(GL_POLYGON);
    glColor3ub(128,128,0);
    glVertex2f(86.0f,48.0f);
    glVertex2f(91.0f,47.0f);
    glVertex2f(91.0f,53.0f);
    glVertex2f(88.5f,57.0f);
    glVertex2f(86.0f,53.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(224,146,0);
    glVertex2f(91.0f,53.0f);
    glVertex2f(99.8f,53.0f);
    glVertex2f(98.0f,57.0f);
    glVertex2f(88.5f,57.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(236,224,207);
    glVertex2f(91.0f,47.0f);
    glVertex2f(99.0f,48.0f);
    glVertex2f(99.0f,53.0f);
    glVertex2f(91.0f,53.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,36);
    glVertex2f(87.5f,48.0f);
    glVertex2f(89.5f,48.0f);
    glVertex2f(89.5f,53.0f);
    glVertex2f(87.5f,53.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(36,0,0);
    glVertex2f(92.0f,49.0f);
    glVertex2f(94.0f,49.0f);
    glVertex2f(94.0f,51.0f);
    glVertex2f(92.0f,51.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(36,0,0);
    glVertex2f(96.0f,49.0f);
    glVertex2f(98.0f,49.0f);
    glVertex2f(98.0f,51.0f);
    glVertex2f(96.0f,51.0f);
    glEnd();
}
void KatiburRahman()
{
    Village();
    sun();
    cloud2();
    cloud3();
    plane();
    cloud1();
}

void updatecar1(int value)///Sn8
{
    _move1 += 0.8;
    if(_move1>102.0)
    {
      _move1 =- 10.0f;
    }
    glutPostRedisplay();

    glutTimerFunc(20,updatecar1,0);
}
void updatecar2(int value)///Sn9
{
    _move2 += .4;

    if(_move2 > 100)
    {
    _move2 = -15.0;
    }
    glutPostRedisplay();

    glutTimerFunc(15, updatecar2, 0);
}
void updatecar3(int value)///Sn10
{
    _move3 -= 0.35;
    if(_move3<-10.0){
        _move3=102.0f;
    }
    glutPostRedisplay();

    glutTimerFunc(20,updatecar3,0);
}
void Water()///Ah6
{
    ///down water
    glBegin(GL_POLYGON);
    glColor3ub(91, 191, 227);
    glVertex2f(0.0f,52.0f);
    glVertex2f(0.0f,-20.0f);
    glVertex2f(100.0f,-20.0f);
    glVertex2f(100.0f,62.0f);
    glEnd();
}
void Sky()///Sha5
{
    glBegin(GL_POLYGON);
    glColor3ub(240, 210, 151);
    glVertex2f(0.0f,100.0f);
    glVertex2f(0.0f,52.0f);
    glVertex2f(100.0f,62.0f);
    glVertex2f(100.0f,100.0f);

    glEnd();
}
void Bridge()///Sn1
{
    //glClear(GL_COLOR_BUFFER_BIT);
    ///left side lol
    glBegin(GL_POLYGON);
    glColor3ub(210,209,205);
    glVertex2f(0.0f,20.0f);
    glVertex2f(40.0f,20.0f);
    glVertex2f(44.0f,30.0f);
    glVertex2f(0.0f,30.0f);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.0f,25.0f);
    glVertex2f(35.0f,25.0f);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(30.0f,30.0f);
    glVertex2f(40.0f,20.0f);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.0f,20.0f);
    glVertex2f(40.0f,20.0f);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(44.0f,30.0f);
    glVertex2f(40.0f,20.0f);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(43.0f,30.0f);
    glVertex2f(39.0f,21.0f);
    glEnd();

    ///right side
    glBegin(GL_POLYGON);
    glColor3ub(210,209,205);
    glVertex2f(51.0f,30.0f);
    glVertex2f(55.0f,20.0f);
    glVertex2f(100.0f,20.0f);
    glVertex2f(100.0f,30.0f);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(51.0f,30.0f);
    glVertex2f(55.0f,20.0f);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(51.0f,30.0f);
    glVertex2f(55.0f,20.0f);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(55.0f,20.0f);
    glVertex2f(100.0f,20.0f);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(60.0f,25.0f);
    glVertex2f(100.0f,25.0f);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(55.0f,20.0f);
    glVertex2f(65.0f,30.0f);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(52.0f,30.0f);
    glVertex2f(56.0f,21.0f);
    glEnd();



    ///mid
    glBegin(GL_POLYGON);
    glColor3ub(210,209,205);
    glVertex2f(44.0f,30.0f);
    glVertex2f(43.0f,27.0f);
    glVertex2f(52.0f,27.0f);
    glVertex2f(51.0f,30.0f);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(43.0f,27.0f);
    glVertex2f(52.0f,27.0f);
    glEnd();



}
void Road()///Sn2
{
    ///road
    glBegin(GL_POLYGON);
    glColor3ub(71,72,76);
    glVertex2f(0.0f,42.0f);
    glVertex2f(0.0f,30.0f);
    glVertex2f(100.0f,30.0f);
    glVertex2f(100.0f,42.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(204, 204, 204);
    glVertex2f(42.0f,30.0f);
    glVertex2f(44.0f,30.0f);
    glVertex2f(49.0f,42.0f);
    glVertex2f(47.0f,42.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(204, 204, 204);
    glVertex2f(51.0f,30.0f);
    glVertex2f(53.0f,30.0f);
    glVertex2f(58.0f,42.0f);
    glVertex2f(56.0f,42.0f);
    glEnd();

    ///big line
    glLineWidth(8.0);
    glBegin(GL_LINES);
    glColor3ub(179, 0, 0);
    glVertex2f(0.0f,30.0f);
    glVertex2f(100.0f,30.0f);
    glEnd();

    glLineWidth(8.0);
    glBegin(GL_LINES);
    glColor3ub(179, 0, 0);
    glVertex2f(0.0f,42.0f);
    glVertex2f(100.0f,42.0f);
    glEnd();

    ///mid line
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(204, 204, 204);
    glVertex2f(0.0f,36.0f);
    glVertex2f(100.0f,36.0f);
    glEnd();
}

void Lamppostback()///Sn3
{
    //lamppost1
    glBegin(GL_POLYGON);
    glColor3ub(150, 139, 107);
    glVertex2f(47.0f,50.0f);
    glVertex2f(47.0f,41.0f);
    glVertex2f(48.0f,41.0f);
    glVertex2f(48.0f,49.0f);
    glVertex2f(50.0f,49.0f);
    glVertex2f(50.0f,50.0f);
    glEnd();

    //lamppost2
    glBegin(GL_POLYGON);
    glColor3ub(150, 139, 107);
    glVertex2f(56.0f,49.0f);
    glVertex2f(56.0f,41.0f);
    glVertex2f(57.0f,41.0f);
    glVertex2f(57.0f,50.0f);
    glVertex2f(54.0f,50.0f);
    glVertex2f(54.0f,49.0f);
    glEnd();

}

void Lamppostfront()///Sn4
{
    glBegin(GL_POLYGON);
    glColor3ub(150, 139, 107);
    glVertex2f(43.0f,40.0f);
    glVertex2f(43.0f,30.5f);
    glVertex2f(44.0f,30.5f);
    glVertex2f(44.0f,39.0f);
    glVertex2f(46.0f,39.0f);
    glVertex2f(46.0f,40.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(150, 139, 107);
    glVertex2f(52.0f,39.0f);
    glVertex2f(52.0f,30.5f);
    glVertex2f(53.0f,30.5f);
    glVertex2f(53.0f,40.0f);
    glVertex2f(50.0f,40.0f);
    glVertex2f(50.0f,39.0f);
    glEnd();
}
void Car1()///Sn5
{
    glPushMatrix();
    glTranslatef(_move1, 0.0f, 0.0f);
    glTranslatef(0.0f,39.0f,0.0f);
    glScalef(4.0f,4.0f,0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 0);
    glVertex2f(-0.5f,0.0f);
    glVertex2f(1.75f,0.0f);
    glVertex2f(1.75f,0.4f);
    glVertex2f(1.0f,0.6f);
    glVertex2f(0.5f,1.0f);
    glVertex2f(0.0f,1.0f);
    glVertex2f(-0.5f,0.5f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.25f,0.6f);
    glVertex2f(0.85f,0.6f);
    glVertex2f(0.5f,0.9f);
    glVertex2f(0.0f,0.9f);
    glEnd();

    glPushMatrix();



    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
    {
    glColor3f(0.0,0,0.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=0.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y);
    }
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    for(int i=0;i<200;i++)
    {
    glColor3f(1.0,1.0,1.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=0.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.25f, 0.0f, 0.0f);
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
    {
    glColor3f(0.0,0,0.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=0.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y);
    }
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    for(int i=0;i<200;i++)
    {
    glColor3f(1.0,1.0,1.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=0.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();
    glPopMatrix();
    //glutSwapBuffers();
}
void Car2()///Sn6
{
    glPushMatrix();
    glTranslatef(_move2, 0.0f, 0.0f);
    glTranslatef(0.0f,38.0f,0.0f);
    glScalef(6.0f,6.0f,0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(240, 65, 65);
    glVertex2f(-0.5f,1.0f);
    glVertex2f(-0.5f,0.0f);
    glVertex2f(1.75f,0.0f);
    glVertex2f(1.75f,0.5f);
    glVertex2f(1.5f,1.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.5f,0.5f);
    glVertex2f(1.75f,0.5f);
    glVertex2f(1.60f,0.8f);
    glVertex2f(-0.5f,0.8f);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(1.60f,0.8f);
    glVertex2f(-0.5f,0.8f);
    glEnd();

    glPushMatrix();
    glRotatef(_angle12, 0.0f, 0.0f,1.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
    {
    glColor3f(0.0,0,0.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=0.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y);
    }
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    for(int i=0;i<200;i++)
    {
    glColor3f(1.0,1.0,1.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=0.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.25f, 0.0f, 0.0f);
    glRotatef(_angle12, 0.0f, 0.0f,1.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
    {
    glColor3f(0.0,0,0.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=0.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y);
    }
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    for(int i=0;i<200;i++)
    {
    glColor3f(1.0,1.0,1.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=0.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y );
    }
    glEnd();

    glPopMatrix();
    glPopMatrix();
}
void Car3()///Sn7
{
    glPushMatrix();
    glTranslatef(_move3, 0.0f, 0.0f);
    glTranslatef(0.0f,34.0f,0.0f);
    glScalef(6.0f,6.0f,0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(16, 194, 102);
    glVertex2f(0.0f,1.0f);
    glVertex2f(-0.5f,0.5f);
    glVertex2f(-0.5f,0.0f);
    glVertex2f(1.75f,0.0f);
    glVertex2f(1.75f,1.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(0.0f,1.0f);
    glVertex2f(-0.5f,0.5f);
    glVertex2f(1.75f,0.5f);
    glVertex2f(1.75f,1.0f);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.5f,0.5f);
    glVertex2f(1.75f,0.5f);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f,1.0f);
    glVertex2f(0.0f,0.5f);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.2f,1.0f);
    glVertex2f(0.2f,0.5f);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.4f,1.0f);
    glVertex2f(0.4f,0.5f);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.6f,1.0f);
    glVertex2f(0.6f,0.5f);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.8f,1.0f);
    glVertex2f(0.8f,0.5f);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(1.0f,1.0f);
    glVertex2f(1.0f,0.5f);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(1.2f,1.0f);
    glVertex2f(1.2f,0.5f);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(1.4f,1.0f);
    glVertex2f(1.4f,0.5f);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(1.6f,1.0f);
    glVertex2f(1.6f,0.5f);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(1.7f,1.0f);
    glVertex2f(1.7f,0.5f);
    glEnd();

    glPushMatrix();
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
    {
    glColor3f(0.0,0,0.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=0.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y);
    }
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    for(int i=0;i<200;i++)
    {
    glColor3f(1.0,1.0,1.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=0.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.25f, 0.0f, 0.0f);
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
    {
    glColor3f(0.0,0,0.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=0.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y);
    }
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    for(int i=0;i<200;i++)
    {
    glColor3f(1.0,1.0,1.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=0.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

    glPopMatrix();


}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    Sky();
    drawSkyBottom();
    drawWindmillOne();
    drawWindmillTwo();
    drawWindmillThree();

    Water();
    Bridge();
    Road();
    Lamppostback();
    Car1();
    Car2();
    Car3();
    Lamppostfront();


    KatiburRahman();
    Boat1();
    Boat2();
    Boat3();
    Boat4();
    Rain(rain);

    glFlush();
}
//keyboard
void Keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'r':
        rainyDay = true;
        break;

    case 'n':
        rainyDay = false;
        break;
    case 'e':
        exit(0);
        break;

    default:
        break;
    }
}
void init()
{
       glClearColor(1.0f,1.0f,1.0f,1.0f);
       gluOrtho2D(0,100,-20,100);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1080,720);
    glutCreateWindow("Nikli Haor");
    init();
    glutTimerFunc(15, updatecar1, 0);
    glutTimerFunc(15, updatecar2, 0);
    glutTimerFunc(20, updatecar3, 0);
    glutTimerFunc(5, u, 0);
    glutTimerFunc(5, u1, 0);
    glutTimerFunc(25, updates, 0);
    glutTimerFunc(20, update, 0);
    glutDisplayFunc(display);
    glutKeyboardFunc(Keyboard);
    glutMainLoop();
    return 0;
}

