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


 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char alp[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int prepare_key(char*key)  //生成秘钥
{
	int arr_alp[27] = {0}; //标记出现的字母
    char* raw_key = key; 
	int len = 0;
	while(*key!='\0')//计算输入字符串长度
	{
		len++;
		key++;
	}

	//转换秘钥全为大写
	key=raw_key;
	for(int i = 0; i<len ;i++)
	{
		*(key+i)=toupper(*(key+i));

	}
	
	int tlen=len;
	key=raw_key;
	//剔除其中多余的字符
	for(int i = 0;i<tlen;i++)
	{
		for(int j = i+1;j<tlen;j++)
		{
			if( *(key+i) == *(key+j) )
			{
				for(int h = j; h <= (tlen-1) ; h++)
				{
					*(key+h)=*(key+h+1);
				}
				*(key+tlen)=' ';
				tlen--;
			}
		}
	}

	//标记已经存在的字符
	  //先计算压缩后的字符串长度
	key=raw_key;
	int len_r = 0;
	while(*key!='\0')//计算输入字符串长度
	{
		len_r++;
		key++;
	}
    key=raw_key;
	for(int i = 0 ;i<len_r;i++)
	{
		for(int j = 0 ;j<27;j++)
		{
			if(*(key+i)==alp[j])
			{
				arr_alp[j]=1;
			}
		}
	}

	//拓宽秘钥
	key=raw_key;
	for(int i =len_r;i<27;i++)
	{
		for(int j = 0;j<27;j++)
		{
			if(arr_alp[j]!=1)
			{
				*(key+i)=alp[j];
				arr_alp[j]=1;
				break;
			}
		}
	}

	//检验秘钥创建是否正确
	for(int i =0; i<27;i++)
	{
		if(arr_alp[i]==0)
			return 0;
	}
	return 1;
}


void encrypt( char *data, char const*key)  //加密
{
	char* raw_data = data;
	int len = 0;
	while(*data != '\0')//计算语句长度
	{
		len++;
		data++;
	}

	int logo[len]; //标记语句信息
	data = raw_data;	for(int i = 0; i<len ;i++)
	{
		if( isupper( *(data+i) ) )
		{
			logo[i]=2;
			continue;
		}else if( islower( *(data+i) ) )
		{
			logo[i]=1;
			continue;
		}else{
			logo[i]=0;
		}
		
	}

    //转换数据全为大写
	data=raw_data;
	for(int i = 0; i<len ;i++)
	{
		if(isalpha(*(data+i)))
		  *(data+i)=toupper(*(data+i));

	}
	
	data = raw_data;

	
	//加密
	data = raw_data;
	char a,b,c,d;
	for(int i = 0; i<len ;i++)
	{
		for(int j = 0; j<27 ; j++)
		{
			if( *(data+i)==alp[j] )
			{
				*(data+i)=*(key+j); //替换字符
				if(logo[i]==1)
				{
					*(data+i) = tolower(*(data+i));
				}
				break;
			}
		}
	}

}

void decrypt( char *data, char const*key)//解密
{
	char* raw_data = data;
	int len = 0;
	while(*data != '\0')//计算语句长度
	{
		len++;
		data++;
	}

	int logo[len]; //标记语句信息
	data = raw_data;	for(int i = 0; i<len ;i++)
	{
		if( isupper( *(data+i) ) )
		{
			logo[i]=2;
			continue;
		}else if( islower( *(data+i) ) )
		{
			logo[i]=1;
			continue;
		}else{
			logo[i]=0;
		}
		
	}

    //转换数据全为大写
	data=raw_data;
	for(int i = 0; i<len ;i++)
	{
		if(isalpha(*(data+i)))
		  *(data+i)=toupper(*(data+i));

	}
	
	//解密
	data = raw_data;
	for(int i = 0; i<len ;i++)
	{
		for(int j = 0; j<27 ; j++)
		{
			if( *(data+i)==*(key+j) )
			{
				*(data+i)=alp[j]; //替换字符
				if(logo[i]==1)
				{
					*(data+i) = tolower(*(data+i));
				}
				break;
			}
		}
	}

	
}
int main()
{

	char str[27];
	gets(str);
	
	int ret = prepare_key(str);
	if(ret)
	{
		printf("秘钥已成功生成，请输入语句进行加密 \n");
		char data[27];
		gets(data);

		encrypt(data,str);
		printf("%s \n",data);
		decrypt(data,str);
		printf("%s \n",data);
	}else{
		printf("秘钥生成失败，请重新运行 \n");
	}
	
	return (0);
}

