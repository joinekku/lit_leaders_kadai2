#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(100);
    
    number = 0;
    
    circle = false;
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i < circleAnimY.size(); i++){
    circleAnimY[i].update( 3.0f/60.0f );
    }
    
    if(circle) radius[number]++;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    for(int i = 0; i < circleX.size(); i++){
        ofSetColor(color[i]);
        ofCircle(circleX[i], circleAnimY[i].val(), radius[i]);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    
    color.push_back(ofColor::fromHsb(x*255/ofGetWidth(), 255, 255));
    circleX.push_back(x);
    circleY.push_back(y);
    radius.push_back(0);
    
    circleAnimy.reset( circleY[number] );
    circleAnimy.setRepeatType(LOOP_BACK_AND_FORTH);
    circleAnimy.setCurve(EASE_IN);
    circleAnimy.animateTo( circleY[number] );
    circleAnimY.push_back(circleAnimy);
    circle = true;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    circle = false;
    circleAnimY[number].animateTo( ofGetHeight()-radius[number] );
    number ++;
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
