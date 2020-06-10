/**
 * Album.cpp
 * Source file describing an Album object containing tracks
 * Created on 10/06/2020
 */
#include "Album.h"

Album::Album() {

}

Album::Album(string albumTitle, string artist) {
    this->albumTitle = albumTitle;
    this->artist = artist;
}

const string &Album::getAlbumTitle() const {
    return albumTitle;
}

void Album::setAlbumTitle(const string &albumTitle) {
    Album::albumTitle = albumTitle;
}

const string &Album::getArtist() const {
    return artist;
}

void Album::setArtist(const string &artist) {
    Album::artist = artist;
}

void Album::addTrack(Track track) {
    tracks.push_back(track);
}

Album::~Album() {

}
