/**
 * Duration.h
 * Header file for class describing the duration of a Track.
 * Created on 10/06/2020
 */
#include <ostream>
#include <iosfwd>
using namespace std;

#ifndef ALBUMDATABASE_DURATION_H
#define ALBUMDATABASE_DURATION_H
class Duration {
private:
    int seconds;
    int minutes;
    int hours;

public:
    Duration();

    Duration(int hours, int minutes, int seconds);

    int getSeconds();

    void setSeconds(int seconds);

    int getMinutes();

    void setMinutes(int minutes);

    int getHours();

    void setHours(int Hours);

    bool operator==(const Duration &d);

    bool operator!=(const Duration &d);

    Duration operator+(const Duration &d);

    Duration operator-(const Duration &d);

    void incrementMinsIfNeeded(int newSeconds, int newMinutes) const;

    void incrementHoursIfNeeded(int newMinutes, int newHours) const;
};

ostream& operator<<(ostream& str, Duration &dur);
#endif //ALBUMDATABASE_DURATION_H