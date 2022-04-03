/**
 * @brief Get the Column Width object
 * @note This find the center of the screen
 * @return int 
 */
int GetColumnWidth()
{
    CONSOLE_SCREEN_BUFFER_INFO info;
    HANDLE out;
    if (!(out = GetStdHandle(STD_OUTPUT_HANDLE)) ||
        !GetConsoleScreenBufferInfo(out, &info))
        return 80;
    return info.dwSize.X;
}