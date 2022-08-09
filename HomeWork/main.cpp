// StringTest.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//

#include <iostream>
#include <vector>

// ù��° ���ڿ� 5
   // std::string�� ���� �̿��ض�
   // ���ͳ� �˻��� �ؼ� �Լ����� Ȯ���ض�.

// �ι�° ��������� 5
    // Ȯ���ڴ� �ƹ��ǹ� ����.
    // ���̳ʸ��� �ؽ�Ʈ�İ� �߿��Ѱ�.
    // ���� �����غþ�� �մϴ�.
    // �׽�Ʈ�� �������ϴ�.

// ����° ����� 90
    // ������� ���Ѵٴ°��� ��� �׳� ���α׷����� ���Ѵٴ� �̴ϴ�.
    // ���α׷��Ӷ�� �̴ϴ�.
    // �ȵȴٶ�� ���ϴ°ͺ��� �����Ϸ��� ����ϼ���.
    // �ܰ������� �����Ϸ��� ����ϴ°� ���� �߿��մϴ�.
    // ������ ���λ����� �Ѳ����� ������ �˴ϴ�.

    // �� �׷��� �ɰŶ�� �����ߴ��� �ٺ������� ��뿡�� ��������� �մϴ�.
    // => �� �ȵǴ����� �ȴ�.


std::string StringChange(const std::string& _Src, const std::string& _Old, const std::string& _New)
{
    // std::string NewTest = "asdfasdfasdfsadfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasd";
    // return NewTest;

    int index = _Src.find(_Old);
    std::string temp = _Src;
    temp.replace(index, _New.length(), _New);

    return temp;
}

// size_t capacity
// size_t size
// datatype* Arr;
std::vector<std::string> StringSplit(const std::string& _Src, const std::string& _Value)
{
    std::vector<std::string> result;

    std::string temp = _Src;
    int startindex = 0;
    int index = 0;
    while (18446744073709551615 != temp.find(_Value, startindex))
    {
        index = temp.find(_Value, startindex);      
        std::string ele= temp.substr(startindex, index- startindex);
        startindex = index + 1;
        result.push_back(ele);
    }
    std::string ele = temp.substr(startindex, index - startindex);
    result.push_back(ele);
    return result;
}

int main()
{
    {
        //                  01234567
        std::string Test = "vvbasdf,,,gaaaaaaaa";

        size_t Pivotf = Test.find(",,,");
        size_t Pivotr = Test.rfind(",,,");

        {
            std::string Result = Test;

            //                                0������ 7��° ��¥������ 
            Result.replace(0, 7, ",,,");

            int cccc = 0;
        }

        {
            // std::string Result = Test;

            //                                7������ 3��° ��¥������ 
            // std::string Result = Test.substr(7, 3);
            //  0123456789
            // "vvbasdf,,,gaaaaaaaa";
            std::string Result = Test.substr(7, 3);
            int cccc = 0;
        }



        size_t PivotFail = Test.find("415645612");

        if (std::string::npos == Test.find("415645612"))
        {
            int a = 0;
        }



        // __int64

        int a = 0;

    }

    std::string Name = StringChange("AAABBBCCC", "BBB", "DDD");

    std::vector<std::string> Test = StringSplit("aaa,bbb,ccc", ",");

    // Test[0] == "aaa"
    // Test[1] == "bbb"
    // Test[2] == "ccc"

    std::cout << "Hello World!\n";
}

// ���α׷� ����: <Ctrl+F5> �Ǵ� [�����] > [��������� �ʰ� ����] �޴�
// ���α׷� �����: <F5> Ű �Ǵ� [�����] > [����� ����] �޴�

// ������ ���� ��: 
//   1. [�ַ�� Ž����] â�� ����Ͽ� ������ �߰�/�����մϴ�.
//   2. [�� Ž����] â�� ����Ͽ� �ҽ� ��� �����մϴ�.
//   3. [���] â�� ����Ͽ� ���� ��� �� ��Ÿ �޽����� Ȯ���մϴ�.
//   4. [���� ���] â�� ����Ͽ� ������ ���ϴ�.
//   5. [������Ʈ] > [�� �׸� �߰�]�� �̵��Ͽ� �� �ڵ� ������ ����ų�, [������Ʈ] > [���� �׸� �߰�]�� �̵��Ͽ� ���� �ڵ� ������ ������Ʈ�� �߰��մϴ�.
//   6. ���߿� �� ������Ʈ�� �ٽ� ������ [����] > [����] > [������Ʈ]�� �̵��ϰ� .sln ������ �����մϴ�.
