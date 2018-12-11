#pragma once
#pragma comment(lib, "ws2_32.lib")
#include <WinSock2.h>
#include <iostream>
#include <WS2tcpip.h>
#include <stdio.h>
#include "networkHub.h"
#include <Windows.h>
#include <ws2tcpip.h>
#include <map>
using namespace std;
#pragma comment (lib, "Ws2_32.lib")

#define DEFAULT_BUFLEN 512
#define DEFAULT_PORT "6881" 

class Server
{
public:
	//variables//

	// Socket to listen for new connections
	SOCKET ListenSocket;

	// Socket to give to the clients
	SOCKET ClientSocket;

	// table to keep track of each client's socket
	std::map<unsigned int, SOCKET> sessions;

	int iResultS;

	//functions//
	Server();
	~Server();

	// accept new connections
	bool acceptNewClient(unsigned int & id);

protected:
	//variables

	//functions

private:
	//variables

	//functions

};