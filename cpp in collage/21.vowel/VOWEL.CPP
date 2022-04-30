#include<conio.h>
#include<iostream.h>
class check
{
	char c;
	public:
	  void checking()
	  {
	     cout<<"enter any character";
	     cin>>c;
	     switch(c)
	     {
		case 'a':
		cout<<"this is vowel";
		break;

		case 'e':
		cout<<"this is vowel";
		break;

		case 'i':
		cout<<"this is vowel";
		break;

		case 'o':
		cout<<"this is vowel";
		break;

		case 'u':
		cout<<"this is vowel";
		break;

		default:
		cout<<"an alphabet";
		break;
	     }
	  }
};
void main()
{
	check ch;
	ch.checking();
	getch();
}