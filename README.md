# DX11-2D-Game-Engine-Library
윈도우API와 다이렉트X11을 이용한 2D게임 엔진 라이브러리 입니다.

라이브러리 설명


0. 프로젝트 설정에서 미리 컴파일된 헤더로 pch.h를 사용하십시오.

1. GameCore 클래스를 생성하고, Core 객체를 상속받아 전처리기 SINGLETON을 통해 싱글톤으로 만듭니다.

2. private으로 GameCore의 기본 생성자와 기본 소멸자를 선언하고, 정의합니다.

3. 메인소스에 전처리 메인함수 WINDOW_MAIN { } 을 정의하고 GameCore::GetInst()를 통해 코에 객체를 호출합니다.

4. GameCore의 부모 Core 클래스는 기본적으로, Init함수에서 윈도우 및 DX 초기화 기능이 구현되어 있으며,
Frame함수에서 윈도우 기본 메세지 루프를, Render함수에서 DX의 더블버퍼링 출력 기능이 구현되어 있습니다.

main소스에서 세 가지 함수를 호출하여 윈도우 창과 하얀 배경이 정상적으로 출력되는지 확인하고,
Release함수를 포함 네 개의 함수를 오버라이드하여 각 기능에 맞게 게임 로직을 작성합니다.

=

5. 라이브러리 프로젝트 폴더 내의 BasicShader.txt 를 복사하여 새로 만드는 프로젝트 폴더 내에 붙여넣기 합니다.
쉐이더 코드를 수정하려면 해당 텍스트파일을 프로젝트에 추가합니다.

6. 라이브러리 프로젝트 폴더 내의 fmod.dll을 복사하여 프로젝트 폴더 내에 붙여넣기 합니다.


=매니저

7. InputMgr과 SceneMgr은 확장성을 고려해 만들어 두지 않았습니다. 추가할 경우 SINGLETON 전처리기를 이용하십시오.

8. 모든 매니저의 초기화는 GameCore의 Init함수에서, 업데이트는 Frame함수에서 호출되도록 합니다.
