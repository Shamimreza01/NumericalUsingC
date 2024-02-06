#include<stdio.h>
#include<math.h>
float f(float x){
    return x*x*x+x*x-1;
}
float phif(float x){
    return 1/pow(1+x,1.0/2);
}
float df(float x){
    return (-1.0/2)*(pow(1+x,-3.0/2));
}

int main(){
    float a,b,tol,x0;

    printf("enter the interval :");
    scanf("%f %f",&a,&b);

    printf("enter the initial guess ");
    scanf("%f",&x0);

    if(f(a)*f(b)>0 || df(x0)>=1){
        printf("this method is not applicable for this interval ");
    }else{
        printf("enter the tol");
        scanf("%f",&tol);

        while(fabs(x0-phif(x0))>tol){
            x0=phif(x0);
        }
        printf("the real root is %f", x0);
    }
}
