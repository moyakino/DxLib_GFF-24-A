#pragma once

class Stage
{
private:
	int StageX;
	int StageY;

public:
	Stage();
	~Stage();

	void Update();

	//�`�揈��
	void Draw() const;


};