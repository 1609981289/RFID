#pragma once


// CDialog_Find 对话框

class CDialog_Find : public CDialogEx
{
	DECLARE_DYNAMIC(CDialog_Find)

public:
	CDialog_Find(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDialog_Find();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_FIND };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
};
