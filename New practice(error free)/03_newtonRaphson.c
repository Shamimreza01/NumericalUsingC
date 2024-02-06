#include<stdio.h>
#include<math.h>

float f(float x){
    return sin(x)-(x/2.0);
}

float df(float x){
    return cos(x)-(1.0/2);
}

int main(){
    float a,b,tol,x0;

    printf("enter the interval : ");
    scanf("%f %f",&a,&b);

    printf("enter the initial guess : ");
    scanf("%f",&x0);

    if(f(a)*f(b)>0 || df(x0)==0){
        printf("this method is not applicable inthis interval ");
    }else{
        printf("enter the tol : ");
        scanf("%f",&tol);

        while(fabs(x0- (x0-(f(x0)/df(x0))))>tol){
            x0=(x0-(f(x0)/df(x0)));
        }
        printf("the real root is %f : ",x0);
    }
}
