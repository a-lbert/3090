#include <iostream>
#include "in.h"
//#include "CodeCraft.h"
#include <iostream>
#include <vector>
#include <unordered_map>
#include "in.h"
#include <fstream>//ifstream读文件，ofstream写文件，fstream读写文件
#include <cctype>
#include <string>//文本对象，储存读取的内容
#include <iostream>//屏幕输出cout
#include <cstdlib>//调用system("pause");
#include <sstream> //stringstream
#include <cstring>

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
		server_info_.emplace("NV603",value(92,324,53800,500));
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
	void insertdata(string str,int cpu, int ram,int nodetype)
	{
		vm_info_.emplace(str,value(cpu,ram,nodetype));
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
		unordered_map<string,vector<int>>::iterator it = vm_info_.find("c3.large.4");
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

int main(int, char**) {
    //std::cout << "Hello, world!\n";
    //get_data();
    ServerInfo server_info;
    // server_info.insertdata();
    //  server_info.showdata();
    

	
	VMInfo vm_info;
	// vm_info.insertdata();
	// vm_info.showdata();
	ifstream in("training-1.txt");
    string line;
	//字符串分割
	vector <string> stringsplit(const string &str, const char *delim);

	int str_to_int(const string &str);
    if(in) // 有该文件
    {
		//处理服务器信息
		int server_num;
		getline(in,line);
		//cout<<line<<endl;
		server_num=str_to_int(line);
		cout<<"server_num:"<<server_num<<endl;
		
		for (int i=0;i<server_num;i++)
		{
			getline(in,line);
			int len=line.size();
			line.erase(len-1);
			line.erase(0,1);
			//cout<<line<<endl;
			vector <std::string> str;
			 str =  stringsplit(line,", ");
			//cout<<str[0]<<" "<<str_to_int(str[1])<<" "<<str_to_int(str[2])<<" "<<str_to_int(str[3])<<" "<<str_to_int(str[4])<<endl;
			server_info.insertdata(str[0],str_to_int(str[1]),str_to_int(str[2]),str_to_int(str[3]),str_to_int(str[4]));
			//server_info.showdata();
			 ///cout<<str[0]<<str[1]<<str[2]<<str[3]<<endl;




		}
		cout<<"............................................................................"<<endl;

		//处理虚拟机信息
		int vm_num;
		getline(in,line);
		//cout<<line<<endl;
		vm_num=str_to_int(line);

		cout<<"vm_num:"<<vm_num<<endl;
		
		for (int i=0;i<vm_num;i++)
		{
			getline(in,line);
			int len=line.size();
			line.erase(len-1);
			line.erase(0,1);
			//cout<<line<<endl;
			vector <std::string> str;
			str =  stringsplit(line,", ");
			//cout<<str[0]<<" "<<str_to_int(str[1])<<" "<<str_to_int(str[2])<<" "<<str_to_int(str[3])<<endl;
			vm_info.insertdata(str[0],str_to_int(str[1]),str_to_int(str[2]),str_to_int(str[3]));
			//vm_info.showdata();
			//cout<<"............................................................................"<<endl;

			// vm_info.insertdata(str[0],str_to_int(str[1]),str_to_int(str[2]),str_to_int(str[3]));
			// vm_info.showdata();


		}
		cout<<"............................................................................"<<endl;
		//处理请求
		int day_num;
		getline(in,line);
		//cout<<line<<endl;
		day_num=str_to_int(line);
		cout<<"day_num:"<<day_num<<endl;
		
		for (int i=0;i<day_num;i++)
		{
			//cout<<"处理第"<<i+1<<"天的需求"<<endl;
			int req_num;
			getline(in,line);
			//cout<<line<<endl;
			req_num=str_to_int(line);
			//cout<<"req_num:"<<req_num<<endl;
			for (int i=0;i<req_num;i++)
			{
				getline(in,line);
				int len=line.size();
				line.erase(len-1);
				line.erase(0,1);
				//cout<<line<<endl;
				vector <std::string> str;
				str =  stringsplit(line,", ");
				//cout<<str[0]<<" "<<str[1]<<endl;

			}
			
		}

        // while (getline (in, line)) // line中不包括每行的换行符
        // { 
		// 	if (isalnum(line[0]))
		// 		//cout<<"hahahha"<<endl;
				
		// 		//cout<<int(line[0])<<endl;
		// 		for (int i=0 ;i<int(line[0])-47; i++)
		// 		{
		// 			cout<<"jinru"<<endl;
		// 			getline(in,line);
		// 			cout << line << endl;

		// 		}

        //     //cout << line << endl;
			
        //}
    }
    else // 没有该文件
    {
        cout <<"no such file" << endl;
    }

    //system("pause");
}
vector <string> stringsplit(const string &str, const char *delim)
{
	vector <std::string> strlist;
			int size = str.size();
			char *input = new char[size+1];
			strcpy(input, str.c_str());
			char *token = std::strtok(input, delim);
			while (token != NULL) {
				strlist.push_back(token);
				token = std::strtok(NULL, delim);
			}
			delete []input;
			return strlist;
}
int str_to_int(const string &str)
{
	stringstream stream(str);  
				 int a=0;
				 stream>>a;
				 return a;

}
