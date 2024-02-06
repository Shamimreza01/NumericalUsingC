#include<stdio.h>
#include<math.h>

float f(float x){
     return 1/(1+x*x);
}
int main(){
    float a,b,h,y[100];
    int n;
    printf("Enter the interval : ");
    scanf("%f %f",&a,&b);

    printf("Enter the numbers of divitions : ");
    scanf("%d",&n);

    h=(float)(b-a)/n;

    for(int i=0;i<=n;i++) y[i]=f(a+i*h);

    float tempresult=0;

    for(int i=0;i<=n;i++){
        if(i==0||i==n) tempresult+=y[i];
        else if(i%2==0) tempresult+=2*y[i];
        else tempresult+=4*y[i];
    }
    float result= (float) (h/3)*tempresult;

    printf("the integrated value is : %f ",result);
    return 0;
}
