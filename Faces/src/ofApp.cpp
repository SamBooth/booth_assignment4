#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    float x = ofGetWidth()/2;
    float y = ofGetHeight()/2;
    
    float angle1 = ofMap(mouseX, 0, ofGetWidth(), -90, 90);
    float angle2 = ofMap(mouseY, 0, ofGetWidth(), -90, 90);

    
    ofPushMatrix();
    ofTranslate(x,y);
    ofScale(2.0, 2.0);
    ofRotate(angle1);
    
    //Eyes
    ofDrawEllipse(-10, -15, 10, 20);
    ofDrawEllipse(10, -15,10,20);
    
    //Mouth
    ofDrawEllipse(0, 10, 20, 10);
    //Nose
    ofDrawLine(0, -10, 0, 0);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(100,100);
    ofRotateY(angle2);
    
    ofDrawRectangle(0, 0, 50,50);
    ofPopMatrix();
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
