
#include <iostream>
#include <vector>
using namespace std;

class Artist {
private:
    string name;
public:
    string getName() const {
        return name;
    }
    Artist(string alias) {
        name = alias;
    }
};
class Song {
private:
    string title;
    string artist;
public:
    string getTitle() const {
        return title;
    }
    string getArtist() const {
        return artist;
    }
    Song(string alias, string _artist) {
        title = alias;
        artist = _artist;
    }
};
class Genre {
private:
    string genreName;
    string masterGenre; //used for moodboard
public:
    string getName() const {
        return genreName;
    }
    Genre(string g) {
        genreName = g;
    }
};


class Panel {
private:
    string username;
public:
    string getUserName();
    //virtual void buildPanel() = 0;
};

class PanelArtist : public Panel {
private:
    vector<Artist> topArtists;
public:
    vector<Artist> getTopArtist() {
        return topArtists;
    }
    void addArtist(Artist a) {
        topArtists.push_back(a);
    }
};

class PanelGenre : public Panel {
private:
    vector<string> topGenres;
public:
    vector<string> getTopGenres() {
        return topGenres;
    }
    void addGenre(string g) {
        topGenres.push_back(g);
    }
};

class MoodBoard : public PanelGenre {
    PanelGenre mostListenedGenre;
public:
    void generateMoods();
    void generateImageURL();
    void createPanel();
};

class PanelSong : public Panel {
private:
    vector<Song> topSongs;
public:
    vector<Song> getTopFiveTrackIDs() {
        return topSongs;
    }
    vector<Song> getTopThreeTrackIDs() {
        return topSongs;
    }
    void addSong(Song s) {
        topSongs.push_back(s);
    }
};

class PanelListTime : public Panel {
private:
    double listenTime;
public:
    double getListenTime();
};

class PanelType : public Panel {

};
