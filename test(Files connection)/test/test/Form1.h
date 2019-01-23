#pragma once


namespace test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Form1 ���K�n
	///
	/// ĵ�i: �p�G�z�ܧ�o�����O���W�١A�N�����ܧ�P�o�����O�Ҩ̾ڤ��Ҧ� .resx �ɮ����p��
	///          Managed �귽�sĶ���u�㪺 'Resource File Name' �ݩʡC
	///          �_�h�A�o�ǳ]�p�u��
	///          �N�L�k�P�o�Ӫ�����p����a�y�t�Ƹ귽
	///          ���T���ʡC
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �b���[�J�غc�禡�{���X
			//
		}

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog2;

	private:
		/// <summary>
		/// �]�p�u��һݪ��ܼơC
		String ^file1,^file2;
		int datalength;
		array <int> ^data1;
		array <int> ^data2;
		array <String^> ^a1;
		array <String^> ^a2;
		array <String^> ^total;
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边�ק�o�Ӥ�k�����e�C
		///
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"�s�ө���", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(45, 34);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"OpenFile1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"�s�ө���", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(209, 33);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 33);
			this->button2->TabIndex = 1;
			this->button2->Text = L"OpenFile2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"�s�ө���", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button3->Location = System::Drawing::Point(381, 33);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 33);
			this->button3->TabIndex = 2;
			this->button3->Text = L"�ۭ������G";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(45, 95);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(100, 264);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(209, 95);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(100, 264);
			this->richTextBox2->TabIndex = 4;
			this->richTextBox2->Text = L"";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(381, 95);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(100, 264);
			this->textBox1->TabIndex = 5;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(538, 467);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(openFileDialog1->ShowDialog()==System::Windows::Forms::DialogResult::OK)
				 {
					 file1=openFileDialog1->FileName;
					 richTextBox1->LoadFile(file1,RichTextBoxStreamType::PlainText);
					 StreamReader ^sr=gcnew StreamReader(file1,System::Text::Encoding::Default);
					 datalength=0;
					 data1=gcnew array <int> (10);
					 while(a1->Peek()!=-1)
					 {
						 data1[datalength]=Convert::ToInt32(a1->ReadLine());
						 datalength++;
					 }
				 }
				 

			 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 openFileDialog1->Filter="�¤�r(*.txt)|*.txt";
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(openFileDialog2->ShowDialog()==System::Windows::Forms::DialogResult::OK)
			 {
				 file2=openFileDialog2->FileName;
				 richTextBox2->LoadFile(file2,RichTextBoxStreamType::PlainText);
				 StreamReader ^sr=gcnew StreamReader(file2,System::Text::Encoding::Default);
				 datalength=0;
				 data2=gcnew array <int> (10);
				 while(a2->Peek()!=-1)
				 {
					 data2[datalength]=Convert::ToInt32(a2->ReadLine());
					 datalength++;
				 }
			 }
			 
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 total=gcnew array <String^> (10);
			 for(int i=0;i<datalength;i++)
			 {
				 total[i]=(data1[i]*data2[i]).ToString();
				 textBox1->Text=textBox1->Text+Convert::ToString(total[i])+System::Environment::NewLine;
			 }
		 }
};
}

