#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
//ceil
int fir = ceil(4.6);
printf("%d \n",fir);
//floor
int fir2 = floor(4.6);//remove decimal
printf("%d \n",fir2);
//round
int fir3 = round(4.5);//0.5 means up to int
printf("%d \n",fir3);
//sqrt
int fir4 = sqrt(25);
printf("%d \n",fir4);
//pow
int fir5 = pow(5,2);
printf("%d \n",fir5);
//abs
int fir6 = abs(-20);
printf("%d \n",fir6);
return 0;
}