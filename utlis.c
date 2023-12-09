#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    double originLatitude , originLongitude , destinationLatitude , destinationLongitude;
    double t ;
    double percentC;

printf("Enter lattitude of origin:");  
scanf("%lf", &originLatitude);
printf("Enter longitude of origin:");
scanf("%lf", &originLongitude);
printf("Enter latitude of destination:");
scanf("%lf", &destinationLatitude);
printf("Enter longitude of destination:");
scanf("%lf", &destinationLongitude);

printf("Enter a time in number of years:");
scanf("%lf", &t);

printf("Enter the percentage of c:");
scanf("%lf",&percentC);

printf("The air distance between two latitude longitude points is : %lf\n");

printf("The time dilated experienced by the travelling object iss : %lf sec\n");
}