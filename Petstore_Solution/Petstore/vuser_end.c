vuser_end()
{

	/* Logout */

	lr_think_time(22);

	web_custom_request("3_7", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAEIGXfxGhXf79XHiPOmi/z9fgAC3zxw1CdO1uFYG7fpu5uYnu6lAscFHXgpNJjofSRmV6GHEx80OhztRi2MCtneb61QDwX1P8FPHiK1upYaaDtKf3OijS3uc7PovMSHXBHUB/2eLWdwTpJ/lj1Xg9pZ52tr4wgyGCzi7MbwN0pAh8cXFYCVEfwPBFE4V5tH+"
		"fSl8xGHD5BsnmJHKfRdvCVk5at7EqrOR742TfTZzomjScyDJyuTj/9FmXxvCtzuOdOHsv+WAn3JUiHJbcbL7lveY+96u1em/rhig+UCeEmsTslq7QnmYUeggN1pX/WtI79OXaHQE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.19045.3324.vb_release\",\"browser\":{\"internetExplorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"\",\"version\":\"121.0.2277.128 (Official build) \"},\"client\":{\"version\":\"281483718098944\",\"data\":"
		"{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"synchronousLookupUris\":\"638343870221005468\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{"
		"\"uri\":\"https://jpetstore.aspectran.com/account/signoff\",\"ip\":\"104.21.27.101\"},\"referrer\":{\"uri\":\"https://jpetstore.aspectran.com/cart/viewCart\",\"ip\":\"172.67.142.63\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"e1c8a586-4dd3-4b45-9578-5294fb944d01\",\"synchronous\":false}", 
		LAST);

	return 0;
}