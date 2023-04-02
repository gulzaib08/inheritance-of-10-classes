#include<iostream>
using namespace std;

class A{
	private:
	string name;
		void inName(){
		cout<<"enter your name"<<endl;
		cin>>name;
	}
		void showName(){
		cout<<"your name is: "<<name<<endl;
		
	}
	protected:
	int sap;
	void inSap(){
		cout<<"enter your sap"<<endl;
		cin>>sap;
	}
		void showSap(){
		cout<<"your sap is: "<<sap<<endl;
	}
	
	public:
	string section;
	void inSection(){
		cout<<"enter your class section"<<endl;
		cin>>section;
	}	
	void showSection(){
		cout<<"your class section is: "<<section<<endl;
	}
	
	A():name("/0"),sap(0),section("/0"){
	}
	A(string a,int b,int c ){
		cout<<"parameterized constructor";
	
	}	

	~A(){
	}
		
};

class B:public A{     //B with A its a single inheritance
	private:
		int roll_no;
	protected:
		int fan;	
	public:
		int door;
		void inRoll_no(){
		cout<<"enter your roll no"<<endl;
		cin>>roll_no;
	
	}
	
	void inFan(){
		cout<<"enter your Fan"<<endl;
		cin>>fan;
	inName();
	inSap();
	inSection();
	}
	
	void inDoor(){
		cout<<"enter your class door"<<endl;
		cin>>door;
	}
	
	void showRoll_no(){
		showName();
		showSap();
		showSection();
		cout<<"your roll no is: "<<roll_no<<endl;
		
	}
	
	void showFan(){
		cout<<"your fan is: "<<fan<<endl;
	}
	
	void showdoor(){
		cout<<"your class door is: "<<door<<endl;
	}
	
		
};

class C: public B,public A{   //multiple inheritance
	private:
		int a;
		void inA(){
			cout<<"enter value of a: "<<endl;
			cin>>a;
		}
		void showA(){
			cout<<"value of a is: "<<a<<endl;
		}
	protected:
		int b;
		void inB(){
			cout<<"enter value of b"<<endl;
			cin>>b;
		}
		void showB(){
			cout<<"value of b is: "<<b<<endl;
		}
	public:
		int c;
		void inC(){
			cout<<"enter value of c"<<endl;
			cin>>c;
		}	
		void showC(){
			
			cout<<"value of c is: "<<endl;
		}
};

class D:public C{   // mulilevel inheritance + hybride
	
		
	
};


int main(){
	B obj;
	obj.inName();
	obj.inSap();
	obj.inSection();
	obj.inDoor();
	obj.inFan();
	obj.inRoll_no();
	obj.showdoor();
	obj.showFan();
	obj.showName();
	obj.showRoll_no();
	obj.showSap();
	obj.showSection();
}
 
