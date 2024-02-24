Action()
{

	/* Login */

	web_custom_request("update", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update?cup2key=6:Wu5SGMGI-7Y0bw18i7mNpZhfbIvNy3qhjHZOK1Lhs1k&cup2hreq=239c3fc009669e8af997c189154e427202204825ee27f79f860df8d9ce6f0159", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"eeobbhfgfagbclfofmgbdfoicabjdbkn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.99\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8BFD50D350D47445B57BB1D61BBDE41CEDA7AC43DC81FCE95BF1AC646D97D2A0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.99\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.99,\"AppVersion\":\""
		"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"1.0.0.8\"},{\"appid\":\"oankkpibpaokgecfckkdkgaoafllipag\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.61\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.44C48B9ECD87ACDDD850F9AA5E1C9D48B7A398DEC13D376CD62D55DADBD464A5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.61\",\"AppMajorVersion\":\"121\",\""
		"AppRollout\":0.61,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"6498.2023.8.1\"},{\"appid\":\"kpfehajjjbbcifeehjgfgnabifknmdad\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.68\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.42AF0D1905C8F1D8F6167365271C4549A73603B838BA58B9A664C57C00DB1EE5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":"
		"{\"AppCohort\":\"rrf@0.68\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.68,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"101.0.4906.0\"},{\"appid\":\"ohckeflnhegojcjlcpbfpciadgikcohk\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.43\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.26123BEF7D73536450862D2C4D44963D720AA80B6FC2D8496F559CB9C1FDEB00\"}]},\""
		"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.43\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.43,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"0.0.1.4\"},{\"appid\":\"fppmbhmldokgmleojlplaaodlkibgikh\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.88\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.A81D1959892AE4180554347DF1B97834ABBA2E1A5E6B9AEBA000ECEA26EABECC\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.88\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.88,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"1.15.0.1\"},{\"appid\":\"ndikpojcjlepofdkaaldkinkjbeeebkl\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.91\",\"enabled\":true,\"installdate\":-1,\""
		"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.7B7D2723762BB51B662A5A8B41C4181069DEBE6A885689017238BE129698E7FE\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.91\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.91,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"10.34.0.52\"},{\"appid\":\"fgbafbciocncjfbbonhocjaohoknlaco\",\"brand\":\"INBX\",\""
		"cohort\":\"rrf@0.33\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.E257400C1E8A114B7B2F40C35A309A616323EFBA99442BBB0E1554F231E38809\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.33\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.33,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\""
		"ojblfafjmiikbkepnnolpgbbhejhlcim\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.51\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.51\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.51,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"jbfaflocpnkhbgcijpkiafdpbjkedane\",\"brand\":\"INBX\",\"cohort\":\""
		"rrf@0.19\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.19\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.19,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"1.0.0.25\"},{\"appid\":\"alpjnmnfbgfkmmpcfpejmmoebdndedno\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.94\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\""
		"packages\":{\"package\":[{\"fp\":\"1.ACAF273151A17537328DD498705F2F589745E014A1BBA4FC2B3FA2729CF4A5F6\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.94\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.94,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"11.0.0.0\"},{\"appid\":\"ahmaebgpfccdhgidjaidaoojjcijckba\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.69\",\""
		"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.82497265352E024349DF20FCB72104978E8835933BF7497E11D8B1E0A8617AAE\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.69\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.69,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"3.0.0.0\"},{\"appid\":\"mpicjakjneaggahlnmbojhjpnileolnb\",\"brand\":\""
		"INBX\",\"cohort\":\"rrf@0.17\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.CB469EE19BA37189AA568219B28E2812DCF51B7A2251F37A72514C4A0E68F658\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.17\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.17,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"4.0.0.15\"},{\""
		"appid\":\"ebkkldgijmkljgglkajkjgedfnigiakk\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.89\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.1B2BA8FC90BA68CD057B9CAAFFC218EAD59A23E37F79192ED37D0C3A7A8BAB03\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.89\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.89,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\""
		"1.3.185.17\"},\"updatecheck\":{},\"version\":\"1.0.0.20\"},{\"appid\":\"mkcgfaeepibomfapiapjaceihcojnphg\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.17\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.17\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.17,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\""
		"lkkdlcloifjinapabfonaibjijloebfb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.32\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.82EE73DBF6DD4F13789BDF673E96FAB44512C2FBBF90B6FF593084BB08B33902\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.32\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.32,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\""
		"updatecheck\":{},\"version\":\"4.0.2.40\"},{\"appid\":\"plbmmhnabegcabfbcejohgjpkamkddhn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.53\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ADB24E09EADF2056B0830DC7F3AE233637081DF28DB8194ED2761E426443BAF9\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.53\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.53,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\""
		"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"3019\"},{\"appid\":\"llmidpclgepbgbgoecnhcmgfhmfplfao\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.18\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ABA885C2C3540EAF3B054FC686F715C10FE210C9C83F9275478F574C98D35A6B\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.18\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.18,\"AppVersion\":\"121.0.2277.128\",\""
		"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"2.0.6355.0\"},{\"appid\":\"omnckhpgfmaoelhddliebabpgblmmnjp\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.63\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.DD91C7C496E4D9E8DF5BEAA3D33D45F9EF196B4F888D0FAC50EAF08CAD6B29D7\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.63\",\"AppMajorVersion\":\"121\","
		"\"AppRollout\":0.63,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"1.0.0.2\"},{\"appid\":\"jcmcegpcehdchljeldgmmfbgcpnmgedo\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.14\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.A2361D68B93FD807BC414B2A06A56FCA55E76DF8376D7EC6A8FBAE5C9BFEBCA0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\""
		"AppCohort\":\"rrf@0.14\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.14,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"1.20240222.1.0\"},{\"appid\":\"lfmeghnikdkbonehgjihjebgioakijgn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.48\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.E7727C48F2FC3649530D39F110AD37F750538845D0E271C1B26CFE6B3E6A26E3\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.48\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.48,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"2.0.0.9\"},{\"appid\":\"hjaimielcgmceiphgjjfddlgjklfpdei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.29\",\"enabled\":true,\"installdate\":-1,\""
		"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.A00289AF85D31D698A0F6753B6CE67DBAB4BDFF639BDE5FC588A5D5D8A3885D5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.29\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.29,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"INBX\",\"cohort\""
		":\"rrf@0.25\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.25\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.25,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"cllppcmmlnkggcmljjfigkcigaajjmid\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.40\",\"enabled\":true,\"installdate\":-1,\"lang"
		"\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.3F08849EBD098437F635842BE828DA387FE405E2F9FB7D4957A3022D6B46F4DE\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.40\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.4,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"120.17243.17238.8\"},{\"appid\":\"pdfjdcjjjegpclfiilihfkmdfndkneei\",\"brand\":\"INBX\",\""
		"cohort\":\"rrf@0.15\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.81805FCAF78B052E111DB9D041095CDBB67E07DAA95D27119804D858C0F1FDF4\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.15\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.15,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"2023.12.20.0\"}],\"arch\":\""
		"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":12,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.2277.128\",\"protocol\":\"3.1\",\"requestid\":\"{9ed30c40-0722-46a5-bfce-60026b8e663f}\",\"sessionid\":\"{9009f14f-0fb3-4749-b9f3-38b1dea3488c}\",\"updater\":{\""
		"autoupdatecheckenabled\":true,\"ismachine\":1,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.185.17\"},\"updaterversion\":\"121.0.2277.128\"}}", 
		LAST);

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("find-assets", 
		"URL=https://edge.microsoft.com/entityextractiontemplates/api/v1/assets/find-assets?name=extraction.autofillFull.en-us&version=1.*.*&channel=stable&key=d414dd4f9db345fa8003e32adc81b362", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("selection", 
		"URL=https://arc.msn.com/v4/api/selection?placement=88000360&nct=1&fmt=json&ISU=0&AREF=0&ADEFAB=13&OPSYS=WIN10&locale=en-US&country=IN&edgeid=-6926658363340494177&ACHANNEL=4&ABUILD=121.0.6167.184&poptin=1&devosver=10.0.19045.3324&clr=esdk&UITHEME=light&EPCON=0&AMAJOR=121&AMINOR=0&ABLD=6167&APATCH=184", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_revert_auto_header("Accept-Language");

	web_custom_request("3", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAEIGXfxGhXf79XHiPOmi/z9fgAC3zxw1CdO1uFYG7fpu5uYnu6lAscFHXgpNJjofSRmV6GHEx80OhztRi2MCtneb61QDwX1P8FPHiK1upYaaDtKf3OijS3uc7PovMSHXBHUB/2eLWdwTpJ/lj1Xg9pZ52tr4wgyGCzi7MbwN0pAh8cXFYCVEfwPBFE4V5tH+"
		"fSl8xGHD5BsnmJHKfRdvCVk5at7EqrOR742TfTZzomjScyDJyuTj/9FmXxvCtzuOdOHsv+WAn3JUiHJbcbL7lveY+96u1em/rhig+UCeEmsTslq7QnmYUeggN1pX/WtI79OXaHQE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.19045.3324.vb_release\",\"browser\":{\"internetExplorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"\",\"version\":\"121.0.2277.128 (Official build) \"},\"client\":{\"version\":\"281483718098944\",\"data\":"
		"{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"synchronousLookupUris\":\"638343870221005468\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{"
		"\"uri\":\"https://jpetstore.aspectran.com/account/signonForm\",\"ip\":\"172.67.142.63\"},\"referrer\":{\"uri\":\"https://jpetstore.aspectran.com/catalog/\",\"ip\":\"104.21.27.101\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"76529a6a-687b-45c8-ad4d-9b482924be8b\",\"synchronous\":false}", 
		LAST);

	web_custom_request("update_2", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"jcmcegpcehdchljeldgmmfbgcpnmgedo\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.14\",\"enabled\":true,\"event\":[{\"download_time_ms\":4063,\"downloaded\":39809,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"309.55134.1.0\",\"previousversion\":\"1.20240222.1.0\",\"total\":39809,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/"
		"bece59f0-b3fa-4326-87e5-d8329f082ef5?P1=1709240426&P2=404&P3=2&P4=RuVs6WPatCvvrp9ZFv234fApEbGYnUZxM2AGTlTZmSGSjYJSKDd8f71%2fdZNmA4B3%2fVlza1%2bC15KWslC8iX1swA%3d%3d\"},{\"eventresult\":1,\"eventtype\":3,\"install_time_ms\":146,\"nextfp\":\"1.A2361D68B93FD807BC414B2A06A56FCA55E76DF8376D7EC6A8FBAE5C9BFEBCA0\",\"nextversion\":\"309.55134.1.0\",\"previousfp\":\"1.A2361D68B93FD807BC414B2A06A56FCA55E76DF8376D7EC6A8FBAE5C9BFEBCA0\",\"previousversion\":\"1.20240222.1.0\"}],\"installdate\":-1,\"lang\":\""
		"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.A2361D68B93FD807BC414B2A06A56FCA55E76DF8376D7EC6A8FBAE5C9BFEBCA0\"}]},\"version\":\"309.55134.1.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":12,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.2277.128\",\""
		"protocol\":\"3.1\",\"requestid\":\"{4dd744d0-d8ae-4087-b51c-df0090ee4430}\",\"sessionid\":\"{9009f14f-0fb3-4749-b9f3-38b1dea3488c}\",\"updaterversion\":\"121.0.2277.128\"}}", 
		LAST);

	web_custom_request("3_2", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAEIGXfxGhXf79XHiPOmi/z9fgAC3zxw1CdO1uFYG7fpu5uYnu6lAscFHXgpNJjofSRmV6GHEx80OhztRi2MCtneb61QDwX1P8FPHiK1upYaaDtKf3OijS3uc7PovMSHXBHUB/2eLWdwTpJ/lj1Xg9pZ52tr4wgyGCzi7MbwN0pAh8cXFYCVEfwPBFE4V5tH+"
		"fSl8xGHD5BsnmJHKfRdvCVk5at7EqrOR742TfTZzomjScyDJyuTj/9FmXxvCtzuOdOHsv+WAn3JUiHJbcbL7lveY+96u1em/rhig+UCeEmsTslq7QnmYUeggN1pX/WtI79OXaHQE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.19045.3324.vb_release\",\"browser\":{\"internetExplorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"\",\"version\":\"121.0.2277.128 (Official build) \"},\"client\":{\"version\":\"281483718098944\",\"data\":"
		"{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"synchronousLookupUris\":\"638343870221005468\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{"
		"\"uri\":\"https://jpetstore.aspectran.com/account/signon\",\"ip\":\"172.67.142.63\"},\"referrer\":{\"uri\":\"https://jpetstore.aspectran.com/account/signonForm\",\"ip\":\"104.21.27.101\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"f92e2d1d-dc2d-483d-8e65-235fea3750ac\",\"synchronous\":false}", 
		LAST);

	web_custom_request("update_3", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"pdfjdcjjjegpclfiilihfkmdfndkneei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.15\",\"enabled\":true,\"event\":[{\"download_time_ms\":4019,\"downloaded\":4975,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2024.1.3.0\",\"previousversion\":\"2023.12.20.0\",\"total\":4975,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/"
		"22bd2c3f-162f-4ed8-934e-97de224b1577?P1=1709240427&P2=404&P3=2&P4=kaV%2fCOHyVujRUrNa1sRzn1NxKbhPTUCtRjHkK8u3uZSMIcPJl8%2fkW9VlD9U7spMLsI8L%2fehOfZj90u%2fldQY0xQ%3d%3d\"},{\"eventresult\":1,\"eventtype\":3,\"install_time_ms\":159,\"nextfp\":\"1.81805FCAF78B052E111DB9D041095CDBB67E07DAA95D27119804D858C0F1FDF4\",\"nextversion\":\"2024.1.3.0\",\"previousfp\":\"1.81805FCAF78B052E111DB9D041095CDBB67E07DAA95D27119804D858C0F1FDF4\",\"previousversion\":\"2023.12.20.0\"}],\"installdate\":-1,\"lang\":\""
		"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.81805FCAF78B052E111DB9D041095CDBB67E07DAA95D27119804D858C0F1FDF4\"}]},\"version\":\"2024.1.3.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":12,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.2277.128\",\"protocol\""
		":\"3.1\",\"requestid\":\"{5c535711-e90e-4e7e-bcec-88567671137e}\",\"sessionid\":\"{9009f14f-0fb3-4749-b9f3-38b1dea3488c}\",\"updaterversion\":\"121.0.2277.128\"}}", 
		LAST);

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	lr_think_time(11);

	web_custom_request("report_3", 
		"URL=https://bzib.nelreports.net/api/report?cat=bingbusiness", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("report_4", 
		"URL=https://bzib.nelreports.net/api/report?cat=bingbusiness", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=application/reports+json", 
		"Body=[{\"age\":60056,\"body\":{\"elapsed_time\":30065,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"\",\"sampling_fraction\":1.0,\"server_ip\":\"\",\"status_code\":0,\"type\":\"abandoned\"},\"type\":\"network-error\",\"url\":\"https://business.bing.com/api/v1/user/token/microsoftgraph?&clienttype=edge-omnibox\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\"}]", 
		LAST);

	web_custom_request("report_5", 
		"URL=https://deff.nelreports.net/api/report?cat=msn", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("report_6", 
		"URL=https://deff.nelreports.net/api/report?cat=msn", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=application/reports+json", 
		"Body=[{\"age\":59411,\"body\":{\"elapsed_time\":787,\"method\":\"GET\",\"phase\":\"connection\",\"protocol\":\"http/1.1\",\"referrer\":\"\",\"sampling_fraction\":0.5,\"server_ip\":\"131.253.33.203\",\"status_code\":0,\"type\":\"tls.cert.name_invalid\"},\"type\":\"network-error\",\"url\":\"https://ntp.msn.com/edge/ntp?locale=en-US&title=New%20tab&dsp=1&sp=Bing&startpage=1&PC=U531&prerender=1\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/"
		"121.0.0.0 Safari/537.36 Edg/121.0.0.0\"},{\"age\":58113,\"body\":{\"elapsed_time\":266,\"method\":\"GET\",\"phase\":\"connection\",\"protocol\":\"http/1.1\",\"referrer\":\"https://ntp.msn.com/edge/ntp/service-worker.js?bundles=latest&riverAgeMinutes=2880&enableNetworkFirst=true&navAgeMinutes=2880&enableNavPreload=true&enableEmptySectionRoute=true&enableFallbackVerticalsFeed=true&networkTimeoutSeconds=5\",\"sampling_fraction\":0.5,\"server_ip\":\"131.253.33.203\",\"status_code\":0,\"type\":\""
		"tls.cert.name_invalid\"},\"type\":\"network-error\",\"url\":\"https://ntp.msn.com/edge/ntp/service-worker.js?bundles=latest&riverAgeMinutes=2880&enableNetworkFirst=true&navAgeMinutes=2880&enableNavPreload=true&enableEmptySectionRoute=true&enableFallbackVerticalsFeed=true&networkTimeoutSeconds=5\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\"}]", 
		LAST);

	web_revert_auto_header("Accept-Language");

	web_custom_request("3_3", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAEIGXfxGhXf79XHiPOmi/z9fgAC3zxw1CdO1uFYG7fpu5uYnu6lAscFHXgpNJjofSRmV6GHEx80OhztRi2MCtneb61QDwX1P8FPHiK1upYaaDtKf3OijS3uc7PovMSHXBHUB/2eLWdwTpJ/lj1Xg9pZ52tr4wgyGCzi7MbwN0pAh8cXFYCVEfwPBFE4V5tH+"
		"fSl8xGHD5BsnmJHKfRdvCVk5at7EqrOR742TfTZzomjScyDJyuTj/9FmXxvCtzuOdOHsv+WAn3JUiHJbcbL7lveY+96u1em/rhig+UCeEmsTslq7QnmYUeggN1pX/WtI79OXaHQE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.19045.3324.vb_release\",\"browser\":{\"internetExplorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"\",\"version\":\"121.0.2277.128 (Official build) \"},\"client\":{\"version\":\"281483718098944\",\"data\":"
		"{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"synchronousLookupUris\":\"638343870221005468\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{"
		"\"uri\":\"https://jpetstore.aspectran.com/catalog/searchProducts?keyword=Fish\",\"ip\":\"104.21.27.101\"},\"referrer\":{\"uri\":\"https://jpetstore.aspectran.com/catalog/\",\"ip\":\"172.67.142.63\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"1d8bc3a9-026e-4359-ba07-767552f5fa7c\",\"synchronous\":false}", 
		LAST);

	web_custom_request("3_4", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAEIGXfxGhXf79XHiPOmi/z9fgAC3zxw1CdO1uFYG7fpu5uYnu6lAscFHXgpNJjofSRmV6GHEx80OhztRi2MCtneb61QDwX1P8FPHiK1upYaaDtKf3OijS3uc7PovMSHXBHUB/2eLWdwTpJ/lj1Xg9pZ52tr4wgyGCzi7MbwN0pAh8cXFYCVEfwPBFE4V5tH+"
		"fSl8xGHD5BsnmJHKfRdvCVk5at7EqrOR742TfTZzomjScyDJyuTj/9FmXxvCtzuOdOHsv+WAn3JUiHJbcbL7lveY+96u1em/rhig+UCeEmsTslq7QnmYUeggN1pX/WtI79OXaHQE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.19045.3324.vb_release\",\"browser\":{\"internetExplorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"\",\"version\":\"121.0.2277.128 (Official build) \"},\"client\":{\"version\":\"281483718098944\",\"data\":"
		"{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"synchronousLookupUris\":\"638343870221005468\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{"
		"\"uri\":\"https://jpetstore.aspectran.com/catalog/products/FI-SW-01\",\"ip\":\"172.67.142.63\"},\"referrer\":{\"uri\":\"https://jpetstore.aspectran.com/catalog/searchProducts?keyword=Fish\",\"ip\":\"104.21.27.101\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"135e0023-aa65-4d7d-9cd0-930deedc1135\",\"synchronous\":false}", 
		LAST);

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("find-assets_2", 
		"URL=https://edge.microsoft.com/entityextractiontemplates/api/v1/assets/find-assets?name=extraction.proactiveProduct.en-us&version=5.*.*&channel=stable&key=d414dd4f9db345fa8003e32adc81b362", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("ANON=; DOMAIN=www.bing.com");

	web_add_cookie("MUID=3FB288A77D7E6FC13A379A107C2C6E33; DOMAIN=www.bing.com");

	web_add_cookie("_RwBf=r=0&ilt=3&ihpd=0&ispd=1&rc=9&rb=0&gb=0&rg=200&pc=6&mtu=0&rbb=0&g=0&cid=&clo=0&v=1&l=2024-02-21T08:00:00.0000000Z&lft=0001-01-01T00:00:00.0000000&aof=0&o=2&p=&c=&t=0&s=0001-01-01T00:00:00.0000000+00:00&ts=2024-02-22T07:53:48.7006699+00:00&rwred=0&wls=&wlb=&lka=0&lkt=0&TH=&ard=0001-01-01T00:00:00.0000000&rwdbt=0001-01-01T00:00:00.0000000&rwflt=0001-01-01T00:00:00.0000000&wle=&ccp=&aad=0; DOMAIN=www.bing.com");

	web_custom_request("telemetry", 
		"URL=https://www.bing.com/api/shopping/v1/telemetry", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"ClientContext\":{\"AppInfoClientName\":\"Edge\",\"BuildVersion\":\"121.0.2277.128\",\"EnabledServiceFlights\":\"\",\"JSVersion\":\"\"},\"EventTime\":1.708663423808e+12,\"EventType\":\"EdgeTrigger\",\"ImpressionId\":\"\",\"JsonData\":\"{\\\"EdgeTrigger\\\":\\\"msEdgeShoppingPdpReached\\\"}\",\"LogLevel\":\"Information\",\"Message\":\"\"}", 
		LAST);

	web_custom_request("search", 
		"URL=https://www.bing.com/api/shopping/v1/item/search?appid=9A9BEDA6F8ED193BD5F4CF15F865B491175D3D8F&mkt=en-us&uapimkt=en-us&features=enuapimkt", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"AgeGroup\":0,\"IsAADSignedIn\":false,\"IsEdgeProfileRebatesUser\":false,\"IsPersonalizationDataConsentEnabled\":false,\"IsRebatesEnabled\":false,\"IsRebatesUser\":false,\"IsSSOEnabled\":false,\"clientContext\":{\"EnabledServiceFeaturesv2\":{},\"EnabledServiceFlights\":\"\",\"PaRequestFeatureMask\":3,\"appname\":\"Edge\",\"buildversion\":\"121.0.2277.128\",\"dynamic_picl_model_id\":\"extraction.proactiveProduct.en-us\",\"enabledfeatures\":[{\"name\":\"msShoppingExp1\",\"params\":[]},{\""
		"name\":\"msShoppingExp7\",\"params\":[{\"key\":\"msEdgeShoppingAutoShowScenariosFirstMask\",\"value\":\"190624\"},{\"key\":\"msEdgeShoppingAutoShowScenariosSecondMask\",\"value\":\"84541440\"},{\"key\":\"variant\",\"value\":\"ControlUserPref\"}]},{\"name\":\"msShoppingExp22\",\"params\":[]},{\"name\":\"msShoppingExp63\",\"params\":[]},{\"name\":\"msShoppingExp67\",\"params\":[]},{\"name\":\"msShoppingExp69\",\"params\":[]},{\"name\":\"msShoppingUapiExp1\",\"params\":[]},{\"name\":\""
		"msShoppingUapiExp3\",\"params\":[]},{\"name\":\"msShoppingUapiExp35\",\"params\":[]},{\"name\":\"msEdgeShoppingPriceComparisonBackfillFreeOffers\",\"params\":[]},{\"name\":\"msEdgeShoppingPriceComparisonSponsoredTreatment\",\"params\":[]},{\"name\":\"msPriceComparisonSendProductOGMetadataToUAPI\",\"params\":[]}],\"entity_extraction_engine\":\"PICL\",\"error\":\"ENTITY_NOT_PRODUCT\",\"extraction_context\":\"PRODUCT_PICL_FAILED\",\"impressionId\":\"\",\"isShoppingPersonalizationEnabled\":true,\""
		"ismobile\":false,\"osname\":\"Windows NT\",\"osversion\":\"10.0.19045\",\"picl_model_version\":\"5.12.0\",\"validation_data\":{}},\"item\":{\"page_title\":\"JPetStore Demo\",\"seller\":{\"domain\":\"jpetstore.aspectran.com\"},\"url\":\"jpetstore.aspectran.com/catalog/products/FI-SW-01\"},\"pageVisitId\":\"18537def-9238-420a-a82b-0695a262d7b5\",\"retailerSessionId\":\"3d47514c-ce19-4efc-9e48-f0d9aa3f7408\",\"sessionId\":\"f4c65133-b3d9-4e70-8a7f-fb36871c0347\",\"sourceTypes\":[\"itemizedCashBack\"]}", 
		LAST);

	web_revert_auto_header("Accept-Language");

	web_custom_request("3_5", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAEIGXfxGhXf79XHiPOmi/z9fgAC3zxw1CdO1uFYG7fpu5uYnu6lAscFHXgpNJjofSRmV6GHEx80OhztRi2MCtneb61QDwX1P8FPHiK1upYaaDtKf3OijS3uc7PovMSHXBHUB/2eLWdwTpJ/lj1Xg9pZ52tr4wgyGCzi7MbwN0pAh8cXFYCVEfwPBFE4V5tH+"
		"fSl8xGHD5BsnmJHKfRdvCVk5at7EqrOR742TfTZzomjScyDJyuTj/9FmXxvCtzuOdOHsv+WAn3JUiHJbcbL7lveY+96u1em/rhig+UCeEmsTslq7QnmYUeggN1pX/WtI79OXaHQE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.19045.3324.vb_release\",\"browser\":{\"internetExplorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"\",\"version\":\"121.0.2277.128 (Official build) \"},\"client\":{\"version\":\"281483718098944\",\"data\":"
		"{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"synchronousLookupUris\":\"638343870221005468\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{"
		"\"uri\":\"https://jpetstore.aspectran.com/cart/addItemToCart?itemId=EST-1\",\"ip\":\"104.21.27.101\"},\"referrer\":{\"uri\":\"https://jpetstore.aspectran.com/catalog/products/FI-SW-01\",\"ip\":\"104.21.27.101\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"79ae780d-e147-43e7-9556-fd0a04b7efde\",\"synchronous\":false}", 
		LAST);

	web_custom_request("3_6", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAEIGXfxGhXf79XHiPOmi/z9fgAC3zxw1CdO1uFYG7fpu5uYnu6lAscFHXgpNJjofSRmV6GHEx80OhztRi2MCtneb61QDwX1P8FPHiK1upYaaDtKf3OijS3uc7PovMSHXBHUB/2eLWdwTpJ/lj1Xg9pZ52tr4wgyGCzi7MbwN0pAh8cXFYCVEfwPBFE4V5tH+"
		"fSl8xGHD5BsnmJHKfRdvCVk5at7EqrOR742TfTZzomjScyDJyuTj/9FmXxvCtzuOdOHsv+WAn3JUiHJbcbL7lveY+96u1em/rhig+UCeEmsTslq7QnmYUeggN1pX/WtI79OXaHQE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.19045.3324.vb_release\",\"browser\":{\"internetExplorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"\",\"version\":\"121.0.2277.128 (Official build) \"},\"client\":{\"version\":\"281483718098944\",\"data\":"
		"{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"synchronousLookupUris\":\"638343870221005468\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{"
		"\"uri\":\"https://jpetstore.aspectran.com/cart/viewCart\",\"ip\":\"104.21.27.101\"},\"referrer\":{\"uri\":\"https://jpetstore.aspectran.com/catalog/products/FI-SW-01\",\"ip\":\"104.21.27.101\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"150617a7-aa04-4511-8fc7-aea08a5b77b5\",\"synchronous\":false}", 
		LAST);

	return 0;
}
