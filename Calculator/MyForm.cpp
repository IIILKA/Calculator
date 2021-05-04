#include "MyForm.h"
#include <string>
#include <msclr/marshal.h>
#include "Functions.h"
#include <fstream>

char arr[256]{};
int position = 0;

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(cli::array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Calculator::MyForm form;
	Application::Run(% form);
}

System::Void Calculator::MyForm::buttonZERO_Click(System::Object^ sender, System::EventArgs^ e)
{
	arr[position] = '0';
	position++;
	label1->Text = msclr::interop::marshal_as<String^>(arr);

}

System::Void Calculator::MyForm::buttonONE_Click(System::Object^ sender, System::EventArgs^ e)
{
	arr[position] = '1';
	position++;
	label1->Text = msclr::interop::marshal_as<String^>(arr);
}

System::Void Calculator::MyForm::buttonTWO_Click(System::Object^ sender, System::EventArgs^ e)
{
	arr[position] = '2';
	position++;
	label1->Text = msclr::interop::marshal_as<String^>(arr);
}

System::Void Calculator::MyForm::buttonTHREE_Click(System::Object^ sender, System::EventArgs^ e)
{
	arr[position] = '3';
	position++;
	label1->Text = msclr::interop::marshal_as<String^>(arr);
}

System::Void Calculator::MyForm::buttonFOUR_Click(System::Object^ sender, System::EventArgs^ e)
{
	arr[position] = '4';
	position++;
	label1->Text = msclr::interop::marshal_as<String^>(arr);
}

System::Void Calculator::MyForm::buttonFIVE_Click(System::Object^ sender, System::EventArgs^ e)
{
	arr[position] = '5';
	position++;
	label1->Text = msclr::interop::marshal_as<String^>(arr);
}

System::Void Calculator::MyForm::buttonSIX_Click(System::Object^ sender, System::EventArgs^ e)
{
	arr[position] = '6';
	position++;
	label1->Text = msclr::interop::marshal_as<String^>(arr);
}

System::Void Calculator::MyForm::buttonSEVEN_Click(System::Object^ sender, System::EventArgs^ e)
{
	arr[position] = '7';
	position++;
	label1->Text = msclr::interop::marshal_as<String^>(arr);
}

System::Void Calculator::MyForm::buttonEIGHT_Click(System::Object^ sender, System::EventArgs^ e)
{
	arr[position] = '8';
	position++;
	label1->Text = msclr::interop::marshal_as<String^>(arr);
}

System::Void Calculator::MyForm::buttonNINE_Click(System::Object^ sender, System::EventArgs^ e)
{
	arr[position] = '9';
	position++;
	label1->Text = msclr::interop::marshal_as<String^>(arr);
}

System::Void Calculator::MyForm::buttonPOINT_Click(System::Object^ sender, System::EventArgs^ e)
{
	arr[position] = '.';
	position++;
	label1->Text = msclr::interop::marshal_as<String^>(arr);
}

System::Void Calculator::MyForm::buttonLeftBKT_Click(System::Object^ sender, System::EventArgs^ e)
{
	arr[position] = '(';
	position++;
	label1->Text = msclr::interop::marshal_as<String^>(arr);
}

System::Void Calculator::MyForm::buttonRightBKT_Click(System::Object^ sender, System::EventArgs^ e)
{
	arr[position] = ')';
	position++;
	label1->Text = msclr::interop::marshal_as<String^>(arr);
}

System::Void Calculator::MyForm::buttonPLUS_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (arr[position - 1] == '-' || arr[position - 1] == '*' || arr[position - 1] == '/' || arr[position - 1] == '^')
	{
		position--;
		arr[position] = '+';
	}
	else
	{
		arr[position] = '+';
	}
	position++;
	label1->Text = msclr::interop::marshal_as<String^>(arr);
}

System::Void Calculator::MyForm::buttonMINUS_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (arr[position - 1] == '+' || arr[position - 1] == '*' || arr[position - 1] == '/' || arr[position - 1] == '^')
	{
		position--;
		arr[position] = '-';
	}
	else
	{
		arr[position] = '-';
	}
	position++;
	label1->Text = msclr::interop::marshal_as<String^>(arr);
}

System::Void Calculator::MyForm::buttonMULTIPLICATION_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (arr[position - 1] == '+' || arr[position - 1] == '-' || arr[position - 1] == '/' || arr[position - 1] == '^')
	{
		position--;
		arr[position] = '*';
	}
	else
	{
		arr[position] = '*';
	}
	position++;
	label1->Text = msclr::interop::marshal_as<String^>(arr);
}

System::Void Calculator::MyForm::buttonDIVISION_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (arr[position - 1] == '+' || arr[position - 1] == '+' || arr[position - 1] == '*' || arr[position - 1] == '^')
	{
		position--;
		arr[position] = '/';
	}
	else
	{
		arr[position] = '/';
	}
	position++;
	label1->Text = msclr::interop::marshal_as<String^>(arr);
}

System::Void Calculator::MyForm::buttonEXPONENTIATION_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (arr[position - 1] == '+' || arr[position - 1] == '+' || arr[position - 1] == '*' || arr[position - 1] == '/')
	{
		position--;
		arr[position] = '^';
	}
	else
	{
		arr[position] = '^';
	}
	position++;
	label1->Text = msclr::interop::marshal_as<String^>(arr);
}

System::Void Calculator::MyForm::buttonBACKSPACE_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (position != 0)
	{
		position--;
		arr[position] = '\0';
	}
	label1->Text = msclr::interop::marshal_as<String^>(arr);
}

System::Void Calculator::MyForm::buttonC_Click(System::Object^ sender, System::EventArgs^ e)
{
	for (; position >= 0; position--)
	{
		arr[position] = '\0';
	}
	position = 0;
	label1->Text = msclr::interop::marshal_as<String^>(arr);
}

System::Void Calculator::MyForm::buttonEQUALLY_Click(System::Object^ sender, System::EventArgs^ e)
{
	char* expression;
	while (true)
	{
		expression = getExpression(arr);
		if (expression[0] == '!')
		{
			delete[] expression;
			for (; position >= 0; position--)
			{
				arr[position] = '\0';
			}
			position = 0;
			label1->Text = "Ошибка!";
			return System::Void();
		}
		expression = getExpression2(expression);
		if (expression[0] != '!')
		{
			break;
		}
		delete[] expression;

		for (; position >= 0; position--)
		{
			arr[position] = '\0';
		}
		position = 0;
		label1->Text = "Ошибка!";
		return System::Void();
	}
	char* reversePolishNotation;
	reversePolishNotation = translateInReversePolishNotation(expression);
	double data;
	data = translateOutReversePolishNotation(reversePolishNotation);
	//label1->Text = data.ToString();

	for (; position >= 0; position--)
	{
		arr[position] = '\0';
	}
	position = 0;

	fstream fs;
	fs.open("костылище!!!", fstream::out);
	fs << data << '\n';
	fs.close();
	fs.open("костылище!!!", fstream::in);
	char ch;
	while (true)
	{
		ch = fs.get();
		if (ch == '\n')
		{
			break;
		}
		arr[position] = ch;
		position++;
	}
	fs.close();
	////////////////////////////////////////////////////////////////////////
	if (arr[1] == 'i' || arr[1] == 'n')
	{
		label1->Text = "На ноль делить нельзя!";
		arr[0] = '\0';
		arr[1] = '\0';
		arr[2] = '\0';
		arr[3] = '\0';
		position = 0;
	}
	else
	{
		label1->Text = msclr::interop::marshal_as<String^>(arr);
	}
	/////////////////////////////////////////////////////////////////////
}
