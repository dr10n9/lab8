// #include "character.h"

// Character::Character(std::string name, std::string surname, int age, int id) {
//     _name = name;
//     _surname = surname;
//     _age = age;
//     _id = id;
// }

// Character::~Character() {}

// void Character::setName(std::string name) {
//     _name = name;
// }

// void Character::setSurname(std::string surname) {
//     _surname = surname;
// }

// void Character::setAge(int age) {
//     _age = age;
// }

// void Character::setId(int id) {
//     _id = id;
// }

// std::string Character::getName() {
//     return _name;
// }

// std::string Character::getSurname() {
//     return _surname;
// }

// float Character::getAge() {
//     return _age;
// }

// int Character::getId() {
//     return _id;
// }

// std::string Character::getField(std::string field) {
//     if (field == "name") {
//         return _name;
//     }
//     if (field == "surname") {
//         return _surname;
//     }
//     if (field == "age") {
//         return std::to_string(_age);
//     }
//     if (field == "id") {
//         return std::to_string(_id);
//     }
//     return NULL;
// }

// void fillCharacters(std::vector<Character*> &characters) {
//     characters.push_back(new Character("Harry", "Potter", 20, 1));
//     characters.push_back(new Character("Harry", "Hamble", 52, 2));
//     characters.push_back(new Character("Goveo", "Sasman", 12, 3));
//     characters.push_back(new Character("Tyler", "Durden", 33, 4));
//     characters.push_back(new Character("Forest", "Gump", 40, 5));
// }

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