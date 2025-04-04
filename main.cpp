#include <iostream>
#include "Empirical/include/emp/math/Random.hpp"

// First you’ll need an Organism class that has an instance variable double behavior and a constructor that takes a double and sets the instance variable.
class Organism
{
public:
    double behavior;

    // Constructor that takes a double and sets the instance variable
    Organism(double b) : behavior(b) {}
};

int main()
{
    emp::vector<Organism> population;

    // Then fill your population with 100 Organisms with all the same starting behavior
    for (int i = 0; i < 100; ++i)
    {
        population.push_back(*new Organism(0.5)); // All starting with behavior 0.5

        // Print the behavior of one organism
        std::cout << "Organism " << i << " behavior: " << population[i].behavior << std::endl;
    }
}