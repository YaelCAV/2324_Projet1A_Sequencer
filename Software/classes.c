//classes ;
//      voice , step , filter, led

struct Voice {
            int voiceMode;
            
            int pw;
            int attack;
            int decay;
            int release;
};

struct Filter {
            int mode;
            int freq;
            int res;
};

struct Step {            
            int state;
            int pitch;
            Voice voice1;
            Voice voice2;
            Voice voice3;
            
};

struct Led {

            int IDred;
            int IDblue;
            int red;
            int blue;
            int dimm;
};
