#include <GL/freeglut.h>
#include <cmath>
#include <math.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <MMSystem.h> 
#include <tchar.h> 
#include <Windows.h>
#define MAX_CHAR 128

using namespace std;
GLuint blueMilk;
void ini_blue_milk() {
	blueMilk = glGenLists(1);
	glNewList(blueMilk, GL_COMPILE);
	glColor3f(120.0f / 255.0f, 171.0f / 255.0f, 200.0f / 255.0f);
	glBegin(GL_TRIANGLE_STRIP);

	glVertex2i(0 + 63, 0 + 77);
	glVertex2i(0 + 65, 0 + 78);
	glVertex2i(0 + 60, 0 + 74);
	glVertex2i(0 + 65, 0 + 82);
	glVertex2i(0 + 59, 0 + 72);
	glVertex2i(0 + 64, 0 + 85);
	glVertex2i(0 + 58, 0 + 70);
	glVertex2i(0 + 62, 0 + 87);
	glVertex2i(0 + 56, 0 + 69);
	glVertex2i(0 + 62, 0 + 87);
	glVertex2i(0 + 53, 0 + 69);
	glVertex2i(0 + 62, 0 + 87);
	glVertex2i(0 + 51, 0 + 67);
	glVertex2i(0 + 62, 0 + 87);
	glVertex2i(0 + 51, 0 + 74);
	glVertex2i(0 + 62, 0 + 87);
	glVertex2i(0 + 53, 0 + 78);
	glVertex2i(0 + 65, 0 + 90);
	glVertex2i(0 + 52, 0 + 79);
	glVertex2i(0 + 65, 0 + 95);
	glVertex2i(0 + 48, 0 + 77);
	glVertex2i(0 + 61, 0 + 98);
	glVertex2i(0 + 48, 0 + 81);
	glVertex2i(0 + 58, 0 + 99);
	glVertex2i(0 + 46, 0 + 80);
	glVertex2i(0 + 39, 0 + 99);
	glVertex2i(0 + 44, 0 + 76);
	glVertex2i(0 + 36, 0 + 89);
	glVertex2i(0 + 42, 0 + 71);
	glVertex2i(0 + 36, 0 + 89);
	glVertex2i(0 + 38, 0 + 67);
	glVertex2i(0 + 36, 0 + 89);
	glVertex2i(0 + 37, 0 + 69);
	glVertex2i(0 + 36, 0 + 89);
	glVertex2i(0 + 34, 0 + 70);
	glVertex2i(0 + 35, 0 + 86);
	glVertex2i(0 + 33, 0 + 74);
	glVertex2i(0 + 31, 0 + 80);
	glVertex2i(0 + 31, 0 + 75);
	glVertex2i(0 + 31, 0 + 75);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(0 + 39, 0 + 99);
	glVertex2i(0 + 37, 0 + 98);
	glVertex2i(0 + 34, 0 + 95);
	glVertex2i(0 + 34, 0 + 91);
	glVertex2i(0 + 36, 0 + 89);
	glEnd();

	//OutLine
	glLineWidth(1.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2i(0 + 32, 0 + 8);
	glVertex2i(0 + 35, 0 + 6);
	glVertex2i(0 + 39, 0 + 4);
	glVertex2i(0 + 42, 0 + 3);
	glVertex2i(0 + 43, 0 + 2);
	glVertex2i(0 + 57, 0 + 2);
	glVertex2i(0 + 61, 0 + 3);
	glVertex2i(0 + 64, 0 + 4);
	glVertex2i(0 + 70, 0 + 9);
	glVertex2i(0 + 70, 0 + 23);
	glVertex2i(0 + 69, 0 + 46);
	glVertex2i(0 + 68, 0 + 66);
	glVertex2i(0 + 67, 0 + 75);

	glVertex2i(0 + 65, 0 + 78);
	glVertex2i(0 + 65, 0 + 82);
	glVertex2i(0 + 64, 0 + 85);
	glVertex2i(0 + 62, 0 + 87);
	glVertex2i(0 + 65, 0 + 90);
	glVertex2i(0 + 65, 0 + 95);
	glVertex2i(0 + 61, 0 + 98);
	glVertex2i(0 + 58, 0 + 99);
	glVertex2i(0 + 39, 0 + 99);
	glVertex2i(0 + 37, 0 + 98);
	glVertex2i(0 + 34, 0 + 95);
	glVertex2i(0 + 34, 0 + 91);
	glVertex2i(0 + 36, 0 + 89);
	glVertex2i(0 + 35, 0 + 86);
	glVertex2i(0 + 31, 0 + 80);
	glVertex2i(0 + 31, 0 + 75);

	glVertex2i(0 + 30, 0 + 74);
	glVertex2i(0 + 30, 0 + 25);
	glVertex2i(0 + 31, 0 + 22);
	glVertex2i(0 + 31, 0 + 8);
	glVertex2i(0 + 32, 0 + 8);
	glEnd();

	glColor3f(84.0f / 255.0f, 141.0f / 255.0f, 186.0f / 255.0f);
	glLineWidth(5.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2i(0 + 60, 0 + 96);
	glVertex2i(0 + 57, 0 + 95);
	glVertex2i(0 + 52, 0 + 94);
	glVertex2i(0 + 42, 0 + 94);
	glVertex2i(0 + 38, 0 + 95);
	glEnd();

	glLineWidth(5.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2i(0 + 58, 0 + 88);
	glVertex2i(0 + 55, 0 + 87);
	glVertex2i(0 + 49, 0 + 86);
	glVertex2i(0 + 44, 0 + 87);
	glVertex2i(0 + 41, 0 + 88);
	glEnd();

	glColor3f(0.0f / 255.0f, 0.0f / 255.0f, 0.0f / 255.0f);
	glLineWidth(1.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2i(0 + 60, 0 + 96);
	glVertex2i(0 + 57, 0 + 95);
	glVertex2i(0 + 52, 0 + 94);
	glVertex2i(0 + 42, 0 + 94);
	glVertex2i(0 + 38, 0 + 95);
	glEnd();

	glLineWidth(1.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2i(0 + 58, 0 + 88);
	glVertex2i(0 + 55, 0 + 87);
	glVertex2i(0 + 49, 0 + 86);
	glVertex2i(0 + 44, 0 + 87);
	glVertex2i(0 + 41, 0 + 88);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(1.0f);
	glBegin(GL_LINES);
	glVertex2i(0 + 59, 0 + 92);
	glVertex2i(0 + 59, 0 + 90);

	glVertex2i(0 + 52, 0 + 91);
	glVertex2i(0 + 53, 0 + 89);

	glVertex2i(0 + 59, 0 + 92);
	glVertex2i(0 + 59, 0 + 90);

	glVertex2i(0 + 38, 0 + 93);
	glVertex2i(0 + 39, 0 + 90);

	glVertex2i(0 + 38, 0 + 84);
	glVertex2i(0 + 34, 0 + 79);

	glVertex2i(0 + 43, 0 + 83);
	glVertex2i(0 + 38, 0 + 72);

	glVertex2i(56, 84);
	glVertex2i(55, 73);
	glEnd();

	glColor3f(120.0f / 255.0f, 171.0f / 255.0f, 200.0f / 255.0f);
	glBegin(GL_QUAD_STRIP);
	glVertex2i(0 + 68, 0 + 55);
	glVertex2i(0 + 69, 0 + 36);
	glVertex2i(0 + 63, 0 + 52);
	glVertex2i(0 + 53, 0 + 33);
	glVertex2i(0 + 55, 0 + 50);
	glVertex2i(0 + 55, 0 + 31);
	glVertex2i(0 + 48, 0 + 49);
	glVertex2i(0 + 48, 0 + 30);
	glVertex2i(0 + 41, 0 + 50);
	glVertex2i(0 + 41, 0 + 31);
	glVertex2i(0 + 36, 0 + 51);
	glVertex2i(0 + 36, 0 + 32);
	glVertex2i(0 + 30, 0 + 54);
	glVertex2i(0 + 30, 0 + 35);
	glEnd();

	glLineWidth(2.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2i(0 + 33, 0 + 39);
	glVertex2i(0 + 37, 0 + 45);
	glVertex2i(0 + 38, 0 + 39);
	glVertex2i(0 + 41, 0 + 45);
	glVertex2i(0 + 43, 0 + 38);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2i(0 + 50, 0 + 45);
	glVertex2i(0 + 46, 0 + 45);
	glVertex2i(0 + 48, 0 + 45);
	glVertex2i(0 + 48, 0 + 45);
	glVertex2i(0 + 48, 0 + 38);
	glVertex2i(0 + 50, 0 + 38);
	glVertex2i(0 + 46, 0 + 38);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2i(0 + 53, 0 + 45);
	glVertex2i(0 + 53, 0 + 37);
	glVertex2i(0 + 58, 0 + 39);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2i(0 + 60, 0 + 46);
	glVertex2i(0 + 61, 0 + 41);
	glVertex2i(0 + 65, 0 + 46);
	glVertex2i(0 + 62, 0 + 42);
	glVertex2i(0 + 66, 0 + 39);
	glVertex2i(0 + 62, 0 + 42);
	glVertex2i(0 + 62, 0 + 37);
	glEnd();
	glEndList();

}
void DrawBlueMilk(int startX, int startY)
{
	glPushMatrix();
	glTranslatef(startX, startY, 0);
	glLineWidth(1.0);
	glCallList(blueMilk);
	glPopMatrix();
}
GLuint redMilk;
void ini_red_milk() {
	redMilk = glGenLists(1);
	glNewList(redMilk, GL_COMPILE);
	glColor3f(259 / 255.0f, 128.0f / 255.0f, 128.0f / 255.0f);
	glBegin(GL_TRIANGLE_STRIP);

	glVertex2i(0 + 63, 0 + 77);
	glVertex2i(0 + 65, 0 + 78);
	glVertex2i(0 + 60, 0 + 74);
	glVertex2i(0 + 65, 0 + 82);
	glVertex2i(0 + 59, 0 + 72);
	glVertex2i(0 + 64, 0 + 85);
	glVertex2i(0 + 58, 0 + 70);
	glVertex2i(0 + 62, 0 + 87);
	glVertex2i(0 + 56, 0 + 69);
	glVertex2i(0 + 62, 0 + 87);
	glVertex2i(0 + 53, 0 + 69);
	glVertex2i(0 + 62, 0 + 87);
	glVertex2i(0 + 51, 0 + 67);
	glVertex2i(0 + 62, 0 + 87);
	glVertex2i(0 + 51, 0 + 74);
	glVertex2i(0 + 62, 0 + 87);
	glVertex2i(0 + 53, 0 + 78);
	glVertex2i(0 + 65, 0 + 90);
	glVertex2i(0 + 52, 0 + 79);
	glVertex2i(0 + 65, 0 + 95);
	glVertex2i(0 + 48, 0 + 77);
	glVertex2i(0 + 61, 0 + 98);
	glVertex2i(0 + 48, 0 + 81);
	glVertex2i(0 + 58, 0 + 99);
	glVertex2i(0 + 46, 0 + 80);
	glVertex2i(0 + 39, 0 + 99);
	glVertex2i(0 + 44, 0 + 76);
	glVertex2i(0 + 36, 0 + 89);
	glVertex2i(0 + 42, 0 + 71);
	glVertex2i(0 + 36, 0 + 89);
	glVertex2i(0 + 38, 0 + 67);
	glVertex2i(0 + 36, 0 + 89);
	glVertex2i(0 + 37, 0 + 69);
	glVertex2i(0 + 36, 0 + 89);
	glVertex2i(0 + 34, 0 + 70);
	glVertex2i(0 + 35, 0 + 86);
	glVertex2i(0 + 33, 0 + 74);
	glVertex2i(0 + 31, 0 + 80);
	glVertex2i(0 + 31, 0 + 75);
	glVertex2i(0 + 31, 0 + 75);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(0 + 39, 0 + 99);
	glVertex2i(0 + 37, 0 + 98);
	glVertex2i(0 + 34, 0 + 95);
	glVertex2i(0 + 34, 0 + 91);
	glVertex2i(0 + 36, 0 + 89);
	glEnd();

	//OutLine
	glLineWidth(1.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2i(0 + 32, 0 + 8);
	glVertex2i(0 + 35, 0 + 6);
	glVertex2i(0 + 39, 0 + 4);
	glVertex2i(0 + 42, 0 + 3);
	glVertex2i(0 + 43, 0 + 2);
	glVertex2i(0 + 57, 0 + 2);
	glVertex2i(0 + 61, 0 + 3);
	glVertex2i(0 + 64, 0 + 4);
	glVertex2i(0 + 70, 0 + 9);
	glVertex2i(0 + 70, 0 + 23);
	glVertex2i(0 + 69, 0 + 46);
	glVertex2i(0 + 68, 0 + 66);
	glVertex2i(0 + 67, 0 + 75);

	glVertex2i(0 + 65, 0 + 78);
	glVertex2i(0 + 65, 0 + 82);
	glVertex2i(0 + 64, 0 + 85);
	glVertex2i(0 + 62, 0 + 87);
	glVertex2i(0 + 65, 0 + 90);
	glVertex2i(0 + 65, 0 + 95);
	glVertex2i(0 + 61, 0 + 98);
	glVertex2i(0 + 58, 0 + 99);
	glVertex2i(0 + 39, 0 + 99);
	glVertex2i(0 + 37, 0 + 98);
	glVertex2i(0 + 34, 0 + 95);
	glVertex2i(0 + 34, 0 + 91);
	glVertex2i(0 + 36, 0 + 89);
	glVertex2i(0 + 35, 0 + 86);
	glVertex2i(0 + 31, 0 + 80);
	glVertex2i(0 + 31, 0 + 75);

	glVertex2i(0 + 30, 0 + 74);
	glVertex2i(0 + 30, 0 + 25);
	glVertex2i(0 + 31, 0 + 22);
	glVertex2i(0 + 31, 0 + 8);
	glVertex2i(0 + 32, 0 + 8);
	glEnd();

	glColor3f(246.0f / 255.0f, 68.0f / 255.0f, 68.0f / 255.0f);
	glLineWidth(5.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2i(0 + 60, 0 + 96);
	glVertex2i(0 + 57, 0 + 95);
	glVertex2i(0 + 52, 0 + 94);
	glVertex2i(0 + 42, 0 + 94);
	glVertex2i(0 + 38, 0 + 95);
	glEnd();

	glLineWidth(5.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2i(0 + 58, 0 + 88);
	glVertex2i(0 + 55, 0 + 87);
	glVertex2i(0 + 49, 0 + 86);
	glVertex2i(0 + 44, 0 + 87);
	glVertex2i(0 + 41, 0 + 88);
	glEnd();

	glColor3f(0.0f / 255.0f, 0.0f / 255.0f, 0.0f / 255.0f);
	glLineWidth(1.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2i(0 + 60, 0 + 96);
	glVertex2i(0 + 57, 0 + 95);
	glVertex2i(0 + 52, 0 + 94);
	glVertex2i(0 + 42, 0 + 94);
	glVertex2i(0 + 38, 0 + 95);
	glEnd();

	glLineWidth(1.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2i(0 + 58, 0 + 88);
	glVertex2i(0 + 55, 0 + 87);
	glVertex2i(0 + 49, 0 + 86);
	glVertex2i(0 + 44, 0 + 87);
	glVertex2i(0 + 41, 0 + 88);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(1.0f);
	glBegin(GL_LINES);
	glVertex2i(0 + 59, 0 + 92);
	glVertex2i(0 + 59, 0 + 90);

	glVertex2i(0 + 52, 0 + 91);
	glVertex2i(0 + 53, 0 + 89);

	glVertex2i(0 + 59, 0 + 92);
	glVertex2i(0 + 59, 0 + 90);

	glVertex2i(0 + 38, 0 + 93);
	glVertex2i(0 + 39, 0 + 90);

	glVertex2i(0 + 38, 0 + 84);
	glVertex2i(0 + 34, 0 + 79);

	glVertex2i(0 + 43, 0 + 83);
	glVertex2i(0 + 38, 0 + 72);

	glVertex2i(56, 84);
	glVertex2i(55, 73);
	glEnd();

	glColor3f(259 / 255.0f, 128.0f / 255.0f, 128.0f / 255.0f);
	glBegin(GL_QUAD_STRIP);
	glVertex2i(0 + 68, 0 + 55);
	glVertex2i(0 + 69, 0 + 36);
	glVertex2i(0 + 63, 0 + 52);
	glVertex2i(0 + 53, 0 + 33);
	glVertex2i(0 + 55, 0 + 50);
	glVertex2i(0 + 55, 0 + 31);
	glVertex2i(0 + 48, 0 + 49);
	glVertex2i(0 + 48, 0 + 30);
	glVertex2i(0 + 41, 0 + 50);
	glVertex2i(0 + 41, 0 + 31);
	glVertex2i(0 + 36, 0 + 51);
	glVertex2i(0 + 36, 0 + 32);
	glVertex2i(0 + 30, 0 + 54);
	glVertex2i(0 + 30, 0 + 35);
	glEnd();

	glLineWidth(2.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2i(0 + 33, 0 + 39);
	glVertex2i(0 + 37, 0 + 45);
	glVertex2i(0 + 38, 0 + 39);
	glVertex2i(0 + 41, 0 + 45);
	glVertex2i(0 + 43, 0 + 38);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2i(0 + 50, 0 + 45);
	glVertex2i(0 + 46, 0 + 45);
	glVertex2i(0 + 48, 0 + 45);
	glVertex2i(0 + 48, 0 + 45);
	glVertex2i(0 + 48, 0 + 38);
	glVertex2i(0 + 50, 0 + 38);
	glVertex2i(0 + 46, 0 + 38);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2i(0 + 53, 0 + 45);
	glVertex2i(0 + 53, 0 + 37);
	glVertex2i(0 + 58, 0 + 39);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2i(0 + 60, 0 + 46);
	glVertex2i(0 + 61, 0 + 41);
	glVertex2i(0 + 65, 0 + 46);
	glVertex2i(0 + 62, 0 + 42);
	glVertex2i(0 + 66, 0 + 39);
	glVertex2i(0 + 62, 0 + 42);
	glVertex2i(0 + 62, 0 + 37);
	glEnd();
	glEndList();
}
void DrawRedMilk(int startX, int startY)
{
	glPushMatrix();
	glTranslatef(startX, startY, 0);
	glLineWidth(1.0);
	glCallList(redMilk);
	glPopMatrix();
}
const float pi = 3.1415926;

GLuint theFace, theEyes, theMouth, theEars, theBread, theBody, theHands, theTail, theFish;
GLuint theFaceColor, theEarsColor, theBodyColor, theTailColor;

static void face(float  x, float y)
{
	x = x + 50.0;
	y = y + 56.0;

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 100; i++)
	{
		glVertex2f(x + 32 * cos(2 * pi / 100 * i), y + 32 * sin(2 * pi / 100 * i));
	}
	glEnd();
}

static void faceColor(float  x, float y)
{
	x = x + 50.0;
	y = y + 56.0;

	glBegin(GL_POLYGON);
	for (int i = 0; i < 100; i++)
	{
		glVertex2f(x + 32 * cos(2 * pi / 100 * i), y + 32 * sin(2 * pi / 100 * i));
	}
	glEnd();
}

static void eyes(float  x, float y)
{
	float tmpX = x, tmpY = y;

	x = x + 32.0;
	y = y + 64.0;

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 100; i++)
	{
		glVertex2f(x + 2.5 * cos(2 * pi / 100 * i), y + 5 * sin(2 * pi / 100 * i));
	}
	glEnd();

	x = tmpX + 69.2;
	y = tmpY + 64.0;

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 100; i++)
	{
		glVertex2f(x + 2.5 * cos(2 * pi / 100 * i), y + 5 * sin(2 * pi / 100 * i));
	}
	glEnd();
}

static void mouth(float  x, float y)
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2f(x + 51.2, y + 60.4);
	glVertex2f(x + 47.6, y + 52);

	glVertex2f(x + 49.6, y + 57);
	glVertex2f(x + 53.6, y + 52.8);
	glEnd();
}

static void ears(float  x, float y)
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(x + 38.8, y + 84);
	glVertex2f(x + 33.2, y + 93.6);
	glVertex2f(x + 26, y + 78.4);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(x + 61.7, y + 84);
	glVertex2f(x + 69.3, y + 93.6);
	glVertex2f(x + 73.7, y + 78.4);
	glEnd();
}

static void earsColor(float  x, float y)
{
	glBegin(GL_POLYGON);
	glVertex2f(x + 38.8, y + 84);
	glVertex2f(x + 33.2, y + 93.6);
	glVertex2f(x + 26, y + 78.4);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(x + 61.7, y + 84);
	glVertex2f(x + 69.3, y + 93.6);
	glVertex2f(x + 73.7, y + 78.4);
	glEnd();
}

static void bread(float  x, float y)
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2f(x + 22.4, y + 54.8);
	glVertex2f(x + 12, y + 53.2);

	glVertex2f(x + 22, y + 48);
	glVertex2f(x + 14, y + 46.4);

	glVertex2f(x + 79.0, y + 54.4);
	glVertex2f(x + 87.0, y + 53.2);

	glVertex2f(x + 79.5, y + 49.2);
	glVertex2f(x + 86.3, y + 48);
	glEnd();
}

static void body(float  x, float y)
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(x + 33.6, y + 39.6 - 2);
	glVertex2f(x + 33.6, y + 13.6 - 2);
	glVertex2f(x + 34, y + 10.4 - 2);
	glVertex2f(x + 34.8, y + 8 - 2);
	glVertex2f(x + 35.6, y + 6.4 - 2);
	glVertex2f(x + 36.8, y + 5.2 - 2);
	glVertex2f(x + 37.6, y + 4.4 - 2);
	glVertex2f(x + 38.4, y + 5.2 - 2);
	glVertex2f(x + 39.2, y + 6.4 - 2);
	glVertex2f(x + 39.6, y + 8 - 2);
	glVertex2f(x + 40.4, y + 9.6 - 2);
	glVertex2f(x + 60.4, y + 9.6 - 2);
	glVertex2f(x + 61.6, y + 8.4 - 2);
	glVertex2f(x + 62, y + 7.2 - 2);
	glVertex2f(x + 62.8, y + 6 - 2);
	glVertex2f(x + 63.6, y + 5.2 - 2);
	glVertex2f(x + 64, y + 4.8 - 2);
	glVertex2f(x + 64.4, y + 5.2 - 2);
	glVertex2f(x + 65.2, y + 6 - 2);
	glVertex2f(x + 66, y + 7.2 - 2);
	glVertex2f(x + 67.2, y + 10.4 - 2 - 2);
	glVertex2f(x + 67.6, y + 13.6 - 2);
	glVertex2f(x + 67.6, y + 39.6 - 2);
	glEnd();
}

static void bodyColor(float  x, float y)
{
	glBegin(GL_POLYGON);
	glVertex2f(x + 33.6, y + 39.6 - 2);
	glVertex2f(x + 33.6, y + 13.6 - 2);
	glVertex2f(x + 34, y + 10.4 - 2);
	glVertex2f(x + 34.8, y + 8 - 2);
	glVertex2f(x + 35.6, y + 6.4 - 2);
	glVertex2f(x + 36.8, y + 5.2 - 2);
	glVertex2f(x + 37.6, y + 4.4 - 2);
	glVertex2f(x + 38.4, y + 5.2 - 2);
	glVertex2f(x + 39.2, y + 6.4 - 2);
	glVertex2f(x + 39.6, y + 8 - 2);
	glVertex2f(x + 40.4, y + 9.6 - 2);
	glVertex2f(x + 60.4, y + 9.6 - 2);
	glVertex2f(x + 61.6, y + 8.4 - 2);
	glVertex2f(x + 62, y + 7.2 - 2);
	glVertex2f(x + 62.8, y + 6 - 2);
	glVertex2f(x + 63.6, y + 5.2 - 2);
	glVertex2f(x + 64, y + 4.8 - 2);
	glVertex2f(x + 64.4, y + 5.2 - 2);
	glVertex2f(x + 65.2, y + 6 - 2);
	glVertex2f(x + 66, y + 7.2 - 2);
	glVertex2f(x + 67.2, y + 10.4 - 2 - 2);
	glVertex2f(x + 67.6, y + 13.6 - 2);
	glVertex2f(x + 67.6, y + 39.6 - 2);
	glEnd();
}

static void hands(float  x, float y)
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(x + 36.4, y + 32.4 - 5);
	glVertex2f(x + 41.6, y + 27.6 - 5);
	glVertex2f(x + 42.8, y + 25.6 - 5);
	glVertex2f(x + 43.6, y + 23.6 - 5);
	glVertex2f(x + 43.2, y + 20.4 - 5);
	glVertex2f(x + 41.6, y + 19.2 - 5);
	glVertex2f(x + 39.2, y + 20 - 5);
	glVertex2f(x + 37.6, y + 21.6 - 5);
	glVertex2f(x + 36, y + 23.6 - 5);
	glVertex2f(x + 35.6, y + 26 - 5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(x + 36.4 + 28, y + 32.4 - 5);
	glVertex2f(x + 41.6 + 28 - 5.2 * 2, y + 27.6 - 5);
	glVertex2f(x + 42.8 + 28 - 6.4 * 2, y + 25.6 - 5);
	glVertex2f(x + 43.6 + 28 - 7.2 * 2, y + 23.6 - 5);
	glVertex2f(x + 43.2 + 28 - 6.8 * 2, y + 20.4 - 5);
	glVertex2f(x + 41.6 + 28 - 5.2 * 2, y + 19.2 - 5);
	glVertex2f(x + 39.2 + 28 - 2.8 * 2, y + 20 - 5);
	glVertex2f(x + 37.6 + 28 - 1.2 * 2, y + 21.6 - 5);
	glVertex2f(x + 36 + 28 + 0.4 * 2, y + 23.6 - 5);
	glVertex2f(x + 35.6 + 28 + 0.8 * 2, y + 26 - 5);
	glEnd();
}

static void tail(float  x, float y)
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(x + 34, y + 19.6);
	glVertex2f(x + 31.6, y + 22.4);
	glVertex2f(x + 23.2, y + 34.8);
	glVertex2f(x + 21.6, y + 35.6);
	glVertex2f(x + 19.6, y + 36);
	glVertex2f(x + 18, y + 34.4);
	glVertex2f(x + 18.4, y + 31.6);
	glVertex2f(x + 18.8, y + 30);
	glVertex2f(x + 22.4, y + 24);
	glVertex2f(x + 26, y + 19.6);
	glVertex2f(x + 32.4, y + 15.6);
	glVertex2f(x + 34.4, y + 14.8);
	glEnd();
}

static void tailColor(float  x, float y)
{
	glBegin(GL_POLYGON);
	glVertex2f(x + 34, y + 19.6);
	glVertex2f(x + 31.6, y + 22.4);
	glVertex2f(x + 23.2, y + 34.8);
	glVertex2f(x + 21.6, y + 35.6);
	glVertex2f(x + 19.6, y + 36);
	glVertex2f(x + 18, y + 34.4);
	glVertex2f(x + 18.4, y + 31.6);
	glVertex2f(x + 18.8, y + 30);
	glVertex2f(x + 22.4, y + 24);
	glVertex2f(x + 26, y + 19.6);
	glVertex2f(x + 32.4, y + 15.6);
	glVertex2f(x + 34.4, y + 14.8);
	glEnd();
}

static void fish(float  x, float y)
{
	glColor3f(0.2773, 0.9531, 0.2421);
	glBegin(GL_POLYGON);
	glVertex2f(x + 53.6, y + 23.2 - 8);
	glVertex2f(x + 52.4, y + 25.2 - 8);
	glVertex2f(x + 50.4, y + 26.8 - 8);
	glVertex2f(x + 48.4, y + 28.4 - 8);
	glVertex2f(x + 46.4, y + 28.8 - 8);
	glVertex2f(x + 44.4, y + 28.8 - 8);
	glVertex2f(x + 42.8, y + 28 - 8);
	glVertex2f(x + 42, y + 26.4 - 8);
	glVertex2f(x + 41.6, y + 23.6 - 8);
	glVertex2f(x + 42.4, y + 21.2 - 8);
	glVertex2f(x + 43.6, y + 19.2 - 8);
	glVertex2f(x + 45.6, y + 18 - 8);
	glVertex2f(x + 48.8, y + 18 - 8);
	glVertex2f(x + 50.8, y + 19.2 - 8);
	glVertex2f(x + 52.8, y + 21.2 - 8);
	glVertex2f(x + 53.6, y + 23.2 - 8);
	glVertex2f(x + 55.2, y + 27.6 - 8);
	glVertex2f(x + 56, y + 28.8 - 8);
	glVertex2f(x + 57.6, y + 28.8 - 8);
	glVertex2f(x + 60, y + 26.4 - 8);
	glVertex2f(x + 60, y + 23.2 - 8);
	glVertex2f(x + 58.8, y + 21.6 - 8);
	glVertex2f(x + 57.6, y + 20.4 - 8);
	glVertex2f(x + 55.6, y + 20.8 - 8);
	glVertex2f(x + 54, y + 22.4 - 8);
	glVertex2f(x + 53.6, y + 23.2 - 8);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(x + 53.6, y + 23.2 - 8);
	glVertex2f(x + 52.4, y + 25.2 - 8);
	glVertex2f(x + 50.4, y + 26.8 - 8);
	glVertex2f(x + 48.4, y + 28.4 - 8);
	glVertex2f(x + 46.4, y + 28.8 - 8);
	glVertex2f(x + 44.4, y + 28.8 - 8);
	glVertex2f(x + 42.8, y + 28 - 8);
	glVertex2f(x + 42, y + 26.4 - 8);
	glVertex2f(x + 41.6, y + 23.6 - 8);
	glVertex2f(x + 42.4, y + 21.2 - 8);
	glVertex2f(x + 43.6, y + 19.2 - 8);
	glVertex2f(x + 45.6, y + 18 - 8);
	glVertex2f(x + 48.8, y + 18 - 8);
	glVertex2f(x + 50.8, y + 19.2 - 8);
	glVertex2f(x + 52.8, y + 21.2 - 8);
	glVertex2f(x + 53.6, y + 23.2 - 8);
	glVertex2f(x + 55.2, y + 27.6 - 8);
	glVertex2f(x + 56, y + 28.8 - 8);
	glVertex2f(x + 57.6, y + 28.8 - 8);
	glVertex2f(x + 60, y + 26.4 - 8);
	glVertex2f(x + 60, y + 23.2 - 8);
	glVertex2f(x + 58.8, y + 21.6 - 8);
	glVertex2f(x + 57.6, y + 20.4 - 8);
	glVertex2f(x + 55.6, y + 20.8 - 8);
	glVertex2f(x + 54, y + 22.4 - 8);
	glVertex2f(x + 53.6, y + 23.2 - 8);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 100; i++)
	{
		glVertex2f(x + 45.2 + 1 * cos(2 * pi / 100 * i), y + 23.2 - 8 + 1 * sin(2 * pi / 100 * i));
	}
	glEnd();
}

GLuint catNormal;
void ini_cat_normal() {
	catNormal = glGenLists(1);
	glNewList(catNormal, GL_COMPILE);
	glLineWidth(1.0);
	glColor3f(1.0, 1.0, 1.0);
	bodyColor(0, 0);
	body(0, 0);
	hands(0, 0);
	glColor3f(1.0, 1.0, 1.0);
	tailColor(0, 0);
	tail(0, 0);
	glColor3f(1.0, 1.0, 1.0);
	earsColor(0, 0);
	ears(0, 0);
	glColor3f(1.0, 1.0, 1.0);
	faceColor(0, 0);
	face(0, 0);
	eyes(0, 0);
	mouth(0, 0);
	bread(0, 0);
	glEndList();
}
void cat_normal(float x, float y)
{
	glPushMatrix();
	glTranslatef(x, y, 0);
	glLineWidth(1.0);
	glCallList(catNormal);
	glPopMatrix();
}

GLuint catRed;
void ini_cat_red() {
	catRed = glGenLists(1);
	glNewList(catRed, GL_COMPILE);
	glLineWidth(1.0);
	glColor3f(1.0156, 0.50196, 0.5019);
	tailColor(0, 0);
	tail(0, 0);
	glColor3f(1.0156, 0.50196, 0.5019);
	bodyColor(0, 0);
	body(0, 0);
	hands(0, 0);
	glColor3f(1.0156, 0.50196, 0.5019);
	earsColor(0, 0);
	ears(0, 0);
	glColor3f(1.0156, 0.50196, 0.5019);
	faceColor(0, 0);
	face(0, 0);
	eyes(0, 0);
	mouth(0, 0);
	bread(0, 0);
	glEndList();
}
void cat_red(float x, float y)
{
	glPushMatrix();
	glTranslatef(x, y, 0);
	glLineWidth(1.0);
	glCallList(catRed);
	glPopMatrix();
}


GLuint catBlue;
void ini_cat_blue() {
	catBlue = glGenLists(1);
	glNewList(catBlue, GL_COMPILE);
	glLineWidth(1.0);
	glColor3f(0.4705, 0.6705, 0.7843);
	tailColor(0, 0);
	tail(0, 0);
	glColor3f(0.4705, 0.6705, 0.7843);
	bodyColor(0, 0);
	body(0, 0);
	hands(0, 0);
	glColor3f(0.4705, 0.6705, 0.7843);
	earsColor(0, 0);
	ears(0, 0);
	glColor3f(0.4705, 0.6705, 0.7843);
	faceColor(0, 0);
	face(0, 0);
	eyes(0, 0);
	mouth(0, 0);
	bread(0, 0);
	glEndList();
}
void cat_blue(float x, float y)
{
	glPushMatrix();
	glTranslatef(x, y, 0);
	glLineWidth(1.0);
	glCallList(catBlue);
	glPopMatrix();
}

GLuint catFish;
void ini_cat_fish() {
	catFish = glGenLists(1);
	glNewList(catFish, GL_COMPILE);
	glLineWidth(1.0);
	glColor3f(1.0, 1.0, 1.0);
	tailColor(0, 0);
	tail(0, 0);
	glColor3f(1.0, 1.0, 1.0);
	bodyColor(0, 0);
	body(0, 0);
	hands(0, 0);
	fish(0, 0);
	glColor3f(1.0, 1.0, 1.0);
	earsColor(0, 0);
	ears(0, 0);
	glColor3f(1.0, 1.0, 1.0);
	faceColor(0, 0);
	face(0, 0);
	eyes(0, 0);
	mouth(0, 0);
	bread(0, 0);
	glEndList();
}
void cat_fish(float x, float y)
{
	glPushMatrix();
	glTranslatef(x, y, 0);
	glLineWidth(1.0);
	glCallList(catFish);
	glPopMatrix();
}

GLuint catRedFish;
void ini_cat_red_fish() {
	catRedFish = glGenLists(1);
	glNewList(catRedFish, GL_COMPILE);
	glLineWidth(1.0);
	glColor3f(1.0156, 0.50196, 0.5019);
	tailColor(0, 0);
	tail(0, 0);
	glColor3f(1.0156, 0.50196, 0.5019);
	bodyColor(0, 0);
	body(0, 0);
	hands(0, 0);
	glColor3f(1.0156, 0.50196, 0.5019);
	earsColor(0, 0);
	ears(0, 0);
	glColor3f(1.0156, 0.50196, 0.5019);
	faceColor(0, 0);
	face(0, 0);
	eyes(0, 0);
	mouth(0, 0);
	bread(0, 0);
	fish(0, 0);

	glEndList();
}
void cat_red_fish(float x, float y)
{
	glPushMatrix();
	glTranslatef(x, y, 0);
	glLineWidth(1.0);
	glCallList(catRedFish);
	glPopMatrix();
}

GLuint catBlueFish;
void ini_cat_blue_fish() {
	catBlueFish = glGenLists(1);
	glNewList(catBlueFish, GL_COMPILE);
	glLineWidth(1.0);
	glColor3f(0.4705, 0.6705, 0.7843);
	tailColor(0, 0);
	tail(0, 0);
	glColor3f(0.4705, 0.6705, 0.7843);
	bodyColor(0, 0);
	body(0, 0);
	hands(0, 0);
	fish(0, 0);
	glColor3f(0.4705, 0.6705, 0.7843);
	earsColor(0, 0);
	ears(0, 0);
	glColor3f(0.4705, 0.6705, 0.7843);
	faceColor(0, 0);
	face(0, 0);
	eyes(0, 0);
	mouth(0, 0);
	bread(0, 0);
	glEndList();
}
void cat_blue_fish(float x, float y)
{
	glPushMatrix();
	glTranslatef(x, y, 0);
	glLineWidth(1.0);
	glCallList(catBlueFish);
	glPopMatrix();
}

static void fishBody(float  x, float y)
{
	glColor3f(0.0, 0.0, 0.0);
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(x + 62, y + 46);
	glVertex2f(x + 58, y + 52);
	glVertex2f(x + 52, y + 58);
	glVertex2f(x + 44, y + 66);
	glVertex2f(x + 34, y + 72);
	glVertex2f(x + 24, y + 74);
	glVertex2f(x + 16, y + 72);
	glVertex2f(x + 8, y + 70);
	glVertex2f(x + 4, y + 64);
	glVertex2f(x + 2, y + 50);
	glVertex2f(x + 4, y + 38);
	glVertex2f(x + 8, y + 32);
	glVertex2f(x + 16, y + 24);
	glVertex2f(x + 24, y + 20);
	glVertex2f(x + 32, y + 18);
	glVertex2f(x + 38, y + 20);
	glVertex2f(x + 46, y + 24);
	glVertex2f(x + 56, y + 32);
	glVertex2f(x + 60, y + 38);
	glVertex2f(x + 62, y + 46);
	glVertex2f(x + 66, y + 56);
	glVertex2f(x + 70, y + 66);
	glVertex2f(x + 74, y + 72);
	glVertex2f(x + 78, y + 74);
	glVertex2f(x + 82, y + 72);
	glVertex2f(x + 90, y + 66);
	glVertex2f(x + 94, y + 58);
	glVertex2f(x + 96, y + 50);
	glVertex2f(x + 94, y + 44);
	glVertex2f(x + 90, y + 38);
	glVertex2f(x + 82, y + 34);
	glVertex2f(x + 80, y + 32);
	glVertex2f(x + 76, y + 34);
	glVertex2f(x + 70, y + 38);
	glVertex2f(x + 64, y + 44);
	glVertex2f(x + 62, y + 46);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 100; i++)
	{
		glVertex2f(x + 20 + 5 * cos(2 * pi / 100 * i), y + 48 + 5 * sin(2 * pi / 100 * i));
	}
	glEnd();
}

static void fishColor(float  x, float y)
{
	glBegin(GL_POLYGON);
	glVertex2f(x + 62, y + 46);
	glVertex2f(x + 58, y + 52);
	glVertex2f(x + 52, y + 58);
	glVertex2f(x + 44, y + 66);
	glVertex2f(x + 34, y + 72);
	glVertex2f(x + 24, y + 74);
	glVertex2f(x + 16, y + 72);
	glVertex2f(x + 8, y + 70);
	glVertex2f(x + 4, y + 64);
	glVertex2f(x + 2, y + 50);
	glVertex2f(x + 4, y + 38);
	glVertex2f(x + 8, y + 32);
	glVertex2f(x + 16, y + 24);
	glVertex2f(x + 24, y + 20);
	glVertex2f(x + 32, y + 18);
	glVertex2f(x + 38, y + 20);
	glVertex2f(x + 46, y + 24);
	glVertex2f(x + 56, y + 32);
	glVertex2f(x + 60, y + 38);
	glVertex2f(x + 62, y + 46);
	glVertex2f(x + 66, y + 56);
	glVertex2f(x + 70, y + 66);
	glVertex2f(x + 74, y + 72);
	glVertex2f(x + 78, y + 74);
	glVertex2f(x + 82, y + 72);
	glVertex2f(x + 90, y + 66);
	glVertex2f(x + 94, y + 58);
	glVertex2f(x + 96, y + 50);
	glVertex2f(x + 94, y + 44);
	glVertex2f(x + 90, y + 38);
	glVertex2f(x + 82, y + 34);
	glVertex2f(x + 80, y + 32);
	glVertex2f(x + 76, y + 34);
	glVertex2f(x + 70, y + 38);
	glVertex2f(x + 64, y + 44);
	glVertex2f(x + 62, y + 46);
	glEnd();
}

void fish_normal(float x, float y)
{
	glColor3f(0.2656, 0.7773, 0.2187);
	fishColor(x, y);
	fishBody(x, y);
}

GLuint theRoof, theRoofColor, theHouseBody, theHouseBodyColor, theWindow, theWindowColor, theDoor, theDoorColor;

static void roof(float  x, float y)
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(x + 51.3, y + 90);
	glVertex2f(x + 8, y + 50);
	glVertex2f(x + 11.3, y + 47.3);
	glVertex2f(x + 51.3, y + 83);
	glVertex2f(x + 86, y + 47.3);
	glVertex2f(x + 90.6, y + 50);
	glVertex2f(x + 51.3, y + 90);
	glEnd();
}

static void roofColor(float  x, float y)
{
	glBegin(GL_POLYGON);
	glVertex2f(x + 51.3, y + 90);
	glVertex2f(x + 8, y + 50);
	glVertex2f(x + 11.3, y + 47.3);
	glVertex2f(x + 51.3, y + 83);
	glVertex2f(x + 86, y + 47.3);
	glVertex2f(x + 90.6, y + 50);
	glVertex2f(x + 51.3, y + 90);
	glEnd();
}

static void HouseBody(float  x, float y)
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(x + 19.3, y + 56.6);
	glVertex2f(x + 19.3, y + 12);
	glVertex2f(x + 78, y + 12);
	glVertex2f(x + 78, y + 56.6);
	glVertex2f(x + 51.3, y + 86);
	glEnd();
}

