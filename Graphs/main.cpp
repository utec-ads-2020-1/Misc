#include <iostream>

using namespace std;

struct City {
    int id;
    string name;
    double latitude;
    double longitude;
};

struct Airport {
    int id;
    string name;
    string city;
    string country;
    double latitude;
    double longitude;
};

int main(int argc, char *argv[]) {
    City lima;
    Graph<City, double> cities;
    cities.insertVertex(lima.id, lima);
    cities.findById(lima.id);

    City galeao;
    Graph<Airport, double> airports;
    airports.insertVertex(galeao.id, galeao);
    airports.createEdge(....)

    return EXIT_SUCCESS;
}