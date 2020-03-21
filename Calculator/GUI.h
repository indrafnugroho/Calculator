#pragma once

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Label^ label1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(59, 404);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(41, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"0";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GUI::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(106, 404);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(41, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L".";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(153, 404);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(41, 40);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Ans";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(200, 404);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(41, 40);
			this->button5->TabIndex = 4;
			this->button5->Text = L"=";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(200, 349);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(41, 40);
			this->button7->TabIndex = 10;
			this->button7->Text = L"-";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(153, 349);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(41, 40);
			this->button8->TabIndex = 9;
			this->button8->Text = L"+";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(106, 349);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(41, 40);
			this->button9->TabIndex = 8;
			this->button9->Text = L"3";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(59, 349);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(41, 40);
			this->button10->TabIndex = 7;
			this->button10->Text = L"2";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(12, 349);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(41, 40);
			this->button11->TabIndex = 6;
			this->button11->Text = L"1";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(200, 289);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(41, 40);
			this->button6->TabIndex = 15;
			this->button6->Text = L"/";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(153, 289);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(41, 40);
			this->button12->TabIndex = 14;
			this->button12->Text = L"X";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(106, 289);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(41, 40);
			this->button13->TabIndex = 13;
			this->button13->Text = L"6";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(59, 289);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(41, 40);
			this->button14->TabIndex = 12;
			this->button14->Text = L"5";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(12, 289);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(41, 40);
			this->button15->TabIndex = 11;
			this->button15->Text = L"4";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(200, 224);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(41, 40);
			this->button4->TabIndex = 20;
			this->button4->Text = L"MR";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(153, 224);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(41, 40);
			this->button16->TabIndex = 19;
			this->button16->Text = L"MC";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(106, 224);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(41, 40);
			this->button17->TabIndex = 18;
			this->button17->Text = L"9";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(59, 224);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(41, 40);
			this->button18->TabIndex = 17;
			this->button18->Text = L"8";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(12, 224);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(41, 40);
			this->button19->TabIndex = 16;
			this->button19->Text = L"7";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(12, 404);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(41, 40);
			this->button20->TabIndex = 21;
			this->button20->Text = L"Clear";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(9, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(229, 31);
			this->label1->TabIndex = 22;
			this->label1->Text = L"CONTOH LAYAR";
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(249, 456);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"GUI";
			this->Text = L"GUI";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
