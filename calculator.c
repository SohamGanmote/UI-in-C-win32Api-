// required libary imports
#include <windows.h> // for win32 APIs
#include <stdlib.h>  // for String oprations and converstion oprations
#include <string.h>  // used for String coparisions

// declaration of numbers
#define NUMBER_0 0
#define NUMBER_1 1
#define NUMBER_2 2
#define NUMBER_3 3
#define NUMBER_4 4
#define NUMBER_5 5
#define NUMBER_6 6
#define NUMBER_7 7
#define NUMBER_8 8
#define NUMBER_9 9

// declaration of operations
#define CLEAR 10
#define MODE 11
#define DIVIDE 12
#define MULTIPLY 13
#define SUBSTATION 14
#define ADDITION 15
#define IS_EQUAL_TO 16

// external links
#define LINK_LINKEDIN 17  // linkedin link
#define LINK_PORTFOLIO 18 // portfolio link

LRESULT CALLBACK WindowProc(HWND, UINT, WPARAM, LPARAM); // Window procedure functions

void AddControls(HWND); // UI control function declaration
void AddMenus(HWND);    // Adding menus for external links

// declaration of Windows variable for calculations
HMENU hNum1;
HMENU hNum2;
HMENU hAnswer;
char operation[10] = "";

// declaration of Windows variable for external links
HMENU hMenu;

HMENU hAboutMenu;

HMENU hConnectMenu;
HMENU hLinkedin;
HMENU hPortfolio;

// false is (Input for Num1)
// true is (Input for Num2)
char control[10] = "num1";

// numbers declaration in string
char num1[10] = "";
char num2[10] = "";

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int ncmdshow)
{
  WNDCLASSEX wc = {0};

  wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
  wc.hCursor = LoadCursor(NULL, IDC_ARROW);
  wc.hInstance = hInst;
  wc.lpszClassName = L"myWindowClass";
  wc.lpfnWndProc = WindowProc;

  if (!RegisterClassW(&wc))
  {
    MessageBox(NULL, "Window Registration Failed!", "Error!",
               MB_ICONEXCLAMATION | MB_OK);
  };

  CreateWindowW(L"myWindowClass", L"Calculator v2", WS_OVERLAPPEDWINDOW | WS_VISIBLE | WS_MINIMIZEBOX | WS_SYSMENU, 100, 100, 365, 410, NULL, NULL, NULL, NULL);

  MSG msg = {0};

  while (GetMessageW(&msg, NULL, NULL, NULL))
  {
    TranslateMessage(&msg);
    DispatchMessage(&msg);
  }

  return 0;
}

