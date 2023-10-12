/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int shikhar(MountainArray &a,int t,int h){
        if(a.get(0)>a.get(1)) return 0;
        else if(a.get(h)>a.get(h-1)) return h;
        int l=1; h--;
        while(l<=h){
            int m=l+(h-l)/2;
            int e1=a.get(m);
            int e0=a.get(m-1);
            if(e1>e0 && e1>a.get(m+1)) return m;
            else if(e1>e0) l=m+1;
            else h=m-1;
        }
        return 69;
    }
    int bin(MountainArray &a,int t,int l,int h){
        while(l<=h){
            int m=l+(h-l)/2;
            int e=a.get(m);
            if(e==t) return m;
            else if(e<t) l=m+1;
            else h=m-1;
        }
        return -1;
    }
    int urfataBin(MountainArray &a,int t,int l,int h){
        while(l<=h){
            int m=l+(h-l)/2;
            int e=a.get(m);
            if(e==t) return m;
            else if(e>t) l=m+1;
            else h=m-1;
        }
        return -1;
    }
    int findInMountainArray(int t, MountainArray &a) {
       int h=a.length(); h--;
        int s=shikhar(a,t,h);
        int f=bin(a,t,0,s);
        if(f!=-1) return f;
        int z=urfataBin(a,t,s+1,h);
        return z;

    }
};