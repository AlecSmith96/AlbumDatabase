/**
 * Track.h
 * Header file for class describing a Track object.
 * Created on 10/06/2020
 */
#include <string>
#include "../Duration/Duration.h"

#ifndef ALBUMDATABASE_TRACK_H
#define ALBUMDATABASE_TRACK_H

class Track {
private:
    string title;
    Duration duration;

public:
    Track();
    Track(string title, Duration duration);

    string getTitle();
    void setTitle(const string &title);
    Duration getDuration();
    void setDuration(const Duration &duration);
};

ostream& operator<<(ostream& str, Track &track);
#endif //ALBUMDATABASE_TRACK_H
