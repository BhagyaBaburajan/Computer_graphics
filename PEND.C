#include<graphics.h>
#include<dos.h>
#include<conio.h>
void main()
{
	int i,j=0;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\BGI");
	while(j<3)
	{
	for(i=150;i<=190;i+=2)
	{
	rectangle(100,50,200,150);
	circle(150,100,50);
	putpixel(150,100,15);
	rectangle(100,150,200,350);
	bar(140,150,160,165);
	line(150,165,i,240);
	pieslice(i,245,0,360,10);
	delay(50);
	cleardevice();
	}
	for(i=180;i>=110;i-=2)
	{
	rectangle(100,50,200,150);
	circle(150,100,50);
	putpixel(150,100,15);
	rectangle(100,150,200,350);
	bar(140,150,160,165);
	line(150,165,i,240);
	pieslice(i,245,0,360,10);
	delay(50);
	cleardevice();
	}
	j++;
	}
	getch();
	closegraph();
}