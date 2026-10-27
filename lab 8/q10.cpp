#include <iostream>
using namespace std;

class Recommender
{
public:
    virtual void generateRecommendation(int userRating, int popularity)
    {
        cout << "Recommendation score" << endl;
    }
};

class PersonalizedRecommender : public Recommender
{
public:
    void generateRecommendation(int userRating, int popularity) override
    {
        double score = 0.7 * userRating + 0.3 * popularity;

        cout << "Personalized Recommendation Score: "
             << score << endl;
    }
};

class TrendingRecommender : public Recommender
{
public:
    void generateRecommendation(int userRating, int popularity) override
    {
        double score = 0.3 * userRating + 0.7 * popularity;

        cout << "Trending Recommendation Score: "
             << score << endl;
    }
};

int main()
{
    PersonalizedRecommender personalized;
    TrendingRecommender trending;

    Recommender *r1 = &personalized;
    Recommender *r2 = &trending;

    r1->generateRecommendation(80, 60);
    r2->generateRecommendation(80, 60);

    return 0;
}