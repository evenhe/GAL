// UserProgram.cpp: 实现文件
//

#include "stdafx.h"
#include "DictionarySystem.h"
#include "UserProgram.h"
#include "afxdialogex.h"


// UserProgram 对话框

IMPLEMENT_DYNAMIC(UserProgram, CDialogEx)

UserProgram::UserProgram(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DICTIONARYSYSTEM_DIALOG, pParent)
{

}

UserProgram::~UserProgram()
{
}

void UserProgram::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(UserProgram, CDialogEx)
END_MESSAGE_MAP()


// UserProgram 消息处理程序
