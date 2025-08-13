string printSequence(string s)
{
    //code here.
    string ans;
    for(int i=0;i<s.size();i++){
        switch(s[i]){
            case 'A': ans.push_back('2');break;
            case 'B': ans+="22";break;
            case 'C': ans+="222"; break;
            case 'D': ans+= "3"; break;
            case 'E': ans+="33";break;
            case 'F': ans+="333"; break;
            case 'G': ans+= "4"; break;
            case 'H': ans+="44";break;
            case 'I': ans+="444"; break;
            case 'J': ans+= "5"; break;
            case 'K': ans+="55";break;
            case 'L': ans+="555"; break;
            case 'M': ans+= "6"; break;
            case 'N': ans+="66";break;
            case 'O': ans+="666"; break;
            case 'P': ans+= "7"; break;
            case 'Q': ans+="77";break;
            case 'R': ans+="777"; break;
            case 'S': ans+= "7777"; break;
            case 'T': ans+="8";break;
            case 'U': ans+="88"; break;
            case 'V': ans+="888"; break;
            case 'W': ans+= "9"; break;
            case 'X': ans+="99";break;
            case 'Y': ans+="999"; break;
            case 'Z': ans+= "9999"; break;
            default: ans+="0";
        }
    }
    return ans;
}