#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
   // ofSetBackgroundAuto(FALSE);
    gui.setup();
    gui.add(toggle_0.setup("show",true));
    gui.add(cSlider_0.setup("color",ofColor(255,0,0),ofColor(0,255,0),ofColor(0,0,255),ofRandom(255)));
    cam.setPosition(0,1000,0);
    cam.lookAt(ofVec3f(0,0,0));
    cam.setFov(100);
   
    
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i=0;i<num;i++){
    
    cubes[i].update();
    }


}
//--------------------------------------------------------------
void ofApp::draw(){
    
    gui.draw();
    ofTranslate(ofGetWidth()/2,ofGetHeight()/2,0);
    //camera.begin();
    cam.begin();
    ofSetColor(cSlider_0);
    for(int i=0;i<num;i++){
    cubes[i].draw();
    }
    cam.end();
    //camera.end();
    ofSaveFrame();

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
