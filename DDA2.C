#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<conio.h>
#define ROUND(x)(x+0.5)
void main()
{
	float x1,x2,y1,y2,m,dy,dx,x,y;
	int gd=DETECT,gm;
	clrscr();
	initgraph(&gd,&gm,"c:\\turboc3\\BGI");
	printf("\n Enter final points");
	scanf("%f%f",&x2,&y2);
	printf("\n Enter initial points:");
	scanf("%f%f",&x1,&y1);
	dy=y2-y1;
	dx=x2-x1;
	m=dy/dx;
	printf("The slope is %f",m);
	x=x1;
	y=y1;
	while(x<x2)
	{
		putpixel(ROUND(x),ROUND(y),15);
		x++;
		y=y+m;
	}

	while(y<y2)
	{
		putpixel(ROUND(x),ROUND(y),15);
		y++;
		x=x+(1/m);
	}
	getch();
	closegraph();
}