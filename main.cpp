#include "declaration.h"
#include "header.h"
#include<unistd.h>
int x1=50,x2=270,x4=600,y,x3=450,x=0;
void bigcld1();
void display3();
void myinit(void)
{
	glClearColor(0.0,0.0,0.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,500,0,500);
	glMatrixMode(GL_MODELVIEW);
	glPointSize(5.0);
}

void mydisplay()
{
	if(windowFlag){
		glClear(GL_COLOR_BUFFER_BIT);
		glColor3f(1.0,0.0,0.0);
		glRasterPos2f(105.0,470.0);
		for(i=0;i<strlen(str1);i++)
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[i]);
		glutPostRedisplay();

		glColor3f(0.0,0.0,1.0);
		glRasterPos2f(205.0,445.0);
		for(i=0;i<strlen(str2);i++)
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str2[i]);
		glutPostRedisplay();


		glColor3f(1.0,0.0,1.0);
		glRasterPos2f(140.0,410.0);
		for(i=0;i<strlen(str3);i++)
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str3[i]);
		glutPostRedisplay();

		glColor3f(1.0,0.0,1.0);
		glRasterPos2f(160.0,385.0);
		for(i=0;i<strlen(str5);i++)
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str5[i]);
		glutPostRedisplay();

		glColor3f(1.0,0.2,0.1);
		glRasterPos2f(190.0,340.0);
		for(i=0;i<strlen(str4);i++)
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str4[i]);
		glutPostRedisplay();

		glColor3f(0.2,0.8,0.4);
		glRasterPos2f(150.0,300.0);
		for(i=0;i<strlen(str6);i++)
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str6[i]);
		glutPostRedisplay();

		glColor3f(0.2,0.0,0.9);
		glRasterPos2f(20.0,150.0);
		for(i=0;i<strlen(str8);i++)
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str8[i]);
		glutPostRedisplay();

		glColor3f(0.64,0.54,0.48);
		glRasterPos2f(20.0,130.0);
		for(i=0;i<strlen(str9);i++)
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str9[i]);
		glutPostRedisplay();

		glColor3f(0.64,0.54,0.48);
		glRasterPos2f(20.0,110.0);
		for(i=0;i<strlen(str10);i++)
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str10[i]);
		glutPostRedisplay();

		glColor3f(0.8,0.0,0.001);
		glRasterPos2f(20.0,90.0);
		for(i=0;i<strlen(str11);i++)
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str11[i]);
		glutPostRedisplay();



		glColor3f(0.2,0.0,0.9);
		glRasterPos2f(350.0,150.0);
		for(i=0;i<strlen(str12);i++)
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str12[i]);
		glutPostRedisplay();

		glColor3f(0.64,0.54,0.48);
		glRasterPos2f(350.0,130.0);
		for(i=0;i<strlen(str13);i++)
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str13[i]);
		glutPostRedisplay();

		glColor3f(0.64,0.54,0.48);
		glRasterPos2f(350.0,110.0);
		for(i=0;i<strlen(str14);i++)
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str14[i]);
		glutPostRedisplay();

		glColor3f(0.8,0.0,0.001);
		glRasterPos2f(350.0,90.0);
		for(i=0;i<strlen(str15);i++)
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str15[i]);
		glutPostRedisplay();
	}
	glFlush();
}
void click(unsigned char key, int x, int y)
{
	switch(key)
	{
	    case 13:windowFlag=0;

		break;
	}
	createHelpWindow();
}


int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1300,1000);
	glutInitWindowPosition(0,0);
	firstWindow=glutCreateWindow("Simulation of paper manufacturing");
	glutDisplayFunc(mydisplay);
	glutKeyboardFunc(click);
	myinit();
	PlaySound(TEXT("sing.wav"),  NULL, SND_FILENAME | SND_ASYNC);
	glutMainLoop();
}

void keyS(unsigned char key,int x,int y)
{
	if(key==13||key=='f')
		createNewWindow();
	glutPostRedisplay();
	if(key=='x')
      exit(0);
}

void keySecond(unsigned char key,int x,int y)
{
	if(key=='x'||key=='X')
		exit(0);

	if(key=='f' || key =='F')
	{
		createThirdWindow();
		PlaySound(TEXT("Axe.wav"),  NULL, SND_FILENAME | SND_ASYNC| SND_LOOP);

	}
}

