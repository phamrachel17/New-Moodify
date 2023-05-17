//
//  main.cpp
//  readJSON
//
//  Created by Adrian on 3/9/22.
//

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include "panelClasses.h"

using namespace std;

void importArtists(PanelArtist& topArtists) {
    ifstream fileJSON;
    fileJSON.open("topArtists.json");
    string line;
    if (!fileJSON) {
        cout << "doesn't work\n";
    }
    getline(fileJSON, line);
    size_t pth = line.find("]");
    line = line.substr(2,pth-2);
    
    for(int i=0; i<5; i++) {
        size_t comma = line.find(",");
        //cout << line.substr(0,comma) << endl;
        string artistName = line.substr(0,comma);
        artistName.erase(remove(artistName.begin(), artistName.end(), '"'), artistName.end());
        //cout << artistName << endl;
        
        line = line.substr(comma+2);
        
        Artist a(artistName);
        
        topArtists.addArtist(a);
        
    }
}

void importSongs(PanelSong& topSongs) {
    ifstream fileJSON2;
    fileJSON2.open("topSongs.json");
    
    if (!fileJSON2) {
        cout << "doesn't work\n";
    }
    string line;
    getline(fileJSON2, line);
    size_t pth = line.find("]");

    line = line.substr(2,pth-2);
    
    for(int i=0; i<5; i++) {
        size_t comma = line.find(",");
        //cout << line.substr(0,comma) << endl;
        string songName = line.substr(0,comma);
        songName.erase(std::remove(songName.begin(), songName.end(), '"'), songName.end());
        size_t pipe = line.find("|");
        string artistName = songName.substr(pipe+1);
        songName = songName.substr(0, pipe);
        
        line = line.substr(comma+2);
        
        Song s(songName, artistName);
        //cout << s.getTitle() << " by "<< s.getArtist() << endl << endl;
        
        topSongs.addSong(s);
        
    }
}

void importGenres(PanelGenre& topGenres) {
    ifstream fileJSON3;
    fileJSON3.open("topGenres.json");
    if (!fileJSON3) {
        cout << "doesn't work\n";
    }
    string line;
    getline(fileJSON3, line);
    size_t pth = line.find("]");
    line = line.substr(2,pth-2);
    
    for(int i=0; i<5; i++) {
        size_t comma = line.find(",");
        string genreName = line.substr(0,comma);
        genreName.erase(std::remove(genreName.begin(), genreName.end(), '"'), genreName.end());
        
        line = line.substr(comma+2);
        
        topGenres.addGenre(genreName);
    }
}

int main(int argc, const char * argv[]) {
    
    PanelArtist myArtists;
    PanelSong mySongs;
    PanelGenre myGenres;
    importArtists(myArtists);
    importSongs(mySongs);
    importGenres(myGenres);
    
    cout << " ARTISTS\n";

    for (int i = 0; i < 5; i++) {
        cout << myArtists.getTopArtist().at(i).getName() << endl;
    }
    
    cout << "\n SONGS\n";
    for (int i = 0; i < 5; i++) {
        cout << mySongs.getTopFiveTrackIDs().at(i).getTitle() << " by: " << mySongs.getTopFiveTrackIDs().at(i).getArtist() << endl;
    }
    
    cout << "\n GENRES\n";
    for (int i = 0; i < 5; i++) {
        cout << myGenres.getTopGenres().at(i)<<endl;
    }
    return 0;
}


