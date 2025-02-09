#pragma once
#include "Plane.h"

class FloatClassification {
private:
    Plane ** fleet;
    int planeCount;
    int fleetSize;

public:
    FloatClassification();
    ~FloatClassification();
    void addPlane(Plane*);
    void removePlane(string);
    string toString();
    string toStringSinglePlane(string);
};