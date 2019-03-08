#include <iostream>

using namespace std;

int permute(int places, int *combination, int *comb, int step){
    if(step > 1) {
        for(int i=0;i<step-1;i++){
            permute(places, combination, comb + 1, step-1);
            if(step == 2) {
                for (int i=0;i<places;i++)printf("%i",combination[i]);
                printf("\n");
            }
            int t=comb[0];
            comb[0]=comb[1];
            comb[1]=t;
            if(step == 2) {
                for (int i=0;i<places;i++)printf("%i",combination[i]);
                printf("\n");
            }
        }
        permute(places, combination, comb + 1, step-1);
    }
}

int main()
{
    cout << "enter number of places" << endl;
    int places;
    int i;
    cin >> places;
    int combination[places];
    for (i=0;i<places;i++)combination[i]=i+1;
    permute(places, combination, combination, places);
    return 0;
}
