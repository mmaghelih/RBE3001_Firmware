/*
 * StatusServer.cpp
 *
 *  Created on: Feb 5, 2020
 *      Author: mmaghelih
 */

#include "StatusServer.h"

StatusServer::StatusServer(PIDimp ** pidObjects, int numberOfPidChannels)
: PacketEventAbstract(20){
	myPidObjects = pidObjects;
	    myPumberOfPidChannels = numberOfPidChannels;
 }

StatusServer::~StatusServer() {
	// TODO Auto-generated destructor stub
}

void StatusServer::event(float * packet){
	for(int i = 0; i < myPumberOfPidChannels; i++)
	    {
	      float position = myPidObjects[i]->GetPIDPosition();
	      float velocity = myPidObjects[i]->getVelocity();
	      float torque   = myPidObjects[i]->loadCell->read();

	      packet[(i*3)+0] = position;
	      packet[(i*3)+1] = velocity;
	      packet[(i*3)+2] = torque;
	    }

 // DO something
 // set values back to Buffer
}
