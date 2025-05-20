#include <iostream>
#include <GL/glut.h>
#include <math.h>
#include <GL/freeglut.h>
#include <cmath>
#include<windows.h>
#include<cstdio>
#include <GL/gl.h>
#include <vector>
#include <cstdlib>
using namespace std;
bool isRain=false;
bool isSnow=false;


#define PI 3.141516
int triangleAmount = 500;
float twicePi = 2.0f * PI;
float angle1=0.0;
float angle2=120.0;
float angle3=240.0;

void sky()
{
    ///sky
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.8f, 1.0f);
    glVertex2f(-1.0f, 0.4f);
    glVertex2f(1.0f, 0.4f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();
}

void bus_wheel_circle(GLfloat cx, GLfloat cy, GLfloat radius, int r, int g, int b)
{
    glColor3ub(r,g,b);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            cx + (radius * cos(i *  twicePi / triangleAmount)),
            cy + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

}

void buildings1()                          ///OID-6
{
    ///1st
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.6f);
    glVertex2f(-1.0f, 0.4f);
    glVertex2f(-0.91f, 0.4f);
    glVertex2f(-0.91f, 0.6f);
    glVertex2f(-1.0f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.5f);
    glVertex2f(-0.91f, 0.4f);
    glVertex2f(-0.89f, 0.4f);
    glVertex2f(-0.89f, 0.57f);
    glVertex2f(-0.91f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.0f, 0.47f);
    glVertex2f(-0.97f, 0.47f);
    glVertex2f(-0.97f, 0.52f);
    glVertex2f(-1.0f, 0.52f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.96f, 0.47f);
    glVertex2f(-0.93f, 0.47f);
    glVertex2f(-0.93f, 0.52f);
    glVertex2f(-0.96f, 0.52f);
    glEnd();

    ///2
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.0f, 0.6f);
    glVertex2f(-0.86f, 0.4f);
    glVertex2f(-0.76f, 0.4f);
    glVertex2f(-0.76f, 0.65f);
    glVertex2f(-0.86f, 0.65f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.0f, 0.4f);
    glVertex2f(-0.76f, 0.4f);
    glVertex2f(-0.73f, 0.4f);
    glVertex2f(-0.73f, 0.62f);
    glVertex2f(-0.76f, 0.65f);
    glEnd();

    ///windows
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.84f, 0.43f);
    glVertex2f(-0.81f, 0.43f);
    glVertex2f(-0.81f, 0.48f);
    glVertex2f(-0.84f, 0.48f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.8f, 0.43f);
    glVertex2f(-0.77f, 0.43f);
    glVertex2f(-0.77f, 0.48f);
    glVertex2f(-0.8f, 0.48f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.84f, 0.5f);
    glVertex2f(-0.81f, 0.5f);
    glVertex2f(-0.81f, 0.55f);
    glVertex2f(-0.84f, 0.55f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.8f, 0.5f);
    glVertex2f(-0.77f, 0.5f);
    glVertex2f(-0.77f, 0.55f);
    glVertex2f(-0.8f, 0.55f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.84f, 0.57f);
    glVertex2f(-0.81f, 0.57f);
    glVertex2f(-0.81f, 0.62f);
    glVertex2f(-0.84f, 0.62f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.8f, 0.57f);
    glVertex2f(-0.77f, 0.57f);
    glVertex2f(-0.77f, 0.62f);
    glVertex2f(-0.8f, 0.62f);
    glEnd();

    ///3
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.6f, 0.0f);
    glVertex2f(-0.72f, 0.4f);
    glVertex2f(-0.62f, 0.4f);
    glVertex2f(-0.62f, 0.71f);
    glVertex2f(-0.72f, 0.71f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.4f, 0.0f);
    glVertex2f(-0.62f, 0.4f);
    glVertex2f(-0.59f, 0.4f);
    glVertex2f(-0.59f, 0.65f);
    glVertex2f(-0.62f, 0.71f);
    glEnd();

    ///windows
    ///p1
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.7f, 0.43f);
    glVertex2f(-0.67f, 0.43f);
    glVertex2f(-0.67f, 0.48f);
    glVertex2f(-0.7f, 0.48f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.66f, 0.43f);
    glVertex2f(-0.63f, 0.43f);
    glVertex2f(-0.63f, 0.48f);
    glVertex2f(-0.66f, 0.48f);
    glEnd();

    ///p2
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.7f, 0.5f);
    glVertex2f(-0.67f, 0.5f);
    glVertex2f(-0.67f, 0.55f);
    glVertex2f(-0.7f, 0.55f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.66f, 0.5f);
    glVertex2f(-0.63f, 0.5f);
    glVertex2f(-0.63f, 0.55f);
    glVertex2f(-0.66f, 0.55f);
    glEnd();

    ///p3
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.7f, 0.57f);
    glVertex2f(-0.67f, 0.57f);
    glVertex2f(-0.67f, 0.62f);
    glVertex2f(-0.7f, 0.62f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.66f, 0.57f);
    glVertex2f(-0.63f, 0.57f);
    glVertex2f(-0.63f, 0.62f);
    glVertex2f(-0.66f, 0.62f);
    glEnd();

    ///p4
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.7f, 0.64f);
    glVertex2f(-0.67f, 0.64f);
    glVertex2f(-0.67f, 0.69f);
    glVertex2f(-0.7f, 0.69f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.66f, 0.64f);
    glVertex2f(-0.63f, 0.64f);
    glVertex2f(-0.63f, 0.69f);
    glVertex2f(-0.66f, 0.69f);
    glEnd();

    ///4
    glBegin(GL_QUADS);
    glColor3f(0.7f, 0.0f, 0.0f);
    glVertex2f(-0.58f, 0.4f);
    glVertex2f(-0.48f, 0.4f);
    glVertex2f(-0.48f, 0.5f);
    glVertex2f(-0.58f, 0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.0f, 0.0f);
    glVertex2f(-0.48f, 0.4f);
    glVertex2f(-0.47f, 0.4f);
    glVertex2f(-0.47f, 0.48f);
    glVertex2f(-0.48f, 0.5f);
    glEnd();

    ///windows
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.56f, 0.43f);
    glVertex2f(-0.53f, 0.43f);
    glVertex2f(-0.53f, 0.48f);
    glVertex2f(-0.56f, 0.48f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.52f, 0.43f);
    glVertex2f(-0.49f, 0.43f);
    glVertex2f(-0.49f, 0.48f);
    glVertex2f(-0.52f, 0.48f);
    glEnd();

    ///5
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(-0.45f, 0.4f);
    glVertex2f(-0.35f, 0.4f);
    glVertex2f(-0.35f, 0.72f);
    glVertex2f(-0.45f, 0.72f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.3f, 0.3f);
    glVertex2f(-0.35f, 0.4f);
    glVertex2f(-0.33f, 0.4f);
    glVertex2f(-0.33f, 0.67f);
    glVertex2f(-0.35f, 0.72f);
    glEnd();

    ///windows
    ///p1
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.43f, 0.43f);
    glVertex2f(-0.4f, 0.43f);
    glVertex2f(-0.4f, 0.48f);
    glVertex2f(-0.43f, 0.48f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.39f, 0.43f);
    glVertex2f(-0.36f, 0.43f);
    glVertex2f(-0.36f, 0.48f);
    glVertex2f(-0.39f, 0.48f);
    glEnd();

    ///p2
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.43f, 0.5f);
    glVertex2f(-0.4f, 0.5f);
    glVertex2f(-0.4f, 0.55f);
    glVertex2f(-0.43f, 0.55f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.39f, 0.5f);
    glVertex2f(-0.36f, 0.5f);
    glVertex2f(-0.36f, 0.55f);
    glVertex2f(-0.39f, 0.55f);
    glEnd();

    ///p3
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.43f, 0.57f);
    glVertex2f(-0.4f, 0.57f);
    glVertex2f(-0.4f, 0.62f);
    glVertex2f(-0.43f, 0.62f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.39f, 0.57f);
    glVertex2f(-0.36f, 0.57f);
    glVertex2f(-0.36f, 0.62f);
    glVertex2f(-0.39f, 0.62f);
    glEnd();

    ///p4
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.43f, 0.64f);
    glVertex2f(-0.4f, 0.64f);
    glVertex2f(-0.4f, 0.69f);
    glVertex2f(-0.43f, 0.69f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.39f, 0.64f);
    glVertex2f(-0.36f, 0.64f);
    glVertex2f(-0.36f, 0.69f);
    glVertex2f(-0.39f, 0.69f);
    glEnd();

    ///6
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.0f, 0.3f);
    glVertex2f(-0.3f, 0.4f);
    glVertex2f(-0.2f, 0.4f);
    glVertex2f(-0.2f, 0.6f);
    glVertex2f(-0.3f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.0f, 0.2f);
    glVertex2f(-0.2f, 0.4f);
    glVertex2f(-0.18f, 0.4f);
    glVertex2f(-0.18f, 0.57f);
    glVertex2f(-0.2f, 0.6f);
    glEnd();

    ///windows
    ///p1
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.28f, 0.43f);
    glVertex2f(-0.25f, 0.43f);
    glVertex2f(-0.25f, 0.48f);
    glVertex2f(-0.28f, 0.48f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.24f, 0.43f);
    glVertex2f(-0.21f, 0.43f);
    glVertex2f(-0.21f, 0.48f);
    glVertex2f(-0.24f, 0.48f);
    glEnd();

    ///p2
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.28f, 0.5f);
    glVertex2f(-0.25f, 0.5f);
    glVertex2f(-0.25f, 0.55f);
    glVertex2f(-0.28f, 0.55f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.24f, 0.5f);
    glVertex2f(-0.21f, 0.5f);
    glVertex2f(-0.21f, 0.55f);
    glVertex2f(-0.24f, 0.55f);
    glEnd();

    ///7
    glBegin(GL_QUADS);
    glColor3f(0.9f, 0.9f, 0.0f);
    glVertex2f(-0.17f, 0.4f);
    glVertex2f(-0.07f, 0.4f);
    glVertex2f(-0.07f, 0.65f);
    glVertex2f(-0.17f, 0.65f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7f, 0.7f, 0.0f);
    glVertex2f(-0.07f, 0.4f);
    glVertex2f(-0.06f, 0.4f);
    glVertex2f(-0.06f, 0.62f);
    glVertex2f(-0.07f, 0.65f);
    glEnd();

    ///windows
    ///p1
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.16f, 0.43f);
    glVertex2f(-0.13f, 0.43f);
    glVertex2f(-0.13f, 0.48f);
    glVertex2f(-0.16f, 0.48f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.12f, 0.43f);
    glVertex2f(-0.09f, 0.43f);
    glVertex2f(-0.09f, 0.48f);
    glVertex2f(-0.12f, 0.48f);
    glEnd();

    ///p2
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.16f, 0.5f);
    glVertex2f(-0.13f, 0.5f);
    glVertex2f(-0.13f, 0.55f);
    glVertex2f(-0.16f, 0.55f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.12f, 0.5f);
    glVertex2f(-0.09f, 0.5f);
    glVertex2f(-0.09f, 0.55f);
    glVertex2f(-0.12f, 0.55f);
    glEnd();

    ///p3
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.16f, 0.57f);
    glVertex2f(-0.13f, 0.57f);
    glVertex2f(-0.13f, 0.62f);
    glVertex2f(-0.16f, 0.62f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.12f, 0.57f);
    glVertex2f(-0.09f, 0.57f);
    glVertex2f(-0.09f, 0.62f);
    glVertex2f(-0.12f, 0.62f);
    glEnd();

    ///8
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.4f, 0.4f);
    glVertex2f(-0.04f, 0.4f);
    glVertex2f(0.04f, 0.4f);
    glVertex2f(0.04f, 0.71f);
    glVertex2f(-0.04f, 0.71f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.1f, 0.1f);
    glVertex2f(0.04f, 0.4f);
    glVertex2f(0.043f, 0.4f);
    glVertex2f(0.043f, 0.65f);
    glVertex2f(0.04f, 0.71f);
    glEnd();

    ///windows
    ///p1
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.03f, 0.43f);
    glVertex2f(-0.01f, 0.43f);
    glVertex2f(-0.01f, 0.48f);
    glVertex2f(-0.03f, 0.48f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.01f, 0.43f);
    glVertex2f(0.03f, 0.43f);
    glVertex2f(0.03f, 0.48f);
    glVertex2f(0.01f, 0.48f);
    glEnd();

    ///p2
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.03f, 0.5f);
    glVertex2f(-0.01f, 0.5f);
    glVertex2f(-0.01f, 0.55f);
    glVertex2f(-0.03f, 0.55f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.01f, 0.5f);
    glVertex2f(0.03f, 0.5f);
    glVertex2f(0.03f, 0.55f);
    glVertex2f(0.01f, 0.55f);
    glEnd();

    ///p3
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.03f, 0.57f);
    glVertex2f(-0.01f, 0.57f);
    glVertex2f(-0.01f, 0.62f);
    glVertex2f(-0.03f, 0.62f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.01f, 0.57f);
    glVertex2f(0.03f, 0.57f);
    glVertex2f(0.03f, 0.62f);
    glVertex2f(0.01f, 0.62f);
    glEnd();

    ///p4
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.03f, 0.64f);
    glVertex2f(-0.01f, 0.64f);
    glVertex2f(-0.01f, 0.69f);
    glVertex2f(-0.03f, 0.69f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.01f, 0.64f);
    glVertex2f(0.03f, 0.64f);
    glVertex2f(0.03f, 0.69f);
    glVertex2f(0.01f, 0.69f);
    glEnd();

    ///9
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.0f, 0.0f);
    glVertex2f(0.08f, 0.4f);
    glVertex2f(0.18f, 0.4f);
    glVertex2f(0.18f, 0.6f);
    glVertex2f(0.08f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.0f, 0.0f);
    glVertex2f(0.07f, 0.4f);
    glVertex2f(0.08f, 0.4f);
    glVertex2f(0.08f, 0.6f);
    glVertex2f(0.07f, 0.55f);
    glEnd();

    ///windows
    ///p1
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.09f, 0.43f);
    glVertex2f(0.12f, 0.43f);
    glVertex2f(0.12f, 0.48f);
    glVertex2f(0.09f, 0.48f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.13f, 0.43f);
    glVertex2f(0.16f, 0.43f);
    glVertex2f(0.16f, 0.48f);
    glVertex2f(0.13f, 0.48f);
    glEnd();

    ///p2
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.09f, 0.5f);
    glVertex2f(0.12f, 0.5f);
    glVertex2f(0.12f, 0.55f);
    glVertex2f(0.09f, 0.55f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.13f, 0.5f);
    glVertex2f(0.16f, 0.5f);
    glVertex2f(0.16f, 0.55f);
    glVertex2f(0.13f, 0.55f);
    glEnd();

    ///10
    glBegin(GL_QUADS);
    glColor3f(0.7f, 0.7f, 0.7f);
    glVertex2f(0.22f, 0.4f);
    glVertex2f(0.32f, 0.4f);
    glVertex2f(0.32f, 0.65f);
    glVertex2f(0.22f, 0.65f);
    glEnd();

    glColor3f(0.5f, 0.5f, 0.5f);
    glVertex2f(0.2f, 0.4f);
    glVertex2f(0.22f, 0.4f);
    glVertex2f(0.22f, 0.65f);
    glVertex2f(0.2f, 0.62f);
    glEnd();

    ///windows
    ///p1
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.24f, 0.43f);
    glVertex2f(0.27f, 0.43f);
    glVertex2f(0.27f, 0.48f);
    glVertex2f(0.24f, 0.48f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.28f, 0.43f);
    glVertex2f(0.31f, 0.43f);
    glVertex2f(0.31f, 0.48f);
    glVertex2f(0.28f, 0.48f);
    glEnd();

    ///p2
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.24f, 0.5f);
    glVertex2f(0.27f, 0.5f);
    glVertex2f(0.27f, 0.55f);
    glVertex2f(0.24f, 0.55f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.28f, 0.5f);
    glVertex2f(0.31f, 0.5f);
    glVertex2f(0.31f, 0.55f);
    glVertex2f(0.28f, 0.55f);
    glEnd();

    ///p3
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.24f, 0.57f);
    glVertex2f(0.27f, 0.57f);
    glVertex2f(0.27f, 0.62f);
    glVertex2f(0.24f, 0.62f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.28f, 0.57f);
    glVertex2f(0.31f, 0.57f);
    glVertex2f(0.31f, 0.62f);
    glVertex2f(0.28f, 0.62f);
    glEnd();
}



