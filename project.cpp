#include<time.h>
#include<conio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#include <windows.h>

#pragma comment(lib, "user32")

using namespace std;

#define DTTMFMT "%Y-%m-%d %H:%M:%S "
#define DTTMSZ 21
static char *getDtTm (char *buff) {
    time_t t = time (0);
    strftime (buff, DTTMSZ, DTTMFMT, localtime (&t));
    return buff;
}
void timing(string ss, string path, string tp, string user) {
    char buff[DTTMSZ];
    string line;
    fstream filestr;
    ifstream read(path);
    filestr.open ("replace.tmp", fstream::out|fstream::app);
    filestr <<"Time: "<<getDtTm (buff)<<"\t"<<tp<<" : "<<user<<"\t";
    filestr << ss;
    if(read.is_open()){
        while(! read.eof()){
            filestr<<endl;
            getline(read, line);
            filestr<<line;
        }
    }
    read.close();
    filestr.close();
    remove(path.c_str());
    rename("replace.tmp", path.c_str());
}
void fullscreen(){
    ::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
}
void greatings(){
    for(int i=0; i<79; i++)cout<<" ";
    cout<<"Welcome To"<<endl;
    for(int i=0; i<75; i++)cout<<" ";
    cout<<"Library Management"<<endl<<endl;
    for(int i=0; i<61; i++)cout<<" ";
    cout<<"Department of Computer Science and Engineering"<<endl<<endl;
    for(int i=0; i<68; i++)cout<<" ";
    cout<<"Bangabandhu Sheikh Mujibur Rahman"<<endl;
    for(int i=0; i<68; i++)cout<<" ";
    cout<<"Science and Technology University"<<endl<<endl<<endl<<endl<<endl<<endl;
}
void banner(){
    for(int i=0; i<75; i++)cout<<" ";
    cout<<"Library Management"<<endl<<endl;
    for(int i=0; i<61; i++)cout<<" ";
    cout<<"Department of Computer Science and Engineering"<<endl<<endl;
    for(int i=0; i<68; i++)cout<<" ";
    cout<<"Bangabandhu Sheikh Mujibur Rahman"<<endl;
    for(int i=0; i<68; i++)cout<<" ";
    cout<<"Science and Technology University"<<endl<<endl<<endl<<endl<<endl<<endl;
}
void Menu(){
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"=============MENU==============="<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"===Please Choose Your Option===="<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--ADMIN Panel----------------[1]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Student--------------------[2]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--EXIT---------------------[Esc]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
}
void adminMenu(){
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"==========ADMIN MENU============"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"===Please Choose Your Option===="<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--LOG IN---------------------[1]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--List of ADMIN--------------[2]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Back-----------------------[3]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--EXIT---------------------[Esc]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
}
void studentMenu(){
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"=========STUDENT MENU==========="<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"===Please Choose Your Option===="<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--LOG IN---------------------[1]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Registration---------------[2]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Back-----------------------[3]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--EXIT---------------------[Esc]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
}
void bookSearch(){
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"==========BOOK SEARCH==========="<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"===Please Choose Your Option===="<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--SEARCH with BOOK ID--------[1]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--SEARCH with BOOK NAME------[2]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Back-----------------------[3]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--EXIT---------------------[Esc]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
}
void adminLogInMenu(){
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"=======ADMIN ACCESS MENU========"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"===Please Choose Your Option===="<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Add ADMIN------------------[1]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Remove ADMIN---------------[2]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--View Message From Student--[3]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Library--------------------[4]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Back-----------------------[5]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--EXIT---------------------[Esc]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
}
void booksMenuAdmin(){
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"===========Books MENU=========="<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"===Please Choose Your Option==="<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Add Books-----------------[1]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Books Search--------------[2]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--View Order----------------[3]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Book Assigning------------[4]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Assigned Book History-----[5]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Book Submission-----------[6]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Returned Book History-----[7]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Back----------------------[8]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Exit------------------- [Esc]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
}
void studentLogInMenu(){
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"======STUDENT ACCESS MENU======="<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"===Please Choose Your Option==="<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Profile View--------------[1]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Edit----------------------[2]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Message For Admin---------[3]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Library-------------------[4]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Back----------------------[5]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--EXIT--------------------[Esc]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
}
void booksMenuStudent(){
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"===========Books MENU=========="<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"===Please Choose Your Option==="<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Book Search---------------[1]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Book Request--------------[2]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Notifications-------------[3]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--View Date INFO------------[4]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Returned Book-------------[5]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Back----------------------[6]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Exit--------------------[Esc]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
}
void studentEditMenu(){
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"===========Edit MENU==========="<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"===Please Choose Your Option==="<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Name----------------------[1]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Password------------------[2]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Session-------------------[3]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Blood Group---------------[4]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Current Address-----------[5]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Permanent Address---------[6]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Current Organization------[7]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
    cout<<"--Back----------------------[8]"<<endl;
    for(int i=0; i<69; i++)cout<<" ";
}

