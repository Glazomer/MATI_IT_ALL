#include <iostream> 
#include <string> 
#include <vector> 
#include <map> 

struct Address { 
  const unsigned index; 
  const std::string city; 
  const std::string street; 
  const unsigned house;
}; 
 
bool CheckCitiesSameIndex (std::vector<Address> &a) {
  for (int i = 0; i < a.size(); ++i) {
    for (int j = i + 1; j < a.size(); ++j) {
      if (a[i].index == a[j].index && a[i].city != a[j].city) {
        return true;
      }
    }
  }
  return false;
}

unsigned MostIndex(std::vector<Address> &a) {
  unsigned most = 0;
  std::map<unsigned, unsigned> counter;
  for (int i = 0; i < a.size(); ++i) {
    ++counter[a[i].index];
  }
  for (std::map<unsigned, unsigned>::iterator it = counter.begin(); it != counter.end(); ++it) {
    if (counter[most] < it->second) {
      most = it->first;
    }
  }
  return most;
}

int main(int argc, char** argv) { 
  std::vector<Address> a;
  a.push_back((Address){123456, "Moscow", "Lenina", 10});
  a.push_back((Address){987654, "Moscow", "Revolution", 17});
  a.push_back((Address){555666, "Tver", "Bolotnaya", 1});
  a.push_back((Address){123456, "Moscow", "Kinoshnaya", 24});

  std::cout << "CheckCitiesSameIndex: " << CheckCitiesSameIndex(a) << std::endl;
  std::cout << "MostIndex: " << MostIndex(a) << std::endl;
  return 0; 
} 