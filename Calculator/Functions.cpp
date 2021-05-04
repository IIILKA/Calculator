#include "Functions.h"

char* getExpression(char* arr)//��������� ���� � �������� ������, ��� �� ������� ��� ������� �� ���������
{
	int n = 0;//���������� �� ��������
	int quantityOfLeftBracket = 0, quantityOfRightBracket = 0;//���������� ������ �������������(�����) � �������������(������)
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if ((arr[i] > '9' && arr[i] < '^') || arr[i] > '^' || (arr[i] < '(' && arr[i] > ' ') || arr[i] < ' ' || arr[i] == ',')//����� ����� ����� ����, ������ � + - / * ^ �� ��������
		{
			//cout << "������� ������ � ������������� ���������, ���������� ��� ���" << endl;
			cout << "Entered expression have impremissible symbols" << endl;
			char* ch = new char[1];
			ch[0] = '!';
			return ch;
		}
		if (arr[i] != ' ')
		{
			n++;
			if (arr[i] == '(')//������� ����� ������
			{
				quantityOfLeftBracket++;
			}
			else if (arr[i] == ')' && (quantityOfLeftBracket <= quantityOfRightBracket))//���� ���������� ����� ������ ����� ��� ������ ���������� ������ ������, 
			{                                                                           //�� �������� � ������ ��� ���� ������ ������ ������, ��� ��� �������� �� ������
				cout << "Expression entered incorrectly" << endl;
				char* ch = new char[1];
				ch[0] = '!';
				return ch;
			}
			else if (arr[i] == ')')//������� ������ ������
			{
				quantityOfRightBracket++;
			}
		}
	}
	if (quantityOfLeftBracket > quantityOfRightBracket)//���� ����� ������ ������ ��� ������
	{
		int e = quantityOfLeftBracket - quantityOfRightBracket;//���������� ����������� ������ ������
		n = n + e;//���������� ���������� �� ������ �������� � ������ �� ���������� ����������� ������ ������
	}

	char* expression = new char[n + 1];//�������� ����� ��� ������ �������� ��� �������� � ��������� ���� ���� ��� '\0'
	//������� ������� � ��������� ������ ������ ���� ��� �����
	for (int i = 0, j = 0; arr[j] != '\0'; i++, j++)//i ��� ������ ��� ��������, j ��� ������ � ���������
	{
		if (arr[j] == ' ')//���������� ������
		{
			i--;
			continue;
		}
		expression[i] = arr[j];//�������� �� ������
		if (arr[j + 1] == '\0')//���� �������� ������ � ������ � ��������� '\0' �� ���� ����������� ������ ������, �� ��������� ��� ������ � ����� ������ ��� ��������
		{
			int e = quantityOfLeftBracket - quantityOfRightBracket;
			if (e > 0)
			{
				for (; e != 0; e--)
				{
					i++;
					expression[i] = ')';
				}
			}
		}
	}
	expression[n] = '\0';
	bool previosKeyIsOperator = true;//����� ��� �������� �� ��������� ������ ������ ���������� � �������� � ����� ������
	for (int i = 0; i < n; i++)
	{
		if ((expression[i] == '+' || expression[i] == '*' || expression[i] == '/' || expression[i] == '^') && previosKeyIsOperator == true && i == 0)//�� ����������� '-' �.�. �� �����
		{                                                                                                                                            //���������� ���� ������� �����
			//cout << "������ ������� �� ��������" << endl;
			cout << "Expression entered incorrectly" << endl;
			for (int j = 0; j < n; j++)
			{
				expression[j] = '!';
			}
			break;
		}
		else if ((expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/' || expression[i] == '^') && previosKeyIsOperator == true && i > 0)//���������
		{                                                                                                                                             //���� �� ������� ��������� ����������
			//cout << "������ ������� �� ��������" << endl;
			cout << "Expression entered incorrectly" << endl;
			for (int j = 0; j < n; j++)
			{
				expression[j] = '!';
			}
			break;

		}
		else if (expression[i] == '.' && ((expression[i - 1] < '0' || expression[i - 1] > '9') || (expression[i + 1] < '0' || expression[i + 1] > '9')))//���� ����� ��� ������ �� �����
		{                                                                                                                                               //����� �� ����� ������ ������
			//cout << "������ ������� �� ��������" << endl;
			cout << "Expression entered incorrectly" << endl;
			for (int j = 0; j < n; j++)
			{
				expression[j] = '!';
			}
			break;
		}
		else if ((expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/' || expression[i] == '^') && previosKeyIsOperator == false)//���� ������ ��������
		{                                                                                                     //�� ���������� ���� �� ��� ���������� �� ����� �������� ��������� �������� �����
			previosKeyIsOperator = true;
		}
		else if ((expression[i] >= '0' && expression[i] <= '9') || expression[i] == '(')//���� ������ �� �������� � �� ������ ������(�.�. ����� ��������� ������ ������ ������ �� �����)
		{
			previosKeyIsOperator = false;
		}
	}
	if (previosKeyIsOperator == true && expression[0] != '!')//���� ���������� ��� ���������� ���� ��� �������� � �� ����� �� ��������� ������, ������ �������� ����� ��������� � �������
	{
		cout << "Expression entered incorrectly" << endl;
		for (int j = 0; j < n; j++)
		{
			expression[j] = '!';
		}
	}
	else if (quantityOfLeftBracket - quantityOfRightBracket < 0)//�� ������ ������ ��������� ��� ��� �������� ��������� ������
	{
		cout << "Expression entered incorrectly" << endl;
		for (int j = 0; j < n; j++)
		{
			expression[j] = '!';
		}
	}
	return expression;
}

char* getExpression2(char* expression)//����������� ������� ����� �����������, ���������� � ��������(���� ����� �������������, �� ������ ����� ������ � ������ - �� �������)
{
	char arr[256];
	int n = 0;
	for (int i = 0, j = 0; expression[j] != '\0'; i++, j++)
	{
		if (expression[j] == '+' || expression[j] == '*' || expression[j] == '/' || expression[j] == '^')
		{
			arr[i] = ' ';
			i++;
			arr[i] = expression[j];
			i++;
			arr[i] = ' ';
			n = n + 3;
			continue;
		}
		else if (expression[j] == '-' && (expression[j - 1] == '(' || j == 0))
		{
			arr[i] = expression[j];
			n++;
			continue;
		}
		else if (expression[j] == '-' && expression[j - 1] != '(' && j != 0)
		{
			arr[i] = ' ';
			i++;
			arr[i] = expression[j];
			i++;
			arr[i] = ' ';
			n = n + 3;
			continue;
		}
		else if (expression[j] == '(')
		{
			arr[i] = expression[j];
			i++;
			arr[i] = ' ';
			n = n + 2;
			continue;
		}
		else if (expression[j] == ')')
		{
			arr[i] = ' ';
			i++;
			arr[i] = expression[j];
			n = n + 2;
			continue;
		}
		arr[i] = expression[j];
		n++;
	}

	char* arr2 = new char[n + 1];//�������� ������, �� ��� � ��������
	for (int i = 0; i < n; i++)
	{
		arr2[i] = arr[i];
	}
	arr2[n] = '\0';

	bool pointTrue = false;
	for (int i = 0; arr2[i] != '\0'; i++)//��������� ��������� �� ����������� �����(��������� �� ����� �� ��������� ����� � ����� �����)
	{
		if (arr2[i] == '.' && pointTrue == true)
		{
			//cout << "������ ������� �� ��������" << endl;
			cout << "Expression entered incorrectly" << endl;
			for (int j = 0; arr2[j] != '\0'; j++)
			{
				arr2[j] = '!';
			}
			break;
		}
		else if (arr2[i] == '.')
		{
			pointTrue = true;
		}
		else if (arr2[i] == ' ')
		{
			pointTrue = false;
		}
	}

	delete[] expression;
	return arr2;
}
//���� ��� ������
struct stack//���� ������ ������������ ����� �� ����������� ��������� � �������� �������� ������
{
	char data;
	int priority;
	stack* next;
};
//���� ��� �����
struct finishStack//���� ������ ������������ ����� �� ��������� �������������� �������� ��������� ������� �������� ������
{
	double data;
	finishStack* next;
};

void createStack(stack** top, char data)
{
	stack* q = new stack();
	(*q).data = data;
	if (data == '^')
	{
		(*q).priority = 1;
	}
	else if (data == '*' || data == '/')
	{
		(*q).priority = 2;
	}
	else
	{
		(*q).priority = 3;
	}

	if (*top == NULL)
	{
		*top = q;
	}
	else
	{
		(*q).next = *top;
		*top = q;
	}
}

void createStack(finishStack** top, double data)
{
	finishStack* q = new finishStack();
	(*q).data = data;
	if (*top == NULL)
	{
		*top = q;
	}
	else
	{
		(*q).next = *top;
		*top = q;
	}
}

void deleteKeyOfStack(stack** top, char data)
{
	stack* q = *top;
	stack* prev = NULL;

	while (q != NULL)
	{
		if ((*q).data == data)
		{
			if (q == *top)
			{
				*top = (*q).next;
				delete q;
				q = *top;
			}
			else
			{
				(*prev).next = (*q).next;
				delete q;
				q = (*prev).next;
			}
		}
		else
		{
			prev = q;
			q = (*q).next;
		}
	}
}

void deleteOneKeyOfStack(finishStack** top, double data)
{
	finishStack* q = *top;
	finishStack* prev = NULL;

	while (q != NULL)
	{
		if ((*q).data == data)
		{
			if (q == *top)
			{
				*top = (*q).next;
				delete q;
				q = *top;
			}
			else
			{
				(*prev).next = (*q).next;
				delete q;
				q = (*prev).next;
			}
			break;
		}
		else
		{
			prev = q;
			q = (*q).next;
		}
	}
}

void checkStack(stack** top, char* arr, int& j)//������ �� ������ �������� ����� ������ �������� ������� ������
{
	stack* q = *top;
	stack* prev = NULL;
	int priority = 4;
	char data = (*q).data;
	if ((*q).data != ')')
	{
		priority = (*q).priority;
		prev = q;
		q = (*q).next;
	}
	while (true)
	{
		if (q == NULL || (*q).data == '(')
		{
			if (data == ')' && q != NULL)
			{
				if (q == *top)
				{
					*top = (*q).next;
					delete q;
					q = *top;
				}
				else
				{
					if (q != NULL)
					{
						stack* p = (*q).next;
						delete q;
						q = p;
					}
				}
			}
			break;
		}
		if ((*q).priority <= priority)
		{
			if ((*q).data != '(' && (*q).data != ')')
			{
				arr[j] = (*q).data;
				j++;
				arr[j] = ' ';
				j++;
			}
			if (prev != NULL)
			{
				(*prev).next = (*q).next;
				delete q;
				q = (*prev).next;
			}
			else
			{
				if (q == *top)
				{
					*top = (*q).next;
					delete q;
					q = *top;
				}
				else
				{
					stack* p = (*q).next;
					delete q;
					q = p;
				}
			}
		}
		else
		{
			prev = q;
			q = (*q).next;
		}
	}
}

char* translateInReversePolishNotation(char* expression)
{
	stack* top = NULL;
	char arr[256];
	int j = 0;
	for (int i = 0; expression[i] != '\0'; i++)
	{
		if (expression[i] >= '0' && expression[i] <= '9' && expression[i + 1] == '\0')
		{
			arr[j] = expression[i];
			j++;
			arr[j] = ' ';
			j++;
		}
		else if ((expression[i] >= '0' && expression[i] <= '9') || expression[i] == '.')
		{
			arr[j] = expression[i];
			j++;
		}
		else if (expression[i] == '-' && (expression[i + 1] >= '0' && expression[i + 1] <= '9'))
		{
			arr[j] = '(';
			j++;
			for (; expression[i] != ' '; i++)
			{
				arr[j] = expression[i];
				j++;
			}
			i--;
			arr[j] = ')';
			j++;
		}
		else if (expression[i] == ' ' && expression[i - 1] >= '0' && expression[i - 1] <= '9')
		{
			arr[j] = ' ';
			j++;
		}
		else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/' || expression[i] == '^')
		{
			createStack(&top, expression[i]);
			checkStack(&top, arr, j);
		}
		else if (expression[i] == '(')
		{
			createStack(&top, expression[i]);
		}
		else if (expression[i] == ')')
		{
			createStack(&top, expression[i]);
			checkStack(&top, arr, j);
		}
	}
	if (top != NULL)
	{
		createStack(&top, ')');
		checkStack(&top, arr, j);
	}
	arr[j] = '\0';
	char* arr2 = new char[j + 1];
	for (int i = 0; i < j; i++)
	{
		arr2[i] = arr[i];
	}
	arr2[j] = arr[j];
	return arr2;
}

double translateOutReversePolishNotation(char* reversePolishNotation)
{
	char arr[32]{};
	finishStack* top = NULL;
	for (int i = 0; reversePolishNotation[i] != '\0'; i++)
	{
		if (reversePolishNotation[i] >= '0' && reversePolishNotation[i] <= '9')
		{
			for (int j = 0; reversePolishNotation[i] != ' '; i++, j++)
			{
				arr[j] = reversePolishNotation[i];
			}
			double data = atof(arr);
			createStack(&top, data);
			for (int j = 0; j < 32; j++)
			{
				arr[j] = '\0';
			}
		}
		else if (reversePolishNotation[i] == '(')
		{
			i++;
			for (int j = 0; reversePolishNotation[i] != ')'; i++, j++)
			{
				arr[j] = reversePolishNotation[i];
			}
			double data = atof(arr);
			createStack(&top, data);
			for (int j = 0; j < 32; j++)
			{
				arr[j] = '\0';
			}
		}
		else if (reversePolishNotation[i] == ' ')
		{
			continue;
		}
		else if (reversePolishNotation[i] == '+' || reversePolishNotation[i] == '-' || reversePolishNotation[i] == '*' || reversePolishNotation[i] == '/' || reversePolishNotation[i] == '^')
		{
			double data1 = (*top).data;
			deleteOneKeyOfStack(&top, data1);
			double data2 = (*top).data;
			deleteOneKeyOfStack(&top, data2);
			double data3;
			if (reversePolishNotation[i] == '+')
			{
				data3 = data2 + data1;
			}
			else if (reversePolishNotation[i] == '-')
			{
				data3 = data2 - data1;
			}
			else if (reversePolishNotation[i] == '*')
			{
				data3 = data2 * data1;
			}
			else if (reversePolishNotation[i] == '/')
			{
				/*if (data1 == 0)
				{
					cout << "You can't dividing by zero " << endl;
				}*/
				data3 = data2 / data1;
			}
			else if (reversePolishNotation[i] == '^')
			{
				data3 = pow(data2, data1);
			}
			createStack(&top, data3);
		}
	}
	double data;
	data = (*top).data;
	deleteOneKeyOfStack(&top, data);
	return data;
}
