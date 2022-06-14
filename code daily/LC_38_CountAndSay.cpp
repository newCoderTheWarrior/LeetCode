#include<iostream>
#include<String>
using namespace std;

struct Count {//用于存储出现的连续字符和字符连续出现的次数
    char num;//出现的连续字符
    int count;//字符连续出现的次数
}C[3000];//最多字符

class CountAndSay {
public:
    string countAndSay(int n) {
        string s = "";//初始化字符串
        if (n == 1)//边界条件，第一项就是数字1
        {
            s = s + "1";
            return s;
        }
        else//如果输入大于1
        {
            s = s + countAndSay(n - 1);//先得到前一项的结果，以便进行描述

            //描述的过程，程序的关键：
            int len = s.size();//先计算前项的长度
            int temp = 0;//Count结构体的有效项数
            C[0].num = s[0];//结构体第一项的字符必然是前项字符串的第一个字符
            C[0].count = 1;//先将第一个连续字符的连续出现次数记为1
            temp++;//第一个字符录入时，有效项数+1
            int countOfNum = 0;//用于计数字符连续出现的次数
            for (int i = 1; i < len; i++)//遍历前项结果字符串
            {
                if (s[i] == s[i - 1])//若与前一个字符相同
                {
                    C[temp-1].count++;//则该连续字符连续出现次数+1
                }
                else//若与前一个字符不同
                {
                    C[temp].num = s[i];//记录新出现的连续字符
                    C[temp].count = 1;//将新出现连续字符的连续出现次数记为1
                    temp++;//count结构体有效项数+1
                }
            }
            s = "";
            for (int i = 0; i < temp; i++)
            {
                s += to_string(C[i].count);
                s += C[i].num;
            }
            return s;
        }
    }
};