#pragma once
#pragma comment(lib, "ws2_32.lib")
#include <WinSock2.h>
#include <iostream>
#include <WS2tcpip.h>
#include <stdio.h>

class networkHub
{
public:
	//variables

	//functions
	static int sendMessage(SOCKET curSocket, char * message, int messageSize);
	static int receiveMessage(SOCKET curSocket, char * buffer, int bufSize);


protected:
	//variables

	//functions

private:
	//variables

	//functions

};