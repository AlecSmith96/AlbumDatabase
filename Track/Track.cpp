/**
 * Track.cpp
 * Source file for class describing a Track object.
 * Created on 10/06/2020
 */
#include "Track.h"
#include "../Duration/Duration.h"

Track::Track() {

}

Track::Track(string title, Duration duration) {
    this->title = title;
    this->duration = duration;
}

string Track::getTitle() {
    return title;
}

void Track::setTitle(const string &title) {
    Track::title = title;
}

Duration Track::getDuration() {
    return duration;
}

void Track::setDuration(const Duration &duration) {
    Track::duration = duration;
}

Track::~Track() {

}

ostream& operator<<(ostream& str, Track &track) {
    Duration dur = track.getDuration();
    return str << track.getTitle() << " - " << dur;
}