initfirstWindow()
{
   glClearColor(0.70,0.87,0.93,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1300,0,1000);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
void createNewWindow()
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1300,1000);
	glutInitWindowPosition(0,0);
	glutDestroyWindow(firstWindow);
	secondWindow=glutCreateWindow("Simulation of paper manufacturing");
	glutDisplayFunc(mydisplaySecondWindow);
	glutKeyboardFunc(keySecond);
	initfirstWindow();

}
void createHelpWindow(void)
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1300,1000);
	glutInitWindowPosition(0,0);
	secondWindow=glutCreateWindow("Help");
	glutDisplayFunc(displayHelpWindow);
	glutKeyboardFunc(keyS);
	myinit();
}

void circle1(float x,float y,float radius,float r,float g,float b)
{
    float theta;
glColor3f(r,g,b);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{  theta=i*3.142/180;

 glVertex2f(x+radius*cos(theta),y+radius*sin(theta));


}
glEnd();

}
void tree(float r,float g,float b)
{
glColor3f(0.42,0.26,0.15);
    glBegin(GL_POLYGON);
    glVertex2d(350,50);
    glVertex2d(380,50);
    glVertex2d(380,350);
    glVertex2d(350,350);
    glEnd();
    glColor3f(0,0.7,0);
    circle1(350,350,50,r,g,b);
    circle1(380,350,50,r,g,b);
    circle1(430,400,50,r,g,b);
    circle1(430,450,50,r,g,b);
    circle1(380,500,50,r,g,b);
    circle1(360,440,50,r,g,b);
    circle1(300,450,50,r,g,b);
    circle1(300,400,40,r,g,b);
    glFlush();
}

void mydisplaySecondWindow()
{
	glClear(GL_COLOR_BUFFER_BIT);
	drawLand();
    drawGrasses();
	glPushMatrix();
	glTranslatef(-150.0,50.0,0.0);
    tree(0,0.5,0);
	glPopMatrix();
    glPushMatrix();
	glTranslatef(150.0,200.0,0.0);
    tree(0,0.3,0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-300.0,100.0,0.0);
	tree(0,0.7,0);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(30.0,300.0,0.0);
    tree(0,0.4,0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(450.0,150.0,0.0);
    tree(0,0.6,0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(250.0,50.0,0.0);
    tree(0,0.7,0);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(650.0,170.0,0.0);
    tree(0,0.4,0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(850.0,200.0,0.0);
    tree(0,0.5,0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(750.0,70.0,0.0);
    tree(0,0.7,0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(580.0,30.0,0.0);
    tree(0,0.65,0);
	glPopMatrix();


	tree(0,0.6,0);
	bigcld1();
    displayHelp("Paper is made from trees",930,820,1,0,0);
	glFlush();


}
void bigcld1()
{
    float o;
    glColor3f(0.70,0.77,0.93);
        glBegin(GL_POLYGON);
    for(int i=0;i<360;i++)
    {
        o=i*3.142/180;
        glVertex2f(400+x4+100*cos(o),800+50*sin(o));
    }
    glEnd();
    glColor3f(0.70,0.77,0.93);
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++)
    {
        o=i*3.142/180;
        glVertex2f(500+x4+100*cos(o),800+50*sin(o));
    }
    glEnd();
    glColor3f(0.70,0.77,0.93);
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++)
    {
        o=i*3.142/180;
        glVertex2f(500+x4+100*cos(o),860+50*sin(o));
    }
    glEnd();
glColor3f(0.70,0.77,0.93);
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++)
    {
        o=i*3.142/180;
        glVertex2f(400+x4+100*cos(o),860+50*sin(o));
    }
    glEnd();

}

void displayHelpWindow()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.0,0.0,0.0,1.0);
	//glColor3f(1,1,0);
	displayHelp(strD,200.0,350.0,1,1,0);
	//glColor3f(0,1,1);
	displayHelp(strN,230.0,450.0,0,1,1);
	//displayHelp(strS,50.0,425.0);
	//glColor3f(1,1,0);
	displayHelp(strF,200.0,300.0,1,1,0);
	displayHelp("Press b to move to previous page",200.0,250.0,1,1,0);
	displayHelp("Press x to exit",200.0,200.0,1,1,0);



	glFlush();
}