static void HouseBodyColor(float  x, float y)
{
	glBegin(GL_POLYGON);
	glVertex2f(x + 19.3, y + 56.6);
	glVertex2f(x + 19.3, y + 12);
	glVertex2f(x + 78, y + 12);
	glVertex2f(x + 78, y + 56.6);
	glVertex2f(x + 51.3, y + 86);
	glEnd();
}

static void window(float  x, float y)
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 100; i++)
	{
		glVertex2f(x + 51.3 + 10 * cos(2 * pi / 100 * i), y + 60.6 + 10 * sin(2 * pi / 100 * i));
	}
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2f(x + 51.3, y + 69.3);
	glVertex2f(x + 51.3, y + 53.3);

	glVertex2f(x + 57.3, y + 60.6);
	glVertex2f(x + 42.6, y + 60.6);
	glEnd();
}

static void windowColor(float  x, float y)
{
	glBegin(GL_POLYGON);
	for (int i = 0; i < 100; i++)
	{
		glVertex2f(x + 51.3 + 10 * cos(2 * pi / 100 * i), y + 60.6 + 10 * sin(2 * pi / 100 * i));
	}
	glEnd();
}

static void door(float  x, float y)
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 51; i++)
	{
		glVertex2f(x + 51.3 + 12 * cos(2 * pi / 100 * i), y + 12 + 24 * sin(2 * pi / 100 * i));
	}
	glEnd();
}

