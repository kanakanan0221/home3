//
//  custom.cpp
//  home2_2
//
//  Created by kanako on 2016/02/19.
//
//

#include "custom.hpp"

void custom::init(){
    
    
    size_ciecle = ofRandom(500,1000);
    
    
//    soundplayer.loadSound("Perfume_globalsite_sound.wav");
    
    
    
//    soundplayer.setLoop(true);
    
    
    
//    soundplayer.setVolume(1.0);
    
    
    
//    soundplayer.play();
    
    
    
    msphere.setPosition(ofRandom(0,ofGetWidth()),ofRandom(0,ofGetHeight()) , 0);
    
    
    
}



//--------------------------------------------------------------





void custom::update(){
    
    
    
    volume = ofSoundGetSpectrum(1);
    
    
    
    size_ciecle= volume[0]*1300;
    
    
    
}

//--------------------------------------------------------------

void custom::draw(){
    
    
    
//    if(ofGetFrameNum() % 60 == 0){
    
        ofSetColor
        
        (ofColor::fromHsb(volume[0]*10000,255,255));

        
//    }
    
    
    
    
    cout << volume[0]<<endl;
    
    
    
    
    
    msphere.setRadius(ofRandom(10));
    
    
    
    msphere.drawWireframe();
    
    
    
    
    
    
    
}

