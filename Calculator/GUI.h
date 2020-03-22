#pragma once
#include "CalcButton.h"
namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GUI
	/// </summary>

	//initialize object
	CalcButton b;
	CalcMemory m;

	public ref class GUI : public System::Windows::Forms::Form
	{
	public:
		GUI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ num0;
	private: System::Windows::Forms::Button^ dotBtn;
	protected:


	private: System::Windows::Forms::Button^ ansBtn;
	private: System::Windows::Forms::Button^ resBtn;
	private: System::Windows::Forms::Button^ subsBtn;
	private: System::Windows::Forms::Button^ plusBtn;




	private: System::Windows::Forms::Button^ num3;

	private: System::Windows::Forms::Button^ num2;
	private: System::Windows::Forms::Button^ num1;
	private: System::Windows::Forms::Button^ divBtn;



	private: System::Windows::Forms::Button^ multBtn;

	private: System::Windows::Forms::Button^ num6;
	private: System::Windows::Forms::Button^ num5;
	private: System::Windows::Forms::Button^ num4;
	private: System::Windows::Forms::Button^ mrBtn;




	private: System::Windows::Forms::Button^ mcBtn;

	private: System::Windows::Forms::Button^ num9;

	private: System::Windows::Forms::Button^ num8;
	private: System::Windows::Forms::Button^ num7;
	private: System::Windows::Forms::Button^ clearBtn;




	private: System::Windows::Forms::Button^ sqrtBtn;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ acBtn;
	private: System::Windows::Forms::Button^ delBtn;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->num0 = (gcnew System::Windows::Forms::Button());
			this->dotBtn = (gcnew System::Windows::Forms::Button());
			this->ansBtn = (gcnew System::Windows::Forms::Button());
			this->resBtn = (gcnew System::Windows::Forms::Button());
			this->subsBtn = (gcnew System::Windows::Forms::Button());
			this->plusBtn = (gcnew System::Windows::Forms::Button());
			this->num3 = (gcnew System::Windows::Forms::Button());
			this->num2 = (gcnew System::Windows::Forms::Button());
			this->num1 = (gcnew System::Windows::Forms::Button());
			this->divBtn = (gcnew System::Windows::Forms::Button());
			this->multBtn = (gcnew System::Windows::Forms::Button());
			this->num6 = (gcnew System::Windows::Forms::Button());
			this->num5 = (gcnew System::Windows::Forms::Button());
			this->num4 = (gcnew System::Windows::Forms::Button());
			this->mrBtn = (gcnew System::Windows::Forms::Button());
			this->mcBtn = (gcnew System::Windows::Forms::Button());
			this->num9 = (gcnew System::Windows::Forms::Button());
			this->num8 = (gcnew System::Windows::Forms::Button());
			this->num7 = (gcnew System::Windows::Forms::Button());
			this->clearBtn = (gcnew System::Windows::Forms::Button());
			this->sqrtBtn = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->acBtn = (gcnew System::Windows::Forms::Button());
			this->delBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// num0
			// 
			this->num0->Location = System::Drawing::Point(56, 286);
			this->num0->Name = L"num0";
			this->num0->Size = System::Drawing::Size(41, 40);
			this->num0->TabIndex = 0;
			this->num0->Text = L"0";
			this->num0->UseVisualStyleBackColor = true;
			this->num0->Click += gcnew System::EventHandler(this, &GUI::num0_Click);
			// 
			// dotBtn
			// 
			this->dotBtn->Location = System::Drawing::Point(103, 286);
			this->dotBtn->Name = L"dotBtn";
			this->dotBtn->Size = System::Drawing::Size(41, 40);
			this->dotBtn->TabIndex = 1;
			this->dotBtn->Text = L".";
			this->dotBtn->UseVisualStyleBackColor = true;
			this->dotBtn->Click += gcnew System::EventHandler(this, &GUI::dotBtn_Click);
			// 
			// ansBtn
			// 
			this->ansBtn->Location = System::Drawing::Point(9, 286);
			this->ansBtn->Name = L"ansBtn";
			this->ansBtn->Size = System::Drawing::Size(41, 40);
			this->ansBtn->TabIndex = 2;
			this->ansBtn->Text = L"Ans";
			this->ansBtn->UseVisualStyleBackColor = true;
			this->ansBtn->Click += gcnew System::EventHandler(this, &GUI::ansBtn_Click);
			// 
			// resBtn
			// 
			this->resBtn->Location = System::Drawing::Point(197, 286);
			this->resBtn->Name = L"resBtn";
			this->resBtn->Size = System::Drawing::Size(41, 40);
			this->resBtn->TabIndex = 4;
			this->resBtn->Text = L"=";
			this->resBtn->UseVisualStyleBackColor = true;
			this->resBtn->Click += gcnew System::EventHandler(this, &GUI::resBtn_Click);
			// 
			// subsBtn
			// 
			this->subsBtn->Location = System::Drawing::Point(197, 228);
			this->subsBtn->Name = L"subsBtn";
			this->subsBtn->Size = System::Drawing::Size(41, 40);
			this->subsBtn->TabIndex = 10;
			this->subsBtn->Text = L"-";
			this->subsBtn->UseVisualStyleBackColor = true;
			this->subsBtn->Click += gcnew System::EventHandler(this, &GUI::subsBtn_Click);
			// 
			// plusBtn
			// 
			this->plusBtn->Location = System::Drawing::Point(150, 228);
			this->plusBtn->Name = L"plusBtn";
			this->plusBtn->Size = System::Drawing::Size(41, 40);
			this->plusBtn->TabIndex = 9;
			this->plusBtn->Text = L"+";
			this->plusBtn->UseVisualStyleBackColor = true;
			this->plusBtn->Click += gcnew System::EventHandler(this, &GUI::plusBtn_Click);
			// 
			// num3
			// 
			this->num3->Location = System::Drawing::Point(103, 228);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(41, 40);
			this->num3->TabIndex = 8;
			this->num3->Text = L"3";
			this->num3->UseVisualStyleBackColor = true;
			this->num3->Click += gcnew System::EventHandler(this, &GUI::num3_Click);
			// 
			// num2
			// 
			this->num2->Location = System::Drawing::Point(56, 228);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(41, 40);
			this->num2->TabIndex = 7;
			this->num2->Text = L"2";
			this->num2->UseVisualStyleBackColor = true;
			this->num2->Click += gcnew System::EventHandler(this, &GUI::num2_Click);
			// 
			// num1
			// 
			this->num1->Location = System::Drawing::Point(9, 228);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(41, 40);
			this->num1->TabIndex = 6;
			this->num1->Text = L"1";
			this->num1->UseVisualStyleBackColor = true;
			this->num1->Click += gcnew System::EventHandler(this, &GUI::num1_Click);
			// 
			// divBtn
			// 
			this->divBtn->Location = System::Drawing::Point(197, 171);
			this->divBtn->Name = L"divBtn";
			this->divBtn->Size = System::Drawing::Size(41, 40);
			this->divBtn->TabIndex = 15;
			this->divBtn->Text = L"/";
			this->divBtn->UseVisualStyleBackColor = true;
			this->divBtn->Click += gcnew System::EventHandler(this, &GUI::divBtn_Click);
			// 
			// multBtn
			// 
			this->multBtn->Location = System::Drawing::Point(150, 171);
			this->multBtn->Name = L"multBtn";
			this->multBtn->Size = System::Drawing::Size(41, 40);
			this->multBtn->TabIndex = 14;
			this->multBtn->Text = L"X";
			this->multBtn->UseVisualStyleBackColor = true;
			this->multBtn->Click += gcnew System::EventHandler(this, &GUI::multBtn_Click);
			// 
			// num6
			// 
			this->num6->Location = System::Drawing::Point(103, 171);
			this->num6->Name = L"num6";
			this->num6->Size = System::Drawing::Size(41, 40);
			this->num6->TabIndex = 13;
			this->num6->Text = L"6";
			this->num6->UseVisualStyleBackColor = true;
			this->num6->Click += gcnew System::EventHandler(this, &GUI::num6_Click);
			// 
			// num5
			// 
			this->num5->Location = System::Drawing::Point(56, 171);
			this->num5->Name = L"num5";
			this->num5->Size = System::Drawing::Size(41, 40);
			this->num5->TabIndex = 12;
			this->num5->Text = L"5";
			this->num5->UseVisualStyleBackColor = true;
			this->num5->Click += gcnew System::EventHandler(this, &GUI::num5_Click);
			// 
			// num4
			// 
			this->num4->Location = System::Drawing::Point(9, 171);
			this->num4->Name = L"num4";
			this->num4->Size = System::Drawing::Size(41, 40);
			this->num4->TabIndex = 11;
			this->num4->Text = L"4";
			this->num4->UseVisualStyleBackColor = true;
			this->num4->Click += gcnew System::EventHandler(this, &GUI::num4_Click);
			// 
			// mrBtn
			// 
			this->mrBtn->Location = System::Drawing::Point(197, 116);
			this->mrBtn->Name = L"mrBtn";
			this->mrBtn->Size = System::Drawing::Size(41, 40);
			this->mrBtn->TabIndex = 20;
			this->mrBtn->Text = L"MR";
			this->mrBtn->UseVisualStyleBackColor = true;
			this->mrBtn->Click += gcnew System::EventHandler(this, &GUI::mrBtn_Click);
			// 
			// mcBtn
			// 
			this->mcBtn->Location = System::Drawing::Point(150, 116);
			this->mcBtn->Name = L"mcBtn";
			this->mcBtn->Size = System::Drawing::Size(41, 40);
			this->mcBtn->TabIndex = 19;
			this->mcBtn->Text = L"MC";
			this->mcBtn->UseVisualStyleBackColor = true;
			this->mcBtn->Click += gcnew System::EventHandler(this, &GUI::mcBtn_Click);
			// 
			// num9
			// 
			this->num9->Location = System::Drawing::Point(103, 116);
			this->num9->Name = L"num9";
			this->num9->Size = System::Drawing::Size(41, 40);
			this->num9->TabIndex = 18;
			this->num9->Text = L"9";
			this->num9->UseVisualStyleBackColor = true;
			this->num9->Click += gcnew System::EventHandler(this, &GUI::num9_Click);
			// 
			// num8
			// 
			this->num8->Location = System::Drawing::Point(56, 116);
			this->num8->Name = L"num8";
			this->num8->Size = System::Drawing::Size(41, 40);
			this->num8->TabIndex = 17;
			this->num8->Text = L"8";
			this->num8->UseVisualStyleBackColor = true;
			this->num8->Click += gcnew System::EventHandler(this, &GUI::num8_Click);
			// 
			// num7
			// 
			this->num7->Location = System::Drawing::Point(9, 116);
			this->num7->Name = L"num7";
			this->num7->Size = System::Drawing::Size(41, 40);
			this->num7->TabIndex = 16;
			this->num7->Text = L"7";
			this->num7->UseVisualStyleBackColor = true;
			this->num7->Click += gcnew System::EventHandler(this, &GUI::num7_Click);
			// 
			// clearBtn
			// 
			this->clearBtn->Location = System::Drawing::Point(150, 60);
			this->clearBtn->Name = L"clearBtn";
			this->clearBtn->Size = System::Drawing::Size(88, 40);
			this->clearBtn->TabIndex = 21;
			this->clearBtn->Text = L"Clear";
			this->clearBtn->UseVisualStyleBackColor = true;
			this->clearBtn->Click += gcnew System::EventHandler(this, &GUI::clearBtn_Click);
			// 
			// sqrtBtn
			// 
			this->sqrtBtn->Location = System::Drawing::Point(150, 286);
			this->sqrtBtn->Name = L"sqrtBtn";
			this->sqrtBtn->Size = System::Drawing::Size(41, 40);
			this->sqrtBtn->TabIndex = 23;
			this->sqrtBtn->Text = L"sqrt";
			this->sqrtBtn->UseVisualStyleBackColor = true;
			this->sqrtBtn->Click += gcnew System::EventHandler(this, &GUI::sqrtBtn_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox1->Location = System::Drawing::Point(9, 10);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(228, 38);
			this->textBox1->TabIndex = 24;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// acBtn
			// 
			this->acBtn->Location = System::Drawing::Point(9, 60);
			this->acBtn->Name = L"acBtn";
			this->acBtn->Size = System::Drawing::Size(41, 40);
			this->acBtn->TabIndex = 25;
			this->acBtn->Text = L"AC";
			this->acBtn->UseVisualStyleBackColor = true;
			this->acBtn->Click += gcnew System::EventHandler(this, &GUI::acBtn_Click);
			// 
			// delBtn
			// 
			this->delBtn->Location = System::Drawing::Point(56, 60);
			this->delBtn->Name = L"delBtn";
			this->delBtn->Size = System::Drawing::Size(41, 40);
			this->delBtn->TabIndex = 26;
			this->delBtn->Text = L"Del";
			this->delBtn->UseVisualStyleBackColor = true;
			this->delBtn->Click += gcnew System::EventHandler(this, &GUI::delBtn_Click);
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(247, 350);
			this->Controls->Add(this->delBtn);
			this->Controls->Add(this->acBtn);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->sqrtBtn);
			this->Controls->Add(this->clearBtn);
			this->Controls->Add(this->mrBtn);
			this->Controls->Add(this->mcBtn);
			this->Controls->Add(this->num9);
			this->Controls->Add(this->num8);
			this->Controls->Add(this->num7);
			this->Controls->Add(this->divBtn);
			this->Controls->Add(this->multBtn);
			this->Controls->Add(this->num6);
			this->Controls->Add(this->num5);
			this->Controls->Add(this->num4);
			this->Controls->Add(this->subsBtn);
			this->Controls->Add(this->plusBtn);
			this->Controls->Add(this->num3);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->resBtn);
			this->Controls->Add(this->ansBtn);
			this->Controls->Add(this->dotBtn);
			this->Controls->Add(this->num0);
			this->Name = L"GUI";
			this->Text = L"GUI";
			this->Load += gcnew System::EventHandler(this, &GUI::GUI_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void num0_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "0";
		b.processNum("0");
	}
	private: System::Void num1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "1";
		b.processNum("1");
	}
	private: System::Void num2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "2";
		b.processNum("2");
	}
	private: System::Void num3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "3";
		b.processNum("3");
	}
	private: System::Void num4_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "4";
		b.processNum("4");
	}
	private: System::Void num5_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "5";
		b.processNum("5");
	}
	private: System::Void num6_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "6";
		b.processNum("6");
	}
	private: System::Void num7_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "7";
		b.processNum("7");
	}
	private: System::Void num8_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "8";
		b.processNum("8");
	}
	private: System::Void num9_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "9";
		b.processNum("9");
	}
	private: System::Void ansBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "Ans";
		b.processAns();
	}
	private: System::Void multBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "x";
		b.processOprNDot("x");
	}
	private: System::Void divBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "/";
		b.processOprNDot(":");
	}
	private: System::Void plusBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "+";
		b.processOprNDot("+");
	}
	private: System::Void subsBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "-";
		b.processOprNDot("-");
	}
	private: System::Void dotBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += ".";
		b.processOprNDot(".");
	}
	private: System::Void sqrtBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "s";
		b.processOprNDot("s");
	}

	private: System::Void GUI_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void clearBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		b.processClear();
	}
	private: System::Void mcBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		b.processMC();
	}
	private: System::Void mrBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		b.processMR();
		textBox1->Text += gcnew String(m.getLastMR().c_str());
		if (m.isQEmpty()) m.setLastMR("");
	}
	private: System::Void resBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		b.processRes();
		textBox1->Text = gcnew String(m.getStr().c_str());
	}
	private: System::Void acBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		b.processAC();
		textBox1->Text = gcnew String(m.getStr().c_str());
	}
	private: System::Void delBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length > 0) {
			b.processDel();
			textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1);
			//not finished
		}
	}
};
}
