#include<iostream>
#include<String>
using namespace std;

struct Count {//���ڴ洢���ֵ������ַ����ַ��������ֵĴ���
    char num;//���ֵ������ַ�
    int count;//�ַ��������ֵĴ���
}C[3000];//����ַ�

class CountAndSay {
public:
    string countAndSay(int n) {
        string s = "";//��ʼ���ַ���
        if (n == 1)//�߽���������һ���������1
        {
            s = s + "1";
            return s;
        }
        else//����������1
        {
            s = s + countAndSay(n - 1);//�ȵõ�ǰһ��Ľ�����Ա��������

            //�����Ĺ��̣�����Ĺؼ���
            int len = s.size();//�ȼ���ǰ��ĳ���
            int temp = 0;//Count�ṹ�����Ч����
            C[0].num = s[0];//�ṹ���һ����ַ���Ȼ��ǰ���ַ����ĵ�һ���ַ�
            C[0].count = 1;//�Ƚ���һ�������ַ����������ִ�����Ϊ1
            temp++;//��һ���ַ�¼��ʱ����Ч����+1
            int countOfNum = 0;//���ڼ����ַ��������ֵĴ���
            for (int i = 1; i < len; i++)//����ǰ�����ַ���
            {
                if (s[i] == s[i - 1])//����ǰһ���ַ���ͬ
                {
                    C[temp-1].count++;//��������ַ��������ִ���+1
                }
                else//����ǰһ���ַ���ͬ
                {
                    C[temp].num = s[i];//��¼�³��ֵ������ַ�
                    C[temp].count = 1;//���³��������ַ����������ִ�����Ϊ1
                    temp++;//count�ṹ����Ч����+1
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