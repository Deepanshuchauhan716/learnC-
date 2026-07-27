// * SWITCH EK SELECTION STATEMENT HAI 
// * JAB KISI EK EXPRESSION KI VALUE ME SE EK BLOCK CHLAANA HO TAB SWITCH KA USE HOTA HAI

// * EXAMPLE
// * 1 -> MONDAY
// * 2 -> TUESDAY
// * 3 -> WEDNESDAY

// * YAHA BAAR BAAR IF ELSE LIKHNE KI JGH SWITCH CASE KA USE KRO

// ******************* SYNTAX ************************

// switch (expression)
// {
// case constant expression:
//     /* code */
//     break;

// default:
//     break;
// }

// ************* EXAMPLE ***************

#include<iostream>
using namespace std;
int main(){

    int day = 2;

    switch (day)
    {
    case 1:
        cout << "Mon";
        break;
    case 2:
        cout << "tue";
        break;
    case 3:
        cout << "wed";
        break;
    case 4:
        cout << "thu";
        break;
    case 5:
        cout << "fri";
        break;
    case 6:
        cout << "sat";
        break;
    case 7:
        cout << "sun";
        break;
    
    default:
        cout<< "Invalid day";
    }

    // *SWITCH CASE NE DEKHA KI DAY 1 ❌ DAY 2 ✅ TO CASE 2 PE JO BHI CODE RHA HOGA USNE USE EXECUTE KIYA

    // * AGAR HUM BREAK KA USE NHI KRTE TO DAY 2 TO EXECUTE HOTA HI BUT USKE SAATH NICHE WAALE SAB CASE BHI EXECUTE HO JAATE

    // * DEFAULT KA USE ISLIYE HUA KI AGAR KOI BHI CASE MATCH NA HUA TO DEFAULT KA CASE CHLEGA

    // * KON KON SE DATA TYPE KE SAATH USE KR SKTE HAI

    // INT ✅
    // CHAR ✅
    // ENUM ✅
    // FLOAT ❌
    // DOUBLE ❌
    // STRING ❌

    // **************************************** BREAK ***************************************

    // * BREAK EK JUMP STATEMENT HAI JO CURRENT LOOP YA SWITCH KO TURANT KHTAM KAR DETA HAI AUR CONTROL USKE BAAD WAALI LINE PAR CHLA JAATA HAI

    // JAHA BREAK MILE VHA SE BHAR NIKL JAAO

    // * BREAK KHA KHA USE HOTA HAI

    // SWITCH 
    // FOR LOOP
    // WHILE LOOP 
    // DO WHILE LOOP 

    //  ******************************** CONTINUE ******************************************

    // * CONTINUE CURRENT ITERATION KO SKIP KAR DETA HAI AUR LOOP KI NEXXT ITERATION PAR CHLA JAATA HAI

    // EXAMPLE
    for(int i = 1; i <= 5 ;i++){
        if(i == 1){
            continue;
        }
        cout<< i << " "; // 2 3 4 5 kyoki 1 skip ho gya continue ki wjh se
    }
    
}