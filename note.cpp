#include <fstream>// 文件读写
#include <iostream>
#include <string>// 参考python的string类型

#include <array>// 类似list
#include <vector>

using namespace std;

int main() {
    // 字符串读取 char数组类型
    char str[100];
    // 以空格为分隔符
    cin >> str;
    // 读取一行并自动换行
    cin.getline(str, 100);
    // 读取一行但不自动换行
    cin.get(str, 100).get();

    // string类型
    string str2;
    // 以空格为分隔符
    cin >> str2;
    // 读取一行，从标准输入cin中读取
    getline(cin, str2);

    // 共用体union
    union one4all {
        int int_val;
        long long_val;
        double double_val;
    };

    // 枚举
    enum color {
        red = 1,
        green = 2,
        orange = 3,
        yellow = 4,
        blue = 5,
        black = 6
    };

    // 使用new和delete来对指针变量赋予内存和释放内存
    // 单个变量
    int *ps = new int;
    *ps = 10;
    delete ps;
    // 数组指针
    int *pa = new int[10];
    *pa = 10;
    *(pa + 2) = 20;
    delete[] pa;
    /*
     * 1 new 和 delete 要配对
     * 2 new [] 对应 delete []
     * 3 不要多指针指向同一元素
     * 4 对空指针进行delete被允许
     */

    // 数组声明，动态的分配用vector，静态用array更方便
    // vector 数组声明
    vector<int> t(3);
    // array 数组声明, 其中数组大小不能为变量
    array<int, 4> p;
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;

    // 文件IO
    // 文件输出
    ofstream fout;
    string filename;
    getline(cin, filename);
    fout.open(filename);
    fout << "10" << endl;
    fout.close();
    // 文件输入
    ifstream fin;
    getline(cin, filename);
    fin.open(filename);
    if (!fin.is_open()) exit(EXIT_FAILURE);
    string line;
    getline(fin, line);
    fin.close();
}
