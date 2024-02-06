#include<stdio.h>
#include<math.h>

float f(float x,float y){
   return x+y;
}
int main(){
    float a,b,x[1000],y[1000];
    int n;
    printf("enter the initial value and boundary value : ");
    scanf("%f %f",&a,&b);
    printf("enter the number of step : ");
    scanf("%d",&n);
    float point;
    printf("enter point for solve : ");
    scanf("%f",&point);
   //initialization
    x[0]=a,y[0]=b;
    float h=(point-a)/n;

    for(int i=1;i<=n;i++) x[i]=x[i-1]+h;
    for(int i=1;i<=n;i++) y[i]=y[i-1]+h*f(x[i-1],y[i-1]);
     
     //printing the value 
    for(int i=0;i<=n;i++) printf("y[%d]=%f\t",i,y[i]);
}