#ifndef VMENUSGROUPMENU_H
#define VMENUSGROUPMENU_H

#include <QStringList>
#include <QDateTime>
#include <QVariant>
#include <QSharedDataPointer>
#include <TGlobal>
#include <TAbstractModel>

class TModelObject;
class VMenusGroupMenuObject;


class T_MODEL_EXPORT VMenusGroupMenu : public TAbstractModel
{
public:
    VMenusGroupMenu();
    VMenusGroupMenu(const VMenusGroupMenu &other);
    VMenusGroupMenu(const VMenusGroupMenuObject &object);
    ~VMenusGroupMenu();

    int menusGroupId() const;
    void setMenusGroupId(int menusGroupId);
    QString menusGroupCd() const;
    void setMenusGroupCd(const QString &menusGroupCd);
    QString menusGroupNameZh() const;
    void setMenusGroupNameZh(const QString &menusGroupNameZh);
    QString menusGroupNameEn() const;
    void setMenusGroupNameEn(const QString &menusGroupNameEn);
    QString menusGroupTooltip() const;
    void setMenusGroupTooltip(const QString &menusGroupTooltip);
    QString menusGroupDesc() const;
    void setMenusGroupDesc(const QString &menusGroupDesc);
    int menuId() const;
    void setMenuId(int menuId);
    int menuOrder() const;
    void setMenuOrder(int menuOrder);
    bool breakBool() const;
    void setBreakBool(const bool &breakBool);
    QString menuCd() const;
    void setMenuCd(const QString &menuCd);
    QString menuNameZh() const;
    void setMenuNameZh(const QString &menuNameZh);
    QString menuNameEn() const;
    void setMenuNameEn(const QString &menuNameEn);
    QString menuTooltip() const;
    void setMenuTooltip(const QString &menuTooltip);
    QString menuDesc() const;
    void setMenuDesc(const QString &menuDesc);
    QString controller() const;
    void setController(const QString &controller);
    QString action() const;
    void setAction(const QString &action);
    VMenusGroupMenu &operator=(const VMenusGroupMenu &other);

    bool create() override { return TAbstractModel::create(); }
    bool update() override { return TAbstractModel::update(); }
    bool save()   override { return TAbstractModel::save(); }
    bool remove() override { return TAbstractModel::remove(); }

    static VMenusGroupMenu create(int menusGroupId, const QString &menusGroupCd, const QString &menusGroupNameZh, const QString &menusGroupNameEn, const QString &menusGroupTooltip, const QString &menusGroupDesc, int menuId, int menuOrder, const bool &breakBool, const QString &menuCd, const QString &menuNameZh, const QString &menuNameEn, const QString &menuTooltip, const QString &menuDesc, const QString &controller, const QString &action);
    static VMenusGroupMenu create(const QVariantMap &values);
    static VMenusGroupMenu get(int menusGroupId, const QString &menusGroupCd, const QString &menusGroupNameZh, const QString &menusGroupNameEn, const QString &menusGroupTooltip, const QString &menusGroupDesc, int menuId, int menuOrder, const bool &breakBool, const QString &menuCd, const QString &menuNameZh, const QString &menuNameEn, const QString &menuTooltip, const QString &menuDesc, const QString &controller, const QString &action);
    static int count();
    static QList<VMenusGroupMenu> getAll();

private:
    QSharedDataPointer<VMenusGroupMenuObject> d;

    TModelObject *modelData() override;
    const TModelObject *modelData() const override;
    friend QDataStream &operator<<(QDataStream &ds, const VMenusGroupMenu &model);
    friend QDataStream &operator>>(QDataStream &ds, VMenusGroupMenu &model);
};

Q_DECLARE_METATYPE(VMenusGroupMenu)
Q_DECLARE_METATYPE(QList<VMenusGroupMenu>)

#endif // VMENUSGROUPMENU_H
