#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// prototypes
double degreesToRadians(double degree);
double getAirDistance(double originLatitude , double originLongitute ,double destinationLatitude , double destinationLongitude );
double lorentzTimeDilation(double t, double percent);

//degree to radians function
double degreesToRadians(double degree){
    return (degree * 3.14159 / 180);
}
// Fuctions calling
double getAirDistance(double originLatitude , double originLongitute ,double destinationLatitude , double destinationLongitude ){
    originLatitude = degreesToRadians(originLatitude);
    originLongitute = degreesToRadians(originLongitute);
    destinationLatitude = degreesToRadians(destinationLatitude);
    destinationLongitude = degreesToRadians(destinationLongitude);
  // air distance
  double delta = destinationLongitude - originLongitute;
  // average radius
  int R = 6371000;
  double d;
  d = acos(sin(originLatitude) * sin(destinationLatitude) + cos(originLatitude) * cos(destinationLatitude) * cos(delta)) * R;
  return d;
}

