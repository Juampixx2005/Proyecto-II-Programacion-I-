#include "RouteManagement.h"

RouteManagement::RouteManagement() {
    routeCount = 0;
    routeSize = 10;
    routes = new Route * [routeSize];
    for (int i = 0; i < routeSize; i++) {
        routes[i] = nullptr;
    }
}

RouteManagement::~RouteManagement() {
    for (int i = 0; i < routeCount; i++) {
        delete routes[i];
    }
    delete[] routes;
}

void RouteManagement::addRoute(string name, string origin, string destiny, int hours, int minutes, int scales, float ticketValue) {
    if (routeCount < routeSize) {
        routes[routeCount] = new Route(name, origin, destiny, new Hour(hours, minutes), scales, ticketValue);
        routeCount++;
    }
}

void RouteManagement::addRoute(Route* newRoute) {
    if (routeCount < routeSize) {
        routes[routeCount] = newRoute;
        routeCount++;
    }
}

void RouteManagement::deleteRoute(string name) {
    for (int i = 0; i < routeCount; i++) {
        if (routes[i]->getName()==name) {
            delete routes[i];
            for (int j = i; j < routeCount - 1; j++) {
                routes[j] = routes[j + 1];
            }
            routeCount--;
        }
    }
}

string RouteManagement::displayAllRoutes() {
    stringstream ss;
    ss << "Name | Origin | Destiny | Duration | Scales | Ticket Value\n";
    for (int i = 0; i < routeCount; i++) {
        ss  << routes[i]->getName() << " | "
            << routes[i]->getOrigin() << " | "
            << routes[i]->getArrival() << " | "
            << routes[i]->getDuration()->toString() << " | "
            << routes[i]->getScalesQuantity() << " | "
            << routes[i]->getTicketValue() << "USD." << endl;
    }
    return ss.str();
}

string RouteManagement::toStringSingleRoute(string name) {
    Route* route = findRoute(name);
if (route) {
        return route->toString();}
    else {
        return "Route not found.\n";}
}


void RouteManagement::modifyRoute(string name, string origin, string destiny, int hours, int minutes, int scales, float ticketValue) {
    for (int i = 0; i < routeCount; i++) {
        if (routes[i]->getName() == name) {
            routes[i]->setDestiny(destiny);
            routes[i]->setOrigin(origin);
            routes[i]->setDuration(new Hour(hours, minutes));
            routes[i]->setScalesQuantity(scales);
            routes[i]->setTicketValue(ticketValue);
        }
    }
}

Route* RouteManagement::findRoute(string name) {
    for (int i = 0; i < routeCount; i++) {
        if (routes[i]->getName() == name) {
            return routes[i];
        }
    }
    return nullptr;
}
