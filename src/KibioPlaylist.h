#pragma once

#include "KibioAsset.h"

#include "KibioWarper.h"

class KibioPlaylistItem {
public:
    KibioPlaylistItem(KibioAsset& _asset) : asset(_asset) {
//        asset.addToPlaylist(this);
    }
    
    virtual ~KibioPlaylistItem() {
//        asset.removeFromPlaylist(this);
    }

    KibioAsset& getKibioAssetRef() {
        return asset;
    }
        
private:
    
    KibioWarper::Settings warperSettings;
    
    KibioAsset& asset;
    
    UUID uuid;
    
    
    /*
     
     // playlist item object
     {
       "playlistId":"12345",
       "playlistItemId":"xyz123",
       "playlistItemAssetId":"qwerty890",
    }

     // playlist object
     
     {
        "playlistName":"my cool playlist",
        "playlistId":"12345",
        "playlistItems" : [ // an array of 
             {
             "playlistId":"12345",
             "playlistItemId":"xyz123",
             "playlistItemAssetId":"qwerty890",
             }

             {
             "playlistId":"12345",
             "playlistItemId":"xyz123",
             "playlistItemAssetId":"qwerty890",
             }

             {
             "playlistId":"12345",
             "playlistItemId":"xyz123",
             "playlistItemAssetId":"qwerty890",
             }
         ]
     }
     
     
     */
    
    


};

class KibioPlaylist {
public:
    
    enum RepeatMode {
        NONE,
        ONE,
        ALL
    };
    
    void getNext();
    void getPrevious();
    void getRandom();

    bool isShuffling() const;
    void setIsShuffling(bool _bIsShuffling);
    
    RepeatMode getRepeatMode() const;
    
    void setRepeatMode(RepeatMode _mode);
    
    size_t getSize() const;
    
public:
    
    bool bIsShuffling;
    RepeatMode repeatMode;
    
    vector<KibioPlaylistItem> playlist;
};