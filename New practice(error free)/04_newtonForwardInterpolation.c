#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the number of terms : ");
    scanf("%d",&n);

    float x[n],y[n];

    printf(" Enter the values of x : \n ");
    for(int i=0;i<n;i++) scanf("%f",&x[i]);

    printf(" Enter the values of y : \n ");
    for(int i=0;i<n;i++) scanf("%f",&y[i]);

    float divDiff[n][n];
    for(int i=0;i<n;i++) divDiff[i][0]=y[i];

    for(int i=1;i<n;i++)
        for(int j=0;j<n-i;j++)
        divDiff[j][i]=divDiff[j+1][i-1]-divDiff[j][i-1];

    float point;
    printf("Enter the point for interpolation : ");
    scanf("%f",&point);

    float p=(float)(point-x[0])/(x[1]-x[0]);
    float result=y[0];
    float fact=1;
    float temp=1.0;
    for(int i=1;i<n;i++){
        fact*=i;
        temp*=p-i+1;
        result+=temp*divDiff[0][i]/fact;
    }
    printf("The interpolated value is : %f ",result);
}










/*





int main(){
    float x[100],y[100];  int n;
    printf(" enter the number of terms : ");
    scanf("%d",&n);
   printf("enter the value of x : \n ");
    for(int i=0;i<n;i++) scanf("%f",&x[i]);
    printf("enter the value of y : \n ");
    for(int i=0;i<n;i++) scanf("%f",&y[i]);
   float divdiff[100][100];
    for(int i=0;i<n;i++)   divdiff[i][0]=y[i];
    for(int i=1; i<n;i++)
     for(int j=0; j<n-i;j++)
     divdiff[j][i]=divdiff[j+1][i-1]-divdiff[j][i-1];
    for(int i=0;i<n;i++) printf("%f\t",divdiff[0][i]);
    float point;
    printf(" enter the point for interpolation : ");
    scanf("%f",&point);
    float p=(float) (point-x[0])/(x[1]-x[0]);
    float result=y[0],temp=1.0;
    int fact=1;
    for(int i=1;i<n;i++){
         fact*=i;
         temp*=(p-i+1);
        result+=(temp*divdiff[0][i])/fact;
    }
  printf("%f",result); return 0;
}
*/
