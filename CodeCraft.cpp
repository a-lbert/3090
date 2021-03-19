//#include "CodeCraft.h"
#include <iostream>
#include <vector>
#include <unordered_map>
#include "in.h"
using namespace std;

//Server information
class ServerInfo
{
private:
	unordered_map<string,vector<int>> server_info_;
public:
	ServerInfo(){};
	~ServerInfo(){};
	void show()
	{

		cout<<"jskfjsajlfjlasjdlk"<<endl;
	};
	void insertdata(string str,int cpu, int ram,int h_cost,int d_cost)
	{
		server_info_.emplace(str,value(cpu,ram,h_cost,d_cost));
	};

	vector<int> value(int cpu, int ram, int buycost, int runcost)
	{
		vector<int> temp;
		temp.push_back(cpu);
		temp.push_back(ram);
		temp.push_back(buycost);
		temp.push_back(runcost);
		return temp;
	};

	void searchdata();
	void showdata()
	{
		unordered_map<string,vector<int>>::iterator it = server_info_.find("NV603");
    	if (it == server_info_.end())
		{
    	    cout<<"Element Not Present"<<endl;
		}
   		else
		{
			cout<<(*it).first<<endl;
			cout<<(*it).second.at(0)<<endl;
			cout<<(*it).second.at(1)<<endl;
			cout<<(*it).second.at(2)<<endl;
			cout<<(*it).second.at(3)<<endl;
		}

	};
};

//Virtual Machine information
class VMInfo
{
private:
	unordered_map<string,vector<int>> vm_info_;
public:
	void insertdata()
	{
		vm_info_.emplace("c3.small.1",value(1,1,0));
	};

	vector<int> value(int cpu, int ram, int nodetype)
	{
		vector<int> temp;
		temp.push_back(cpu);
		temp.push_back(ram);
		temp.push_back(nodetype);
		return temp;
	};

	void searchdata();
	void showdata()
	{
		unordered_map<string,vector<int>>::iterator it = vm_info_.find("c3.small.1");
    	if (it == vm_info_.end())
		{
    	    cout<<"Element Not Present"<<endl;
		}
   		else
		{
			cout<<(*it).first<<endl;
			cout<<(*it).second.at(0)<<endl;
			cout<<(*it).second.at(1)<<endl;
			cout<<(*it).second.at(2)<<endl;
		}

	};

};


// int main(int argc, char** argv)
// {
// 	int a;
// 	ServerInfo server_info;
// 	server_info.insertdata();
// 	server_info.showdata();
// 	VMInfo vm_info;
// 	vm_info.insertdata();
// 	vm_info.showdata();
// 	cout<<"hahahahahah"<<endl;
// 	get_data();
// 	// TODO:read standard input
// 	// TODO:process
// 	// TODO:write standard output
// 	// TODO:fflush(stdout);

// 	return 0;
// }