/////////////////////////////////////train////////////////////////
float r_l_train_position=0;
float r_l_train_speed=0.0;

void r_l_train()
{
glPushMatrix();
    glRotatef(180,0,1,0);
    glTranslatef(r_l_train_position-0.8,0,0);
    glScalef(-1,1,0);

glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.01, 0.695);
    glVertex2f(0.05, 0.695);
    glVertex2f(0.05 ,0.699);
    glVertex2f(0.01, 0.699);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.025, 0.677);
    glVertex2f(0.028, 0.677);
    glVertex2f(0.05 ,0.685);
    glVertex2f(0.045, 0.685);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.045, 0.685);
    glVertex2f(0.05, 0.685);
    glVertex2f(0.025 ,0.699);
    glVertex2f(0.023, 0.699);
    glEnd();

////////////////////////////////////////////body 1
glBegin(GL_QUADS);
    glColor3f(0, 1, 0);
    glVertex2f(0.0, 0.67);
    glVertex2f(0.1, 0.67);
    glVertex2f(.1 ,0.677);
    glVertex2f(0, 0.677);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(0.0, 0.63);
    glVertex2f(0.1, 0.63);
    glVertex2f(.1 ,0.67);
    glVertex2f(0, 0.67);
    glEnd();

    /////////////////////dore1
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.01, 0.635);
    glVertex2f(0.025, 0.635);
    glVertex2f(.025 ,0.665);
    glVertex2f(0.01, 0.665);
    glEnd();
    //////////////////////windows1
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.03, 0.64);
    glVertex2f(0.06, 0.64);
    glVertex2f(.06 ,0.665);
    glVertex2f(0.03, 0.665);
    glEnd();
/////////////////////dore2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.065, 0.635);
    glVertex2f(0.08, 0.635);
    glVertex2f(.08 ,0.665);
    glVertex2f(0.065, 0.665);
    glEnd();
    //////////////////////windows2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.085, 0.64);
    glVertex2f(0.1, 0.64);
    glVertex2f(.1,0.665);
    glVertex2f(0.085, 0.665);
    glEnd();
    /////////////////////////////////////////body 2
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(0.105, 0.63);
    glVertex2f(0.2, 0.63);
    glVertex2f(.2 ,0.67);
    glVertex2f(0.105, 0.67);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0, 1, 0);
    glVertex2f(0.105, 0.67);
    glVertex2f(0.2, 0.67);
    glVertex2f(.2 ,0.677);
    glVertex2f(0.105, 0.677);
    glEnd();
    /////////////////////dore3
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.11, 0.635);
    glVertex2f(0.125, 0.635);
    glVertex2f(.125 ,0.665);
    glVertex2f(0.11, 0.665);
    glEnd();
    //////////////////////windows3
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.13, 0.64);
    glVertex2f(0.16, 0.64);
    glVertex2f(.16 ,0.665);
    glVertex2f(0.13, 0.665);
    glEnd();
/////////////////////dore2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.165, 0.635);
    glVertex2f(0.18, 0.635);
    glVertex2f(.18 ,0.665);
    glVertex2f(0.165, 0.665);
    glEnd();
    //////////////////////windows2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.185, 0.64);
    glVertex2f(0.2, 0.64);
    glVertex2f(.2,0.665);
    glVertex2f(0.185, 0.665);
    glEnd();
    /////////////////////////////body 3
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(0.205, 0.63);
    glVertex2f(0.3, 0.63);
    glVertex2f(.3 ,0.67);
    glVertex2f(0.205, 0.67);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0, 1, 0);
    glVertex2f(0.205, 0.67);
    glVertex2f(0.3, 0.67);
    glVertex2f(.3,0.677);
    glVertex2f(0.205, 0.677);
    glEnd();
    /////////////////////dore3
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.21, 0.635);
    glVertex2f(0.225, 0.635);
    glVertex2f(.225 ,0.665);
    glVertex2f(0.21, 0.665);
    glEnd();
    //////////////////////windows3
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.23, 0.64);
    glVertex2f(0.26, 0.64);
    glVertex2f(.26 ,0.665);
    glVertex2f(0.23, 0.665);
    glEnd();
/////////////////////dore2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.265, 0.635);
    glVertex2f(0.28, 0.635);
    glVertex2f(.28 ,0.665);
    glVertex2f(0.265, 0.665);
    glEnd();
    //////////////////////windows2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.285, 0.64);
    glVertex2f(0.3, 0.64);
    glVertex2f(.3,0.665);
    glVertex2f(0.285, 0.665);
    glEnd();
    //////////////////////////////////////body 4

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.37, 0.695);
    glVertex2f(0.41, 0.695);
    glVertex2f(0.41 ,0.699);
    glVertex2f(0.37, 0.699);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.389, 0.677);
    glVertex2f(0.391, 0.677);
    glVertex2f(0.41 ,0.685);
    glVertex2f(0.399, 0.685);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.40, 0.685);
    glVertex2f(0.41, 0.685);
    glVertex2f(0.391 ,0.699);
    glVertex2f(0.389, 0.699);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(0, 1, 0);
    glVertex2f(0.305, 0.67);
    glVertex2f(0.41, 0.67);
    glVertex2f(.41 ,0.677);
    glVertex2f(0.305, 0.677);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(0.305, 0.63);
    glVertex2f(0.41, 0.63);
    glVertex2f(.41,0.67);
    glVertex2f(0.305, 0.67);
    glEnd();

    /////////////////////dore3
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.31, 0.635);
    glVertex2f(0.325, 0.635);
    glVertex2f(.325 ,0.665);
    glVertex2f(0.31, 0.665);
    glEnd();
    //////////////////////windows3
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.33, 0.64);
    glVertex2f(0.36, 0.64);
    glVertex2f(.36 ,0.665);
    glVertex2f(0.33, 0.665);
    glEnd();
/////////////////////dore2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.365, 0.635);
    glVertex2f(0.38, 0.635);
    glVertex2f(.38 ,0.665);
    glVertex2f(0.365, 0.665);
    glEnd();
    //////////////////////windows2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.385, 0.64);
    glVertex2f(0.4, 0.64);
    glVertex2f(.4,0.665);
    glVertex2f(0.385, 0.665);
    glEnd();

    glPopMatrix();
    glLoadIdentity();
    // glPopMatrix();
}

float l_r_train_position=0;
float l_r_train_speed=0.02;


void l_r_train(){

glColor3ub(155,150,150);
glPushMatrix();
    glRotatef(0,0,1,0);
    glTranslatef(l_r_train_position-0.6,-0.0,0);




glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.01, 0.695);
    glVertex2f(0.05, 0.695);
    glVertex2f(0.05 ,0.699);
    glVertex2f(0.01, 0.699);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.025, 0.677);
    glVertex2f(0.028, 0.677);
    glVertex2f(0.05 ,0.685);
    glVertex2f(0.045, 0.685);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.045, 0.685);
    glVertex2f(0.05, 0.685);
    glVertex2f(0.025 ,0.699);
    glVertex2f(0.023, 0.699);
    glEnd();

////////////////////////////////////////////body 1
glBegin(GL_QUADS);
    glColor3f(0, 1, 0);
    glVertex2f(0.0, 0.67);
    glVertex2f(0.1, 0.67);
    glVertex2f(.1 ,0.677);
    glVertex2f(0, 0.677);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(0.0, 0.63);
    glVertex2f(0.1, 0.63);
    glVertex2f(.1 ,0.67);
    glVertex2f(0, 0.67);
    glEnd();

    /////////////////////dore1
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.01, 0.635);
    glVertex2f(0.025, 0.635);
    glVertex2f(.025 ,0.665);
    glVertex2f(0.01, 0.665);
    glEnd();
    //////////////////////windows1
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.03, 0.64);
    glVertex2f(0.06, 0.64);
    glVertex2f(.06 ,0.665);
    glVertex2f(0.03, 0.665);
    glEnd();
/////////////////////dore2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.065, 0.635);
    glVertex2f(0.08, 0.635);
    glVertex2f(.08 ,0.665);
    glVertex2f(0.065, 0.665);
    glEnd();
    //////////////////////windows2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.085, 0.64);
    glVertex2f(0.1, 0.64);
    glVertex2f(.1,0.665);
    glVertex2f(0.085, 0.665);
    glEnd();
    /////////////////////////////////////////body 2
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(0.105, 0.63);
    glVertex2f(0.2, 0.63);
    glVertex2f(.2 ,0.67);
    glVertex2f(0.105, 0.67);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0, 1, 0);
    glVertex2f(0.105, 0.67);
    glVertex2f(0.2, 0.67);
    glVertex2f(.2 ,0.677);
    glVertex2f(0.105, 0.677);
    glEnd();
    /////////////////////dore3
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.11, 0.635);
    glVertex2f(0.125, 0.635);
    glVertex2f(.125 ,0.665);
    glVertex2f(0.11, 0.665);
    glEnd();
    //////////////////////windows3
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.13, 0.64);
    glVertex2f(0.16, 0.64);
    glVertex2f(.16 ,0.665);
    glVertex2f(0.13, 0.665);
    glEnd();
/////////////////////dore2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.165, 0.635);
    glVertex2f(0.18, 0.635);
    glVertex2f(.18 ,0.665);
    glVertex2f(0.165, 0.665);
    glEnd();
    //////////////////////windows2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.185, 0.64);
    glVertex2f(0.2, 0.64);
    glVertex2f(.2,0.665);
    glVertex2f(0.185, 0.665);
    glEnd();
    /////////////////////////////body 3
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(0.205, 0.63);
    glVertex2f(0.3, 0.63);
    glVertex2f(.3 ,0.67);
    glVertex2f(0.205, 0.67);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0, 1, 0);
    glVertex2f(0.205, 0.67);
    glVertex2f(0.3, 0.67);
    glVertex2f(.3,0.677);
    glVertex2f(0.205, 0.677);
    glEnd();
    /////////////////////dore3
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.21, 0.635);
    glVertex2f(0.225, 0.635);
    glVertex2f(.225 ,0.665);
    glVertex2f(0.21, 0.665);
    glEnd();
    //////////////////////windows3
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.23, 0.64);
    glVertex2f(0.26, 0.64);
    glVertex2f(.26 ,0.665);
    glVertex2f(0.23, 0.665);
    glEnd();
/////////////////////dore2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.265, 0.635);
    glVertex2f(0.28, 0.635);
    glVertex2f(.28 ,0.665);
    glVertex2f(0.265, 0.665);
    glEnd();
    //////////////////////windows2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.285, 0.64);
    glVertex2f(0.3, 0.64);
    glVertex2f(.3,0.665);
    glVertex2f(0.285, 0.665);
    glEnd();
    //////////////////////////////////////body 4

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.37, 0.695);
    glVertex2f(0.41, 0.695);
    glVertex2f(0.41 ,0.699);
    glVertex2f(0.37, 0.699);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.389, 0.677);
    glVertex2f(0.391, 0.677);
    glVertex2f(0.41 ,0.685);
    glVertex2f(0.399, 0.685);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.40, 0.685);
    glVertex2f(0.41, 0.685);
    glVertex2f(0.391 ,0.699);
    glVertex2f(0.389, 0.699);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(0, 1, 0);
    glVertex2f(0.305, 0.67);
    glVertex2f(0.41, 0.67);
    glVertex2f(.41 ,0.677);
    glVertex2f(0.305, 0.677);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(0.305, 0.63);
    glVertex2f(0.41, 0.63);
    glVertex2f(.41,0.67);
    glVertex2f(0.305, 0.67);
    glEnd();

    /////////////////////dore3
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.31, 0.635);
    glVertex2f(0.325, 0.635);
    glVertex2f(.325 ,0.665);
    glVertex2f(0.31, 0.665);
    glEnd();
    //////////////////////windows3
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.33, 0.64);
    glVertex2f(0.36, 0.64);
    glVertex2f(.36 ,0.665);
    glVertex2f(0.33, 0.665);
    glEnd();
