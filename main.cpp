#include <stdio.h>
#include <iostream>
#include <GL/glut.h>
#include <math.h>
#include<windows.h>
int r1=1950;
int r2=850;
int i1=1;
GLfloat offset=0;
GLfloat offset1=0;
float color1 = 0.44;
float color2 = 0.57;
float color3 = 1.0;
static int windows;
static int menu_id;
static int value =-1;

char name[100]="WEATHER SIMULATION DURING A RAINY DAY";
char college[100]="UNIVERSITY VISVESWARAYA COLLEGE OF ENGINEERING";
char dept[100]="Department of Computer Science & Engineering";
char heading[100]="Made by                                                                 Guides";
char row1[100]="ASHISH (17GAEC9011)                                    Mr.Sampath Kumar Y R           ";
char emsg[100]="Right click on the mouse to continue";
char dash[100]="--------------------------------------------------------------------------------------";

void frontscreen(void)
{
     glPushMatrix();
     glTranslatef(50,100,0);
     glClearColor(0.8,0.8,1.0,1.0);
     int s;
     glClear(GL_COLOR_BUFFER_BIT);

     glRasterPos2i(184,900);
     for(s=0;name[s]!='\0';s++)
     {
     glColor3f(0.0,0.0,1.0);
     glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,name[s]);

     }
     glRasterPos2i(155,880);
     for(s=0;dash[s]!='\0';s++)
     {
     glColor3f(0.0,0.0,0.0);
     glutBitmapCharacter(GLUT_BITMAP_9_BY_15,dash[s]);
     }
     glRasterPos2i(184,580);
     for(s=0;college[s]!='\0';s++)
     {
     glColor3f(0.0,0.0,1.0);
     glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,college[s]);
     }

     glRasterPos2i(180,450);
     for(s=0;dept[s]!='\0';s++)
     {
     glColor3f(1.0,0.0,0.0);
     glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,dept[s]);
     }


     glRasterPos2i(155,420);
     for(s=0;dash[s]!='\0';s++)
     {
     glColor3f(0.0,0.0,0.0);
     glutBitmapCharacter(GLUT_BITMAP_9_BY_15,dash[s]);
     }

     glRasterPos2i(170,370);
     for(s=0;heading[s]!='\0';s++)
     {
     glColor3f(0.0,0.0,0.0);
     glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,heading[s]);
     }

     glRasterPos2i(155,350);
     for(s=0;dash[s]!='\0';s++)
     {
     glColor3f(0.0,0.0,0.0);
     glutBitmapCharacter(GLUT_BITMAP_9_BY_15,dash[s]);
     }

     glRasterPos2i(170,280);
     for(s=0;row1[s]!='\0';s++)
     {
     glColor3f(0.0,0.0,0.0);
     glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,row1[s]);
     }



     glRasterPos2i(155,240);
     for(s=0;dash[s]!='\0';s++)
     {
     glColor3f(0.0,0.0,0.0);
     glutBitmapCharacter(GLUT_BITMAP_9_BY_15,dash[s]);
     }

     glRasterPos2i(200,100);
     for(s=0;emsg[s]!='\0';s++)
     {
     glColor3f(1.0,0.0,0.5);
     glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,emsg[s]);
     }

     glPopMatrix();
     glFlush();
}


void menu(int num)
{

    if(num==0)
    {

        glutDestroyWindow(windows);
        exit(0);
    }else
    {value =num;}

}

