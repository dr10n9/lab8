#include "website.h"
using namespace std;


webSite::webSite(string siteName, string mainLink, int id){
    _siteName = siteName;
    _mainLink = mainLink;
    _id = id;
}

webSite::~webSite(){}


void webSite::setId(int id){
    _id = id;
}


void webSite::setMainLink(string link){
    _mainLink = link;
}


void webSite::setSiteName(string name){
    _siteName = name;
}


int webSite::getId(){
    return _id;
}


string webSite::getMainLink(){
    return _mainLink;
}


string webSite::getSiteName(){
    return _siteName;
}


string webSite::getField(string field){
    if (field == "sitename"){
        return _siteName;
    }

    if (field == "mainlink"){
        return _mainLink;
    }

    if(field == "id"){
        return to_string(_id);
    }

    return "wrong field";
}

void fillSites(vector<webSite*> &sites){
    sites.push_back(new webSite("VK", "vk.com", 1));
    sites.push_back(new webSite("Google", "google.com", 2));
    sites.push_back(new webSite("VK", "vkontakte.ru", 3));
}