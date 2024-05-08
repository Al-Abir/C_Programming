#include <stdio.h>
#include<math.h>
#define PI 3.14159

//golobal function declare
double get_diameter(int radious);
double get_surface(int radious);
double get_area(int radious);

int main() {
      int radious;
      scanf("%d",&radious);

      double diameter = get_diameter(radious);
      double surface =  get_surface(radious);
      double area = get_area(radious);

      printf("Diameter: %f\n",diameter);
      printf("Surface: %f\n",surface);
      printf("Area: %f\n",area);
   return 0;
}

double get_diameter(int radious){
    return (2*radious);
}
double get_surface(int radious){
    return (2*PI*radious);
    
}
double get_area(radious){
    return (PI*radious*radious);
}
