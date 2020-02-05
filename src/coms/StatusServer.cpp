/*
 * StatusServer.cpp
 *
 *  Created on: Feb 5, 2020
 *      Author: mmaghelih
 */

#include "StatusServer.h"

StatusServer::StatusServer()
: PacketEventAbstract(20){
 }

StatusServer::~StatusServer() {
	// TODO Auto-generated destructor stub
}

void StatusServer::event(float * buffer){
	for (int i=0;i<15;i++)
	{
		buffer[i]=i;
	}

 // DO something
 // set values back to Buffer
}
