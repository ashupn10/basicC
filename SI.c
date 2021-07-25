#include<stdio.h>
int main(){
int p,r,t;
float SI;
printf("enter the principal");
scanf("%d",&p);
printf("enter the rate");
scanf("%d",&r);
printf("enter the time in years");
scanf("%d",&t);
SI=p*r*t/100;
printf("the simple interest is %f",SI);
}
