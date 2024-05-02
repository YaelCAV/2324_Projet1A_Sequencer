void Sequence (float tempo); // joue la sequence suivant le tempo
void tapTempo(); // règle le tempo en calculant la moyenne entre temps appuyés
void Play( int pitch); //prends un couple (octave,note)  et envoie à la puce la note à jouer
void ParamVoice(Voice voice); //envoie à la puce les données pour modifier la voix avec les paramètres donnés par la step
void editStep(Step step ,int pitch , Filter filter); // change les paramètres de la step en fonction des paramètres actuels des potars


int getPitch (); // renvoie un couple (octave,note) en lisant les valeurs de potentiometres associés
int getParam(Voice voice); // recupère les paramètres d'une voix
int getFilter(Filter filter); // récupère les paramètres du filtre
int getButton(int button);
void getGPIOExpander();
void writeLED(Led led);
void writeMOS(Step step);
