//ջ���� �����Ƚ����
//ջ�������б�����Ϊ
//ջ�����ж������Ƿ�Ϊ��
//ջ���Է���Ԫ�ظ���
//
//set/multiset����
//����Ԫ�ض����ڲ���ʱ�Զ�������
//���ڹ���ʽ�������ײ�ṹ���ö�����ʵ��
//set���������������ظ���Ԫ��
//multiset�������������ظ���Ԫ��
//
//��������ֻ��insert�ķ�ʽ

//pair ���鴴��
//�ɶԳ��ֵ����ݣ����ö�����Է�����������
//���ִ�����ʽ
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
//		cout << "��һ������ɹ�" << endl;
//	}
//	s.insert(10);
//	pair<set<int>::iterator, bool> ret1 = (s.insert(10));
//	if (ret1.second)
//	{
//		cout << "�ڶ�������ɹ�" << endl;
//	}
//	else
//	{
//		cout << "�ڶ����������" << endl;
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}

//set���������Զ����������
//bool operator()(int v1,int v2)
//{
//	return va > v2;
//}

//�Զ����������ʹ浽set������ �����Զ����������

//map����
//����͸�ֵ
//��С�ͽ���
//�����ɾ��
//���Һ�ͳ��
//��������
//#include<iostream>
//#include<map>
//#include<algorithm>
//using namespace std;
//void myprint(map<int,int>&m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "��һ��Ԫ����" << (*it).first << "�ڶ���Ԫ����" << (*it).second << endl;
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
//	//��һ�ֲ��뷽ʽ
//	m.insert(pair<int, int>(2, 30));
//	m.insert(pair<int, int>(3, 40));
//	m.insert(pair<int, int>(4, 50));
//	//�ڶ��ֲ��뷽ʽ
//	m.insert(make_pair(5, 60));
//	//������
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
//		cout << "����m��Ϊ��" << endl;
//	}
//	cout << "�����������ݵ�����" << m.size() << endl;
//	m.swap(c);
//	myprint(m);
//
//	if (m.empty())
//	{
//		cout << "����Ϊ��" << endl;
//	}
//	cout << "�����������ݵ�����" << m.size() << endl;
//
//	//����
//	if (c.find(4) != c.end())
//	{
//		cout << "���ҳɹ�" << endl;
//	}
//	//ͳ��
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

//��������˾������Ƹ��10��Ա����ABCDEFGHIJ����10��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ����Ź���
//Ա����Ϣ��: ����  ������ɣ����ŷ�Ϊ���߻����������з�
//�����10��Ա�����䲿�ź͹���
//ͨ��multimap������Ϣ�Ĳ���  key(���ű��) value(Ա��)
//�ֲ�����ʾԱ����Ϣ
//
// ʵ�ֲ���
//
//1. ����10��Ա�����ŵ�vector��
//2. ����vector������ȡ��ÿ��Ա���������������
//3. ����󣬽�Ա�����ű����Ϊkey������Ա����Ϊvalue�����뵽multimap������
//4. �ֲ�����ʾԱ����Ϣ
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
//		string n = "Ա��";
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
//	cout << "���������������߻����š�������������������" << endl;
//	multimap<int, Worker>::iterator pos = m.find(0);
//	int count = m.count(0);
//	int index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "����" << (pos->second).name << "����" << (pos->second).salary << endl;
//	}
//	cout << "���������������������š�������������������" << endl;
//	multimap<int, Worker>::iterator pos1 = m.find(1);
//	 count = m.count(1);
//	 index = 0;
//	for (; pos1 != m.end() && index < count; pos1++, index++)
//	{
//		cout << "����" << (pos1->second).name << "����" << (pos1->second).salary << endl;
//	}
//	cout << "���������������з����š�������������������" << endl;
//	multimap<int, Worker>::iterator pos2 = m.find(2);
//	 count = m.count(2);
//	 index = 0;
//	for (; pos2 != m.end() && index < count; pos2++, index++)
//	{
//		cout << "����" << (pos2->second).name << "����" << (pos2->second).salary << endl;
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
//	//��vector�����д���ʮ��Ա��
//	vector<Worker> v;
//	createworker(v);
//	//ȡ��Ա�����з���
//	multimap<int, Worker> mworker;
//	sortworker(v,mworker);
//	//��ӡԱ��
//	printworker(mworker);
//	//�ֲ�����ʾԱ��
//	showworker(mworker);
//}
//int main()
//{
//	test();
//	return 0;
//}