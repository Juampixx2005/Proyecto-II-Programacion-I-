#include "FloatClassification.h"

FloatClassification::FloatClassification() {
    fleetSize = 9;
    planeCount = 9;
    fleet = new Plane * [fleetSize];

    fleet[0] = new Plane("A1", "Boeing", 50.5, false, 5000, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr);
    fleet[1] = new Plane("B2", "Airbus", 45.0, false, 4800, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr);
    fleet[2] = new Plane("C3", "Cessna", 10.2, false, 2000, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr);
    fleet[3] = new Plane("D4", "Lockheed", 70.0, true, 6000, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr);
    fleet[4] = new Plane("E5", "Bombardier", 40.0, false, 4600,nullptr, nullptr, nullptr, nullptr, nullptr, nullptr);
    fleet[5] = new Plane("F6", "Gulfstream", 35.5, false, 4200, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr);
    fleet[6] = new Plane("G7", "Sukhoi", 65.0, true, 5500, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr);
    fleet[7] = new Plane("H8", "Embraer", 38.8, false, 4400, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr);
    fleet[8] = new Plane("I9", "Antonov", 90.0, true, 7000, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr);
}

FloatClassification::~FloatClassification() {
    for (int i = 0; i < planeCount; i++) {
        delete fleet[i];
    }
    delete[] fleet;
}

void FloatClassification::addPlane(Plane* newPlane) {
    if (planeCount < fleetSize) {
        fleet[planeCount] = newPlane;
        planeCount++;}
}

void FloatClassification::removePlane(string category) {
    for (int i = 0; i < planeCount; i++) {
        if (fleet[i]->getCategory() == category) {
            delete fleet[i];

            for (int j = i; j < planeCount - 1; j++) {
                fleet[j] = fleet[j + 1];
            }

            planeCount--;
            return;
        }
    }
}

string FloatClassification::toString() {
    stringstream ss;
    ss << "Category | Brand      | Capacity | Military | Range\n";
    ss << "---------------------------------------------------\n";

    for (int i = 0; i < planeCount; i++) {
        ss << fleet[i]->getCategory() << " | "
            << fleet[i]->getBrand() << " | "
            << fleet[i]->getChargeCapacity() << " m³ | " //Posiblemente hay que cambiarlo a m^3 
            << (fleet[i]->getMilitary() ? "Yes" : "No") << " | "
            << fleet[i]->getDistanceRange() << " km\n";
    }

    return ss.str();
}

string FloatClassification::toStringSinglePlane(string category) {
    stringstream ss;

    for (int i = 0; i < planeCount; i++) {
        if (fleet[i]->getCategory() == category) {
            ss << "Category: " << fleet[i]->getCategory() << endl
                << "Brand: " << fleet[i]->getBrand() << endl
                << "Capacity: " << fleet[i]->getChargeCapacity() << " m³\n" //Posiblemente hay que cambiarlo a m^3 
                << "Military: " << (fleet[i]->getMilitary() ? "Yes." : "No.") << "\n"
                << "Range: " << fleet[i]->getDistanceRange() << " km\n";
            return ss.str();
        }
    }

    return "Plane not found.\n";
}