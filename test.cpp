#include <iostream>
#include <vector>

using namespace std;


struct ClassName{
    std::string  classname;
    std::string methods;
    std::string feilds;
};



struct Relationships {
     std::string name;              
     std::vector<ClassName> Relationships;       
};

int main()
{
    int N;
    
    cout << "Please Enter Number of classes: ";
    cin >> N;
    
    
    //vector<vector<vector<vector<int>>>> vec(100, vector<vector<vector<int>>>
    //                                       (200, vector<vector<int>>
    //                                       (100, vector<int>
    //                                       (50))));
    
    vector<string> store(N);
    
    for (int i = 0; i < N; i++)
    {
        cout << "Class #" << i+1 << " ";
        cin >> store[i];
    }
    
    cout << "\n\nHere are the classes:\n";
    for (size_t i=0; i<store.size(); ++i)
    {
        cout << store[i] << '\t';
    }
    
    
    
    return 0;
}
