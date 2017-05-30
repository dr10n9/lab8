#ifndef HTTP_SERVER_H
#define HTTP_SERVER_H
/**
	@file 
	@brief here is header for simple http server
*/
#include <iostream>
#include <vector>
#include "website.h"

using namespace std;

/**
	@brief server constructor
*/
void http_server(void);
string createResponse(string message, vector<webSite*> sites);
/**
    @brief get information from server
    @returns json string 
*/
string serverInformation(void);

/**
	@brief Get sites list.
	@param sites - vector of webSite object's.
	@returns json string.
*/
string myFavouriteSites(vector<webSite*> sites);

/**
    @brief get sub-listing of sites
	@param sites - list of sites
	@param key - field name for search
	@param value - field value for search
    @returns json string
*/
string keySites(vector<webSite*> sites, string key, string value);

/**
    @brief get information about file
    @returns json string 
*/
string fileInformation(void);

/**
	@brief calculate count of numbers in file and their average value
	@returns json string
*/
string fileNumbers(void);

/**
    @brief read file
	@param filePath - full file name
    @returns array of lines with file information
*/
string readFile(const char * filePath);

#endif // HTTP_SERVER_H