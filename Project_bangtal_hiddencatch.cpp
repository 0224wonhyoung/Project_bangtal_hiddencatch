/*  20200224 이원형
    4주차 틀린그림찾기 수업내용
*/

#include <Bangtal.h>
#pragma comment (lib, "Bangtal.lib")

SceneID scene1;
ObjectID problem;

ObjectID left1, left2, left3, left4, left5, left6, left7;
ObjectID right1, right2, right3, right4, right5, right6, right7;

//주어진 좌표(x,y)가 (cx, cy)를 중심으로 반지름 r인 정사각형 내부 -> true
bool checkIn(int x, int y, int cx, int cy, int r) {
    return (x > cx - r && x < cx + r && y > cy - r && y < cy + r);
}

void mouseCallback(ObjectID object, int x, int y, MouseAction) {
    
    if (object == problem) {

        // 달
        if (checkIn(x, y, 546, 542, 54) || checkIn(x, y, 1164, 542, 54)) {
            showObject(left1);
            showObject(right1);
        }

        //왼쪽상단 별빛
        else if (checkIn(x, y, 77, 499, 17) || checkIn(x, y, 695, 499, 17)) {
            showObject(left2);
            showObject(right2);
        }

        //3
        else if (checkIn(x, y, 361, 430, 16) || checkIn(x, y, 979, 430, 16)) {
            showObject(left3);
            showObject(right3);
        }

        //4
        else if (checkIn(x, y, 379, 106, 27) || checkIn(x, y, 997, 106, 27)) {
            showObject(left4);
            showObject(right4);
        }

        //5
        else if (checkIn(x, y, 39, 203, 36)  || checkIn(x, y,657, 203, 36)) {
            showObject(left5);
            showObject(right5);
        }

        //6
        else if (checkIn(x, y, 570, 369, 35) || checkIn(x, y, 1188, 369, 35)) {
            showObject(left6);
            showObject(right6);
        }

        //7
        else if (checkIn(x, y, 298, 65, 13) || checkIn(x, y, 916, 65, 13)) {
            showObject(left7);
            showObject(right7);
        }
        else {
            endGame();
        }
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

    left2 = createObject("체크 마크_왼2", "Images\\check.png");
    locateObject(left2, scene1, 77 - 25, 499 - 25);


    left3 = createObject("체크 마크_왼3", "Images\\check.png");
    locateObject(left3, scene1, 361 - 25, 430 - 25);

    left4 = createObject("체크 마크_왼4", "Images\\check.png");
    locateObject(left4, scene1, 379 - 25, 106 - 25);

    left5 = createObject("체크 마크_왼5", "Images\\check.png");
    locateObject(left5, scene1, 39 - 25, 203 - 25);

    left6 = createObject("체크 마크_왼6", "Images\\check.png");
    locateObject(left6, scene1, 570 - 25, 369 - 25);

    left7 = createObject("체크 마크_왼7", "Images\\check.png");
    locateObject(left7, scene1, 298 - 25, 65 - 25);




    right1 = createObject("체크 마크_오1", "Images\\check.png");
    locateObject(right1, scene1, 1164 - 25, 542 - 25);

    right2 = createObject("체크 마크_오2", "Images\\check.png");
    locateObject(right2, scene1, 695 - 25, 499 - 25);

    right3 = createObject("체크 마크_오3", "Images\\check.png");
    locateObject(right3, scene1, 979 - 25, 430 - 25);

    right4 = createObject("체크 마크_오4", "Images\\check.png");
    locateObject(right4, scene1, 997 - 25, 106 - 25);

    right5 = createObject("체크 마크_오5", "Images\\check.png");
    locateObject(right5, scene1, 657 - 25, 203 - 25);

    right6 = createObject("체크 마크_오6", "Images\\check.png");
    locateObject(right6, scene1, 1188 - 25, 369 - 25);

    right7 = createObject("체크 마크_오7", "Images\\check.png");
    locateObject(right7, scene1, 916 - 25, 65 - 25);


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
