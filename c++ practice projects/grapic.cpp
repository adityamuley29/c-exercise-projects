#include<iostream>
#include<graphics.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\TC\BGI");
    putpixel(100,100,RED);
    closegraph();

}
