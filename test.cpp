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
	cout << "请输入以下指令" << endl;
	cout << "  -[1] 建立栈" << endl;
	cout << "  -[2] 建立队列" << endl;
	cout << "  -[0] 退出" << endl;
	cout << "*************************************" << endl << endl; 
}

int getCommand()
{
	string str;
	cout << "请输入指令：";
	cin >> str;
	while ( str[0] != '0' && str[0] != '1' && str[0] != '2' )
	{
		cout << "请输入正确的指令(0或1或2)：";
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
	
	cout << endl << "栈已建立，请输入指令:" << endl;
	cout << "  -[1] 入栈" << endl;
	cout << "  -[2] 出栈" << endl;
	cout << "  -[0] 退出" << endl;
	
	int command;
	while ( command = getCommand() ) 
	{
		switch (command) {
			case 1: 
				{
					string value;
					cout << "请输入要入栈的值:";
					cin >> value;
					st.push(value);
					cout << value << "入栈" << endl; 
				}
				break;
			
			case 2:
				{
					if ( st.empty() )
						cout << "栈空，出栈失败(下溢)" << endl;
					else
					{
						cout << st.top() << "出栈" << endl;
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
	
	cout << endl << "队列已建立，请输入指令:" << endl;
	cout << "  -[1] 入队" << endl;
	cout << "  -[2] 出队" << endl;
	cout << "  -[0] 退出" << endl;
	
	int command;
	while ( command = getCommand() ) 
	{
		switch (command) {
			case 1: 
				{
					string value;
					cout << "请输入要入队的值:";
					cin >> value;
					if ( q.full() )
						cout << "队列已满，入队失败(上溢)" << endl; 
					
					else
					{
						q.inque(value);
						cout << value << "入队" << endl; 
					} 
				}
				break;
			
			case 2:
				{
					if ( q.empty() )
						cout << "队空，出队失败(下溢)" << endl;
					else
					{
						string temp;
						q.deque(temp); 
						cout << temp << "出队" << endl;
					} 
				}
				break;
		}
	}
}