void key(unsigned char key,int x,int y)
{
	if(key=='x'||key=='X')
		exit(0);

}
void wallpaper()
{

    glBegin(GL_POLYGON);
    glColor3f(0.96,0.64,0.38);
    glVertex2f(0,0);
    glColor3f(0.96,0.96,0.96);
    glVertex2f(0,1000);
     glColor3f(0.96,0.96,0.96);

    glVertex2f(1300,1000);
    glColor3f(0.96,0.64,0.38);

    glVertex2f(1300,0);
    glEnd();

}

void initSecondWindow(void)
{
glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.02,0.52,0.51,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1300,0,1000);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
void drawLand(void)
{
	glColor3f(0.231075,0.372549,0.043137);
	glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(1300,0);
		glVertex2f(1300,550);
		glVertex2f(0,550);
	glEnd();
}


void drawGrasses(void)
{
	drawGrass(100,70);
	drawGrass(400,200);
	drawGrass(270,190);
	drawGrass(150,300);
	drawGrass(650,135);
	drawGrass(750,155);
	drawGrass(1050,500);
	drawGrass(1250,460);
	drawGrass(1200,80);
}


void drawGrass(int x,int y)
{
	glColor3f(0.1,0.6324,0.1);
	glBegin(GL_TRIANGLES);
	glVertex2f(x,y);
	glVertex2f(x+25,y);
	glVertex2f(x-25,y+100);
	glVertex2f(x+25,y);
	glVertex2f(x+50,y);
	glVertex2f(x+25,y+100);
	glEnd();
}


void createThirdWindow()
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1300,1000);

	glutInitWindowPosition(0,0);
	glutDestroyWindow(secondWindow);
	thirdWindow=glutCreateWindow("Simulation of paper manufacturing");
	initSecondWindow();

	glutKeyboardFunc(keyThird);
	glutDisplayFunc(display3);
	glutMainLoop();
}

void keyThird(unsigned char key,int x,int y)
{
	if(key=='x'||key=='X')
		exit(0);
    if(key=='f')
        createFourthWindow();

}

void part1()
{
     glColor3f(0.69,0.77,0.87);

    glBegin(GL_POLYGON);
    glVertex2f(350,200);
    glVertex2f(350,550);
    glVertex2f(550,550);
    glVertex2f(550,200);
    glEnd();
}
void part2()
{
glColor3f(0.0,0.0,0.2);
    glBegin(GL_POLYGON);
    glVertex2f(410,300);
    glVertex2f(410,390);
    glVertex2f(490,390);
    glVertex2f(490,300);

    glEnd();
}


   void part3(){
    glColor3f(0.0,0.0,0.2);
    glBegin(GL_POLYGON);
    glVertex2f(410,200);
    glVertex2f(410,270);
    glVertex2f(490,270);
    glVertex2f(490,200);
    glEnd();
   }

void machine1()
{

//glFlush();

glColor3f(0.66,0.66,0.66);
//glColor3f(0.77,0.77,0.77);
glBegin(GL_POLYGON);
glVertex2f(200,0);
glVertex2f(200,230);
                                //stand
glVertex2f(350,230);
glVertex2f(350,200);
glVertex2f(410,200);
glVertex2f(340,0);

glEnd();
glColor3f(0.66,0.66,0.66);
glBegin(GL_POLYGON);
glVertex2f(540,0);
glVertex2f(490,200);
glVertex2f(550,200);
glVertex2f(550,230);
glVertex2f(700,230);
glVertex2f(700,0);
glEnd();

    glColor3f(0.69,0.77,0.87);
glBegin(GL_POLYGON);
glVertex2f(340,0);
glVertex2f(410,200);               //fall

glVertex2f(490,200);
glVertex2f(540,0);
glEnd();


}


void machinetop()
{
    glColor3f(0.0,0.0,0.2);
    glBegin(GL_POLYGON);        //up box
    glVertex2f(380,500);
    glVertex2f(380,600);
    glVertex2f(520,600);
    glVertex2f(520,500);
    glEnd();

    glColor3f(0.82,0.57,0.46);
    glBegin(GL_POLYGON);        //up1 box
    glVertex2f(420,600);
    glVertex2f(420,620);
    glVertex2f(480,620);
    glVertex2f(480,600);
    glEnd();


    glColor3f(0.82,0.57,0.46);
    glBegin(GL_POLYGON);       //side
    glVertex2f(350,440);
    glVertex2f(300,440);
    glVertex2f(300,550);
    glVertex2f(380,550);
   // glVertex2f(380,540);
    glVertex2f(310,540);
    glVertex2f(310,450);
    glVertex2f(350,450);
     glVertex2f(350,440);
 glEnd();

       glColor3f(0.82,0.57,0.46);
    glBegin(GL_POLYGON);

     glVertex2f(550,440);
      glVertex2f(600,440);      //side
       glVertex2f(600,550);
        glVertex2f(520,550);

        // glVertex2f(520,540);
          glVertex2f(590,540);
           glVertex2f(590,450);
            glVertex2f(550,450);
            glVertex2f(550,440);

glEnd();

}

