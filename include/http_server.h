#ifndef HTTP_SERVER_H
#define HTTP_SERVER_H
/**
	@file http_server.h
	@brief here is header for simple http server
*/
#include <iostream>
#include <vector>
#include "website.h"

using namespace std;

void http_server(void);
string createResponse(string message, vector<webSite*> sites);
string serverInformation(void);
string myFavouriteSites(vector<webSite*> sites);
string keySites(vector<webSite*> sites, string key, string value);
string fileInformation(void);
string fileNumbers(void);
string readFile(const char * filePath);

#endif // HTTP_SERVER_H