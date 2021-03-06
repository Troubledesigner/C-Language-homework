//
// Created by Famine on 2017/7/11.
//

#ifndef KESHE_DACHUANG_STUDENT_H
#define KESHE_DACHUANG_STUDENT_H

#endif //KESHE_DACHUANG_STUDENT_H

/*统计指定时间期限内指定姓名的学生参加的项目、项目数量、验收通过率、验
收优良率、未结题率。支持模糊查询，可按学号、姓名、项目数量、验收通过率等
排序。 没有指定时间期限时为有记录以来的所有情况。*/

#include "college.h"

struct student {
    char SNo[12];
    char name[12];
    struct project *collection_project[100];
    int project_number;
    float passingRate;
    float excellentAndGoodRate;
    float  unfinishedRate;
};

struct student *getStudent(char *name, struct schedule *head, char *startTime, char *finishTime);

struct student *getStudentData(char *, char *, struct project **);

void printStudent(struct student *);