void pieces(){
glColor3f(0.42,0.26,0.15);
glPointSize(5);
glBegin(GL_POINTS);

   y++;
   glVertex2i(400,250-y);
   glVertex2i(424,345-y);
   glVertex2i(454,334-y);
   glVertex2i(496,356-y);
   glVertex2i(494,376-y);
   glVertex2i(444,356-y);
   glVertex2i(423,376-y);
   glVertex2i(432,365-y);
   glVertex2i(443,369-y);
   glVertex2i(411,316-y);
   glVertex2i(421,355-y);


   glVertex2i(427,366-y);
   glVertex2i(437,344-y);
   glVertex2i(447,377-y);
   glVertex2i(414,388-y);
   glVertex2i(402,345-y);
   glVertex2i(423,365-y);
   glVertex2i(437,376-y);
   glVertex2i(418,346-y);
   glVertex2i(407,356-y);
   glVertex2i(417,359-y);
   glVertex2i(468,358-y);
   glVertex2i(447,357-y);
   glVertex2i(433,356-y);
   glVertex2i(452,369-y);
   glVertex2i(474,368-y);
   glVertex2i(488,367-y);
   glVertex2i(494,366-y);
   glVertex2i(478,365-y);

   glVertex2i(432,364-y);
   glVertex2i(452,363-y);
   glVertex2i(422,362-y);
   glVertex2i(482,366-y);
   glVertex2i(472,363-y);
   glVertex2i(452,365-y);
   glVertex2i(462,344-y);
   glVertex2i(442,327-y);
   glVertex2i(432,385-y);
   glVertex2i(422,356-y);

 glVertex2i(400,250-y);
   glVertex2i(424,310-y);
   glVertex2i(454,320-y);
   glVertex2i(496,330-y);
   glVertex2i(494,333-y);
   glVertex2i(444,323-y);
   glVertex2i(423,313-y);
   glVertex2i(432,311-y);
   glVertex2i(443,322-y);
   glVertex2i(411,312-y);
   glVertex2i(421,302-y);


   glVertex2i(427,311-y);
   glVertex2i(437,328-y);
   glVertex2i(447,318-y);
   glVertex2i(414,316-y);
   glVertex2i(402,329-y);
   glVertex2i(423,326-y);
   glVertex2i(437,317-y);
   glVertex2i(418,314-y);

   glVertex2i(407,325-y);
   glVertex2i(417,315-y);
   glVertex2i(468,326-y);
   glVertex2i(447,315-y);
   glVertex2i(433,319-y);
   glVertex2i(452,345-y);
   glVertex2i(474,312-y);
   glVertex2i(488,329-y);
   glVertex2i(494,343-y);
   glVertex2i(478,300-y);


   glVertex2i(432,301-y);
   glVertex2i(452,302-y);
   glVertex2i(422,309-y);
   glVertex2i(482,307-y);
   glVertex2i(472,304-y);
   glVertex2i(452,318-y);
   glVertex2i(462,317-y);
   glVertex2i(442,324-y);
   glVertex2i(432,318-y);
   glVertex2i(422,333-y);
   glVertex2i(432,323-y);
   glVertex2i(442,312-y);
   glVertex2i(492,323-y);
   glVertex2i(482,322-y);
   glVertex2i(462,311-y);
   glVertex2i(472,299-y);
   glVertex2i(432,298-y);
   glVertex2i(462,289-y);
   glVertex2i(472,317-y);
   glVertex2i(452,296-y);
   glVertex2i(400,250-y);
   glVertex2i(424,275-y);
   glVertex2i(454,270-y);
   glVertex2i(496,220-y);
   glVertex2i(494,211-y);
   glVertex2i(444,230-y);
   glVertex2i(423,200-y);
   glVertex2i(432,260-y);
   glVertex2i(443,270-y);
   glVertex2i(411,217-y);
   glVertex2i(421,225-y);


   glVertex2i(427,290-y);
   glVertex2i(437,286-y);
   glVertex2i(447,295-y);
   glVertex2i(414,272-y);
   glVertex2i(402,282-y);
   glVertex2i(423,269-y);
   glVertex2i(437,275-y);
   glVertex2i(418,265-y);

   glVertex2i(407,290-y);
   glVertex2i(417,265-y);
   glVertex2i(468,287-y);
   glVertex2i(447,276-y);
   glVertex2i(433,265-y);
   glVertex2i(452,253-y);
   glVertex2i(474,244-y);
   glVertex2i(488,220-y);
   glVertex2i(494,270-y);
   glVertex2i(478,240-y);


   glVertex2i(432,253-y);
   glVertex2i(452,244-y);
   glVertex2i(422,295-y);
   glVertex2i(482,256-y);
   glVertex2i(472,277-y);
   glVertex2i(452,248-y);
   glVertex2i(462,229-y);
   glVertex2i(442,250-y);
   glVertex2i(432,231-y);
   glVertex2i(422,242-y);
   glVertex2i(432,233-y);
   glVertex2i(442,224-y);
   glVertex2i(492,245-y);
   glVertex2i(482,266-y);
   glVertex2i(462,227-y);
   glVertex2i(472,288-y);
   glVertex2i(432,239-y);
   glVertex2i(462,270-y);
   glVertex2i(472,241-y);
   glVertex2i(452,262-y);


   glVertex2i(430,250-y);
   glVertex2i(450,240-y);
   glVertex2i(420,299-y);
   glVertex2i(480,250-y);
   glVertex2i(470,270-y);
   glVertex2i(450,240-y);
   glVertex2i(460,220-y);
   glVertex2i(440,250-y);
   glVertex2i(430,235-y);
   glVertex2i(420,246-y);
   glVertex2i(430,237-y);
   glVertex2i(440,220-y);
   glVertex2i(490,245-y);
   glVertex2i(480,267-y);
   glVertex2i(460,225-y);
   glVertex2i(470,284-y);
   glVertex2i(430,236-y);
   glVertex2i(460,270-y);
   glVertex2i(470,242-y);
   glVertex2i(450,260-y);

   glVertex2i(445,280-y);
   glVertex2i(475,220-y);
   glVertex2i(435,236-y);
   glVertex2i(460,250-y);
   glVertex2i(474,240-y);
   glVertex2i(455,260-y);

   glVertex2i(455,220-y);
   glVertex2i(460,200-y);
   glVertex2i(480,225-y);
   glVertex2i(470,216-y);
   glVertex2i(430,212-y);
   glVertex2i(445,207-y);
   glVertex2i(455,210-y);
   glVertex2i(465,220-y);
   glVertex2i(466,200-y);
   glVertex2i(481,225-y);
   glVertex2i(475,216-y);
   glVertex2i(433,212-y);
   glVertex2i(444,207-y);
   glVertex2i(423,210-y);




glEnd();
}
void pass()
{
    displayHelp("wooden bark of trees are moved inside crushing machine",630,820,1,0,0.50);
    displayHelp("The outer layer get converted into small wood chips",630,780,1,0,0.50);
glColor3f(0.80,0.52,0.25);
glBegin(GL_POLYGON);
glVertex2f(0,300);
glVertex2f(0,400);              //flat
glVertex2f(350,400);

glVertex2f(350,300);
glEnd();

glColor3f(0.80,0.52,0.25);
glBegin(GL_POLYGON);
glVertex2f(550,300);              //flat2
glVertex2f(550,400);

glVertex2f(1300,400);
glVertex2f(1300,300);
glEnd();
}
void bark()
{
 if(x2<540)
    {
glColor3f(0.42,0.26,0.15);
glBegin(GL_POLYGON);
glVertex2f(x1,330);                           //bark
glVertex2f(x1,390);

glVertex2f(x2,390);
glVertex2f(x2,330);
glEnd();

    }
}

