#include<stdio.h>

float f(float x)
{
    return x*x-2;
}
int main(){
    float a,b,c,tol;

    printf("enter the interval : ");
    scanf("%f %f",&a,&b);

    if(f(a)*f(b)>0){
        printf(" this method is not applicable for this interval");

    }else if(f(a)*f(b)==0){
        if(f(a)==0) printf("the root is %f ",a);
        else printf("the root is %f ",b);
    }
    else{
        printf("enter the tol");
        scanf("%f",&tol);

        while(fabs(a-b)>=tol){
            c=(a+b)/2;
            if(f(c)==0) printf("the root is %f",c);
            if(f(a)*f(c)<0) b=c;
            else a=c;
        }
        printf("the real root is %f ", c);
    }
}
