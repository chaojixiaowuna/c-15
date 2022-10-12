//栈容器 符合先进后出
//栈不允许有遍历行为
//栈可以判断容器是否为空
//栈可以返回元素个数
//
//set/multiset容器
//所有元素都会在插入时自动被排序
//属于关联式容器，底层结构是用二叉树实现
//set不允许容器中有重复的元素
//multiset允许容器中有重复的元素
//
//插入数据只有insert的方式

//pair 对组创建
//成对出现的数据，利用对组可以返回两个数据
//两种创建方式
//pair<type1, type2> p(value1, value2);
//pair<type1, type2> p = make_pair(value1, value2);
//#include<iostream>
//#include<set>
//using namespace std;
//void test()
//{
//	set<int> s;
//	pair<set<int>::iterator,bool> ret=(s.insert(10));
//	if (ret.second)
//	{
//		cout << "第一次输入成功" << endl;
//	}
//	s.insert(10);
//	pair<set<int>::iterator, bool> ret1 = (s.insert(10));
//	if (ret1.second)
//	{
//		cout << "第二次输入成功" << endl;
//	}
//	else
//	{
//		cout << "第二次输入错误" << endl;
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}

//set容器可以自定义排序规则
//bool operator()(int v1,int v2)
//{
//	return va > v2;
//}

//自定义数据类型存到set容器中 必须自定义排序规则

//map容器
//构造和赋值
//大小和交换
//插入和删除
//查找和统计
//容器排序
//#include<iostream>
//#include<map>
//#include<algorithm>
//using namespace std;
//void myprint(map<int,int>&m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "第一个元素是" << (*it).first << "第二个元素是" << (*it).second << endl;
//	}
//}
//class mycompare
//{
//public:
//	bool operator()( int v1, int v2)const
//	{
//		return v1 > v2;
//	}
//};
//void test()
//{
//	map<int, int> m;
//	//第一种插入方式
//	m.insert(pair<int, int>(2, 30));
//	m.insert(pair<int, int>(3, 40));
//	m.insert(pair<int, int>(4, 50));
//	//第二种插入方式
//	m.insert(make_pair(5, 60));
//	//第三种
//	m.insert(map<int, int>::value_type(6, 70));
//	myprint(m);
//	map<int, int> a(m);
//	map<int, int> c;
//	c = a;
//	c.erase(3);
//	c.erase(c.begin());
//	c.clear();
//	//myprint(c);
//	if (!m.empty())
//	{
//		cout << "容器m不为空" << endl;
//	}
//	cout << "容器储存数据的数量" << m.size() << endl;
//	m.swap(c);
//	myprint(m);
//
//	if (m.empty())
//	{
//		cout << "容器为空" << endl;
//	}
//	cout << "容器储存数据的数量" << m.size() << endl;
//
//	//查找
//	if (c.find(4) != c.end())
//	{
//		cout << "查找成功" << endl;
//	}
//	//统计
//	cout << c.count (4) << endl;
//
//	map<int, int, mycompare> d;
//	d.insert(pair<int, int>(2, 30));
//	d.insert(pair<int, int>(3, 40));
//	d.insert(pair<int, int>(4, 50));
//	for (map<int, int, mycompare>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << (*it).second << endl;
//	}
//	//myprint(d);
//}
//int main()
//{
//	test();
//	return 0;
//}

//案例：公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
//员工信息有: 姓名  工资组成；部门分为：策划、美术、研发
//随机给10名员工分配部门和工资
//通过multimap进行信息的插入  key(部门编号) value(员工)
//分部门显示员工信息
//
// 实现步骤
//
//1. 创建10名员工，放到vector中
//2. 遍历vector容器，取出每个员工，进行随机分组
//3. 分组后，将员工部门编号作为key，具体员工作为value，放入到multimap容器中
//4. 分部门显示员工信息
//#include<iostream>
//#include<vector>
//#include<map>
//using namespace std;
//#define cehua 0;
//#define meishu 1;
//#define yanfa 2;
//class Worker
//{
//public:
//	Worker(string name, int salary)
//	{
//		this->name = name;
//		this->salary = salary;
//	}
//	string name;
//	int salary;
//};
//void createworker(vector<Worker>& v)
//{
//	string name = "ABCDEFGHIJ";
//	for (int i = 0; i < 10; i++)
//	{
//		string n = "员工";
//		n += name[i];
//		int salary = rand() % 1000 + 1000;
//		Worker w(n,salary);
//
//		v.push_back(w);
//	}
//}
//void sortworker(vector<Worker>& v,multimap<int,Worker>&mworker)
//{
//	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		int id = rand() % 3;
//		mworker.insert(make_pair(id, (*it)));
//	}
//}
//void showworker(multimap<int, Worker>& m)
//{
//	cout << "———————策划部门——————————" << endl;
//	multimap<int, Worker>::iterator pos = m.find(0);
//	int count = m.count(0);
//	int index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "姓名" << (pos->second).name << "工资" << (pos->second).salary << endl;
//	}
//	cout << "———————美术部门——————————" << endl;
//	multimap<int, Worker>::iterator pos1 = m.find(1);
//	 count = m.count(1);
//	 index = 0;
//	for (; pos1 != m.end() && index < count; pos1++, index++)
//	{
//		cout << "姓名" << (pos1->second).name << "工资" << (pos1->second).salary << endl;
//	}
//	cout << "———————研发部门——————————" << endl;
//	multimap<int, Worker>::iterator pos2 = m.find(2);
//	 count = m.count(2);
//	 index = 0;
//	for (; pos2 != m.end() && index < count; pos2++, index++)
//	{
//		cout << "姓名" << (pos2->second).name << "工资" << (pos2->second).salary << endl;
//	}
//}
//void printworker(multimap<int,Worker>&m)
//{
//	for (multimap<int, Worker>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << (*it).first<<((*it).second ).name << endl;
//	}
//}
//void test()
//{
//	//在vector容器中创建十名员工
//	vector<Worker> v;
//	createworker(v);
//	//取出员工进行分组
//	multimap<int, Worker> mworker;
//	sortworker(v,mworker);
//	//打印员工
//	printworker(mworker);
//	//分部门显示员工
//	showworker(mworker);
//}
//int main()
//{
//	test();
//	return 0;
//}