void createMenu()
{

    menu_id=glutCreateMenu(menu);
    glutAddMenuEntry("Sunny Morning",1);
    glutAddMenuEntry("Clouds appear",2);
    glutAddMenuEntry("Clouds turn dense",3);
   glutAddMenuEntry("Rain",4);
    glutAddMenuEntry("Quit",0);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
}

		void DrawCircle(float cx, float cy, float r, int num_segments)
		{

		 glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < num_segments; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);

		float x = r * cosf(theta);
		float y = r * sinf(theta);

		glVertex2f(x + cx, y + cy);

		}
		glEnd();
	}
	void rain()
	      {

	         for(int i=390;i<=600;i+=100)
            {
                for(int j=1300;j>=130;j-=50)
                {
                glColor3f(0.0,0.0,1.0);
	          glBegin(GL_LINES);
	          glVertex2i(i,j);
	          glVertex2i(i,j-15);
	          glVertex2i(i+1,j-15);
	          glVertex2i(i+1,j-15);
	          }}
	          for(int i=1400;i<=1600;i+=100)
            {
                for(int j=1300;j>=130;j-=50)
                {
                glColor3f(0.0,0.0,1.0);
	          glBegin(GL_LINES);
	          glVertex2i(i,j);
	          glVertex2i(i,j-15);
	          glVertex2i(i+1,j-15);
	          glVertex2i(i+1,j-15);
	          }}
	           for(int i=40;i<=1960;i+=100)
               {
                   for(int j=1180;j>=130;j-=50)
                   {
                  glColor3f(0.0,0.0,1.0);
                       glBegin(GL_LINES);
                       glVertex2i(i,j);
                       glVertex2i(i,j-15);
                       glVertex2i(i+1,j);
                       glVertex2i(i+1,j-15);
                       glEnd();
                   }
               }
	      }


 void draw_ground()
{
    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0,620);
    glVertex2f(0,0);
    glVertex2f(800,00);
    glVertex2f(800,620);
    glEnd();

 glBegin(GL_POLYGON);
    glVertex2f(800,00);
    glVertex2f(800,620);
    glVertex2f(1400,450);
    glVertex2f(2000,200);
    glEnd();

      glColor3f(0,0.6,0);
     DrawCircle(900,600,100,1000);
     DrawCircle(1035,600,100,1000);
     DrawCircle(963,740,120,1000);
 glColor3f(0.5,0.35,0.02);
     glBegin(GL_POLYGON);
     glVertex2f(950,550);
     glVertex2f(990,550);
     glVertex2f(990,350);
     glVertex2f(950,350);
     glEnd();
 glColor3f(0,0.6,0);
     DrawCircle(100,600,100,1000);
     DrawCircle(235,600,100,1000);
     DrawCircle(163,740,120,1000);
 glColor3f(0.5,0.35,0.02);
     glBegin(GL_POLYGON);
     glVertex2f(150,550);
     glVertex2f(190,550);
     glVertex2f(190,350);
     glVertex2f(150,350);
     glEnd();

 glColor3f(0,0.6,0);
     DrawCircle(900,600,100,1000);
     DrawCircle(1035,600,100,1000);
     DrawCircle(963,740,120,1000);
 glColor3f(0.5,0.35,0.02);
     glBegin(GL_POLYGON);
     glVertex2f(950,550);
     glVertex2f(990,550);
     glVertex2f(990,350);
     glVertex2f(950,350);
     glEnd();
  glColor3f(0,0.6,0);
     DrawCircle(1400,400,100,1000);
     DrawCircle(1535,400,100,1000);
     DrawCircle(1463,540,120,1000);
 glColor3f(0.5,0.35,0.02);
     glBegin(GL_POLYGON);
     glVertex2f(1450,330);
     glVertex2f(1490,330);
     glVertex2f(1490,150);
     glVertex2f(1450,150);
     glEnd();


}
void drawhouse()
{    glColor3f(1.0,0,0);//wall front one
    glBegin(GL_POLYGON);
    glVertex2f(800,400);
    glVertex2f(800,700);
    glVertex2f(500,700);
    glVertex2f(500,400);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(0,0);
    glVertex2f(0,190);
    glVertex2f(2000,190);
    glVertex2f(2000,0);
    glEnd();

    glColor3f(1,1,1);
    for(int k=10;k<2000;k+=150)
    {glBegin(GL_POLYGON);
    glVertex2d(k,85);
    glVertex2d(k+70,85);
    glVertex2d(k+70,105);
    glVertex2d(k,105);
    glEnd();}
    glBegin(GL_POLYGON);
    glVertex2f(1090,10);
    glVertex2f(1110,110);
    glVertex2f(1110,110);
    glVertex2f(1090,10);
    glEnd();
     glBegin(GL_POLYGON);
    glVertex2f(1090,200);
    glVertex2f(1110,310);
    glVertex2f(1110,310);
    glVertex2f(1090,200);
    glEnd();

glColor3f(1.0,0,0);
glBegin(GL_POLYGON);
    glVertex2f(500,400);
    glVertex2f(500,700);
    glVertex2f(450,750);
    glVertex2f(450,500);
    glEnd();
    glColor3f(0.5,0.35,0.05);
    glBegin(GL_TRIANGLES);
    glVertex2f(500,700);
    glVertex2f(800,700);
    glVertex2f(650,840);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(450,750);
    glVertex2f(500,700);
    glVertex2f(650,840);
    glEnd();
    glBegin(GL_POLYGON);//window 1
    glVertex2f(690,500);
    glVertex2f(690,540);
    glVertex2f(730,540);
    glVertex2f(730,500);
    glEnd();

    glBegin(GL_POLYGON);//window 2
    glVertex2f(730,540);
    glVertex2f(730,500);
    glVertex2f(770,500);
    glVertex2f(770,540);
    glEnd();
    glBegin(GL_POLYGON);//window3
    glVertex2f(690,540);
    glVertex2f(730,540);
     glVertex2f(730,580);
     glVertex2f(690,580);
    glEnd();
    glBegin(GL_POLYGON);//window 4
    glVertex2f(730,540);
    glVertex2f(730,580);
    glVertex2f(770,580);
    glVertex2f(770,540);
glEnd();
    glBegin(GL_POLYGON);//door
    glVertex2f(550,400);
    glVertex2f(610,400);
    glVertex2f(610,580);
    glVertex2f(550,580);
    glEnd();
    glColor3f(0.6,0.6,0.6);
     glBegin(GL_POLYGON);//pavement
    glVertex2f(592,390);
    glVertex2f(635,390);
    glVertex2f(620,365);
    glVertex2f(578,365);
    glEnd();
    glBegin(GL_POLYGON);//pavement
    glVertex2f(545,360);
    glVertex2f(590,360);
    glVertex2f(575,335);
    glVertex2f(530,335);
    glEnd();
    glBegin(GL_POLYGON);//pavement
    glVertex2f(592,330);
    glVertex2f(635,330);
    glVertex2f(620,305);
    glVertex2f(578,305);
    glEnd();

    glBegin(GL_POLYGON);//pavement
    glVertex2f(545,290);
    glVertex2f(590,290);
    glVertex2f(575,265);
    glVertex2f(530,265);
    glEnd();
    glBegin(GL_POLYGON);//pavement
    glVertex2f(592,270);
    glVertex2f(635,270);
    glVertex2f(620,245);
    glVertex2f(578,245);
    glEnd();

    glBegin(GL_POLYGON);//pavement
    glVertex2f(545,230);
    glVertex2f(590,230);
    glVertex2f(575,205);
    glVertex2f(530,205);
    glEnd();
}

	void hills()
	{

		glColor3f(0.5, 0.35, 0.05);
		DrawCircle(200, 600, 500, 2000);
		glColor3f(0.5, 0.35, 0.05);
		DrawCircle(800,600,500, 2000);
		glColor3f(0.5, 0.35, 0.05);
		DrawCircle(1400, 600, 500, 2000);
		glColor3f(0.5, 0.35, 0.05);
		DrawCircle(2000, 600, 500, 2000);

	}

	void cloud1(){
	glColor3f(color1,color2,color3);
	DrawCircle(100, 1200, 60, 2000);
	DrawCircle(200,1200, 80, 2000);
	DrawCircle(300, 1200, 55, 2000);

    DrawCircle(400,1360,60,2000);
    DrawCircle(500,1360,80,2000);
    DrawCircle(600,1360,55,2000);

	DrawCircle(700, 1200, 60, 2000);
	DrawCircle(800,1200, 80, 2000);
	DrawCircle(900, 1200, 55, 2000);

	DrawCircle(1100, 1200, 60, 2000);
	DrawCircle(1200,1200, 80, 2000);
	DrawCircle(1300, 1200, 55, 2000);

    DrawCircle(1400,1360,60,2000);
    DrawCircle(1500,1360,80,2000);
    DrawCircle(1600,1360,55,2000);


	DrawCircle(1700, 1200, 60, 2000);
	DrawCircle(1800,1200, 80, 2000);
	DrawCircle(1900, 1200, 55, 2000);
}

