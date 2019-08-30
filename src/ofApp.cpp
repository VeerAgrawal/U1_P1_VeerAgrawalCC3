#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetWindowTitle("First project");
    ofSetWindowShape(800, 800);
    ofSetFrameRate(60);
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for (int l = 0; l < 800; l = l + 20)
    {
        ofSetLineWidth(2.0);
        ofSetColor(ofColor::black);
        ofLine(0, l, 800, l);
        ofLine(l, 0, l, 800);
    }
    
    
    ofSetColor(r1, g1, b1, o1);
    ofCircle(x, 400, 60, 60);
    ofSetColor(r, g, b, o);
    ofRect(100, y, 80, 80);
    x= x + 3;
    y= y - 3;
    if (x > 790)
    {
    x = x - 780;
    r1 = (rand() % 255) + 1;
    g1 = (rand() % 255) + 1;
    b1 = (rand() % 255) + 1;
    o1 = (rand() % 255) + 1;
    }
    if(y < 10)
    {
    y =  y + 780;
    r = (rand() % 255) + 1;
    g = (rand() % 255) + 1;
    b = (rand() % 255) + 1;
    o = (rand() % 255) + 1;
    }

    }



//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){


}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
