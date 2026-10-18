#include<iostream>
#include<string>
using namespace std;
struct student {
	string name;
	int age;
	int score;
};
void printstudent1(struct student s){
	s.age = 100;
	cout << "子函数1中："<<" 姓名:" << s.name << " 年龄 : " << s.age << " 成绩 : " << s.score << endl;
}
void printstudent2(struct student* p) {
    p->age = 200;
	cout <<"子函数2中："<< " 姓名:" << p->name << " 年龄:" << p->age << " 成绩:" << p->score << endl;
}
int main() {
	struct student s;
	s.name = "张三";
	s.age = 20;
	s.score = 90;
	printstudent1(s);
	printstudent2(&s);
	cout << "main函数中：" << " 姓名:" << s.name << " 年龄 : " << s.age << " 成绩 : " << s.score << endl;
    system("pause");
	return 0;
}