void edit(char path[], string old, string latest){
    ofstream write("replace.tmp");
    ifstream read(path);
    string line;
    int cnt=0;
    if(read.is_open()){
        while(! read.eof()){
            if(cnt)write<<endl;
            getline(read, line);
            std::size_t found = line.find(old);
            if (found!=std::string::npos){
                write<<latest;
            }
            else{
                write<<line;
            }
            cnt++;
        }
    }
    write.close();
    read.close();
    remove(path);
    rename("replace.tmp", path);
}
void Remove(string remv, char path[]){
    ofstream write("replace.tmp");
    ifstream read(path);
    string line;
    if(read.is_open()){
        while(! read.eof()){
            getline(read, line);
            std::size_t found = line.find(remv);
            if (found==std::string::npos){
                write<<line<<endl;
            }
        }
    }
    write.close();
    read.close();
    remove(path);
    rename("replace.tmp", path);
}
void removeFromAdminFile(char remv[], char path[]){
    ofstream write("replace.tmp");
    ifstream read(path);
    ifstream chk(remv);
    string line, ln;
    int fg=0;
    if(chk.is_open()){
        getline(chk, line);
        chk.close();
        int flag=0;
        if(read.is_open()){
            while(!read.eof()){
                getline(read, ln);
                if(ln==line && flag==0){
                    flag++;
                }
                else if(flag==1){
                    flag++;
                    continue;
                }
                else if (ln!=line){
                    write<<ln<<endl;
                }
            }
        }
        read.close();
    }
    write.close();
    remove(path);
    rename("replace.tmp", path);
}
void color(int ClR){
    string arr[]={"F1", "1E", "E0", "20", "F0", "B0", "E1", "30","A0","70","5E","60","74"};
    string omg="color ";
    ClR=ClR%13;
    omg+=arr[ClR];
    system(omg.c_str());
}
void searchBook(string sentence){
    ifstream read("books\\bookList.txt");
    string line;
    int cnt=0, ln=0;
    if(read.is_open()){
        while(! read.eof()){
            getline(read, line);
            std::size_t found = line.find(sentence);
            if ((found!=std::string::npos || (cnt%3))&& (ln%3==0 || (cnt%3))){
                cout<<line<<endl;
                cnt++;
            }
            ln++;
        }
    }
    read.close();
    if(cnt==0){
        cout<<"Sorry, No Book Found."<<endl;
    }
}
void view(string path){
    char ch;
    FILE *fp;
    fp = fopen(path.c_str(), "r");
    if (fp == NULL){
        cout<<"No record Found"<<endl;
        //exit(EXIT_FAILURE);
    }
    while((ch = fgetc(fp)) != EOF)printf("%c", ch);
    fclose(fp);
    printf("\n");
}
int main(){
    fullscreen();
    int clr=0;
    color(clr);
    clr++;
    greatings();
    system("pause");
    system("CLS");
    while(true){
        banner();
        Menu();
        char option[50];
        int k=0;
        char ch;
        while(true){
            ch = getch();
            if(ch == 13){
                option[k] = '\0';
                break;
            }
            else if(ch == 8 && k > 0){
                k--;
                cout << "\b \b";
            }
            else if((ch>48 && ch<51) || ch==27){
                cout << ch;
                option[k]=ch;
                k++;
                option[k] = '\0';
                break;
            }
        }
        if(strcmp(option,"1")==0){
            color(clr);
            clr++;
            while(true){
                system("CLS");
                banner();
                adminMenu();
                char adminOption[50];
                int k=0;
                char ch;
                while(true){
                    ch = getch();
                    if(ch == 13){
                        adminOption[k] = '\0';
                        break;
                    }
                    else if(ch == 8 && k > 0){
                        k--;
                        cout << "\b \b";
                    }
                    else if((ch>48 && ch<52) || ch==27){
                        cout << ch;
                        adminOption[k]=ch;
                        k++;
                        adminOption[k]='\0';
                        break;
                    }
                }
                if(strcmp(adminOption,"1")==0){
                    color(clr);
                    clr++;
                    while(true){
                        system("CLS");
                        banner();
                        FILE *dg;
                        char No1[50],No2[50], Username[50],password[50];
                        if((dg=fopen("admin\\LogIn.txt","r"))==NULL)puts("File can not open !\n"), exit(1);
                        for(int i=0; i<69; i++)cout<<" ";
                        printf("USERNAME :"); scanf("%s",&Username); printf("\n");
                        for(int i=0; i<69; i++)cout<<" ";
                        printf("PASSWORD :");
                        int k=0;
                        char ch;
                        while(true){
                            ch = getch();
                            if(ch == 13){
                                password[k] = '\0';
                                break;
                            }
                            else if(ch == 8 && k > 0){
                                k--;
                                cout << "\b \b";
                            }
                            else{
                                cout << "*";
                                password[k] = ch;
                                k++;
                            }
                        }
                        bool flag=false;
                        while(!feof(dg)){
                            fscanf(dg,"%s %s",&No1,&No2);
                            if(!(strcmp(No1, Username)) && !(strcmp(No2, password))){
                                flag=true;break;
                            }
                        }
                        fclose(dg);
                        if(flag){
                            color(clr++);
                            printf("\nACCESS GRANTED\n");
                            system("pause");
                            system("CLS");
                            string dummy;
                            getline(cin, dummy);
                            int cn=0;
                            while(true){
                                banner();
                                adminLogInMenu();
                                char adminLogInOption[50];
                                int k=0;
                                char ch;
                                while(true){
                                    ch = getch();
                                    if(ch == 13){
                                        adminLogInOption[k] = '\0';
                                        break;
                                    }
                                    else if(ch == 8 && k > 0){
                                        k--;
                                        cout << "\b \b";
                                    }
                                    else if((ch>48 && ch<54)|| ch==27){
                                        cout << ch;
                                        adminLogInOption[k]=ch;
                                        k++;
                                        adminLogInOption[k]='\0';
                                        break;
                                    }
                                }
                                if(strcmp(adminLogInOption,"1")==0){
                                    color(clr);
                                    clr++;
                                    system("CLS");
                                    string ss;
                                    char admin[100], username[100], password[100], confirmPassword[100], name[100], session[100];
                                    for(int i=0; i<60; i++)cout<<" ";
                                    printf("NAME : ");
                                    if(cn)getline(cin, ss);
                                    getline(cin, ss);
                                    strcpy(name, ss.c_str());
                                    while(true){
                                        for(int i=0; i<60; i++)cout<<" ";
                                        printf("USERNAME : ");
                                        scanf("%s", username);
                                        cn=0;
                                        FILE *dg;
                                        char No1[100];
                                        if((dg=fopen("admin\\username.txt","r"))==NULL)puts("File can not open !\n"), exit(1);
                                        bool flag=false;
                                        while(!feof(dg)){
                                            fscanf(dg,"%s",&No1);
                                            if(!(strcmp(No1, username))){
                                                flag=true;break;
                                            }
                                        }
                                        fclose(dg);
                                        if(flag){
                                            for(int i=0; i<60; i++)cout<<" ";
                                            printf("USERNAME isn't available.\n");
                                            for(int i=0; i<60; i++)cout<<" ";
                                            printf("PLEASE try another USERNAME.\n");
                                        }
                                        else break;
                                    }
                                    while(true){
                                        for(int i=0; i<60; i++)cout<<" ";
                                        printf("PASSWORD : ");
                                        scanf("%s", password);
                                        for(int i=0; i<60; i++)cout<<" ";
                                        printf("CONFIRM PASSWORD : ");
                                        scanf("%s", confirmPassword);
                                        if(!strcmp(password, confirmPassword))break;
                                        else{
                                            for(int i=0; i<60; i++)cout<<" ";
                                            printf("Password is not matched.\n");
                                        }
                                    }
                                    for(int i=0; i<60; i++)cout<<" ";
                                    printf("SESSION : ");
                                    scanf("%s", session);
                                    printf("NAME : %s\n", name);
                                    printf("USERNAME : %s\n", username);
                                    printf("PASSWORD : %s\n", password);
                                    printf("SESSION : %s\n", session);
                                    int m=strlen(username);
                                    string aa="admin\\Details\\";
                                    aa+=username;
                                    aa+=".txt";
                                    char file_name_x[aa.length()+1];
                                    strcpy(file_name_x, aa.c_str());
                                    FILE *filePointer ;
                                    filePointer = fopen(file_name_x, "w") ;
                                    fprintf(filePointer, "%s %s\n%s %s\n%s %s", "NAME :", name, "USERNAME :", username, "SESSION :", session);
                                    fclose(filePointer) ;
                                    filePointer = fopen("admin\\listOfAdmin.txt", "a+") ;
                                    fprintf(filePointer, "\n%s %s\n%s %s", "NAME :", name,"SESSION :", session);
                                    fclose(filePointer) ;
                                    filePointer = fopen("admin\\LogIn.txt", "a+") ;
                                    fprintf(filePointer, "\n%s %s", username, password);
                                    fclose(filePointer);
                                    filePointer = fopen("admin\\username.txt", "a+") ;
                                    fprintf(filePointer, "\n%s", username);
                                    fclose(filePointer);
                                    for(int i=0; i<60; i++)cout<<" ";
                                    cout<<"ADMIN added SUCCESSFULLY"<<endl;
                                    system("pause");
                                    system("cls");
                                }
                                else if(strcmp(adminLogInOption,"2")==0){
                                    cout<<endl;
                                    color(clr);
                                    clr++;
                                    for(int i=0; i<60; i++)cout<<" ";
                                    cout<<"USERNAME : ";
                                    string username, adrs, lsa;
                                    cin >> username;
                                    adrs="admin\\username.txt";
                                    char us[adrs.length()+1];
                                    strcpy(us, adrs.c_str());
                                    Remove( username, us);
                                    adrs.clear();
                                    adrs="admin\\LogIn.txt";
                                    char logIn[adrs.length()+1];
                                    strcpy(logIn, adrs.c_str());
                                    Remove(username,logIn);
                                    adrs.clear();
                                    adrs="admin\\Details\\";
                                    adrs+=username;
                                    adrs+=".txt";
                                    lsa="admin\\listOfAdmin.txt";
                                    char sd[adrs.length()+1];
                                    strcpy(sd, adrs.c_str());
                                    char pp[lsa.length()+1];
                                    strcpy(pp, lsa.c_str());
                                    removeFromAdminFile(sd, pp);
                                    remove(sd);
                                    for(int i=0; i<60; i++)cout<<" ";
                                    cout<<"ADMIN removed SUCCESSFULLY"<<endl;
                                    system("cls");
                                }
                                else if(strcmp(adminLogInOption,"3")==0){
                                    color(clr);
                                    clr++;
                                    system("cls");
                                    banner();
                                    for(int i=0; i<60; i++)cout<<" ";
                                    cout<<endl<<endl<<"Message for ADMIN"<<endl;
                                    view("msgForAdmin.txt");
                                    system("pause");
                                    system("cls");
                                }
                                else if(strcmp(adminLogInOption,"4")==0){
                                    while(true){
                                        system("cls");
                                        color(clr++);
                                        banner();
                                        booksMenuAdmin();
                                        char bkMnAd[50];
                                        int k=0;
                                        char ch;
                                        while(true){
                                            ch = getch();
                                            if(ch == 13){
                                                bkMnAd[k] = '\0';
                                                break;
                                            }
                                            else if(ch == 8 && k > 0){
                                                k--;
                                                cout << "\b \b";
                                            }
                                            else if((ch>48 && ch<57) || ch==27){
                                                cout << ch;
                                                bkMnAd[k]=ch;
                                                k++;
                                                bkMnAd[k]='\0';
                                                break;
                                            }
                                        }
                                        if(strcmp(bkMnAd,"1")==0){
                                            cout<<endl;
                                            string bookId,title,authorName,description,catagory,cost,quantity;
                                            for(int i=0; i<69; i++)cout<<" ";
                                            cout<<"Book ID : ";
                                            getline(cin, bookId);
                                            for(int i=0; i<69; i++)cout<<" ";
                                            cout<<"Title : ";
                                            getline(cin, title);
                                            transform(title.begin(), title.end(), title.begin(), ::toupper);
                                            for(int i=0; i<69; i++)cout<<" ";
                                            cout<<"Author Name : ";
                                            getline(cin, authorName);
                                            for(int i=0; i<69; i++)cout<<" ";
                                            cout<<"Description : ";
                                            getline(cin, description);
                                            for(int i=0; i<69; i++)cout<<" ";
                                            cout<<"Catagory : ";
                                            getline(cin, catagory);
                                            for(int i=0; i<69; i++)cout<<" ";
                                            cout<<"Cost : ";
                                            getline(cin, cost);
                                            for(int i=0; i<69; i++)cout<<" ";
                                            cout<<"Quantity : ";
                                            getline(cin, quantity);
                                            string aa="books\\bookID\\";
                                            aa+=bookId;
                                            aa+=".txt";
                                            char file_name_x[aa.length()+1];
                                            strcpy(file_name_x, aa.c_str());
                                            int m=bookId.size();
                                            FILE *filePointer ;
                                            filePointer = fopen(file_name_x, "w") ;
                                            fprintf(filePointer, "%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s", "BOOK ID :", bookId.c_str(), "TITLE :", title.c_str(), "AUTHOR NAME :", authorName.c_str(), "DESCRIPTION :", description.c_str(),"CATAGORY :", catagory.c_str(),"COST :", cost.c_str(), "QUANTITY :", quantity.c_str());
                                            fclose(filePointer);
                                            filePointer = fopen("books\\bookList.txt", "a+") ;
                                            fprintf(filePointer, "%s %s\n%s %s\n%s %s\n", "TITLE :", title.c_str(),"AUTHOR NAME :", authorName.c_str(), "BOOK ID :", bookId.c_str());
                                            fclose(filePointer);
                                            for(int i=0; i<60; i++)cout<<" ";
                                            cout<<"BOOK added SUCCESSFUL"<<endl;
                                            system("pause");
                                        }
                                        else if(strcmp(bkMnAd,"2")==0){
                                            while(true){
                                                system("cls");
                                                color(clr++);
                                                banner();
                                                bookSearch();
                                                char bkShAd[50];
                                                int k=0;
                                                char ch;
                                                string title;
                                                int p=0;
                                                while(true){
                                                    ch = getch();
                                                    if(ch == 13){
                                                        bkShAd[k] = '\0';
                                                        break;
                                                    }
                                                    else if(ch == 8 && k > 0){
                                                        k--;
                                                        cout << "\b \b";
                                                    }
                                                    else if((ch>48 && ch<52) || ch==27){
                                                        cout << ch;
                                                        bkShAd[k]=ch;
                                                        k++;
                                                        bkShAd[k]='\0';
                                                        break;
                                                    }
                                                }
                                                if(strcmp(bkShAd,"1")==0){
                                                    cout<<endl;
                                                    for(int i=0; i<60; i++)cout<<" ";
                                                    cout<<"Book ID : ";
                                                    string bookId;
                                                    cin >> bookId;
                                                    char ch;
                                                    string aa="books\\bookID\\";
                                                    aa+=bookId;
                                                    aa+=".txt";
                                                    view(aa);
                                                    cn++;
                                                    system("pause");
                                                }
                                                else if(strcmp(bkShAd,"2")==0){
                                                    cout<<endl;
                                                    for(int i=0; i<60; i++)cout<<" ";
                                                    cout<<"Note: Careful About space and words."<<endl;
                                                    for(int i=0; i<60; i++)cout<<" ";
                                                    cout<<"Books Title or Keyword : ";
                                                    if(cn)getline(cin, title);
                                                    getline(cin, title);
                                                    transform(title.begin(), title.end(), title.begin(), ::toupper);
                                                    searchBook(title);
                                                    cn=0;
                                                    system("pause");
                                                }
                                                else if(strcmp(bkShAd,"3")==0){
                                                    system("cls");
                                                    color(clr++);
                                                    break;
                                                }
                                                else if(bkShAd[0]==27)return 0;
                                                else{
                                                    system("cls");
                                                    color(clr++);
                                                }
                                            }
                                        }
                                        else if(strcmp(bkMnAd,"3")==0){
                                            cout<<endl;
                                            view("books\\bookRequest.txt");
                                            system("pause");
                                            system("cls");
                                        }
                                        else if(strcmp(bkMnAd,"4")==0){
                                            string studentId, bookId, quantity, day, ss, bookleft;
                                            cout<<endl;
                                            cn++;
                                            for(int i=0; i<60; i++)cout<<" ";
                                            cout<<"STUDENT ID : ";
                                            cin>>studentId;
                                            ss="STUDENT ID : ";
                                            ss+=studentId;
                                            for(int i=0; i<60; i++)cout<<" ";
                                            cout<<"BOOK ID : ";
                                            cin>>bookId;
                                            ss+="\t";
                                            ss+="BOOK ID : ";
                                            ss+=bookId;
                                            for(int i=0; i<60; i++)cout<<" ";
                                            cout<<"QUANTITY : ";
                                            cin>>quantity;
                                            ss+="\t";
                                            ss+="QUANTITY : ";
                                            ss+=quantity;
                                            for(int i=0; i<60; i++)cout<<" ";
                                            cout<<"Book Left : ";
                                            cin>>bookleft;
                                            for(int i=0; i<60; i++)cout<<" ";
                                            cout<<"DAY(s) : ";
                                            cin>>day;
                                            ss+="\t";
                                            ss+="DAY(s) : ";
                                            ss+=day;
                                            if(strcmp(quantity.c_str(),"0"))timing(ss,"books\\assignedBookHistory.txt","","");
                                            ss="BOOK ID : ";
                                            ss+=bookId;
                                            ss+="\t";
                                            ss+="QUANTITY : ";
                                            ss+=quantity;
                                            ss+="\t";
                                            ss+="DAY(s) : ";
                                            ss+=day;
                                            string pat;
                                            pat="books\\studentID\\";
                                            pat+=studentId;
                                            pat+=".txt";
                                            if(strcmp(quantity.c_str(),"0"))timing(ss,pat,"","");
                                            if(strcmp(quantity.c_str(),"0")==0){
                                                ss="Sorry, ";
                                                ss+="Book ID : ";
                                                ss+=bookId;
                                                ss+=" is not available now...";
                                            }
                                            else{
                                                ss="Congratulations, ";
                                                ss+="Book ID : ";
                                                ss+=bookId;
                                                ss+=" is availabe now...";
                                                ss+="Please, return this book with in ";
                                                ss+=day;
                                                ss+=" day(s).";
                                            }
                                            pat="books\\notifications\\";
                                            pat+=studentId;
                                            pat+=".txt";
                                            timing(ss,pat,"","");
                                            if(strcmp(quantity.c_str(),"0")){
                                                pat="books\\bookID\\";
                                                pat+=bookId;
                                                pat+=".txt";
                                                ss="QUANTITY : ";
                                                ss+=bookleft;
                                                char sp[pat.size()+1];
                                                strcpy(sp, pat.c_str());
                                                edit(sp,"QUANTITY",ss);
                                            }
                                            pat="books\\bookRequest.txt";
                                            ss="STUDENT ID : ";
                                            ss+=studentId;
                                            ss+="\t";
                                            ss+="Book ID : ";
                                            ss+=bookId;
                                            char zp[pat.size()+1];
                                            strcpy(zp, pat.c_str());
                                            Remove(ss, zp);
                                            system("pause");
                                        }
                                        else if(strcmp(bkMnAd,"5")==0){
                                            cout<<endl;
                                            view("books\\assignedBookHistory.txt");
                                            system("pause");
                                        }
                                        else if(strcmp(bkMnAd,"6")==0){
                                            cn++;
                                            cout<<endl;
                                            string studentId, bookId, quantity, totQuantity, ss, sz;
                                            for(int i=0; i<60; i++)cout<<" ";
                                            cout<<"STUDENT ID : ";
                                            cin>>studentId;
                                            for(int i=0; i<60; i++)cout<<" ";
                                            cout<<"BOOK ID : ";
                                            cin>>bookId;
                                            for(int i=0; i<60; i++)cout<<" ";
                                            cout<<"QUANTITY : ";
                                            cin>>quantity;
                                            for(int i=0; i<60; i++)cout<<" ";
                                            cout<<"Total Books : ";
                                            cin>>totQuantity;
                                            ss="books\\bookID\\";
                                            ss+=bookId;
                                            ss+=".txt";
                                            sz="QUANTITY : ";
                                            sz+=totQuantity;
                                            char ps[ss.size()+1];
                                            strcpy(ps, ss.c_str());
                                            edit(ps, "QUANTITY", sz);
                                            ss="STUDENT ID : ";
                                            ss+=studentId;
                                            ss+="\t";
                                            ss+="BOOK ID : ";
                                            ss+=bookId;
                                            string pat;
                                            pat="books\\assignedBookHistory.txt";
                                            char sw[pat.size()+1];
                                            strcpy(sw, pat.c_str());
                                            Remove(ss, sw);
                                            ss="STUDENT ID : ";
                                            ss+=studentId;
                                            ss+="\t";
                                            ss+="BOOK ID : ";
                                            ss+=bookId;
                                            ss+="\t";
                                            ss+="QUANTITY : ";
                                            ss+=quantity;
                                            timing(ss,"books\\returnedBookHistory.txt","","");
                                            ss="BOOK ID : ";
                                            ss+=bookId;
                                            ss+="\t";
                                            ss+="QUANTITY : ";
                                            ss+=quantity;
                                            pat="books\\return\\";
                                            pat+=studentId;
                                            pat+=".txt";
                                            char pq[pat.size()+1];
                                            strcpy(pq, pat.c_str());
                                            timing(ss, pq, "", "");
                                            ss="BOOK ID : ";
                                            ss+=bookId;
                                            pat="books\\studentID\\";
                                            pat+=studentId;
                                            pat+=".txt";
                                            char qw[pat.size()+1];
                                            strcpy(qw, pat.c_str());
                                            Remove(ss, qw);
                                            cout<<"Book submited SUCCESSFULLY"<<endl;
                                            system("pause");
                                            system("cls");
                                        }
                                        else if(strcmp(bkMnAd,"7")==0){
                                            cout<<endl;
                                            view("books\\returnedBookHistory.txt");
                                            system("pause");
                                            system("cls");
                                        }
                                        else if(strcmp(bkMnAd,"8")==0){
                                            color(clr++);
                                            system("cls");
                                            break;
                                        }
                                        else if(bkMnAd[0]==27)return 0;
                                        else{
                                            color(clr++);
                                            system("cls");
                                        }
                                    }
                                }
                                else if(strcmp(adminLogInOption,"5")==0){
                                    color(clr++);
                                    system("CLS");
                                    break;
                                }
                                else if(adminLogInOption[0]==27)return 0;
                                else{
                                    system("cls");
                                    color(clr++);
                                }
                            }
                        }
                        else{
                            color(clr++);
                            printf("\nWrong USERNAME or PASSWORD\n");
                            system("pause");
                        }
                        break;
                    }
                }
                else if(strcmp(adminOption,"2")==0){
                    color(clr);
                    clr++;
                    system("CLS");
                    banner();
                    view("admin\\listOfAdmin.txt");
                    system("pause");
                }
                else if(strcmp(adminOption,"3")==0){
                    color(clr++);
                    system("CLS");
                    break;
                }
                else if(adminOption[0]==27)return 0;
            }
        }
        else if(strcmp(option, "2")==0){
            color(clr);
            clr++;
            while(true){
                system("CLS");
                banner();
                studentMenu();
                char studentOption[50];
                int k=0;
                char ch;
                while(true){
                    ch = getch();
                    if(ch == 13){
                        studentOption[k] = '\0';
                        break;
                    }
                    else if(ch == 8 && k > 0){
                        k--;
                        cout << "\b \b";
                    }
                    else if((ch>48 && ch<52)|| ch==27){
                        cout << ch;
                        studentOption[k]=ch;
                        k++;
                        studentOption[k]='\0';
                        break;
                    }
                }
                if(strcmp(studentOption,"1")==0){
                    color(clr);
                    clr++;
                    while(true){
                        system("CLS");
                        banner();
                        FILE *dg;
                        char No1[50],No2[50], studentID[50],password[50];
                        if((dg=fopen("student\\LogIn.txt","r"))==NULL)puts("File can not open !\n"), exit(1);
                        for(int i=0; i<69; i++)cout<<" ";
                        printf("STUDENT ID :"); scanf("%s",&studentID); printf("\n");
                        for(int i=0; i<69; i++)cout<<" ";
                        printf("PASSWORD :");
                        int k=0;
                        char ch;
                        while(true){
                            ch = getch();
                            if(ch == 13){
                                password[k] = '\0';
                                break;
                            }
                            else if(ch == 8 && k > 0){
                                k--;
                                cout << "\b \b";
                            }
                            else{
                                cout << "*";
                                password[k] = ch;
                                k++;
                            }
                        }
                        bool flag=false;
                        while(!feof(dg)){
                            fscanf(dg,"%s %s",&No1,&No2);
                            if(!(strcmp(No1, studentID)) && !(strcmp(No2, password))){
                                flag=true;break;
                            }
                        }
                        fclose(dg);
                        cout<<endl;
                        if(flag){
                            printf("Access GRANTED.\n");
                            system("Pause");
                            color(clr++);
                            string dummy;
                            getline(cin, dummy);
                            while(true){
                                system("CLS");
                                banner();
                                studentLogInMenu();
                                char studentLogIn[50];
                                int k=0;
                                char ch;
                                while(true){
                                    ch = getch();
                                    if(ch == 13){
                                        studentLogIn[k] = '\0';
                                        break;
                                    }
                                    else if(ch == 8 && k > 0){
                                        k--;
                                        cout << "\b \b";
                                    }
                                    else if((ch>48 && ch<54) || ch==27){
                                        cout << ch;
                                        studentLogIn[k]=ch;
                                        k++;
                                        studentLogIn[k] = '\0';
                                        break;
                                    }
                                }
                                if(strcmp(studentLogIn,"1")==0){
                                    color(clr);
                                    clr++;
                                    system("CLS");
                                    banner();
                                    char ch;
                                    string aa="student\\Details\\";
                                    aa+=studentID;
                                    aa+=".txt";
                                    view(aa);
                                    system("pause");
                                }
                                else if(strcmp(studentLogIn,"2")==0){
                                    color(clr);
                                    clr++;
                                    system("CLS");
                                    banner();
                                    studentEditMenu();
                                    char studentEdit[50];
                                    int k=0;
                                    char ch1;
                                    while(true){
                                        ch1 = getch();
                                        if(ch1 == 13){
                                            studentEdit[k] = '\0';
                                            break;
                                        }
                                        else if(ch1 == 8 && k > 0){
                                            k--;
                                            cout << "\b \b";
                                        }
                                        else if(ch1>48 && ch1<57){
                                            cout << ch1;
                                            studentEdit[k]=ch1;
                                            k++;
                                            studentEdit[k]='\0';
                                            break;
                                        }
                                    }
                                    string stdEdOp, sv;
                                    char ch;
                                    string aa="student\\Details\\";
                                    aa+=studentID;
                                    aa+=".txt";
                                    char file_name_x[aa.length()+1];
                                    strcpy(file_name_x, aa.c_str());
                                    cout<<endl;
                                    if(strcmp(studentEdit,"1")==0){
                                        color(clr++);
                                        stdEdOp="NAME : ";
                                        for(int i=0; i<60; i++)cout<<" ";
                                        cout<<stdEdOp;
                                        getline(cin, sv);
                                        stdEdOp+=sv;
                                        edit(file_name_x, "NAME", stdEdOp);
                                        cout<<"Profile Edit SUCCESSFULLY"<<endl;
                                    }
                                    else if(strcmp(studentEdit,"2")==0){
                                        color(clr++);
                                        getline(cin, sv);
                                        while(true){
                                            for(int i=0; i<60; i++)cout<<" ";
                                            cout<<"NEW PASSWORD : ";
                                            for(int i=0; i<60; i++)cout<<" ";
                                            cout<<"CONFIRM NEW PASSWORD : ";
                                            getline(cin, stdEdOp);
                                            if(sv==stdEdOp){
                                                for(int i=0; i<60; i++)cout<<" ";
                                                cout<<"SUCCESSFULLY PASSWORD CHANGED."<<endl;
                                                break;
                                            }
                                            else{
                                                for(int i=0; i<60; i++)cout<<" ";
                                                cout<<"PASSWORD is not matched. TRY AGAIN."<<endl;
                                                system("pause");
                                                system("cls");
                                                banner();
                                            }
                                        }
                                        char ad[]="student\\LogIn.txt";
                                        sv=studentID;
                                        sv+=" ";
                                        sv+=stdEdOp;
                                        edit(ad, studentID, sv);
                                        cout<<"Profile Edit SUCCESSFULLY"<<endl;
                                    }
                                    else if(strcmp(studentEdit,"3")==0){
                                        color(clr);
                                        clr++;
                                        stdEdOp="SESSION : ";
                                        for(int i=0; i<60; i++)cout<<" ";
                                        cout<<stdEdOp;
                                        getline(cin, sv);
                                        stdEdOp+=sv;
                                        edit(file_name_x, "SESSION", stdEdOp);
                                        cout<<"Profile Edit SUCCESSFULLY"<<endl;
                                    }
                                    else if(strcmp(studentEdit,"4")==0){
                                        color(clr);
                                        clr++;
                                        stdEdOp="BLOOD GROUP : ";
                                        for(int i=0; i<60; i++)cout<<" ";
                                        cout<<stdEdOp;
                                        getline(cin, sv);
                                        stdEdOp+=sv;
                                        edit(file_name_x, "BLOOD GROUP", stdEdOp);
                                        cout<<"Profile Edit SUCCESSFULLY"<<endl;
                                    }
                                    else if(strcmp(studentEdit,"5")==0){
                                        color(clr);
                                        clr++;
                                        stdEdOp="CURRENT ADDRESS : ";
                                        for(int i=0; i<60; i++)cout<<" ";
                                        cout<<stdEdOp;
                                        getline(cin, sv);
                                        stdEdOp+=sv;
                                        edit(file_name_x, "CURRENT ADDRESS", stdEdOp);
                                        cout<<"Profile Edit SUCCESSFULLY"<<endl;
                                    }
                                    else if(strcmp(studentEdit,"6")==0){
                                        color(clr);
                                        clr++;
                                        stdEdOp="PERMANENT ADDRESS : ";
                                        for(int i=0; i<60; i++)cout<<" ";
                                        cout<<stdEdOp;
                                        getline(cin, sv);
                                        stdEdOp+=sv;
                                        edit(file_name_x, "PERMANENT ADDRESS", stdEdOp);
                                        cout<<"Profile Edit SUCCESSFULLY"<<endl;
                                    }
                                    else if(strcmp(studentEdit,"7")==0){
                                        color(clr);
                                        clr++;
                                        stdEdOp="CURRENT ORGANIZATION : ";
                                        for(int i=0; i<60; i++)cout<<" ";
                                        cout<<stdEdOp;
                                        getline(cin, sv);
                                        stdEdOp+=sv;
                                        edit(file_name_x, "CURRENT ORGANIZATION", stdEdOp);
                                        stdEdOp="POSITION : ";
                                        for(int i=0; i<60; i++)cout<<" ";
                                        cout<<stdEdOp;
                                        getline(cin, sv);
                                        stdEdOp+=sv;
                                        edit(file_name_x, "POSITION", stdEdOp);
                                        cout<<"Profile Edit SUCCESSFULLY"<<endl;
                                    }
                                    else if(strcmp(studentEdit,"8")==0){
                                        color(clr++);
                                    }
                                    else{
                                        color(clr++);
                                        system("cls");
                                        continue;
                                    }
                                    system("Pause");
                                }
                                else if(strcmp(studentLogIn,"3")==0){
                                        color(clr);
                                        clr++;
                                        string msgForAdmin;
                                        cout<<endl;
                                        for(int i=0; i<50; i++)cout<<" ";
                                        cout<<"Enter Your Message"<<endl;
                                        for(int i=0; i<60; i++)cout<<" ";
                                        getline(cin, msgForAdmin);
                                        ofstream write("msgForAdmin.txt", ofstream::app);
                                        write<<studentID<<endl;
                                        write<<msgForAdmin<<endl;
                                        write.close();
                                        for(int i=0; i<60; i++)cout<<" ";
                                        cout<<"Message send SUCCESSFULLY"<<endl;
                                        system("pause");
                                }
                                else if(strcmp(studentLogIn,"4")==0){
                                        int cn=0;
                                        while(true){
                                            color(clr++);
                                            system("cls");
                                            banner();
                                            booksMenuStudent();
                                            char bkMnSt[50];
                                            int k=0;
                                            char ch;
                                            while(true){
                                                ch = getch();
                                                if(ch == 13){
                                                    bkMnSt[k] = '\0';
                                                    break;
                                                }
                                                else if(ch == 8 && k > 0){
                                                    k--;
                                                    cout << "\b \b";
                                                }
                                                else if((ch>48 && ch<55) || ch==27){
                                                    cout << ch;
                                                    bkMnSt[k]=ch;
                                                    k++;
                                                    bkMnSt[k]='\0';
                                                    break;
                                                }
                                            }
                                            if(strcmp(bkMnSt,"1")==0){
                                                color(clr++);
                                                system("cls");
                                                banner();
                                                bookSearch();
                                                char bkShSt[50];
                                                int k=0;
                                                char ch;
                                                string title;
                                                int p=0;
                                                while(true){
                                                    ch = getch();
                                                    if(ch == 13){
                                                        bkShSt[k] = '\0';
                                                        break;
                                                    }
                                                    else if(ch == 8 && k > 0){
                                                        k--;
                                                        cout << "\b \b";
                                                    }
                                                    else if((ch>48 && ch<52) || ch==27){
                                                        cout << ch;
                                                        bkShSt[k]=ch;
                                                        k++;
                                                        bkShSt[k]='\0';
                                                        break;
                                                    }
                                                }
                                                if(strcmp(bkShSt,"1")==0){
                                                    cout<<endl;
                                                    for(int i=0; i<60; i++)cout<<" ";
                                                    cout<<"Book ID : ";
                                                    string bookId;
                                                    cin >> bookId;
                                                    char ch;
                                                    string aa="books\\bookID\\";
                                                    aa+=bookId;
                                                    aa+=".txt";
                                                    char file_name_x[aa.length()+1];
                                                    strcpy(file_name_x, aa.c_str());
                                                    FILE *fp;
                                                    fp = fopen(file_name_x, "r");
                                                    if (fp == NULL){
                                                        perror("Book ID isn't Correct.\n");
                                                        exit(EXIT_FAILURE);
                                                    }
                                                    while((ch = fgetc(fp)) != EOF)printf("%c", ch);
                                                    fclose(fp);
                                                    printf("\n");
                                                    cn++;
                                                    system("pause");
                                                }
                                                else if(strcmp(bkShSt,"2")==0){
                                                    cout<<endl;
                                                    for(int i=0; i<60; i++)cout<<" ";
                                                    cout<<"Note: Careful About space and words."<<endl;
                                                    for(int i=0; i<60; i++)cout<<" ";
                                                    cout<<"Books Title or Keyword : ";
                                                    if(cn)getline(cin, title);
                                                    getline(cin, title);
                                                    transform(title.begin(), title.end(), title.begin(), ::toupper);
                                                    searchBook(title);
                                                    cn=0;
                                                    system("pause");
                                                    for(int i=0; i<60; i++)cout<<" ";
                                                    cout<<"If You Want to take Book NOW?"<<endl;
                                                    for(int i=0; i<60; i++)cout<<" ";
                                                    cout<<"YES-------------------[1]"<<endl;
                                                    for(int i=0; i<60; i++)cout<<" ";
                                                    cout<<"NO--------------------[2]"<<endl;
                                                    for(int i=0; i<60; i++)cout<<" ";
                                                    char bkNmShSt[50];
                                                    int k=0;
                                                    char ch;
                                                    while(true){
                                                        ch = getch();
                                                        if(ch == 13){
                                                            bkNmShSt[k] = '\0';
                                                            break;
                                                        }
                                                        else if(ch == 8 && k > 0){
                                                            k--;
                                                            cout << "\b \b";
                                                        }
                                                        else if(ch>48 && ch<51){
                                                            cout << ch;
                                                            bkNmShSt[k]=ch;
                                                            k++;
                                                            bkNmShSt[k]='\0';
                                                            break;
                                                        }
                                                    }
                                                    if(strcmp(bkNmShSt,"1")==0){
                                                        cout<<endl;
                                                        string bookId, ss, quantity;
                                                        for(int i=0; i<60; i++)cout<<" ";
                                                        cout<<"Book ID : ";
                                                        if(cn)getline(cin, bookId);
                                                        getline(cin, bookId);
                                                        cn=0;
                                                        ss="Book ID : ";
                                                        ss+=bookId;
                                                        bookId=ss;
                                                        for(int i=0; i<60; i++)cout<<" ";
                                                        cout<<"Quantity : ";
                                                        getline(cin, quantity);
                                                        ss="Quantity : ";
                                                        ss+=quantity;
                                                        quantity=ss;
                                                        ss=bookId;
                                                        ss+="\t";
                                                        ss+=quantity;
                                                        timing(ss, "books\\bookRequest.txt", "STUDENT ID", studentID);
                                                        cout<<"Book Request Send."<<endl;
                                                        system("pause");
                                                    }
                                                }
                                                else if(strcmp(bkShSt,"3")==0){
                                                    system("cls");
                                                    color(clr++);
                                                    break;
                                                }
                                                else if(bkShSt[0]==27)return 0;
                                                else{
                                                    system("cls");
                                                    color(clr++);
                                                }
                                            }
                                            else if(strcmp(bkMnSt,"2")==0){
                                                cout<<endl;
                                                string bookId, ss, quantity;
                                                for(int i=0; i<60; i++)cout<<" ";
                                                cout<<"Book ID : ";
                                                if(cn)getline(cin, bookId);
                                                getline(cin, bookId);
                                                cn=0;
                                                ss="Book ID : ";
                                                ss+=bookId;
                                                bookId=ss;
                                                for(int i=0; i<60; i++)cout<<" ";
                                                cout<<"Quantity : ";
                                                getline(cin, quantity);
                                                ss="Quantity : ";
                                                ss+=quantity;
                                                quantity=ss;
                                                ss=bookId;
                                                ss+="\t";
                                                ss+=quantity;
                                                timing(ss, "books\\bookRequest.txt", "STUDENT ID", studentID);
                                                cout<<"Book Request Send."<<endl;
                                                system("pause");
                                            }
                                            else if(strcmp(bkMnSt,"3")==0){
                                                string ss;
                                                ss="books\\notifications\\";
                                                ss+=studentID;
                                                ss+=".txt";
                                                cout<<endl;
                                                view(ss);
                                                system("pause");
                                            }
                                            else if(strcmp(bkMnSt,"4")==0){
                                                string ss;
                                                ss="books\\studentID\\";
                                                ss+=studentID;
                                                ss+=".txt";
                                                cout<<endl;
                                                view(ss);
                                                system("pause");
                                            }
                                            else if(strcmp(bkMnSt,"5")==0){
                                                string ss;
                                                ss="books\\return\\";
                                                ss+=studentID;
                                                ss+=".txt";
                                                cout<<endl;
                                                view(ss);
                                                system("pause");
                                            }
                                            else if(strcmp(bkMnSt,"6")==0){
                                                color(clr++);
                                                system("cls");
                                                break;
                                            }
                                            else if(bkMnSt[0]==27)return 0;
                                            else{
                                                color(clr++);
                                                system("cls");
                                            }
                                        }

                                }
                                else if(strcmp(studentLogIn,"5")==0){
                                        color(clr++);
                                        break;
                                }
                                else if(studentLogIn[0]==27){
                                    return 0;
                                }
                                else{
                                    color(clr++);
                                    system("cls");
                                }
                            }
                        }
                        else{
                            color(clr++);
                            printf("Wrong STUDENT ID or Wrong PASSWORD.\n");
                            system("Pause");
                        }
                        break;
                    }
                }
                else if(strcmp(studentOption,"2")==0){
                    color(clr);
                    clr++;
                    system("CLS");
                    for(int i=0; i<69; i++)cout<<" ";
                    cout<<"=====STUDENT REGISTRATION====="<<endl<<endl<<endl;
                    char name[100], studentID[100], password[100], session[100], bloodGroup[50], currentAddress[500], permanentAddress[500], currentOrganization[500], position[100];
                    for(int i=0; i<69; i++)cout<<" ";
                    cout<<"Note: Student ID is test Case sensitive..."<<endl;
                    for(int i=0; i<69; i++)cout<<" ";
                    string ss;
                    cout<<"STUDENT ID : ";
                    scanf("%s", studentID);
                    for(int i=0; i<69; i++)cout<<" ";
                    cout<<"PASSWORD : ";
                    getline(cin, ss);
                    getline(cin, ss);
                    strcpy(password, ss.c_str());
                    for(int i=0; i<69; i++)cout<<" ";
                    cout<<"SESSION : ";
                    scanf("%s", session);
                    for(int i=0; i<69; i++)cout<<" ";
                    cout<<"NAME : ";
                    getline(cin, ss);
                    getline(cin, ss);
                    strcpy(name, ss.c_str());
                    for(int i=0; i<69; i++)cout<<" ";
                    cout<<"BLOOD GROUP : ";
                    scanf("%s", bloodGroup);
                    for(int i=0; i<69; i++)cout<<" ";
                    cout<<"CURRENT ADDRESS : ";
                    getline(cin, ss);
                    getline(cin, ss);
                    strcpy(currentAddress, ss.c_str());
                    for(int i=0; i<69; i++)cout<<" ";
                    cout<<"PERMANENT ADDRESS : ";
                    getline(cin, ss);
                    strcpy(permanentAddress, ss.c_str());
                    for(int i=0; i<69; i++)cout<<" ";
                    cout<<"CURRENT ORGANIZATION: ";
                    getline(cin, ss);
                    strcpy(currentOrganization, ss.c_str());
                    for(int i=0; i<69; i++)cout<<" ";
                    cout<<"POSITION : ";
                    getline(cin, ss);
                    strcpy(position, ss.c_str());
                    cout<<"STUDENT ID : "<<studentID<<endl;
                    cout<<"PASSWORD : "<<password<<endl;
                    cout<<"SESSION : "<<session<<endl;
                    cout<<"NAME : "<<name<<endl;
                    cout<<"BLOOD GROUP : "<<bloodGroup<<endl;
                    cout<<"CURRENT ADDRESS : "<<currentAddress<<endl;
                    cout<<"PERMANENT ADDRESS : "<<permanentAddress<<endl;
                    cout<<"CURRENT ORGANIZATION : "<<currentOrganization<<endl;
                    cout<<"POSITION : "<<position<<endl;
                    string aa="student\\Details\\";
                    aa+=studentID;
                    aa+=".txt";
                    char file_name_x[aa.length()+1];
                    strcpy(file_name_x, aa.c_str());
                    int m=strlen(studentID);
                    FILE *filePointer ;
                    filePointer = fopen(file_name_x, "w") ;
                    fprintf(filePointer, "%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n", "Name : ", name, "SESSION : ", session, "BLOOD GROUP : ", bloodGroup, "CURRENT ADDRESS : ", currentAddress,"PERMANENT ADDRESS : ", permanentAddress,"CURRENT ORGANIZATION : ", currentOrganization, "POSITION : ", position);
                    fclose(filePointer);
                    filePointer = fopen("student\\listOfStudent.txt", "a+") ;
                    fprintf(filePointer, "\n%s %s\n%s %s\n%s %s\n", "NAME : ", name,"SESSION : ", session, "STUDENT ID : ", studentID);
                    fclose(filePointer) ;
                    filePointer = fopen("student\\LogIn.txt", "a+") ;
                    fprintf(filePointer, "\n%s %s %s", studentID," ", password);
                    fclose(filePointer);
                    for(int i=0; i<60; i++)cout<<" ";
                    cout<<"REGISTRATION SUCCESSFUL"<<endl;
                    system("pause");
                }
                else if(strcmp(studentOption,"3")==0){
                    color(clr++);
                    system("CLS");
                    break;
                }
                else if(studentOption[0]==27)return 0;
                else{
                    color(clr++);
                    system("CLS");
                }
            }
        }
        else if(option[0]==27){
            color(clr);
            clr++;
            system("CLS");
            banner();
            break;
        }
        else{
            color(clr++);
            system("cls");
        }
    }
    system("pause");
}
