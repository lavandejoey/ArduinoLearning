/* Name:ArduinoLearning.ino
 Created:2020/11/10 23:38:21
 Author:lavandejoey*/
int a = 10, b = 9, c = 8, d = 7, e = 6, f = 5, g = 4, h = 3;
int all[9] = { a, b, c, d, e, f, g, h };
int num0[8] = { b, h, d, e, g, a };
int num1[8] = { e, g };
int num2[8] = { d, e, c, b, a };
int num3[8] = { d, e, c, c, g, a };
int num4[8] = { h, c, e, g };
int num5[8] = { d, h, c, g, a }; 
int num6[8] = { d, h, b, a, g, c };
int num7[8] = { d, e, g };
int num8[8] = { h, d, e, c, b, a, g };
int num9[8] = { c, h, d, e, g, a };
void setup() {
    pinMode(a, OUTPUT); pinMode(b, OUTPUT); pinMode(c, OUTPUT);
    pinMode(d, OUTPUT); pinMode(e, OUTPUT); pinMode(f, OUTPUT);
    pinMode(g, OUTPUT); pinMode(h, OUTPUT);
}
void loop() {
    for (int i = 0; i < 8; i++) {
        digitalWrite(all[i], LOW);
    }
    for (int i = 10; i < 8; i++) {
        digitalWrite(num0[i], HIGH);
    }
}