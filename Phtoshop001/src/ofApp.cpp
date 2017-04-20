#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(30);
    ofSetVerticalSync(true);
    ofSetBackgroundAuto(false);
    ofBackground(255);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(lineColor); //current line color
    ofSetLineWidth(lineWidth); //line width
    if(ofGetMousePressed()){
//        ofDrawLine(ofGetPreviousMouseX(), ofGetPreviousMouseY(), ofGetMouseX(), ofGetMouseY());
        ofDrawLine(pmouse, mouse);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    ofLog() << "key pressed: " << key;
    if(key == ' '){ //spacebar
        ofBackground(255); //clear the screen
    } else if (key == '1'){
        lineColor = ofColor::red;
    }else if (key == '2'){
        lineColor = ofColor::green;
    }else if (key == '3'){
        lineColor = ofColor::blue;
    }else if (key == '0'){
        lineColor = ofColor::black;
    }else if (key == OF_KEY_UP){
        ofSetLineWidth(lineWidth += 1);
        if (lineWidth > 20){
            lineWidth = 20;
        }
    }else if(key == OF_KEY_DOWN){
        ofSetLineWidth(lineWidth -= 1);
        if (lineWidth < 1){
            lineWidth = 1;
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    updateMouse(x,y);
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

//--------------------------------------------------------------
void ofApp::updateMouse(int x, int y) {
    pmouse = mouse; //the current pos becomes the previous pos
    mouse.x = x;
    mouse.y = y;
}