static void doorColor(float  x, float y)
{
	glBegin(GL_POLYGON);
	for (int i = 0; i < 51; i++)
	{
		glVertex2f(x + 51.3 + 12 * cos(2 * pi / 100 * i), y + 12 + 24 * sin(2 * pi / 100 * i));
	}
	glEnd();
}

void house_normal(float x, float y)
{
	glLineWidth(1.0);
	glColor3f(1.0, 1.0, 1.0);
	HouseBodyColor(x, y);
	HouseBody(x, y);
	glColor3f(1.0, 1.0, 1.0);
	roofColor(x, y);
	roof(x, y);
	glColor3f(1.0, 1.0, 1.0);
	windowColor(x, y);
	window(x, y);
	glColor3f(1.0, 1.0, 1.0);
	doorColor(x, y);
	door(x, y);
}

void house_get_fish(float x, float y)
{
	glLineWidth(1.0);
	glColor3f(0.5, 0.8164, 0.5195);
	HouseBodyColor(x, y);
	HouseBody(x, y);
	glColor3f(0.4648, 0.9960, 0.3203);
	roofColor(x, y);
	roof(x, y);
	glColor3f(0.3203, 0.9726, 0.9960);
	windowColor(x, y);
	window(x, y);
	glColor3f(0.0898, 0.4179, 0.0);
	doorColor(x, y);
	door(x, y);
}



