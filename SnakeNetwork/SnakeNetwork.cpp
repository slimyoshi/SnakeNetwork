// SnakeNetwork.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#pragma comment(lib, "ws2_32.lib")
#include <WinSock2.h>
#include <iostream>
#include <WS2tcpip.h>
#include <stdio.h>




int main()
{
	//winsock startup
	WSAData wsaData;
	int iResult;

	iResult = WSAStartup (MAKEWORD(2, 2), &wsaData);
	if (iResult != 0) //if returns anything other than zero then an error has occured
	{
		printf("WSAStartup failed: %d\n", iResult);
	}


    return 0;
}

