#include <iostream>
#include <vector>
using namespace std;

const int WIDTH = 40;
const int HEIGHT = 40;

void putPixel(vector<vector<char>>& canvas, int x, int y) {
  if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT) canvas[y][x] = '*';
}

void plotCirclePoints(vector<vector<char>>& canvas, int xc, int yc, int x,
                      int y) {
  putPixel(canvas, xc + x, yc + y);
  putPixel(canvas, xc - x, yc + y);
  putPixel(canvas, xc + x, yc - y);
  putPixel(canvas, xc - x, yc - y);
  putPixel(canvas, xc + y, yc + x);
  putPixel(canvas, xc - y, yc + x);
  putPixel(canvas, xc + y, yc - x);
  putPixel(canvas, xc - y, yc - x);
}

void drawCircle(vector<vector<char>>& canvas, int xc, int yc, int r) {
  int x = 0, y = r;
  int d = 3 - 2 * r;
  while (x <= y) {
    plotCirclePoints(canvas, xc, yc, x, y);
    if (d < 0)
      d += 4 * x + 6;
    else {
      d += 4 * (x - y) + 10;
      y--;
    }
    x++;
  }
}

int main() {
  vector<vector<char>> canvas(HEIGHT, vector<char>(WIDTH, ' '));
  drawCircle(canvas, 20, 20, 10);

  for (int y = 0; y < HEIGHT; ++y) {
    for (int x = 0; x < WIDTH; ++x) cout << canvas[y][x];
    cout << '\n';
  }

  return 0;
}
