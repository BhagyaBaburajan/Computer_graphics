#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int i;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");

	for(i=80;i<500;i+=5)
	{
	circle(i,250,60);
	circle(i+270,250,60);
	circle(i,250,50);
	circle(i+270,250,50);

	line(i,200,i,300);
	line(i-50,250,i+50,250);
	line(i+270,200,i+270,300);
	line(i+220,250,i+320,250);

	line(i,250,i+270,250);
	line(i+30,100,i,250);
	line(i+270,250,i+30,100);
	line(i+30,100,i+30,90);

	pieslice(i+30,70,0,360,20);

	line(i+270,250,i+270,40);
	line(i+30,100,i+270,50);
	arc(i+270,20,250,100,20);
	delay(50);
	cleardevice();
	}

	getch();
	closegraph();
}