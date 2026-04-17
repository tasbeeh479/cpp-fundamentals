#include <iostream>

using namespace std;

int main()
{
    const float earth_grvity = 9.8;
    const float moon_graity = (1.0/6)*earth_grvity;
    float weight_on_earth,weight_on_moon,mass;

    cout << "Weight on Earth: ";
    cin>>weight_on_earth;

    mass = weight_on_earth/earth_grvity;
    weight_on_moon = mass * moon_graity;

    cout<<"\nWeight on Moon: "<<weight_on_moon;

    return 0;
}