void bark2()
{
if(x2>440)
{
    x3++;
     x4++;
     usleep(5000);
glColor3f(100.0,0.91,0.84);
glBegin(GL_POLYGON);
glVertex2f(x3,335);
glVertex2f(x3,385);
glVertex2f(x4,385);
glVertex2f(x4,335);
glEnd();
//glFlush();
}
}

void display2()
{
   glClear(GL_COLOR_BUFFER_BIT);
   wallpaper();
//glClear(GL_COLOR_BUFFER_BIT);
pass();
bark2();
 bark();
   part1();
   part2();
   part3();
    machine1();
    if( x2 > 400 )
    {
        pieces();

    }
    part1();
   part2();
   part3();
   machinetop();
   glFlush();
}


void gonext1()
{
  while(x3!=1000)
  {
     x1++;
     x2++;
     usleep(5000);
     display2();
   }
}


void display3()
{
glClear(GL_COLOR_BUFFER_BIT);
pieces();
machine1();
gonext1();
glFlush();
}

void cylinder()
{
   glBegin(GL_POLYGON);
    glColor3f(100.0,0.60,0.07);
    glVertex2f(170,300);
    glColor3f(100,0.90,0);
    glVertex2f(130,420);
    glColor3f(100.0,0.60,0.07);       //fire
    glVertex2f(160,380);
    glColor3f(100,0.90,0);
    glVertex2f(165,450);
    glColor3f(100,0.90,0);
    glVertex2f(190,400);
    glColor3f(100.0,0.60,0.07);
    glVertex2f(450,400);
    glVertex2f(450,300);
    glEnd();


glBegin(GL_POLYGON);
//glColor3f(0,1,1);
 glVertex2f(450,300);
    glVertex2f(450,400);
 glColor3f(100,90,0);
    glVertex2f(475,450);
   glColor3f(100.0,0.60,0.07);
       glVertex2f(480,380);
       glColor3f(100,0.90,0);
    glVertex2f(510,420);
    glColor3f(100.0,0.60,0.07);
    glVertex2f(470,300);
    glEnd();



    glColor3f(0.69,0.77,0.87);

    glBegin(GL_POLYGON);           //upper
    glVertex2f(190,350);
    glVertex2f(190,700);
    glVertex2f(450,700);
    glVertex2f(450,350);
    glEnd();

    glColor3f(0.66,0.66,0.66);
    glBegin(GL_POLYGON);
    glVertex2f(150,150);
    glVertex2f(150,300);       //bottom
    glVertex2f(490,300);
    glVertex2f(490,150);
    glEnd();


    glColor3f(0.80,0.43,0.33);
    glBegin(GL_POLYGON);
    glVertex2f(210,350);
    glVertex2f(210,300);       //1
    glVertex2f(230,300);
    glVertex2f(230,350);
    glEnd();

     glColor3f(0.80,0.43,0.33);
    glBegin(GL_POLYGON);
    glVertex2f(260,350);
    glVertex2f(260,300);       //2
    glVertex2f(280,300);
    glVertex2f(280,350);
    glEnd();

glColor3f(0.80,0.43,0.33);
    glBegin(GL_POLYGON);
    glVertex2f(310,350);
    glVertex2f(310,300);       //3
    glVertex2f(330,300);
    glVertex2f(330,350);
    glEnd();

    glColor3f(0.80,0.43,0.33);
    glBegin(GL_POLYGON);
    glVertex2f(360,350);
    glVertex2f(360,300);       //4
    glVertex2f(380,300);
    glVertex2f(380,350);
    glEnd();

    glColor3f(0.80,0.43,0.33);
    glBegin(GL_POLYGON);
    glVertex2f(410,350);
    glVertex2f(410,300);       //5
    glVertex2f(430,300);
    glVertex2f(430,350);
    glEnd();


}

