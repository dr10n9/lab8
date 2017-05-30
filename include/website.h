#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <vector>

using namespace std;

class webSite
{
    string _siteName;
    string _mainLink;
    int _id;
public:
    // Character();
    // Character(string name, string surname, int age, int id);
    // ~Character();

    // void setName(string name);
    // void setSurname(string surname);
    // void setAge(int age);
    // void setId(int id);

    // string getName(void);
    // string getSurname(void);
    // float getAge(void);
    // int getId(void);
    // string getField(string field);
    webSite();
    webSite(string siteName, string mainLink, int id);
    ~webSite();

    void setSiteName(string name);
    void setMainLink(string link);
    void setId(int id);

    string getSiteName();
    string getMainLink();
    int getId();

    string getField(string field);
};

void fillSites(vector<webSite*> &sites);

#endif // CHARACTER_H