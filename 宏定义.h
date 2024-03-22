#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdbool.h>
#include <windows.h>
#include <direct.h>
#include <conio.h>
#include <stdbool.h>
#include <stddef.h>

//宏定义
#define NOVEL_NAME				25//定义作品名长度
#define AUTHER_NAME				20//定义作者名字长度
#define TYPE					20//文体类型的长度
#define WORKS_NUMBER			200//定义作品数量
#define AUTHER_NUMBER			200//定义作者数量
#define PROVINCE_NUMBER			35//省级行政区数量
#define CITY_NUMBER				30//地级市数量
#define CITY_TOTALNUMBER		335//地级行政单位总数量
#define DISTRICT_NUMBER			20//县级行政单位
#define DISRTICT_TOTALNUMBER	2852//县级行政单位总量 #pragma once
#define CONTENT_CHAR_NUMBER		5000//文档内容中字符数量
#define BRIEF_CHAR_NUMBER		500//简要输出
#define ALIAS_NUMBER    100//一百个有别名的
#define _CRT_SECURE_NO_WARNINGS 1