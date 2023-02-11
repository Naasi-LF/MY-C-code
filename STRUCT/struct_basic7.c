#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//-------------���Ź���ϵͳ--------------

//����һ���ṹ�����ڴ��������Ϣ
struct MM
{
    char name[20];
    int age;
    char addr[20];
    float score;
};

struct MM array[100];//����һ��ȫ�ֽṹ������

int count =0;//����һ��ȫ�ּ�����

//����һ���˵�����
void menu()
{
    printf("-----------[�½�����Ź���ϵͳ]---------\n");
    printf("\t0.�˳�ϵͳ\n");
    printf("\t1.¼��������Ϣ\n");
    printf("\t2.���������Ϣ\n");
    printf("\t3.��ѯ������Ϣ\n");
    printf("\t4.�޸�������Ϣ\n");
    printf("\t5.ɾ��������Ϣ\n");
    printf("\t6.����������Ϣ(һ�������޷��޸�)\n");
    printf("\t7.����ѱ���������Ϣ\n");
    printf("----------------------------------------\n");
    printf("������(0~7):");
}

//��������
void input()
{
    printf("������������Ϣ(name age addr score):");
    scanf("%s%d%s%f",array[count].name,&array[count].age,
                    array[count].addr,&array[count].score);
    count++;//�����ĺô�
}

//�����ӡ
void print(struct MM array[],int count)
{
    printf("name\tage\taddr\tscore\n");
    for (size_t i = 0; i < count; i++)
    {
        printf("%s\t%d\t%s\t%.1f\n",array[i].name,array[i].age,
                    array[i].addr,array[i].score);
    }
    
}

//�����ѯ
int searchResult(char* name)
{
    for (size_t i = 0; i < count; i++)
    {
        if (strcmp(array[i].name,name)==0)
        {
            return i;
        }
        
    }
    return -1;
}

//����ɾ��
void deleteByName(char* name)
{
    int result=searchResult(name);
    if (result==-1)
        {
            printf("δ�ҵ������Ϣ!�޷�ɾ��!\n");
            return;
        }
    else
    {
        for (size_t i = result; i < count; i++)
        {
            array[i]=array[i+1];
        }
        count--;
        printf("ɾ���ɹ�!\n");
    }
}

//���𱣴�
void save()
{
    FILE *file = fopen("D:\\���������Ұ���.txt", "a");
    if (file == NULL) 
      return 1;
    for (size_t i = 0; i < count; i++)
        fprintf(file,"%s\t%d\t%s\t%.1f\n",array[i].name,array[i].age,
                    array[i].addr,array[i].score);    
    fclose(file);
    printf("������ű���ɹ�\n");
}

//��������ļ���Ϣ
search_file()
{
    FILE *fp=fopen("D:\\���������Ұ���.txt", "r");
    int read;
    while ((read=fgetc(fp))!=EOF)
      putchar(read);
    }

//ѡ����
void keyDown()
{
    int choice=0,i=0;
    scanf("%d",&choice);
    char name[20];

    switch (choice)
    {
    case 0://�˳�ϵͳ
        printf("�����˳�!\n");
        system("pause");
        exit(0);//�˳�����
        break;

    case 1://¼��������Ϣ
        input();
        break;

    case 2://���������Ϣ
        print(array,count);
        break;

    case 3://��ѯ������Ϣ
        printf("�������ѯ�����ŵ�name:");
        scanf("%s",name);
        if (searchResult(name)==-1)
        {
            printf("δ�ҵ������Ϣ!\n");
        }
        else 
        {
            i=searchResult(name);
            printf("%s\t%d\t%s\t%.1f\n",array[i].name,array[i].age,
                    array[i].addr,array[i].score);
        }
        break;

    case 4://�޸�������Ϣ
        printf("��������Ҫ�޸ĵ����ŵ�name:");
        scanf("%s",name);
        if (searchResult(name)==-1)
        {
            printf("δ�ҵ������Ϣ!�޷��޸�\n");
        }
        else
        {
            printf("�������µ�������Ϣ:(name age addr score):");
            i=searchResult(name);
            scanf("%s%d%s%f",array[i].name,&array[i].age,
                    array[i].addr,&array[i].score);
            printf("�޸ĳɹ�!");
        }
        break;

    case 5://ɾ��������Ϣ--����ɾ����һ��αɾ��
        printf("������Ҫɾ�������ŵ�name:");
        scanf("%s",name);
        deleteByName(name);
        break;

    case 6:
        save();
        break;
    
    case 7:
        search_file();
        break;

    default:printf("��������ȷ������:");
        break;
    }
}

int main()
{
    while (1)//��ѭ��
    {
        menu();//��ʾ�˵�
        keyDown();//����һ��ѡ��
        system("pause");//������
        system("cls");//����->������һ��ѭ��
    }
    
    system("pause");
    return 0;
}