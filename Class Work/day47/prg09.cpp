#include<iostream>
#include<memory>
#include<string>
#include<vector>

using namespace std;

class Article
{
	string content;
public:
	Article(const string& text) :content(text)
	{
		cout << "[Article Created]: " << content << endl;
	}

	void read() const
	{
		cout << "Reading article: " << content << endl;
	}

	~Article()
	{
		cout << "[Article Deleted]: " << content << endl;
	}
};

class Subscriber
{
private:
	shared_ptr<Article>article;
public:
	Subscriber(shared_ptr<Article> a):article(a)
	{
		cout << "[Subscriber created]: " << endl;
	}

	void readArticle() const
	{
		if (article)
		{
			article->read();
		}
		else
		{
			cout << "No articles to read " << endl;
		}
	}

	~Subscriber()
	{
		cout << "[Subscriber Deleted] " << endl;
	}
};

int main()
{

	shared_ptr<Article>article = make_shared<Article>("Breaking news: C++ Rocks");
	{
		Subscriber s1(article);
		Subscriber s2(article);
		Subscriber s3(article);

		s1.readArticle();
		s2.readArticle();
		s3.readArticle();

		cout << "Use count (shared_ptr): " << article.use_count() << endl;

	}

	cout << "After all subscribers are gone..." << endl;
	cout << "Use count (shared_ptr): " << article.use_count() << endl;

	return 0;
}

