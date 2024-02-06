#include<stdio.h>
#include<math.h>

float f(float x){
    return x*x;
}
int main(){
    float a,b;
    int n;
    printf("enter the interval : ");
    scanf("%f %f",&a,&b);
    printf("enter the number of division(it only work when the divided is multiplier of three) : ");
    scanf("%d",&n);
    
    if(n%3==0){
   //initialization
   float x[1000],y[1000];
    x[0]=a;
    float h=(b-a)/n;

    for(int i=1;i<=n;i++) x[i]=x[i-1]+h;
    for(int i=0;i<=n;i++) y[i]=f(x[i]);

    float result=0;
    for(int i=0;i<=n;i++){
        if(i==0||i==n) result+=y[i];
        else if(i%3==0) result+=2*y[i];
        else result+=3*y[i];
    }
    result=(3*h/8)*result;

    printf(" the integrated value is : %f",result);
    }else{
       printf("this rule is not applicable,because you enter odd number subdivision ");
    }
}