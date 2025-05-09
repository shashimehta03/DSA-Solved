#include<bits/stdc++.h>
using namespace std;
class MyHashSet {
private:
	vector<int> hashset;

public:

	MyHashSet() {

		hashset.resize(1e6+1,false);

	}

	void add(int key) {
		hashset[key]=true;

	}

	void remove(int key) {
		hashset[key]=false;

	}

	bool contains(int key) {
		return hashset[key];
	}
	void display() {
		for(int i=0; i<hashset.size(); i++) {
			if (hashset[i]) {
				cout << i <<" "<< hashset[i]<<endl;
			}
		}

		cout<<endl;
	}
	
};
class myMap{
    private:
    vector<int>map;
    public:
    myMap(){
        map.resize(1e6+1,-1);
    }
    int get(int key){
        return map[key];
    }
    void put(int key,int value){
        map[key]=value;
    }
    void remove(int key){
        map[key]=-1;
    }
    void display(){
        for( int i=0;i<map.size();i++){
            if(map[i]!=-1){
            cout<<map[i]<<" "<<i<<endl;
            }
            
        }
    }
};
int main()
{
	MyHashSet obj;
	obj.add(1);
	obj.add(0);
	obj.add(6);
	obj.add(9);
	obj.display();
	obj.add(9);
	int n=obj.contains(0);
//	cout<<"n"<<n;
    cout<<"Now Class Map"<<endl;
	myMap mapobj;
	mapobj.put(1,9);
	mapobj.put(2,8);
	mapobj.put(5,0);
    n=mapobj.get(2);
// 	cout<<"n"<<n<<endl;
	 n=mapobj.get(0);
// 	 cout<<"n"<<n<<endl;
	mapobj.display();




	return 0;
}
