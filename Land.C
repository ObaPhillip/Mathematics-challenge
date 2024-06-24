#include<stdio.h>
int main(){
//A program to approximate the prices of plots of land.    
double pricePerDecimal;
int numSides;
double totalPerimeter=0;
double sideMeasurement;
double averageLength;
double approximateSize;
double plotSize;
printf("Enter the price per decimal:");
scanf("%lf", &pricePerDecimal);
printf("Enter the number of sides of the land:");
scantf("%d", &numSides);
for(int i=;i<=numSides;i++){
printf("Enter the measurement of sides %d:",i);
scanf("%lf", &sideMeasurement);
totalPerimeter+=sideMeasurement;
}
averageLength=totalPerimeter/numSides;
approximateSize=(averageLength *averageLength)*0.025;
plotPrice=pricePerDecimal*approximateSize;
printf("The approximate size of the land in decimals is:%.2lf\n", plotPrice);
printf("The price of the plot is : %.2lf\n", plotPrice);
return 0;

}














