//
// Created by karim on 20-1-17.
//

#ifndef CLIENT_H
#define CLIENT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

/**
 * Client class makes a TDP connection with a server by a stream socket for sending and receiving messages
 */
class client {
    public:
    /**
     * Initiate the connection with the server. A socket with stream type is opened on
     * the servers IP and port. This is followed by opening a connection with the socket. Returns 0 when fails.
     * @return int
     */
    int initiate();
    /**
     * Read message from the socket, returns 0 if fails.
     * @return int
     */
    int read();
    /**
     * Send message from the socket, returns 0 if fails.
     * @return int
     */
    int send();
    /**
     * Closes the connection with the socket.
     * @return
     */
    void closeConn();
    private:
    int sockfd, portno, n;
    struct sockaddr_in serv_addr;
    struct hostent *server;
    char buffer[256];
};
#endif //CLIENT_H
