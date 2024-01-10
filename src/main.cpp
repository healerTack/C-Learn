#include <fstream>
#include <iostream>
using namespace std;

int main() {
    string filename;
    ifstream fin;
    getline(cin, filename);
    fin.open(filename);
    if (!fin.is_open()) {
        cout << "Couldn't open the file " << filename << endl;
        cout << "Program terminating" << endl;
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;

    fin >> value;
    while (fin.good()) {
        count++;
        sum += value;
        fin >> value;
    }
    if(fin.eof()){
        cout << "End of file reached." << endl;
    }else if(fin.fail()){
        cout << "Input terminated by data mismatch." << endl;
    }else{
        cout << "Input terminated for unknown reason." << endl;
    }
    if(count == 0){
        cout << "No data processed" << endl;
    }else{
        cout << "Items read: " << count <<endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum/count << endl;
    }
    fin.close();
    return 0;
}