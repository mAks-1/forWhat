#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include <cstdlib>

#include "MyForm1.h"

namespace forWhat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
			InitializeMatrixA();
		}

	private: void InitializeMatrixA()
	{
		matrixA->RowCount = 3;
		matrixA->ColumnCount = 3;

		matrixB->RowCount = 3;
		matrixB->ColumnCount = 3;

		/*for (int i = 0; i < 3; i++)
		{
			// ������������ ������ �������
			//matrixA->Columns[i]->Width = 55; 
			//matrixB->Columns[i]->Width = 55;

		}*/
	}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ matrixA;
	private: System::Windows::Forms::DataGridView^ matrixB;
	private: System::Windows::Forms::TextBox^ colA;
	private: System::Windows::Forms::TextBox^ colB;
	private: System::Windows::Forms::TextBox^ rowsB;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::TextBox^ rowsA;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ fillA;
	private: System::Windows::Forms::Button^ fillB;
	private: System::Windows::Forms::Button^ swap;

	private: System::Windows::Forms::Button^ clearB;

	private: System::Windows::Forms::Button^ clearA;

	private: System::Windows::Forms::Button^ toPower;

	private: System::Windows::Forms::Button^ multiplyByNum;

	private: System::Windows::Forms::Button^ inverse;

	private: System::Windows::Forms::Button^ transpose;

	private: System::Windows::Forms::Button^ rang;

	private: System::Windows::Forms::Button^ determinant;
	private: System::Windows::Forms::TextBox^ toPowerNum;

	private: System::Windows::Forms::TextBox^ mulNum;
	private: System::Windows::Forms::Button^ addition;

	private: System::Windows::Forms::Button^ multiply;

	private: System::Windows::Forms::Button^ sub;
	private: System::Windows::Forms::Button^ random;
	private: System::Windows::Forms::Button^ instruction;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->matrixA = (gcnew System::Windows::Forms::DataGridView());
			this->matrixB = (gcnew System::Windows::Forms::DataGridView());
			this->colA = (gcnew System::Windows::Forms::TextBox());
			this->colB = (gcnew System::Windows::Forms::TextBox());
			this->rowsB = (gcnew System::Windows::Forms::TextBox());
			this->rowsA = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->fillA = (gcnew System::Windows::Forms::Button());
			this->fillB = (gcnew System::Windows::Forms::Button());
			this->swap = (gcnew System::Windows::Forms::Button());
			this->clearB = (gcnew System::Windows::Forms::Button());
			this->clearA = (gcnew System::Windows::Forms::Button());
			this->toPower = (gcnew System::Windows::Forms::Button());
			this->multiplyByNum = (gcnew System::Windows::Forms::Button());
			this->inverse = (gcnew System::Windows::Forms::Button());
			this->transpose = (gcnew System::Windows::Forms::Button());
			this->rang = (gcnew System::Windows::Forms::Button());
			this->determinant = (gcnew System::Windows::Forms::Button());
			this->toPowerNum = (gcnew System::Windows::Forms::TextBox());
			this->mulNum = (gcnew System::Windows::Forms::TextBox());
			this->addition = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->sub = (gcnew System::Windows::Forms::Button());
			this->random = (gcnew System::Windows::Forms::Button());
			this->instruction = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixB))->BeginInit();
			this->SuspendLayout();
			// 
			// matrixA
			// 
			this->matrixA->AllowUserToAddRows = false;
			this->matrixA->AllowUserToDeleteRows = false;
			this->matrixA->AllowUserToResizeColumns = false;
			this->matrixA->AllowUserToResizeRows = false;
			this->matrixA->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->matrixA->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->matrixA->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->matrixA->ColumnHeadersVisible = false;
			this->matrixA->EnableHeadersVisualStyles = false;
			this->matrixA->Location = System::Drawing::Point(12, 12);
			this->matrixA->Name = L"matrixA";
			this->matrixA->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->matrixA->RowHeadersVisible = false;
			this->matrixA->RowHeadersWidth = 51;
			this->matrixA->RowTemplate->Height = 28;
			this->matrixA->Size = System::Drawing::Size(751, 242);
			this->matrixA->TabIndex = 0;
			// 
			// matrixB
			// 
			this->matrixB->AllowUserToAddRows = false;
			this->matrixB->AllowUserToDeleteRows = false;
			this->matrixB->AllowUserToResizeColumns = false;
			this->matrixB->AllowUserToResizeRows = false;
			this->matrixB->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->matrixB->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->matrixB->ColumnHeadersVisible = false;
			this->matrixB->Location = System::Drawing::Point(12, 417);
			this->matrixB->Name = L"matrixB";
			this->matrixB->RowHeadersVisible = false;
			this->matrixB->RowHeadersWidth = 51;
			this->matrixB->RowTemplate->Height = 28;
			this->matrixB->Size = System::Drawing::Size(751, 242);
			this->matrixB->TabIndex = 1;
			// 
			// colA
			// 
			this->colA->Location = System::Drawing::Point(84, 324);
			this->colA->Name = L"colA";
			this->colA->Size = System::Drawing::Size(81, 22);
			this->colA->TabIndex = 2;
			// 
			// colB
			// 
			this->colB->Location = System::Drawing::Point(84, 730);
			this->colB->Name = L"colB";
			this->colB->Size = System::Drawing::Size(81, 22);
			this->colB->TabIndex = 3;
			// 
			// rowsB
			// 
			this->rowsB->Location = System::Drawing::Point(378, 730);
			this->rowsB->Name = L"rowsB";
			this->rowsB->Size = System::Drawing::Size(81, 22);
			this->rowsB->TabIndex = 4;
			// 
			// rowsA
			// 
			this->rowsA->Location = System::Drawing::Point(378, 324);
			this->rowsA->Name = L"rowsA";
			this->rowsA->Size = System::Drawing::Size(81, 22);
			this->rowsA->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(20, 279);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(255, 25);
			this->label1->TabIndex = 6;
			this->label1->Text = L"������ ������� ��������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(309, 279);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(233, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"������ ������� �����";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(18, 683);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(255, 25);
			this->label3->TabIndex = 8;
			this->label3->Text = L"������ ������� ��������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(309, 683);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(233, 25);
			this->label4->TabIndex = 9;
			this->label4->Text = L"������ ������� �����";
			// 
			// fillA
			// 
			this->fillA->Cursor = System::Windows::Forms::Cursors::Hand;
			this->fillA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fillA->Location = System::Drawing::Point(578, 278);
			this->fillA->Name = L"fillA";
			this->fillA->Size = System::Drawing::Size(185, 87);
			this->fillA->TabIndex = 10;
			this->fillA->Text = L"������ ��������� ������� �";
			this->fillA->UseVisualStyleBackColor = true;
			this->fillA->Click += gcnew System::EventHandler(this, &MyForm::fillA_Click);
			// 
			// fillB
			// 
			this->fillB->Cursor = System::Windows::Forms::Cursors::Hand;
			this->fillB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fillB->Location = System::Drawing::Point(578, 683);
			this->fillB->Name = L"fillB";
			this->fillB->Size = System::Drawing::Size(185, 91);
			this->fillB->TabIndex = 11;
			this->fillB->Text = L"������ ��������� ������� �";
			this->fillB->UseVisualStyleBackColor = true;
			this->fillB->Click += gcnew System::EventHandler(this, &MyForm::fillB_Click);
			// 
			// swap
			// 
			this->swap->Cursor = System::Windows::Forms::Cursors::Hand;
			this->swap->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->swap->Location = System::Drawing::Point(876, 300);
			this->swap->Name = L"swap";
			this->swap->Size = System::Drawing::Size(379, 67);
			this->swap->TabIndex = 12;
			this->swap->Text = L"������� ������� ������";
			this->swap->UseVisualStyleBackColor = true;
			this->swap->Click += gcnew System::EventHandler(this, &MyForm::swap_Click);
			// 
			// clearB
			// 
			this->clearB->Cursor = System::Windows::Forms::Cursors::Hand;
			this->clearB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clearB->Location = System::Drawing::Point(797, 592);
			this->clearB->Name = L"clearB";
			this->clearB->Size = System::Drawing::Size(159, 67);
			this->clearB->TabIndex = 13;
			this->clearB->Text = L"�������� �������";
			this->clearB->UseVisualStyleBackColor = true;
			this->clearB->Click += gcnew System::EventHandler(this, &MyForm::clearB_Click);
			// 
			// clearA
			// 
			this->clearA->Cursor = System::Windows::Forms::Cursors::Hand;
			this->clearA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clearA->Location = System::Drawing::Point(797, 187);
			this->clearA->Name = L"clearA";
			this->clearA->Size = System::Drawing::Size(156, 67);
			this->clearA->TabIndex = 14;
			this->clearA->Text = L"�������� ������� ";
			this->clearA->UseVisualStyleBackColor = true;
			this->clearA->Click += gcnew System::EventHandler(this, &MyForm::clearA_Click);
			// 
			// toPower
			// 
			this->toPower->Cursor = System::Windows::Forms::Cursors::Hand;
			this->toPower->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toPower->Location = System::Drawing::Point(1145, 96);
			this->toPower->Name = L"toPower";
			this->toPower->Size = System::Drawing::Size(146, 69);
			this->toPower->TabIndex = 15;
			this->toPower->Text = L"ϳ������ �� �������";
			this->toPower->UseVisualStyleBackColor = true;
			this->toPower->Click += gcnew System::EventHandler(this, &MyForm::toPower_Click);
			// 
			// multiplyByNum
			// 
			this->multiplyByNum->Cursor = System::Windows::Forms::Cursors::Hand;
			this->multiplyByNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->multiplyByNum->Location = System::Drawing::Point(978, 96);
			this->multiplyByNum->Name = L"multiplyByNum";
			this->multiplyByNum->Size = System::Drawing::Size(142, 41);
			this->multiplyByNum->TabIndex = 16;
			this->multiplyByNum->Text = L"��������� ��";
			this->multiplyByNum->UseVisualStyleBackColor = true;
			this->multiplyByNum->Click += gcnew System::EventHandler(this, &MyForm::multiplyByNum_Click);
			// 
			// inverse
			// 
			this->inverse->Cursor = System::Windows::Forms::Cursors::Hand;
			this->inverse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->inverse->Location = System::Drawing::Point(797, 97);
			this->inverse->Name = L"inverse";
			this->inverse->Size = System::Drawing::Size(156, 67);
			this->inverse->TabIndex = 17;
			this->inverse->Text = L"������ ��������";
			this->inverse->UseVisualStyleBackColor = true;
			this->inverse->Click += gcnew System::EventHandler(this, &MyForm::inverse_Click);
			// 
			// transpose
			// 
			this->transpose->Cursor = System::Windows::Forms::Cursors::Hand;
			this->transpose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->transpose->Location = System::Drawing::Point(1145, 11);
			this->transpose->Name = L"transpose";
			this->transpose->Size = System::Drawing::Size(146, 67);
			this->transpose->TabIndex = 18;
			this->transpose->Text = L"�������������";
			this->transpose->UseVisualStyleBackColor = true;
			this->transpose->Click += gcnew System::EventHandler(this, &MyForm::transpose_Click);
			// 
			// rang
			// 
			this->rang->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rang->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rang->Location = System::Drawing::Point(978, 12);
			this->rang->Name = L"rang";
			this->rang->Size = System::Drawing::Size(142, 67);
			this->rang->TabIndex = 19;
			this->rang->Text = L"������ ����";
			this->rang->UseVisualStyleBackColor = true;
			this->rang->Click += gcnew System::EventHandler(this, &MyForm::rang_Click);
			// 
			// determinant
			// 
			this->determinant->Cursor = System::Windows::Forms::Cursors::Hand;
			this->determinant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->determinant->Location = System::Drawing::Point(797, 12);
			this->determinant->Name = L"determinant";
			this->determinant->Size = System::Drawing::Size(156, 67);
			this->determinant->TabIndex = 20;
			this->determinant->Text = L"������ ���������";
			this->determinant->UseVisualStyleBackColor = true;
			this->determinant->Click += gcnew System::EventHandler(this, &MyForm::determinant_Click);
			// 
			// toPowerNum
			// 
			this->toPowerNum->Location = System::Drawing::Point(1174, 171);
			this->toPowerNum->Name = L"toPowerNum";
			this->toPowerNum->Size = System::Drawing::Size(81, 22);
			this->toPowerNum->TabIndex = 21;
			// 
			// mulNum
			// 
			this->mulNum->Location = System::Drawing::Point(1010, 143);
			this->mulNum->MinimumSize = System::Drawing::Size(4, 20);
			this->mulNum->Name = L"mulNum";
			this->mulNum->Size = System::Drawing::Size(81, 22);
			this->mulNum->TabIndex = 22;
			// 
			// addition
			// 
			this->addition->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addition->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addition->Location = System::Drawing::Point(876, 388);
			this->addition->Name = L"addition";
			this->addition->Size = System::Drawing::Size(110, 59);
			this->addition->TabIndex = 23;
			this->addition->Text = L"� + �";
			this->addition->UseVisualStyleBackColor = true;
			this->addition->Click += gcnew System::EventHandler(this, &MyForm::addition_Click);
			// 
			// multiply
			// 
			this->multiply->Cursor = System::Windows::Forms::Cursors::Hand;
			this->multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->multiply->Location = System::Drawing::Point(1145, 388);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(110, 59);
			this->multiply->TabIndex = 25;
			this->multiply->Text = L"� * �";
			this->multiply->UseVisualStyleBackColor = true;
			this->multiply->Click += gcnew System::EventHandler(this, &MyForm::multiply_Click);
			// 
			// sub
			// 
			this->sub->Cursor = System::Windows::Forms::Cursors::Hand;
			this->sub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sub->Location = System::Drawing::Point(1010, 388);
			this->sub->Name = L"sub";
			this->sub->Size = System::Drawing::Size(110, 59);
			this->sub->TabIndex = 26;
			this->sub->Text = L"� - �";
			this->sub->UseVisualStyleBackColor = true;
			this->sub->Click += gcnew System::EventHandler(this, &MyForm::sub_Click);
			// 
			// random
			// 
			this->random->Cursor = System::Windows::Forms::Cursors::Hand;
			this->random->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->random->Location = System::Drawing::Point(978, 187);
			this->random->Name = L"random";
			this->random->Size = System::Drawing::Size(156, 67);
			this->random->TabIndex = 27;
			this->random->Text = L"�������� ��������";
			this->random->UseVisualStyleBackColor = true;
			this->random->Click += gcnew System::EventHandler(this, &MyForm::random_Click);
			// 
			// instruction
			// 
			this->instruction->Cursor = System::Windows::Forms::Cursors::Hand;
			this->instruction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->instruction->Location = System::Drawing::Point(1010, 695);
			this->instruction->Name = L"instruction";
			this->instruction->Size = System::Drawing::Size(253, 79);
			this->instruction->TabIndex = 28;
			this->instruction->Text = L"����������";
			this->instruction->UseVisualStyleBackColor = true;
			this->instruction->Click += gcnew System::EventHandler(this, &MyForm::instruction_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1309, 790);
			this->Controls->Add(this->instruction);
			this->Controls->Add(this->random);
			this->Controls->Add(this->sub);
			this->Controls->Add(this->multiply);
			this->Controls->Add(this->addition);
			this->Controls->Add(this->mulNum);
			this->Controls->Add(this->toPowerNum);
			this->Controls->Add(this->determinant);
			this->Controls->Add(this->rang);
			this->Controls->Add(this->transpose);
			this->Controls->Add(this->inverse);
			this->Controls->Add(this->multiplyByNum);
			this->Controls->Add(this->toPower);
			this->Controls->Add(this->clearA);
			this->Controls->Add(this->clearB);
			this->Controls->Add(this->swap);
			this->Controls->Add(this->fillB);
			this->Controls->Add(this->fillA);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->rowsA);
			this->Controls->Add(this->rowsB);
			this->Controls->Add(this->colB);
			this->Controls->Add(this->colA);
			this->Controls->Add(this->matrixB);
			this->Controls->Add(this->matrixA);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Matrix calculator";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixB))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// ������� ��� ���������� ����� � ����
		void WriteResultToFile(String^ resultString) {
			// ���������� System::String^ � std::string
			std::string resultStdString = msclr::interop::marshal_as<std::string>(resultString);

			// �������� ��������� � ���� results.txt
			try {
				// ������������� fstream ��� ������ � ����
				std::ofstream outFile("results.txt", std::ios::app);
				if (outFile.is_open()) {
					outFile << resultStdString << std::endl;
					outFile.close();
					//MessageBox::Show("The result has been written to results.txt", "Addition Result");
				}
				else {
					MessageBox::Show("��������� ������� ����.", "Error");
				}
			}
			catch (const std::exception& ex) {
				MessageBox::Show("������� ������ �� �����: " + gcnew String(ex.what()), "Error");
			}
		}

		// ������� ��� �������� �������
		void clear(DataGridView^ matrix) {
			for (int i = 0; i < matrix->Rows->Count; i++) {
				for (int j = 0; j < matrix->Columns->Count; j++) {
					matrix->Rows[i]->Cells[j]->Value = 0; // �������� �������� ������
				}
			}
		}

		// ���������� ������� �
		private: System::Void fillA_Click(System::Object^ sender, System::EventArgs^ e) {
			// ���������� ������� � ��������� ����
			int columns = Int32::Parse(colA->Text);
			int rows = Int32::Parse(rowsA->Text);

			// ��������� ��������
			matrixA->ColumnCount = columns;

			// ��������� �����
			matrixA->RowCount = rows;
		}

		// ���������� ������� �
		private: System::Void fillB_Click(System::Object^ sender, System::EventArgs^ e) {
			// ���������� ������� � ��������� ����
			int columns = Int32::Parse(colB->Text);
			int rows = Int32::Parse(rowsB->Text);

			// ��������� ��������
			matrixB->ColumnCount = columns;

			// ��������� �����
			matrixB->RowCount = rows;
		}

		// �������� ������� �
		private: System::Void clearA_Click(System::Object^ sender, System::EventArgs^ e) {
			clear(matrixA);
		}

		// �������� ������� �
		private: System::Void clearB_Click(System::Object^ sender, System::EventArgs^ e) {
			clear(matrixB);
		}

		// ��������� �������
		private: System::Void addition_Click(System::Object^ sender, System::EventArgs^ e) {
			// ��������, �� ������� ����� ��������� �����
			if (matrixA->RowCount != matrixB->RowCount || matrixA->ColumnCount != matrixB->ColumnCount) {
				MessageBox::Show("������� ����� ����� �����. ��������� ���������.", "�������", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// ��������� ������� ��� ���������� ����������
			DataGridView^ resultMatrix = gcnew DataGridView();
			resultMatrix->RowCount = matrixA->RowCount;
			resultMatrix->ColumnCount = matrixA->ColumnCount;

			// ��������� ��������� �������� ���� ������� �� ���������� ����������
			for (int i = 0; i < resultMatrix->RowCount; i++) {
				for (int j = 0; j < resultMatrix->ColumnCount; j++) {
					double valueA = Convert::ToDouble(matrixA->Rows[i]->Cells[j]->Value);
					double valueB = Convert::ToDouble(matrixB->Rows[i]->Cells[j]->Value);
					resultMatrix->Rows[i]->Cells[j]->Value = (valueA + valueB).ToString("F2");
				}
			}

			// �������� ����� ��� ����������� ���������� � MessageBox
			String^ resultString = "��������� ��������� �������:\n";
			for (int i = 0; i < resultMatrix->RowCount; i++) {
				for (int j = 0; j < resultMatrix->ColumnCount; j++) {
					resultString += resultMatrix->Rows[i]->Cells[j]->Value->ToString() + "\t";
				}
				resultString += "\n";
			}

			// ³���������� ���������� � MessageBox
			MessageBox::Show(resultString, "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
			WriteResultToFile(resultString);
		}

		// �������� �������
		private: System::Void sub_Click(System::Object^ sender, System::EventArgs^ e) {
			// ��������, �� ������� ����� ��������� �����
			if (matrixA->RowCount != matrixB->RowCount || matrixA->ColumnCount != matrixB->ColumnCount) {
				MessageBox::Show("������� ����� ����� �����. ��������� ���������.", "�������", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// ��������� ������� ��� ���������� ����������
			DataGridView^ resultMatrix = gcnew DataGridView();
			resultMatrix->RowCount = matrixA->RowCount;
			resultMatrix->ColumnCount = matrixA->ColumnCount;

			// ��������� ��������� �������� ���� ������� �� ���������� ����������
			for (int i = 0; i < resultMatrix->RowCount; i++) {
				for (int j = 0; j < resultMatrix->ColumnCount; j++) {
					double valueA = Convert::ToDouble(matrixA->Rows[i]->Cells[j]->Value);
					double valueB = Convert::ToDouble(matrixB->Rows[i]->Cells[j]->Value);
					resultMatrix->Rows[i]->Cells[j]->Value = (valueA - valueB).ToString();
				}
			}

			// �������� ����� ��� ����������� ���������� � MessageBox
			String^ resultString = "��������� �������� �������:\n";
			for (int i = 0; i < resultMatrix->RowCount; i++) {
				for (int j = 0; j < resultMatrix->ColumnCount; j++) {
					resultString += resultMatrix->Rows[i]->Cells[j]->Value->ToString() + "\t";
				}
				resultString += "\n";
			}

			// ³���������� ���������� � MessageBox
			MessageBox::Show(resultString, "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
			WriteResultToFile(resultString);

		}

		// �������� �������
		private: System::Void multiply_Click(System::Object^ sender, System::EventArgs^ e) {
			// ��������, �� ����� �������� �������� �������
			if (matrixA->ColumnCount != matrixB->RowCount) {
				MessageBox::Show("��������� �������� �������� �������. ʳ������ �������� ������� A �� ���� ���� ������� ����� ������� B.", "�������", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// ��������� ������� ��� ���������� ����������
			DataGridView^ resultMatrix = gcnew DataGridView();
			resultMatrix->RowCount = matrixA->RowCount;
			resultMatrix->ColumnCount = matrixB->ColumnCount;

			// ���������� �������� ����������� �������
			for (int i = 0; i < resultMatrix->RowCount; i++) {
				for (int j = 0; j < resultMatrix->ColumnCount; j++) {
					double sum = 0.0;
					for (int k = 0; k < matrixA->ColumnCount; k++) {
						double valueA = Convert::ToDouble(matrixA->Rows[i]->Cells[k]->Value);
						double valueB = Convert::ToDouble(matrixB->Rows[k]->Cells[j]->Value);
						sum += valueA * valueB;
					}
					resultMatrix->Rows[i]->Cells[j]->Value = sum.ToString("F2");
				}
			}

			// �������� ����� ��� ����������� ���������� � MessageBox
			String^ resultString = "��������� �������� �������:\n";
			for (int i = 0; i < resultMatrix->RowCount; i++) {
				for (int j = 0; j < resultMatrix->ColumnCount; j++) {
					resultString += resultMatrix->Rows[i]->Cells[j]->Value->ToString() + "\t";
				}
				resultString += "\n";
			}

			// ³���������� ���������� � MessageBox
			MessageBox::Show(resultString, "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
			WriteResultToFile(resultString);
		}

		// ����� ������� ������
		private: System::Void swap_Click(System::Object^ sender, System::EventArgs^ e) {

			// ��������, �� ����� ����� �������
			if (matrixA->RowCount == 0 || matrixA->ColumnCount == 0 || matrixB->RowCount == 0 || matrixB->ColumnCount == 0) {
				MessageBox::Show("���� ��� ����� ������� �� �����. ��������� �������� ����.", "�������", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// ��������� ��������� ������� ��� ���������� ������� ����� �������
			DataGridView^ tempMatrix = gcnew DataGridView();
			tempMatrix->RowCount = matrixA->RowCount;
			tempMatrix->ColumnCount = matrixA->ColumnCount;

			// ���������� ������� ����� ������� � ��������� �������
			for (int i = 0; i < tempMatrix->RowCount; i++) {
				for (int j = 0; j < tempMatrix->ColumnCount; j++) {
					tempMatrix->Rows[i]->Cells[j]->Value = matrixA->Rows[i]->Cells[j]->Value;
				}
			}

			// ����������� ������� ����� ������� � �����
			matrixA->RowCount = matrixB->RowCount;
			matrixA->ColumnCount = matrixB->ColumnCount;
			for (int i = 0; i < matrixA->RowCount; i++) {
				for (int j = 0; j < matrixA->ColumnCount; j++) {
					matrixA->Rows[i]->Cells[j]->Value = matrixB->Rows[i]->Cells[j]->Value;
				}
			}

			// ����������� ������� ��������� ������� � ����� �������
			matrixB->RowCount = tempMatrix->RowCount;
			matrixB->ColumnCount = tempMatrix->ColumnCount;
			for (int i = 0; i < matrixB->RowCount; i++) {
				for (int j = 0; j < matrixB->ColumnCount; j++) {
					matrixB->Rows[i]->Cells[j]->Value = tempMatrix->Rows[i]->Cells[j]->Value;
				}
			}
		}

		double Determinant(array<double, 2>^ matrix, int n) {
				   double det = 0;
				   if (n == 1) {
					   det = matrix[0, 0];
				   }
				   else if (n == 2) {
					   det = matrix[0, 0] * matrix[1, 1] - matrix[0, 1] * matrix[1, 0];
				   }
				   else {
					   det = 0;
					   for (int j = 0; j < n; j++) {
						   det += matrix[0, j] * Cofactor(matrix, 0, j, n);
					   }
				   }
				   return det;
			   }

		double Cofactor(array<double, 2>^ matrix, int row, int col, int n) {
				   array<double, 2>^ minor = gcnew array<double, 2>(n - 1, n - 1);
				   int minorRow = 0;
				   for (int i = 0; i < n; i++) {
					   if (i == row) continue;
					   int minorCol = 0;
					   for (int j = 0; j < n; j++) {
						   if (j == col) continue;
						   minor[minorRow, minorCol] = matrix[i, j];
						   minorCol++;
					   }
					   minorRow++;
				   }
				   return Math::Pow(-1, row + col) * Determinant(minor, n - 1);
			   }

		// ���������
		private: System::Void determinant_Click(System::Object^ sender, System::EventArgs^ e) {
			// ��������, �� ������� � DataGridView �� �������
			if (matrixA->RowCount == 0 || matrixA->ColumnCount == 0) {
				MessageBox::Show("������� �������.", "�������", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// ��������� ������ �������
			int n = matrixA->RowCount;

			// ��������� ����������� ������ ��� ���������� ������� �������
			array<double, 2>^ matrixValues = gcnew array<double, 2>(n, n);

			// ���������� ����������� ������ ���������� �������
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					// ��������, �� ������ �� �� ���������� ��������
					if (matrixA->Rows[i]->Cells[j]->Value != nullptr) {
						// ����������� �������� ������ � double � ����� � �����
						matrixValues[i, j] = Convert::ToDouble(matrixA->Rows[i]->Cells[j]->Value);
					}
					else {
						MessageBox::Show("������� ������ ������ ������.", "�������", MessageBoxButtons::OK, MessageBoxIcon::Error);
						return;
					}
				}
			}

			// ���������� ���������� �� ��������� ������� Determinant
			double det = Determinant(matrixValues, n);
			String^ resultString = "��������� �������: " + det;

			// ��������� ����������
			MessageBox::Show("��������� �������: " + det, "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
			WriteResultToFile(resultString);
		}

		//����
		private: System::Void rang_Click(System::Object^ sender, System::EventArgs^ e) {
			// ��������� ������ �������
			int rowCount = matrixA->RowCount;
			int colCount = matrixA->ColumnCount;

			// ��������� ����������� ������ ��� ���������� ������� �������
			array<double, 2>^ tempMatrix = gcnew array<double, 2>(rowCount, colCount);

			// ��������� ������� � DataGridView �� ������
			for (int i = 0; i < rowCount; i++) {
				for (int j = 0; j < colCount; j++) {
					if (matrixA->Rows[i]->Cells[j]->Value != nullptr) {
						tempMatrix[i, j] = Convert::ToDouble(matrixA->Rows[i]->Cells[j]->Value);
					}
					else {
						tempMatrix[i, j] = 0.0; // ���� ������ �������, ������� �� ��������
					}
				}
			}

			int rank = 0;

			// ��������� ����� ����� ����� �������
			for (int row = 0; row < rowCount; row++) {
				// ����������� ������� ����������� �������� � ��������� �����
				int nonZeroCol = -1;
				for (int col = 0; col < colCount; col++) {
					if (Math::Abs(tempMatrix[row, col]) > 1e-10) { // �������� �� ���������� �������
						nonZeroCol = col;
						break;
					}
				}

				// ���� ���������� ������� ��������
				if (nonZeroCol != -1) {
					rank++;

					// ����������� ����� �� ��������� ��������
					double pivot = tempMatrix[row, nonZeroCol];
					for (int col = 0; col < colCount; col++) {
						tempMatrix[row, col] /= pivot;
					}

					// ��������� ������������ ����������� ��� ��������� �������� � �������
					for (int i = 0; i < rowCount; i++) {
						if (i != row) {
							double factor = tempMatrix[i, nonZeroCol];
							for (int j = 0; j < colCount; j++) {
								tempMatrix[i, j] -= factor * tempMatrix[row, j];
							}
						}
					}
				}
			}

			String^ resultString = "���� �������: " + rank + "\n";
			// ��������� ����� �������
			MessageBox::Show("���� ������� A: " + rank, "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
			WriteResultToFile(resultString);
		}

		//��������������
		private: System::Void transpose_Click(System::Object^ sender, System::EventArgs^ e) {
			// ��������� ����� ��� ���������� ������������� �������
			String^ resultString = "������������� ������� A:\n";

			// �������������� ������� A �� ��������� �������� �� ����� resultString
			for (int j = 0; j < matrixA->ColumnCount; j++) {
				for (int i = 0; i < matrixA->RowCount; i++) {
					resultString += matrixA->Rows[i]->Cells[j]->Value->ToString() + "\t";
				}
				resultString += "\n";
			}

			// ��������� ���������� � MessageBox
			MessageBox::Show(resultString, "������������� ������� A", MessageBoxButtons::OK, MessageBoxIcon::Information);
			WriteResultToFile(resultString);
		}

		// ��������
		private: System::Void inverse_Click(System::Object^ sender, System::EventArgs^ e) {
			// �������� ��������� �������
			int n = matrixA->RowCount;

			// �������� �������
			// ��������� ������� ��� ��������� ��������� �������
			array<double, 2>^ originalMatrix = gcnew array<double, 2>(n, n);

			// �������� ������� � DataGridView
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					double cellValue = System::Convert::ToDouble(matrixA->Rows[i]->Cells[j]->Value);
					originalMatrix[i, j] = cellValue;
				}
			}

			// ���������� ����������
			if (Determinant(originalMatrix, n) == 0) {
				MessageBox::Show("Determinant of the matrix is zero. Inverse matrix does not exist.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}


			// ��������� ������� ��� ��������� �������� �������
			array<double, 2>^ inverseMatrix = gcnew array<double, 2>(n, n);

			// ���������� ��������� �������� ������� ��������� ��������
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (i == j)
						inverseMatrix[i, j] = 1;
					else
						inverseMatrix[i, j] = 0;
				}
			}

			// �������� ���������� �������� ������� ������� ������-�������
			for (int i = 0; i < n; i++) {
				// ��������� �������� �������
				double pivot = originalMatrix[i, i];

				// ĳ���� �������� ����� �� �������� �������, ��� ������� ���� �����������
				for (int j = 0; j < n; j++) {
					originalMatrix[i, j] /= pivot;
					inverseMatrix[i, j] /= pivot;
				}

				// �������� ���������� ������������ ��� ����� �����
				for (int k = 0; k < n; k++) {
					if (k != i) {
						double factor = originalMatrix[k, i];
						for (int j = 0; j < n; j++) {
							originalMatrix[k, j] -= factor * originalMatrix[i, j];
							inverseMatrix[k, j] -= factor * inverseMatrix[i, j];
						}
					}
				}
			}



			// �������� ���������
			String^ resultString = "Inverse Matrix:\n";
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					resultString += inverseMatrix[i, j].ToString("F3") + "\t";
				}
				resultString += "\n";
			}

			MessageBox::Show(resultString, "Inverse Matrix Result", MessageBoxButtons::OK, MessageBoxIcon::Information);
			WriteResultToFile(resultString);
		}

		// ��������� �� �������
		private: System::Void toPower_Click(System::Object^ sender, System::EventArgs^ e) {
			// �������� ��������� �������
			int n = matrixA->RowCount;

			// �������� ������
			int power;
			if (!Int32::TryParse(toPowerNum->Text, power)) {
				MessageBox::Show("������� ��������� ����. ������, ���� �����, ���� �����.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// �������� ������� � DataGridView
			array<double, 2>^ originalMatrix = gcnew array<double, 2>(n, n);
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					double cellValue;
					if (!Double::TryParse(matrixA->Rows[i]->Cells[j]->Value->ToString(), cellValue)) {
						MessageBox::Show("������� ��������� ����. ���� �����, ������ ���� ������ �������� � ������� �������.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						return;
					}
					originalMatrix[i, j] = cellValue;
				}
			}

			// ϳ������� ������� �� �������
			array<double, 2>^ result = gcnew array<double, 2>(n, n);
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					result[i, j] = originalMatrix[i, j];
				}
			}

			for (int p = 1; p < power; p++) {
				array<double, 2>^ temp = gcnew array<double, 2>(n, n);
				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++) {
						temp[i, j] = 0;
						for (int k = 0; k < n; k++) {
							temp[i, j] += result[i, k] * originalMatrix[k, j];
						}
					}
				}
				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++) {
						result[i, j] = temp[i, j];
					}
				}
			}

			// �������� ���������
			String^ resultString = "ϳ������� �� ������� �������:\n";
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					resultString += result[i, j].ToString() + "\t";
				}
				resultString += "\n";
			}

			MessageBox::Show(resultString, "��������� �������� �� ������ �������", MessageBoxButtons::OK, MessageBoxIcon::Information);
			WriteResultToFile(resultString);
		}

		//������ ������� �� �����
		private: System::Void multiplyByNum_Click(System::Object^ sender, System::EventArgs^ e) {
			// ��������, �� ������� �������� �������� ��� ��������
			double multiplier;
			if (!Double::TryParse(mulNum->Text, multiplier)) {
				MessageBox::Show("���������� �������� ��� ��������.", "�������", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// �������� ������� � �� ����� � �������� ����� � �����������
			String^ resultString = "��������� �������� ������� A �� " + multiplier + ":\n";
			for (int i = 0; i < matrixA->RowCount; i++) {
				for (int j = 0; j < matrixA->ColumnCount; j++) {
					double valueA = Double::Parse(matrixA->Rows[i]->Cells[j]->Value->ToString());
					double result = valueA * multiplier;
					resultString += result.ToString() + "\t";
				}
				resultString += "\n";
			}

			// ��������� ���������� � MessageBox
			MessageBox::Show(resultString, "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
			WriteResultToFile(resultString);
		}

		private: System::Void random_Click(System::Object^ sender, System::EventArgs^ e) {
			// ��������, �� ������� �� �������
			if (matrixA->RowCount == 0 || matrixA->ColumnCount == 0) {
				MessageBox::Show("������� �������. �������� ������� ����� �������.", "�������", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// ������ ������� ���������� �����
			int minValue = -100;  // ̳������� �������� ���������� �����
			int maxValue = 100; // ����������� �������� ���������� �����

			// ��������� ��'���� ��� ��������� ���������� �����
			Random^ rand = gcnew Random();

			// ���������� ������� ����������� ������� � �������� �������
			for (int i = 0; i < matrixA->RowCount; i++) {
				for (int j = 0; j < matrixA->ColumnCount; j++) {
					matrixA->Rows[i]->Cells[j]->Value = rand->Next(minValue, maxValue).ToString();
				}
			}

			// �������� ����� ��� ����������� ��������� ������� � MessageBox
			String^ resultString = "������� A, ��������� ����������� �������:\n";
			for (int i = 0; i < matrixA->RowCount; i++) {
				for (int j = 0; j < matrixA->ColumnCount; j++) {
					resultString += matrixA->Rows[i]->Cells[j]->Value->ToString() + "\t";
				}
				resultString += "\n";
			}
			WriteResultToFile(resultString);
		}

		private: System::Void instruction_Click(System::Object^ sender, System::EventArgs^ e) {
			MyForm1^ f2 = gcnew MyForm1();
			f2->Show();
		}
};
}
