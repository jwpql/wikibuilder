#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <algorithm>
#include <filesystem>
#pragma once
using namespace std;

class Gallery{
public:
    map<string, vector<string>> galleryMap;
    string path;

    //constructing
    Gallery(); //never call this ever
    explicit Gallery(string path);
    map<string, vector<string>> constructImgMap() const;

    //adding images
    string makeFileName(string pageName, string imgSrc);
    bool addImage(string pageName, string imgSrc);
    bool deleteImage(string pageName, string img);
    bool deletePage(string pageName);
    vector<string> getImages(string pageName);
    void updateMap();
};
