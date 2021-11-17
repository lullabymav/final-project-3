#include<iostream>
using namespace std;

string username_login,password_login;
int choose;
char loop;

void title(string a);
void menu();
void login();
void input();
void viewdata();
void queue();
void viewqueue();
void payment();

int main(){
	do{
        login();
    }while (username_login != "daizy" || password_login != "mav1234");
    
    while (loop=='y'||loop=='Y'){
    	if(choose==1){
    		input();
		}
		else if(choose==2){
			viewdata();
		}
		else if(choose==3){
			queue();
		}
		else if(choose==4){
			viewqueue();
		}
		else if(choose==5){
			payment();
		}
		else{
			cout << "\n OPTION NOT FOUND" << endl;
		}
		cout << " "; for(int x=1;x<=62;x++){cout << "_";} cout << endl;	
		cout << "\n Back to Menu (y/n) : "; cin >> loop;
		system("cls");
	}
    return 0;
}

void title(string a){
	int b=a.size();
	int c=(80-b)/2;
	cout << " "; for(int x=1;x<=80;x++){cout << "=";} cout << endl;
	cout << " "; 
	for(int y=1;y<=c;y++){
		cout << " ";
	}
	cout << a << endl;
	cout << " "; for(int x=1;x<=80;x++){cout << "=";} cout << endl;
}

void menu(){
	title("DAIZY DENTAL CLINIC");
	cout << " 1. Input New Data Patient\n";
	cout << " 2. View Data Patient\n";
	cout << " 3. Make a queue\n";
	cout << " 4. View Queue\n";
	cout << " 5. Payment\n";
	cout << " Choose menu = "; cin >> choose; 
}

void login(){
	title("LOGIN");
    cout << " Username        : "; cin  >> username_login;
    cout << " Password        : "; cin  >> password_login;
    if(username_login == "daizy" && password_login == "mav1234"){
        cout << " Login Success!\n";
        cout << "-----------------------------------------------------" << endl;
        system("pause");
        system("cls");
        menu();
    }else{
        cout << "-----------------------------------------------------------------------" << endl;
        cout <<" Login Invalid!\n";
        cout <<" Input the Correct Username & Password\n";
        cout << "-----------------------------------------------------------------------" << endl;
        system("pause");
        system("cls");
    }
}

void input(){	
	title("DAIZY DENTAL CLINIC");
}

void viewdata(){
	title("DAIZY DENTAL CLINIC");
	
}

void queue(){
	title("DAIZY DENTAL CLINIC");
	
}

void viewqueue(){
	title("DAIZY DENTAL CLINIC");
	
}

void payment(){
	title("DAIZY DENTAL CLINIC");
	
}
