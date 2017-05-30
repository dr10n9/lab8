#ifndef REQUEST_H
#define REQUEST_H

#include <iostream>
/** 
    @file
    @brief request header, here are declaring of functions which will parse requests
*/
using namespace std;

class Request {
    string _command;
    string _URL;
    string _key;
    string _value;
public:
    Request();
    ~Request();
/**
    @brief parsing request URL
    @param string message - URL
    @returns true if parsing is succesfull
    bool parseMessage(string message);

/**
    @brief Is used to set object's command.
    @param string command - wil be setted.
*/
    void setCommand(string command);

/**
    @brief Is used to set object's URL.
    @param string URL - will be setted.
*/
    void setURL(string URL);

/**
    @brief Is used to set object's key.
    @param string key - will be setted.
*/
    void setKey(string key);

/**
    @brief Is used to set object's value.
    @param  string value - will be setted.
*/
    void setValue(string value);


/**
    @brief Is used to get objects' command.
    @returns string value of command
*/
    string getCommand(void);

/**
    @brief Is used to get objects' URL.
    @returns string value of URL.
*/
    string getURL(void);

/**
    @brief Is used to get objects' key.
    @returns string value of key.
*/
    string getKey(void);

/**
    @brief Is used to get objects' value.
    @returns string value of value.
*/
    string getValue(void);
};

#endif // REQUEST_H