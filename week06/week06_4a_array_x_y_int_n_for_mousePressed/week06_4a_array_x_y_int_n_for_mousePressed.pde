// week06_4a_array_x_y_int_n_for_mousePressed
// 從week04-5 延伸過來 利用 for迴圈 + 陣列，畫出很多飼料不會動
void setup(){
  size(600,400);
}
float [] x = new float[100]; //有100個x和100個y
float [] y = new float[100]; // Java的陣列宣告
int n = 0; // 飼料有n個
void draw(){
  background( #C0FFEE ); //咖啡青色 0不是o
  for(int i=0; i<n; i++){
    ellipse(x[i],y[i],8,8);
    y[i] += 2;
  }
}
void mousePressed(){
  x[n]=mouseX;
  y[n]=mouseY;
  n++; // 增加1顆飼料
}
