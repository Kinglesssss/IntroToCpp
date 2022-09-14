#pragma once

#include "raylib.h"
#include <string>
#include <vector>

using namespace std;

class DataFile
{
public://setting up the record struct
	struct Record {
		Image image;
		string name;
		int age;
	};

private://initialising the record count
	int recordCount;
	std::vector<Record*> records;
	std::vector<int> recordSizes;


public:
	DataFile();
	~DataFile();

	void AddRecord(string imageFilename, string name, int age);
	Record* GetRecord(int index, string filename);

	int GetRecordCount() { return recordCount; };

	void Save(string filename);
	void Load(string filename);

private:
	void Clear();

};

