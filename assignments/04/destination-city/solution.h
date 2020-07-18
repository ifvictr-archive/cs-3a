#include <algorithm>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        // Separate origin and destination cities into two vectors.
        vector<string> origins;
        vector<string> destinations;
        for (vector<string> path : paths) {
            origins.push_back(path.at(0));
            destinations.push_back(path.at(1));
        }

        // Loop through all the destination cities. If a city is in
        // `destinations`, but not `origins`, that means it's the last city in
        // the journey.
        for (string city : destinations) {
            if (find(origins.begin(), origins.end(), city) == origins.end()) {
                return city;
            }
        }

        return nullptr;
    }
};
