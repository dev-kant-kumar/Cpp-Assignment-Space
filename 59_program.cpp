// 59. Write a C++ program to compute the distance between two points on the surface of the earth.

// This program is using Haversine formula for calculating the distance between two points on the surface of the earth
// The variables a, c, and d have specific meanings and are used to calculate the distance between two points on the Earth's surface. Here's a breakdown of what each represents and how they are computed:

//  a = sin²(ΔLat / 2) + cos(Lat1) * cos(Lat2) * sin²(ΔLon / 2)
//  c = 2 * atan2(sqrt(a), sqrt(1 - a))
//  d = EARTH_RADIUS_KM * c

// where:
// a calculates the squared distance on a unit sphere.
// c computes the angular distance in radians between the two points.
// d converts this angular distance into a linear distance using the Earth's radius.

#include <iostream>
#include <cmath>

using namespace std;
const double EARTH_RADIUS_KM = 6371.0;

int checkCoordinates(double lat1, double lon1, double lat2, double lon2);
double calculateDistance(double lat1, double lon1, double lat2, double lon2);
int main()
{
    double lat1, lon1, lat2, lon2;
a:
    cout << "\033[1;43m\nThis C++ program calculates the distance between two points on the surface of the earth\033[0m\n\n";
    cout << "\033[34mEnter the latitude and longitude as asked below \033[0m\n";

    cout << "\033[1mEnter the latitude of 1st point on the surface of the earth : \033[0m";
    cin >> lat1;

    cout << "\033[1mEnter the longitude of 1st point on the surface of the earth : \033[0m";
    cin >> lon1;

    cout << "\033[1m\nEnter the latitude of 2nd point on the surface of the earth : \033[0m";
    cin >> lat2;

    cout << "\033[1mEnter the longitude of 2nd point on the surface of the earth : \033[0m";
    cin >> lon2;

    double status = checkCoordinates(lat1, lon1, lat2, lon2);
    if (status == 1)
    {
        double distance = calculateDistance(lat1, lon1, lat2, lon2);
        cout << "\033[1;32m\nThe distance between the two points is : \033[0m" << distance << " km\n";
    }
    else
    {
        cout << "\033[1;31m\nTry again with valid latitude and longitude \033[0m\n";
        goto a;
    }

    return 0;
}

int checkCoordinates(double lat1, double lon1, double lat2, double lon2)
{
    bool valid = true;

    if (lat1 < -90 || lat1 > 90)
    {
        cout << "\033[1;31m\nThe latitude of 1st point is outside the range of -90 to 90!\033[0m\n";
        valid = false;
    }
    if (lon1 < -180 || lon1 > 180)
    {
        cout << "\033[1;31m\nThe longitude of 1st point is outside the range of -180 to 180!\033[0m\n";
        valid = false;
    }
    if (lat2 < -90 || lat2 > 90)
    {
        cout << "\033[1;31m\nThe latitude of 2nd point is outside the range of -90 to 90!\033[0m\n";
        valid = false;
    }
    if (lon2 < -180 || lon2 > 180)
    {
        cout << "\033[1;31m\nThe longitude of 2nd point is outside the range of -180 to 180!\033[0m\n";
        valid = false;
    }

    return valid ? 1 : 0;
}

double calculateDistance(double lat1, double lon1, double lat2, double lon2)
{
    double lat1_rad = lat1 * M_PI / 180.0; // converting coordinates from the degrees to radians
    double lat2_rad = lat2 * M_PI / 180.0;
    // double lon1_rad = lon1 * M_PI / 180.0;
    // double lon2_rad = lon2 * M_PI / 180.0;
    double deltaLat = (lat1 - lat2) * M_PI / 180.0; // difference in radian of latitude (distance between the two points in north- south)
    double deltaLon = (lon2 - lon1) * M_PI / 180.0; // difference in radian of longitude (distance between the two points in east-west)

    double a = sin(deltaLat / 2) * sin(deltaLat / 2) + cos(lat1_rad) * cos(lat2_rad) * sin(deltaLon / 2) * sin(deltaLon / 2);

    double c = 2 * atan2(sqrt(a), sqrt(1 - a));
    double d = EARTH_RADIUS_KM * c;

    return d;
}