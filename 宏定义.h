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

//�궨��
#define NOVEL_NAME				25//������Ʒ������
#define AUTHER_NAME				20//�����������ֳ���
#define TYPE					20//�������͵ĳ���
#define WORKS_NUMBER			200//������Ʒ����
#define AUTHER_NUMBER			200//������������
#define PROVINCE_NUMBER			35//ʡ������������
#define CITY_NUMBER				30//�ؼ�������
#define CITY_TOTALNUMBER		335//�ؼ�������λ������
#define DISTRICT_NUMBER			20//�ؼ�������λ
#define DISRTICT_TOTALNUMBER	2852//�ؼ�������λ���� #pragma once
#define CONTENT_CHAR_NUMBER		5000//�ĵ��������ַ�����
#define BRIEF_CHAR_NUMBER		500//��Ҫ���
#define ALIAS_NUMBER    100//һ�ٸ��б�����
#define _CRT_SECURE_NO_WARNINGS 1