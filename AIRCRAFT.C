#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int i,j;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\BGI");
for(i=10,j=500;i<=500;j-=10,i+=10)
{
line(i,j-150,i+140,j-250);
line(i+60,j-270,i+140,j-250);
line(i+60,j-270,i+40,j-180);
line(i+40,j-180,i,j-200);
line(i,j-200,i,j-150);
delay(50);
cleardevice();
}
getch();
closegraph();
}