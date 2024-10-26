#include <stdio.h>
#include <stdint.h>
#include <memory.h>

struct ApplyColler {
	uint8_t Memory[12] = {0,};
	uint8_t Signetuer128[16] = { 0. };
	uint8_t Signetuwe256[32] = { 0. };
};

struct Bit {
	bool B;
};
ApplyColler ConstructApplyColler(uint8_t Sig128[16], uint8_t sig256[32]) {
	ApplyColler A;
	memset(A.Memory, 0, sizeof(A.Memory));//any time  can zerolize.
	memset(A.Signetuer128, 0, sizeof(A.Signetuer128));
	memset(A.Signetuwe256, 0, sizeof(A.Signetuwe256));

	memcpy(A.Signetuer128, Sig128, sizeof(A.Signetuer128));
	memcpy(A.Signetuwe256, Sig128, sizeof(A.Signetuwe256));

	return A;
}
bool Call(ApplyColler& System) {
	Bit B;
	return B.B;
}
bool PlzComeOnMyShoulder(ApplyColler& System) {
	Bit B;
	return B.B;
}
bool PlzConnectYourVoiceToParsonalComputersAUX(ApplyColler& System) {
	Bit B;
	return B.B;
}
bool PlzLeave(ApplyColler& System) {
	Bit B;
	return B.B;

}