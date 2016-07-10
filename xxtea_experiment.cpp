// xxtea_experiment.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "xxtea.h" 

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string a="上!@，；’。、】海SADF牛津SFDS（深圳）!@#$%^&*(),.,.，，，，；‘【、124-=ASFS小学英语二年级上册SDFASDF";
	char * temp =(char *) a.c_str();
	string key = "1234567890abcdef";//秘钥
	//cout<<a<<endl;
    string result = xxtea_encrypt(a,key);//接口1
	cout<<result<<endl;
	string result_1 = xxtea_decrypt(result,key);//接口2
	cout<<result_1<<endl;
	system("pause");
	return 0;
}

