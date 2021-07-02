const char* ari(char s[1000]){
    
    int char_count=0,word_count=0,sent_count=0,ari;

    for(int i=0;i<strlen(s);i++){

        if(isalnum(s[i])){
            char_count++;
            continue;
        }
        else if(s[i] == ' ' && s[i+1] != ' '){
            word_count++;
        }
        else if(s[i] == '.'||s[i] == '?'){
            sent_count++;
            continue;
        }else{
            continue;
        }
    }
    ari=round( (4.71 * char_count/word_count) + (0.5 * word_count/sent_count) - 21.43);
    switch(ari){
        case 1 : return "Kindergarten";
        break;
        case 2 : return "First/Second Grade";
        break;
        case 3 : return "Third Grade";
        break;
        case 4 : return "Fourth Grade";
        break;
        case 5 : return "Fifth Grade";
        break;
        case 6 : return "Sixth Grade";
        break;
        case 7 : return "Seventh Grade";
        break;
        case 8 : return "Eighth Grade";
        break;
        case 9 : return "Ninth Grade";
        break;
        case 10 : return "Tenth Grade";
        break;
        case 11 : return "Eleventh Grade";
        break;
        case 12 : return "Twelfth Grade";
        break;
        case 13 : return "College Student";
        break;
        case 14 : return "Professor";
        break;
        default: break;
        }
   
}