/////////////////////dore2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.365, 0.635);
    glVertex2f(0.38, 0.635);
    glVertex2f(.38 ,0.665);
    glVertex2f(0.365, 0.665);
    glEnd();
    //////////////////////windows2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.385, 0.64);
    glVertex2f(0.4, 0.64);
    glVertex2f(.4,0.665);
    glVertex2f(0.385, 0.665);
    glEnd();

    glPopMatrix();
    glLoadIdentity();
    // glPopMatrix();

}

void bridge()
{
   glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
    glVertex2f(-1, 0.6);
    glVertex2f(1, 0.6);
    glVertex2f(1 ,0.63);
    glVertex2f(-1, 0.63);
    glEnd();


}

void Wire()
{glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(-1, 0.7);
    glVertex2f(1, 0.7);
    glVertex2f(1 ,0.702);
    glVertex2f(-1, 0.702);
    glEnd();

}
void bridge_wirepillar()

{
float ww = 100;
    ///1
    ///pillar
    float L = 140.0;
    float l = 40.0;
    glScalef(0.005,0.005,0);
     ///1
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f,260.0f-L);
    glVertex2f(62.0f,282.0f-L);
    glEnd();



    ///2
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f-l,260.0f-L);
    glVertex2f(62.0f-l,282.0f-L);
    glEnd();


    ///3

    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f-2*l,260.0f-L);
    glVertex2f(62.0f-2*l,282.0f-L);
    glEnd();


    ///4
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f-3*l,260.0f-L);
    glVertex2f(62.0f-3*l,282.0f-L);
    glEnd();





    ///5
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f-4*l,260.0f-L);
    glVertex2f(62.0f-4*l,282.0f-L);
    glEnd();


    ///6
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f-5*l,260.0f-L);
    glVertex2f(62.0f-5*l,282.0f-L);
    glEnd();

    ///7
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f-6*l,260.0f-L);
    glVertex2f(62.0f-6*l,282.0f-L);
    glEnd();



    ///8
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f+l,80.0f-L);
    glVertex2f(62.0f+l,282.0f-L);
    glEnd();


    ///9
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f+2.2*l,260.0f-L);
    glVertex2f(62.0f+2.2*l,282.0f-L);
    glEnd();


    ///10
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f+3*l,260.0f-L);
    glVertex2f(62.0f+3*l,282.0f-L);
    glEnd();

    glLoadIdentity();
}
////////////////////////////////bench

