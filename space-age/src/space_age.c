#include "space_age.h"
#define EARTH 31557600

static const float factors[8] = {EARTH * 0.2408467,EARTH * 0.61519726,EARTH * 1,EARTH * 1.8808158,EARTH * 11.862615,EARTH * 29.447498,EARTH * 84.016846,EARTH * 164.79132};

float convert_planet_age(planet_t planet, const long input)
{
   return input / factors[planet];
}
