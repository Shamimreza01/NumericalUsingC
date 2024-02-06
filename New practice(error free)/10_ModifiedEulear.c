#include<stdio.h>
#include<math.h>
float f(float x,float y){
    return 1+x*y;
}
int main(){
    float x0,y[100],modifiedY[100];
    printf("Enter the initial values x0 y0 : ");
    scanf("%f %f",&x0,&y[0]);

    float x;
    printf("Enter the solving point : ");
    scanf("%f",&x);

    int n;
    printf("Enter the number of divisions : ");
    scanf("%d",&n);

    int i,j;
    float h=(float) (x-x0)/n;
    for(i=1;i<=n;i++){
        y[i]=y[i-1]+h*f(x0+(i-1)*h,y[i-1]);
        modifiedY[0]=y[i];
        for(j=1;j<100;j++){
            modifiedY[j]=y[i-1]+(h/2.0)*(f(x0+(i-1)*h,y[i-1])+f(x0+i*h,modifiedY[j-1]));
            printf("%f  ",modifiedY[j]);
            if((modifiedY[j]-modifiedY[j-1])<0.0001) break;
        }
        y[i]=modifiedY[j];
    }

    float result=y[i-1];
    printf("The solution of the given for function at point %f is %f ",x,result);
}
