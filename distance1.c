#include <stdio.h>

int main() {
    double distance_km, distance_m, distance_ft, distance_inch, distance_cm;

    
    printf("Enter distance between two cities in kilometers: ");
    scanf("%lf", &distance_km);

   
    distance_m = distance_km * 1000;            
    distance_ft = distance_km * 3280.84;        
    distance_inch = distance_ft * 12;          
    distance_cm = distance_km * 100000;         

   
    printf("Distance in meters: %.2f m\n", distance_m);
    printf("Distance in feet: %.2f ft\n", distance_ft);
    printf("Distance in inches: %.2f inches\n", distance_inch);
    printf("Distance in centimeters: %.2f cm\n", distance_cm);

    return 0;
}
