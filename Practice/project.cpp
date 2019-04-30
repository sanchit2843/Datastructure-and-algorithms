#include <bits/stdc++.h>
using namespace std;

struct Trie
{
	struct Trie *children[26];
	bool eow;
};

struct Trie *getNode(void)
{
	struct Trie *pNode = new Trie;

	pNode->eow = false;

	for (int i = 0; i < 26; i++)
		pNode->children[i] = NULL;

	return pNode;
}

void insert(struct Trie *root, string key)
{
	struct Trie *p = root;

	for (int i = 0; i < key.length(); i++)
	{
		int index = key[i] - 'a';
		if (!p->children[index])
			p->children[index] = getNode();

		p = p->children[index];
	}
	p->eow = true;
}

bool search(struct Trie *root, string key)
{
	struct Trie *q = root;

	for (int i = 0; i < key.length(); i++)
	{
		int index = key[i] - 'a';
		if (!q->children[index])
			return false;

		q = q->children[index];
	}

	return (q != NULL && q->eow);
}

bool iseow(struct Trie* root)
{	if(root->eow!=false)
	return true;
	else
    	false;
}


void showContent(struct Trie* root, char str[], int level)
{   if(iseow(root))
	{
    	str[level] = '\0';
    	cout << str << endl;
	}

	int i;
	for (i = 0; i < 26; i++)
	{
    	if (root->children[i])
    	{
        	str[level] = i + 'a';
        	showContent(root->children[i], str, level + 1);
    	}
	}
}
int main()
{
	string keys[] = {"samarth", "koul", "sanchit",
					"tanwar", "ms", "dhoni"
                	};
	/*cout<<sizeof(keys[0])<<" ";
	cout<<sizeof(keys)<<endl;*/
	int n = sizeof(keys)/sizeof(keys[0]);
	struct Trie *root = getNode();
	for (int i = 0; i < n; i++)
		insert(root, keys[i]);
string s;
	char c;
	do{cout<<"Enter word you want to search"<<endl;
	cin>>s;
	if(search(root,s))
	cout<<"Present"<<endl;
	else
    	cout<<"not present"<<endl;
	cout<<"do you want to search another word(y/n)";
	cin>>c;}while(c=='y' || c=='Y');

int level = 0;
	char str[50];

	cout << "Content of Trie: " << endl;
	showContent(root, str, level);
	return 0;
}
