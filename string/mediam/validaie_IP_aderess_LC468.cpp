#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

class Solution {
public:
    string validIPAddress(string IP) {
        if (count(IP.begin(), IP.end(), '.') == 3) {
            if (IP[IP.size() - 1] == '.') return "Neither";
            
            stringstream ss(IP);
            string token;
            
            while (getline(ss, token, '.')) {
                if (token.length() == 0 || token.length() > 3) return "Neither";
                if (token[0] == '0' && token.length() > 1) return "Neither";
                for (char c : token) if (!isdigit(c)) return "Neither";
                if (stoi(token) > 255) return "Neither";
            }
            return "IPv4";
        }
        else if (count(IP.begin(), IP.end(), ':') == 7) {
            if (IP[IP.size() - 1] == ':') return "Neither";
            
            stringstream ss(IP);
            string token;
            
            while (getline(ss, token, ':')) {
                if (token.length() == 0 || token.length() > 4) return "Neither";
                for (char c : token) if (!isxdigit(c)) return "Neither";
            }
            return "IPv6";
        }
        
        return "Neither";
    }
};

int main() {
    Solution sol;

    string ip1 = "172.16.254.1";
    string ip2 = "2001:0db8:85a3:0:0:8A2E:0370:7334";
    string ip3 = "256.256.256.256";

    cout << ip1 << " -> " << sol.validIPAddress(ip1) << endl;
    cout << ip2 << " -> " << sol.validIPAddress(ip2) << endl;
    cout << ip3 << " -> " << sol.validIPAddress(ip3) << endl;

    return 0;
}