// xxtea_experiment.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include "xxtea.h" 

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string a="��!@��������������SADFţ��SFDS�����ڣ�!@#$%^&*(),.,.����������������124-=ASFSСѧӢ����꼶�ϲ�SDFASDF";
	char * temp =(char *) a.c_str();
	string key = "1234567890abcdef";//��Կ
	//cout<<a<<endl;
    string result = xxtea_encrypt(a,key);//�ӿ�1
	cout<<result<<endl;
	string result_1 = xxtea_decrypt(result,key);//�ӿ�2
	cout<<result_1<<endl;
	system("pause");
	return 0;
}

