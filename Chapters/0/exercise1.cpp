/*
 * This program will run but the return value is not associated
 * to anything. A compiler warning shows.
 *
 * exercise1.cpp:3:7: warning: expression result unused [-Wunused-value]
 *     3 + 4;
 *     ~ ^ ~
 *     1 warning generated.
 *
 */

int main()
{
    3 + 4;
    return 0;
}
