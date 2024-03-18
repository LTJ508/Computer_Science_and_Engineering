#include<stdio.h>
#define STRSIZE 10

typedef struct
{
    char name[STRSIZE];
    double diameter;
    int moons;
    double orbit_time, rotation_time;
} planet_t;

void print_planet(planet_t );
int print_equal(planet_t, planet_t);
void scan_planet(planet_t *);
int main()
{
    planet_t current_planet, previous_planet, blank_planet = {"", 0, 0, 0, 0};
    /*
        Let's set current planet as
         Jupiter, Diameter = 142,800 km, Moons = 16, orbit time = 11.9 years, rotation time = 9.925hours

    */
    strcpy(current_planet.name, "Jupiter");
    current_planet.diameter = 142800;
    current_planet.moons = 16;
    current_planet.orbit_time = 11.9;
    current_planet.rotation_time = 9.925;

    print_planet(current_planet);
    planet_t my_planet = {"Earth", 12713.5, 1, 1, 24};
    printf("\n");
    if(planet_equal(current_planet, my_planet))
        printf("%s and %s are the same planet\n", current_planet.name, my_planet.name);
    else
        printf("%s and %s are not the same planet\n", current_planet.name, my_planet.name);

    printf("\n");
    print_planet(current_planet);
    scan_planet(&current_planet); // provide this as an input to test - Earth 12713.5 1 1 24
    printf("\n");
    print_planet(current_planet);

}

void scan_planet(planet_t *plnp)
{

    printf("Enter planetary information: ");
    scanf("%s%lf%d%lf%lf", (*plnp).name, &(*plnp).diameter, &(*plnp).moons, &(*plnp).orbit_time, &(*plnp).rotation_time);

}

int planet_equal(planet_t p1, planet_t p2)
{
    return(strcmp(p1.name, p2.name) == 0 &&
           p1.diameter == p2.diameter &&
           p1.moons == p2.moons &&
           p1.orbit_time == p2.orbit_time &&
           p1.rotation_time == p2.rotation_time
          );
}

void print_planet(planet_t planet)
{
    printf("%s\n", planet.name);
    printf("Equatorial diameter: %.0f km\n", planet.diameter);
    printf("Number of moons: %d\n", planet.moons);
    printf("Time to complete one orbit around sun: %f\n", planet.orbit_time);
    printf("Time to complete one orbit around its own axis: %f\n", planet.rotation_time);
}
