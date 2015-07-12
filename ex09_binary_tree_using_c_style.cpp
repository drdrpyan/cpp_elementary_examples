#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct tnode {
	string word;
	int count;
	tnode* left;
	tnode* right;
};

tnode* insert(tnode* ptree,const string& word)
{
	if(ptree==0) {
		ptree=new tnode;
		ptree->word=word;
		ptree->count=1;
		ptree->left=0;
		ptree->right=0;
	}
	else {
		if(ptree->word<word) 
			ptree->left=insert(ptree->left,word);
		else if(ptree->word>word)
			ptree->right=insert(ptree->right,word);
		else
			ptree->count++;
	}
	return ptree;
}

void print(tnode* ptree)
{
	if(ptree==0) return;
	print(ptree->left);
	cout << ptree->word << endl;
	print(ptree->right);
}

void clear(tnode* ptree)
{
	if(ptree==0) return;
	clear(ptree->left);
	clear(ptree->right);
	delete ptree;
}

int main(void)
{
	ifstream ifs;
	string buffer;
	tnode* p_root=0;

	ifs.open("main.cpp");
	if(!ifs.is_open()) {
		cerr << "file open error." << endl;
		return -1;
	}
	while(ifs >> buffer) {
		p_root=insert(p_root,buffer);
	}
	print(p_root);            
	clear(p_root);
	ifs.close();
	ifs.clear();
	return 0;
}
