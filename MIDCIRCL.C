#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<conio.h>
//#define ROUND(x)(x+0.5)
void mcir(float,float,float);
void sym(float,float,float,float);
void main()
{
	float x1,y1,r;
	int gd=DETECT,gm;
	clrscr();
	initgraph(&gd,&gm,"c:\\turboc3\\BGI");
	printf("\n Enter initial points of circle:");
	scanf("%f%f",&x1,&y1);
	printf("\n Enter the radius:");
	scanf("%f",&r);
	mcir(x1,y1,r);
       //	sym(x1,y1,xc,yc);
       //	putpixel(x+xcenter,y+ycenter,15);
	getch();
	closegraph();
}
void mcir(float x1,float y1,float r)
{
	float x,y,p;
	x=0;
	y=r;
	p=1-r;
	while(x<=y)
	{
		sym(x,y,x1,y1);
		x++;
		if(p<0)
		{
			p=p+2*x+3;
		}
		else
		{
			y=y-1;
			p=p+2*(x-y)+5;
		}
	}
       //	getch();
}
void sym(float x,float y,float xc,float yc)
{
       //	float xc,yc,x1,y1;
	putpixel(x+xc,y+yc,15);
	putpixel(x+xc,-y+yc,15);
	putpixel(y+xc,x+yc,14);
	putpixel(y+xc,-x+yc,14);
	putpixel(-x+xc,y+yc,13);
	putpixel(-x+xc,-y+yc,13);
	putpixel(-y+xc,x+yc,12);
	putpixel(-y+xc,-x+yc,12);
	//getch();
}



















