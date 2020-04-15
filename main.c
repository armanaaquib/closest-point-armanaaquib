#include <stdio.h>
#include "point.h"

int main(void)
{
  Point food_points[] = FOOD_POINTS;
  unsigned points_length = POINTS_LENGTH;
  Point closest_food_location, current_location;
  int x, y;

  printf("Enter Location of organism(x, y): ");
  scanf("%d,%d", &x, &y);

  current_location = (Point){.x=x, .y=y};
  get_closest_food(food_points, points_length, current_location, &closest_food_location);
  
  printf("Location of organism: [%d %d],  ", x, y);
  printf("Closest food target : [%d %d]\n", closest_food_location.x, closest_food_location.y);

  return 0;
}
