#include <stdio.h>

int main() {
    char name[31] = "";
    int hp = 100, exp = 0, ohp = 150, a, f, s, t;
    printf("�ਢ��! �� �����᪨� �����⥫��⢠� �� �������� "
           "� ���襡��� ���, ��� ⥡� ��������� ����������� � ����묨 ��ࠬ�,"
           "�� �ᮡ� ����묨 ᪥��⠬� (� ���쭮 ��� 娫��쪨�), �����騬� ���쬠�� "
           "� ���� � �����ண��� (�������, �� ��� 㤠���� ⥡� ��ࠤ�����).\n"
           "�⠪, ᮣ��ᥭ �� ��, ����, ᮢ����� �����⢨� � ���襡��� ���, "
           "�⮡� �������� �����, ��� �� �� �������筮 ᨫ�� ��� ⠪���? �롮� �� ⮡��!\n");
    printf("1 -- � ������ ����� �� 業��!\n"
           "2 -- ����� ���襡�� ���? �� �� ���� ����? � �宦�.\n");
    scanf("%d", &a);
    switch (a) {
        case 1:
            printf("�४�᭮! ����� ᢮� �஧���, �⮡� ��� �뫮 ��� �������� � ⥡�:\n");
            scanf("%s", name);
            printf("���⭮ �������������, %s! �⠪, � ⢮�� ����� ��ଠ�� ����� ����, ����� ������� ⥡� �������� "
                   "� ���⠫�, ����饬� �����.\n"
                   "��, �������, ���� � ���⠫� ����� �१ ����� ���. �� ��� ���������� ����, "
                   "�� ��� ᤠ����, �� �� � ⠪�� ᭠�殮���� (� �筥� � ��� ������⢨��) ��������� �� ��ࢮ� �� �墠⪥ "
                   "� ��஬! ���, ���쬨 �� ���� ��ᯥ� � ���.\n"
                   "��... �� �룫廊�� ������� ����, 祬 ࠭��!\n", name);

            printf("���� ���஢� �㤥� 㬥������� ����� ࠧ, ����� �� ����砥�� �஭. �� �⠪� �ࠣ� �����஥ �६�,"
                   "�⮡� ����⠭�������.\n"
                   "� ����� 㡨�� �ࠣ�� ⢮� ���� �㤥� ���������\n");
            printf("�� -- %d\n���� -- %d\n", hp, exp);
            printf("�⠪, �� �室��� � ����� ��� � ���� ����� ������ ���: ��஬����, ��� �� ��� ����襣���, "
                   "����祣� ���! ����⢨�?\n");
            printf("1 -- �⠪�����.\n"
                   "2 -- �� �� ���... � ᤠ���!\n");
            scanf("%d", &f);
            switch (f) {
                case 2:
                    printf("�� �㬠�, �� �� ⠪ ����� ������.. �� ��, ⠪ � ����襬: %s 㡨�(�) ��஬ � ᠬ�� ��砫� ����",
                           name);
                    return 0;
                case 1:
                    ohp -= 75;
                    hp -= 20;
                    printf("��⪮ ����! �� ��� 㤠஢, � �ࠣ �㤥� ����থ�!\n");
                    printf("�� -- %d\n���� -- %d\n", hp, exp);
                    printf("1 -- �த������ �⠪�����.\n"
                           "2 -- ���������, ���� ���஢� ����⠭������.\n");
                    scanf("%d", &s);
                    switch (s) {
                        case 2:
                            hp += 20;
                            printf("�� -- %d\n���� -- %d\n", hp, exp);
                            printf("1 -- �த������ �⠪�����.\n"
                                   "2 -- �㦭� ����� ��!!!\n");
                            scanf("%d", &t);
                            switch (t) {
                                case 2:
                                    hp = 0;
                                    printf("�� ��, 㤠���� ����⠭�����? ��� 㡨� ⥡�, ���� �� ��⭮ �믫��뢠� ��। ���. "
                                           "��� �� ����� ��������? �����, �� �� ࠢ�� ����. ��頩!\n");
                                    return 0;
                                case 1:
                                    ohp -= 75;
                                    break;
                                default:
                                    printf("���, � ⢮�� ��⪮���� ��襩 ���� �� ��������. �����頩��, ����� �������� �������� �� �����蠬.");
                                    return 0;
                            }
                            break;
                        case 1:
                            ohp -= 75;
                            break;
                        default:
                            printf("���, � ⢮�� ��⪮���� ��襩 ���� �� ��������. �����頩��, ����� �������� �������� �� �����蠬.");
                            return 0;
                    }
                    break;
                default:
                    printf("���� ���, � ⢮�� ��⪮���� ��襩 ���� �� ��������. �����頩��, ����� �������� �������� �� �����蠬.");
                    return 0;

            }
            break;
        case 2:
            printf("�� ��, � ��⠫��. ��室�, �᫨ �㤥� ��筮.");
            return 0;
            break;
        default:
            printf("���, � ⢮�� ��⪮���� ��襩 ���� �� ��������. �����頩��, ����� �������� �������� �� �����蠬.");
            return 0;
    }
    a = 0;
    if (ohp <= 0) {
        printf("�ࠣ ����থ�! ����ࠢ���, ⥡� 㤠���� �������� �����饣� ���! �⮩, "
               "�� �� �� ⥬ ��ॢ�� ᢥ����? ��㦥�� ���⠫? ��, �� ������ ��! � ���� ������, �� "
               "������訩 ���⠫ �१ ��� ��������... �� � �� ���������. � � ���� ⠪ ����� �⥫ ⥡� �� ��������... "
               "�� ��, %s, � ࠤ, �� �� ������ �ᯥ譮 �������� �����. �� ��砩!\n", name);
        exp += 999;
        printf("�� -- %d\n���� -- %d\n", hp, exp);
    }
    printf("1 -- �������� �����.\n"
           "2 -- ���� �������� �����\n");
    scanf("%d", &a);
    while (a != 1 && a != 2) {
        printf("�� ��ࠢ���� 㦥 �����, ��㣮�� ��ਠ�� ���!\n");
        scanf("%d", &a);
    }
    printf("�⮩! ����� ���⠫� ⥡� ��������� ������ �����, 㬥�騩 �ॢ���� ���� � ������! �ᮧ����� ��� ᨫ�?!\n");
    printf("1 -- � �� ����� �⮣� ��ਪ���! � �⠪�!!\n"
           "2 -- ���஡����� �����������.\n"
           "3 -- ������ � ���᪠� ��㣮�� ���⠫�.\n");
    scanf("%d", &f);
    while (f != 1 && f != 2 && f != 3) {
        printf("���஡� ����� ���� �� ��� ��ਠ�⮢, ��������..\n");
        printf("1 -- � �� ����� �⮣� ��ਪ���! � �⠪�!!\n"
               "2 -- ���஡����� �����������.\n"
               "3 -- ������ � ���᪠� ��㣮�� ���⠫�.\n");
        scanf("%d", &f);
    }
    switch (f) {
        case 1:
            printf("%s, �� �筮 ���� �⠪����� ���? ��ᬮ�� �� ᢮� ᭠�殮���! �����⢮ ������ ��� �� ������ ⥡� ���⮫쪮 ᨫ��!\n",
                   name);
            printf("1 -- �� ࠢ�� �⠪�����.\n"
                   "2 -- �����, ���஡�� �����������.\n");
            scanf("%d", &s);
            while (s != 1 && s != 2) {
                printf("���஡�, ��������, �������� �������� �� �����蠬)\n");
                printf("1 -- �� ࠢ�� �⠪�����.\n"
                       "2 -- �����, ���஡�� �����������.\n");
                scanf("%d", &s);
            }
            if (s == 1) {
                printf("���� �� 㤠���� ��ࠢ� �業��� ᨫ� ᮯ�୨��, ��-�� 祣� �� �����. ����, ��訩 �� ����. ��頩!\n");
                return 0;
            }
        case 2:
            printf("�����: �� ���� ������� �����, ��? �� ��, � �ய��� ⥡�, �᫨ �� �⤠�� ��� ᢮� ���! � ⢮�� ��� �� ⥡� �� �����������\n");
            printf("������ 1, �⮡� �⤠��\n");
            scanf("%d", &t);
            while (t != 1) {
                printf("������ 1, �⮡� �⤠��\n");
                scanf("%d", &t);
            }
            printf("�����: �� ��, ��ࠢ���� �����, %s!\n", name);
            printf("�� ��� � ��, �� ������ �������� � ᢮� ���. ���ᨡ�, �� ��ࠫ � ��� ����)\n"
                   "����!");
            return 0;
        case 3:
            printf("��-�� ᢮�� ������ �� ��⠫�� � �⮬ ��� ����筮. ���祬, ����� �� ⠪ � � ����: �� ������ �ப������ �� �����ண�, ���ਬ��..\n");
            return 0;
    }
    return 0;
}
