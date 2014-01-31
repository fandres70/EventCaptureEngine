#include "addlanguage.h"
#include <QLocale>
#include <QVariant>
#include <QFileDialog>
#include "languages.h"

AddLanguage::AddLanguage(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	for (int i = QLocale::C + 1; i < QLocale::LastLanguage; ++i) 
	{
		QString lang = QLocale::languageToString(QLocale::Language(i));
		ui.cmbLanguage->addItem(lang, QVariant(i));
	}
	connect(ui.cmbLanguage,	SIGNAL(currentIndexChanged(int)),	this,SLOT(cmbLanguage_Changed(int)));
	connect(ui.btnBrowse, SIGNAL(clicked()),this,SLOT(btnBrowse_Clicked()));
	connect(ui.btnOk,     SIGNAL(clicked()),this,SLOT(btnOk_Clicked()));

	ui.btnOk->setEnabled(false);
}
static void fillCountryCombo(const QVariant &lng, QComboBox *combo)
{
	combo->clear();
	QLocale::Language lang = QLocale::Language(lng.toInt());
	if (lang != QLocale::C) 
	{
		foreach (QLocale::Country cntr, QLocale::countriesForLanguage(lang)) 
		{
			QString country = QLocale::countryToString(cntr);
			combo->addItem(country, QVariant(cntr));
		}
		combo->model()->sort(0, Qt::AscendingOrder);
	}
	combo->insertItem(0, AddLanguage::tr("Any Country"), QVariant(QLocale::AnyCountry));
	combo->setCurrentIndex(0);
}

void AddLanguage::cmbLanguage_Changed(int idx)
{
	fillCountryCombo(ui.cmbLanguage->itemData(idx), ui.cmbCountry);
}
void AddLanguage::btnBrowse_Clicked()
{
	QString path = QFileDialog::getOpenFileName(this, tr("Open File"),"/home",
		"Translation files (*.qm);;");

	ui.txtPath->setText(path);

	ui.btnOk->setEnabled(true);
}

void AddLanguage::btnOk_Clicked()
{
	Languages *e=static_cast<Languages*>(this->parent());
	e->loadLanguages(ui.txtlanguageName->text(),ui.cmbLanguage->currentText(),ui.cmbCountry->currentText(),ui.txtPath->text());

	ui.txtlanguageName->clear();
	ui.txtPath->clear();

}
AddLanguage::~AddLanguage()
{

}
