#include<stdio.h>
int shop(int Ch)
{
    int l=0;
    switch (Ch)
    {
    case 1:printf("Currently, Rate of Shampoo is of 120Rs!\n\t1.Buy\t(or)\t2.Add to Cart\n");
        scanf("%d",&l);
        if(l==1)printf("Purchased successfully!\n");
        else printf("Product added to cart successfully!\n");
        break;
    case 2:printf("Currently, Rate of Laptop is of 120000Rs!\n\t1.Buy\t(or)\t2.Add to Cart\n");
        scanf("%d",&l);
        if(l==1)printf("Purchased successfully!\n");
        else printf("Product added to cart successfully!\n");
        break;
    case 3:printf("Currently, Rate of Phone is of 12000Rs!\n\t1.Buy\t(or)\t2.Add to Cart\n");
        scanf("%d",&l);
        if(l==1)printf("Purchased successfully!\n");
        else printf("Product added to cart successfully!\n");
        break;
    
    case 4:printf("Currently, Rate of Camera is of 120000Rs!\n\t1.Buy\t(or)\t2.Add to Cart\n");
        scanf("%d",&l);
        if(l==1)printf("Purchased successfully!\n");
        else printf("Product added to cart successfully!\n");
        break;
    default:printf("Invalid Product!\n");
        break;
    }
    return 0;
}

int main()
{
    int Ch=0;
    printf("----Products List----\n1.Shampoo\n2.Laptop\n3.Phone\n4.Camera\nEnter the Product Choice\n");
    scanf("%d",&Ch);
    shop(Ch);
    return 0;
}