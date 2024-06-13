#include<stdio.h>
#include<conio.h>
int movies(int movie)
{
    int rate=0;
    switch (movie)
    {
    case 1:
        rate=80;
        c="BulBul";
        break;
    case 2:
        rate=100;
        c="Gaja";
        break;
    case 3:
        rate=160;
        c="Kaatera";
        break;
    case 4:
        rate=180;
        c="Brundavana";
        break;
    default:printf("Invalid Movie Choice");
        break;
    }
    printf("The movie %c is of rate %d",c,rate);
    return 0;
}
int main()
{
    int movie=0;
    printf("Enter the Movie Choice\n----Movie List----\n1.BulBul\n2.Gaja\n3.Kaatera\n4.Brundavana");
    scanf("%d",&movie);
    movies(movie);
    return 0;
}