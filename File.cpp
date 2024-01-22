#include<iostream>
#include<fstream>
using namespace std;

class FileConstructor{
    ofstream ifile;
    public:
    FileConstructor(string filename){
        ifile.open("filename.txt",ios::out);
        if (!ifile.is_open())
        {
            cerr<<"Unable to open File....\n";
            return;
        }
        cout<<"File Open Successfully.....\n";
    }
    
};
int main(){
    FileConstructor f("filename.txt");

    return 0;
}