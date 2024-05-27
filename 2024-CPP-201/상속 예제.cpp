#include <iostream>
#include <string>

using namespace std;

class Animal {
    string name;
    int weight;

public:
    // �⺻ ������
    Animal() { // �⺻������ �ʱ�ȭ
    }

    // �Ű����� ������
    Animal(const string name, int weight) : name(name), weight(weight) { // ��� �ʱ�ȭ
        cout << "Animal �θ� Ŭ����" << endl; #include <iostream>
            using namespace std;

        class Animal { // ���� Ŭ����
        public:
            string name;
            int weight;

            // Animal Ŭ������ ������
            Animal(const string& name, int weight) : name(name), weight(weight) {}

            // ���� �Ҹ���
            virtual ~Animal() {}
        };

        class Monster : public Animal { // �Ļ�(�ڽ�) Ŭ����
        private:
            int strength;
            int agility;
        public:
            // Monster Ŭ������ ������
            Monster(const string& name, int weight, int strength, int agility)
                : Animal(name, weight), strength(strength), agility(agility) {}

            // �߰����� ��� �Լ�
            void displayInfo() const {
                cout << "Name: " << name << ", Weight: " << weight
                    << ", Strength: " << strength << ", Agility: " << agility << endl;
            }
        };

        int main() {
            Monster myMonster("Dragon", 300, 500, 200);
            myMonster.displayInfo(); // ���: Name: Dragon, Weight: 300, Strength: 500, Agility: 200

            return 0;
        }

    }

    ~Animal() {
        cout << "Animal �Ҹ�" << endl;
    }
};

class Cat : public Animal {
public:
    // �Ű����� ������
    Cat(const string name, int weight)
        : Animal(name, weight) // Animal Ŭ������ �Ű����� ������ ȣ��
    {
        cout << "Cat ����" << endl;
    }

    ~Cat() {
        cout << "Cat �Ҹ�" << endl;
    }
};

// `main` �Լ� ����
int main() {
    // Cat ��ü ����
    Cat cat("�̸������", 55); // �̶� Animal�� �Ű����� �����ڰ� ȣ���
    return 0;
}
