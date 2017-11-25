#pragma once
#include "ofMain.h"

class Glitchline
{
public:
	Glitchline(int num);
	~Glitchline() {};
	void update();
	void draw();
	vector<shared_ptr<ofVec2f>> locations;
	ofColor myc;
	std::vector<int> myas;

};