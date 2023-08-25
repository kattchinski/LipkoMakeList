#pragma once

namespace MyFirstWFORMs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;





	private: System::Windows::Forms::TextBox^ textBoxOutput;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::RichTextBox^ TextBoxTotal;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;




	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::ToolStripMenuItem^ resetToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ панельВводуToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBoxInput;
	private: System::Windows::Forms::Button^ buttonInput;
	private: System::Windows::Forms::RichTextBox^ textBoxFullList;






	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resetToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->панельВводуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBoxOutput = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->TextBoxTotal = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->textBoxInput = (gcnew System::Windows::Forms::TextBox());
			this->buttonInput = (gcnew System::Windows::Forms::Button());
			this->textBoxFullList = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Black;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->menuToolStripMenuItem,
					this->панельВводуToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1050, 26);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->BackColor = System::Drawing::Color::Transparent;
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->resetToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->menuToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(65, 22);
			this->menuToolStripMenuItem->Text = L"Меню";
			this->menuToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::menuToolStripMenuItem_Click);
			// 
			// resetToolStripMenuItem
			// 
			this->resetToolStripMenuItem->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->resetToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resetToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->resetToolStripMenuItem->Name = L"resetToolStripMenuItem";
			this->resetToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->resetToolStripMenuItem->Text = L"Сброс";
			this->resetToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::resetToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->BackColor = System::Drawing::Color::Black;
			this->exitToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->exitToolStripMenuItem->Text = L"Вийти";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// панельВводуToolStripMenuItem
			// 
			this->панельВводуToolStripMenuItem->BackColor = System::Drawing::Color::Black;
			this->панельВводуToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->панельВводуToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->панельВводуToolStripMenuItem->Name = L"панельВводуToolStripMenuItem";
			this->панельВводуToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->панельВводуToolStripMenuItem->Text = L"Панель вводу";
			this->панельВводуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::панельВводуToolStripMenuItem_Click_1);
			// 
			// textBoxOutput
			// 
			this->textBoxOutput->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBoxOutput->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxOutput->ForeColor = System::Drawing::SystemColors::Menu;
			this->textBoxOutput->Location = System::Drawing::Point(12, 182);
			this->textBoxOutput->Name = L"textBoxOutput";
			this->textBoxOutput->ReadOnly = true;
			this->textBoxOutput->Size = System::Drawing::Size(347, 36);
			this->textBoxOutput->TabIndex = 4;
			this->textBoxOutput->TabStop = false;
			this->textBoxOutput->Text = L"Пельмені Дитячі Кідс";
			this->textBoxOutput->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxOutput_TextChanged);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// TextBoxTotal
			// 
			this->TextBoxTotal->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->TextBoxTotal->Font = (gcnew System::Drawing::Font(L"Tahoma", 26.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TextBoxTotal->ForeColor = System::Drawing::SystemColors::Window;
			this->TextBoxTotal->Location = System::Drawing::Point(654, 29);
			this->TextBoxTotal->Name = L"TextBoxTotal";
			this->TextBoxTotal->ReadOnly = true;
			this->TextBoxTotal->Size = System::Drawing::Size(384, 48);
			this->TextBoxTotal->TabIndex = 6;
			this->TextBoxTotal->Text = L"Всього:0";
			this->TextBoxTotal->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBoxTotal_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::InfoText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(381, 182);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 58);
			this->button1->TabIndex = 7;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::InfoText;
			this->button6->Font = (gcnew System::Drawing::Font(L"Cambria", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(543, 246);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 58);
			this->button6->TabIndex = 8;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::InfoText;
			this->button5->Font = (gcnew System::Drawing::Font(L"Cambria", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(462, 246);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 58);
			this->button5->TabIndex = 9;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::InfoText;
			this->button4->Font = (gcnew System::Drawing::Font(L"Cambria", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(381, 246);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 58);
			this->button4->TabIndex = 10;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::InfoText;
			this->button3->Font = (gcnew System::Drawing::Font(L"Cambria", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(543, 182);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 58);
			this->button3->TabIndex = 11;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::InfoText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Cambria", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(462, 182);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 58);
			this->button2->TabIndex = 12;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::InfoText;
			this->button7->Font = (gcnew System::Drawing::Font(L"Cambria", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(381, 310);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 58);
			this->button7->TabIndex = 13;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::InfoText;
			this->button8->Font = (gcnew System::Drawing::Font(L"Cambria", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(462, 310);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 58);
			this->button8->TabIndex = 14;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::InfoText;
			this->button9->Font = (gcnew System::Drawing::Font(L"Cambria", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(543, 310);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 58);
			this->button9->TabIndex = 15;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::SystemColors::InfoText;
			this->button0->Font = (gcnew System::Drawing::Font(L"Cambria", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button0->Location = System::Drawing::Point(462, 374);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(75, 58);
			this->button0->TabIndex = 16;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// textBoxInput
			// 
			this->textBoxInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxInput->Location = System::Drawing::Point(208, 0);
			this->textBoxInput->Name = L"textBoxInput";
			this->textBoxInput->Size = System::Drawing::Size(236, 26);
			this->textBoxInput->TabIndex = 17;
			this->textBoxInput->Visible = false;
			this->textBoxInput->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxInput_TextChanged);
			// 
			// buttonInput
			// 
			this->buttonInput->BackColor = System::Drawing::Color::White;
			this->buttonInput->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonInput->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonInput->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonInput->Location = System::Drawing::Point(450, 0);
			this->buttonInput->Name = L"buttonInput";
			this->buttonInput->Size = System::Drawing::Size(33, 26);
			this->buttonInput->TabIndex = 18;
			this->buttonInput->Text = L"-->";
			this->buttonInput->UseVisualStyleBackColor = false;
			this->buttonInput->Visible = false;
			this->buttonInput->Click += gcnew System::EventHandler(this, &MyForm::buttonInput_Click);
			// 
			// textBoxFullList
			// 
			this->textBoxFullList->BackColor = System::Drawing::Color::Black;
			this->textBoxFullList->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxFullList->ForeColor = System::Drawing::Color::White;
			this->textBoxFullList->Location = System::Drawing::Point(654, 75);
			this->textBoxFullList->Name = L"textBoxFullList";
			this->textBoxFullList->Size = System::Drawing::Size(384, 519);
			this->textBoxFullList->TabIndex = 19;
			this->textBoxFullList->Text = L"";
			this->textBoxFullList->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxFullList_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1050, 621);
			this->Controls->Add(this->textBoxFullList);
			this->Controls->Add(this->buttonInput);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxInput);
			this->Controls->Add(this->textBoxOutput);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->TextBoxTotal);
			this->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void textBoxInput_TextChanged(System::Object^ sender, System::EventArgs^ e);	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void TextBoxTotal_TextChanged(System::Object^ sender, System::EventArgs^ e);


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void textBoxOutput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e);

	private: System::Void resetToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}//exit from the programm

	private: System::Void menuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void showToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void панельВводуToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e);

	private: System::Void buttonInput_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void textBoxFullList_TextChanged(System::Object^ sender, System::EventArgs^ e);

};
}
