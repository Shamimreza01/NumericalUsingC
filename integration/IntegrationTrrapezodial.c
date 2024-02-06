#include<stdio.h>
#include<math.h>

float f(float x){
    return x*x;
}
int main(){
    float a,b,x[1000],y[1000];
    int n;
    printf("enter the interval : ");
    scanf("%f %f",&a,&b);
    printf("enter the number of division(remember that max division size is 999) : ");
    scanf("%d",&n);

   //initialization
    x[0]=a;
    float h=(b-a)/n;

    for(int i=1;i<=n;i++) x[i]=x[i-1]+h;
    for(int i=0;i<=n;i++) y[i]=f(x[i]);

    float result=0;
    for(int i=0;i<=n;i++){
        if(i==0||i==n) result+=y[i];
        else result+=2*y[i];
    }
    result=(h/2)*result;

    printf(" the integrated value is : %f",result);
}