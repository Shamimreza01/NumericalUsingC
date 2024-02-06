#include<stdio.h>
#include<math.h>
float f(float x,float y){
    return x+y;
}
int main(){
    float x0,y[100];
    printf("Enter the initial values x0 y0 : ");
    scanf("%f %f",&x0,&y[0]);

    float x;
    printf("Enter the solving point : ");
    scanf("%f",&x);

    int n;
    printf("Enter the number of divisions : ");
    scanf("%d",&n);

    int i;
    float h=(float) (x-x0)/n;
    for(i=1;i<=n;i++) y[i]=y[i-1]+h*f(x0+(i-1)*h,y[i-1]);

    float result=y[i-1];
    printf("The solution of the given for function at point %f is %f ",x,result);
}
