#include <iostream>
#include <stdlib.h>

using namespace std;

class Node{
	public:
		int value;
		Node* next;
		
		Node(int input){
			value = input;
			next = NULL;
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
				tail->next = novo;
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
				novo->next = head;
				head = novo;
			}
		}
		
		void printnumberlist(){ //questão2
			Node* aux = head;
			int i=0,p=0;
			
			if(!head){
				cout << "A lista esta vazia" << endl;
			}else{
				cout << "Os numeros pares sao: " << endl;
			while(aux->next!=head){
				if(aux->value % 2 == 0){
					cout << aux->value << endl;
					p++;
				}
				aux = aux->next;	
				}	
							
				if(p<=0){
					cout << "Nao existem numeros pares na lista." << endl;
			}
			
				cout << "\nOs numeros impares sao: " << endl;
				aux = head;
				while(aux->next!=head){
					if(aux->value % 2 != 0){
						cout << aux->value << endl;
						i++;
					}
					aux = aux->next;							
					}
					
					if(i<=0){
						cout << "Nao existem numeros impares na lista." << endl;
				}
			}
		}
};

int main(){
	List* l1 = new List;
	l1->pushfront(1);
	l1->pushfront(2);
	l1->pushfront(3);
	l1->pushfront(4);
	l1->pushfront(5);
	l1->printnumberlist();
	return 0;
}
