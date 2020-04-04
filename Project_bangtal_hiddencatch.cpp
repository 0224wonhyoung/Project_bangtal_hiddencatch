/*  20200224 이원형
    4주차 틀린그림찾기 수업내용
*/

#include <Bangtal.h>
#pragma comment (lib, "Bangtal.lib")

SceneID scene1;
ObjectID problem;

ObjectID left1;
ObjectID right1;

void mouseCallback(ObjectID object, int x, int y, MouseAction) {
    // 왼쪽 사각형 내부
    if (x > 546 - 54 && x < 546 + 54 && y > 542 - 54 && y < 542 + 54) {
        showObject(left1);
        showObject(right1);
    }
    else if (x > 1164 - 54 && x < 1164 + 54 && y > 542 - 54 && y < 542 + 54) {
        showObject(left1);
        showObject(right1);
    }
    else {
        endGame();
    }

}

int main()
{
    setMouseCallback(mouseCallback);
    scene1 = createScene("틀린그림찾기", "Images\\problem.png");

    problem = createObject("problem", "Images\\problem.png");
    locateObject(problem, scene1, 0, 0);
    showObject(problem);

    left1 = createObject("체크 마크_왼1", "Images\\check.png");
    locateObject(left1, scene1, 546 - 25, 542 - 25);
    right1 = createObject("체크 마크_오1", "Images\\check.png");
    locateObject(right1, scene1, 1164 - 25, 542 - 25);

    showMessage("좌우에 틀린 곳을 찾아보세요.");

    startGame(scene1);
   
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