GLuint theFence, theFenceColor, theDot, theDotColor, theBack, theBackColor;

static void fence(float  x, float y)
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(x + 16 + 6, y + 88.2);
	glVertex2f(x + 7.2 + 6, y + 77.6);
	glVertex2f(x + 7.2 + 6, y + 12.6);
	glVertex2f(x + 24.6 + 6, y + 12.6);
	glVertex2f(x + 24.6 + 6, y + 77.6);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(x + 49.6, y + 88.2);
	glVertex2f(x + 40.8, y + 77.6);
	glVertex2f(x + 40.8, y + 12.6);
	glVertex2f(x + 58.6, y + 12.6);
	glVertex2f(x + 58.6, y + 77.6);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(x + 82.6 - 6, y + 88.2);
	glVertex2f(x + 73.8 - 6, y + 77.6);
	glVertex2f(x + 73.8 - 6, y + 12.6);
	glVertex2f(x + 91.2 - 6, y + 12.6);
	glVertex2f(x + 91.2 - 6, y + 77.6);
	glEnd();
}

static void fenceColor(float  x, float y)
{
	glBegin(GL_POLYGON);
	glVertex2f(x + 16 + 6, y + 88.2);
	glVertex2f(x + 7.2 + 6, y + 77.6);
	glVertex2f(x + 7.2 + 6, y + 12.6);
	glVertex2f(x + 24.6 + 6, y + 12.6);
	glVertex2f(x + 24.6 + 6, y + 77.6);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(x + 49.6, y + 88.2);
	glVertex2f(x + 40.8, y + 77.6);
	glVertex2f(x + 40.8, y + 12.6);
	glVertex2f(x + 58.6, y + 12.6);
	glVertex2f(x + 58.6, y + 77.6);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(x + 82.6 - 6, y + 88.2);
	glVertex2f(x + 73.8 - 6, y + 77.6);
	glVertex2f(x + 73.8 - 6, y + 12.6);
	glVertex2f(x + 91.2 - 6, y + 12.6);
	glVertex2f(x + 91.2 - 6, y + 77.6);
	glEnd();
}