void road_border()
{ glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex2f(-1, 0.49);
    glVertex2f(1, 0.49);
    glVertex2f(1 ,0.50);
    glVertex2f(-1, 0.50);
    glEnd();


//////////////////////////////////////white line
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(-1, 0.49);
    glVertex2f(-0.98, 0.49);
    glVertex2f(-0.98 ,0.50);
    glVertex2f(-1, 0.50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(-0.9, 0.49);
    glVertex2f(-0.8, 0.49);
    glVertex2f(-0.8 ,0.50);
    glVertex2f(-0.9, 0.50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(-0.7, 0.49);
    glVertex2f(-0.6, 0.49);
    glVertex2f(-0.6 ,0.50);
    glVertex2f(-0.7, 0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(-0.5, 0.49);
    glVertex2f(-0.4, 0.49);
    glVertex2f(-0.4 ,0.50);
    glVertex2f(-0.5, 0.50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(-0.3, 0.49);
    glVertex2f(-0.2, 0.49);
    glVertex2f(-0.2 ,0.50);
    glVertex2f(-0.3, 0.50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(-0.1, 0.49);
    glVertex2f(-0.05, 0.49);
    glVertex2f(-0.05 ,0.50);
    glVertex2f(-0.1, 0.50);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(0.0, 0.49);
    glVertex2f(0.05, 0.49);
    glVertex2f(0.05,0.50);
    glVertex2f(0.0, 0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(0.15, 0.49);
    glVertex2f(0.2, 0.49);
    glVertex2f(0.2 ,0.50);
    glVertex2f(0.15, 0.50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(0.35, 0.49);
    glVertex2f(0.4, 0.49);
    glVertex2f(0.4 ,0.50);
    glVertex2f(0.35, 0.50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(0.55, 0.49);
    glVertex2f(0.6, 0.49);
    glVertex2f(0.6 ,0.50);
    glVertex2f(0.55, 0.50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(0.65, 0.49);
    glVertex2f(0.7, 0.49);
    glVertex2f(0.7 ,0.50);
    glVertex2f(0.65, 0.50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(0.85, 0.49);
    glVertex2f(0.9, 0.49);
    glVertex2f(0.9 ,0.50);
    glVertex2f(0.85, 0.50);
    glEnd();
    }


    void road1()
    {glBegin(GL_QUADS);
    glColor3f(0.2,0.2,0.2);
    glVertex2f(-1, 0.30);
    glVertex2f(1, 0.30);
    glVertex2f(1 ,0.49);
    glVertex2f(-1, 0.49);
    glEnd();
        }
    float public_bus_position=0;
float public_bus_speed=0.01;
        void public_bus()
    {glPushMatrix();
    glRotatef(0,0,1,0);
    glTranslatef(public_bus_position-0.6,-0.0,0);
    ////////////////////////////body

        glBegin(GL_QUADS);
   glColor3f(1, 0, 0);
    glVertex2f(-.9, 0.47);
    glVertex2f(-0.67, 0.47);
    glVertex2f(-.67,0.55);
    glVertex2f(-0.9, 0.55);
    glEnd();
    glBegin(GL_QUADS);
   glColor3f(0, 0, 0);
    glVertex2f(-.89, 0.49);
    glVertex2f(-0.695, 0.49);
    glVertex2f(-.695 ,0.53);
    glVertex2f(-0.89, 0.53);
    glEnd();
    glBegin(GL_QUADS);
   glColor3f(0, 0, 0);
    glVertex2f(-.69, 0.48);
    glVertex2f(-0.67, 0.48);
    glVertex2f(-.67,0.53);
    glVertex2f(-0.69, 0.53);
    glEnd();
    glBegin(GL_QUADS);
   glColor3f(0, 0, 0);
   glVertex2f(-0.68, 0.545);
    glVertex2f(-.65, 0.545);
    glVertex2f(-.65,0.55);
    glVertex2f(-0.68, 0.55);
    glEnd();
    glBegin(GL_QUADS);
   glColor3f(0, 0, 0);
   glVertex2f(-0.658, 0.52);
    glVertex2f(-.65, 0.52);
    glVertex2f(-.65,0.55);
    glVertex2f(-0.658, 0.55);
    glEnd();

    ///////GLfloat cx, GLfloat cy, GLfloat radius, int r, int g, int b
    bus_wheel_circle(-0.87,0.47,0.015,1,1,1);
    bus_wheel_circle(-0.83,0.47,0.015,1,1,1);
    bus_wheel_circle(-0.71,0.47,0.015,1,1,1);

     glPopMatrix();
    glLoadIdentity();
    }
void road_marking()
    {
    glBegin(GL_QUADS);
   glColor3f(255, 255, 0);
    glVertex2f(-1, 0.445);
    glVertex2f(-0.2, 0.445);
    glVertex2f(-.2 ,0.45);
    glVertex2f(-1, 0.45);
    glEnd();
    glBegin(GL_QUADS);
   glColor3f(255, 255, 0);
    glVertex2f(-0.15, 0.445);
    glVertex2f(-0.1, 0.445);
    glVertex2f(-.1 ,0.45);
    glVertex2f(-0.15, 0.45);
    glEnd();
    glBegin(GL_QUADS);
   glColor3f(255, 255, 0);
    glVertex2f(-0.08, 0.445);
    glVertex2f(-0.05, 0.445);
    glVertex2f(-.05,0.45);
    glVertex2f(-0.08, 0.45);
    glEnd();
    glBegin(GL_QUADS);
   glColor3f(255, 255, 0);
    glVertex2f(-0.03, 0.445);
    glVertex2f(0.01, 0.445);
    glVertex2f(0.01,0.45);
    glVertex2f(-0.03, 0.45);
    glEnd();
    glBegin(GL_QUADS);
   glColor3f(255, 255, 0);
    glVertex2f(0.03, 0.445);
    glVertex2f(0.07, 0.445);
    glVertex2f(.07,0.45);
    glVertex2f(0.03, 0.45);
    glEnd();
    glBegin(GL_QUADS);
   glColor3f(255, 255, 0);
    glVertex2f(0.1, 0.445);
    glVertex2f(1, 0.445);
    glVertex2f(1 ,0.45);
    glVertex2f(0.1, 0.45);
    glEnd();

        }////////////////////////////////////////////pillar fence
void p_fence()                            ///OID-15
{   glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex2f(-1, 0.52);
    glVertex2f(-0.15, 0.52);
    glVertex2f(-0.15 ,0.522);
    glVertex2f(-1, 0.522);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex2f(0.15, 0.52);
    glVertex2f(1, 0.52);
    glVertex2f(1 ,0.522);
    glVertex2f(0.15, 0.522);
    glEnd();

    float L = 0.05;
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.98f,0.52f);
    glVertex2f(-0.98f,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.94f,0.52f);
    glVertex2f(-0.94f,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.9f,0.52f);
    glVertex2f(-0.9f,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f,0.52f);
    glVertex2f(-0.85f,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+L,0.52f);
    glVertex2f(-0.85f+L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.84f+2*L,0.52f);
    glVertex2f(-0.84f+2*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+3*L,0.52f);
    glVertex2f(-0.85f+3*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+4*L,0.52f);
    glVertex2f(-0.85f+4*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+5*L,0.52f);
    glVertex2f(-0.85f+5*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.84f+6*L,0.52f);
    glVertex2f(-0.84f+6*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+7*L,0.52f);
    glVertex2f(-0.85f+7*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+8*L,0.52f);
    glVertex2f(-0.85f+8*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+9*L,0.52f);
    glVertex2f(-0.85f+9*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.84f+10*L,0.52f);
    glVertex2f(-0.84f+10*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+11*L,0.52f);
    glVertex2f(-0.85f+11*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+12*L,0.52f);
    glVertex2f(-0.85f+12*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+13*L,0.52f);
    glVertex2f(-0.85f+13*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+14*L,0.52f);
    glVertex2f(-0.85f+14*L,0.50f);
    glEnd();

    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+21*L,0.52f);
    glVertex2f(-0.85f+21*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+22*L,0.52f);
    glVertex2f(-0.85f+22*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+23*L,0.52f);
    glVertex2f(-0.85f+23*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+24*L,0.52f);
    glVertex2f(-0.85f+24*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+25*L,0.52f);
    glVertex2f(-0.85f+25*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+26*L,0.52f);
    glVertex2f(-0.85f+26*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+27*L,0.52f);
    glVertex2f(-0.85f+27*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+28*L,0.52f);
    glVertex2f(-0.85f+28*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+29*L,0.52f);
    glVertex2f(-0.85f+29*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+30*L,0.52f);
    glVertex2f(-0.85f+30*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+31*L,0.52f);
    glVertex2f(-0.85f+31*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+32*L,0.52f);
    glVertex2f(-0.85f+32*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+33*L,0.52f);
    glVertex2f(-0.85f+33*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+34*L,0.52f);
    glVertex2f(-0.85f+34*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+35*L,0.52f);
    glVertex2f(-0.85f+35*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+36*L,0.52f);
    glVertex2f(-0.85f+36*L,0.50f);
    glEnd();



}
//////////////////////////////////////////////////////
void pillar()
{   //////p1
glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
     glVertex2f(-0.97, 0.57);
    glVertex2f(-0.95 ,0.57);
    glVertex2f(-0.92 ,0.63);
    glVertex2f(-1, 0.63);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
    glVertex2f(-0.97, 0.5);
    glVertex2f(-0.95, 0.5);
    glVertex2f(-0.95 ,0.57);
    glVertex2f(-0.97, 0.57);
    glEnd();

//////p2

glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
     glVertex2f(-0.77, 0.57);
    glVertex2f(-0.75 ,0.57);
    glVertex2f(-0.72 ,0.63);
    glVertex2f(-0.8, 0.63);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
    glVertex2f(-0.77, 0.5);
    glVertex2f(-0.75, 0.5);
    glVertex2f(-0.75 ,0.57);
    glVertex2f(-0.77, 0.57);
    glEnd();
    //////p3


glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
     glVertex2f(-0.57, 0.57);
    glVertex2f(-0.55 ,0.57);
    glVertex2f(-0.52 ,0.63);
    glVertex2f(-0.6, 0.63);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
    glVertex2f(-0.57, 0.5);
    glVertex2f(-0.55, 0.5);
    glVertex2f(-0.55 ,0.57);
    glVertex2f(-0.57, 0.57);
    glEnd();
    //////p4

glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
     glVertex2f(-0.37, 0.57);
    glVertex2f(-0.35 ,0.57);
    glVertex2f(-0.32 ,0.63);
    glVertex2f(-0.4, 0.63);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
    glVertex2f(-0.37, 0.5);
    glVertex2f(-0.35, 0.5);
    glVertex2f(-0.35 ,0.57);
    glVertex2f(-0.37, 0.57);
    glEnd();
    //////p5

glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
     glVertex2f(-0.17, 0.57);
    glVertex2f(-0.15 ,0.57);
    glVertex2f(-0.12 ,0.63);
    glVertex2f(-0.2, 0.63);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
    glVertex2f(-0.17, 0.5);
    glVertex2f(-0.15, 0.5);
    glVertex2f(-0.15 ,0.57);
    glVertex2f(-0.17, 0.57);
    glEnd();
    //////p6


glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
    glVertex2f(0.15 ,0.57);
     glVertex2f(0.17, 0.57);
    glVertex2f(0.2 ,0.63);
    glVertex2f(0.12, 0.63);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
    glVertex2f(0.17, 0.5);
    glVertex2f(0.15, 0.5);
    glVertex2f(0.15 ,0.57);
    glVertex2f(0.17, 0.57);
    glEnd();
    //////p7
glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
    glVertex2f(0.35 ,0.57);
     glVertex2f(0.37, 0.57);
    glVertex2f(0.4 ,0.63);
    glVertex2f(0.32, 0.63);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
    glVertex2f(0.37, 0.5);
    glVertex2f(0.35, 0.5);
    glVertex2f(0.35 ,0.57);
    glVertex2f(0.37, 0.57);
    glEnd();
    //////p9
glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
    glVertex2f(0.65 ,0.57);
     glVertex2f(0.67, 0.57);
    glVertex2f(0.7 ,0.63);
    glVertex2f(0.62, 0.63);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);

    glVertex2f(0.65, 0.5);
    glVertex2f(0.67, 0.5);
     glVertex2f(0.67, 0.57);
    glVertex2f(0.65 ,0.57);

    glEnd();


}

void buildings()                          ///OID-6
{   ///////////////////////////////1st
  glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.6f);
    glVertex2f(0.0f, 0.50f);
    glVertex2f(0.1f, 0.50f);
    glVertex2f(0.1f, 0.80f);
    glVertex2f(0.0f, 0.80f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.5f);
    glVertex2f(0.1f, 0.50f);
    glVertex2f(0.15f, 0.50f);
    glVertex2f(0.15f, 0.78f);
    glVertex2f(0.1f, 0.80f);
    glEnd();
    //////////////////////////////////1st windows

glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.5f);
    glVertex2f(0.05f, 0.5f);
    glVertex2f(0.05f, 0.60f);
    glVertex2f(0.0f, 0.60f);
    glEnd();

glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.05f, 0.60f);
    glVertex2f(0.1f, 0.60f);
    glVertex2f(0.1f, 0.65f);
    glVertex2f(0.05f, 0.65f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.005f, 0.65f);
    glVertex2f(0.05f, 0.65f);
    glVertex2f(0.05f, 0.70f);
    glVertex2f(0.005f, 0.70f);
    glEnd();

glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.05f, 0.70f);
    glVertex2f(0.1f, 0.70f);
    glVertex2f(0.1f, 0.75f);
    glVertex2f(0.05f, 0.75f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.005f, 0.75f);
    glVertex2f(0.05f, 0.75f);
    glVertex2f(0.05f, 0.795f);
    glVertex2f(0.005f, 0.795f);
    glEnd();



    ///////////////////////////////1st
    glBegin(GL_QUADS);
     glColor3f(0.6f, 0.0f, 0.6f);
    glVertex2f(0.2f, 0.50f);
    glVertex2f(0.3f, 0.50f);
    glVertex2f(0.3f, 0.80f);
    glVertex2f(0.2f, 0.80f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3f(0.6f, 0.0f, 0.6f);
    glVertex2f(0.2f, 0.50f);
    glVertex2f(0.3f, 0.50f);
    glVertex2f(0.3f, 0.80f);
    glVertex2f(0.2f, 0.80f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3f(0.4f, 0.0f, 0.4f);
    glVertex2f(0.2f, 0.50f);
    glVertex2f(0.22f, 0.50f);
    glVertex2f(0.22f, 0.78f);
    glVertex2f(0.2f, 0.80f);
    glEnd();

    ///////////////////////////////1st
    glBegin(GL_QUADS);
     glColor3f(0.6f, 0.0f, 0.0f);
    glVertex2f(0.35f, 0.50f);
    glVertex2f(0.65f, 0.50f);
    glVertex2f(0.65f, 0.80f);
    glVertex2f(0.35f, 0.80f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.36f, 0.50f);
    glVertex2f(0.64f, 0.50f);
    glVertex2f(0.64f, 0.54f);
    glVertex2f(0.36f, 0.54f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.36f, 0.55f);
    glVertex2f(0.64f, 0.55f);
    glVertex2f(0.64f, 0.59f);
    glVertex2f(0.36f, 0.59f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.36f, 0.60f);
    glVertex2f(0.64f, 0.60f);
    glVertex2f(0.64f, 0.64f);
    glVertex2f(0.36f, 0.64f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.36f, 0.65f);
    glVertex2f(0.64f, 0.65f);
    glVertex2f(0.64f, 0.69f);
    glVertex2f(0.36f, 0.69f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.36f, 0.70f);
    glVertex2f(0.64f, 0.70f);
    glVertex2f(0.64f, 0.74f);
    glVertex2f(0.36f, 0.74f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.36f, 0.75f);
    glVertex2f(0.64f, 0.75f);
    glVertex2f(0.64f, 0.79f);
    glVertex2f(0.36f, 0.79f);
    glEnd();

    glBegin(GL_QUADS);
     glColor3f(0.00,0.40,0.80);
    glVertex2f(0.42f, 0.50f);
    glVertex2f(0.45f, 0.50f);
    glVertex2f(0.45f, 0.79f);
    glVertex2f(0.42f, 0.79f);
    glEnd();
     glBegin(GL_QUADS);
     glColor3f(0.00,0.40,0.80);
    glVertex2f(0.55f, 0.50f);
    glVertex2f(0.57f, 0.50f);
    glVertex2f(0.57f, 0.79f);
    glVertex2f(0.55f, 0.79f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3f(0.6f, 0.0f, 0.3f);
    glVertex2f(0.42f, 0.80f);
    glVertex2f(0.57f, 0.80f);
    glVertex2f(0.57f, 0.85f);
    glVertex2f(0.42f, 0.85f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3f(0.6f, 0.6f, 0.6f);
   glVertex2f(0.42f, 0.85f);
    glVertex2f(0.57f, 0.85f);

     glVertex2f(0.5f, 0.90f);
    glVertex2f(0.5f, 0.90f);
    glEnd();

///////////////////////////////1st
    glBegin(GL_QUADS);
     glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(0.7f, 0.50f);
    glVertex2f(0.85f, 0.50f);
    glVertex2f(0.85f, 0.90f);
    glVertex2f(0.7f, 0.90f);
    glEnd();
    //windows 4
    glBegin(GL_QUADS);
     glColor3f(0.00f,0.50f,0.60f);
    glVertex2f(0.77f, 0.50f);
    glVertex2f(0.79f, 0.50f);
    glVertex2f(0.79f, 0.90f);
    glVertex2f(0.77f, 0.90f);
    glEnd();
glBegin(GL_QUADS);
     glColor3f(0.00,0.35,0.70);
    glVertex2f(0.7f, 0.50f);
    glVertex2f(0.85f, 0.50f);
    glVertex2f(0.85f, 0.550f);
    glVertex2f(0.7f, 0.550f);
    glEnd();
glBegin(GL_QUADS);
     glColor3f(0.00,0.35,0.70);
    glVertex2f(0.7f, 0.560f);
    glVertex2f(0.85f, 0.560f);
    glVertex2f(0.85f, 0.60f);
    glVertex2f(0.7f, 0.600f);
    glEnd();
glBegin(GL_QUADS);
     glColor3f(0.00,0.35,0.70);
    glVertex2f(0.7f, 0.620f);
    glVertex2f(0.85f, 0.620f);
    glVertex2f(0.85f, 0.670f);
    glVertex2f(0.7f, 0.67f);
    glEnd();
glBegin(GL_QUADS);
     glColor3f(0.00,0.35,0.70);
    glVertex2f(0.7f, 0.690f);
    glVertex2f(0.85f, 0.690f);
    glVertex2f(0.85f, 0.740f);
    glVertex2f(0.7f, 0.74f);
    glEnd();
glBegin(GL_QUADS);
     glColor3f(0.00,0.35,0.70);
    glVertex2f(0.7f, 0.760f);
    glVertex2f(0.85f, 0.760f);
    glVertex2f(0.85f, 0.810f);
    glVertex2f(0.7f, 0.810f);
    glEnd();

glBegin(GL_QUADS);
     glColor3f(0.00,0.35,0.70);
    glVertex2f(0.7f, 0.830f);
    glVertex2f(0.85f, 0.830f);
    glVertex2f(0.85f, 0.880f);
    glVertex2f(0.7f, 0.88f);
    glEnd();







    glBegin(GL_QUADS);
     glColor3f(0.3f, 0.3f, 0.3f);
    glVertex2f(0.85f, 0.50f);
    glVertex2f(0.9f, 0.50f);
    glVertex2f(0.9f, 0.88f);
    glVertex2f(0.85f, 0.90f);
    glEnd();


}


float ship_position = -0.3f;
float ship_speed = 0.01f;
float move_ship_container =-0.0f;
float container_ship_speed = 0.5f;
float move_flow = 0.0f;
float move_speed_boat =1.0f;
float speedboat_speed =0.5f;

void river()                              ///OID-9
{
    ///river
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.8f);
    glVertex2f(-1.0f, -0.1f);
    glVertex2f(1.0f, -0.1f);
    glVertex2f(1.0f, 0.4f);
    glVertex2f(-1.0f, 0.4f);
    glEnd();

    ///bank river
    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-1.0,0.4);
    glVertex2f(1.0, 0.4);
    glEnd();
}

void flow()                                  ///OID-10
{
    float x=0.1,y=0.1;
    ///flow
    glPushMatrix();
    glTranslatef(move_flow, 0.0f, 0.0f);
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,0.9,0.9);
    glVertex2f(0.5,0.3);
    glVertex2f(0.6, 0.3);
    glEnd();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,0.9,0.9);
    glVertex2f(0.5-x,0.3-x);
    glVertex2f(0.6-x, 0.3-x);
    glEnd();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,0.9,0.9);
    glVertex2f(0.5-x-x,0.3-x-x);
    glVertex2f(0.6-x-x, 0.3-x-x);
    glEnd();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,0.9,0.9);
    glVertex2f(0.5-x-x-x,0.3-x-x-x);
    glVertex2f(0.6-x-x-x, 0.3-x-x-x);
    glEnd();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,0.9,0.9);
    glVertex2f(0.5-x-x-x-2*x,0.3-x-x-x+0.05);
    glVertex2f(0.6-x-x-x-2*x, 0.3-x-x-x+0.05);
    glEnd();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,0.9,0.9);
    glVertex2f(0.5-x-x-x-2*x-2*x,0.3-x-x-x+0.15);
    glVertex2f(0.6-x-x-x-2*x-2*x, 0.3-x-x-x+0.15);
    glEnd();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,0.9,0.9);
    glVertex2f(0.5-x-x-x-2*x-2*x-2*x,0.3-x-x-x+0.25);
    glVertex2f(0.6-x-x-x-2*x-2*x-2*x, 0.3-x-x-x+0.25);
    glEnd();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,0.9,0.9);
    glVertex2f(0.5-x-x-x-2*x-2*x-2*x-2*x,0.3-x-x-x+0.35);
    glVertex2f(0.6-x-x-x-2*x-2*x-2*x-2*x, 0.3-x-x-x+0.35);
    glEnd();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,0.9,0.9);
    glVertex2f(0.5-x-x-x-2*x-2*x-2*x-2*x-2*x,0.3-x-x-x+0.25);
    glVertex2f(0.6-x-x-x-2*x-2*x-2*x-2*x-2*x, 0.3-x-x-x+0.25);
    glEnd();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,0.9,0.9);
    glVertex2f(0.5-x-x-x-2*x-2*x-2*x-2*x-2*x-2*x,0.3-x-x-x+0.35);
    glVertex2f(0.6-x-x-x-2*x-2*x-2*x-2*x-2*x-2*x, 0.3-x-x-x+0.35);
    glEnd();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,0.9,0.9);
    glVertex2f(0.5-x-x-x-2*x-2*x-2*x-2*x-2*x-0.12,0.3-x-x-x+0.15);
    glVertex2f(0.6-x-x-x-2*x-2*x-2*x-2*x-2*x-0.12, 0.3-x-x-x+0.15);
    glEnd();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,0.9,0.9);
    glVertex2f(0.5-x-x-x-2*x-2*x-2*x-2*x-2*x-2*x,0.3-x-x-x-0.05);
    glVertex2f(0.6-x-x-x-2*x-2*x-2*x-2*x-2*x-2*x, 0.3-x-x-x-0.05);
    glEnd();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,0.9,0.9);
    glVertex2f(0.5-x-x-x-2*x-2*x-2*x-2*x-2*x+x,0.3-x-x-x+0.1);
    glVertex2f(0.6-x-x-x-2*x-2*x-2*x-2*x-2*x+x, 0.3-x-x-x+0.1);
    glEnd();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,0.9,0.9);
    glVertex2f(0.5-x-x-x-2*x-2*x-2*x-2*x-2*x+x+x,0.3-x-x-x-0.08);
    glVertex2f(0.6-x-x-x-2*x-2*x-2*x-2*x-2*x+x+x, 0.3-x-x-x-0.08);
    glEnd();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,0.9,0.9);
    glVertex2f(0.5-x-x-x-2*x-2*x-2*x-2*x-2*x+x+2*x,0.3-x-x-x);
    glVertex2f(0.6-x-x-x-2*x-2*x-2*x-2*x-2*x+x+2*x, 0.3-x-x-x);
    glEnd();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,0.9,0.9);
    glVertex2f(0.5-x-x-x-2*x-2*x,0.3-x-x-x);
    glVertex2f(0.6-x-x-x-2*x-2*x, 0.3-x-x-x);
    glEnd();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,0.9,0.9);
    glVertex2f(0.5-x-x-x-2*x-2*x+0.17,0.3);
    glVertex2f(0.6-x-x-x-2*x-2*x+0.17, 0.3);
    glEnd();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,0.9,0.9);
    glVertex2f(0.5-x-x-x-2*x-2*x+0.17+2*x,0.3+0.06);
    glVertex2f(0.6-x-x-x-2*x-2*x+0.17+2*x, 0.3+0.06);
    glEnd();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,0.9,0.9);
    glVertex2f(0.5-x-x-x-2*x-2*x+0.17+2*x,0.2);
    glVertex2f(0.6-x-x-x-2*x-2*x+0.17+2*x, 0.2);
    glEnd();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,0.9,0.9);
    glVertex2f(0.5-x,0.2);
    glVertex2f(0.6-x,0.2);
    glEnd();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,0.9,0.9);
    glVertex2f(0.5-x+2*x,0.1);
    glVertex2f(0.6-x+2*x,0.1);
    glEnd();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,0.9,0.9);
    glVertex2f(0.5-x+2*x+x,0.1+y);
    glVertex2f(0.6-x+2*x+x,0.1+y);
    glEnd();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,0.9,0.9);
    glVertex2f(0.5-x+2*x+x+x,0.1+y+y);
    glVertex2f(0.6-x+2*x+x+x,0.1+y+y);
    glEnd();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,0.9,0.9);
    glVertex2f(0.5-x+2*x+x+x,0.0);
    glVertex2f(0.6-x+2*x+x+x,0.0);
    glEnd();
    glPopMatrix();
}
void ships()                                    ///OID-11
{
/// ship1

    float Z=200.00;

    glColor3ub(155,150,150);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.0055,0.0025,0);
    glTranslatef(move_ship_container, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(10.0f,-170.0f+Z);
    glVertex2f(110.0f,-170.0f+Z);
    glVertex2f(110.0f,-140.0f+Z);
    glVertex2f(10.0f,-140.0f+Z);
    glEnd();

    ///middle white
    glColor3ub(155,155,255);
    glBegin(GL_POLYGON);
    glVertex2f(10.0f,-140.0f+Z);
    glVertex2f(110.0f,-140.0f+Z);
    glVertex2f(110.0f,-120.0f+Z);
    glVertex2f(10.0f,-120.0f+Z);
    glEnd();

    ///deck room
    glColor3ub(70,130,180);
    glBegin(GL_POLYGON);
    glVertex2f(18.0f,-120.0f+Z);
    glVertex2f(40.0f,-120.0f+Z);
    glVertex2f(40.0f,-50.0f+Z);
    glVertex2f(18.0f,-50.0f+Z);
    glEnd();

    ///deck room 2D
    glColor3ub(72,61,139);
    glBegin(GL_POLYGON);
    glVertex2f(40.0f,-120.0f+Z);
    glVertex2f(41.0f,-120.0f+Z);
    glVertex2f(41.0f,-50.0f+Z);
    glVertex2f(40.0f,-50.0f+Z);
    glEnd();

    ///deck room light

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(255,228,181);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2.8f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+22,y-60+Z );
    }
    glEnd();

    ///deck room light
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(255,228,181);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2.8f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+29,y-60+Z );
    }
    glEnd();

    ///deck room light
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(255,228,181);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2.8f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+36,y-60+Z );
    }
    glEnd();

    ///control room
    glColor3ub(155,155,255);
    glBegin(GL_POLYGON);
    glVertex2f(23.0f,-50.0f+Z);
    glVertex2f(40.0f,-50.0f+Z);
    glVertex2f(42.0f,10.0f+Z);
    glVertex2f(23.0f,10.0f+Z);
    glEnd();

    ///control room 2D
    glColor3ub(155,155,255);
    glBegin(GL_POLYGON);
    glVertex2f(40.0f,-50.0f+Z);
    glVertex2f(41.0f,-50.0f+Z);
    glVertex2f(42.0f,10.0f+Z);
    glVertex2f(41.0f,10.0f+Z);
    glEnd();

    ///control room left first window
    glColor3ub(0,206,209);
    glBegin(GL_POLYGON);
    glVertex2f(24.0f,-10.0f+Z);
    glVertex2f(27.0f,-10.0f+Z);
    glVertex2f(27.0f,8.0f+Z);
    glVertex2f(24.0f,8.0f+Z);
    glEnd();

    ///control room left second window
    glColor3ub(0,206,209);
    glBegin(GL_POLYGON);
    glVertex2f(28.0f,-10.0f+Z);
    glVertex2f(31.0f,-10.0f+Z);
    glVertex2f(31.0f,8.0f+Z);
    glVertex2f(28.0f,8.0f+Z);
    glEnd();

    ///control room left third window
    glColor3ub(0,206,209);
    glBegin(GL_POLYGON);
    glVertex2f(32.0f,-10.0f+Z);
    glVertex2f(35.0f,-10.0f+Z);
    glVertex2f(35.0f,8.0f+Z);
    glVertex2f(32.0f,8.0f+Z);
    glEnd();

    ///control room left fourth window
    glColor3ub(0,206,209);
    glBegin(GL_POLYGON);
    glVertex2f(36.0f,-10.0f+Z);
    glVertex2f(39.5f,-10.0f+Z);
    glVertex2f(40.0f,8.0f+Z);
    glVertex2f(36.0f,8.0f+Z);
    glEnd();

    ///control room roof top
    glColor3ub(70,130,180);
    glLineWidth(12.0f);
    glBegin(GL_LINES);
    glVertex2f(21.0f,10.0f+Z);
    glVertex2f(43.0f,10.0f+Z);
    glEnd();

    ///control room top light holder
    glColor3ub(192,192,192);
    glLineWidth(8.0f);
    glBegin(GL_LINES);
    glVertex2f(33.0f,13.0f+Z);
    glVertex2f(33.0f,55.0f+Z);
    glEnd();

    ///exhaust white part
    glColor3ub(57,43,23);
    glBegin(GL_QUADS);
    glVertex2f(25.0f,15.0f+Z);
    glVertex2f(30.0f,15.0f+Z);
    glVertex2f(30.0f,40.0f+Z);
    glVertex2f(25.0f,40.0f+Z);
    glEnd();

    ///exhaust black part
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(25.0f,40.0f+Z);
    glVertex2f(30.0f,40.0f+Z);
    glVertex2f(30.0f,45.0f+Z);
    glVertex2f(25.0f,50.0f+Z);
    glEnd();

    ///control room front glass
    glColor3ub(0,206,209);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(41.0f,-16.0f+Z);
    glVertex2f(41.5f,2.0f+Z);
    glEnd();

    ///deck roof top
    glColor3ub(209,174,31);
    glLineWidth(12.0f);
    glBegin(GL_LINES);
    glVertex2f(13.0f,-50.0f+Z);
    glVertex2f(43.0f,-50.0f+Z);
    glEnd();

    ///deck roof top 2D
    glColor3ub(57,43,23);
    glLineWidth(12.0f);
    glBegin(GL_LINES);
    glVertex2f(43.0f,-50.0f+Z);
    glVertex2f(44.0f,-50.0f+Z);
    glEnd();

    ///body to deck line1
    glColor3ub(209,174,31);
    glLineWidth(15.0f);
    glBegin(GL_LINES);
    glVertex2f(14.0f,-100.0f+Z);
    glVertex2f(14.0f,-50.0f+Z);
    glEnd();

    ///body to deck line2
    glColor3ub(209,174,31);
    glLineWidth(10.0f);
    glBegin(GL_LINES);
    glVertex2f(18.0f,-100.0f+Z);
    glVertex2f(18.0f,-50.0f+Z);
    glEnd();

    ///upper white tail part
    glColor3ub(209,174,31);
    glBegin(GL_POLYGON);
    glVertex2f(10.0f,-120.0f+Z);
    glVertex2f(40.0f,-120.0f+Z);
    glVertex2f(35.0f,-100.0f+Z);
    glVertex2f(10.0f,-100.0f+Z);
    glEnd();

    ///upper white front part
    glColor3ub(155,155,255);
    glBegin(GL_POLYGON);
    glVertex2f(85.0f,-120.0f+Z);
    glVertex2f(110.0f,-120.0f+Z);
    glVertex2f(120.0f,-90.0f+Z);
    glVertex2f(90.0f,-90.0f+Z);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    ///Container
    glColor3ub(0,0,255);
    glMatrixMode(GL_MODELVIEW);
    glScalef(0.0055,0.0025,0);
    glPushMatrix();
    glTranslatef(move_ship_container, 0.0f, 0.0f);//for move

    ///left first container
    glBegin(GL_POLYGON);
    glVertex2f(45.0f,-120.0f+Z);
    glVertex2f(62.0f,-120.0f+Z);
    glVertex2f(62.0f,-85.0f+Z);
    glVertex2f(45.0f,-85.0f+Z);
    glEnd();

    ///left first container 2D
    glColor3ub(0,0,100);
    glBegin(GL_POLYGON);
    glVertex2f(62.0f,-85.0f+Z);
    glVertex2f(63.0f,-85.0f+Z);
    glVertex2f(63.0f,-120.0f+Z);
    glVertex2f(62.0f,-120.0f+Z);
    glEnd();

    ///left second container
    glColor3ub(255,165,0);
    glBegin(GL_POLYGON);
    glVertex2f(65.0f,-120.0f+Z);
    glVertex2f(82.0f,-120.0f+Z);
    glVertex2f(82.0f,-85.0f+Z);
    glVertex2f(65.0f,-85.0f+Z);
    glEnd();

    ///left second container 2D
    glColor3ub(150,105,0);
    glBegin(GL_POLYGON);

    glVertex2f(82.0f,-85.0f+Z);
    glVertex2f(83.0f,-85.0f+Z);
    glVertex2f(83.0f,-120.0f+Z);
    glVertex2f(82.0f,-120.0f+Z);
    glEnd();

    ///top container
    glColor3ub(255,127,80);
    glBegin(GL_POLYGON);
    glVertex2f(56.5f,-85.0f+Z);
    glVertex2f(73.5f,-85.0f+Z);
    glVertex2f(73.5f,-50.0f+Z);
    glVertex2f(56.5f,-50.0f+Z);
    glEnd();

    ///top container 2D
    glColor3ub(130,70,50);
    glBegin(GL_POLYGON);
    glVertex2f(73.5f,-50.0f+Z);
    glVertex2f(74.5f,-50.0f+Z);
    glVertex2f(74.5f,-85.0f+Z);
    glVertex2f(73.5f,-85.0f+Z);
    glEnd();
    glPopMatrix();
    glLoadIdentity();
}



