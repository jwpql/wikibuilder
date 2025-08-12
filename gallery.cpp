#include "gallery.h"

//CHANGE-MAKEFILENAME

//constructing
Gallery::Gallery()
{
    path="Gallery.txt";
    galleryMap = constructImgMap();
}

Gallery::Gallery(string pathName){
    path = pathName;
    galleryMap=constructImgMap();
};

map<string, vector<string>> Gallery::constructImgMap() const{
    map<string,vector<string>> result;
    string s;
    fstream file(path);
    if (!file)
    {
        ofstream file1(path);
    }
    while (getline(file, s)){
        bool first = true;
        string key = "";
        string t = "";
        for (int i = 0; i < s.length(); i++){
            if (s[i] == ',' && first){
                result[t] = {};
                key = t;
                t = "";
                first = false;
            }
            else if (s[i] == ','){
                result[key].push_back(t);
                t="";
            }
            else if (i == s.length() - 1){
                t = t + s[i];
                if (first == true){
                    result[t] = {};
                }
                else{
                    result[key].push_back(t);
                }
            }
            else{
                t = t + s[i];
            }
        }
    }
    file.close();
    return result;
};

//gallery functions
string Gallery::makeFileName(string pageName, string imgSrc)
{
    //naming scheme - page name + number (ex. YueYuan0.jpg)
    //file path format - data/img/img.txt
    string s = "../../data/img/";
    for (int i = 0; i < pageName.length(); i++){
        if (isalnum(pageName[i])){
            s += pageName[i];
        }
    }

    string end = "";
    for (int i = imgSrc.length() - 1; i >= 0; i--){
        if (imgSrc[i] == '.'){
            end = imgSrc[i] + end;
            break;
        }
        else
        {
            end = imgSrc[i] + end;
        }
    }

    int i = 0;
    while (true){
        if (i>100){
            break;
        }
        if (find(galleryMap[pageName].begin(), galleryMap[pageName].end(),
                 s + to_string(i) + ".png") != galleryMap[pageName].end()){
            i++;
        }
        else if (find(galleryMap[pageName].begin(), galleryMap[pageName].end(),
                      s + to_string(i) + ".jpg") != galleryMap[pageName].end()){
            i++;
        }
        else if (find(galleryMap[pageName].begin(), galleryMap[pageName].end(),
                      s + to_string(i) + ".jpeg") != galleryMap[pageName].end()){
            i++;
        }
        else{
            break;
        }
    }
    return s + to_string(i) + end;;
}

bool Gallery::addImage(string pageName, string imgSrc){
    if (galleryMap[pageName].size() > 100){
        return false;
    }
    const string fileName = makeFileName(pageName, imgSrc);
    const filesystem::path from = imgSrc;
    const filesystem::path to = fileName;
    bool result = true;
    try
    {
        result = copy_file(from, to, filesystem::copy_options::none);
    }
    catch (filesystem::filesystem_error e)
    {
        cout<<"file copying error"<<endl;
        cout<<fileName<<endl;
        return false;
    }
    if (result)
    {
        galleryMap[pageName].push_back(fileName);
        updateMap();
        return true;
    }
    return false;
}

bool Gallery::deleteImage(string pageName, string img){
    auto ne = remove(galleryMap[pageName].begin(), galleryMap[pageName].end(), img);
    galleryMap[pageName].erase(ne, galleryMap[pageName].end());
    remove(img.c_str());
    updateMap();
    return true;
};

bool Gallery::deletePage(string pageName){
    for (int i = 0; i < galleryMap[pageName].size(); i++)
    {
        remove(galleryMap[pageName][i].c_str());
    }
    galleryMap.erase(pageName);
    updateMap();
    return true;
};

vector<string> Gallery::getImages(string pageName)
{
    return galleryMap[pageName];
};

void Gallery::updateMap()
{
    //writing pages
    fstream f2(path, std::ofstream::out | std::ofstream::trunc);
    for (auto i = galleryMap.begin(); i != galleryMap.end(); i++)
    {
        f2 << i->first<<",";
        for (auto j : i->second){
            f2 << j<<",";
        }
        f2 << endl;
    }
    f2.close();
}


