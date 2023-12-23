#include "kediplugin.h"
#include "kedi.h"

#include <QtPlugin>

kediPlugin::kediPlugin(QObject *parent)
    : QObject(parent)
{}

void kediPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool kediPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *kediPlugin::createWidget(QWidget *parent)
{
    return new kedi(parent);
}

QString kediPlugin::name() const
{
    return QLatin1String("kedi");
}

QString kediPlugin::group() const
{
    return QLatin1String("Kedi Browser Engine");
}

QIcon kediPlugin::icon() const
{
    return QIcon(QLatin1String(":/favicon.ico"));
}

QString kediPlugin::toolTip() const
{
    return QLatin1String("Kedi Browser");
}

QString kediPlugin::whatsThis() const
{
    return QLatin1String("A browser engine");
}

bool kediPlugin::isContainer() const
{
    return false;
}

QString kediPlugin::domXml() const
{
    return QLatin1String(R"(<widget class="kedi" name="kedi">
</widget>)");
}

QString kediPlugin::includeFile() const
{
    return QLatin1String("kedi.h");
}
