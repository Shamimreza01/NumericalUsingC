#include<stdio.h>
#include<math.h>
float f(float x){
    return 1/(1+x*x);
}
int main(){
    float a,b,y[100];
    printf("Enter the interval : ");
    scanf("%f %f",&a,&b);
    int n;
    printf("Enter the number of division : ");
    scanf("%d",&n);

    float h=(float) (b-a)/n;
    for(int i=0;i<=n;i++) y[i]=f(a+i*h);
    float tempresult=0;

    for(int i=0;i<=n;i++){
        if(i==0 || i==n ) tempresult+= y[i];
        else tempresult+=2*y[i];
    }

    float result=(float) (h/2.0)*tempresult;
    printf("The integrated value is : %f",result);
}
