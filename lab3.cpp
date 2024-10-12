#include <algorithm>
#include <iostream>
#include <random>
#include <vector>
using namespace std;

template<class T>
vector<T> generate_random_vector(size_t num, T min = -10, T max = 10)
{
    random_device rd;
    mt19937 e2(rd());
    uniform_real_distribution<> dist(min, max);

    auto lambda = [&e2, &dist] () -> T { return dist(e2); };

    vector<T> result(num);
    generate_n(result.begin(), num, lambda);
    return result;
}


int main()
{
    cout << "1" << endl;
    cout << "enter a number A" << endl;
    int A;
    cin >> A;
    vector<float> v1 = generate_random_vector<float>(10, 1, 10);
    for (int i = 0; i < v1.size(); i++)
    {
        v1[i] = (v1[i] * 2 - A) / v1[0];
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << endl;

    cout << "2" << endl;
    vector<int> v2 = generate_random_vector<int>(20, -10, 10);
    cout << "enter a number k1" << endl;
    int k1;
    cin >> k1;
    cout << "enter a number k2 bigger than k1" << endl;
    int k2;
    cin >> k2;
    cout << "enter a number s1" << endl;
    int s1;
    cin >> s1;
    cout << "enter a number s2 bigger than s1" << endl;
    int s2;
    cin >> s2;
    int sum1 = 0, sum2 = 0, sum3 = 0, sumk1_k2 = 0;
    float average1 = 0, averages1_s2 =0;
    for (int i = 0; i < v2.size(); i++)
    {
        sum1 += v2[i];
        sum2 += v2[i] * v2[i];
        if (i < 6)
        {
            sum3 += v2[i];
        }
        if (i >= k1 && i < ++s2)
        {
            sumk1_k2 += v2[i];
        }
        average1 += v2[i];
        if (i >= s1 && i < ++s2)
        {
            averages1_s2 += v2[i];
        }

    }
    cout << "the sum of all the element = " << sum1 << endl;
    cout << "the sum of the squares all the element = " << sum2 << endl;
    cout << "the sum of first six elements = " << sum3 << endl;
    cout << "the sum of elements from k1 to k2 = " << sumk1_k2 << endl;
    cout << "the average of all the elements = " << average1 / v2.size() << endl;
    cout << "the average of elements from s1 to s2 = " << averages1_s2 / ( s2 - s1 + 1) << endl;
    cout << endl;

    cout << "3" << endl;
    int k;
    vector<int> v3 = generate_random_vector<int>(20, -10, 10);
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;
    k = v3[0];
    v3[0] = v3[17];
    v3[17] = k;
    k = v3[1];
    v3[1] = v3[18];
    v3[18] = k;
    k = v3[2];
    v3[2] = v3[19];
    v3[19] = k;
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;
    cout << endl;

    cout << "4" << endl;
    vector<int> v4 = generate_random_vector<int>(20, -10, 10);
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }
    cout << endl;
    int n1 = 0, n2 = 0;
    for (int i = 0; i < v4.size(); i++)
    {
        if (v4[i] < 0 && n1 == 0)
        {
            v4.erase(v4.begin() + i);
            ++n1;
        }
        if (v4[i] % 2 == 0 && v4[i] != 0)
        {
            n2 = i;
        }
        if (i == v4.size() - 1)
        {
            v4.erase(v4.begin() + n2);
        }
    }
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }
    cout << endl;
    cout << endl;

    cout << "5" << endl;
    string city;
    cout << "enter the name of the city" << endl;
    cin >> city;
    if (city.size() % 2 == 0)
    {
        cout << "even" << endl;
    }
    else cout << "odd" << endl;
    cout << endl;

    cout << "6" << endl;
    string surname1, surname2;
    cout << "enter the surname1" << endl;
    cin >> surname1;
    cout << "enter the surname2" << endl;
    cin >> surname2;
    if (surname1.size() > surname2.size())
    {
        cout << "the surname1 is greater than the surname2" << endl;
    }
    else if(surname1.size() < surname2.size())
    {
        cout << "the surname1 is less than the surname2" << endl;
    }
    else cout << "the surname1 is equal the surname2" << endl;
    cout << endl;

    cout << "7" << endl;
    string city1, city2, city3;
    cout << "enter the city1" << endl;
    cin >> city1;
    cout << "enter the city2" << endl;
    cin >> city2;
    cout << "enter the city3" << endl;
    cin >> city3;
    if (city1.size() > city2.size() && city1.size() > city3.size())
    {
        cout << "the longest city is " << city1 << endl;
    }
    else if (city2.size() > city1.size() && city2.size() > city3.size())
    {
        cout << "the longest city is " << city2 << endl;
    }
    else cout << "the longest city is " << city3 << endl;
    cout << endl;

    cout << "8" << endl;
    string word;
    cout << "enter the word" << endl;
    cin >> word;
    int m, n;
    cout << "enter the number m" << endl;
    cin >> m;
    cout << "enter the number n" << endl;
    cin >> n;
    n = n - m;
    word.erase(0, m);
    word.erase(++n, word.size());
    cout << word << endl;
    cout << endl;

    cout << "9" << endl;
    string word_1, zv;
    cout << "enter the word_1" << endl;
    cin >> word_1;
    for (int i = 0; i < word_1.size(); i++)
        zv+="*";
    cout << zv + word_1 + zv<< endl;
    cout << endl;

    cout << 10 << endl;
    string sentence;
    cout << "enter the sentence" << endl;
    cin >> sentence;
    float kol = 0;
    for (int i = 0; i < sentence.size(); i++)
    {
        if (sentence[i] == 'a')
        {
            ++kol;
        }
    }
    kol = kol * 100 / sentence.size();
    cout << kol << "%" << endl;
    cout << endl;

    cout << 11 << endl;
    int id, q;
    string sentence2 = "Can you can a can as a canner can can a can?", newWord;
    cout << "enter a new word" << endl;
    cin >> newWord;
    for (int i = 0; i < sentence2.size(); i++)
    {
        if (i + 3 > sentence2.size()) break;
        if ((sentence2[i] == 'c' || sentence2[i] == 'C') && sentence2[i + 1] == 'a' && sentence2[i + 2] == 'n' && sentence2[i + 3] != 'n')
        {
            sentence2.replace(i, 3, newWord);
        }
    }
    cout << sentence2 << endl;



}

