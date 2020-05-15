#include<string>
using namespace std;
class Trie {
    struct node{
        bool value=false;
        bool endValue=false;
        node* next=nullptr;
    };
    node* root;
public:
    Trie() {
        root=new node[26];
    }
    void insert(string word) {
        node* curr = root;
        int l=word.length();
		for (int i = 0; i < l; i++) {
			curr[int(word[i]) - int('a')].value = true;
            if(i==l-1){
                curr[int(word[i]) - int('a')].endValue = true;
                break;}
			if(curr[int(word[i]) - int('a')].next==nullptr){
                curr[int(word[i]) - int('a')].next= new node[26];
            }
           curr= curr[int(word[i]) - int('a')].next;
		}
    }
    bool search(string word) {
        node* curr=root;
        int l=word.length();
        for(int i=0;i<l;i++){
            if(curr==nullptr){return false;}
            if (!curr[int(word[i])-int('a')].value){return false;}
            if (i==l-1 && !curr[int(word[i])-int('a')].endValue){return false;}
            curr=curr[int(word[i])-int('a')].next;
        }
        return true;
    }
    bool startsWith(string word) {
        node* curr=root;
        for(int i=0;i<word.length();i++){
            if(curr==nullptr){return false;}
            if (!curr[int(word[i])-int('a')].value){return false;}
            curr=curr[int(word[i])-int('a')].next;
        }
        return true;
    }
};
