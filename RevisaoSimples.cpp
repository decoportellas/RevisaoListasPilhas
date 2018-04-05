#include <iostream>

using namespace std;

class Node{
	public:
	Node* next;
	char value;
	
	Node(char input){
		value = input;
		next = NULL;
	}
};

class List{
	public:
	Node*head;
	Node* tail;
	
	List(){
		head = tail = NULL;
	}	
	
	void pushfront(char x){
		Node* novo = new Node(x);
		
		if(!head){
			head = tail = novo;
		}else{
			novo->next = head;
			head = novo;
		}
	}
	
	void pushback(char x){
		Node* novo = new Node(x);
		
		if(!head){
			head = tail = novo;
		}else{
			tail->next = novo;
			tail = novo;
		}
	}
	
	void printlist(){
		Node* aux = head;
		
		while(aux){
			cout << aux->value << endl;
			aux = aux->next;
		}	
	}

	bool deletif(char x){
		Node* aux;
		if(!head){
			cout << "Lista vazia" << endl;
			return false;
		}
		while(head->value == x){
			head = head->next;
			cout << "Todos elementos foram excluidos do inicio da lista." << endl;
		}
		if(!head){
			cout << "Lista esvaziada" << endl;
			return false;
		}
		aux = head;
		while(aux){
			while(aux->next){
				if(aux->next->value == x){
					aux->next=aux->next->next;
				}
				aux= aux->next;
			}
			cout << "Todos elementos " << x << "foram excluidos da lista" << endl;
			return true;
 		}
	}

};

int main(){
	List* l1 = new List;
	l1->pushfront('a');
	l1->pushback('b');
	l1->pushback('c');
	l1->pushback('a');
	l1->pushback('b');
	l1->deletif('a');
	l1->printlist();
	return 0;
}
