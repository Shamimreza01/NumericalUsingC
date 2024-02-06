#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of terms : ");
    scanf("%d",&n);

    float x[n],y[n];
    printf("Enter the all values of x : ");
    for(int i=0;i<n;i++) scanf("%f",&x[i]);

    printf("Enter the all values of y : ");
    for(int i=0;i<n;i++) scanf("%f", &y[i]);

    float backDiffTable[n][n];
    for(int i=0;i<n;i++) backDiffTable[i][0]=y[i];

    for(int i=1;i<n;i++)
        for(int j=i;j<n;j++)
        backDiffTable[j][i]=backDiffTable[j][i-1]-backDiffTable[j-1][i-1];

    float point;
    printf("Enter the point for interpolation : ");
    scanf("%f",&point);

    float p=(float) (point-x[n-1])/(x[1]-x[0]);
    int fact=1;
    float temp=1;
    float result=y[n-1];

    for(int i=1;i<n;i++){
        fact*=i;
        temp*=p+i-1;
        result+=(float) (temp*backDiffTable[n-1][i])/fact;
    }
    printf("The interpolated value is : %f",result);
}
