#include<stdio.h>
#include <math.h>

float f(float x){
    return x*log10(x)-1.2;
    }

int main()
{
    float a,b,tol;
    printf(" Enter the interval : ");
    scanf("%f %f",&a,&b);

   if(f(a)*f(b)>0)
    {
        printf("this method not aplied for this interval");
    }else if(f(a)*f(b)==0){
        if(f(a)==0) printf("your exact root is : %f",a);
        else  printf("your exact root is : %f",b);
    }else{
       printf(" enter the tolarence :");
       scanf("%f",&tol);

       float c;

        while(fabs(a-b)>=tol)
        {
            c=(a+b)/2;  // change  only this line to make it false position method
            if(f(c)==0) break;

            if(f(c)*f(a)<0) b=c;
            else  a=c;
        }

       printf("approximate root is : %f",c);
    }
    return 0;
}
