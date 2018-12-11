// SnakeNetwork.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#pragma comment(lib, "ws2_32.lib")
#include <WinSock2.h>
#include <iostream>
#include <WS2tcpip.h>
#include <stdio.h>
#include "clientGame.h"
#include "serverGame.h"
// used for multi-threading
#include <process.h>

//main.cpp
void serverLoop(void *);
void clientLoop(void);

ServerGame * server;
ClientGame * client;

int main()
{

	// initialize the server
	server = new ServerGame();

	// create thread with arbitrary argument for the run function
	_beginthread(serverLoop, 0, (void*)12);

	// initialize the client
	client = new ClientGame();

	clientLoop();
}

void serverLoop(void * arg)
{
	while (true)
	{
		server->update();
	}
}

void clientLoop()
{
	while (true)
	{
		//do game stuff
		//will later run client->update();
	}
}