/*
 * StatusServer.h
 *
 *  Created on: Feb 5, 2020
 *      Author: mmaghelih
 */

#ifndef SRC_COMS_STATUSSERVER_H_
#define SRC_COMS_STATUSSERVER_H_
#include <PacketEvent.h>
class StatusServer: public PacketEventAbstract {
public:
	StatusServer();
	virtual ~StatusServer();
	  //User function to be called when a packet comes in
	  // Buffer contains data from the packet coming in at the start of the function
	  // User data is written into the buffer to send it back
	  void event(float * buffer);
};

#endif /* SRC_COMS_STATUSSERVER_H_ */
