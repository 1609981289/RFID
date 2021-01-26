
// RFIDDlg.h: 头文件
//

#pragma once
#include"CDialog_Find.h"

class CRFIDDlgAutoProxy;


// CRFIDDlg 对话框
class CRFIDDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CRFIDDlg);
	friend class CRFIDDlgAutoProxy;

// 构造
public:
	CRFIDDlg(CWnd* pParent = nullptr);	// 标准构造函数
	virtual ~CRFIDDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RFID_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	CRFIDDlgAutoProxy* m_pAutoProxy;
	HICON m_hIcon;

	BOOL CanExit();

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnClose();
	virtual void OnOK();
	virtual void OnCancel();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMenuFind();

private:
	CDialog_Find dialog_Find;
};
