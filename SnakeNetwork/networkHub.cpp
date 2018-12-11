#include "stdafx.h"

#include "Client.h"
#include "Server.h"
#include "networkHub.h"

int networkHub::sendMessage(SOCKET curSocket, char * message, int messageSize)
{
	return send(curSocket, message, messageSize, 0);
}

int networkHub::receiveMessage(SOCKET curSocket, char * buffer, int bufSize)
{
	return recv(curSocket, buffer, bufSize, 0);
}