
struct Point2d {
	double x;
	double y;
};


struct Rectangle {
	struct Point2d bottomLeftCorner;
	struct Point2d topRightCorner;
	double area;
	double perimeter;
};

double ComputeRectangleArea(struct Rectangle *pRect);

 
