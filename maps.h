#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <algorithm>
#pragma once
using namespace std;

//CHECK HOW FILE PATHS ARE STORES IN THE QT THING!!!!
//FUNCTIONS THAT DO FILE PATHS:
//  ISPAGE
//  MAKEFILENAME
//  ADDTOCATEGORY ??

class Maps{
public:

    //stores file paths
    string sitemapPath;
    string categoryPath;
    string pagesPath;

    //stores page/category links, file locations
    map<string, string> sitemap;
    map<string, vector<string>> categories;
    map<string, vector<string>> pages;

    //constructor functions
    map<string, string> constructSitemap() const;
    map<string, vector<string>> constructCategories() const;
    map<string, vector<string>> constructPages() const;

    Maps(const string& site, const string& category, const string& page);
    Maps();

    //might have to modify path in final. check validtitle before using. char should be c or p
    string makeFileName(string name, char type);
    //valid title: at least 1 letter or number. no commas or em dashes
    bool validTitle(string name);
    bool fileDoesntExist(string name, char c);
    bool isPage(string name);

    //writes map content to files
    void updateMaps();
    bool createCategory(string name);
    bool createPage(string name);
    bool addToCategory(string name, string category, char type='p');
    static void deleteFromVector(vector<string> *v, string s); //helper function
    bool removeFromCategory(string name, string category);
    bool removeFromWiki(string name);

    //display functions
    string getText(string name);
    void updatePage(string name, string content);
    bool renamePage(string oldName, string newName);
};
