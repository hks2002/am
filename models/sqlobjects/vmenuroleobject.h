#ifndef VMENUROLEOBJECT_H
#define VMENUROLEOBJECT_H

#include <TSqlObject>
#include <QSharedData>


class T_MODEL_EXPORT VMenuRoleObject : public TSqlObject, public QSharedData
{
public:
    QString menus_group_cd;
    QString menus_group_name_zh;
    QString menus_group_name_en;
    QString menus_group_tooltip;
    QString menus_group_desc;
    int menu_id {0};
    QString menu_cd;
    QString menu_name_zh;
    QString menu_name_en;
    QString menu_tooltip;
    QString menu_desc;
    QString controller;
    QString action;
    int role_id {0};
    int menus_group_id {0};
    int menus_group_order {0};
    int menu_order {0};
    bool break_bool;

    enum PropertyIndex {
        MenusGroupCd = 0,
        MenusGroupNameZh,
        MenusGroupNameEn,
        MenusGroupTooltip,
        MenusGroupDesc,
        MenuId,
        MenuCd,
        MenuNameZh,
        MenuNameEn,
        MenuTooltip,
        MenuDesc,
        Controller,
        Action,
        RoleId,
        MenusGroupId,
        MenusGroupOrder,
        MenuOrder,
        BreakBool,
    };

    QList<int> primaryKeyIndexList() const override { QList<int> pkidxList; return pkidxList; }
    int autoValueIndex() const override { return -1; }
    QString tableName() const override { return QLatin1String("v_menu_role"); }

private:    /*** Don't modify below this line ***/
    Q_OBJECT
    Q_PROPERTY(QString menus_group_cd READ getmenus_group_cd WRITE setmenus_group_cd)
    T_DEFINE_PROPERTY(QString, menus_group_cd)
    Q_PROPERTY(QString menus_group_name_zh READ getmenus_group_name_zh WRITE setmenus_group_name_zh)
    T_DEFINE_PROPERTY(QString, menus_group_name_zh)
    Q_PROPERTY(QString menus_group_name_en READ getmenus_group_name_en WRITE setmenus_group_name_en)
    T_DEFINE_PROPERTY(QString, menus_group_name_en)
    Q_PROPERTY(QString menus_group_tooltip READ getmenus_group_tooltip WRITE setmenus_group_tooltip)
    T_DEFINE_PROPERTY(QString, menus_group_tooltip)
    Q_PROPERTY(QString menus_group_desc READ getmenus_group_desc WRITE setmenus_group_desc)
    T_DEFINE_PROPERTY(QString, menus_group_desc)
    Q_PROPERTY(int menu_id READ getmenu_id WRITE setmenu_id)
    T_DEFINE_PROPERTY(int, menu_id)
    Q_PROPERTY(QString menu_cd READ getmenu_cd WRITE setmenu_cd)
    T_DEFINE_PROPERTY(QString, menu_cd)
    Q_PROPERTY(QString menu_name_zh READ getmenu_name_zh WRITE setmenu_name_zh)
    T_DEFINE_PROPERTY(QString, menu_name_zh)
    Q_PROPERTY(QString menu_name_en READ getmenu_name_en WRITE setmenu_name_en)
    T_DEFINE_PROPERTY(QString, menu_name_en)
    Q_PROPERTY(QString menu_tooltip READ getmenu_tooltip WRITE setmenu_tooltip)
    T_DEFINE_PROPERTY(QString, menu_tooltip)
    Q_PROPERTY(QString menu_desc READ getmenu_desc WRITE setmenu_desc)
    T_DEFINE_PROPERTY(QString, menu_desc)
    Q_PROPERTY(QString controller READ getcontroller WRITE setcontroller)
    T_DEFINE_PROPERTY(QString, controller)
    Q_PROPERTY(QString action READ getaction WRITE setaction)
    T_DEFINE_PROPERTY(QString, action)
    Q_PROPERTY(int role_id READ getrole_id WRITE setrole_id)
    T_DEFINE_PROPERTY(int, role_id)
    Q_PROPERTY(int menus_group_id READ getmenus_group_id WRITE setmenus_group_id)
    T_DEFINE_PROPERTY(int, menus_group_id)
    Q_PROPERTY(int menus_group_order READ getmenus_group_order WRITE setmenus_group_order)
    T_DEFINE_PROPERTY(int, menus_group_order)
    Q_PROPERTY(int menu_order READ getmenu_order WRITE setmenu_order)
    T_DEFINE_PROPERTY(int, menu_order)
    Q_PROPERTY(bool break_bool READ getbreak_bool WRITE setbreak_bool)
    T_DEFINE_PROPERTY(bool, break_bool)
};

#endif // VMENUROLEOBJECT_H
