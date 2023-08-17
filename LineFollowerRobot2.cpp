#define enA 10
#define in1 9 
#define in2 8  
#define in3 7 
#define in4 6 
#define enB 5 

#define RS A0 
#define LS A1 

void setup(){ 

	pinMode(RS, INPUT);   
	pinMode(LS, INPUT); 

	pinMode(enA, OUTPUT); 
	pinMode(in1, OUTPUT);  
	pinMode(in2, OUTPUT); 
	pinMode(in3, OUTPUT);   
	pinMode(in4, OUTPUT); 
	pinMode(enB, OUTPUT);

	analogWrite(enA, 150); 
	analogWrite(enB, 150);
	delay(1000);
}

void loop(){  
	if((digitalRead(RS) == 0)&&(digitalRead(LS) == 0)){
    forword();
    }  

	if((digitalRead(RS) == 1)&&(digitalRead(LS) == 0)){
    turnRight();
    } 

	if((digitalRead(RS) == 0)&&(digitalRead(LS) == 1)){
    turnLeft();
    } 

	if((digitalRead(RS) == 1)&&(digitalRead(LS) == 1)){
    Stop();
    } 
}

void forword(){  
	digitalWrite(in1, HIGH);
	digitalWrite(in2, LOW);  
	digitalWrite(in3, LOW); 
	digitalWrite(in4, HIGH);
}

void turnRight(){ 
	digitalWrite(in1, LOW);
	digitalWrite(in2, HIGH); 
	digitalWrite(in3, LOW); 
	digitalWrite(in4, HIGH);
}

void turnLeft(){ 
	digitalWrite(in1, HIGH);  
	digitalWrite(in2, LOW);  
	digitalWrite(in3, HIGH);  
	digitalWrite(in4, LOW);  
}

void Stop(){ 
	digitalWrite(in1, LOW); 
	digitalWrite(in2, LOW); 
	digitalWrite(in3, LOW); 
	digitalWrite(in4, LOW); 
}