LRESULT CALLBACK WindowProc(HWND hWnd, UINT msg, WPARAM wp, LPARAM lp)
{
  switch (msg)
  {
  case WM_CREATE:
    AddMenus(hWnd);
    AddControls(hWnd);
    break;
  case WM_COMMAND:
    int res = strcmp(control, "num1");
    switch (wp)
    {
      // ## Numbers cases
    case NUMBER_0:
      // in this case input with be for number 1
      res = strcmp(control, "num1");
      if (res == 0)
      {
        int result = strcmp(num1, "");
        if (result == 0)
          strcpy(num1, "0"); // copying number 0 to number 1
        else
          strcat(num1, "0");          // adding 0 at end of sting (later will convert it to int)
        SetWindowText(hAnswer, num1); // setting num1 to input box
      }
      else
      {
        int result = strcmp(num2, "");
        if (result == 0)
          strcpy(num2, "0"); // copying number 0 to number 1
        else
          strcat(num2, "0");          // adding 0 at end of sting (later will convert it to int)
        SetWindowText(hAnswer, num2); // setting num1 to input box
      }
      break;
    case NUMBER_1:
      res = strcmp(control, "num1");
      if (res == 0)
      {
        int result = strcmp(num1, "");
        if (result == 0)
          strcpy(num1, "1"); // copying number 1 to number 1
        else
          strcat(num1, "1");          // adding 1 at end of sting (later will convert it to int)
        SetWindowText(hAnswer, num1); // setting num1 to input box
      }
      else
      {
        int result = strcmp(num2, "");
        if (result == 0)
          strcpy(num2, "1"); // copying number 1 to number 1
        else
          strcat(num2, "1");          // adding 1 at end of sting (later will convert it to int)
        SetWindowText(hAnswer, num2); // setting num1 to input box
      }
      break;
    case NUMBER_2:
      res = strcmp(control, "num1");
      if (res == 0)
      {
        int result = strcmp(num1, "");
        if (result == 0)
          strcpy(num1, "2"); // copying number 2 to number 1
        else
          strcat(num1, "2");          // adding 2 at end of sting (later will convert it to int)
        SetWindowText(hAnswer, num1); // setting num1 to input box
      }
      else
      {
        int result = strcmp(num2, "");
        if (result == 0)
          strcpy(num2, "2"); // copying number 2 to number 1
        else
          strcat(num2, "2");          // adding 2 at end of sting (later will convert it to int)
        SetWindowText(hAnswer, num2); // setting num1 to input box
      }
      break;
    case NUMBER_3:
      res = strcmp(control, "num1");
      if (res == 0)
      {
        int result = strcmp(num1, "");
        if (result == 0)
          strcpy(num1, "3"); // copying number 3 to number 1
        else
          strcat(num1, "3");          // adding 3 at end of sting (later will convert it to int)
        SetWindowText(hAnswer, num1); // setting num1 to input box
      }
      else
      {
        int result = strcmp(num2, "");
        if (result == 0)
          strcpy(num2, "3"); // copying number 3 to number 1
        else
          strcat(num2, "3");          // adding 3 at end of sting (later will convert it to int)
        SetWindowText(hAnswer, num2); // setting num1 to input box
      }
      break;
    case NUMBER_4:
      res = strcmp(control, "num1");
      if (res == 0)
      {
        int result = strcmp(num1, "");
        if (result == 0)
          strcpy(num1, "4"); // copying number 4 to number 1
        else
          strcat(num1, "4");          // adding 4 at end of sting (later will convert it to int)
        SetWindowText(hAnswer, num1); // setting num1 to input box
      }
      else
      {
        int result = strcmp(num2, "");
        if (result == 0)
          strcpy(num2, "4"); // copying number 4 to number 1
        else
          strcat(num2, "4");          // adding 4 at end of sting (later will convert it to int)
        SetWindowText(hAnswer, num2); // setting num1 to input box
      }
      break;
    case NUMBER_5:
      res = strcmp(control, "num1");
      if (res == 0)
      {
        int result = strcmp(num1, "");
        if (result == 0)
          strcpy(num1, "5"); // copying number 5 to number 1
        else
          strcat(num1, "5");          // adding 5 at end of sting (later will convert it to int)
        SetWindowText(hAnswer, num1); // setting num1 to input box
      }
      else
      {
        int result = strcmp(num2, "");
        if (result == 0)
          strcpy(num2, "5"); // copying number 5 to number 1
        else
          strcat(num2, "5");          // adding 5 at end of sting (later will convert it to int)
        SetWindowText(hAnswer, num2); // setting num1 to input box
      }
      break;
    case NUMBER_6:
      res = strcmp(control, "num1");
      if (res == 0)
      {
        int result = strcmp(num1, "");
        if (result == 0)
          strcpy(num1, "6"); // copying number 6 to number 1
        else
          strcat(num1, "6");          // adding 6 at end of sting (later will convert it to int)
        SetWindowText(hAnswer, num1); // setting num1 to input box
      }
      else
      {
        int result = strcmp(num2, "");
        if (result == 0)
          strcpy(num2, "6"); // copying number 6 to number 1
        else
          strcat(num2, "6");          // adding 6 at end of sting (later will convert it to int)
        SetWindowText(hAnswer, num2); // setting num1 to input box
      }
      break;
    case NUMBER_7:
      res = strcmp(control, "num1");
      if (res == 0)
      {
        int result = strcmp(num1, "");
        if (result == 0)
          strcpy(num1, "7"); // copying number 7 to number 1
        else
          strcat(num1, "7");          // adding 7 at end of sting (later will convert it to int)
        SetWindowText(hAnswer, num1); // setting num1 to input box
      }
      else
      {
        int result = strcmp(num2, "");
        if (result == 0)
          strcpy(num2, "7"); // copying number 7 to number 1
        else
          strcat(num2, "7");          // adding 7 at end of sting (later will convert it to int)
        SetWindowText(hAnswer, num2); // setting num1 to input box
      }
      break;
    case NUMBER_8:
      if (res == 0)
      {
        int result = strcmp(num1, "");
        if (result == 0)
          strcpy(num1, "8"); // copying number 8 to number 1
        else
          strcat(num1, "8");          // adding 8 at end of sting (later will convert it to int)
        SetWindowText(hAnswer, num1); // setting num1 to input box
      }
      else
      {
        int result = strcmp(num2, "");
        if (result == 0)
          strcpy(num2, "8"); // copying number 8 to number 1
        else
          strcat(num2, "8");          // adding 8 at end of sting (later will convert it to int)
        SetWindowText(hAnswer, num2); // setting num1 to input box
      }
      break;
    case NUMBER_9:
      res = strcmp(control, "num1");
      if (res == 0)
      {
        int result = strcmp(num1, "");
        if (result == 0)
          strcpy(num1, "9"); // copying number 9 to number 1
        else
          strcat(num1, "9");          // adding 9 at end of sting (later will convert it to int)
        SetWindowText(hAnswer, num1); // setting num1 to input box
      }
      else
      {
        int result = strcmp(num2, "");
        if (result == 0)
          strcpy(num2, "9"); // copying number 9 to number 1
        else
          strcat(num2, "9");          // adding 9 at end of sting (later will convert it to int)
        SetWindowText(hAnswer, num2); // setting num1 to input box
      }
      break;
    // ## Operators cases
    case ADDITION:
      strcpy(control, "num2");
      strcpy(operation, "ADDITION");
      SetWindowText(hAnswer, "Addition");
      break;
    case SUBSTATION:
      strcpy(control, "num2");
      strcpy(operation, "SUBSTATION");
      SetWindowText(hAnswer, "Subtraction");
      break;
    case MULTIPLY:
      strcpy(control, "num2");
      strcpy(operation, "MULTIPLY");
      SetWindowText(hAnswer, "Multiply");
      break;
    case DIVIDE:
      strcpy(control, "num2");
      strcpy(operation, "DIVIDE");
      SetWindowText(hAnswer, "Divide");
      break;
    case MODE:
      strcpy(control, "num2");
      strcpy(operation, "MODE");
      SetWindowText(hAnswer, "Mode");
      break;
    case IS_EQUAL_TO:
      int result = strcmp(num1, ""); // checking if num1 is missing or not
      if (result == 0)
      {
        SetWindowText(hAnswer, "Missing Number1");
        break;
      }
      result = strcmp(num2, ""); // checking if num2 is missing or not
      if (result == 0)
      {
        SetWindowText(hAnswer, "Missing Number2");
        break;
      }

      int num1Int = atoi(num1); // converting char to integer
      int num2Int = atoi(num2); // converting char to integer
      int answer;               // declaration to store answer

      // string comparision to check which operation to perform
      int opr_Add = strcmp(operation, "ADDITION");
      int opr_Sub = strcmp(operation, "SUBSTATION");
      int opr_Mul = strcmp(operation, "MULTIPLY");
      int opr_Div = strcmp(operation, "DIVIDE");
      int opr_Mod = strcmp(operation, "MODE");

      // Actual logic to perform the operations
      if (opr_Add == 0)
        answer = num1Int + num2Int;

      if (opr_Sub == 0)
        answer = num1Int - num2Int;

      if (opr_Mul == 0)
        answer = num1Int * num2Int;

      if (opr_Div == 0)
      {
        // error handling for / 0
        if (num2Int == 0)
        {
          // resetting states
          strcpy(num1, "");
          strcpy(num2, "");
          strcpy(operation, "");
          strcpy(control, "num1");
          SetWindowText(hAnswer, "Infinite");
          break;
        }

        answer = num1Int / num2Int;
      }

      if (opr_Mod == 0)
        answer = num1Int % num2Int;

      // conversion of integer answer to char
      char buffer[35];
      char *strAnswer;

      strAnswer = _itoa(answer, buffer, 10);

      // setting answer as num1 and resetting states so user can perform more operations
      strcpy(num1, strAnswer);
      strcpy(num2, "");
      strcpy(operation, "");
      strcpy(control, "num1");

      // str output on input
      SetWindowText(hAnswer, strAnswer);
      break;
    case CLEAR:
      // re-setting states for further calculations
      strcpy(num1, "");
      strcpy(num2, "");
      strcpy(operation, "");
      strcpy(control, "num1");
      SetWindowText(hAnswer, "Cleared (Calculator v2)"); // setting Cleared text to input box
      break;
    case LINK_LINKEDIN:
      system("START https://www.linkedin.com/in/sohamganmote/");
      break;
    case LINK_PORTFOLIO:
      system("START https://sohamganmote.vercel.app/");
      break;
    default:
      break;
    }
    break;
  case WM_DESTROY:
    PostQuitMessage(0);
    break;
  default:
    return DefWindowProcW(hWnd, msg, wp, lp); // default inputs sent back to the OS
  }
}

