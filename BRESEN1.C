#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<conio.h>
void bres(float x1,float y1,float x2,float y2);
void main()
{
	float x1,x2,y1,y2,p,dy,dx,x,y;
	int gd=DETECT,gm;
	clrscr();
	initgraph(&gd,&gm,"c:\\turboc3\\BGI");
	printf("\n Enter final points");
	scanf("%f%f",&x2,&y2);
	printf("\n Enter initial points:");
	scanf("%f%f",&x1,&y1);
	bres(x1,y1,x2,y2);
	getch();
	closegraph();
}
void bres(float x1,float y1,float x2,float y2)
{
	float p,dy,dx,x,y;
	dy=y2-y1;
	dx=x2-x1;
	p=2*dy-dx;
	x=x1;
	y=y1;
	while(x<=x2)
	{
		x++;
		putpixel(x,y,15);
		if(p<0)
		{
			p=p+2*dy;
		}
		else
		{
			y=y+1;
			p=p+2*(dy-dx);
		}
	}
	getch();
}
