#pragma once
#include "Route.h"

class RouteManagement {
private:
    Route** routes;
    int routeCount;
    int routeSize;
public:
    RouteManagement();
    ~RouteManagement();
    void addRoute(string, string, string, int, int, int, float);
    void addRoute(Route*);
    void deleteRoute(string);
    string displayAllRoutes();
    string toStringSingleRoute(string name);
    void modifyRoute(string, string, string, int, int, int, float);
    Route* findRoute(string);
};