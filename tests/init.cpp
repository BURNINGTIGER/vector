#include <vector.hpp>
#include <catch.hpp>

SCENARIO("vector init", "[init]") {
	vector_t vector;
	REQUIRE(vector.size() == 0);
	REQUIRE(vector.capacity() == 0);
}

SCENARIO("vector with param", "[init]") {
	vector_t vector(3);
	REQUIRE(vector.size() == 3);
	REQUIRE(vector.capacity() == 3);
	for(unsigned int i=0; i<vector.size();++i){
		REQIRE(vector[i]==0);
	}
}

SCENARIO("size", "[init]") {
	vector_t vector(3);
	REQUIRE(vector.size() == 3);
}

CENARIO("capacity", "[init]") {
	vector_t vector(3);
	REQUIRE(vector.capacity() == 3);
}

CENARIO("pr", "[init]") {
	vector_t vector(3);
	REQUIRE(vector[1] == 0);
}

CENARIO("push", "[init]") {
	vector_t vector(3);
	vector.push_back(4);
	REQUIRE(vector[4] == 4);
}

CENARIO("=", "[init]") {
	vector_t vector(3),v2;
	vector.push_back(4);
	v2=vector;
	REQUIRE(vector.size == v2.size);
	REQUIRE(vector.capacity == v2.capacity);
	REQUIRE(vector[4] == v2[4]);
}