void speed_boat()                           ///OID-14
{
    ///SpeedBoat
    float I = 60.0;
    ///deck
    glColor3ub(0,0,128);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.0055,0.0020,0);
    glTranslatef(move_speed_boat, 0.0f, 0.0f);//for move
    glBegin(GL_QUADS);
    glVertex2f(135.0f, -44.0f+I);
    glVertex2f(167.0f, -60.0f+I);
    glVertex2f(164.0f, -30.0f+I);
    glVertex2f(140.0f, -10.0f+I);
    glEnd();

    ///windows
    glColor3ub(72,209,204);
    glBegin(GL_QUADS);
    glVertex2f(137.0f, -39.0f+I);
    glVertex2f(165.0f, -51.0f+I);
    glVertex2f(163.0f, -34.0f+I);
    glVertex2f(141.0f, -15.0f+I);
    glEnd();

//window line

    glColor3ub(0,0,128);
    glLineWidth(8.0f);
    glBegin(GL_LINES);
    glVertex2f(145.0f, -52.0f+I);
    glVertex2f(145.0f, -16.0f+I);

    glVertex2f(151.0f, -52.0f+I);
    glVertex2f(151.0f, -19.0f+I);

    glVertex2f(157.0f, -52.0f+I);
    glVertex2f(157.0f, -25.5f+I);
    glEnd();
//middle body
    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(132.0f, -85.0f+I);
    glVertex2f(173.0f, -85.0f+I);
    glVertex2f(177.0f, -60.0f+I);
    glVertex2f(123.0f, -38.0f+I);
    glEnd();

    ///bottom body
    glColor3ub(0,0,128);
    glBegin(GL_QUADS);
    glVertex2f(135.0f, -105.0f+I);
    glVertex2f(170.0f, -105.0f+I);
    glVertex2f(173.0f, -85.0f+I);
    glVertex2f(130.0f, -76.0f+I);
    glEnd();
    glPopMatrix();
    glLoadIdentity();
}


void update_speed_boat(int value)               ///AFID-3
{
    move_speed_boat -= speedboat_speed;
    if(move_speed_boat<-360)
    {
        move_speed_boat =70;
    }
    glutPostRedisplay();
    glutTimerFunc(8, update_speed_boat, 0);
}


void update_ship(int value)                     ///AFID-4
{
    if(move_ship_container>=211.90)
    {
        move_ship_container = -320;
    }
    glutPostRedisplay();
    move_ship_container += container_ship_speed ;
    glutTimerFunc(20, update_ship, 0);
}

void updateFlow(int value)                      ///AFID-5
{
    move_flow -=0.001;
    if (move_flow < -0.1)
    {
        move_flow = 0.001;
    }
    glutPostRedisplay();
    glutTimerFunc(20, updateFlow, 0);
}
void HalfCircle(float r1,float r,float g,float b)
{
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(r,g,b);
        float pi=3.1416/2;
        float A=(i*2*pi)/200;
        float r=r1;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
    glEnd();
}
void window()
{
    glBegin(GL_QUADS);
    glColor3ub(96,96,96);
    glVertex2f(0.015,-0.04);
    glVertex2f(-0.015, -0.04);
    glColor3ub(160,160,160);
    glVertex2f(-0.015, -0.00);
    glVertex2f(0.015, -0.00);
    glEnd();
    glTranslatef(-0.0005,0,0);
    HalfCircle(0.015,160,160,160);
    glLoadIdentity();
}


///----------------------------------------------------------------------------------------------------------

float man1Position=0.3f;
float man1Speed=0.008;
float man2Position=-0.4f;
float man2Speed=0.012;
float man3Position=0.8f;
float man3Speed=0.01;
float man4Position=0.9f;
float man4Speed=0.015;
float ambulance_position=0;
float ambulance_speed=0.01;
float police_car_position=0;
float police_car_speed=0.01;
float suv_car_position = 0;
float suv_car_speed=0.01;
float car_position = 0;
float car_speed=0.01;

void road()
{
    glBegin(GL_QUADS);
    glColor3f(0.2f, 0.2f, 0.2f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.35f);
    glVertex2f(-1.0f, -0.35f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-1.0f, -0.35f);
    glVertex2f(1.0f, -0.35f);
    glVertex2f(1.0f, -0.3f);
    glVertex2f(-1.0f, -0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(-1.0f, -0.35f);
    glVertex2f(-0.80f, -0.35f);
    glVertex2f(-0.80f, -0.3f);
    glVertex2f(-1.0f, -0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(-0.60f, -0.35f);
    glVertex2f(-0.40f, -0.35f);
    glVertex2f(-0.40f, -0.3f);
    glVertex2f(-0.60f, -0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(-0.20f, -0.35f);
    glVertex2f(0.00f, -0.35f);
    glVertex2f(0.00f, -0.3f);
    glVertex2f(-0.20f, -0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.20f, -0.35f);
    glVertex2f(0.40f, -0.35f);
    glVertex2f(0.40f, -0.3f);
    glVertex2f(0.20f, -0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.60f, -0.35f);
    glVertex2f(0.80f, -0.35f);
    glVertex2f(0.80f, -0.3f);
    glVertex2f(0.60f, -0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.90f, 1.0f, 0.3f);

    glVertex2f(-1.0f, -0.67f);
    glVertex2f(-0.80f, -0.67f);
    glVertex2f(-0.80f, -0.7f);
    glVertex2f(-1.0f, -0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.90f, 1.0f, 0.3f);

    glVertex2f(-0.60f, -0.67f);
    glVertex2f(-0.40f, -0.67f);
    glVertex2f(-0.40f, -0.7f);
    glVertex2f(-0.60f, -0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.90f, 1.0f, 0.3f);

    glVertex2f(-0.20f, -0.67f);
    glVertex2f(0.00f, -0.67f);
    glVertex2f(0.00f, -0.7f);
    glVertex2f(-0.20f, -0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.90f, 1.0f, 0.3f);

    glVertex2f(0.20f, -0.67f);
    glVertex2f(0.40f, -0.67f);
    glVertex2f(0.40f, -0.7f);
    glVertex2f(0.20f, -0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.90f, 1.0f, 0.3f);
    glVertex2f(0.60f, -0.67f);
    glVertex2f(0.80f, -0.67f);
    glVertex2f(0.80f, -0.7f);
    glVertex2f(0.60f, -0.7f);
    glEnd();

}

void circle(float radius, float cX, float cY, float r, float g, float b)
{
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(r,g,b);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=radius;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+cX,y+cY);
    }
}

void footpath()                             ///OID-17
{
    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.8f, 0.5f);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(1.0f, -0.3f);
    glVertex2f(1.0f, -0.1f);
    glVertex2f(-1.0f, -0.1f);
    glEnd();


}


