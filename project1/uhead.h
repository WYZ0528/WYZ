#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<math.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>
struct result{//计算结果
    long sum;
    float average;
};

void show(int *,int);
void uround(int *,int);//产生随机数,size为数量
struct result uoprater(int *,int);//计算总数和平均数
int comp(const void *a,const void *b);//比较大小
void syssort(int *,int);//系统排序
void usort(int *,int);//自己排序
double calculate_time();//计算时间差
void uwrite(const char *,int *,int);//写入文件
void uread(const char *,int *,int);//读出文件