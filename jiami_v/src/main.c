/*
有一种技巧可以对数据进行加密，并使用一个单词作为它的密匙。下面是它的工
作原理:首先，选择一个单词作为密匙，如TRAILBLAZERS。如果单词中包含
有重复的字母，只保留第1个，其余几个丢弃。现在，修改过的那个单词列于字
母表的下面，如下所示:
ABCDEFGHIJKLMNOPQRSTUVWXYZ
TRAILBZES
最后，底下那行用字母表中剩余的字母填充完整:
ABCDEFGHIJKLMNOPQRSTUVWXYZ
TRAILBZESCDFGHJKMNOPQUVWXY
在对信息进行加密时，信息中的每个字母被固定于顶上那行，并用下面那行的对
应字母一一取代原文的字母。因此，使用这个密匙，ATTACK AT DAWN(黎明
时攻击)就会被加密为TPPTAD TP ITVH。
这个题材共有三个程序(包括下面两个练习)，在第1个程序中，你需要编写函数
int prepare_key(char*key);
它接受一个字符串参数，它的内容就是需要使用的密匙单词。函数根据上面描
述的方法把它转换成一个包含编好码的字符数组。假定key参数是个字符数组，
其长度至少可以容纳27个字符。函数必须把密匙中的所有字符要么转换为大写
字母，要么转换为小写字母(随你选择)，并从单词中去除重复的字母，然后再
用字母表中剩余的字母按照你原先所选择的大小写形式填充到key数组中。如
果处理成功，函数返回一个真值。如果key参数为空或者包含任何非字母字符，
函数将返回一个假值。
void encrypt( char *data, char const*key);
它使用前题prepare_key函数所产生的密匙对data中的字符进行加密。data中的
非字母字符不作修改，但字母字符则用密匙所提供的编过码的字符一一取代源字
符。字母字符的大小写状态应该保留。
这个问题的最后部分就是编写函数
void decrypt( char *data, char const*key);
它接受一个加过密的字符串为参数，它的任务是重现原来的信息。除了它是用于
解密之外，它的工作原理应该与encrypt 相同。

之前写的代码太过于繁琐，也不好阅读，在看了CSDN上别人写的代码后准备重新优化
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int prepare_key(char*key)//生成秘钥
{
	char raw=key;
	char usr_key[27] = {'\0'};
	if(*key==NULL)//若输入的秘钥为空
		return 0;

	//对关键词进行处理
	char* head = key;
	while(*head != '\0')
	{
		if(!isalpha(*head))
			return 0;
		*head = toupper(*head);
		if(!strchr(usr_key,*head))//确保每个字符只出现一次
		{
			strncat(usr_key,head,1);
		}
		head++;
	}

	//生成秘钥
	for(char ch = 'A';ch <= 'Z';ch++)//在ascll码表中字母是连续的，故只要判断单个字符有没有出现在秘钥中，就可以的进行对应添加
	{
		if(!strchr(usr_key,ch))
		{
			strncat(usr_key,&ch,1);
		}
	}
    strcpy(key,usr_key);
	return 1;
}

void encrypt( char *data, char const*key)//加密
{
	while(*data != '\0')
	{
		if(isupper(*data))
		{
			*data = *(key+(*data-'A')); //在字母表中找到字符的位置，然后用在秘钥中进行转换
		}
		if(islower(*data))
		{
			*data =tolower ( *(key+(*data-'a')) );
		}
		data++;
	}
}

void decrypt( char *data, char const*key)//解密
{
	int offset;
	while(*data != '\0')
	{
		if(isupper(*data))
		{
			offset = strchr(key,*data) - key;
			*data = 'A' + offset;
		}

		if(islower(*data))
		{
			offset = strchr(key,toupper (*data)) - key;
			*data = 'a' + offset;
		}
		data++;

	}
}
int main()
{
	char key[27]={'\0'};
	char data[1000] = {'\0'};
	printf("please input key_word: ");
	gets(key);
	if(prepare_key(key))
	{
		printf("秘钥已经成功生成 \n");
	}else{
	    printf("秘钥生成失败 \n");
	}

	printf("请输入要加密的内容： ");
    gets(data);
	encrypt(data,key);
	printf("%s \n",data);
	decrypt(data,key);
	printf("%s \n",data);
	return (0);
}

