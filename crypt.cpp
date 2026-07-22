#include <bits/stdc++.h> 
using namespace std; 
 
typedef unsigned long long ull; 
 
// Rotate right 
ull ROTR(ull x, int n) { 
    return (x >> n) | (x << (64 - n)); 
} 
 
// SHA functions 
ull Ch(ull x, ull y, ull z) { 
    return (x & y) ^ (~x & z); 
} 
 
ull Maj(ull x, ull y, ull z) { 
    return (x & y) ^ (x & z) ^ (y & z); 
} 
 
ull Sigma0(ull x) { 
    return ROTR(x, 28) ^ ROTR(x, 34); 
} 
 
ull Sigma1(ull x) { 
    return ROTR(x, 14) ^ ROTR(x, 18); 
} 
 
int main() { 
    string msg = "VIT"; 
 
    cout << "Step 1: Original Message: " << msg << endl; 
 
    // Convert to ASCII 
    vector<ull> data; 
    for(char c : msg) 
        data.push_back((ull)c); 
 
    cout << "\nStep 2: ASCII Values:\n"; 
    for(auto x : data) 
        cout << x << " "; 
    cout << endl; 
 
    // Initial hash values 
    ull a = 0x6a09e667f3bcc908; 
    ull b = 0xbb67ae8584caa73b; 
    ull c = 0x3c6ef372fe94f82b; 
    ull d = 0xa54ff53a5f1d36f1; 
    ull e = 0x510e527fade682d1; 
    ull f = 0x9b05688c2b3e6c1f; 
    ull g = 0x1f83d9abfb41bd6b; 
    ull h = 0x5be0cd19137e2179; 
 
    cout << "\nStep 3: Initial Values Loaded\n"; 
 
    // Take first word (simplified) 
    ull w0 = ((ull)'V' << 56); 
 
    cout << "Step 4: First Word (w0): " << hex << w0 << endl; 
 
    ull k0 = 0x428a2f98d728ae22; 
 
    ull ch = Ch(e,f,g); 
    cout << "Step 5: Ch = " << ch << endl; 
 
    ull maj = Maj(a,b,c); 
    cout << "Step 6: Maj = " << maj << endl; 
 
    ull s1 = Sigma1(e); 
    cout << "Step 7: Sigma1 = " << s1 << endl; 
 
    ull s0 = Sigma0(a); 
    cout << "Step 8: Sigma0 = " << s0 << endl; 
 
    ull T1 = h + s1 + ch + k0 + w0; 
    cout << "Step 9: T1 = " << T1 << endl; 
 
    ull T2 = s0 + maj; 
    cout << "Step 10: T2 = " << T2 << endl; 
 
    ull newE = d + T1; 
    cout << "Step 11: Updated E = " << newE << endl; 
 
    return 0; 
}