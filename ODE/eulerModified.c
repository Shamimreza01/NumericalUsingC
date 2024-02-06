#include<stdio.h>
#include<math.h>
float f(float x,float y){
    return  2*x+y;
}
int main(){
    float a,b,x[1000],y[1000], point;
    int n;
    printf("enter the initial value and boundary value : ");
    scanf("%f %f",&a,&b);
    printf("enter the number of step : ");
    scanf("%d",&n);
    printf("enter point for solve : ");
    scanf("%f",&point);
    x[0]=a,y[0]=b;
    float h=(point-a)/n;
   for(int i=1;i<=n;i++) x[i]=x[i-1]+h;
     for(int i=1;i<=n;i++){
        float k1 = f(x[i-1],y[i-1]); 
        float k2 = f(x[i-1]+h,y[i-1]+h*k1); 
        y[i]=y[i-1]+h*(k1+k2)/2; 
    }
    for(int i=0;i<=n;i++) printf("y[%d]=%f\t",i,y[i]);
}