void stand1()
{
   glColor3f(0.80,0.50,0.20);
    glBegin(GL_POLYGON);
    glVertex2f(0,800);
    glVertex2f(0,830);       //left stand
    glVertex2f(250,830);
    glVertex2f(250,800);
    glEnd();

}

void stand2()
{
   glColor3f(0.80,0.50,0.20);
    glBegin(GL_POLYGON);
    glVertex2f(400,750);
    glVertex2f(400,770);       //right stand
    glVertex2f(1300,900);
    glVertex2f(1300,850);
    glEnd();


    glColor3f(0.70,0.87,0.93);
    glBegin(GL_POLYGON);
    glVertex2f(340,700);
    glVertex2f(400,770);       //chemical
    glVertex2f(400,750);
    glVertex2f(370,700);
    glEnd();

}

void pieces2()
{
glColor3f(0.42,0.26,0.15);
glPointSize(8);
glBegin(GL_POINTS);
glVertex2i(100,840);
glVertex2i(120,830);
glVertex2i(50,845);
glVertex2i(200,840);
glVertex2i(10,840);
glVertex2i(175,850);
glVertex2i(80,830);
glVertex2i(150,840);
glVertex2i(30,845);
glVertex2i(245,830);
glVertex2i(230,845);
glVertex2i(210,832);
glVertex2i(240,835);

glVertex2i(305,800);
glVertex2i(275,805);
glVertex2i(270,700);
glVertex2i(308,720);
glVertex2i(260,735);
glVertex2i(275,810);
glVertex2i(300,825);
glVertex2i(268,815);
glVertex2i(310,820);
glVertex2i(279,815);
glVertex2i(310,750);
glVertex2i(320,760);


glEnd();
}

