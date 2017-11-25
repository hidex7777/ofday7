#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofBackground(255);
	ofSetWindowTitle("day 7");
	ofEnableAlphaBlending();
	ofEnableDepthTest();
	for (int i = 0; i < 3; i++) {
		this->glines.push_back(shared_ptr<Glitchline>(new Glitchline(i)));
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	for (int i = 0; i < this->glines.size(); i++) {
		this->glines[i]->update();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < this->glines.size(); i++) {
		this->glines[i]->draw();
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'x') {
		string now = ofGetTimestampString("%Y%m%d%H%M%S");
		this->img.grabScreen(0, 0, ofGetWidth(), ofGetHeight());
		this->img.saveImage("of" + now + ".jpg");
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
