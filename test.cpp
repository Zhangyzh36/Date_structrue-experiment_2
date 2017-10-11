#include "Stack.h"
#include "Queue.h"


int main()
{
	Stack st;
	st.push('C');
	st.push('O');
	st.push('M');
	st.push('P');
	st.push('U');
	st.push('T');
	st.push('E');
	st.push('R');

	while ( !st.empty() ){
		cout << st.top() << endl;
		st.pop();
	}

	cout << endl;

	Queue q;
	q.inque('C');
	q.inque('O');
	q.inque('M');
	q.inque('P');
	q.inque('U');
	q.inque('T');
	q.inque('E');
	q.inque('R');

	char ch;

	while ( !q.empty() ) {
		q.deque(ch);
		cout << ch << endl;
	}
	return 0;
}