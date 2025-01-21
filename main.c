#include <GLUT/glut.h>

#include "renderer.c"

// void display() {
//     glClear(GL_COLOR_BUFFER_BIT);

       // Draw a triangle
//     glBegin(GL_TRIANGLES);
//         glColor3f(1.0f, 0.0f, 0.0f); // Red color
//         glVertex2f(-0.5f, -0.5f);
//         glColor3f(0.0f, 1.0f, 0.0f); // Green color
//         glVertex2f(0.5f, -0.5f);
//         glColor3f(0.0f, 0.0f, 1.0f); // Blue color
//         glVertex2f(0.0f, 0.5f);
//     glEnd();

//     glFlush();
// }

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Legend of Aurion");

    // glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
