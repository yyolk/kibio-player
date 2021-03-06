#include "KibioAsset.h"


//------------------------------------------------------------------------------
KibioAsset::KibioAsset(const string& _filename, Type _fileType) :
filename(_filename),
fileType(_fileType),
playlistOccuranceCount(0),
playCount(0),
width(0),
height(0),
duration(0),
numFrames(0)
{
    uuid = UUID(UUIDGenerator::defaultGenerator().createFromName(UUID::uri(), filename));

    width = (int)ofRandom(320,640);
    height = (int)ofRandom(320,640);
    duration = (int)ofRandom(320,32000);
    numFrames = (int)ofRandom(10,1000);
    playCount = (int)ofRandom(10,1000);
}

//------------------------------------------------------------------------------
KibioAsset::~KibioAsset() { }

//------------------------------------------------------------------------------
string KibioAsset::getFilename() const {
    return filename;
}

//------------------------------------------------------------------------------
KibioAsset::Type KibioAsset::getType() const {
    return fileType;
}

//------------------------------------------------------------------------------
UUID KibioAsset::getUUID() const {
    return uuid;
}

URI KibioAsset::getURI() const {
    return URI(getFilename());
}

//------------------------------------------------------------------------------
void KibioAsset::setDuration(unsigned long long _duration) {
    duration = _duration;
}

//------------------------------------------------------------------------------
unsigned long long KibioAsset::getDuration() const {
    return duration;
}

//------------------------------------------------------------------------------
void KibioAsset::setNumFrames(unsigned long long _numFrames) {
    numFrames = _numFrames;
}

//------------------------------------------------------------------------------
unsigned long long KibioAsset::getNumFrames() const {
    return numFrames;
}

////------------------------------------------------------------------------------
//void KibioAsset::addToPlaylist(KibioPlaylistItem* playlistItem) {
//    
//}
//
////------------------------------------------------------------------------------
//void KibioAsset::removeFromPlaylist(KibioPlaylistItem* playlistItem);
//
////------------------------------------------------------------------------------
//
////------------------------------------------------------------------------------
//void KibioAsset::playCountReset();
//
////------------------------------------------------------------------------------
//void KibioAsset::playCountAdd();
//
////------------------------------------------------------------------------------
//void KibioAsset::playCountSubtract();
