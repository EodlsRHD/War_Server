#include <stdio.h>
#include <iostream>
#include <thread>

#include <WinSock2.h>
#pragma comment (lib , "ws2_32.lib")

using namespace std;

string serverIP = "serverip";
int acceptPort = 0000;
SOCKET acceptSocket;

int main(void){
	acceptSocket = socket(AF_INET, SOCK_STREAM, 0);
	if (acceptSocket == INVALID_SOCKET) { cout << "서버 생성 실패"; }

	sockaddr addr = { 0 };
		
	
}