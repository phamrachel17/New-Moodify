#ifndef __PANELCLASSES_TEST_HPP__
#define __PANELCLASSES_TEST_HPP__

#include "gtest/gtest.h"

#include "panelClasses.h"

TEST(panelCLassesTest, ArtistTest){
  Artist artist("Khalid");
  PanelArtist topArtists;
  topArtists.addArtist(artist);
  string TopArtist = topArtists.getTopArtist().at(0).getName();
  EXPECT_EQ(TopArtist, "Khalid");
}

TEST(panelClassesTest, SongTest){
  Song song ("Hatchback", "Cochise");
  PanelSong topSongs;
  topSongs.addSong(song);
  string TopSong = topSongs.getTopThreeTrackIDs().at(0).getTitle();
  EXPECT_EQ(TopSong, "Hatchback");
}

TEST(panelClassesTest, GenreTest) {
  Genre genre("pop");
  PanelGenre topGenres;
  topGenres.addGenre("pop");
  string TopGenre = topGenres.getTopGenres().at(0);
  EXPECT_EQ(TopGenre, "pop");
}


#endif
