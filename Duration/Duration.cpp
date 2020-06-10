/**
 * Duration.cpp
 * Source file for class describing the duration of a Track.
 * Created on 10/06/2020
 */
#include <iomanip>
#include "Duration.h"
using namespace std;

Duration::Duration() {

}

Duration::Duration(int hours, int minutes, int seconds) {
    this->seconds = seconds;
    this->minutes = minutes;
    this->hours = hours;
}

int Duration::getSeconds() {
    return seconds;
}

void Duration::setSeconds(int seconds) {
    Duration::seconds = seconds;
}

int Duration::getMinutes() {
    return minutes;
}

void Duration::setMinutes(int minutes) {
    Duration::minutes = minutes;
}

int Duration::getHours() {
    return hours;
}

void Duration::setHours(int hours) {
    Duration::hours = hours;
}

bool Duration::operator==(const Duration& d) {
    return  (this->getHours() == d.hours) &&
            (this->getMinutes() == d.minutes) &&
            (this->getSeconds() == d.seconds);
}

bool Duration::operator!=(const Duration& d) {
    return  (this->getHours() != d.hours) ||
            (this->getMinutes() != d.minutes) ||
            (this->getSeconds() != d.seconds);
}

Duration Duration::operator+(const Duration &d) {
    int newSeconds = this->getSeconds() + d.seconds;
    int newMinutes = this->getMinutes() + d.minutes;
    int newHours = this->getHours() + d.hours;
    incrementMinsIfNeeded(newSeconds, newMinutes);
    incrementHoursIfNeeded(newMinutes, newHours);

    return Duration(newSeconds, newMinutes, newHours);
}

void Duration::incrementMinsIfNeeded(int newSeconds, int newMinutes) const {
    while (newSeconds > 60) {
        newSeconds -= 60;
        newMinutes+=1;
    }
}

void Duration::incrementHoursIfNeeded(int newMinutes, int newHours) const {
    while (newMinutes > 60) {
        newMinutes -= 60;
        newHours+=1;
    }
}

Duration Duration::operator-(const Duration &d) {

}

ostream& operator<<(ostream& str, Duration &dur) {
    return str << std::setfill('0') << std::setw(2) << dur.getHours() << ':' << std::setw(2) << dur.getMinutes() << ':' << std::setw(2) << dur.getSeconds();
}
