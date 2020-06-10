/**
 * Album.h
 * Header file describing an Album object containing tracks
 * Created on 10/06/2020
 */
#include <string>
#include <vector>
#include <ostream>
#include "../Track/Track.h"
#ifndef ALBUMDATABASE_ALBUM_H
#define ALBUMDATABASE_ALBUM_H


class Album {
private:
    string albumTitle;
    string artist;
    vector<Track> tracks;

public:
    Album();
    Album(string albumTitle, string artist);

    const string &getAlbumTitle() const;
    void setAlbumTitle(const string &albumTitle);
    const string &getArtist() const;
    void setArtist(const string &artist);
    void addTrack(Track track);

    virtual ~Album();

    friend ostream &operator<<(ostream &os, const Album &album);
};

ostream &operator<<(ostream &os, const Album &album) {
    os << "albumTitle: " << album.albumTitle << " artist: " << album.artist << " tracks: " << album.tracks;
    return os;
}

#endif //ALBUMDATABASE_ALBUM_H