static void dot(float  x, float y)
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 100; i++)
	{
		glVertex2f(x + 16 + 6 + 3 * cos(2 * pi / 100 * i), y + 62.2 + 3 * sin(2 * pi / 100 * i));
	}
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 100; i++)
	{
		glVertex2f(x + 16 + 6 + 3 * cos(2 * pi / 100 * i), y + 27 + 3 * sin(2 * pi / 100 * i));
	}
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 100; i++)
	{
		glVertex2f(x + 49.6 + 3 * cos(2 * pi / 100 * i), y + 62.2 + 3 * sin(2 * pi / 100 * i));
	}
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 100; i++)
	{
		glVertex2f(x + 49.6 + 3 * cos(2 * pi / 100 * i), y + 27 + 3 * sin(2 * pi / 100 * i));
	}
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 100; i++)
	{
		glVertex2f(x + 82.6 - 6 + 3 * cos(2 * pi / 100 * i), y + 62.2 + 3 * sin(2 * pi / 100 * i));
	}
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 100; i++)
	{
		glVertex2f(x + 82.6 - 6 + 3 * cos(2 * pi / 100 * i), y + 27 + 3 * sin(2 * pi / 100 * i));
	}
	glEnd();
}

static void dotColor(float  x, float y)
{
	glBegin(GL_POLYGON);
	for (int i = 0; i < 100; i++)
	{
		glVertex2f(x + 16 + 6 + 3 * cos(2 * pi / 100 * i), y + 62.2 + 3 * sin(2 * pi / 100 * i));
	}
	glEnd();

	glBegin(GL_POLYGON);
	for (int i = 0; i < 100; i++)
	{
		glVertex2f(x + 16 + 6 + 3 * cos(2 * pi / 100 * i), y + 27 + 3 * sin(2 * pi / 100 * i));
	}
	glEnd();

	glBegin(GL_POLYGON);
	for (int i = 0; i < 100; i++)
	{
		glVertex2f(x + 49.6 + 3 * cos(2 * pi / 100 * i), y + 62.2 + 3 * sin(2 * pi / 100 * i));
	}
	glEnd();

	glBegin(GL_POLYGON);
	for (int i = 0; i < 100; i++)
	{
		glVertex2f(x + 49.6 + 3 * cos(2 * pi / 100 * i), y + 27 + 3 * sin(2 * pi / 100 * i));
	}
	glEnd();

	glBegin(GL_POLYGON);
	for (int i = 0; i < 100; i++)
	{
		glVertex2f(x + 82.6 - 6 + 3 * cos(2 * pi / 100 * i), y + 62.2 + 3 * sin(2 * pi / 100 * i));
	}
	glEnd();

	glBegin(GL_POLYGON);
	for (int i = 0; i < 100; i++)
	{
		glVertex2f(x + 82.6 - 6 + 3 * cos(2 * pi / 100 * i), y + 27 + 3 * sin(2 * pi / 100 * i));
	}
	glEnd();
}

static void back(float  x, float y)
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(x + 1.4, y + 68.6);
	glVertex2f(x + 1.4, y + 55.8);
	glVertex2f(x + 97.2, y + 55.8);
	glVertex2f(x + 97.2, y + 68.6);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(x + 1.4, y + 34.2);
	glVertex2f(x + 1.4, y + 21.2);
	glVertex2f(x + 97.2, y + 21.2);
	glVertex2f(x + 97.2, y + 34.2);
	glEnd();
}

static void backColor(float  x, float y)
{
	glBegin(GL_POLYGON);
	glVertex2f(x + 1.4, y + 68.6);
	glVertex2f(x + 1.4, y + 55.8);
	glVertex2f(x + 97.2, y + 55.8);
	glVertex2f(x + 97.2, y + 68.6);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(x + 1.4, y + 34.2);
	glVertex2f(x + 1.4, y + 21.2);
	glVertex2f(x + 97.2, y + 21.2);
	glVertex2f(x + 97.2, y + 34.2);
	glEnd();
}

static void fence_clear(float  x, float y)
{
	glBegin(GL_LINES);
	glVertex2f(x + 16 + 6, y + 88.2);
	glVertex2f(x + 11.4 + 6, y + 83);
	glVertex2f(x + 7.2 + 6, y + 77.6);
	glVertex2f(x + 7.2 + 6, y + 50.6);
	glVertex2f(x + 7.2 + 6, y + 45.6);
	glVertex2f(x + 7.2 + 6, y + 30.6);
	glVertex2f(x + 7.2 + 6, y + 25.6);
	glVertex2f(x + 7.2 + 6, y + 12.6);
	glVertex2f(x + 7.2 + 6, y + 12.6);
	glVertex2f(x + 14.2 + 6, y + 12.6);
	glVertex2f(x + 19.2 + 6, y + 12.6);
	glVertex2f(x + 24.6 + 6, y + 12.6);
	glVertex2f(x + 24.6 + 6, y + 12.6);
	glVertex2f(x + 24.6 + 6, y + 25.6);
	glVertex2f(x + 24.6 + 6, y + 30.6);
	glVertex2f(x + 24.6 + 6, y + 45.6);
	glVertex2f(x + 24.6 + 6, y + 50.6);
	glVertex2f(x + 24.6 + 6, y + 77.6);
	glVertex2f(x + 20.6 + 6, y + 83);
	glVertex2f(x + 16 + 6, y + 88.2);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(x + 49.6, y + 88.2);
	glVertex2f(x + 45, y + 83);
	glVertex2f(x + 40.8, y + 77.6);
	glVertex2f(x + 40.8, y + 50.6);
	glVertex2f(x + 40.8, y + 45.6);
	glVertex2f(x + 40.8, y + 30.6);
	glVertex2f(x + 40.8, y + 25.6);
	glVertex2f(x + 40.8, y + 12.6);
	glVertex2f(x + 40.8, y + 12.6);
	glVertex2f(x + 47.8, y + 12.6);
	glVertex2f(x + 52.8, y + 12.6);
	glVertex2f(x + 58.6, y + 12.6);
	glVertex2f(x + 58.6, y + 12.6);
	glVertex2f(x + 58.6, y + 25.6);
	glVertex2f(x + 58.6, y + 30.6);
	glVertex2f(x + 58.6, y + 45.6);
	glVertex2f(x + 58.6, y + 50.6);
	glVertex2f(x + 58.6, y + 77.6);
	glVertex2f(x + 54.2, y + 83);
	glVertex2f(x + 49.6, y + 88.2);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(x + 82.6 - 6, y + 88.2);
	glVertex2f(x + 78 - 6, y + 83);
	glVertex2f(x + 73.8 - 6, y + 77.6);
	glVertex2f(x + 73.8 - 6, y + 50.6);
	glVertex2f(x + 73.8 - 6, y + 45.6);
	glVertex2f(x + 73.8 - 6, y + 30.6);
	glVertex2f(x + 73.8 - 6, y + 25.6);
	glVertex2f(x + 73.8 - 6, y + 12.6);
	glVertex2f(x + 73.8 - 6, y + 12.6);
	glVertex2f(x + 80.2 - 6, y + 12.6);
	glVertex2f(x + 85.2 - 6, y + 12.6);
	glVertex2f(x + 91.2 - 6, y + 12.6);
	glVertex2f(x + 91.2 - 6, y + 12.6);
	glVertex2f(x + 91.2 - 6, y + 25.6);
	glVertex2f(x + 91.2 - 6, y + 30.6);
	glVertex2f(x + 91.2 - 6, y + 45.6);
	glVertex2f(x + 91.2 - 6, y + 50.6);
	glVertex2f(x + 91.2 - 6, y + 77.6);
	glVertex2f(x + 87 - 6, y + 83);
	glVertex2f(x + 82.6 - 6, y + 88.2);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(x + 1.4, y + 68.6);
	glVertex2f(x + 1.4, y + 63.8);
	glVertex2f(x + 1.4, y + 61.6);
	glVertex2f(x + 1.4, y + 55.8);

	glVertex2f(x + 1.4, y + 55.8);
	glVertex2f(x + 10.0, y + 55.8);


	glVertex2f(x + 33.6, y + 55.8);
	glVertex2f(x + 38.6, y + 55.8);

	glVertex2f(x + 60.6, y + 55.8);
	glVertex2f(x + 65.0, y + 55.8);

	glVertex2f(x + 88.8, y + 55.8);
	glVertex2f(x + 97.2, y + 55.8);

	glVertex2f(x + 97.2, y + 55.8);
	glVertex2f(x + 97.2, y + 61.6);
	glVertex2f(x + 97.2, y + 63.8);
	glVertex2f(x + 97.2, y + 68.6);

	glVertex2f(x + 1.4, y + 68.6);
	glVertex2f(x + 10.0, y + 68.6);

	glVertex2f(x + 33.6, y + 68.6);
	glVertex2f(x + 38.6, y + 68.6);

	glVertex2f(x + 60.6, y + 68.6);
	glVertex2f(x + 65.0, y + 68.6);

	glVertex2f(x + 88.8, y + 68.6);
	glVertex2f(x + 97.2, y + 68.6);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(x + 1.4, y + 34.2);
	glVertex2f(x + 1.4, y + 29.4);
	glVertex2f(x + 1.4, y + 27.2);
	glVertex2f(x + 1.4, y + 21.2);

	glVertex2f(x + 1.4, y + 21.2);
	glVertex2f(x + 10.0, y + 21.2);

	glVertex2f(x + 33.6, y + 21.2);
	glVertex2f(x + 38.6, y + 21.2);

	glVertex2f(x + 60.6, y + 21.2);
	glVertex2f(x + 65.0, y + 21.2);

	glVertex2f(x + 88.8, y + 21.2);
	glVertex2f(x + 97.2, y + 21.2);

	glVertex2f(x + 97.2, y + 21.2);
	glVertex2f(x + 97.2, y + 27.2);
	glVertex2f(x + 97.2, y + 29.4);
	glVertex2f(x + 97.2, y + 34.2);

	glVertex2f(x + 1.4, y + 34.2);
	glVertex2f(x + 10.0, y + 34.2);

	glVertex2f(x + 33.6, y + 34.2);
	glVertex2f(x + 38.6, y + 34.2);

	glVertex2f(x + 60.6, y + 34.2);
	glVertex2f(x + 65.0, y + 34.2);

	glVertex2f(x + 88.8, y + 34.2);
	glVertex2f(x + 97.2, y + 34.2);
	glEnd();
}