void createFourthWindow(void)
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(0,0);
	fourthWindow=glutCreateWindow("Simulation of paper manufacturing");
	glutDestroyWindow(thirdWindow);
	glutDisplayFunc(mydisplayFourthWindow);
	glutKeyboardFunc(keyFourth);
	initSecondWindow();

}

void keyFourth(unsigned char key,int x,int y)
{
	if(key=='f')
       createFifthWindow();
        if(key=='x')
      exit(0);
}

void mydisplayFourthWindow()
{
	glClear(GL_COLOR_BUFFER_BIT);
	wallpaper();
  cylinder();
  stand1();
  stand2();
  pieces2();

    displayHelp("Wood chips are mixed with water and chemicals ",600.0,500.0,1,0,0.50);
    displayHelp("and cooked into a paste ",600.0,460.0,1,0,0.50);
   glFlush();
}


void circle(float x,float y,float radius,float r,float g,float b)
{
    float theta;
//glClear(GL_COLOR_BUFFER_BIT);
glColor3f(r,g,b);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{  theta=i*3.142/180;

 glVertex2f(x+radius*cos(theta),y+radius*sin(theta));


}
glEnd();
//glFlush();

}


void roller1(float r,float g,float b)
{

      glColor3f(0.69,0.77,0.87);
    glBegin(GL_POLYGON);        //roller1
    glVertex2f(200,450);
    glVertex2f(200,600);
    glVertex2f(400,600);
       glVertex2f(400,550);
       glVertex2f(470,550);
            glVertex2f(470,450);
    glEnd();
       glColor3f(0.69,0.77,0.87);
    glBegin(GL_POLYGON);
     glVertex2f(200,600);
   glVertex2f(150,650);
    glVertex2f(450,650);
    glVertex2f(400,600);
     glEnd();

      glColor3f(0.69,0.77,0.87);
    glBegin(GL_POLYGON);
     glVertex2f(150,500);
   glVertex2f(150,570);
    glVertex2f(200,550);
    glVertex2f(200,520);
     glEnd();

     glColor3f(0.69,0.77,0.87);
    glBegin(GL_POLYGON);
     glVertex2f(470,510);
   glVertex2f(470,545);
    glVertex2f(600,650);
    glVertex2f(600,625);
     glEnd();
    circle(280,550,40,r,g,b);
    circle(420,500,30,r,g,b);

}

void leftside(float r,float g,float b)
{glColor3f(0.42,0.26,0.15);

    glBegin(GL_POLYGON);
     glVertex2f(0,520);
   glVertex2f(0,550);
    glVertex2f(150,550);
    glVertex2f(150,520);
     glEnd();

     circle(50+x,550,10,r,g,b);
     circle(25+x,548,10,r,g,b);
     circle(75+x,568,12,r,g,b);
     circle(58+x,565,12,r,g,b);

     circle(100+x,555,5,r,g,b);
     circle(60+x,550,10,r,g,b);
     circle(90+x,547,5,r,g,b);
     circle(105+x,550,18,r,g,b);
     circle(80+x,547,16,r,g,b);
     circle(30+x,551,14,r,g,b);
     circle(10+x,550,5,r,g,b);
     circle(45+x,550,10,r,g,b);
     circle(140+x,552,15,r,g,b);
     circle(10+x,552,15,r,g,b);
     circle(140+x,550,15,r,g,b);
     circle(140+x,550,12,r,g,b);

}