void lamp_post()                              ///OID-20
{
    float ww = 100;
    ///lamp1
    ///pillar
    float L = 140.0;
    float l = 40.0;
    glScalef(0.005,0.005,0);
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f,80.0f-L);
    glVertex2f(62.0f,162.5f-L);
    glEnd();

    ///light holder
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f,160.0f-L);
    glVertex2f(54.0f,160.0f-L);
    glEnd();

    ///light
    glColor3ub(255-ww,255-ww,255-ww);
    glLineWidth(7.0f);
    glBegin(GL_LINES);
    glVertex2f(54.0f,158.0f-L);
    glVertex2f(57.0f,158.0f-L);
    glEnd();

    ///lamp2
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f-l,80.0f-L);
    glVertex2f(62.0f-l,162.5f-L);
    glEnd();

    ///light holder
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f-l,160.0f-L);
    glVertex2f(54.0f-l,160.0f-L);
    glEnd();

    ///light
    glColor3ub(255-ww,255-ww,255-ww);
    glLineWidth(7.0f);
    glBegin(GL_LINES);
    glVertex2f(54.0f-l,158.0f-L);
    glVertex2f(57.0f-l,158.0f-L);
    glEnd();

    ///lamp3
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f-2*l,80.0f-L);
    glVertex2f(62.0f-2*l,162.5f-L);
    glEnd();

    ///light holder
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f-2*l,160.0f-L);
    glVertex2f(54.0f-2*l,160.0f-L);
    glEnd();

    ///light
    glColor3ub(255-ww,255-ww,255-ww);
    glLineWidth(7.0f);
    glBegin(GL_LINES);
    glVertex2f(54.0f-2*l,158.0f-L);
    glVertex2f(57.0f-2*l,158.0f-L);
    glEnd();

    ///lamp4
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f-3*l,80.0f-L);
    glVertex2f(62.0f-3*l,162.5f-L);
    glEnd();

    ///light holder
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f-3*l,160.0f-L);
    glVertex2f(54.0f-3*l,160.0f-L);
    glEnd();

    ///light
    glColor3ub(255-ww,255-ww,255-ww);
    glLineWidth(7.0f);
    glBegin(GL_LINES);
    glVertex2f(54.0f-3*l,158.0f-L);
    glVertex2f(57.0f-3*l,158.0f-L);
    glEnd();

    ///lamp5
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f-4*l,80.0f-L);
    glVertex2f(62.0f-4*l,162.5f-L);
    glEnd();

    ///light holder
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f-4*l,160.0f-L);
    glVertex2f(54.0f-4*l,160.0f-L);
    glEnd();

    ///light
    glColor3ub(255-ww,255-ww,255-ww);
    glLineWidth(7.0f);
    glBegin(GL_LINES);
    glVertex2f(54.0f-4*l,158.0f-L);
    glVertex2f(57.0f-4*l,158.0f-L);
    glEnd();

    ///lamp6
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f-5*l,80.0f-L);
    glVertex2f(62.0f-5*l,162.5f-L);
    glEnd();

    ///light holder
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f-5*l,160.0f-L);
    glVertex2f(54.0f-5*l,160.0f-L);
    glEnd();

    ///light
    glColor3ub(255-ww,255-ww,255-ww);
    glLineWidth(7.0f);
    glBegin(GL_LINES);
    glVertex2f(54.0f-5*l,158.0f-L);
    glVertex2f(57.0f-5*l,158.0f-L);
    glEnd();

    ///lamp7
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f-6*l,80.0f-L);
    glVertex2f(62.0f-6*l,162.5f-L);
    glEnd();

    ///light holder
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f-6*l,160.0f-L);
    glVertex2f(54.0f-6*l,160.0f-L);
    glEnd();

    ///light
    glColor3ub(255-ww,255-ww,255-ww);
    glLineWidth(7.0f);
    glBegin(GL_LINES);
    glVertex2f(54.0f-6*l,158.0f-L);
    glVertex2f(57.0f-6*l,158.0f-L);
    glEnd();

    ///light
    glColor3ub(255-ww,255-ww,255-ww);
    glLineWidth(7.0f);
    glBegin(GL_LINES);
    glVertex2f(54.0f-5*l,158.0f-L);
    glVertex2f(57.0f-5*l,158.0f-L);
    glEnd();

    ///lamp8
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f+l,80.0f-L);
    glVertex2f(62.0f+l,162.5f-L);
    glEnd();

    ///light holder
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f+l,160.0f-L);
    glVertex2f(54.0f+l,160.0f-L);
    glEnd();

    ///light
    glColor3ub(255-ww,255-ww,255-ww);
    glLineWidth(7.0f);
    glBegin(GL_LINES);
    glVertex2f(54.0f+l,158.0f-L);
    glVertex2f(57.0f+l,158.0f-L);
    glEnd();

    ///lamp9
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f+2*l,80.0f-L);
    glVertex2f(62.0f+2*l,162.5f-L);
    glEnd();

    ///light holder
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f+2*l,160.0f-L);
    glVertex2f(54.0f+2*l,160.0f-L);
    glEnd();

    ///light
    glColor3ub(255-ww,255-ww,255-ww);
    glLineWidth(7.0f);
    glBegin(GL_LINES);
    glVertex2f(54.0f+2*l,158.0f-L);
    glVertex2f(57.0f+2*l,158.0f-L);
    glEnd();

    ///lamp10
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f+3*l,80.0f-L);
    glVertex2f(62.0f+3*l,162.5f-L);
    glEnd();

    ///light holder
    glColor3ub(0,0,0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f(62.0f+3*l,160.0f-L);
    glVertex2f(54.0f+3*l,160.0f-L);
    glEnd();

    ///light
    glColor3ub(255-ww,255-ww,255-ww);
    glLineWidth(7.0f);
    glBegin(GL_LINES);
    glVertex2f(54.0f+3*l,158.0f-L);
    glVertex2f(57.0f+3*l,158.0f-L);
    glEnd();

    glLoadIdentity();

}



void tree()                                 ///OID-18
{
    ///tree1
    float t = 0.5;
    glScalef(1.5,1.50,0);
    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.3f, 0.0f);
    glVertex2f(0.048f, 0.4f-t);
    glVertex2f(0.064f, 0.4f-t);
    glVertex2f(0.064f, 0.53f-t);
    glVertex2f(0.048f, 0.53f-t);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(0.03f,0.47f-t);
    glVertex2f(0.081f,0.47f-t);
    glVertex2f(0.06f,0.68f-t);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(0.03f,0.48f-t);
    glVertex2f(0.082f,0.48f-t);
    glVertex2f(0.07f,0.64f-t);
    glEnd();

    glLoadIdentity();

    ///tree2
    glPushMatrix();
    glScalef(-1.5,1.50,0);
    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.3f, 0.0f);
    glVertex2f(0.048f, 0.4f-t);
    glVertex2f(0.064f, 0.4f-t);
    glVertex2f(0.064f, 0.53f-t);
    glVertex2f(0.048f, 0.53f-t);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(0.03f,0.47f-t);
    glVertex2f(0.081f,0.47f-t);
    glVertex2f(0.06f,0.68f-t);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(0.03f,0.48f-t);
    glVertex2f(0.082f,0.48f-t);
    glVertex2f(0.07f,0.64f-t);
    glEnd();

    glLoadIdentity();

    ///tree3
    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.3f, 0.0f);
    glVertex2f(-0.6f,-0.15f);
    glVertex2f(-0.624f,-0.15f);
    glVertex2f(-0.624f,0.08f);
    glVertex2f(-0.6f,0.08f);
    glEnd();

    circle(0.04,-0.645,0.13,0.0,1.0,0.2);
    glEnd();
    circle(0.04,-0.58,0.13,0.0,1.0,0.2);
    glEnd();
    circle(0.06,-0.61,0.2,0.0,1.0,0.2);
    glEnd();

    circle(0.04,-0.67,0.1,0.0, 0.6, 0.0);
    glEnd();
    circle(0.04,-0.56,0.1,0.0, 0.6, 0.0);
    glEnd();
    circle(0.04,-0.615,0.1,0.0, 0.6, 0.0);
    glEnd();

    ///tree4
    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.3f, 0.0f);
    glVertex2f(0.6f,-0.15f);
    glVertex2f(0.624f,-0.15f);
    glVertex2f(0.624f,0.08f);
    glVertex2f(0.6f,0.08f);
    glEnd();

    circle(0.04,0.645,0.13,0.0,1.0,0.2);
    glEnd();
    circle(0.04,0.58,0.13,0.0,1.0,0.2);
    glEnd();
    circle(0.06,0.61,0.2,0.0,1.0,0.2);
    glEnd();

    circle(0.04,0.67,0.1,0.0, 0.6, 0.0);
    glEnd();
    circle(0.04,0.56,0.1,0.0, 0.6, 0.0);
    glEnd();
    circle(0.04,0.615,0.1,0.0, 0.6, 0.0);
    glEnd();


}


void treeSnows(){

    ///tree1
    float t = 0.5;
    glScalef(1.5,1.50,0);
    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.3f, 0.0f);
    glVertex2f(0.048f, 0.4f-t);
    glVertex2f(0.064f, 0.4f-t);
    glVertex2f(0.064f, 0.53f-t);
    glVertex2f(0.048f, 0.53f-t);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(0.03f,0.47f-t);
    glVertex2f(0.081f,0.47f-t);
    glVertex2f(0.06f,0.68f-t);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(0.03f,0.48f-t);
    glVertex2f(0.082f,0.48f-t);
    glVertex2f(0.07f,0.64f-t);
    glEnd();

    glLoadIdentity();

    ///tree2
    glPushMatrix();
    glScalef(-1.5,1.50,0);
    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.3f, 0.0f);
    glVertex2f(0.048f, 0.4f-t);
    glVertex2f(0.064f, 0.4f-t);
    glVertex2f(0.064f, 0.53f-t);
    glVertex2f(0.048f, 0.53f-t);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(0.03f,0.47f-t);
    glVertex2f(0.081f,0.47f-t);
    glVertex2f(0.06f,0.68f-t);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(0.03f,0.48f-t);
    glVertex2f(0.082f,0.48f-t);
    glVertex2f(0.07f,0.64f-t);
    glEnd();

    glLoadIdentity();

    ///tree3
    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.3f, 0.0f);
    glVertex2f(-0.6f,-0.15f);
    glVertex2f(-0.624f,-0.15f);
    glVertex2f(-0.624f,0.08f);
    glVertex2f(-0.6f,0.08f);
    glEnd();

    circle(0.04,-0.645,0.13,0.0,1.0,0.2);
    glEnd();
    circle(0.04,-0.58,0.13,0.0,1.0,0.2);
    glEnd();
    circle(0.06,-0.61,0.2,0.0,1.0,0.2);
    glEnd();

    circle(0.04,-0.67,0.1,0.0, 0.6, 0.0);
    glEnd();
    circle(0.04,-0.56,0.1,0.0, 0.6, 0.0);
    glEnd();
    circle(0.04,-0.615,0.1,0.0, 0.6, 0.0);
    glEnd();

    ///tree4
    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.3f, 0.0f);
    glVertex2f(0.6f,-0.15f);
    glVertex2f(0.624f,-0.15f);
    glVertex2f(0.624f,0.08f);
    glVertex2f(0.6f,0.08f);
    glEnd();

    circle(0.04,0.645,0.13,0.0,1.0,0.2);
    glEnd();
    circle(0.04,0.58,0.13,0.0,1.0,0.2);
    glEnd();
    circle(0.06,0.61,0.2,0.0,1.0,0.2);
    glEnd();

    circle(0.04,0.67,0.1,0.0, 0.6, 0.0);
    glEnd();
    circle(0.04,0.56,0.1,0.0, 0.6, 0.0);
    glEnd();
    circle(0.04,0.615,0.1,0.0, 0.6, 0.0);
    glEnd();

    if(isSnow)
    {
        ///4th_tree
        glPointSize(10.0);
        glColor3f(1,1,1);
        glBegin(GL_POINTS);
        glVertex2f(0.66f,0.1f);
        glPointSize(10.0);
        glColor3f(1,1,1);
        glBegin(GL_POINTS);
        glVertex2f(0.61f,0.1f);
        glPointSize(10.0);
        glColor3f(1,1,1);
        glBegin(GL_POINTS);
        glVertex2f(0.56f,0.1f);
        glPointSize(10.0);
        glColor3f(1,1,1);
        glBegin(GL_POINTS);
        glVertex2f(0.59f,0.17f);
        glPointSize(10.0);
        glColor3f(1,1,1);
        glBegin(GL_POINTS);
        glVertex2f(0.63f,0.17f);
        glPointSize(10.0);
        glColor3f(1,1,1);
        glBegin(GL_POINTS);
        glVertex2f(0.61f,0.22f);

        ///3rd_tree
        glPointSize(10.0);
        glColor3f(1,1,1);
        glBegin(GL_POINTS);
        glVertex2f(-0.66f,0.1f);
        glPointSize(10.0);
        glColor3f(1,1,1);
        glBegin(GL_POINTS);
        glVertex2f(-0.61f,0.1f);
        glPointSize(10.0);
        glColor3f(1,1,1);
        glBegin(GL_POINTS);
        glVertex2f(-0.56f,0.1f);
        glPointSize(10.0);
        glColor3f(1,1,1);
        glBegin(GL_POINTS);
        glVertex2f(-0.59f,0.17f);
        glPointSize(10.0);
        glColor3f(1,1,1);
        glBegin(GL_POINTS);
        glVertex2f(-0.63f,0.17f);
        glPointSize(10.0);
        glColor3f(1,1,1);
        glBegin(GL_POINTS);
        glVertex2f(-0.61f,0.22f);

        ///tree_1
        glPointSize(10.0);
        glColor3f(1,1,1);
        glBegin(GL_POINTS);
        glVertex2f(-0.09f,0.13f);
        glPointSize(10.0);
        glColor3f(1,1,1);
        glBegin(GL_POINTS);
        glVertex2f(-0.075f,0.01f);
        glPointSize(10.0);
        glColor3f(1,1,1);
        glBegin(GL_POINTS);
        glVertex2f(-0.1f,0.05f);

        ///tree_2
        glPointSize(10.0);
        glColor3f(1,1,1);
        glBegin(GL_POINTS);
        glVertex2f(0.09f,0.13f);
        glPointSize(10.0);
        glColor3f(1,1,1);
        glBegin(GL_POINTS);
        glVertex2f(0.075f,0.01f);
        glPointSize(10.0);
        glColor3f(1,1,1);
        glBegin(GL_POINTS);
        glVertex2f(0.1f,0.05f);
    }
}



