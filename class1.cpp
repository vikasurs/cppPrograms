#include<iostream>
#include<string>

using namespace std;

class VIKASCLASS
{
	public:
	    void SetName(string x){	
		name=x;
	}	
	    string getName(){
		return name;
		}	
		
	private:
	    string name;		
};

int main()
{
	VIKASCLASS vo;
	vo.SetName("   VIKAS   URS   M.S    ");
	cout<<vo.getName();
	return 0;
}
