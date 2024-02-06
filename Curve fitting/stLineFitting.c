#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("enter the number of point : ");
    scanf("%d",&n);
    float x[50],y[50],sum_x=0.0,sum_y=0.0,avg_x,avg_y;
    printf(" enter all x : ");
    for(int i=0;i<n;i++) { 
        scanf("%f",&x[i]);
        sum_x+=x[i];
    }
    avg_x=sum_x/n;

    printf(" enter all y : ");
    for(int i=0;i<n;i++){
        scanf("%f",&y[i]);
        sum_y+=y[i];
    }
    avg_y=sum_y/n;

    float squre_x=0,xy=0;
    for(int i=0;i<n;i++){
        squre_x+=x[i]*x[i];
        xy+=x[i]*y[i]; 
    }
    printf("x^2=%f  xy=%f \n",squre_x,xy);

    float a,b;
    a=((n*xy)-(sum_x*sum_y))/((n*squre_x)-(sum_x*sum_x));
    b=avg_y-(a*avg_x);

    printf("the straight line is : y=%f+%fx",b,a);

    return 0;
}