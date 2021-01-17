#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	unsigned int pixel = 0x4Bb9D3,blue,green;
	blue = pixel & 0xFF;
	printf("hexa=%x decimal=%d\n", blue, blue);
	//printf("hexa=%x decimal=%d\n", pixel & 0x000000FF);
	
	//סעיף ב - דרך 1
	green = (pixel & 0xFF00)>>8;
	printf("hexa=%x decimal=%d\n", green, green);
	//printf("hexa=%x decimal=%d\n", (pixel & 0x0000FF00)>>8);

	//סעיף ב' - דרך 2
	green = (pixel >>8) & 0xFF ;
	printf("hexa=%x decimal=%d\n", green, green);
	//printf("hexa=%x decimal=%d\n", (pixel >>8)&0x000000FF;


	//סעיף ג - דרך 1
	green = (pixel & 0xFF0000) >> 16;
	printf("hexa=%x decimal=%d\n", green, green);
	//printf("hexa=%x decimal=%d\n", (pixel & 0x00FF0000)>>16);

	//סעיף ג' - דרך 2
	green = (pixel >> 16) & 0xFF;
	printf("hexa=%x decimal=%d\n", green, green);
	//printf("hexa=%x decimal=%d\n", (pixel >>8)&0x000000FF;

	//סעיף ד' - איפוס הגוון הירוק
	pixel = pixel & 0xFFFF00FF;
	printf("hexa=%X\n", pixel);
	pixel = pixel | 0x2D00;
	//pixel |= 0x2D00;
	printf("hexa=%X\n", pixel);

	//ה' - מאפסים את הכחול והירוק
	//דרך 1
	//pixel = pixel & 0xFFFF0000;
	//דרך 2
	//pixel = (pixel >> 16)<<16;
	printf("hexa=%X\n", pixel);


}