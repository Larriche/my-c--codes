/*
   Author - Richman Larry Clifford
   
   A program that accepts a filename as a command argument and outputs 
   number of lines in the file
   
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc,char** argv)
{
    int line_count = 0;
    
    string filename;
    
    if(!argv[1])
        cout << "Please run program from command line with a filename passed as argument" << endl;
    else {
        filename = argv[1];
        
        ifstream file_obj(filename.c_str());
        
        if(!file_obj.fail()){
            while(!file_obj.eof()){
                string x;
                if(getline(file_obj,x))
                    line_count++;
                
            }
            
            cout << "The file has " << line_count << " lines in it" << endl;
        }
            
        else
            cout << "File could not be opened" << endl;
    }
          
  
    system("pause");
    return 0;
}
