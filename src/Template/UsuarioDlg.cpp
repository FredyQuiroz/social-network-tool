// UsuarioDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Template.h"
#include "UsuarioDlg.h"


// CUsuarioDlg dialog

IMPLEMENT_DYNAMIC(CUsuarioDlg, CDialog)

CUsuarioDlg::CUsuarioDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CUsuarioDlg::IDD, pParent)
{

}

CUsuarioDlg::~CUsuarioDlg()
{
}

void CUsuarioDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EPASSWORD, m_EContrasena);
	DDX_Control(pDX, IDOK, m_BAceptar);
	DDX_Control(pDX, IDCANCEL, m_BCancelar);
}


BEGIN_MESSAGE_MAP(CUsuarioDlg, CDialog)
	ON_BN_CLICKED(IDOK, &CUsuarioDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CUsuarioDlg message handlers

void CUsuarioDlg::OnBnClickedOk()
{
	CString temp= CLanguage::GetTraduccion(IDS_CONTRASENA);
	if(temp==m_EContrasena.Text) {
		OnOK();
	} else {
		Sleep(1000);
		SetErrorEx(&m_EContrasena, CLanguage::GetTraduccion(IDS_CONTRASENANOVALIDA), 2);
	}
}
