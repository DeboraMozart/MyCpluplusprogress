#include <iostream>
#include <list>

using namespace std;

int main()
{
	int i;
	int tam;
	list <int> aula;
	list <int>::iterator it;

	for ( i = 0; i < 5; i++){
		aula.push_front(i);
	}
	tam = aula.size();
	cout << tam<<endl;
    it = aula.begin ();
    advance (it,3);
    aula.erase(--it);

	for (i = 0; i < 5; i++){
		cout << aula.front();
		aula.pop_front();
			}
    cout << tam<<endl;
    return 0;
}
