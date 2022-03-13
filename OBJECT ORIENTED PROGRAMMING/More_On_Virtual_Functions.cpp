#include<iostream>
#include<cstring>
using namespace std;
class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s,float r){
            title = s;
            rating =r;
        }
        virtual void display(){}     // Virtual Function
};
class CWHVideo:public CWH{
    int videoLength;
    public:
        CWHVideo(string s,float r,int VL): CWH(s,r){
            videoLength = VL;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
};
class CWHText:public CWH{
    int words;
    public:
        CWHText(string s,float r,int wc): CWH(s,r){
            words = wc;
        }
        void display(){
            cout<<"This is a text tutorial with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"No of words : "<<words<<" words"<<endl;
        }
};
int main(){
    string title = new char[30];
    float rating,vlen;
    int words;
    title = "Django";
    vlen = 4.56;
    rating = 4;
    CWHVideo djvideo(title,rating,vlen);
    title = "Django";
    rating = 4.5;
    words = 456;
    CWHText  djtext(title,rating,words);
    CWH *tuts[2];
    tuts[0]=&djvideo;
    tuts[1]=&djtext;
    tuts[0]->display();          // This would run the display function of base class CWH if virtual was not written...
    tuts[1]->display();          // This would run the display function of base class CWH if virtual was not written...
    return 0;
}