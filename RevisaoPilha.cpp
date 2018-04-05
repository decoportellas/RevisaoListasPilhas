#include <iostream>

using namespace std;

class Node{
	public:
		char elem;
		Node* next;
	
		Node(char input){
			elem = input;
			next = NULL;
	}
};

class Stack{
	private:
		Node* topStack;
		int n_elem;
	public:
		Stack(){
			topStack = NULL;
			n_elem = 0;
		}
		
		bool isEmpty(){
			return topStack = NULL;
		}
		
		void makeEmpty(){
			topStack == NULL;
		}
		
		int top(){
			return topStack->elem;
		}
		
		int topAndPop(){
			int topElem = topStack->elem;
			
			if(!topStack){
				cout << "Nenhum elemento no topo, a pilha esta vazia.\n" << endl;
			}else{
				topStack = topStack->next;
				cout << "Elemento " << topElem << " foi removido do topo da lista\n" << endl;
				return topElem;
			}
		}
			
		
		void push(char x){
			Node* novo = new Node(x);
			novo->next = topStack;
			topStack = novo;
			n_elem++;
		}
		
		void pop(){
			if(!topStack){
				cout << "Pilha esta vazia." << endl;
			}else{
				Node* aux = topStack;
				topStack = topStack->next;
				cout << "Elemento removido: " << aux->elem << endl;
				
				n_elem--;
			}
		}
		
		void printStack(){
			if(!topStack){
				cout << "Pilha vazia." << endl;
			}else{
				Node* aux = topStack;
				while(aux){
					cout << aux->elem << endl;
					aux = aux->next;
				}
			}
		}
		
		bool findA(char x){
			if(!topStack){
				cout << "A pilha esta vazia." << endl;
				return false;
			}else{
				Node* aux = topStack;
				int c=0;
				
				for(aux=topStack;aux!=NULL;aux=aux->next){
					if(aux->elem == x){
						c++;
					}
				}
				cout << "Foram encontrados " << c << " elementos " << x << " Na pilha." << endl;
				return true;				
			}
		}

};

int main(){
	Stack* s1 = new Stack;
	s1->push('a');
	s1->push('b');
	s1->push('c');
	s1->push('a');
	s1->push('d');
	s1->push('a');
	s1->findA('a');

	s1->printStack();
	
	return 0;
}
