#include<stdio.h>

int main(){
    int radious;
    float pi=3.14;
    printf("the radious of circle\n");
    scanf("%d", &radious);
    printf("the area of circle is %f\n" ,pi*radious*radious);
    int height ;
    printf("the height of cylinder\n");
    scanf("%d",&height);
    printf("the volume of cyliner is %f", pi*radious*radious*height);
    return 0;
} 