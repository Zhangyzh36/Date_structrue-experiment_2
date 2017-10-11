#include "Stack.h"
#include "Queue.h"
#include <iostream>
#include <string>
using namespace std;

void instructions();
int getCommand();
bool doCommand(int command);
void testStack();
void testQueue();

int main()
{
	instructions();
	while ( doCommand(getCommand())){
		instructions();
	}
	return 0;
}

void instructions()
{
	cout << endl << "*************************************" << endl;
	cout << "����������ָ��" << endl;
	cout << "  -[1] ����ջ" << endl;
	cout << "  -[2] ��������" << endl;
	cout << "  -[0] �˳�" << endl;
	cout << "*************************************" << endl << endl; 
}

int getCommand()
{
	string str;
	cout << "������ָ�";
	cin >> str;
	while ( str[0] != '0' && str[0] != '1' && str[0] != '2' )
	{
		cout << "��������ȷ��ָ��(0��1��2)��";
		cin >> str; 
	}
	
	return str[0] - '0';
}

bool doCommand(int command) {
	switch (command) {
		case 0:
			return false;
		case 1:
			testStack();
			return true;
		case 2:
			testQueue();
			return true;
	}
}

void testStack()
{
	Stack st;
	
	cout << endl << "ջ�ѽ�����������ָ��:" << endl;
	cout << "  -[1] ��ջ" << endl;
	cout << "  -[2] ��ջ" << endl;
	cout << "  -[0] �˳�" << endl;
	
	int command;
	while ( command = getCommand() ) 
	{
		switch (command) {
			case 1: 
				{
					string value;
					cout << "������Ҫ��ջ��ֵ:";
					cin >> value;
					st.push(value);
					cout << value << "��ջ" << endl; 
				}
				break;
			
			case 2:
				{
					if ( st.empty() )
						cout << "ջ�գ���ջʧ��(����)" << endl;
					else
					{
						cout << st.top() << "��ջ" << endl;
						st.pop(); 
					} 
				}
				break;
		}
	}
}

void testQueue() 
{
	Queue q;
	
	cout << endl << "�����ѽ�����������ָ��:" << endl;
	cout << "  -[1] ���" << endl;
	cout << "  -[2] ����" << endl;
	cout << "  -[0] �˳�" << endl;
	
	int command;
	while ( command = getCommand() ) 
	{
		switch (command) {
			case 1: 
				{
					string value;
					cout << "������Ҫ��ӵ�ֵ:";
					cin >> value;
					if ( q.full() )
						cout << "�������������ʧ��(����)" << endl; 
					
					else
					{
						q.inque(value);
						cout << value << "���" << endl; 
					} 
				}
				break;
			
			case 2:
				{
					if ( q.empty() )
						cout << "�ӿգ�����ʧ��(����)" << endl;
					else
					{
						string temp;
						q.deque(temp); 
						cout << temp << "����" << endl;
					} 
				}
				break;
		}
	}
}

