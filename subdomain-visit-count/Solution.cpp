class Solution {
private:
  void update_domain_count(map<string, int> &cumulative,
                           string &domain,
                           int count) {
    map<string, int>::iterator i(cumulative.find(domain));
    
    if (cumulative.end() == i)
      cumulative.insert(make_pair(domain, count));
    else
      i->second += count;
  }

  void find_parent_domain(string &domain) {
    while (!domain.empty()) {
      string::iterator i(domain.begin());
      char c(*i);
      
      domain.erase(i);
      
      if ('.' == c)
        break;
    }
  }
  
public:
  vector<string> subdomainVisits(vector<string> &cpdomains) {
    map<string, int> cumulative;
    vector<string> result;

    for (const string cpdomain: cpdomains) {
      istringstream iss(cpdomain);
      int count;
      string domain;

      iss >> count >> domain;

      do {
        update_domain_count(cumulative, domain, count);

        find_parent_domain(domain);
      } while (!domain.empty());
    }

    for (map<string, int>::iterator i(cumulative.begin()); cumulative.end() != i; ++i) {
      ostringstream oss;

      oss << i->second << ' ' << i->first;

      result.push_back(oss.str());
    }

    return result;
  }
};
