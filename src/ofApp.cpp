#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    lena.allocate(512, 512, OF_IMAGE_GRAYSCALE);
    after.allocate(512, 512, OF_IMAGE_COLOR);
    lena.load("/Users/kerbal/Desktop/lena512.png");
    
    // gui
    // Panel
    gui.setup();
    // ofxButton
    gui.add(btn1.setup("HSV"));
    gui.add(btn2.setup("Spectrum"));
    gui.add(btn3.setup("Accent"));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    // gui
    if(btn2){
        cmap.setMapFromName("spectral");
        cmap.apply(lena, after);
        after.update();
    }
    if(btn1){
        cmap.setMapFromName("hsv");
        cmap.apply(lena, after);
        after.update();
    }
    if(btn3){
        cmap.setMapFromName("Accent");
        cmap.apply(lena, after);
        after.update();
    }
    
    ofSetColor(255);
    lena.draw(0, 0, 512, 512);
    after.draw(512, 0, 512, 512);
    
    gui.draw();
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