void cloud2(){
    glColor3f(1,1,1);
	DrawCircle(100, 1200, 60, 2000);
	DrawCircle(200,1200, 80, 2000);
	DrawCircle(300, 1200, 55, 2000);

    DrawCircle(400,1360,60,2000);
    DrawCircle(500,1360,80,2000);
    DrawCircle(600,1360,55,2000);

    DrawCircle(700, 1200, 60, 2000);
	DrawCircle(800,1200, 80, 2000);
	DrawCircle(900, 1200, 55, 2000);

	DrawCircle(1100, 1200, 60, 2000);
	DrawCircle(1200,1200, 80, 2000);
	DrawCircle(1300, 1200, 55, 2000);

	DrawCircle(1400,1360,60,2000);
    DrawCircle(1500,1360,80,2000);
    DrawCircle(1600,1360,55,2000);

	DrawCircle(1700, 1200, 60, 2000);
	DrawCircle(1800,1200, 80, 2000);
	DrawCircle(1900, 1200, 55, 2000);
}
void cloud3(){
	glColor3f(0.5,0.5,0.5);
	DrawCircle(100, 1200, 60, 2000);
	DrawCircle(200,1200, 80, 2000);
	DrawCircle(300, 1200, 55, 2000);

    DrawCircle(400,1360,60,2000);
    DrawCircle(500,1360,80,2000);
    DrawCircle(600,1360,55,2000);

    DrawCircle(700, 1200, 60, 2000);
	DrawCircle(800,1200, 80, 2000);
	DrawCircle(900, 1200, 55, 2000);

	DrawCircle(1100, 1200, 60, 2000);
	DrawCircle(1200,1200, 80, 2000);
	DrawCircle(1300, 1200, 55, 2000);

	DrawCircle(1400,1360,60,2000);
    DrawCircle(1500,1360,80,2000);
    DrawCircle(1600,1360,55,2000);

	DrawCircle(1700, 1200, 60, 2000);
	DrawCircle(1800,1200, 80, 2000);
	DrawCircle(1900, 1200, 55, 2000);
}
		void drawSun()
	{
		glColor3f(3.0, 1.0, 0.5);
		DrawCircle(300, 1350, 70, 1000);
	}
	void drawSun1()
	{
		glColor3f(1, 0.0, 0.0);
		DrawCircle(500, 1050, 70, 1000);
	}
	void drawSun2()
	{
		glColor3f(0.8,0.8, 0.8);
		DrawCircle(1970, 1470, 50, 1000);
	}


	void sky(){

	glBegin(GL_POLYGON);


	glColor3f(0.4, 0.5, 1.0);
	glVertex2i(0, 1500);
	glVertex2i(2000, 1500);
	glColor3f(0.7, 0.7, 1.0);
	glVertex2i(2000, 0);
	glVertex2i(0, 0);
	glEnd();

	}
	void sky1(){

	glBegin(GL_POLYGON);


	glColor3f(1.0, 0.5, 0.0);
	glVertex2i(0, 1500);
	glVertex2i(2000, 1500);
	glColor3f(0.7, 0.7, 1.0);
	glVertex2i(2000, 0);
	glVertex2i(0, 0);
	glEnd();
	}
	void river(){

	glBegin(GL_POLYGON); // River
	glColor3f(0.25, 1.0, 1.0);
	glVertex2i(0,0);
	glVertex2i(550, 300);
	glVertex2i(2000,0);
	glVertex2i(2000, 950);
	glVertex2i(0, 950);
	glEnd();


	}
