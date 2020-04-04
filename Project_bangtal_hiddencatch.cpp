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

bool checked[7] = { false, false, false, false, false, false, false };

//주어진 좌표(x,y)가 (cx, cy)를 중심으로 반지름 r인 정사각형 내부 -> true
bool checkIn(int x, int y, int cx, int cy, int r) {
    return (x > cx - r && x < cx + r && y > cy - r && y < cy + r);
}

void mouseCallback(ObjectID object, int x, int y, MouseAction) {
    
    if (object == problem) {
        bool wrong = true;
        for (int i = 0; i < 7; i++) {
            
            if (!checked[i] &&(checkIn(x, y, leftX[i], Y[i], radius[i]) || checkIn(x, y, rightX[i], Y[i], radius[i]))) {
                showObject(left[i]);
                showObject(right[i]);

                checked[i] = true;
                wrong = false;
            }
        }
        if (wrong) {
            endGame();
        }
        else {
            bool completed = true;
            for (int i = 0; i < 7; i++) {
                if (!checked[i]) {
                    completed = false;
                }
            }
            if (completed) {
                endGame();
            }
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

    for (int i = 0; i < 7; i++) {
        left[i] = createObject("체크마크", "Images\\check.png");
        locateObject(left[i], scene1, leftX[i] - 25, Y[i] - 25);

        right[i] = createObject("체크마크", "Images\\check.png");
        locateObject(right[i], scene1, rightX[i] - 25, Y[i] - 25);
    }

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
