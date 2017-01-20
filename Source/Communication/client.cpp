//
// Created by karim on 20-1-17.
//

#include "../../Includes/Communication/client.h"

int client::initiate(int portno, const char * hostname) {
    portno = portno;
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0){
        printf("ERROR opening socket");
        return 0;
    }
    server = gethostbyname(hostname);
    if (server == NULL) {
        printf("ERROR, no such host\n");
        return 0;
    }
    bzero((char *) &serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    bcopy((char *)server->h_addr,
          (char *)&serv_addr.sin_addr.s_addr,
          server->h_length);
    serv_addr.sin_port = htons(portno);
    if (connect(sockfd,(struct sockaddr *) &serv_addr,sizeof(serv_addr)) < 0){
        printf("ERROR connecting");
        return 0;
    }
    printf("Successfully connected to socket");
    return 1;
}

int client::read() {
    return 0;
}

int client::send() {
    return 0;
}
