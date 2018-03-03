// TransferServiceDlg.h : header file
//

#if !defined(AFX_TRANSFERSERVICEDLG_H__7C2AA538_F582_4635_AFCE_87939A5A5C5C__INCLUDED_)
#define AFX_TRANSFERSERVICEDLG_H__7C2AA538_F582_4635_AFCE_87939A5A5C5C__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

/////////////////////////////////////////////////////////////////////////////
// CTransferServiceDlg dialog

class CTransferServiceDlg : public CDialog
{
// Construction
public:
	CTransferServiceDlg(CWnd* pParent = NULL);	// standard constructor
// Dialog Data
	//{{AFX_DATA(CTransferServiceDlg)
	enum { IDD = IDD_TRANSFERSERVICE_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTransferServiceDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTransferServiceDlg)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft eMbedded Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TRANSFERSERVICEDLG_H__7C2AA538_F582_4635_AFCE_87939A5A5C5C__INCLUDED_)
