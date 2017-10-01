#ifndef VCONTROLLERACTIONROLEUSEROBJECT_H
#define VCONTROLLERACTIONROLEUSEROBJECT_H

#include <TSqlObject>
#include <QSharedData>


class T_MODEL_EXPORT VControllerActionRoleUserObject : public TSqlObject, public QSharedData
{
public:
    QString controller;
    QString action;
    int role_id {0};
    int user_id {0};

    enum PropertyIndex {
        Controller = 0,
        Action,
        RoleId,
        UserId,
    };

    QList<int> primaryKeyIndexList() const override { QList<int> pkidxList; return pkidxList; }
    int autoValueIndex() const override { return -1; }
    QString tableName() const override { return QLatin1String("v_controller_action_role_user"); }

private:    /*** Don't modify below this line ***/
    Q_OBJECT
    Q_PROPERTY(QString controller READ getcontroller WRITE setcontroller)
    T_DEFINE_PROPERTY(QString, controller)
    Q_PROPERTY(QString action READ getaction WRITE setaction)
    T_DEFINE_PROPERTY(QString, action)
    Q_PROPERTY(int role_id READ getrole_id WRITE setrole_id)
    T_DEFINE_PROPERTY(int, role_id)
    Q_PROPERTY(int user_id READ getuser_id WRITE setuser_id)
    T_DEFINE_PROPERTY(int, user_id)
};

#endif // VCONTROLLERACTIONROLEUSEROBJECT_H
