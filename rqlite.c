#include <stdlib.h>

#include <curl/curl.h>

struct rqlite_connection {
	char* host
	int port
}

void rqlite_connection_init(char *host, int port) *rqlite_connection {
	c = malloc(sizeof(rqlite_connection))
	c.host = host
	c.port = port
	return c
}