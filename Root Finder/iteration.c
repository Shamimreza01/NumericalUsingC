#include<stdio.h>
#include<math.h>

float f(float x){
  return x*sqrt(x+1)-1;
}
float phyf(float x){
     return 1 / sqrt(x + 1);
}
float df(float x){
   return -1/(2*pow(x + 1, 1.5));
}

int main(){
    float x0;
    printf(" enter the initial value for the required root : ");
    scanf("%f",&x0);

    if(df(x0)>1){
        printf(" this method is not applicable for this initial value ,  because for this value the function may not converge");
    }else if(f(x0)==0){
        printf("your requiresd root is : %f",x0);
    }else{
        float tol;
        printf("enter the tolarence : ");
        scanf("%f",&tol);

        while(fabs(x0-phyf(x0))>tol){
            x0=phyf(x0);
        }
        printf("your requiresd root is : %.8f",x0);
    }
    return 0;
}
