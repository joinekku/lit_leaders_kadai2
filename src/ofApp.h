#ifndef _TEST_APP
#define _TEST_APP


#include "ofMain.h"
#include "ofxAnimatableFloat.h"
#include "ofxAnimatableOfPoint.h"
#include "ofxAnimatableOfColor.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    vector<int> circleX;
    vector<int> circleY;
    vector<float> radius;
    vector<ofxAnimatableFloat>	circleAnimY;
    vector<ofColor> color;
    
    ofxAnimatableFloat circleAnimy;
    int number;
    
    bool circle;
};

#endif
