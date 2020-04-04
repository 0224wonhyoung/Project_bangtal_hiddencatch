/*  20200224 이원형
    4주차 틀린그림찾기 수업내용
*/

#include <Bangtal.h>
#pragma comment (lib, "Bangtal.lib")

SceneID scene1;
ObjectID problem;

ObjectID left[7];
ObjectID right[7];

int leftX[7] = { 546, 77, 361, 379, 39, 570, 298 };
int rightX[7] = { 1164, 695, 979, 997, 657, 1188, 916 };
int Y[7] = { 542, 499, 430, 106, 203, 369, 65 };
int radius[7] = { 54, 17, 16, 27, 36, 35, 13 };

//주어진 좌표(x,y)가 (cx, cy)를 중심으로 반지름 r인 정사각형 내부 -> true
bool checkIn(int x, int y, int cx, int cy, int r) {
    return (x > cx - r && x < cx + r && y > cy - r && y < cy + r);
}

void mouseCallback(ObjectID object, int x, int y, MouseAction) {
    
    if (object == problem) {

        // 달
        if (checkIn(x, y, leftX[0], Y[0], radius[0]) || checkIn(x, y, rightX[0], Y[0], radius[0])) {
            showObject(left[0]);
            showObject(right[0]);
        }

        //왼쪽상단 별빛
        else if (checkIn(x, y, leftX[1], Y[1], radius[1]) || checkIn(x, y, rightX[1], Y[1], radius[1])) {
            showObject(left[1]);
            showObject(right[1]);
        }

        //3
        else if (checkIn(x, y, leftX[2], Y[2], radius[2]) || checkIn(x, y, rightX[2], Y[2], radius[2])) {
            showObject(left[2]);
            showObject(right[2]);
        }

        //4
        else if (checkIn(x, y, leftX[3], Y[3], radius[3]) || checkIn(x, y, rightX[3], Y[3], radius[3])) {
            showObject(left[3]);
            showObject(right[3]);
        }

        //5
        else if (checkIn(x, y, leftX[4], Y[4], radius[4]) || checkIn(x, y, rightX[4], Y[4], radius[4])) {
            showObject(left[4]);
            showObject(right[4]);
        }

        //6
        else if (checkIn(x, y, leftX[5], Y[5], radius[5]) || checkIn(x, y, rightX[5], Y[5], radius[5])) {
            showObject(left[5]);
            showObject(right[5]);
        }

        //7
        else if (checkIn(x, y, leftX[6], Y[6], radius[6]) || checkIn(x, y, rightX[6], Y[6], radius[6])) {
            showObject(left[6]);
            showObject(right[6]);
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


    left[0] = createObject("체크 마크_왼1", "Images\\check.png");
    locateObject(left[0], scene1, 546 - 25, 542 - 25);

    left[1] = createObject("체크 마크_왼2", "Images\\check.png");
    locateObject(left[1], scene1, 77 - 25, 499 - 25);


    left[2] = createObject("체크 마크_왼3", "Images\\check.png");
    locateObject(left[2], scene1, 361 - 25, 430 - 25);

    left[3] = createObject("체크 마크_왼4", "Images\\check.png");
    locateObject(left[3], scene1, 379 - 25, 106 - 25);

    left[4] = createObject("체크 마크_왼5", "Images\\check.png");
    locateObject(left[4], scene1, 39 - 25, 203 - 25);

    left[5] = createObject("체크 마크_왼6", "Images\\check.png");
    locateObject(left[5], scene1, 570 - 25, 369 - 25);

    left[6] = createObject("체크 마크_왼7", "Images\\check.png");
    locateObject(left[6], scene1, 298 - 25, 65 - 25);




    right[0] = createObject("체크 마크_오1", "Images\\check.png");
    locateObject(right[0], scene1, 1164 - 25, 542 - 25);

    right[1] = createObject("체크 마크_오2", "Images\\check.png");
    locateObject(right[1], scene1, 695 - 25, 499 - 25);

    right[2] = createObject("체크 마크_오3", "Images\\check.png");
    locateObject(right[2], scene1, 979 - 25, 430 - 25);

    right[3] = createObject("체크 마크_오4", "Images\\check.png");
    locateObject(right[3], scene1, 997 - 25, 106 - 25);

    right[4] = createObject("체크 마크_오5", "Images\\check.png");
    locateObject(right[4], scene1, 657 - 25, 203 - 25);

    right[5] = createObject("체크 마크_오6", "Images\\check.png");
    locateObject(right[5], scene1, 1188 - 25, 369 - 25);

    right[6] = createObject("체크 마크_오7", "Images\\check.png");
    locateObject(right[6], scene1, 916 - 25, 65 - 25);


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
