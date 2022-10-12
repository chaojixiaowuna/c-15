//构造函数
//#include<iostream>
//#include<deque>
//#include<algorithm>
//using namespace std;
//void myprint(const deque<int> v)
//{
//	for (deque<int>::const_iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout <<endl;
//}
//void test()//构造函数
//{
//	deque<int> d;
//	d.push_back(1);
//	d.push_back(2);
//	d.push_back(3);
//	d.push_back(4);
//	myprint(d);
//
//	deque<int> v(d.begin(), d.end());
//	myprint(v);
//
//	deque<int> c(10, 5);
//	myprint(c);
//	
//	deque<int> x(c);
//	myprint(x);
//}
//void test1()//赋值操作
//{
//	deque<int> d;
//	for (int i = 0; i < 10; i++)
//	{
//		d.push_back(i);
//	}
//	myprint(d);
//
//	deque<int> d1;
//	d1 = d;
//	myprint(d1);
//
//	deque<int> d2;
//	d2.assign(d.begin(), d.end());
//	myprint(d2);
//
//	deque<int> d3;
//	d3.assign(5, 5);
//	myprint(d3);
//	if (!d1.empty())
//	{
//		cout << "容器有数据" << endl;
//	}
//	cout << "容器大小;" << d3.size() << endl;
//	d3.resize(6,1);
//	myprint(d3);
//	cout << "容器大小;" << d3.size() << endl;
//}
//void test2()
//{
//	deque<int> d(5, 5);
//	d.insert(d.begin()+3, 3);
//	d.insert(d.end(), 6);
//	d.insert(d.begin() + 2, 4, 7);
//	myprint(d);
//
//	deque<int> d1;
//	d1.push_back(1);
//	d1.push_back(2);
//	d1.push_back(3);
//	d1.push_back(4);
//	d.insert(d.end(), d1.begin(), d1.end());
//	myprint(d);
//	//d.clear();
//	d.erase(d.begin() + 11, d.end());
//	d.erase(d.begin() + 5);
//	myprint(d);
//
//
//	//数据存取操作
//	cout << d[3] << endl;
//	cout << d.at(7) << endl;
//	cout << d.front() << endl;
//	cout << d.back() << endl;
//
//	//对deque数据进行排序
//	sort(d.begin(), d.end());
//	myprint(d);
//}
//
//int main()
//{
//	//test();
//	//test1();
//	test2();
//	return 0;
//}

//有5名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分。
//#include<iostream>
//#include<vector>
//#include<string>
//#include<deque>
//#include<algorithm>
//using namespace std;
////创建选手类
//class Person
//{
//public:
//	Person(string name, int score)
//	{
//		this->m_name = name;
//		this->score = score;
//	}
//	string m_name;
//	int score;
//};
////创建选手的姓名
//void createname(vector<Person>&v)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		
//		string m = "ABCDE";
//		for (i = 0; i < 5; i++)
//		{
//			string name = "选手";
//			name += m[i];
//			Person p(name, 0);
//			v.push_back(p);
//		}
//
//	}
//}
////打分
//void createscore(vector<Person> &v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		deque<int> d;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = 0;
//			score = rand() % 40 + 60;//随机数范围为40-100
//			d.push_back(score);
//		}
//		sort(d.begin(), d.end());
//		d.pop_front();
//		d.pop_back();
//		int sum = 0;
//		for (deque<int>::iterator vit = d.begin(); vit != d.end(); vit++)
//		{
//			
//			sum +=( * vit);
//		}
//		int ave = 0;
//		ave = sum / d.size();
//		(*it).score = ave;
//	}
//}
//void showscore(vector<Person>&v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名是：" << (*it).m_name << "成绩是：" << (*it).score << endl;
//	}
//}
//void test()
//{
//	//创建5名选手
//	vector<Person> v;
//	createname(v);
//	createscore(v);
//	showscore(v);
//}
//int main()
//{
//	test();
//	return 0;
//}
