/* Calculate the area of a circle and modify 
the same program to calculate the Volume Of
a Cylinder given its radius and height.
*/
#include<stdio.h>
int main()
{
    int r=6,h=8;
    
    printf("the area of the circle with radius %d is %f\n",r,3.14*r*r);
     printf("the volume of the cylinder with radius %d and height %d is %f",r,h,3.14*r*r*h);

    return 0;
}