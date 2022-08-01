#include <iostream>
#include <string>
using namespace std;
struct Node{
public:
    int data;
    int pos;//Position of the item
    Node* next;
};
struct Truck{
public:
    int data;
    Node* itemh;//Address of the head item
    Node* itemt;//Address of the tail item
    Truck* next;
    Truck* prev;
};
void value(Truck*truck){
    int value=0;
    Node*list=truck->itemh;
    while(list!= nullptr){value=value+list->data;list=list->next;}
    truck->data=value;
}
void append(Node**node,Node**tail,int data){
    Node* newnode=new Node();
    Node* last=*node;
    newnode->data=data;
    newnode->next=nullptr;
    if(*node==nullptr){*node=newnode;*tail=newnode;newnode->pos=1;return;}
    int pos=2;
    while (last->next!=nullptr){
        last=last->next;
        pos++;
    }
    newnode->pos=pos;
    last->next=newnode;
    *tail=newnode;


}
void push(Truck**head,Truck**tail,int data) {
    Truck* new_truck = new Truck();
    Node*nhead = nullptr;
    Node*ntail = nullptr;
    append(&nhead,&ntail,data);
    new_truck->next = nullptr;
    new_truck->itemh = nhead;
    new_truck->itemt = ntail;
    new_truck->data = data;
    if (*head == nullptr)
    {
        *head= new_truck;
        *tail = new_truck;
        new_truck->prev = nullptr;
    }else{
        new_truck->prev = *tail;
        (*tail)->next = new_truck;
        *tail = new_truck;
        return;}
}

int tsize(Truck*head){
    int tsize=0;
    while(head!=nullptr){tsize++;head=head->next;}
    return tsize;

}
int size(Node*node){
    int size=0;
    while(node!=nullptr){size++;node=node->next;}
    return size;

}
void print1(Node*node){
    if (node == nullptr) {
        cout << "List is empty!" << endl;
    }
    else {
        Node* temp = node;
        while (temp != nullptr) {
            if(temp->next==NULL){
                cout<<temp->data<<"("<<temp->pos<<")";
            }
            else{
                cout << temp->data <<"("<<temp->pos<<")"<<" + ";}
            temp = temp->next; }
    }
}
void summary(Truck*head){
    int count=0;
    int total=0;
    if(head==nullptr){
        cout<<"No Truck "<<endl;
    }
    else{
        Truck*temp=head;
        cout<<"Summary:"<<" ";
        while (temp!=nullptr){
            count++;
            total=temp->data+total;
            if(temp->next==NULL){
                cout<<"Truck"<<count<<"("<<temp->data<<")"<<" "<<"="<<" "<<total<<endl;;
            }
            else{
                cout<<"Truck"<<count<<"("<<temp->data<<")"<<"+";}
            temp=temp->next;

        }

    }
}
void printtruck(Truck* truck)
{
    int count=0;
    if(truck==nullptr){cout<<"empty";}
    while (truck != nullptr)
    {   count++;
        cout<<"Cargo"<<" truck"<<" "<<count<<" "<<"with"<<" "<<size(truck->itemh)<<" "<<"item"<<" ->"<<" ";print1(truck->itemh);cout<<" "<<"="<<" " <<truck->data<<endl;
        truck = truck->next;
    }
}

void deletetruck(Truck** head, Truck* del)
{
    if (*head== nullptr || del == nullptr)
        return;
    if (*head == del)
        *head= del->next;
    if (del->next != nullptr)
        del->next->prev = del->prev;
    if (del->prev != nullptr)
        del->prev->next = del->next;
    free (del);
    return;
}
void deleteNode(Node**node,int key){
    Node* current=*node;
    Node*prev= nullptr;
    if(current!= nullptr && key==1){*node=current->next;delete current;}
    int count=0;
    while(current!= nullptr){
        count++;
        if(count==key&&key!=1){prev->next=current->next;delete current;}
        prev=current;
        current=current->next;
    }int pos=1;
    Node*node1=*node;
    while (node1!=nullptr){
        node1->pos=pos;
        pos++;
        node1=node1->next;}}
void remove(int data,int key,Truck*head,Truck*tail){
    int a= tsize(head);
    if((a-data)<(a/2)){
        int pos=0;
        data=data-1;
        while(pos<a/2){
            pos++;
            if(pos==(a-data)){deleteNode(&tail->itemh,key);value(tail);}
            tail=tail->prev;
        }

    }
    else{
        int pos=0;
        while(pos<=a/2){
            pos++;
            if(pos==data){deleteNode(&head->itemh,key);
                value(head);}
            head=head->next;}
    }}


bool find(Truck*head,Truck*tail){
    int a= tsize(head);
    int pos=0;
    if(a==0){return false;}
    while(pos<((a-1)/2+1)) {
        if (size(head->itemh) <8) { return true;}
        if(size(tail->itemh)<8){return true;}
        head=head->next;
        tail=tail->prev;
        pos++;
    }
    return false;
}

void departed(Truck**head,Truck**tail){
    Truck*del=*head;
    Truck*del2=*tail;
    int a= tsize(*head);
    int count=0;
    int pos=0;
    while (pos<((a-1)/2+1)){
        if(del!=del2){
            if(size(del->itemh)==8){count++;deletetruck(head,del);}
            if(size(del2->itemh)==8){count++;deletetruck(head,del2);}}
        else{if(size(del->itemh)==8){count++;deletetruck(head,del);}}
        del2=del2->prev;
        del=del->next;
        pos++;
    }
    cout<<count<<" "<<"cargo truck departed."<<endl;
}









int main() {
    string comm;
    Truck*truck=nullptr;
    Truck*tail= nullptr;

    while (comm!="q"){
        int data;
        int key;
        cin>>comm;
        if(comm=="rd"){ printtruck(truck);}
        else if(comm=="rs"){ summary(truck);}
        else if(comm=="ri"){
            cin>>data;
            cin>>key;
            remove(data,key,truck,tail);
            Truck*truck1=truck;
            int i=1;
            while (i< tsize(truck)+1){
                if(i==data &&size(truck1->itemh)==0){ deletetruck(&truck,truck1);}
                ++i;
                truck1=truck1->next;

            }
        }
        else if(comm=="depart"){ departed(&truck,&tail);}
        else if (comm=="ai") {{
                cin >> data;
                Truck *truck1 = truck;
                if(find(truck,tail)){
                    while(truck1!=nullptr) {
                        if (size(truck1->itemh) <8) { append(&truck1->itemh,&truck1->itemt,data);
                            value(truck1);break;}
                        truck1=truck1->next;
                    }

                }
                else{
                        push(&truck,&tail,data);

                    }
                }

            }
    }

    cout<<"Quited";
    return 0;
}
