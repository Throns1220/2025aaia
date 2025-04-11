// week08-6_bubble_balloon_part3
void setup(){
  size(500,400);
}
void draw(){
  background(204);
  for(int i=0;i<n;i++){
    ellipse(x[i],y[i]-s[i]/2,s[i]*0.75,s[i]);
    if(mousePressed && i==n-1) s[i]+=2;
    if((mousePressed==false || i!=n-1) && y[i]>s[i]) y[i]-=2;
  }
}
float[]x=new float[100]; // Java 的陣列宣告
float[]y=new float[100];
float[]s=new float[100]; // 可放100個氣球
int n=0; // 現在有0個氣球
void mousePressed(){
  x[n]=mouseX;
  y[n]=mouseY;
  s[n]=1;
  n++;
}
