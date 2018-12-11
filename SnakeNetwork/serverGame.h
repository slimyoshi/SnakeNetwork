#pragma once
#include "Server.h"

class ServerGame
{

public:

	ServerGame(void);
	~ServerGame(void);

	void update();

private:

	// IDs for the clients connecting for table in ServerNetwork 
	static unsigned int client_id;

	// The ServerNetwork object 
	Server* network;
};