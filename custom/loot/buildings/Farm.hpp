class Farm : Default{
	zombieChance = 0.3;
	maxRoaming = 3;
	zombieClass[] = {"zZombie_Base","z_hunter","z_hunter2","z_hunter3","z_hunter4","z_villager1","z_villager2","z_villager3","z_new_villager2","z_new_villager3","z_new_villager4"};
	lootChance = 0.5;
	lootGroup = Farm;
};
class Land_stodola_old_open: Farm {
	zedPos[] = {{-2.58887,-5.9209,-5.08057},{-3.06787,8.63086,-5.08057},{2.52539,10.5234,-5.08044},{4.11035,-10.9307,-5.07043},{-2.62793,-6.55762,-0.99585},{-2.79443,10.2344,-0.993469},{4.62646,10.498,-0.993408},{4.76807,5.00781,-0.993408},{0.749023,-10.5703,2.96448},{1.09131,10.6787,2.96448}};
	lootPos[] = {{2.5437,-10.6599,2.96444},{-0.4021,-10.6228,2.96444},{-2.56641,-10.8538,-0.995487},{4.6665,3.45386,-5.08055},{-2.24414,10.396,-5.08055},{3.08691,9.24976,-5.08055},{-1.12744,10.5359,-0.993513},{-1.27563,10.6184,2.96444},{2.99268,10.7668,2.96444},{4.35425,-10.5923,-5.08055},{-2.47363,-5.49194,-5.08055}};
	lootPosSmall[] = {{2.7832,-9.15698,-4.13055},{-1.83765,7.05908,-4.13055},{3.73218,-5.77075,-0.0403633},{0.913818,-11.1099,2.96444},{5.14795,-10.01,-0.997503},{-2.89819,7.21069,-5.08055},{1.79053,8.75171,-5.08055},{5.07788,9.51514,-0.993513},{3.65845,10.1985,2.96444},{0.85498,-3.37793,-4.13055}};
};
class Land_Farm_Cowshed_a: Farm {
	zedPos[] = {{7.87988,2.94141,-3.08789},{9.74023,-2.48633,-3.08771},{-1.06836,-5.92188,-3.08765},{-1.32764,5.61426,-3.08765},{2.88428,-2.34473,-3.08765},{4.81982,5.72852,-3.08765},{8.83936,-5.60254,-3.06757}};
	lootPos[] = {{-1.06836,-5.92163,-3.08763},{1.69043,-4.91089,-3.08763},{5.8833,-6.15381,-3.08763},{8.83984,-5.60278,-3.08763},{9.74023,-2.48657,-3.08763},{2.88428,-2.34546,-3.08763},{7.88037,2.94214,-3.08763}	};
	lootPosSmall[] = {{-6.74829,-2.98145,-3.03766},{1.34399,3.79199,-3.03766}};
};
class Land_stodola_open: Farm {
	zedPos[] = {{-2.58228,-0.526367,-4.17346},{-0.0480957,-4.88965,-4.13593},{-2.60376,5.31641,-4.12805},{0.98291,6.20508,-4.11121}};
	lootPos[] = {{-3.77881,6.2478,-4.11348},{1.59106,6.31494,-4.10928},{-3.94727,-1.95605,-4.15359},{-0.440918,-3.91187,-4.1938}};
	lootPosSmall[] = {{-4.22217,-6.12866,-3.32453}};
};
class Land_Barn_W_01: Farm {
	zedPos[] = {{5.78711,18.9463,-2.62683},{-4.4646,16.665,-2.61633},{4.93188,-17.0469,-2.59064},{-3.82788,-18.6699,-2.59021},{-2.99072,-4.16992,-2.58276},{3.95435,4.88379,-2.57434}};
	lootPos[] = {{-4.45776,14.2153,-2.71607},{4.34277,-6.15088,-2.57279}};
	lootPosSmall[] = {{4.09351,10.3872,-2.69559},{0.10791,3.48096,-2.64446},{-4.51636,-12.2603,-2.67148},{3.54419,-15.8311,-2.63077}};
};
class Land_Barn_W_02: Farm {
	zedPos[] = {{3.35938,-0.151367,-2.31305},{-2.84351,0.213867,-2.31177},{-2.94604,-5.01465,-2.28998},{2.53711,-5.89258,-2.28949},{3.16479,5.56543,-2.28406},{-5.63306,4.83105,-2.26355}};
	lootPos[] = {{3.16504,5.56543,-2.31409},{3.35938,-0.152344,-2.31305},{2.53613,-5.89453,-2.30957},{-2.94629,-5.01367,-2.31006},{-2.84375,0.212891,-2.31183},{-5.63281,4.8291,-2.31363}};
};
class Land_Farm_Cowshed_c: Farm {
	zedPos[] = {{-2.41504,2.98633,-3.12582}};	
	lootPos[] = {{0.625,-2.61133,-3.06583}};
	lootPosSmall[] = {{-2.82446,3.18457,-3.11581}};
};
class Land_Farm_Cowshed_b: Farm {
	zedPos[] = {{0.0620117,0.0517578,-3.11111},{-4.77441,-2.4834,-3.05106},{4.68506,2.18945,-3.04105}};
	lootPos[] = {{-3.26782,2.71875,-3.0311},{5.41699,-2.57813,-3.04111}};
	lootPosSmall[] = {{3.46802,3.36621,-3.05112},{-9.98511,-3.2793,-3.09109}};
};
class Land_Shed_W02: Farm {
	maxRoaming = 0;
	zedPos[] = {{0.688232,1.88281,-0.00292969}};
	lootPos[] = {{0.688232,1.88281,-0.00292969}};
};
class Land_sara_stodola: Farm {
	zedPos[] = {{-0.637695,2.9707,-2.19523},{0.459961,0.398438,-2.19523}};
	lootPos[] = {{5.01367,3.33118,-2.19523},{2.51758,1.05737,-2.19523},{-1.30957,-1.02954,-2.19523},{-4.24414,4.0238,-2.19523},{5.16211,-0.661621,-2.19523}};
};
class land_jzd_stodola2: Farm {
	zedPos[] = {{5.2832,-11.1592,-2.0262},{-2.20215,-0.935547,-2.0262}};
	lootPos[] = {{8.15527,11.8477,-2.0262},{5.5127,5.6377,-2.0262},{-4.16113,3.67383,-2.0262},{7.53223,-14.4741,-2.0262},{1.16992,0.390625,1.31123}};
};
class land_jzd_kr2: Farm {
	zedPos[] = {{2.12061,-22.3691,-6.30976},{2.86523,-3.03125,-6.17321},{0.813965,4.67188,-6.17321}};
	lootPos[] = {{1.92139,-4.90527,-6.17321},{0.709961,5.00488,-6.17321},{1.8623,7.37109,1.40623},{3.00684,-3.30566,1.41873},{-3.0625,-3.38477,-2.05339},{-2.62646,10.8418,-2.05339}};
};
class land_jzd_kr1: Farm {
	zedPos[] = {{0.0078125,-1.14941,-2.14676},{-4.2085,-12.3887,-2.14676},{0.878906,-9.51953,-6.26657}};
	lootPos[] = {{-1.04834,-3.67578,-6.27279},{1.63818,0.775391,-6.27279},{-1.41992,5.10449,-6.27279},{-0.993164,2.94629,-2.15298},{0.717285,-3.79688,-2.15298}};
};
class land_smd_hut02: Farm {
	lootPos[] = {{0.338867,0.525391,-0.445763}};
};
class land_smd_hut01: Farm {
	zedPos[] = {{1.9834,-3.39844,-0.44834}};
	lootPos[] = {{0.223633,-0.512695,-0.44834},{3.22607,1.40723,-0.44834}};
};
class land_smd_hut04: Farm {
	lootPos[] = {{0.250977,1.02734,-0.437198}};
};
class Land_smd_sara_stodola2: Farm {
	zedPos[] = {{1.01563,-0.325195,-2.16877}};
	lootPos[] = {{4.57617,0.255859,-2.16877},{-4.61133,-1.60156,-2.16877},{-5.38281,2.94336,-2.16877}};
};
class land_jzd_stodola1: Farm{
	lootPos[] = {{-3.81592,-11.418,-2.0262},{1.73877,-6.20605,-2.0262},{-4.13477,-0.265625,-2.0262},{-1.04883,0.180664,-2.0262}};
};
class land_zd_2: Farm{
	zedPos[] = {{-0.195313,0.174805,-1.82467}};
	lootPos[] = {{0.630859,0.280273,-1.82467}, {-1.48145,1.44141,-1.82466}};
};
class land_shed_m01: Farm {
	zedPos[] = {{0.218262,-1.78369,-0.347349}};
};
