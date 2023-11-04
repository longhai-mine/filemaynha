    #include <bits/stdc++.h>
    #define int long long
    using namespace std;

    const int N = 1e6 + 10;

    int n, r, k, ans;
    int a[N], b[N], s[N];

    long long check(int x)
    {
        for(int i = 1; i <= n; i++)
            s[i] = 0;
        int cnt = 0;
        int val = 0;
        for(int i = 1; i <= n; i++)
        {
            cnt += s[i];
            if(x - (b[i] + cnt) > 0)
            {
                cnt += x - b[i];
                s[min(n, i + 2 * r + 1)] -= x - b[i];
                val += x - b[i];
                //cout << i << " " <<  cnt << " " << val << "\n";
            }
           // cout << cnt << " ";
        }
        return val;
    }

    main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        cin >> n >> r >> k;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            int l = max(1LL, i - r);
            int r_ = min(n, i + r);
            b[l] += a[i];
            b[r_ + 1] -= a[i]; 
            //cout << l << " " << r_ << endl;
        }
        for(int i = 1; i <= n; i++)
          b[i] += b[i - 1];
        long long l = 1, r_ = 1e12;
        while(l <= r)
        {
            int mid = (l + r_) / 2;
            if(check(mid) <= k)
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r_ = mid - 1;
        }
        cout << ans;
    }
