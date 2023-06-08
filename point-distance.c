#include <stdio.h>
#include <math.h>

//Point Struct
typedef struct {
	int x;
	int y;
} Point;

void printPoint(Point* point);
void calculateDistance(Point* point1, Point* point2);

int main(){
	Point point1 = {0,0};
	Point point2 = {6,8};
	printPoint(&point1);
	printPoint(&point2);
	calculateDistance(&point1, &point2);
	return 0;
}

void printPoint(Point* point){
	printf("Point: {%d, %d}\n", point->x, point->y);
}

void calculateDistance(Point* point1, Point* point2){
	int x1 = point1->x;
	int x2 = point2->x;
	
	int y1 = point1->y;
	int y2 = point2->y;
	
	double x = x2 - x1;
	double y = y2 - y1;
	
	double x_result = pow(x, 2.0);
	double y_result = pow(y, 2.0);

	double result = x_result + y_result;

	double distance = sqrt(result);

	printf("Distance: %.2lf\n", distance);
}
