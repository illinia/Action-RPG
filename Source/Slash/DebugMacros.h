﻿#pragma once
#include "DrawDebugHelpers.h"

#define DRAW_SPHERE(Location, Color) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 12, Color, true);
#define DRAW_LINE(StartLocation, EndLocation) if (GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, true, -1.f, 0, 1.f);
#define DRAW_POINT(Location) if (GetWorld()) DrawDebugPoint(World, Location, 15.f, FColor::Red, true);
#define DRAW_VECTOR(StartLocation, EndLocation) if (GetWorld()) \
{\
DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, true, -1.f, 0, 1.f);\
DrawDebugPoint(World, EndLocation, 15.f, FColor::Red, true);\
}