#ifndef DRAWER_H
#define DRAWER_H

#include "GL/freeglut.h"
#include "GL/gl.h"
#include <math.h>

#define PI 3.1415f

class Drawer {
	private:
		
	public:
		Drawer() {};

        void drawCircle(int x, int y, GLfloat radius = 10.0f) {
            glBegin(GL_LINES);
            for(int i = 0; i < 360; i += 3) {
                GLfloat angle = (GLfloat)i * PI/180.0f;
                glVertex2f(x, y);
                glVertex2f(x + radius * cos(angle), y + radius * sin(angle));
            }
            glEnd();
        }
		
};

#endif