void AddMenus(HWND hWnd)
{
  hMenu = CreateMenu(); // creating menu to add links

  hAboutMenu = CreateMenu(); // creating menu to add links

  hConnectMenu = CreateMenu(); // adding parent for menus
  hLinkedin = CreateMenu();    // linkedin submenu
  hPortfolio = CreateMenu();   // portfolio submenu

  AppendMenu(hMenu, MF_POPUP, (UINT_PTR)hAboutMenu, "About Me");
  AppendMenu(hAboutMenu, MF_STRING, NULL, "Name : Soham Ganmote");
  AppendMenu(hAboutMenu, MF_STRING, NULL, "Designation : Software Developer");

  AppendMenu(hMenu, MF_POPUP, (UINT_PTR)hConnectMenu, "Connect With Me"); // parent menu
  AppendMenu(hConnectMenu, MF_STRING, LINK_LINKEDIN, "Linkedin");         // submenu
  AppendMenu(hConnectMenu, MF_STRING, LINK_PORTFOLIO, "Portfolio");       // submenu

  SetMenu(hWnd, hMenu);
}

void AddControls(HWND hWnd)
{
  // x ,y, width, height,
  //  x = 0 y = 0

  // input box
  hAnswer = CreateWindowW(L"static", L"Calculator v2", WS_VISIBLE | WS_CHILD | WS_BORDER, 0, 0, 350, 100, hWnd, NULL, NULL, NULL);

  // --------------------------------------
  //  x = 0 y = 100

  // clear button
  CreateWindowW(L"Button", L"Clear", WS_VISIBLE | WS_CHILD, 0, 100, 116, 50, hWnd, (HMENU)CLEAR, NULL, NULL);

  // mod button
  CreateWindowW(L"Button", L"./*", WS_VISIBLE | WS_CHILD, 116, 100, 116, 50, hWnd, (HMENU)MODE, NULL, NULL);

  // divide button
  CreateWindowW(L"Button", L"/", WS_VISIBLE | WS_CHILD, 232, 100, 116, 50, hWnd, (HMENU)DIVIDE, NULL, NULL);

  // --------------------------------------
  //  x = 0 y = 150

  // 7 number
  CreateWindowW(L"Button", L"7", WS_VISIBLE | WS_CHILD, 0, 150, 87, 50, hWnd, (HMENU)NUMBER_7, NULL, NULL);

  // 8 number
  CreateWindowW(L"Button", L"8", WS_VISIBLE | WS_CHILD, 87, 150, 87, 50, hWnd, (HMENU)NUMBER_8, NULL, NULL);

  // 9 number
  CreateWindowW(L"Button", L"9", WS_VISIBLE | WS_CHILD, 174, 150, 87, 50, hWnd, (HMENU)NUMBER_9, NULL, NULL);

  // multiply button
  CreateWindowW(L"Button", L"*", WS_VISIBLE | WS_CHILD, 261, 150, 87, 50, hWnd, (HMENU)MULTIPLY, NULL, NULL);

  // --------------------------------------
  //  x = 0 y = 200

  // 4 number
  CreateWindowW(L"Button", L"4", WS_VISIBLE | WS_CHILD, 0, 200, 87, 50, hWnd, (HMENU)NUMBER_4, NULL, NULL);

  // 5 number
  CreateWindowW(L"Button", L"5", WS_VISIBLE | WS_CHILD, 87, 200, 87, 50, hWnd, (HMENU)NUMBER_5, NULL, NULL);

  // 6 number
  CreateWindowW(L"Button", L"6", WS_VISIBLE | WS_CHILD, 174, 200, 87, 50, hWnd, (HMENU)NUMBER_6, NULL, NULL);

  // minus button
  CreateWindowW(L"Button", L"-", WS_VISIBLE | WS_CHILD, 261, 200, 87, 50, hWnd, (HMENU)SUBSTATION, NULL, NULL);

  // --------------------------------------
  //  x = 0 y = 250

  // 1 number
  CreateWindowW(L"Button", L"1", WS_VISIBLE | WS_CHILD, 0, 250, 87, 50, hWnd, (HMENU)NUMBER_1, NULL, NULL);

  // 2 number
  CreateWindowW(L"Button", L"2", WS_VISIBLE | WS_CHILD, 87, 250, 87, 50, hWnd, (HMENU)NUMBER_2, NULL, NULL);

  // 3 number
  CreateWindowW(L"Button", L"3", WS_VISIBLE | WS_CHILD, 174, 250, 87, 50, hWnd, (HMENU)NUMBER_3, NULL, NULL);

  // add button
  CreateWindowW(L"Button", L"+", WS_VISIBLE | WS_CHILD, 261, 250, 87, 50, hWnd, (HMENU)ADDITION, NULL, NULL);

  // --------------------------------------
  //  x = 0 y = 300

  // 0 number
  CreateWindowW(L"Button", L"0", WS_VISIBLE | WS_CHILD, 0, 300, 175, 50, hWnd, (HMENU)NUMBER_0, NULL, NULL);

  // answer number
  CreateWindowW(L"Button", L"=", WS_VISIBLE | WS_CHILD, 175, 300, 175, 50, hWnd, (HMENU)IS_EQUAL_TO, NULL, NULL);
}