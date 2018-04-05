#include <iostream>

using namespace std;

class Node{
	public:
	int value;
	Node* next;
	Node* prev;
	
	Node(int input){
		value = input;
		next = prev = NULL;
	}
};

class List{
	public:
	Node* head;
	Node* tail;
	
	List(){
		head = tail = NULL;
	}
	
	void pushfront(int x){
		Node* novo = new Node(x);
		
		if(!head){
			head = tail = novo;
		}else{
			head->prev = novo;
			novo->next = head;
			head = novo;	
		}
	}
	
	void pushback(int x){
		Node* novo = new Node(x);
		
		if(!head){
			head = tail = novo;
		}else{
			tail->next = novo;
			novo->prev = tail;
			tail = novo;
		}
	}
	
	bool printlist(){
		Node* aux = head;
		
		if(!head){
			return false;
		}else{
			while(aux){
				cout << aux->value << endl;
				aux = aux->next;
			}
		}
	}
	
	bool findMany(int x,int y){ //questão 01
		Node* aux;
		int c1 = 0;
		int c2 = 0;
		if(!head){
			cout << "\nA lista esta vazia." <<endl;
		}else{
			for(aux=head;aux!=NULL;aux=aux->next)
				if(aux->value==x){
					c1++;
					cout << "\nO elemento " << x << " foi encontrado " << c1 << " vezes." << endl;
				}else if(aux->value==y)
					c2++;
					cout << "\nO elemento " << y << " foi encontrado " << c2 << " vezes." << endl;	
					return false;		
			return false;
	}
}

	void pushif(int x){ //questão03
		
		if(x>50){
			pushback(x);
		}else if(x<50){
			pushfront(x);
		}else if( x==50 || x>100){
			cout << "\nO numero nao podera ser inserido." <<endl;
		}
	}	
	
};

int main(){
	List* l1 = new List;
	l1->pushfront(2);
	l1->pushback(3);
	l1->pushback(5);
	l1->pushfront(3);
	l1->printlist();	
	return 0;
}
