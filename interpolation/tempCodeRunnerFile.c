#include<stdio.h>
#include<math.h>

int main(){
    float x[100],y[100];
    int n;
    printf(" enter the number of terms : ");
    scanf("%d",&n);

    printf("enter the value of x : \n ");
    for(int i=0;i<n;i++) scanf("%f",&x[i]);

    printf("enter the value of y : \n ");
    for(int i=0;i<n;i++) scanf("%f",&y[i]);

    float divdiff[100][100];
    for(int i=0;i<n;i++)   divdiff[i][0]=y[i];

    //making the forward difference table
    for(int i=1; i<n;i++)
     for(int j=0; j<n-i;j++)
     divdiff[j][i]=divdiff[j+1][i-1]-divdiff[j][i-1];

    for(int i=0;i<n;i++) printf("%f\t",divdiff[0][i]);

    float point;
    printf(" enter the point for interpolation : ");
    scanf("%f",&point);

    // making sequence for geting the result
    float p=(float) (point-x[0])/(x[1]-x[0]);
    float result=y[0],temp=1.0;
    int fact=1;
    for(int i=1;i<n;i++){
         fact*=i;
         temp*=(p-i+1);
        result+=(temp*divdiff[0][i])/fact;
    }
     
  printf("%f",result);
}