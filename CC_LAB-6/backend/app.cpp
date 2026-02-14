#include <iostream>
#include <unistd.h>
#include <cstring>

int main() {
    char hostname[256];
    gethostname(hostname, sizeof(hostname));
    hostname[255] = '\0';
    std::cout << "Served by backend: " << hostname << std::endl;
    return 0;
}
