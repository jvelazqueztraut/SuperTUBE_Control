#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
	ofSetFrameRate(60);
	ofSetVerticalSync(true);
    ofEnableSmoothing();
	
	glEnable(GL_DEPTH_TEST);
	ofEnableLighting();
	
	light.setPosition(ofGetWidth()*.5, ofGetHeight()*.25, 0);
	light.enable();
		
    //Timeline setup and playback details
    ofxTimeline::removeCocoaMenusFromGlut("TubeDemo");
    
	timeline.setup();
    timeline.setFrameRate(40);
	timeline.setDurationInFrames(170);
	timeline.setLoopType(OF_LOOP_NORMAL);
    
	//Flags are little markers that you can attach text to
    //They are only useful when listening to bangFired() events
    //so that you know when one has passed
	timeline.addColors("Tube 1");
    timeline.addColors("Tube 2");

    //setting framebased to true results in the timeline never skipping frames
    //and also speeding up with the 
    //try setting this to true and see the difference
    timeline.setFrameBased(false);
	
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
	ofBackgroundGradient(ofColor(75),ofColor(0));
	
    ofPushMatrix();
    ofTranslate(ofGetWidth()*0.5,ofGetHeight()*0.55,50);
    ofPushStyle();
	ofSetColor(timeline.getColor("Tube 1"));
	ofBox(-ofGetWidth()*0.2,0,0,20,400,20);
	ofPopStyle();
    
    ofPushStyle();
    ofSetColor(timeline.getColor("Tube 2"));
    ofBox(ofGetWidth()*0.2,0,0,20,400,20);
    ofPopStyle();
    ofPopMatrix();
	
	timeline.draw();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
	