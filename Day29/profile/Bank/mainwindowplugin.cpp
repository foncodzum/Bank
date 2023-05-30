#include "mainwindow.h"
#include "mainwindowplugin.h"

#include <QtPlugin>

MainWindowPlugin::MainWindowPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void MainWindowPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool MainWindowPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *MainWindowPlugin::createWidget(QWidget *parent)
{
    return new MainWindow(parent);
}

QString MainWindowPlugin::name() const
{
    return QLatin1String("MainWindow");
}

QString MainWindowPlugin::group() const
{
    return QLatin1String("");
}

QIcon MainWindowPlugin::icon() const
{
    return QIcon();
}

QString MainWindowPlugin::toolTip() const
{
    return QLatin1String("");
}

QString MainWindowPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool MainWindowPlugin::isContainer() const
{
    return false;
}

QString MainWindowPlugin::domXml() const
{
    return QLatin1String("<widget class=\"MainWindow\" name=\"mainWindow\">\n</widget>\n");
}

QString MainWindowPlugin::includeFile() const
{
    return QLatin1String("mainwindow.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(mainwindowplugin, MainWindowPlugin)
#endif // QT_VERSION < 0x050000
