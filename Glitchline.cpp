#include "Glitchline.h"

Glitchline::Glitchline(int num) {
	
	for (int i = 0; i < ofGetWidth(); i++) {
		this->locations.push_back(shared_ptr<ofVec2f>(new ofVec2f(i, (ofGetHeight() / 3) + (num * 200))));
		this->myas.push_back(int(ofRandom(127)));
		this->myc.set(0,0,0);
		float seed = ofRandom(-100, 100);
		float ynoise = this->locations[i]->y + sin(ofDegToRad(this->locations[i]->x)) * ofNoise(i) * seed;
		this->locations[i]->y = ynoise;
	}
}
void Glitchline::update() {

}
void Glitchline::draw() {
	for (int i = 0; i < this->locations.size(); i++) {
		
		ofSetColor(this->myc, this->myas[i]);
		ofDrawCircle(this->locations[i]->x, this->locations[i]->y, 2);
	}
}