void bench()                                ///OID-19
{
    float B = 115.0;
    float b = 50.0;

    ///bench2
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.005,0.005,0);
    ///left leg
    glColor3ub(0,0,0);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(41.0f+b,80.0f-B);
    glVertex2f(41.0f+b,92.0f-B);
    glEnd();
    ///right leg
    glColor3ub(0,0,0);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(57.0f+b,80.0f-B);
    glVertex2f(57.0f+b,92.0f-B);
    glEnd();
    ///upper part
    glColor3f(0.3f, 0.3f, 0.0f);
    glLineWidth(12.0f);
    glBegin(GL_LINES);
    glVertex2f(40.0f+b,92.0f-B);
    glVertex2f(58.0f+b,92.0f-B);
    glEnd();
    glLoadIdentity();

    ///bench2
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(-0.005,0.005,0);
    ///left leg
    glColor3ub(0,0,0);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(41.0f+b,80.0f-B);
    glVertex2f(41.0f+b,92.0f-B);
    glEnd();
    ///right leg
    glColor3ub(0,0,0);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(57.0f+b,80.0f-B);
    glVertex2f(57.0f+b,92.0f-B);
    glEnd();
    ///upper part
    glColor3f(0.3f, 0.3f, 0.0f);
    glLineWidth(12.0f);
    glBegin(GL_LINES);
    glVertex2f(40.0f+b,92.0f-B);
    glVertex2f(58.0f+b,92.0f-B);
    glEnd();
    glLoadIdentity();
}


void fence()                            ///OID-15
{
    float L = 0.05;
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.95f,-0.01f);
    glVertex2f(-0.95f,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.9f,-0.01f);
    glVertex2f(-0.9f,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f,-0.01f);
    glVertex2f(-0.85f,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+L,-0.01f);
    glVertex2f(-0.85f+L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+2*L,-0.01f);
    glVertex2f(-0.85f+2*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+3*L,-0.01f);
    glVertex2f(-0.85f+3*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+4*L,-0.01f);
    glVertex2f(-0.85f+4*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+5*L,-0.01f);
    glVertex2f(-0.85f+5*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+6*L,-0.01f);
    glVertex2f(-0.85f+6*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+7*L,-0.01f);
    glVertex2f(-0.85f+7*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+8*L,-0.01f);
    glVertex2f(-0.85f+8*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+9*L,-0.01f);
    glVertex2f(-0.85f+9*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+10*L,-0.01f);
    glVertex2f(-0.85f+10*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+11*L,-0.01f);
    glVertex2f(-0.85f+11*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+12*L,-0.01f);
    glVertex2f(-0.85f+12*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+13*L,-0.01f);
    glVertex2f(-0.85f+13*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+14*L,-0.01f);
    glVertex2f(-0.85f+14*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+15*L,-0.01f);
    glVertex2f(-0.85f+15*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+16*L,-0.01f);
    glVertex2f(-0.85f+16*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+17*L,-0.01f);
    glVertex2f(-0.85f+17*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+18*L,-0.01f);
    glVertex2f(-0.85f+18*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+19*L,-0.01f);
    glVertex2f(-0.85f+19*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+20*L,-0.01f);
    glVertex2f(-0.85f+20*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+21*L,-0.01f);
    glVertex2f(-0.85f+21*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+22*L,-0.01f);
    glVertex2f(-0.85f+22*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+23*L,-0.01f);
    glVertex2f(-0.85f+23*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+24*L,-0.01f);
    glVertex2f(-0.85f+24*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+25*L,-0.01f);
    glVertex2f(-0.85f+25*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+26*L,-0.01f);
    glVertex2f(-0.85f+26*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+27*L,-0.01f);
    glVertex2f(-0.85f+27*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+28*L,-0.01f);
    glVertex2f(-0.85f+28*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+29*L,-0.01f);
    glVertex2f(-0.85f+29*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+30*L,-0.01f);
    glVertex2f(-0.85f+30*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+31*L,-0.01f);
    glVertex2f(-0.85f+31*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+32*L,-0.01f);
    glVertex2f(-0.85f+32*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+33*L,-0.01f);
    glVertex2f(-0.85f+33*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+34*L,-0.01f);
    glVertex2f(-0.85f+34*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+35*L,-0.01f);
    glVertex2f(-0.85f+35*L,-0.1f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+36*L,-0.01f);
    glVertex2f(-0.85f+36*L,-0.1f);
    glEnd();

    glColor3ub(57,43,23);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glVertex2f(-1.0,-0.01f);
    glVertex2f(1.0f,-0.01f);
    glEnd();

}

void human(float red, float green, float blue, float x, float y)    ///OID-21
{
    glPushMatrix();
    glTranslatef(x,y,0);
    glRotatef(65, 0,1,0);
    ///shirt
    glBegin(GL_QUADS);
    glColor3f(red, green, blue);

    glVertex2f(0.0f, -0.13f);
    glVertex2f(0.07f, -0.13f);

    glVertex2f(0.07f, -0.06f);
    glVertex2f(0.0f, -0.06f);
    glEnd();

    ///left hand
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.7f);

    glVertex2f(0.0f,-0.145f);
    glVertex2f(-0.015f,-0.145f);
    glVertex2f(-0.012f,-0.06f);
    glVertex2f(0.0f,-0.06f);
    glEnd();

    ///left hand sleave
    glBegin(GL_QUADS);
    glColor3f(red, green, blue);

    glVertex2f(0.0f,-0.1f);
    glVertex2f(-0.015f,-0.1f);
    glVertex2f(-0.012f,-0.06f);
    glVertex2f(0.0f,-0.06f);
    glEnd();

    ///right hand
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.7f);

    glVertex2f(0.07f,-0.145f);
    glVertex2f(0.085f,-0.145f);
    glVertex2f(0.082f,-0.06f);
    glVertex2f(0.07f,-0.06f);
    glEnd();

    ///right hand sleave
    glBegin(GL_QUADS);
    glColor3f(red, green, blue);

    glVertex2f(0.07f,-0.1f);
    glVertex2f(0.085f,-0.1f);
    glVertex2f(0.082f,-0.06f);
    glVertex2f(0.07f,-0.06f);
    glEnd();

    ///leg
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.6f);

    glVertex2f(0.0f, -0.2f);
    glVertex2f(0.02f, -0.2f);

    glVertex2f(0.07f, -0.13f);
    glVertex2f(0.0f, -0.13f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.6f);

    glVertex2f(0.05f, -0.2f);
    glVertex2f(0.07f, -0.2f);

    glVertex2f(0.07f, -0.13f);
    glVertex2f(0.03f, -0.16f);
    glEnd();
    ///shoe
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.0f, -0.22f);
    glVertex2f(0.02f, -0.22f);

    glVertex2f(0.02f, -0.2f);
    glVertex2f(0.0f, -0.2f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.05f, -0.22f);
    glVertex2f(0.07f, -0.22f);

    glVertex2f(0.07f, -0.2f);
    glVertex2f(0.05f, -0.2f);
    glEnd();

    ///neck
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.025f, -0.06f);
    glVertex2f(0.045f, -0.06f);

    glVertex2f(0.045f, -0.04f);
    glVertex2f(0.025f, -0.04f);
    glEnd();

    ///face
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.01f, -0.04f);
    glVertex2f(0.06f, -0.04f);

    glVertex2f(0.06f, 0.0f);
    glVertex2f(0.01f, 0.0f);
    glEnd();

    ///hat
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.01f, 0.0f);
    glVertex2f(0.06f, 0.0f);

    glVertex2f(0.05f, 0.03f);
    glVertex2f(0.02f, 0.03f);
    glEnd();
    glPopMatrix();
}
void updateHuman(int value)                 ///AFID-6
{

    man2Position+=man2Speed;
    if(man2Position>1.0)
    {
        man2Position=-1.0;
    }
    man3Position-=man3Speed;
    if(man1Position<-1.0)
    {
        man3Position=+1.0;
    }
    man4Position-=man4Speed;
    if(man4Position<-1.0)
    {
        man4Position=+1.0;
    }
    glutPostRedisplay();
    glutTimerFunc(100, updateHuman, 0);
}

void ambulance()                            ///OID-22
{
    /// ambulance
    glPushMatrix();
    glRotatef(0,0,1,0);
    glTranslatef(ambulance_position-0.6,-0.0,0);
    glBegin(GL_QUADS);/// white ambulance down body
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(-0.7f, -0.35f);
    glVertex2f(-0.7f, -0.45f);
    glVertex2f(-0.35f, -0.45f);
    glVertex2f(-0.36f, -0.35f);
    glEnd();

    glBegin(GL_QUADS);/// yellow quads
    glColor3f(1.0f, 1.0f, 0.0f);

    glVertex2f(-0.39f, -0.35f);
    glVertex2f(-0.39f, -0.37f);
    glVertex2f(-0.357f, -0.37f);
    glVertex2f(-0.36f, -0.35f);
    glEnd();

    glBegin(GL_QUADS);/// black ambulance start
    glColor3f(0.2f, 0.2f, 0.2f);

    glVertex2f(-0.71f, -0.43f);
    glVertex2f(-0.71f, -0.45f);
    glVertex2f(-0.69f, -0.45f);
    glVertex2f(-0.69f, -0.43f);
    glEnd();

    glBegin(GL_QUADS);/// black ambulance end
    glColor3f(0.2f, 0.2f, 0.2f);

    glVertex2f(-0.36f, -0.43f);
    glVertex2f(-0.36f, -0.45f);
    glVertex2f(-0.34f, -0.45f);
    glVertex2f(-0.34f, -0.43f);
    glEnd();

    glBegin(GL_QUADS);    ///ambulance middle line
    glColor3f(1.0f, 0.0f, 0.0f);

    glVertex2f(-0.7f, -0.343f);
    glVertex2f(-0.7f, -0.35f);
    glVertex2f(-0.36f, -0.35f);
    glVertex2f(-0.363f, -0.343f);
    glEnd();

    glBegin(GL_QUADS);/// white ambulance middle body
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(-0.7f, -0.31f);
    glVertex2f(-0.7f, -0.343f);
    glVertex2f(-0.363f, -0.343f);
    glVertex2f(-0.39f, -0.31f);
    glEnd();

    glBegin(GL_QUADS);    ///ambulance middle body end
    glColor3f(1.0f, 0.0f, 0.0f);

    glVertex2f(-0.7f, -0.31f);
    glVertex2f(-0.7f, -0.343f);
    glVertex2f(-0.69f, -0.343f);
    glVertex2f(-0.69f, -0.31f);
    glEnd();



    glBegin(GL_QUADS);/// white ambulance up body
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(-0.65f, -0.17f);
    glVertex2f(-0.7f, -0.31f);
    glVertex2f(-0.39f, -0.31f);
    glVertex2f(-0.43f, -0.17f);
    glEnd();


    glBegin(GL_QUADS);   ///ambulance up body alarm
    glColor3f(1.0f, 0.0f, 0.0f);

    glVertex2f(-0.55f, -0.15f);
    glVertex2f(-0.55f, -0.17f);
    glVertex2f(-0.53f, -0.17f);
    glVertex2f(-0.53f, -0.15f);
    glEnd();

    glBegin(GL_QUADS);/// white ambulance up body blue right quads
    glColor3f(0.0f, 1.0f, 1.0f);

    glVertex2f(-0.49f, -0.19f);
    glVertex2f(-0.49f, -0.31f);
    glVertex2f(-0.41f, -0.31f);
    glVertex2f(-0.45f, -0.19f);
    glEnd();

    glBegin(GL_QUADS);/// white ambulance up body blue left quads
    glColor3f(0.0f, 1.0f, 1.0f);

    glVertex2f(-0.57f, -0.19f);
    glVertex2f(-0.57f, -0.31f);
    glVertex2f(-0.5f, -0.31f);
    glVertex2f(-0.5f, -0.19f);
    glEnd();


    glBegin(GL_QUADS);/// ambulance up body red
    glColor3f(1.0f, 0.0f, 0.0f);

    glVertex2f(-0.65f, -0.24f);
    glVertex2f(-0.65f, -0.26f);
    glVertex2f(-0.58f, -0.26f);
    glVertex2f(-0.58f, -0.24f);
    glEnd();

    glBegin(GL_QUADS);///  ambulance up body red
    glColor3f(1.0f, 0.0f, 0.0f);

    glVertex2f(-0.62f, -0.19f);
    glVertex2f(-0.62f, -0.31f);
    glVertex2f(-0.61f, -0.31f);
    glVertex2f(-0.61f, -0.19f);
    glEnd();

    ///Wheel
    glScalef(0.2,0.2,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.1,0.1,0.1);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.28;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-3.05,y-2.2);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.5,0.5,0.5);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.20;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-3.05,y-2.2);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.1,0.1,0.1);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.28;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-2.2,y-2.2);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.5,0.5,0.5);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.20;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-2.2,y-2.2);
    }
    glEnd();
    glPopMatrix();
    glPopMatrix();
    glLoadIdentity();
}

