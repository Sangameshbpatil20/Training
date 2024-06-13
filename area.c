#include<stdio.h>
#include<conio.h>
int areaofrec(int length,int breadth)
{
    int area=0;
    area=length*breadth;
    return area;
}
int areaofsq(int side)
{
    int area=0;
    area=side*side;
    return area;
}
int areaoftri(int base,int height)
{
    int area=0;
    area=0.5*base*height;
    return area;
}
int areaofcircle(int radius)
{
    int area=0;
    area=3.142*radius*radius;
    return area;
}
int main()
{
    int length,breadth,width,height,area,side,op=0;float radius=0;
    printf("-----Area of-----\n1.Rectangle\n2.Square\n3.Triangle\n4.Circle\n");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
        printf("Enter the Length & Breadth of a Rectangle\n");
        scanf("%d %d",&length,&breadth); 
        area=areaofrec(length,breadth);
        break;
    case 2:
        printf("Enter the Side of a Square\n");
        scanf("%d",&side); 
        area=areaofsq(side);
        break;
    case 3:
        printf("Enter the Width & Height of a Triangle\n");
        scanf("%d %d",&width,&height); 
        area=areaoftri(width,height);
        break;
    case 4:
        printf("Enter the Radius of a Circle\n");
        scanf("%f",&radius); 
        area=areaofcircle(radius);
        break;
    default:printf("Invalid Option!");
        break;
    }
    return 0;
}