GLuint fenceNormal;
void ini_fence_normal() {
	fenceNormal = glGenLists(1);
	glNewList(fenceNormal, GL_COMPILE);
	glColor3f(0.7382, 0.4179, 0.0);
	backColor(0, 0);
	back(0, 0);
	glColor3f(0.9960, 0.8515, 0.5585);
	fenceColor(0, 0);
	fence(0, 0);
	glColor3f(0.7382, 0.4179, 0.0);
	dotColor(0, 0);
	dot(0, 0);
	glEndList();
}

void fence_normal(float x, float y)
{
	glPushMatrix();
	glTranslatef(x, y, 0);
	glLineWidth(1.0);
	glCallList(fenceNormal);
	glPopMatrix();
}


GLuint fenceRed;
void ini_fence_red() {
	fenceRed = glGenLists(1);
	glNewList(fenceRed, GL_COMPILE);
	glColor3f(1.0156, 0.50196, 0.5019);
	backColor(0, 0);
	back(0, 0);
	glColor3f(1.0156, 0.50196, 0.5019);
	fenceColor(0, 0);
	fence(0, 0);
	glColor3f(0.6562, 0.0117, 0.0);
	dotColor(0, 0);
	dot(0, 0);
	glEndList();
}
void fence_red(float x, float y)
{
	glPushMatrix();
	glTranslatef(x, y, 0);
	glLineWidth(1.0);
	glCallList(fenceRed);
	glPopMatrix();

}
void fence_blue(float x, float y)
{
	glColor3f(0.4705, 0.6705, 0.7843);
	backColor(x, y);

	back(x, y);

	glColor3f(0.4705, 0.6705, 0.7843);
	fenceColor(x, y);

	fence(x, y);


	glColor3f(0.0, 0.4705, 0.6562);
	dotColor(x, y);

	dot(x, y);

}


GLuint fenceNotuGrey;
void ini_fence_notu_grey() {
	fenceNotuGrey = glGenLists(1);
	glNewList(fenceNotuGrey, GL_COMPILE);
	glColor3f(0.8671, 0.8671, 0.8671);
	backColor(0, 0);
	back(0, 0);
	glColor3f(0.8671, 0.8671, 0.8671);
	fenceColor(0, 0);
	fence(0, 0);
	glColor3f(0.5, 0.5, 0.5);
	dotColor(0, 0);
	dot(0, 0);
	glEndList();
}
void fence_notu_grey(float x, float y)
{
	glPushMatrix();
	glTranslatef(x, y, 0);
	glLineWidth(1.0);
	glCallList(fenceNotuGrey);
	glPopMatrix();
}

GLuint fenceTuBlack;
void ini_fence_tu_black() {
	fenceTuBlack = glGenLists(1);
	glNewList(fenceTuBlack, GL_COMPILE);
	glColor3f(0.3007, 0.3007, 0.3007);
	backColor(0, 0);
	back(0, 0);
	glColor3f(0.3007, 0.3007, 0.3007);
	fenceColor(0, 0);
	fence(0, 0);
	glColor3f(1.0, 1.0, 1.0);
	dotColor(0, 0);
	dot(0, 0);
	glEndList();
}
void fence_tu_black(float x, float y)
{
	glPushMatrix();
	glTranslatef(x, y, 0);
	glLineWidth(1.0);
	glCallList(fenceTuBlack);
	glPopMatrix();
}

void fence_red_clear(float x, float y)
{
	glColor3f(259.0 / 255.0, 68.0 / 255.0, 68.0 / 255.0);
	fence_clear(x, y);
	glColor3f(0.6562, 0.0117, 0.0);
	dotColor(x, y);
}

void fence_blue_clear(float x, float y)
{
	glColor3f(120.0 / 255.0, 171.0 / 255.0, 200.0 / 255.0);
	fence_clear(x, y);

	glColor3f(0.0, 0.4705, 0.6562);
	dotColor(x, y);
}

// 以上都是繪製的圖形

const int boxSize = 100;
const int winWid = 1280;
const int winHgt = 800;
float scaleWeight = 1.7;
const int mapRowSize = 13;
const int mapColSize = 17;
bool isAnimateTF = false;

struct Color
{
	double r, g, b;
	Color(double r, double g, double b) {
		this->r = r;
		this->g = g;
		this->b = b;
	}
};

double degreeToRadian(double angle) {
	return angle * 2 * 3.14159265358979323846 / 360;
}

struct Point {
	float x;
	float y;
	Point(float x, float y) {
		this->x = x;
		this->y = y;
	}
};

void drawLine(int sx, int sy, int ex, int ey, Color color)
{
	glColor3f(color.r, color.g, color.b);
	glBegin(GL_LINES);
	glVertex2i(sx, sy);
	glVertex2i(ex, ey);
	glEnd();

}

vector<Point> drawRegularPolygon(int circleX, int circleY, int radius, Color color, int sideNum) {
	int angle = 360 / sideNum;
	int curAngle = 0;
	std::vector<Point> pVec;
	for (int i = 0; i < sideNum; i++)
	{
		double radian = degreeToRadian(curAngle);
		Point eP(circleX + radius * cos(radian), circleY + radius * sin(radian));
		pVec.push_back(eP);
		//drawLine(circleX, circleY, eP.x, eP.y, color);
		curAngle += angle;
	}

	for (int i = 0; i < pVec.size() - 1; i++)
	{
		drawLine(pVec[i].x, pVec[i].y, pVec[i + 1].x, pVec[i + 1].y, color);
	}
	drawLine(pVec[pVec.size() - 1].x, pVec[pVec.size() - 1].y, pVec[0].x, pVec[0].y, color);
	return pVec;
}



void drawBox(int column, int row, Color color) {
	glBegin(GL_POLYGON);
	glColor3d(color.r, color.g, color.b);
	glVertex2f(column * boxSize, row * boxSize);
	glVertex2f(column * boxSize + boxSize, row * boxSize);
	glVertex2f(column * boxSize + boxSize, row * boxSize + boxSize);
	glVertex2f(column * boxSize, row * boxSize + boxSize);
	glEnd();
}

void drawBoxFrame(int column, int row, Color color) {
	glBegin(GL_LINE_LOOP);
	glColor3d(color.r, color.g, color.b);
	glVertex2f(column * boxSize, row * boxSize);
	glVertex2f(column * boxSize + boxSize, row * boxSize);
	glVertex2f(column * boxSize + boxSize, row * boxSize + boxSize);
	glVertex2f(column * boxSize, row * boxSize + boxSize);
	glEnd();
}

void drawBoxByPos(int x, int y, Color color) {
	glBegin(GL_POLYGON);
	glColor3d(color.r, color.g, color.b);
	glVertex2f(x, y);
	glVertex2f(x + boxSize, y);
	glVertex2f(x + boxSize, y + boxSize);
	glVertex2f(x, y + boxSize);
	glEnd();
}

void drawBoxFrameByPos(int x, int y, Color color) {
	glBegin(GL_LINE_LOOP);
	glColor3d(color.r, color.g, color.b);
	glVertex2f(x, y);
	glVertex2f(x + boxSize, y);
	glVertex2f(x + boxSize, y + boxSize);
	glVertex2f(x, y + boxSize);
	glEnd();
}

void drawCircleBox(int column, int row, Color color) {
	drawRegularPolygon(column * boxSize + boxSize / 2, row * boxSize + boxSize / 2, boxSize / 2, color, 60);
}

void fillCircleBox(int column, int row, Color color) {
	vector<Point> pVec = drawRegularPolygon(column * boxSize + boxSize / 2, row * boxSize + boxSize / 2, boxSize / 2, color, 60);
	glBegin(GL_POLYGON);
	for (int i = 0; i < pVec.size(); i++)
	{
		glVertex2d(pVec[i].x, pVec[i].y);
	}
	glEnd();
}

void fillCircleBoxByPos(int x, int y, Color color) {
	vector<Point> pVec = drawRegularPolygon(x + boxSize / 2, y + boxSize / 2, boxSize / 2, color, 60);
	glBegin(GL_POLYGON);
	for (int i = 0; i < pVec.size(); i++)
	{
		glVertex2d(pVec[i].x, pVec[i].y);
	}
	glEnd();
}

void setMap(int m[mapRowSize][mapColSize], int ToSetMap[mapRowSize][mapColSize]) {
	for (int i = 0; i < mapRowSize; i++)
	{
		for (int j = 0; j < mapColSize; j++)
		{
			m[i][j] = ToSetMap[i][j];
		}
	}
}



void winReshapeFcn(int left, int right, int bottom, int up)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(left, right, bottom, up);
	glClear(GL_COLOR_BUFFER_BIT);
}

int PlayerCurCol = 4;
int PlayerCurRow = 4;
int aniCurX = 0;
int aniCurY = 0;
int aniTargetX = 0;
int aniTargetY = 0;

// TIMELIFTS是會隨著時間升降的板塊；ROUNDLIFTS是會隨著回合升降的板塊
enum TileType { EMPTY, WALL, KEY, HOLE, BLUEBALL, BLUEAREA, REDBALL, REDAREA, TIMELIFTS, ROUNDLIFTS, ROUNDLIFTS2 };
bool eatKeyTF = false;
bool becomeBlueTF = false;
bool becomeRedTF = false;
int eatObjType = EMPTY;
int aniEatObjX = 0;
int aniEatObjY = 0;

struct LevelInfo {
	int map[mapRowSize][mapColSize];
	int playerIniCol;
	int playerIniRow;
	LevelInfo(int m[mapRowSize][mapColSize], int iniCol, int iniRow) {
		playerIniCol = iniCol;
		playerIniRow = iniRow;
		setMap(map, m);
	}
};

vector<LevelInfo> allLevelInfo;
int curLevel = 0;


// 在設定時要上下顛倒
int map[mapRowSize][mapColSize] =
{
  {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,1},
  {1,0,0,1,0,0,0,0,0,0,0,0,3,1,0,0,1},
  {1,0,0,1,0,0,0,0,0,0,0,0,1,1,0,0,1},
  {1,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,1},
  {1,0,0,1,0,0,0,0,0,0,0,0,1,1,0,0,1},
  {1,0,0,1,0,0,0,0,0,0,0,0,2,1,0,0,1},
  {1,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1} };



bool isUP_TF = true;
bool Round_lift_UP_TF = true;

