#pragma once

#include "Common.h"

namespace BuildingStatus
{
    enum { Unassigned = 0, Assigned = 1, UnderConstruction = 2, Size = 3 };
}

class Building
{
public:

    sc2::Point2D    desiredPosition;
    sc2::Point2D    finalPosition;
    sc2::Point2D    position;
    CCUnitType type;
    CCUnit buildingUnit;
    CCUnit builderUnit;
    size_t          status;
    int             lastOrderFrame;
    bool            buildCommandGiven;
    bool            underConstruction;

    Building();

    // constructor we use most often
    Building(CCUnitType t, sc2::Point2D desired);

    // equals operator
    bool operator == (const Building & b);
};
