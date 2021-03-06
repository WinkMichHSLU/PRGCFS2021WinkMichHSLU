// <> suche im Systempfad
#include <stdio.h>

// "" suche lokal
#include "rectangle.h"




struct Rectangle myRectangle;


struct Rectangle *pRectangle = &myRectangle;  // pointer to struct Rectangle!

int main(){
	myRectangle.bottomLeftCorner.x = 5.0;
	myRectangle.bottomLeftCorner.y = 5.0;
	myRectangle.topRightCorner.x = 35.0;
	myRectangle.topRightCorner.y = 35.0;

	pRectangle->area = ComputeRectangleArea(&myRectangle);
	
	printf("Area (arrow): %.2f\n", pRectangle->area);
	printf("Area (star): %.2f\n", (*pRectangle).area);
	
	return 0;
}


double ComputeRectangleArea(struct Rectangle *pRect){
	double deltaX = (pRect->topRightCorner.x - pRect->bottomLeftCorner.x);
	double deltaY = (pRect->topRightCorner.y - pRect->bottomLeftCorner.y);
	return deltaX*deltaY;
}