void drawBoxByType(int col, int row, int objType) {
	switch (objType)
	{
	case WALL:
		fence_normal(col * boxSize, row * boxSize);
		break;
	case KEY:
		// drawBox(col, row, Color(1, 0.984313725490196, 0));
		// drawBoxFrame(col, row, Color(1, 0.984313725490196, 0));
		// fish(col * boxSize, row * boxSize);
		fish_normal(col * boxSize, row * boxSize);
		break;
	case HOLE:
		// 如果得到鑰匙，洞會打開
		if (eatKeyTF) {
			house_get_fish(col * boxSize, row * boxSize);
		}
		else {
			house_normal(col * boxSize, row * boxSize);
		}
		break;
	case BLUEBALL:
		DrawBlueMilk(col * boxSize, row * boxSize);
		break;
	case BLUEAREA:
		if (becomeBlueTF) {
			fence_blue_clear(col * boxSize, row * boxSize);
		}
		else {
			fence_blue(col * boxSize, row * boxSize);
		}
		break;
	case REDBALL:
		DrawRedMilk(col * boxSize, row * boxSize);
		break;
	case REDAREA:
		if (becomeRedTF) {
			fence_red_clear(col * boxSize, row * boxSize);
		}
		else {
			fence_red(col * boxSize, row * boxSize);
		}
		break;
	case TIMELIFTS:
		if (isUP_TF) {
			fence_tu_black(col * boxSize, row * boxSize);
		}
		else {
			fence_notu_grey(col * boxSize, row * boxSize);
		}
		break;
	case ROUNDLIFTS:
		if (Round_lift_UP_TF) {
			fence_tu_black(col * boxSize, row * boxSize);
		}
		else {
			fence_notu_grey(col * boxSize, row * boxSize);
		}
		break;
	case ROUNDLIFTS2:
		if (Round_lift_UP_TF) {
			fence_notu_grey(col * boxSize, row * boxSize);
		}
		else {
			fence_tu_black(col * boxSize, row * boxSize);
		}
		break;
	default:
		break;
	}
}

void drawByMap() {
	for (int i = 0; i < mapRowSize; i++)
	{
		for (int j = 0; j < mapColSize; j++)
		{
			drawBoxByType(j, i, map[i][j]);
		}
	}
}

void ChangeTimeLiftState(int) {
	if (curLevel == 6) {
		isUP_TF = !isUP_TF;
		glutTimerFunc(2000, ChangeTimeLiftState, 0);
	}
}

void toLevel(int levelNum) {
	if (levelNum > 0 && levelNum < allLevelInfo.size()) {
		curLevel = levelNum;
		setMap(map, allLevelInfo[curLevel].map);
		PlayerCurCol = allLevelInfo[curLevel].playerIniCol;
		PlayerCurRow = allLevelInfo[curLevel].playerIniRow;
		aniCurX = PlayerCurCol * boxSize;
		aniCurY = PlayerCurRow * boxSize;
		eatKeyTF = false;
		becomeBlueTF = false;
		becomeRedTF = false;
		if (curLevel == 6) {
			glutTimerFunc(1000, ChangeTimeLiftState, 0);
		}
	}
	else if (levelNum == allLevelInfo.size()) {
		cout << "complete all levels" << endl;
	}
}

void timer(int) {
	glutPostRedisplay();
	if (aniCurX != aniTargetX || aniCurY != aniTargetY) {
		int moveOffset = 13;
		if (aniCurY < aniTargetY) {
			aniCurY += moveOffset;
		}
		else if (aniCurY > aniTargetY) {
			aniCurY -= moveOffset;
		}
		if (aniCurX < aniTargetX) {
			aniCurX += moveOffset;
		}
		else if (aniCurX > aniTargetX) {
			aniCurX -= moveOffset;
		}
		if (abs(aniCurX - aniTargetX) <= moveOffset) {
			aniCurX = aniTargetX;
		}
		if (abs(aniCurY - aniTargetY) <= moveOffset) {
			aniCurY = aniTargetY;
		}
		glutTimerFunc(1000 / 60, timer, 0);
	}
	else {
		isAnimateTF = false;
		// 移動結束後確認目前位置是否在洞上，如果在洞上且洞打開，就會到下一關
		if (map[PlayerCurRow][PlayerCurCol] == HOLE && eatKeyTF) {
			cout << "win, go to next level" << endl;
			// 讓許多變數設為下一關應該有的東西
			toLevel(++curLevel);
		}
	}

	// cout << aniCurX << endl;
}

void eatAniTimer(int) {
	glutPostRedisplay();
	if (aniEatObjX != aniCurX || aniEatObjY != aniCurY) {
		int moveOffset = 10;
		if (aniEatObjY < aniCurY) {
			aniEatObjY += moveOffset;
		}
		else if (aniEatObjY > aniCurY) {
			aniEatObjY -= moveOffset;
		}
		if (aniEatObjX < aniCurX) {
			aniEatObjX += moveOffset;
		}
		else if (aniEatObjX > aniCurX) {
			aniEatObjX -= moveOffset;
		}
		if (abs(aniCurX - aniEatObjX) <= moveOffset) {
			aniCurX = aniEatObjX;
		}
		if (abs(aniCurY - aniEatObjY) <= moveOffset) {
			aniCurY = aniEatObjY;
		}
		glutTimerFunc(1000 / 60, eatAniTimer, 0);
	}
	else {
		isAnimateTF = false;
		eatObjType = EMPTY;
	}
}

void handleEatAni(int endColPos, int endRowPos, int objType) {
	isAnimateTF = true;
	aniEatObjX = endColPos * boxSize;
	aniEatObjY = endRowPos * boxSize;
	eatObjType = objType;
	glutTimerFunc(1000 / 200, eatAniTimer, 0);
}

void handleMove(int& endColPos, int& endRowPos, int offsetX, int offsetY) {

	Round_lift_UP_TF = !Round_lift_UP_TF;
	while (true)
	{
		if (offsetX > 0) {
			if (endColPos >= (scaleWeight * winWid / boxSize) - 1) {
				break;
			}
		}
		else if (offsetX < 0) {
			if (endColPos <= 0) {
				break;
			}
		}
		else if (offsetY > 0) {
			if (endRowPos >= (scaleWeight * winHgt / boxSize) - 1) {
				break;
			}
		}
		else if (offsetY < 0) {
			if (endRowPos <= 0) {
				break;
			}
		}

		if (map[endRowPos + offsetY][endColPos + offsetX] == WALL) {
			break;
		}
		if (map[endRowPos + offsetY][endColPos + offsetX] == BLUEAREA && !becomeBlueTF) {
			break;
		}
		if (map[endRowPos + offsetY][endColPos + offsetX] == REDAREA && !becomeRedTF) {
			break;
		}
		if (map[endRowPos + offsetY][endColPos + offsetX] == KEY) {
			map[endRowPos + offsetY][endColPos + offsetX] = 0;
			eatKeyTF = true;
			cout << "eat key : " << eatKeyTF << endl;
			handleEatAni(endColPos + offsetX, endRowPos + offsetY, KEY);
			// 回復到原本的位置
			endRowPos = PlayerCurRow;
			endColPos = PlayerCurCol;
			break;
		}
		else if (map[endRowPos + offsetY][endColPos + offsetX] == BLUEBALL) {
			map[endRowPos + offsetY][endColPos + offsetX] = 0;
			becomeBlueTF = true;
			becomeRedTF = false;
			cout << "becomeBlueTF : " << becomeBlueTF << endl;
			handleEatAni(endColPos + offsetX, endRowPos + offsetY, BLUEBALL);
			// 回復到原本的位置
			endRowPos = PlayerCurRow;
			endColPos = PlayerCurCol;
			break;
		}
		else if (map[endRowPos + offsetY][endColPos + offsetX] == REDBALL) {
			map[endRowPos + offsetY][endColPos + offsetX] = 0;
			becomeBlueTF = false;
			becomeRedTF = true;
			cout << "becomeRedTF : " << becomeRedTF << endl;
			handleEatAni(endColPos + offsetX, endRowPos + offsetY, REDBALL);
			// 回復到原本的位置
			endRowPos = PlayerCurRow;
			endColPos = PlayerCurCol;
			break;
		}
		else if (map[endRowPos + offsetY][endColPos + offsetX] == TIMELIFTS) {
			if (isUP_TF) {
				break;
			}
		}
		else if (map[endRowPos + offsetY][endColPos + offsetX] == ROUNDLIFTS) {
			if (Round_lift_UP_TF) {
				break;
			}
		}
		else if (map[endRowPos + offsetY][endColPos + offsetX] == ROUNDLIFTS2) {
			if (!Round_lift_UP_TF) {
				break;
			}
		}

		endRowPos += offsetY;
		endColPos += offsetX;
	}
}

void keyboardHandler(unsigned char key, int xmouse, int ymouse)
{
	// cout << "press " << key << endl;
	// 判斷的邏輯就是如果在移動的路徑上有東西可以吃就吃掉且在原地不移動，而沒東西就移動到碰到牆為止
	if (!isAnimateTF) {
		int endRowPos = PlayerCurRow;
		int endColPos = PlayerCurCol;
		switch (key) {
		case 'w':
		case 'W':
			handleMove(endColPos, endRowPos, 0, 1);
			break;
		case 'a':
		case 'A':
			handleMove(endColPos, endRowPos, -1, 0);
			break;
		case 's':
		case 'S':
			handleMove(endColPos, endRowPos, 0, -1);
			break;
		case 'd':
		case 'D':
			handleMove(endColPos, endRowPos, 1, 0);
			break;
		default:
			break;
		}
		if (PlayerCurCol != endColPos || PlayerCurRow != endRowPos) {
			aniTargetY = endRowPos * boxSize;
			aniTargetX = endColPos * boxSize;
			glutTimerFunc(100, timer, 0);
			PlayerCurCol = endColPos;
			PlayerCurRow = endRowPos;
			isAnimateTF = true;
		}
	}


	glutPostRedisplay();
}

void arrowKeysHandler(int key, int xmouse, int ymouse) 
{
	if (!isAnimateTF) {
		int endRowPos = PlayerCurRow;
		int endColPos = PlayerCurCol;
		switch (key) {
		case GLUT_KEY_UP:
			handleMove(endColPos, endRowPos, 0, 1);
			break;
		case GLUT_KEY_LEFT:
			handleMove(endColPos, endRowPos, -1, 0);
			break;
		case GLUT_KEY_DOWN:
			handleMove(endColPos, endRowPos, 0, -1);
			break;
		case GLUT_KEY_RIGHT:
			handleMove(endColPos, endRowPos, 1, 0);
			break;
		default:
			break;
		}
		if (PlayerCurCol != endColPos || PlayerCurRow != endRowPos) {
			aniTargetY = endRowPos * boxSize;
			aniTargetX = endColPos * boxSize;
			glutTimerFunc(100, timer, 0);
			PlayerCurCol = endColPos;
			PlayerCurRow = endRowPos;
			isAnimateTF = true;
		}
	}


	glutPostRedisplay();
}

