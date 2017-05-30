#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <vector>
/**
    @file
    @brief here is header that contain info about class
*/
using namespace std;

class webSite
{
    string _siteName;
    string _mainLink;
    int _id;
public:
    webSite();

/**
    @brief constructor for class
    @param string siteName - to set siteName
    @param string mainLink - same for mainLink
    @param int id - same for id
*/
    webSite(string siteName, string mainLink, int id);


    ~webSite();


/** 
    @brief function to set siteName in object
    @param string name - will be setted
*/
    void setSiteName(string name);

/** 
    @brief function to set mainLink in object
    @param string link - will be setted
*/
    void setMainLink(string link);

/** 
    @brief function to set id in object
    @param int id - will be setted
*/
    void setId(int id);


/**
    @brief is used to get objects's siteName
    @returns integer value of objects' siteName
*/
    string getSiteName();

/**
    @brief is used to get objects's mainLink
    @returns integer value of objects' mainLink
*/
    string getMainLink();

/**
    @brief is used to get objects's id
    @returns integer value of objects' id
*/
    int getId();


/**
    @brief is used to get any field of objects
    @param string field - to choose what param will be returned
    @returns string with field's value
*/
    string getField(string field);
};
/**
    @brief this function will fill vector of objects with some default values
*/
void fillSites(vector<webSite*> &sites);

#endif // CHARACTER_H