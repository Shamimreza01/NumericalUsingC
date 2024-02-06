#include<stdio.h>
#include<math.h>
float f(float x){
    return x*x-2;
}
float df(float x){
    return 2*x;
}

int main(){
    float x0;
    float epsilon=1e-9;
    printf(" enter the initial value for the required root : ");
    scanf("%f",&x0);

    if(df(x0)<epsilon){
        printf(" this method is not applicable for this initial value, because for this value the function may not converge");
    }else if(f(x0)==0){
        printf("your requiresd root is : %f",x0);
    }else{

        float tol;
        printf("enter the tolarence : ");
        scanf("%f",&tol);

        while(fabs(x0- (x0-f(x0)/df(x0)))>tol){

            x0=(x0-f(x0)/df(x0));
        }
        printf("your requiresd root is : %f",x0);
    }
    return 0;
}
