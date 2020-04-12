#include <stdlib.h>
#include <math.h>
#include "point.h"

unsigned get_distance(Point *organism_location, Point *food_location)
{
  unsigned horizontal_distance = abs(food_location->x - organism_location->x);
  unsigned vertical_distance = abs(food_location->y - organism_location->y);

  return sqrt(pow(horizontal_distance, 2) + pow(vertical_distance, 2));
}

void get_closest_food(Point food_points[], unsigned points_length, Point current_location, Point *closest_food_location)
{
  unsigned closest_distance, distance;

  closest_distance = get_distance(&current_location, &food_points[0]);
  *closest_food_location = food_points[0];
  ITERATE(1, points_length)
  {
    distance = get_distance(&current_location, &food_points[index]);

    if(distance < closest_distance)
    {
      *closest_food_location = food_points[index];
      closest_distance = distance;
    }
  }

}