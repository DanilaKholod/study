/*In civilized countries, there are k ticket offices at the railway station, but there is only one queue in them. 
Maintenance is as follows. Initially, when all cash registers are free, the first k people from the queue approach the cash registers. 
The rest are waiting for their turn. As soon as someone is served and the corresponding box office is vacated, the next person from the queue comes to this box office. 
This continues until all customers are served.*/
#include <iostream>
#include <stdio.h>
#include <vector>
#include <functional>
#include <queue>
using namespace std;
int main() {
	int time, N, X;
	priority_queue<long long, vector<long long>, greater<long long>> station;
	scanf("%d %d", &N, &X);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &time);
		if (station.size() != X) station.push(time);
		else {
			long long temp = station.top(); station.pop();
			station.push(temp + time);
		}
	}
	while (station.size() > 1) station.pop();
	printf("%lld\n", station.top());
	return 0;
}