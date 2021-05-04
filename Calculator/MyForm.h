#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonPOINT;
	protected:

	private: System::Windows::Forms::Button^ buttonZERO;
	private: System::Windows::Forms::Button^ buttonEQUALLY;

	protected:


	private: System::Windows::Forms::Button^ buttonONE;
	private: System::Windows::Forms::Button^ buttonTWO;
	private: System::Windows::Forms::Button^ buttonTHREE;
	private: System::Windows::Forms::Button^ buttonFOUR;
	private: System::Windows::Forms::Button^ buttonFIVE;
	private: System::Windows::Forms::Button^ buttonSIX;
	private: System::Windows::Forms::Button^ buttonSEVEN;
	private: System::Windows::Forms::Button^ buttonEIGHT;
	private: System::Windows::Forms::Button^ buttonNINE;
	private: System::Windows::Forms::Button^ buttonPLUS;
	private: System::Windows::Forms::Button^ buttonLeftBKT;
	private: System::Windows::Forms::Button^ buttonRightBKT;
	private: System::Windows::Forms::Button^ buttonMINUS;
	private: System::Windows::Forms::Button^ buttonMULTIPLICATION;
	private: System::Windows::Forms::Button^ buttonDIVISION;
	private: System::Windows::Forms::Button^ buttonC;
	private: System::Windows::Forms::Button^ buttonBACKSPACE;
	private: System::Windows::Forms::Button^ buttonEXPONENTIATION;



	private: System::Windows::Forms::Label^ label1;






















	private: System::ComponentModel::IContainer^ components;



	protected:


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonPOINT = (gcnew System::Windows::Forms::Button());
			this->buttonZERO = (gcnew System::Windows::Forms::Button());
			this->buttonEQUALLY = (gcnew System::Windows::Forms::Button());
			this->buttonONE = (gcnew System::Windows::Forms::Button());
			this->buttonTWO = (gcnew System::Windows::Forms::Button());
			this->buttonTHREE = (gcnew System::Windows::Forms::Button());
			this->buttonFOUR = (gcnew System::Windows::Forms::Button());
			this->buttonFIVE = (gcnew System::Windows::Forms::Button());
			this->buttonSIX = (gcnew System::Windows::Forms::Button());
			this->buttonSEVEN = (gcnew System::Windows::Forms::Button());
			this->buttonEIGHT = (gcnew System::Windows::Forms::Button());
			this->buttonNINE = (gcnew System::Windows::Forms::Button());
			this->buttonPLUS = (gcnew System::Windows::Forms::Button());
			this->buttonLeftBKT = (gcnew System::Windows::Forms::Button());
			this->buttonRightBKT = (gcnew System::Windows::Forms::Button());
			this->buttonMINUS = (gcnew System::Windows::Forms::Button());
			this->buttonMULTIPLICATION = (gcnew System::Windows::Forms::Button());
			this->buttonDIVISION = (gcnew System::Windows::Forms::Button());
			this->buttonC = (gcnew System::Windows::Forms::Button());
			this->buttonBACKSPACE = (gcnew System::Windows::Forms::Button());
			this->buttonEXPONENTIATION = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonPOINT
			// 
			this->buttonPOINT->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->buttonPOINT->Font = (gcnew System::Drawing::Font(L"Unispace", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPOINT->Location = System::Drawing::Point(12, 594);
			this->buttonPOINT->MaximumSize = System::Drawing::Size(151, 75);
			this->buttonPOINT->Name = L"buttonPOINT";
			this->buttonPOINT->Size = System::Drawing::Size(151, 75);
			this->buttonPOINT->TabIndex = 0;
			this->buttonPOINT->Text = L".";
			this->buttonPOINT->UseVisualStyleBackColor = false;
			this->buttonPOINT->Click += gcnew System::EventHandler(this, &MyForm::buttonPOINT_Click);
			// 
			// buttonZERO
			// 
			this->buttonZERO->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonZERO->Font = (gcnew System::Drawing::Font(L"Unispace", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonZERO->Location = System::Drawing::Point(169, 594);
			this->buttonZERO->MaximumSize = System::Drawing::Size(151, 75);
			this->buttonZERO->Name = L"buttonZERO";
			this->buttonZERO->Size = System::Drawing::Size(151, 75);
			this->buttonZERO->TabIndex = 1;
			this->buttonZERO->Text = L"0";
			this->buttonZERO->UseVisualStyleBackColor = false;
			this->buttonZERO->Click += gcnew System::EventHandler(this, &MyForm::buttonZERO_Click);
			// 
			// buttonEQUALLY
			// 
			this->buttonEQUALLY->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->buttonEQUALLY->Font = (gcnew System::Drawing::Font(L"Unispace", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEQUALLY->Location = System::Drawing::Point(326, 594);
			this->buttonEQUALLY->MaximumSize = System::Drawing::Size(151, 75);
			this->buttonEQUALLY->Name = L"buttonEQUALLY";
			this->buttonEQUALLY->Size = System::Drawing::Size(151, 75);
			this->buttonEQUALLY->TabIndex = 2;
			this->buttonEQUALLY->Text = L"=";
			this->buttonEQUALLY->UseVisualStyleBackColor = false;
			this->buttonEQUALLY->Click += gcnew System::EventHandler(this, &MyForm::buttonEQUALLY_Click);
			// 
			// buttonONE
			// 
			this->buttonONE->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonONE->Font = (gcnew System::Drawing::Font(L"Unispace", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonONE->Location = System::Drawing::Point(12, 513);
			this->buttonONE->MaximumSize = System::Drawing::Size(151, 75);
			this->buttonONE->Name = L"buttonONE";
			this->buttonONE->Size = System::Drawing::Size(151, 75);
			this->buttonONE->TabIndex = 3;
			this->buttonONE->Text = L"1";
			this->buttonONE->UseVisualStyleBackColor = false;
			this->buttonONE->Click += gcnew System::EventHandler(this, &MyForm::buttonONE_Click);
			// 
			// buttonTWO
			// 
			this->buttonTWO->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonTWO->Font = (gcnew System::Drawing::Font(L"Unispace", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTWO->Location = System::Drawing::Point(169, 513);
			this->buttonTWO->MaximumSize = System::Drawing::Size(151, 75);
			this->buttonTWO->Name = L"buttonTWO";
			this->buttonTWO->Size = System::Drawing::Size(151, 75);
			this->buttonTWO->TabIndex = 4;
			this->buttonTWO->Text = L"2";
			this->buttonTWO->UseVisualStyleBackColor = false;
			this->buttonTWO->Click += gcnew System::EventHandler(this, &MyForm::buttonTWO_Click);
			// 
			// buttonTHREE
			// 
			this->buttonTHREE->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonTHREE->Font = (gcnew System::Drawing::Font(L"Unispace", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTHREE->Location = System::Drawing::Point(326, 513);
			this->buttonTHREE->MaximumSize = System::Drawing::Size(151, 75);
			this->buttonTHREE->Name = L"buttonTHREE";
			this->buttonTHREE->Size = System::Drawing::Size(151, 75);
			this->buttonTHREE->TabIndex = 5;
			this->buttonTHREE->Text = L"3";
			this->buttonTHREE->UseVisualStyleBackColor = false;
			this->buttonTHREE->Click += gcnew System::EventHandler(this, &MyForm::buttonTHREE_Click);
			// 
			// buttonFOUR
			// 
			this->buttonFOUR->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonFOUR->Font = (gcnew System::Drawing::Font(L"Unispace", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonFOUR->Location = System::Drawing::Point(12, 432);
			this->buttonFOUR->MaximumSize = System::Drawing::Size(151, 75);
			this->buttonFOUR->Name = L"buttonFOUR";
			this->buttonFOUR->Size = System::Drawing::Size(151, 75);
			this->buttonFOUR->TabIndex = 6;
			this->buttonFOUR->Text = L"4";
			this->buttonFOUR->UseVisualStyleBackColor = false;
			this->buttonFOUR->Click += gcnew System::EventHandler(this, &MyForm::buttonFOUR_Click);
			// 
			// buttonFIVE
			// 
			this->buttonFIVE->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonFIVE->Font = (gcnew System::Drawing::Font(L"Unispace", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonFIVE->Location = System::Drawing::Point(169, 432);
			this->buttonFIVE->MaximumSize = System::Drawing::Size(151, 75);
			this->buttonFIVE->Name = L"buttonFIVE";
			this->buttonFIVE->Size = System::Drawing::Size(151, 75);
			this->buttonFIVE->TabIndex = 7;
			this->buttonFIVE->Text = L"5";
			this->buttonFIVE->UseVisualStyleBackColor = false;
			this->buttonFIVE->Click += gcnew System::EventHandler(this, &MyForm::buttonFIVE_Click);
			// 
			// buttonSIX
			// 
			this->buttonSIX->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonSIX->Font = (gcnew System::Drawing::Font(L"Unispace", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSIX->Location = System::Drawing::Point(326, 432);
			this->buttonSIX->MaximumSize = System::Drawing::Size(151, 75);
			this->buttonSIX->Name = L"buttonSIX";
			this->buttonSIX->Size = System::Drawing::Size(151, 75);
			this->buttonSIX->TabIndex = 8;
			this->buttonSIX->Text = L"6";
			this->buttonSIX->UseVisualStyleBackColor = false;
			this->buttonSIX->Click += gcnew System::EventHandler(this, &MyForm::buttonSIX_Click);
			// 
			// buttonSEVEN
			// 
			this->buttonSEVEN->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonSEVEN->Font = (gcnew System::Drawing::Font(L"Unispace", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSEVEN->Location = System::Drawing::Point(12, 351);
			this->buttonSEVEN->MaximumSize = System::Drawing::Size(151, 75);
			this->buttonSEVEN->Name = L"buttonSEVEN";
			this->buttonSEVEN->Size = System::Drawing::Size(151, 75);
			this->buttonSEVEN->TabIndex = 9;
			this->buttonSEVEN->Text = L"7";
			this->buttonSEVEN->UseVisualStyleBackColor = false;
			this->buttonSEVEN->Click += gcnew System::EventHandler(this, &MyForm::buttonSEVEN_Click);
			// 
			// buttonEIGHT
			// 
			this->buttonEIGHT->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonEIGHT->Font = (gcnew System::Drawing::Font(L"Unispace", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEIGHT->Location = System::Drawing::Point(169, 351);
			this->buttonEIGHT->MaximumSize = System::Drawing::Size(151, 75);
			this->buttonEIGHT->Name = L"buttonEIGHT";
			this->buttonEIGHT->Size = System::Drawing::Size(151, 75);
			this->buttonEIGHT->TabIndex = 10;
			this->buttonEIGHT->Text = L"8";
			this->buttonEIGHT->UseVisualStyleBackColor = false;
			this->buttonEIGHT->Click += gcnew System::EventHandler(this, &MyForm::buttonEIGHT_Click);
			// 
			// buttonNINE
			// 
			this->buttonNINE->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonNINE->Font = (gcnew System::Drawing::Font(L"Unispace", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonNINE->Location = System::Drawing::Point(326, 351);
			this->buttonNINE->MaximumSize = System::Drawing::Size(151, 75);
			this->buttonNINE->Name = L"buttonNINE";
			this->buttonNINE->Size = System::Drawing::Size(151, 75);
			this->buttonNINE->TabIndex = 11;
			this->buttonNINE->Text = L"9";
			this->buttonNINE->UseVisualStyleBackColor = false;
			this->buttonNINE->Click += gcnew System::EventHandler(this, &MyForm::buttonNINE_Click);
			// 
			// buttonPLUS
			// 
			this->buttonPLUS->Font = (gcnew System::Drawing::Font(L"Unispace", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPLUS->Location = System::Drawing::Point(12, 270);
			this->buttonPLUS->MaximumSize = System::Drawing::Size(151, 75);
			this->buttonPLUS->Name = L"buttonPLUS";
			this->buttonPLUS->Size = System::Drawing::Size(151, 75);
			this->buttonPLUS->TabIndex = 12;
			this->buttonPLUS->Text = L"+";
			this->buttonPLUS->UseVisualStyleBackColor = true;
			this->buttonPLUS->Click += gcnew System::EventHandler(this, &MyForm::buttonPLUS_Click);
			// 
			// buttonLeftBKT
			// 
			this->buttonLeftBKT->Font = (gcnew System::Drawing::Font(L"Unispace", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonLeftBKT->Location = System::Drawing::Point(169, 270);
			this->buttonLeftBKT->MaximumSize = System::Drawing::Size(151, 75);
			this->buttonLeftBKT->Name = L"buttonLeftBKT";
			this->buttonLeftBKT->Size = System::Drawing::Size(151, 75);
			this->buttonLeftBKT->TabIndex = 13;
			this->buttonLeftBKT->Text = L"(";
			this->buttonLeftBKT->UseVisualStyleBackColor = true;
			this->buttonLeftBKT->Click += gcnew System::EventHandler(this, &MyForm::buttonLeftBKT_Click);
			// 
			// buttonRightBKT
			// 
			this->buttonRightBKT->Font = (gcnew System::Drawing::Font(L"Unispace", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRightBKT->Location = System::Drawing::Point(326, 270);
			this->buttonRightBKT->MaximumSize = System::Drawing::Size(151, 75);
			this->buttonRightBKT->Name = L"buttonRightBKT";
			this->buttonRightBKT->Size = System::Drawing::Size(151, 75);
			this->buttonRightBKT->TabIndex = 14;
			this->buttonRightBKT->Text = L")";
			this->buttonRightBKT->UseVisualStyleBackColor = true;
			this->buttonRightBKT->Click += gcnew System::EventHandler(this, &MyForm::buttonRightBKT_Click);
			// 
			// buttonMINUS
			// 
			this->buttonMINUS->Font = (gcnew System::Drawing::Font(L"Unispace", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMINUS->Location = System::Drawing::Point(12, 189);
			this->buttonMINUS->MaximumSize = System::Drawing::Size(151, 75);
			this->buttonMINUS->Name = L"buttonMINUS";
			this->buttonMINUS->Size = System::Drawing::Size(151, 75);
			this->buttonMINUS->TabIndex = 15;
			this->buttonMINUS->Text = L"-";
			this->buttonMINUS->UseVisualStyleBackColor = true;
			this->buttonMINUS->Click += gcnew System::EventHandler(this, &MyForm::buttonMINUS_Click);
			// 
			// buttonMULTIPLICATION
			// 
			this->buttonMULTIPLICATION->Font = (gcnew System::Drawing::Font(L"Unispace", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMULTIPLICATION->Location = System::Drawing::Point(169, 189);
			this->buttonMULTIPLICATION->MaximumSize = System::Drawing::Size(151, 75);
			this->buttonMULTIPLICATION->Name = L"buttonMULTIPLICATION";
			this->buttonMULTIPLICATION->Size = System::Drawing::Size(151, 75);
			this->buttonMULTIPLICATION->TabIndex = 16;
			this->buttonMULTIPLICATION->Text = L"*";
			this->buttonMULTIPLICATION->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonMULTIPLICATION->UseVisualStyleBackColor = true;
			this->buttonMULTIPLICATION->Click += gcnew System::EventHandler(this, &MyForm::buttonMULTIPLICATION_Click);
			// 
			// buttonDIVISION
			// 
			this->buttonDIVISION->Font = (gcnew System::Drawing::Font(L"Unispace", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDIVISION->Location = System::Drawing::Point(326, 189);
			this->buttonDIVISION->MaximumSize = System::Drawing::Size(151, 75);
			this->buttonDIVISION->Name = L"buttonDIVISION";
			this->buttonDIVISION->Size = System::Drawing::Size(151, 75);
			this->buttonDIVISION->TabIndex = 17;
			this->buttonDIVISION->Text = L"/";
			this->buttonDIVISION->UseVisualStyleBackColor = true;
			this->buttonDIVISION->Click += gcnew System::EventHandler(this, &MyForm::buttonDIVISION_Click);
			// 
			// buttonC
			// 
			this->buttonC->Font = (gcnew System::Drawing::Font(L"Unispace", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonC->Location = System::Drawing::Point(12, 108);
			this->buttonC->MaximumSize = System::Drawing::Size(151, 75);
			this->buttonC->Name = L"buttonC";
			this->buttonC->Size = System::Drawing::Size(151, 75);
			this->buttonC->TabIndex = 18;
			this->buttonC->Text = L"C";
			this->buttonC->UseVisualStyleBackColor = true;
			this->buttonC->Click += gcnew System::EventHandler(this, &MyForm::buttonC_Click);
			// 
			// buttonBACKSPACE
			// 
			this->buttonBACKSPACE->Font = (gcnew System::Drawing::Font(L"Unispace", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonBACKSPACE->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonBACKSPACE->Location = System::Drawing::Point(169, 108);
			this->buttonBACKSPACE->MaximumSize = System::Drawing::Size(151, 75);
			this->buttonBACKSPACE->Name = L"buttonBACKSPACE";
			this->buttonBACKSPACE->Size = System::Drawing::Size(151, 75);
			this->buttonBACKSPACE->TabIndex = 19;
			this->buttonBACKSPACE->Text = L"⌫";
			this->buttonBACKSPACE->UseVisualStyleBackColor = true;
			this->buttonBACKSPACE->Click += gcnew System::EventHandler(this, &MyForm::buttonBACKSPACE_Click);
			// 
			// buttonEXPONENTIATION
			// 
			this->buttonEXPONENTIATION->Font = (gcnew System::Drawing::Font(L"Unispace", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEXPONENTIATION->Location = System::Drawing::Point(326, 108);
			this->buttonEXPONENTIATION->MaximumSize = System::Drawing::Size(151, 75);
			this->buttonEXPONENTIATION->Name = L"buttonEXPONENTIATION";
			this->buttonEXPONENTIATION->Size = System::Drawing::Size(151, 75);
			this->buttonEXPONENTIATION->TabIndex = 20;
			this->buttonEXPONENTIATION->Text = L"^";
			this->buttonEXPONENTIATION->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonEXPONENTIATION->UseVisualStyleBackColor = true;
			this->buttonEXPONENTIATION->Click += gcnew System::EventHandler(this, &MyForm::buttonEXPONENTIATION_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Unispace", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 21);
			this->label1->MaximumSize = System::Drawing::Size(465, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(465, 70);
			this->label1->TabIndex = 22;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(489, 681);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonEXPONENTIATION);
			this->Controls->Add(this->buttonBACKSPACE);
			this->Controls->Add(this->buttonC);
			this->Controls->Add(this->buttonDIVISION);
			this->Controls->Add(this->buttonMULTIPLICATION);
			this->Controls->Add(this->buttonMINUS);
			this->Controls->Add(this->buttonRightBKT);
			this->Controls->Add(this->buttonLeftBKT);
			this->Controls->Add(this->buttonPLUS);
			this->Controls->Add(this->buttonNINE);
			this->Controls->Add(this->buttonEIGHT);
			this->Controls->Add(this->buttonSEVEN);
			this->Controls->Add(this->buttonSIX);
			this->Controls->Add(this->buttonFIVE);
			this->Controls->Add(this->buttonFOUR);
			this->Controls->Add(this->buttonTHREE);
			this->Controls->Add(this->buttonTWO);
			this->Controls->Add(this->buttonONE);
			this->Controls->Add(this->buttonEQUALLY);
			this->Controls->Add(this->buttonZERO);
			this->Controls->Add(this->buttonPOINT);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(505, 720);
			this->MinimumSize = System::Drawing::Size(320, 500);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор от Егорки";
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void buttonZERO_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonONE_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonTWO_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonTHREE_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonFOUR_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonFIVE_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonSIX_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonSEVEN_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonEIGHT_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonNINE_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonPOINT_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonLeftBKT_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonRightBKT_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonPLUS_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonMINUS_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonMULTIPLICATION_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonDIVISION_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonEXPONENTIATION_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonBACKSPACE_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonC_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonEQUALLY_Click(System::Object^ sender, System::EventArgs^ e);
};
}
