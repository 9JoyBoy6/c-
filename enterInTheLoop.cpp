

double lastTime = getSystemTime(); 

while (!gameOver) 
{ 
  double currentTime = getSystemTime(); 
  double deltaTime = currentTime - lastTime; 
  CheckInput(); 
  Update(deltaTime); 
  Draw(); 
  lastTime = currentTime; 
}

