// StringTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

// 첫번째 문자열 5
   // std::string을 적극 이용해라
   // 인터넷 검색을 해서 함수들을 확인해라.

// 두번째 파일입출력 5
    // 확장자는 아무의미 없다.
    // 바이너리냐 텍스트냐가 중요한것.
    // 자주 저장해봤어야 합니다.
    // 테스트가 편해집니다.

// 세번째 디버깅 90
    // 디버깅을 잘한다는것은 사실 그냥 프로그래밍을 잘한다는 겁니다.
    // 프로그래머라는 겁니다.
    // 안된다라고 말하는것보다 설명하려고 노력하세요.
    // 단계적으로 설명하려고 노력하는게 가장 중요합니다.
    // 질문에 세부사항을 한꺼번에 보내면 됩니다.

    // 왜 그렇게 될거라고 생각했는지 근본지식을 상대에게 설명해줘야 합니다.
    // => 왜 안되는지를 안다.


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

            //                                0번부터 7번째 글짜까지를 
            Result.replace(0, 7, ",,,");

            int cccc = 0;
        }

        {
            // std::string Result = Test;

            //                                7번부터 3번째 글짜까지를 
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

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