void roller2(float r,float g,float b)
{
    circle(600,600,70,r,g,b);
 circle(600,600,70,r,g,b);
    //circle(600,650,70,r,g,b);

    glColor3f(0.69,0.77,0.87);
    glBegin(GL_POLYGON);
    glVertex2f(580,350);
     glVertex2f(580,600);
    glVertex2f(620,600);
    glVertex2f(620,350);
     glEnd();


glColor3f(0.69,0.77,0.87);
    glBegin(GL_POLYGON);
    glVertex2f(550,300);
     glVertex2f(550,400);
    glVertex2f(650,400);
    glVertex2f(650,300);
     glEnd();
     glFlush();

}
void roller3(float r,float g,float b)
{
    circle(600,650,70,r,g,b);
}

void rightside()
{
glColor3f(0.69,0.77,0.87);
    glBegin(GL_POLYGON);
   glVertex2f(600,620);
    glVertex2f(1300,620);
    glVertex2f(1300,480);
    glVertex2f(625,480);

     glEnd();

   glColor3f(0.69,0.77,0.87);
    glBegin(GL_POLYGON);
   glVertex2f(650,620);
   glVertex2f(650,480);
   glVertex2f(600,680);
     glEnd();

}



void papersheet(int x)
{
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(x-20,420);
    glVertex2f(x,530);
    glVertex2f(x+100,530);
    glVertex2f(x+100-20,420);
    glEnd();

}
void mydisplaySixthWindow()
{
   glClear(GL_COLOR_BUFFER_BIT);
   wallpaper();
   glColor3f(0.69,0.77,0.87);
   glBegin(GL_POLYGON);
   glVertex2f(0,400);
   glVertex2f(0,550);
   glVertex2f(1300,550);
   glVertex2f(1300,400);
   glEnd();
   papersheet(20);

   papersheet(140);
   papersheet(260);
   papersheet(380);
   papersheet(500);
   papersheet(620);
   papersheet(740);
   papersheet(860);
    papersheet(980);
    papersheet(1100);
    papersheet(1220);
   displayHelp("The flattered paste is dried out and becomes paper",600,850,1,0,0.50);
   displayHelp("Paper is cut into different shape and size",600,810,1,0,0.50);
   glFlush();

}
void keySeventh(unsigned char key,int x,int y)
{    if(key=='x'||key=='X')
		exit(0);
}

void createSixthWindow(void)
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1300,1000);
	glutInitWindowPosition(0,0);
	glutDestroyWindow(fourthWindow);
	fifthWindow=glutCreateWindow("Simulation of paper manufacturing");
	glutDisplayFunc(mydisplaySixthWindow);
	initSecondWindow();
	//glutKeyboardFunc(key6);
	glutKeyboardFunc(keySeventh);
}


void keySixth(unsigned char key,int x,int y)
{    if(key=='x'||key=='X')
		exit(0);
	if(key=='f')
       createSixthWindow();

}

void createFifthWindow(void)
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1300,1000);
	glutInitWindowPosition(0,0);
	glutDestroyWindow(fourthWindow);
	fifthWindow=glutCreateWindow("Simulation of paper manufacturing");
	glutDisplayFunc(mydisplayFifthWindow);
	initSecondWindow();
	glutKeyboardFunc(keySixth);
}
void paper(float r,float g,float b)
{

    circle(600,630,70,r,g,b);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
   glVertex2f(650,600);
    glVertex2f(1300,600);
    glVertex2f(1300,500);
    glVertex2f(610,500);
    glEnd();

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(650,600);
    glVertex2f(650,500);
    glVertex2f(610,520);
    glEnd();


}

void mydisplayFifthWindow(void)
{
glClear(GL_COLOR_BUFFER_BIT);
wallpaper();
displayHelp("The paste is flattered and water is squeezed out",700,840,1,0,0.50);
displayHelp("and moved inside the roller",700,800,1,0,0.50);
roller1(0.0,0.26,0.32);
leftside(1.0,1.0,1.0);
rightside();
roller3(0.42,0.26,0.15);
paper(1.0,1.0,1.0);
roller2(0.42,0.26,0.15);
glFlush();
}

void displayHelp(char str[],float x,float y,int r,int g,int b)
{
	glColor3f(r,g,b);
	glRasterPos2f(x,y);
		for(i=0;i<strlen(str);i++)
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);
}