void policeCar()                                ///OID-25
{
    glPushMatrix();
    glRotatef(180,0,1,0);
    glTranslatef(police_car_position-0.8,0,0);
    glScalef(-1,1,0);
    ///police car
    glBegin(GL_QUADS);/// white policeCar down body
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.37f, -0.77f);
    glVertex2f(0.35f, -0.89f);
    glVertex2f(0.7f, -0.89f);
    glVertex2f(0.69f, -0.77f);
    glEnd();

    glBegin(GL_QUADS);/// black policeCar down start line
    glColor3f(0.2f, 0.2f, 0.2f);

    glVertex2f(0.34f, -0.87f);
    glVertex2f(0.34f, -0.89f);
    glVertex2f(0.37f, -0.89f);
    glVertex2f(0.37f, -0.87f);
    glEnd();

    glBegin(GL_QUADS);/// black policeCar down end line
    glColor3f(0.2f, 0.2f, 0.2f);

    glVertex2f(0.68f, -0.87f);
    glVertex2f(0.68f, -0.89f);
    glVertex2f(0.72f, -0.89f);
    glVertex2f(0.72f, -0.87f);
    glEnd();

    glBegin(GL_QUADS);    ///policeCar middle line
    glColor3f(1.0f, 1.0f, 0.0f);

    glVertex2f(0.366f, -0.79f);
    glVertex2f(0.363f, -0.81f);
    glVertex2f(0.39f, -0.81f);
    glVertex2f(0.39f, -0.79f);
    glEnd();

    glBegin(GL_QUADS);/// blue policeCar middle line
    glColor3f(0.0f, 0.0f, 1.0f);

    glVertex2f(0.4f, -0.79f);
    glVertex2f(0.4f, -0.81f);
    glVertex2f(0.66f, -0.81f);
    glVertex2f(0.66f, -0.79f);
    glEnd();

    glBegin(GL_QUADS);   ///policeCar middle line
    glColor3f(1.0f, 0.0f, 0.0f);

    glVertex2f(0.67f, -0.79f);
    glVertex2f(0.67f, -0.81f);
    glVertex2f(0.695f, -0.81f);
    glVertex2f(0.693f, -0.79f);
    glEnd();

    glBegin(GL_QUADS);/// white policeCar up body
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.46f, -0.7f);
    glVertex2f(0.41f, -0.77f);
    glVertex2f(0.65f, -0.77f);
    glVertex2f(0.62f, -0.7f);
    glEnd();

    glBegin(GL_QUADS);/// cyan policeCar up body
    glColor3f(0.0f, 1.0f, 1.0f);

    glVertex2f(0.465f, -0.715f);
    glVertex2f(0.42f, -0.77f);
    glVertex2f(0.52f, -0.77f);
    glVertex2f(0.52f, -0.715f);
    glEnd();

    glBegin(GL_QUADS);/// cyan policeCar up body
    glColor3f(0.0f, 1.0f, 1.0f);

    glVertex2f(0.53f, -0.715f);
    glVertex2f(0.53f, -0.77f);
    glVertex2f(0.64f, -0.77f);
    glVertex2f(0.615f, -0.715f);
    glEnd();

    glBegin(GL_QUADS);  ///policeCar upper light
    glColor3f(1.0f, 0.0f, 0.0f);

    glVertex2f(0.475f, -0.68f);
    glVertex2f(0.475f, -0.7f);
    glVertex2f(0.49f, -0.7f);
    glVertex2f(0.49f, -0.68f);
    glEnd();

    glBegin(GL_QUADS);/// blue policeCar upper light
    glColor3f(0.0f, 0.0f, 1.0f);

    glVertex2f(0.49f, -0.68f);
    glVertex2f(0.49f, -0.7f);
    glVertex2f(0.505f, -0.7f);
    glVertex2f(0.505f, -0.68f);
    glEnd();

    glBegin(GL_QUADS);  ///policeCar upper light
    glColor3f(1.0f, 0.0f, 0.0f);

    glVertex2f(0.505f, -0.68f);
    glVertex2f(0.505f, -0.7f);
    glVertex2f(0.52f, -0.7f);
    glVertex2f(0.52f, -0.68f);
    glEnd();

    ///Wheel
    glScalef(0.2,0.2,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.1,0.1,0.1);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.28;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+3.03,y-4.45);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.5,0.5,0.5);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.20;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+3.03,y-4.45);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.1,0.1,0.1);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.28;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+2.23,y-4.45);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.5,0.5,0.5);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.20;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+2.23,y-4.45);
    }
    glEnd();
    glPopMatrix();
    glPopMatrix();
    glLoadIdentity();
}


void suv()                                  ///OID-24
{
    float cx = 5.5;
    glPushMatrix();
    glRotatef(180,0,1,0);
    glTranslatef(suv_car_position-2.0,0,0);
    glScalef(0.14,0.14,0);
    ///car Body
    glColor3d(1,0,0);
    glBegin(GL_POLYGON);
    glColor3f(0.90,0.3,0.0);
    glVertex2f(-3.0f, 0.0-cx);
    glVertex2f(-3.0f, 0.8-cx);
    glVertex2f(-0.7f, 0.8-cx);
    glVertex2f(-0.5f, 0.55-cx);
    glVertex2f(-0.5f, 0.0-cx);
    glEnd();

    ///car UP
    glBegin(GL_QUADS);
    glColor3f(1.,1.0,1.0);
    glVertex2f(-3.0f, 0.8f-cx);
    glVertex2f(-2.7f, 1.3f-cx);
    glVertex2f(-1.7f, 1.3f-cx);
    glVertex2f(-1.35f, 0.8f-cx);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex2f(-2.9f, 0.8f-cx);
    glVertex2f(-2.6f, 1.23f-cx);
    glVertex2f(-2.15f, 1.23f-cx);
    glVertex2f(-2.15f, 0.8f-cx);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex2f(-2.05f, 0.8f-cx);
    glVertex2f(-2.05f, 1.23f-cx);
    glVertex2f(-1.75f, 1.23f-cx);
    glVertex2f(-1.45f, 0.8f-cx);
    glEnd();

    ///Wheel
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.1,0.1,0.1);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.38;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+3.05-cx,y-5.45);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.5,0.5,0.5);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.28;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+3.05-cx,y-5.45);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.1,0.1,0.1);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.38;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+4.45-cx,y-5.45);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.5,0.5,0.5);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.28;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+4.45-cx,y-5.45);
    }
    glEnd();
    glPopMatrix();
    glLoadIdentity();
}

void car()
{
    float cy=0.3;
    glPushMatrix();
    glRotatef(-1,0,1,0);
    glTranslatef(car_position+0.5,0,0);
    glScalef(-1,1,0);
    ///police car
    glBegin(GL_QUADS);/// white car down body
    glColor3f(0.6f, 0.0f, 1.0f);
    glVertex2f(0.37f, -0.77f+cy);
    glVertex2f(0.35f, -0.89f+cy);
    glVertex2f(0.7f, -0.89f+cy);
    glVertex2f(0.69f, -0.77f+cy);
    glEnd();

    glBegin(GL_QUADS);/// black car down start line
    glColor3f(0.2f, 0.2f, 0.2f);
    glVertex2f(0.34f, -0.87f+cy);
    glVertex2f(0.34f, -0.89f+cy);
    glVertex2f(0.37f, -0.89f+cy);
    glVertex2f(0.37f, -0.87f+cy);
    glEnd();

    glBegin(GL_QUADS);/// black car down end line
    glColor3f(0.2f, 0.2f, 0.2f);
    glVertex2f(0.68f, -0.87f+cy);
    glVertex2f(0.68f, -0.89f+cy);
    glVertex2f(0.72f, -0.89f+cy);
    glVertex2f(0.72f, -0.87f+cy);
    glEnd();

    glBegin(GL_QUADS);   ///car middle line
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.366f, -0.79f+cy);
    glVertex2f(0.363f, -0.81f+cy);
    glVertex2f(0.39f, -0.81f+cy);
    glVertex2f(0.39f, -0.79f+cy);
    glEnd();

    glBegin(GL_QUADS);/// blue car middle line
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.4f, -0.79f+cy);
    glVertex2f(0.4f, -0.81f+cy);
    glVertex2f(0.66f, -0.81f+cy);
    glVertex2f(0.66f, -0.79f+cy);
    glEnd();

    glBegin(GL_QUADS);///red car middle line
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.67f, -0.79f+cy);
    glVertex2f(0.67f, -0.81f+cy);
    glVertex2f(0.695f, -0.81f+cy);
    glVertex2f(0.693f, -0.79f+cy);
    glEnd();

    glBegin(GL_QUADS);/// white car up body
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.46f, -0.7f+cy);
    glVertex2f(0.41f, -0.77f+cy);
    glVertex2f(0.65f, -0.77f+cy);
    glVertex2f(0.62f, -0.7f+cy);
    glEnd();

    glBegin(GL_QUADS);/// cyan car up body
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex2f(0.465f, -0.715f+cy);
    glVertex2f(0.42f, -0.77f+cy);
    glVertex2f(0.52f, -0.77f+cy);
    glVertex2f(0.52f, -0.715f+cy);
    glEnd();

    glBegin(GL_QUADS);/// cyan car up body
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex2f(0.53f, -0.715f+cy);
    glVertex2f(0.53f, -0.77f+cy);
    glVertex2f(0.64f, -0.77f+cy);
    glVertex2f(0.615f, -0.715f+cy);
    glEnd();

    ///Wheel
    glScalef(0.2,0.2,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.1,0.1,0.1);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.28;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+3.03,y-2.95);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.5,0.5,0.5);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.20;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+3.03,y-2.95);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.1,0.1,0.1);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.28;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+2.23,y-2.95);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.5,0.5,0.5);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.20;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+2.23,y-2.95);
    }
    glEnd();
    glLoadIdentity();
}

void updateVehicals(int value)                  ///AFID-7
{
if (public_bus_position>=2.5)
    {
        public_bus_position=-1;
    }
    public_bus_position+=public_bus_speed;
    if (r_l_train_position>=2.5)
    {
        r_l_train_position=-1;
    }
    r_l_train_position+=r_l_train_speed;
if (l_r_train_position>=2.5)
    {
        l_r_train_position=-1;
    }
    l_r_train_position+=l_r_train_speed;
    if (ambulance_position>=2.5)
    {
        ambulance_position=-1;
    }
    ambulance_position+=ambulance_speed;

    if (police_car_position>=2.5)
    {
        police_car_position=-1;
    }
    police_car_position+=police_car_speed;

    if (suv_car_position>=3.5)
    {
        suv_car_position=-0.2;
    }
    suv_car_position+=suv_car_speed;

    if (car_position>=3.5)
    {
        car_position=-1.2;
    }
    car_position+=car_speed;

    glutPostRedisplay();
    glutTimerFunc(30, updateVehicals, 0);
}
float rainPosition=1;
float rainSpeed=0.02;
float icePosition=1;
float iceSpeed=0.02;




void warehouse()                            ///OID-26
{
    ///Top
    glBegin(GL_TRIANGLES);
    glColor3ub(155,155,255);
    glVertex2f(0.75,0.6);
    glColor3ub(55,55,255);
    glVertex2f(0.93, 0.7);
    glVertex2f(1.15,0.6);
    glEnd();
    ///Body
    glBegin(GL_QUADS);
    glColor3ub(55,55,55);
    glVertex2f(0.75,0.4);
    glColor3ub(204,204,204);
    glVertex2f(0.75, 0.6);
    glVertex2f(1.0,0.6);
    glVertex2f(1.0,0.4);
    glEnd();
    ///Door
    glBegin(GL_QUADS);
    glColor3ub(00,00,00);
    glVertex2f(0.8,0.4);
    glColor3ub(0,0,0);
    glVertex2f(0.8, 0.57);
    glVertex2f(1.0,0.57);
    glVertex2f(1.0,0.4);
    glEnd();
}


///-------------------------------------------------2nd--------------------------------------------------------------//////



void rain(float x_axis, float y_axis)
{
    glLineWidth(1);
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2f(0+x_axis,0+y_axis);
    glVertex2f(0.01+x_axis, 0.06+y_axis);
    glEnd();
}
void rain_fall()
{
    glPushMatrix();
    glTranslatef(0, rainPosition, 0);
    for(float x=-1; x<=1; x+=0.04)
    {
        for(float y=-1; y<=1; y+=0.1)
        {
            rain(x,y);
            rain(x,y+1.0);
            rain(x,y-1.0);
        }
    }
    glPopMatrix();
}

void snow_fall()
{
    glPushMatrix();
    glTranslatef(0,icePosition, 0);
    for(float x=-0.95; x<=1; x+=0.1)
    {
        glPointSize(4.0);
        glColor3f(1,1,1);
        glBegin(GL_POINTS);
        for(float y=-1; y<=1; y+=0.1)
        {
            glVertex2f(0.0+x, -1.0+y);
            glVertex2f(0.0+x, 0.0+y);
            glVertex2f(0.0+x, 1.0+y);
        }
        glEnd();
    }
    glPopMatrix();
}


void weather_update(int value)          ///AFID-9
{
    rainPosition-=rainSpeed;
    if(rainPosition<-1.0)
    {
        rainPosition=1;
    }

    icePosition-=iceSpeed;
    if(icePosition<-1.0)
    {
        icePosition=1;
    }

    glutPostRedisplay();
    glutTimerFunc(60, weather_update, 0);
}




void day_Display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); /// Set background color to white
    glClear(GL_COLOR_BUFFER_BIT);       /// Clear the color buffer (background)


    sky();
    buildings();
    buildings1();
    r_l_train();
    l_r_train();
    Wire();
    bridge_wirepillar();
    bridge();
    road_border();
    p_fence() ;
    pillar();
    road1();
    public_bus();
    road_marking();
    river();
    flow();
    ships();
    speed_boat();
    fence();
    road();
    footpath();
    tree();
    bench();
    lamp_post();
    ambulance();
    car();
    policeCar();
    warehouse();



    glFlush();  /// Render now
}
///-------------------------------------------------------------------------------------------------------------------------------------------------------------------
