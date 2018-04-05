#include <iostream>

using namespace std;

class Node{
	public:
		int elem;
		Node* next;
	
		Node(int input){
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
			
		
		void push(int x){
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
		
		findA(char '')

};

int main(){
	Stack* s1 = new Stack;
	s1->push(0);
	s1->push(1);
	s1->push(2);
	s1->push(3);
	s1->top();

	s1->printStack();
	
	return 0;
}
