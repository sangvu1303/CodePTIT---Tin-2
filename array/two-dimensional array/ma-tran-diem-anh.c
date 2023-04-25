#include <stdio.h>

typedef long long ll;

int main(){
	int t; scanf("%d", &t);
	while (t--){
		int n,m; scanf("%d %d", &n, &m);
		char f[n][m];
		for (int i=0; i<n; i++) scanf("%s", &f[i]);
		ll cnt=0;
		for (int i=0; i<n; i++){
			int cnt1=0, cnt2=0;
			for (int j=0; j<m; j++){
				if (f[i][j]=='0') continue;
				for (int k=0; k<m; k++){
					if (f[i][j]=='1' && f[i][k]=='2') ++cnt1;
					if (f[i][j]=='2' && f[i][k]=='1') ++cnt1;
				}
				for (int k=0; k<n; k++){
					if (f[i][j]=='1' && f[k][j]=='2') ++cnt2;
					if (f[i][j]=='2' && f[k][j]=='1') ++cnt2;
				}
				cnt+=1ll*cnt1*cnt2;
				cnt1=0;
				cnt2=0;
			}
		}
		printf("%lld\n", cnt);
	}
	return 0;
}