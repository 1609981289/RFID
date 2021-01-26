// CDialog_Find.cpp: 实现文件
//

#include "pch.h"
#include "RFID.h"
#include "CDialog_Find.h"
#include "afxdialogex.h"


// CDialog_Find 对话框

IMPLEMENT_DYNAMIC(CDialog_Find, CDialogEx)

CDialog_Find::CDialog_Find(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_FIND, pParent)
{

}

CDialog_Find::~CDialog_Find()
{
}

void CDialog_Find::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDialog_Find, CDialogEx)
END_MESSAGE_MAP()


// CDialog_Find 消息处理程序