void init(void)
{
	ini_fence_normal();
	ini_cat_normal();
	ini_cat_red();
	ini_cat_blue();
	ini_cat_fish();
	ini_cat_red_fish();
	ini_cat_blue_fish();
	ini_blue_milk();
	ini_red_milk();
	ini_fence_notu_grey();
	ini_fence_tu_black();
	ini_fence_red();
	/*  Set color of display window to white.  */
	glClearColor(0.8941176470588236, 0.9882352941176471, 0.8901960784313725, 0.0);
	// reference level 1
	allLevelInfo.push_back(LevelInfo(
		new int[mapRowSize][mapColSize]{
		  {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,1},
		  {1,0,0,1,0,0,0,0,0,0,0,0,3,1,0,0,1},
		  {1,0,0,1,0,0,0,0,0,0,0,0,1,1,0,0,1},
		  {1,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,1},
		  {1,0,0,1,0,0,0,0,0,0,0,0,1,1,0,0,1},
		  {1,0,0,1,0,0,0,0,0,0,0,0,2,1,0,0,1},
		  {1,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1} },
		  4,
		  4
		  ));
	// reference level 2
	allLevelInfo.push_back(LevelInfo(
		new int[mapRowSize][mapColSize]{
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
			{1,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1},
			{1,0,1,0,0,0,1,1,1,1,1,0,0,0,1,0,1},
			{1,0,1,3,0,0,0,0,0,0,0,0,0,0,1,0,1},
			{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,1,0,0,0,0,2,0,0,1},
			{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1},
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1} },
			7,
			1
			));

	// reference level 3
	allLevelInfo.push_back(LevelInfo(
		new int[mapRowSize][mapColSize]{
		  {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		  {1,1,1,0,0,0,0,1,1,1,0,0,0,0,1,1,1},
		  {1,1,1,0,0,0,0,1,1,1,0,0,0,0,1,1,1},
		  {1,1,4,0,0,0,0,0,1,0,0,0,0,0,0,1,1},
		  {1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,1,3,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,1,2,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1},
		  {1,1,0,0,0,0,0,0,5,0,0,0,0,0,0,1,1},
		  {1,1,1,0,0,0,0,1,1,1,0,0,0,0,1,1,1},
		  {1,1,1,0,0,0,0,1,1,1,0,0,0,0,1,1,1},
		  {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1} },
		  7,
		  9
		  ));

	// reference level 4
	allLevelInfo.push_back(LevelInfo(
		new int[mapRowSize][mapColSize]{
		  {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		  {1,1,1,0,0,0,0,1,1,1,0,0,0,0,1,1,1},
		  {1,1,3,0,0,0,0,0,1,6,0,0,0,0,0,1,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,1,0,0,0,0,0,0,5,0,0,0,0,0,0,1,1},
		  {1,1,1,0,0,0,0,7,1,5,0,0,0,0,1,1,1},
		  {1,1,0,0,0,0,0,0,7,0,0,0,0,0,0,1,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,1,2,0,0,0,0,0,1,4,0,0,0,0,0,1,1},
		  {1,1,1,0,0,0,0,1,1,1,0,0,0,0,1,1,1},
		  {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1} },
		  14,
		  10
		  ));

	// reference level 5
	allLevelInfo.push_back(LevelInfo(
		new int[mapRowSize][mapColSize]{
		  {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		  {1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1},
		  {1,7,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1},
		  {1,7,1,0,0,0,0,0,0,0,1,0,0,0,0,3,1},
		  {1,7,1,1,1,1,1,0,0,0,1,1,1,1,1,5,1},
		  {1,0,0,0,0,2,1,0,0,0,0,0,0,6,1,5,1},
		  {1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,5,1},
		  {1,0,0,0,0,0,1,4,0,0,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1} },
		  8,
		  6
		  ));
	// reference level 6
	allLevelInfo.push_back(LevelInfo(
		new int[mapRowSize][mapColSize]{
		  {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		  {1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1},
		  {1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,1},
		  {1,0,0,2,0,0,0,0,1,0,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
		  {1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1} },
		  8,
		  7
		  ));
	// reference level 7
	allLevelInfo.push_back(LevelInfo(
		new int[mapRowSize][mapColSize]{
		  {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		  {1,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,1},
		  {1,0,0,1,1,3,0,0,0,0,0,0,1,1,0,0,1},
		  {1,0,1,1,0,0,0,0,0,0,0,0,0,1,1,0,1},
		  {1,1,1,0,0,0,0,0,8,0,0,0,0,0,1,1,1},
		  {1,1,0,0,0,0,0,0,0,0,0,8,0,0,0,1,1},
		  {1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
		  {1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
		  {1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,1},
		  {1,0,1,1,1,0,0,0,0,0,0,0,0,1,1,0,1},
		  {1,0,0,1,1,0,0,0,0,0,0,2,1,1,0,0,1},
		  {1,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,1},
		  {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1} },
		  8,
		  6
		  ));

	// reference level 10
	allLevelInfo.push_back(LevelInfo(
		new int[mapRowSize][mapColSize]{
		  {1,1,1,1,1,1,1, 1, 1,1,1, 1,1,1,1,1,1},
		  {1,1,0,0,0,0,0, 0,9,0,0, 0,0,0,1,1,1},
		  {1,0,0,0,0,0,0, 0,9,0,0, 0,0,0,0,1,1},
		  {1,0,0,0,0,0,0, 0, 0,0,0, 0,10,0,0,0,1},
		  {1,0,0,0,0,0,0, 0, 0,0,0, 0,0,0,0,0,1},
		  {1,0,0,0,0,0,0, 0, 0,0,0,9,0,0,0,0,1},
		  {1,0,0,0,0,0,0,9, 0,0,0, 0,0,0,0,0,1},
		  {1,0,0,0,0,0,0, 0, 0,0,0, 10,0,0,0,0,1},
		  {1,0,0,0,2,0,0, 0, 0,0,0, 0,0,0,0,0,1},
		  {1,0,0,0,0,0,0, 0, 0,0,0, 0,9,0,0,0,1},
		  {1,0,0,0,0,0,0, 0, 10,0,0, 0,0,0,3,1,1},
		  {1,1,0,0,0,0,0, 0, 10,0,0, 0,0,0,1,1,1},
		  {1,1,1,1,1,1,1, 1, 1,1,1, 1,1,1,1,1,1} },
		  14,
		  2
		  ));
	// empty level
	allLevelInfo.push_back(LevelInfo(
		new int[mapRowSize][mapColSize]{
		  {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		  {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1} },
		  8,
		  6
		  ));
	aniCurX = PlayerCurCol * boxSize;
	aniCurY = PlayerCurRow * boxSize;
	toLevel(0);
}

string curTimeCStr = "";
int Tcount = 0;
int Time = 0;
void CalculateTime(int)
{
	glutPostRedisplay();
	if (Tcount == 100) {
		Time++;
		Tcount = 0;
	}
	std::ostringstream Tdata;
	if (Time / 60 < 10)
		Tdata << "0" << Time / 60 << ":";
	else
		Tdata << Time / 60 << ":";
	if (Time % 60 < 10)
		Tdata << "0" << Time % 60;
	else
		Tdata << Time % 60;
	std::string T(Tdata.str());
	const char* TIME = T.c_str();
	curTimeCStr = TIME;
	Tcount++;
	glutTimerFunc(10, CalculateTime, 0);
}

void drawString(const char* str) {
	static int isFirstCall = 1;
	static GLuint lists;

	if (isFirstCall) { // 如果是第一次呼叫，執行初始化
						 // 為每一個ASCII字元產生一個顯示列表
		isFirstCall = 0;

		// 申請MAX_CHAR個連續的顯示列表編號
		lists = glGenLists(MAX_CHAR);

		// 把每個字元的繪製命令都裝到對應的顯示列表中
		wglUseFontBitmaps(wglGetCurrentDC(), 0, MAX_CHAR, lists);
	}
	// 呼叫每個字元對應的顯示列表，繪製每個字元
	glColor3i(0, 0, 0);
	for (; *str != '\0'; ++str)
		glCallList(lists + *str);
}

/****************************背景音樂************************************/
MCI_OPEN_PARMS mu;
void music(LPCWSTR filename)
{

	mu.dwCallback = NULL;
	mu.lpstrAlias = NULL;
	mu.lpstrDeviceType = _T("MPEGAudio");
	mu.lpstrElementName = (filename);
	mu.wDeviceID = NULL;
	UINT rs;
	rs = mciSendCommand(NULL, MCI_OPEN, MCI_OPEN_ELEMENT, (DWORD)&mu);
	if (rs == 0)
	{
		MCI_PLAY_PARMS pp;
		pp.dwCallback = NULL;
		pp.dwFrom = 0;
		mciSendCommand(mu.wDeviceID, MCI_PLAY, MCI_NOTIFY, (DWORD)&pp);
	}
}
/******************************************************************************/


void selectFont(int size, int charset, const char* face) {

	HFONT hFont = CreateFontA(size, 0, 0, 0, FW_MEDIUM, 0, 0, 0,

		charset, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,

		DEFAULT_QUALITY, DEFAULT_PITCH | FF_SWISS, face);

	HFONT hOldFont = (HFONT)SelectObject(wglGetCurrentDC(), hFont);

	DeleteObject(hOldFont);

}

bool hasPopUpWin = false;

void displayFcn(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	Color personColor(0.2784313725490196, 0.6784313725490196, 0.2980392156862745);
	music(_T("baba.mp3"));

	drawByMap();
	// drawBox(PlayerCurCol, PlayerCurRow, boxColor);
	if (isAnimateTF && eatObjType != EMPTY) {
		switch (eatObjType)
		{
		case KEY:
			fish_normal(aniEatObjX, aniEatObjY);
			break;
		case BLUEBALL:
			DrawBlueMilk(aniEatObjX, aniEatObjY);
			break;
		case REDBALL:
			DrawRedMilk(aniEatObjX, aniEatObjY);
			break;
		default:
			break;
		}
	}
	if (becomeBlueTF) {
		if (eatKeyTF) {
			cat_blue_fish(aniCurX, aniCurY);
		}
		else {
			cat_blue(aniCurX, aniCurY);
		}
	}
	else if (becomeRedTF) {
		if (eatKeyTF) {
			cat_red_fish(aniCurX, aniCurY);
		}
		else {
			cat_red(aniCurX, aniCurY);
		}
	}
	else {
		if (eatKeyTF) {
			cat_fish(aniCurX, aniCurY);
		}
		else {
			cat_normal(aniCurX, aniCurY);
		}
	}


	// 繪製時間文字
	glPushAttrib(GL_CURRENT_BIT);
	glColor3f(0.0f, 0.0f, 0.0f);
	glRasterPos2i(1800, 800);
	drawString(curTimeCStr.c_str());
	glPopAttrib();

	glPushAttrib(GL_CURRENT_BIT);
	glColor3f(0.0f, 0.0f, 0.0f);
	glRasterPos2i(1800, 900);
	drawString(("this is level" + to_string(curLevel + 1)).c_str());
	glPopAttrib();


	if (curLevel == allLevelInfo.size() - 1 && !hasPopUpWin) {
		hasPopUpWin = true;
		MessageBox(NULL, L"YOU WIN", L"Win",
			MB_OK | MB_ICONEXCLAMATION);
	}
	glFlush();
}

void main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(winWid, winHgt);
	glutCreateWindow("CATch the FISH");
	init();
	selectFont(28, ANSI_CHARSET, "楷體_GB2312");
	glutDisplayFunc(displayFcn);
	glutKeyboardFunc(keyboardHandler);
	glutSpecialFunc(arrowKeysHandler);
	
	winReshapeFcn(0, scaleWeight * winWid, 0, scaleWeight * winHgt);
	glutTimerFunc(10, CalculateTime, 0);
	glutMainLoop();
}
