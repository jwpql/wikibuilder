#include "maps.h"


//constructors and constructor helpers===================================================
map<string,string> Maps::constructSitemap() const{
    map<string,string> result;
    fstream file(sitemapPath);
    if (!file)
    {
        ofstream file1(sitemapPath);
    }
    string s;
    int commaPlace = 0;
    while (getline(file, s)){
        int i = 0;
        while (true){
            if (s[i] == ','){
                commaPlace = i;
                result[s.substr(0, commaPlace)] = s.substr(commaPlace + 1);
                break;
            }
            if (i == s.length() - 1){
                cout<<"error: page with missing address in sitemap."<<endl;
                break;
            }
            i++;
        }
    }
    file.close();
    return result;
}

map<string,vector<string>> Maps::constructCategories() const{
    map<string,vector<string>> result;
    string s;
    fstream file(categoryPath);
    if (!file)
    {
        ofstream file1(categoryPath);
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
}

map<string,vector<string>> Maps::constructPages() const{
    map<string,vector<string>> result;
    string s;
    fstream file(pagesPath);
    if (!file)
    {
        ofstream file1(pagesPath);
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
}

Maps::Maps(const string& site, const string& category, const string& page){
    sitemapPath = site;
    categoryPath = category;
    pagesPath = page;
    sitemap = constructSitemap();
    categories = constructCategories();
    pages = constructPages();
}

Maps::Maps(){
    sitemapPath = "../../maps/sitemap.txt";
    categoryPath = "../../maps/categories.txt";
    pagesPath = "../../maps/pages.txt";
    sitemap = constructSitemap();
    categories = constructCategories();
    pages = constructPages();
}

//making and checking file names========================================================
string Maps::makeFileName(string name, char type){ //assumes valid name
    string result = "";
    result = result + "../../data/" + type + "_";
    for (int i = 0; i < name.length(); i++)
    {
        if(isalpha(name[i]) || isdigit(name[i])){
            result += tolower(name[i]);
        }
    }
    result += ".txt";
    return result;
}

bool Maps::validTitle(string name){
    bool result = true;
    bool hasLetter = false;
    for (int i = 0; i<name.length(); i++){
        if (name[i]==',' || name[i] == ':'){
            result = false;
            break;
        }
        if (isalpha(name[i]) || isdigit(name[i])){
            hasLetter = true;
        }
    }
    return result && hasLetter;
}

bool Maps::fileDoesntExist(string name, char c){
    string s = makeFileName(name, c);
    for(auto i = sitemap.begin(); i != sitemap.end(); i++){
        if(i->first == name || i->second == s){
            return false;
        }
    }
    return true;
}

bool Maps::isPage(string name){
    if(sitemap.find(name)==sitemap.end()){
        return false;
    }
    if(sitemap[name].length()<11){
        return false;
    }
    if(sitemap[name][11]=='p'){
        return true;
    }
    return false;
}

//adding pages=========================================================================
void Maps::updateMaps(){
    //writing sitemap
    fstream f1(sitemapPath, std::ofstream::out | std::ofstream::trunc);
    for (auto i = sitemap.begin(); i != sitemap.end(); i++)
    {
        f1 << i->first << "," << i->second << "\n";
    }
    f1.close();

    //writing pages
    fstream f2(pagesPath, std::ofstream::out | std::ofstream::trunc);
    for (auto i = pages.begin(); i != pages.end(); i++)
    {
        f2 << i->first<<",";
        for (auto j : i->second){
            f2 << j<<",";
        }
        f2 << endl;
    }
    f2.close();

    //writing categories
    fstream f3(categoryPath, std::ofstream::out | std::ofstream::trunc);
    for (auto i = categories.begin(); i != categories.end(); i++)
    {
        f3 << i->first;
        for (auto j : i->second){
            f3<<"," << j;
        }
        f3 << endl;
    }
    f3.close();
}

bool Maps::createCategory(string name){
    if (!fileDoesntExist(name, 'c')){
        return false;
    }
    if (!validTitle(name)){
        return false;
    }
    sitemap[name] = makeFileName(name, 'c');
    ofstream file(sitemap[name]);
    file.close();
    categories[name] = {};
    return true;
}

bool Maps::createPage(string name){
    if (sitemap.find(name) != sitemap.end()){
        return false;
    }
    if (!validTitle(name)){
        return false;
    }
    sitemap[name] = makeFileName(name, 'p');
    ofstream file(sitemap[name]);
    file.close();
    pages[name] = {};
    return true;
}

bool Maps::addToCategory(string name, string category, char type){
    if (sitemap.find(name)==sitemap.end()){
        if (!validTitle(name)){
            return false;
        }
        if (type=='c'){
            createCategory(name);
        }
        else{
            createPage(name);
        }
    }
    categories[category].push_back(name);
    pages[name].push_back(category);
    return true;
}

void Maps::deleteFromVector(vector<string> *v, string s)
{
    vector<string> temp = {};
    for (int i = 0; i < v->size(); i++)
    {
        if (v->at(i) != s)
        {
            temp.push_back(v->at(i));
        }
    }
    v->clear();
    for (int i = 0; i < temp.size(); i++)
    {
        v->push_back(temp[i]);
    }
}

bool Maps::removeFromCategory(string name, string category){ //exception handling??
    deleteFromVector(&pages[name], category);
    deleteFromVector(&categories[category], name);
    return true;
}

bool Maps::removeFromWiki(string name){
    if (sitemap.find(name) == sitemap.end()){
        return false;
    }
    std::remove(sitemap[name].c_str());
    sitemap.erase(name);
    //deleting category
    if (categories.find(name) != categories.end()){
        for (int i = 0; i<categories[name].size(); i++){
            //delete category from page
            deleteFromVector(&pages[categories[name][i]], name);
        }
        for (auto i = categories.begin(); i != categories.end(); i++){
            deleteFromVector(&i->second, name);
        }
        categories.erase(name);
    }
    //deleting page
    if (pages.find(name) != pages.end()){
        for(int i = 0; i < pages[name].size(); i++){
            deleteFromVector(&categories[pages[name][i]], name);
        }
        pages.erase(name);
    }
    return true;
}

string Maps::getText(string name)
{
    if (sitemap.find(name) == sitemap.end())
    {
        return "";
    }
    fstream file(sitemap[name]);
    if (!file.is_open())
    {
        return "";
    }
    string s;
    string output = "";
    while (getline(file, s))
    {
        output = output + s + "\n";
    };
    file.close();
    return output;
}

void Maps::updatePage(string name, string content){
    fstream file(sitemap[name], std::ofstream::out | std::ofstream::trunc);
    file<<content;
    file.close();
}

bool Maps::renamePage(string oldName, string newName)
{
    if (!validTitle(newName))
    {
        return false;
    }
    if (sitemap.find(newName)!=sitemap.end())
    {
        return false;
    }
    createPage(newName);
    for (int i = 0; i < pages[oldName].size(); i++)
    {
        categories[pages[oldName][i]].push_back(newName);
    }
    pages[newName]=pages[oldName];
    removeFromWiki(oldName);
    return true;
}
