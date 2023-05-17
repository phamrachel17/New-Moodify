#include <iostream>
#include <fstream>
//#include <filesystem>
#include <stdio.h>
using namespace std;

int main()
{
    string image_filename;
    //image_filename = "happyMoodboard.jpg";

    string genre;

    ifstream fileJSON;
    fileJSON.open("topSongs.json");
    string line;

    if (!fileJSON)
    {
        cout << "doesn't work\n";
    }
    getline(fileJSON, genre);
    size_t pth = genre.find("]");
    //    cout << pth << endl;
    //    cout << line.size();
    genre = genre.substr(2, pth - 2);
    cout << genre << endl;

    if (genre == "pop" || "post-teen pop" || "electropop" || "dance pop" || "alt z" || "r&b" || "social media pop" || "tropical house" || "pop rap" || "pop dance" || "indie poptimism" || "pop rock" || "urban contemporary" || "edm" || "uk pop" || "neo mellow" || "chill r&b" || "viral pop" || "alternative r&b" || "modern rock" || "italian pop" || "pop r&b" || "art pop" || "hip pop" || "indie pop" || "escape room" || "metropopolis" || "k-pop" || "latin viral pop" || "mexican pop" || "russian alt pop" || "german pop" || "latin pop" || "russian pop" || "latin arena pop" || "british soul" || "swedish pop" || "boy band" || "latin alternative" || "europop" || "australian pop" || "spanish pop" || "talent show" || "francoton" || "turkish trap pop" || "contemporary r&b" || "rock en espanol" || "neo soul" || "puerto rican pop" || "pop nacional" || "mexican rock" || "latin rock" || "russian hip hop" || "underground hip hop" || "indonesian pop" || "new wave pop" || "italian hip hop" || "k-pop boy group" || "turkish pop" || "indietronica" || "russian trap" || "country road" || "dark trap" || "dutch pop" || "trap italiana" || "ohio hip hop" || "french indie pop" || "desi hip hop" || "emo rap" || "australian hip hop" || "chicago rap" || "contemporary country" || "new romantic" || "new rave" || "latin" || "country pop" || "canadian pop" || "modern country rock" || "pittsburgh rap" || "australian dance" || "deep german hip hop" || "argentine rock" || "german rock" || "lgbtq+ hip hop" || "girl group" || "alternative dance" || "synthpop" || "turkish hip hop" || "vapor soul" || "pop soul" || "tamil pop" || "j-pop" || "canadian hip hop" || "brazilian rock" || "sertanejo universitario" || "polish hip hop" || "sertanejo" || "sertanejo pop" || "dance rock" || "funk rock" || "turkish trap" || "german hip hop" || "norwegian pop" || "indie soul" || "atl hip hop" || "new wave" || "sad rap" || "colombian pop" || "uk hip hop" || "pop edm" || "southern hip hop" || "north carolina hip hop" || "urbano espanol" || "australian rock" || "mandopop" || "miami hip hop" || "trap" || "disco" || "meme rap" || "new orleans rap" || "rap conscient" || "detroit hip hop" || "k-pop girl group" || "alternative hip hop" || "la indie" || "nyc rap" || "toronto rap" || "conscious hip hop" || "quiet storm" || "electronic trap" || "hip hop" || "new french touch" || "french hip hop" || "rap" || "modern bollywood" || "pop urbaine" || "plugg" || "indie r&b" || "country dawn" || "punjabi pop" || "dirty south rap" || "brazilian hip hop" || "canadian contemporary r&b" || "aesthetic rap" || "soft rock" || "folk-pop" || "trap triste" || "bedroom pop" || "permanent wave" || "slap house" || "cali rap" || "dfw rap" || "german trap" || "grupera" || "italian adult pop" || "pagode" || "dutch hip hop" || "pluggnb" || "downtempo" || "yacht rock" || "queens hip hop" || "uk dance" || "french pop" || "gangster rap" || "trap brasileiro" || "vapor trap" || "nova mpb" || "argentine hip hop" || "electronica" || "melodic rap" || "anime" || "forro" || "trap argentino" || "rap francais" || "reggae fusion" || "arrocha" || "funk" || "heartland rock" || "christian music" || "mexican hip hop" || "cantautor" || "country" || "trap queen" || "hardcore hip hop" || "modern blues rock" || "christian alternative rock" || "indie rock" || "electro house" || "j-rock" || "opm" || "piano rock" || "brostep" || "desi pop" || "mellow gold" || "modern alternative rock" || "glam rock" || "rap rock" || "eurodance" || "rock" || "beatlesque" || "lilith" || "motown" || "texas country" || "funk metal" || "east coast hip hop" || "acoustic pop" || "drift phonk" || "florida rap" || "funk carioca" || "memphis hip hop" || "viral rap" || "j-poprock" || "otacore" || "brooklyn drill" || "trap boricua" || "tropical" || "classic uk pop" || "big room" || "indiecoustica" || "west coast rap" || "classic rock" || "art rock" || "stomp and holler" || "alternative rock" || "sad lo-fi" || "album rock" || "progressive electro house" || "ccm" || "latin hip hop" || "britpop" || "musica mexicana" || "ranchera" || "gen z singer-songwriter")
    {
        image_filename = "happyMoodboard.jpg";
    }
    else if (genre == "Dance/EDM" || "Edm" || "Bass House" || "Bass Trap" || "Big Room" || "Breakbeat" || "Breakcore" || "Brostep" || "Chillstep" || "Complextro" || "Deep Big Room" || "Deep Groove House" || "Deep House" || "Deep Tropical House" || "Disco House" || "Dubstep" || "Electro House" || "Electronic Trap" || "Electropop" || "Electro Swing" || "Filthstep" || "Future Bass" || "Future Garage" || "Future House" || "Gaming Dubstep" || "Gaming Edm" || "Glitch Hop" || "House" || "Indie Electropop" || "Melodic Dubstep" || "Pop Dance" || "Pop Edm" || "Progressive Electro House" || "Progressive House" || "Progressive Trance" || "Sky Room" || "Tech House" || "Trance" || "Tropical House" || "Uplifting Trance" || "Vapor Soul" || "Vapor Twitch" || "Vocal House")
    {
        image_filename = "excitedMoodboard.jpg";
    }
    else if (genre == "Hip Hop" || "Rap" || "Alternative Hip Hop" || "Atl Hip Hop" || "Atl Trap" || "Bounce" || "Chicago Rap" || "Christian Hip Hop" || "Conscious Hip Hop" || "Country Rap" || "Crunk" || "Dirty South Rap" || "East Coast Hip Hop" || "Electro" || "Gangster Rap" || "G Funk" || "Hardcore Hip Hop" || "Hyphy" || "Industrial Hip Hop" || "Jazz Rap" || "Melodic Rap" || "Nerdcore" || "Old School Hip Hop" || "Pop Rap" || "Queens Hip Hop" || "Southern Hip Hop" || "Trap" || "Underground Hip Hop" || "Vapor Trap" || "West Coast Rap")
    {
        image_filename = "edgyMoodboard.jpg";
    }
    else if (genre == "R&B" || "Alternative R&B" || "Disco" || "Funk" || "Gospel R&B" || "Indie R&B" || "Indie Soul" || "Motown" || "Neo R&B" || "Neo Soul" || "New Jack Swing" || "Pop R&B" || "Pop Soul" || "Quiet Storm" || "Soul" || "Trap Soul" || "Urban Contemporary")
    {
        image_filename = "sadMoodboard.jpg";
    }
    else
    {
        image_filename = "happyMoodboard.jpg";
    }

    // ofstream MyFile("correctMoodboard.txt");

    // MyFile << image_filename;

    // MyFile.close();

    string source_path = "../authorization_code/public/images/moodboards/" + image_filename;
    string destination_path = "../authorization_code/public/images/moodboards/moodboard.jpg";
    //copy_file(source_path.c_str(), destination_path.c_str(), 0);
}
