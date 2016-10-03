//char msg[15] = "HELLO IOT WORLD";


// dot  - 0
// dash - 1

int dot = 150;
int dash = 3 * dot;
int space_same_letter = dot;
int space_letters = 3 * dot;
int space_words = 7 * dot;

char msg[] = "HELLO IOT WORLD";

int A[] = {0, 1};
int B[] = {1, 0, 0, 0};
int C[] = {1, 0, 1, 0};
int D[] = {1, 0, 0};
int E[] = {0};
int F[] = {0, 0, 1, 0};
int G[] = {1, 1, 0};
int H[] = {0, 0, 0, 0};
int I[] = {0, 0};
int J[] = {0, 1, 1, 1};
int K[] = {0, 1, 0};
int L[] = {0, 1, 0, 0};
int M[] = {1, 1};
int N[] = {1, 0};
int O[] = {0, 0, 0};
int P[] = {0, 1, 1, 0};
int Q[] = {1, 1, 0, 1};
int R[] = {0, 1, 0};
int S[] = {0, 0, 0};
int T[] = {1};
int U[] = {0, 0, 1};
int V[] = {0, 0, 0, 1};
int W[] = {0, 1, 1};
int X[] = {1, 0, 0, 1};
int Y[] = {1, 0, 1, 1};
int Z[] = {1, 1, 0, 0};

int _1[] = {0, 1, 1, 1, 1};
int _2[] = {0, 0, 1, 1, 1};
int _3[] = {0, 0, 0, 1, 1};
int _4[] = {0, 0, 0, 0, 1};
int _5[] = {0, 0, 0, 0, 0};
int _6[] = {1, 0, 0, 0, 0};
int _7[] = {1, 1, 0, 0, 0};
int _8[] = {1, 1, 1, 0, 0};
int _9[] = {1, 1, 1, 1, 0};
int _0[] = {1, 1, 1, 1, 1};

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  int i = 0;
  int position = 0;
  while (msg[i] != '\0') {
    char letter = msg[i];
    if (letter == ' ') {
      // Space bettwen words
      digitalWrite(LED_BUILTIN, LOW);
      delay(space_words);
    } else {
      int* signal = getSignal(letter);
      Serial.print(letter);
      for (int j = 0; j < sizeof(signal); j++) {
        digitalWrite(LED_BUILTIN, HIGH);
        //Process letter
        if (letter == 0) {
          delay(dot);
        } else if (letter == 1) {
          delay(dash);
        }

        // Space bettwen parts of letter
        digitalWrite(LED_BUILTIN, LOW);
        delay(space_same_letter);
      }
      // Space bettwen letters
      digitalWrite(LED_BUILTIN, LOW);
      delay(space_letters);
    }
  }
}

int* getSignal(char letter) {
  switch (letter) {
    case 'A': return A;
    case 'B': return B;
    case 'C': return C;
    case 'D': return D;
    case 'E': return E;
    case 'F': return F;
    case 'G': return G;
    case 'H': return H;
    case 'I': return I;
    case 'J': return J;
    case 'K': return K;
    case 'L': return L;
    case 'M': return M;
    case 'N': return N;
    case 'O': return O;
    case 'P': return P;
    case 'Q': return Q;
    case 'R': return R;
    case 'S': return S;
    case 'T': return T;
    case 'U': return U;
    case 'V': return V;
    case 'W': return W;
    case 'X': return X;    
    case 'Y': return Y;
    case 'Z': return Z;
    case '0': return _0;
    case '1': return _1;
    case '2': return _2;
    case '3': return _3;
    case '4': return _4;    
    case '5': return _5;
    case '6': return _6;
    case '7': return _7;
    case '8': return _8;
    case '9': return _9;    
  }
}

