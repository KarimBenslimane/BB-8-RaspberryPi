#include <iostream>
#include "../Includes/Communication/client.h"

using namespace std;

/**
 * Starts the various threads and joins these. Main program control
 *
 * @param int argc
 * @param char* argv
 * @return int
 */
int main() {
    client* client1 = new client();
    client1->initiate();
    client1->closeConn();
    return 0;
}

