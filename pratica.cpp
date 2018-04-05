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
		}
		
	void pop(int x){
		Node* novo = new Node(x);
		
		novo->next=topStack;
		topStack = novo;
		n_elem++;
	}
	
	void printStack(){
		if(!topStack){
			cout << "A pilha esta vazia." << endl;
		}else{
			Node* aux = topStack;
			while(aux){
				cout << aux->elem << endl;
				aux = aux->next;
			}			
		}
	}
	
	void pushif(int x){
		if(n_elem<50){
			Node* novo = new Node(x);
			
			novo->next = topStack;
			topStack = novo;
			n_elem++;
		}else{
			cout << "Pilha cheia." << endl;
		}
	}
	
	void popif(){
		if(n_elem<=25){
			
			Node* aux = topStack;
			topStack = topStack->next;
			delete aux;
			n_elem--;
		}else{
			cout << "Estoque lotado." << endl;
 		}
	}
	
	void pop(){
		Node* aux = topStack;
		topStack = topStack->next;
		delete aux;
		n_elem--;
	}
	
	void verify(){
		if(n_elem<25)
			cout << "Efetuar compra urgente!" << endl;
	}
	
	void multipop(int c){
		while(c!=0){
			pop();
			c--;
		}
		if(n_elem<25){
			verify();
		}
	}

};

int main(){
	Stack* s1 = new Stack;
	s1->pop(3);
	s1->pop(2);
	s1->pop(1);
	s1->multipop(2);
	s1->printStack();
	return 0;
}
