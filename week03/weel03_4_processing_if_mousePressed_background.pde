// weel03-4_processing_if_mousePressed_background
// File-Preference 偏好設定，把字型放大36
// 程式的字變大
void setup(){
  size(400, 400); // 開啟400x400的視窗
}

void draw(){
  if(mousePressed) background(255, 0, 255);
  else background(0, 255, 0);
}
