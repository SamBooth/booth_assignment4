#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofSetVerticalSync(true); //try to lock to screen refresh rate
    ofBackground(0); //black
    ofSetCircleResolution(50);
   
}

//--------------------------------------------------------------
void ofApp::update(){
    angle = angle + 0.01;
}

//--------------------------------------------------------------
void ofApp::draw(){
    float r = abs(sin(angle) * 100);
    ofSetColor(0, 100, 255);
   
    x = x+10*vx;
    y += vy;
    
    if (x> ofGetWidth() || x < 0){
        vx *= -1;
    }
    if (y > ofGetHeight() || y< 0){
        vy *= -1;
    }
    if(ofGetMousePressed() > 0){
        ofDrawCircle(x,y,r);
    }
    if(ofGetKeyPressed() = ENTE)
    
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
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
