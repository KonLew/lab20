#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1,Rect *R2){
    double dotx = max(R1->x,R2->x);
    double doty = min(R1->y,R2->y);

    double maxy = max((R1->y-R1->h),(R2->y-R2->h));
    double maxx = min((R1->x+R1->w),(R2->x+R2->w));

    double z = (maxx-dotx)*(doty-maxy);
    if(z > 0) return z;
    else return 0;


}