void display1()
{
     glClear(GL_COLOR_BUFFER_BIT);
     glPushMatrix();

                   sky1();
			 cloud3();
			 drawSun1();
			  drawSun2();
			 hills();
			 river();
			 draw_ground();
              drawhouse();
            offset-=0.4;
            if(offset<-100)
            {
                offset=0;
            }

            glPushMatrix();

            glTranslatef(0,offset,0);
            rain();
            glPopMatrix();
            glutPostRedisplay();
            glFlush();
}



   void myDisplay(void)
	{
  glClear(GL_COLOR_BUFFER_BIT);
  if(value==-1)
  {   glPushMatrix();
      frontscreen();
      glPopMatrix();
  }
	  else  if(value==1)
			{
             glPushMatrix();
			 sky();
			 drawSun();
			 hills();
			 river();
			 draw_ground();
              drawhouse();
             glPopMatrix();

              }
              else if(value==2)
              { glPushMatrix();
              sky();
			 cloud2();
			 drawSun();
			 hills();
			 river();
			 draw_ground();
              drawhouse();
            glPopMatrix();

              }
              else if(value==3)
              { glPushMatrix();
              sky();
			 cloud3();
			 drawSun();
			 hills();
			 river();
			 draw_ground();
              drawhouse();
              glPopMatrix();


              }
              else if(value==4)
              {

                display1();
              }
}


void myInit(void)
{
	glClearColor(0.0, 0.0, 1.0, 0.0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glPointSize(0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 2000.0, 0.0, 1500.0);
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(2000, 1500);
	glutInitWindowPosition(0,0);

	windows=glutCreateWindow("project");
	createMenu();
	glClearColor(0.0,0.0,0.0,0.0);
	glutDisplayFunc(myDisplay);

	myInit();
	glutMainLoop();
	return 0;
}
