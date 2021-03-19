#ifndef CODECRAFT_H
#define CODECRAFT_H
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


class ServerInfo
{

    private:
    unordered_map<string,vector<int>> server_info_;

    public:
    ServerInfo(){};
	~ServerInfo(){};
    void show();
    void insertdata();
    vector<int> value(int cpu, int ram, int buycost, int runcost);
    void searchdata();
    void showdata();


};

// class VMinfo
// {
//     private:
//     unordered_map<string,vector<int>> vm_info_;

//     public:
//     void insertdata();
//     vector<int> value(int cpu, int ram, int nodetype);
//     void searchdata();
//     void showdata();




// };

#endif