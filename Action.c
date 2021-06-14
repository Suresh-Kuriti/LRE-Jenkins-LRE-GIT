Action()
{
	
	//1st Git Upload

	web_set_sockets_option("SSL_VERSION", "TLS1.2");
	
	//web_set_max_retries
	
	//web_set_user("vn03664","abcd1234","stage.peapod.com:443");
	
	web_add_header("Sec-Fetch-Mode","navigate");
	web_add_header("Sec-Fetch-User","?1");
	web_add_header("Upgrade-Insecure-Requests","1");
	
	lr_start_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T01_Launch");

	web_custom_request("stage.peapod.com", 
		"URL=https://stage.peapod.com/", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("cms", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22gateway_promo_content%22:%7B%22limit%22:1,%22ff%22:%7B%22Landing+Page+Id%22:%5B%22default%22%5D%7D%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/", 
		"Snapshot=t5.inf", 
		LAST);

	web_custom_request("PeapodIcons.json", 
		"URL=https://stage.peapod.com/shop/images/icons/PeapodIcons.json", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/", 
		"Snapshot=t6.inf", 
		LAST);

	web_custom_request("PPOD", 
		"URL=https://stage.peapod.com/apis/site-config-api/opcos/PPOD", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/", 
		"Snapshot=t7.inf", 
		LAST);

	web_custom_request("cms_2", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22gateway_page_content%22:%7B%22limit%22:1,%22ff%22:%7B%22Landing+Page+Id%22:%5B%22default%22%5D%7D%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/", 
		"Snapshot=t8.inf", 
		LAST);

	web_custom_request("cms_3", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22gateway_promo_overlay%22:%7B%22limit%22:1,%22ff%22:%7B%22Landing+Page+Id%22:%5B%22default%22%5D%7D%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/", 
		"Snapshot=t10.inf", 
		LAST);

	web_custom_request("cms_4", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22gateway_marketing_content%22:%7B%22limit%22:1,%22ff%22:%7B%22Landing+Page+Id%22:%5B%22default%22%5D%7D%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/", 
		"Snapshot=t11.inf", 
		LAST);

	web_custom_request("cms_5", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22resource_bundle%22:%7B%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/", 
		"Snapshot=t12.inf", 
		LAST);

	web_custom_request("cms_6", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22resource_bundle%22:%7B%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/", 
		"Snapshot=t13.inf", 
		LAST);

	web_custom_request("%7B%7B%20appLink.image.src%20%7D%7D", 
		"URL=https://stage.peapod.com/%7B%7B%20appLink.image.src%20%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://stage.peapod.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("manifest-ppod.json", 
		"URL=https://stage.peapod.com/shop/images/favicon/manifest-ppod.json", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/", 
		"Snapshot=t25.inf", 
		LAST);
	
	lr_end_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T01_Launch", LR_AUTO);

	lr_think_time(4);
	
	web_add_header("Upgrade-Insecure-Requests","1");
	web_add_header("Sec-Fetch-User","?1");
	web_add_header("Sec-Fetch-Site","same-origin");
	web_add_header("Sec-Fetch-Mode","navigate");
	
	lr_start_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T02_Click_On_Sign_In");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/
	
	web_custom_request("login", 
		"URL=https://stage.peapod.com/shop/auth/login?gateway=1&redirectTo=/", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://stage.peapod.com/", 
		"Snapshot=t26.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("PeapodIcons.json_2", 
		"URL=https://stage.peapod.com/shop/images/icons/PeapodIcons.json", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/shop/auth/login?gateway=1&redirectTo=%2F", 
		"Snapshot=t29.inf", 
		LAST);

	web_custom_request("cms_7", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22resource_bundle%22:%7B%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/shop/auth/login?gateway=1&redirectTo=%2F", 
		"Snapshot=t30.inf", 
		LAST);
	
	web_custom_request("manifest-ppod.json_2", 
		"URL=https://stage.peapod.com/shop/images/favicon/manifest-ppod.json", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/shop/auth/login?gateway=1&redirectTo=%2F", 
		"Snapshot=t37.inf", 
		LAST);

	lr_end_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T02_Click_On_Sign_In",LR_AUTO);	

	lr_think_time(4);
	
	web_add_auto_header("Sec-Fetch-Mode","cors");
	web_add_auto_header("Sec-Fetch-Site","same-origin");

	lr_start_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T03_Login");
	
	web_custom_request("login_2", 
		"URL=https://stage.peapod.com/api/v2.0/user/login", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/shop/auth/login?gateway=1&redirectTo=%2F", 
		"Snapshot=t38.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"loginName\":\"{P_Username}\",\"password\":\"Delhaize123\",\"rememberMe\":true}", 
		LAST);

	web_custom_request("preferred-pup", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/preferred-pup", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/shop/auth/login?gateway=1&redirectTo=%2F", 
		"Snapshot=t39.inf", 
		LAST);
	
	//"userId":64174456,
	web_reg_save_param("C_userId","LB=\"userId\":","RB=,",LAST);
	
	//currentOrderId":98964512,
	web_reg_save_param("C_orderId","LB=currentOrderId\":","RB=,",LAST);
	
	//"serviceLocationId":26425,
	web_reg_save_param("C_serviceLocationId","LB=serviceLocationId\":","RB=,",LAST);
	
	//firstName":"{C_firstName}"
	web_reg_save_param("C_firstName","LB=firstName\":\"","RB=\"",LAST);
	
	//addressLine1":"{C_address}"
	web_reg_save_param("C_address","LB=addressLine1\":\"","RB=\"",LAST);
	
	//lastName":"{C_lastName}"
	web_reg_save_param("C_lastName","LB=lastName\":\"","RB=\"",LAST);
	
	web_custom_request("profile", 
		"URL=https://stage.peapod.com/api/v3.0/user/profile", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/shop/auth/login?gateway=1&redirectTo=%2F", 
		"Snapshot=t40.inf", 
		LAST);
	
	web_convert_param("C_address_URL",
	                  "SourceString={C_address}",
	                  "SourceEncoding=HTML",
	                  "TargetEncoding=URL",
	                  LAST);

	web_custom_request("stage.peapod.com_2", 
		"URL=https://stage.peapod.com/?gateway=1", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://stage.peapod.com/shop/auth/login?gateway=1&redirectTo=%2F", 
		"Snapshot=t41.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("status", 
		"URL=https://stage.peapod.com/api/v2.0/user/status", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t42.inf", 
		LAST);

	web_custom_request("slots", 
		"URL=https://stage.peapod.com/api/v2.0/user/slots?delivAvail=true&headers=false&pupAvail=true&selected=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t44.inf", 
		LAST);

	web_custom_request("status_2", 
		"URL=https://stage.peapod.com/api/v2.0/user/status", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t46.inf", 
		LAST);

	web_custom_request("status_3", 
		"URL=https://stage.peapod.com/api/v3.0/user/order/status?routeService=false", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t47.inf", 
		LAST);

	web_custom_request("token", 
		"URL=https://stage.peapod.com/api/v3.0/user/token", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t48.inf", 
		LAST);

	web_custom_request("PeapodIcons.json_3", 
		"URL=https://stage.peapod.com/shop/images/icons/PeapodIcons.json", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t49.inf", 
		LAST);

	web_custom_request("profile_2", 
		"URL=https://stage.peapod.com/api/v3.0/user/profile", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t50.inf", 
		LAST);

	web_custom_request("cart", 
		"URL=https://stage.peapod.com/api/v3.0/user/cart?flags=true&image=true&sort=category+asc", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t51.inf", 
		LAST);

	web_custom_request("slots_2", 
		"URL=https://stage.peapod.com/api/v2.0/user/slots?delivAvail=true&headers=false&pupAvail=true&selected=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t52.inf", 
		LAST);

	web_custom_request("preferred-pup_2", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/preferred-pup", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t53.inf", 
		LAST);

	web_custom_request("cms_8", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22notification_center_content%22:%7B%22limit%22:50%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t54.inf", 
		LAST);

	web_custom_request("categories", 
		"URL=https://stage.peapod.com/api/v2.0/user/categories?pc=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t55.inf", 
		LAST);

	web_custom_request("cms_9", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22header_mainnav%22:%7B%7D,%22header_subnav%22:%7B%7D,%22header_usernav%22:%7B%7D,%22header_guestnav%22:%7B%7D,%22header_shopnav%22:%7B%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t56.inf", 
		LAST);

	web_custom_request("cms_10", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22footer_mainnav%22:%7B%7D,%22footer_socialnav%22:%7B%7D,%22footer_subnav%22:%7B%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t57.inf", 
		LAST);

	web_custom_request("init", 
		"URL=https://stage.peapod.com/api/v2.0/user/init", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t58.inf", 
		LAST);

	web_custom_request("status_4", 
		"URL=https://stage.peapod.com/api/v3.0/user/order/status?routeService=false", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t59.inf", 
		LAST);

	web_custom_request("cms_11", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22resource_bundle%22:%7B%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t60.inf", 
		LAST);

	web_custom_request("token_2", 
		"URL=https://stage.peapod.com/api/v3.0/user/token", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t61.inf", 
		LAST);

	web_custom_request("cms_12", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22home_page_hero%22:%7B%22limit%22:100%7D,%22home_page_promonav%22:%7B%22limit%22:1%7D,%22home_page_body%22:%7B%22limit%22:10%7D,%22home_page_gallery%22:%7B%22limit%22:15%7D,%22home_page_content%22:%7B%7D,%22home_page_content_2%22:%7B%7D,%22home_page_content_3%22:%7B%7D,%22home_page_tiles%22:%7B%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t62.inf", 
		LAST);

	web_custom_request("profile_3", 
		"URL=https://stage.peapod.com/api/v3.0/user/profile", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t63.inf", 
		LAST);

	web_custom_request("cart_2", 
		"URL=https://stage.peapod.com/api/v3.0/user/cart?flags=true&image=true&sort=category+asc", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t64.inf", 
		LAST);

	web_custom_request("slots_3", 
		"URL=https://stage.peapod.com/api/v2.0/user/slots?delivAvail=true&headers=false&pupAvail=true&selected=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t65.inf", 
		LAST);

	web_custom_request("status_5", 
		"URL=https://stage.peapod.com/api/v2.0/user/status", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t66.inf", 
		LAST);

	web_custom_request("profile_4", 
		"URL=https://stage.peapod.com/api/v3.0/user/profile", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t67.inf", 
		LAST);

	web_custom_request("suggestedProducts", 
		"URL=https://stage.peapod.com/api/v3.0/user/suggestedProducts?filter=&howMany=12", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t68.inf", 
		LAST);

	web_custom_request("init_2", 
		"URL=https://stage.peapod.com/api/v2.0/user/init", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t69.inf", 
		LAST);

	web_custom_request("cms_13", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22notification_center_content%22:%7B%22limit%22:50%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t70.inf", 
		LAST);

	web_custom_request("status_6", 
		"URL=https://stage.peapod.com/api/v3.0/user/order/status?routeService=false", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t71.inf", 
		LAST);

	web_custom_request("products", 
		"URL=https://stage.peapod.com/api/v3.0/auctioned/products?productIds=&type=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t72.inf", 
		LAST);

	web_custom_request("category", 
		"URL=https://stage.peapod.com/api/v3.0/user/specials/category?categoryId=1256&consumCatId=485&rows=5", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t73.inf", 
		LAST);

	web_custom_request("cart_3", 
		"URL=https://stage.peapod.com/api/v3.0/user/cart?flags=true&image=true&sort=category+asc", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t74.inf", 
		LAST);

	web_custom_request("landing-page-id", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/landing-page-id", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t75.inf", 
		LAST);

	web_custom_request("slots_4", 
		"URL=https://stage.peapod.com/api/v2.0/user/slots?delivAvail=true&headers=false&pupAvail=true&selected=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t76.inf", 
		LAST);

	web_custom_request("status_7", 
		"URL=https://stage.peapod.com/api/v2.0/user/status", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t77.inf", 
		LAST);

	web_custom_request("profile_5", 
		"URL=https://stage.peapod.com/api/v3.0/user/profile", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t78.inf", 
		LAST);

	web_custom_request("slots_5", 
		"URL=https://stage.peapod.com/api/v2.0/user/slots?delivAvail=true&headers=true&serviceType=D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t79.inf", 
		LAST);

	web_custom_request("suggestedProducts_2", 
		"URL=https://stage.peapod.com/api/v3.0/user/suggestedProducts?filter=&howMany=12", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t80.inf", 
		LAST);

	web_custom_request("services", 
		"URL=https://stage.peapod.com/api/v3.0/server/services", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t81.inf", 
		LAST);

	web_custom_request("products_2", 
		"URL=https://stage.peapod.com/api/v3.0/auctioned/products?productIds=&type=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t82.inf", 
		LAST);

	web_custom_request("cart_4", 
		"URL=https://stage.peapod.com/api/v3.0/user/cart?flags=true&image=true&sort=category+asc", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t83.inf", 
		LAST);

	web_custom_request("query", 
		"URL=https://stage.peapod.com/api/v4.0/user/{C_userId}/orders/query", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t84.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"completedOrders\":{\"numberOfDays\":10}}", 
		LAST);

	web_custom_request("status_8", 
		"URL=https://stage.peapod.com/api/v3.0/user/order/status?routeService=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t85.inf", 
		LAST);

	web_custom_request("init_3", 
		"URL=https://stage.peapod.com/api/v2.0/user/init", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t86.inf", 
		LAST);

	web_custom_request("status_9", 
		"URL=https://stage.peapod.com/api/v3.0/user/order/status?routeService=false", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t87.inf", 
		LAST);

	web_custom_request("status_10", 
		"URL=https://stage.peapod.com/api/v2.0/user/status", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t88.inf", 
		LAST);

	web_custom_request("cms_14", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22home_page_promo%22:%7B%22limit%22:1,%22ff%22:%7B%22Landing+Page+Id%22:%5B%22default%22%5D%7D%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t89.inf", 
		LAST);

	web_custom_request("slots_6", 
		"URL=https://stage.peapod.com/api/v2.0/user/slots?delivAvail=true&headers=false&pupAvail=true&selected=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t90.inf", 
		LAST);

	web_custom_request("log", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t91.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||R|route_change|<path:\\\"/?gateway=1\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);

	web_custom_request("log_2", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t92.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||E|content_view|<region:\\\"home_page_tiles\\\"><scheduledContentId:\\\"CSDEV-4142\\\"><contentId:\\\"CSDEV-4143\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\">\",\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||E|content_view|<region:\\\"home_page_promonav\\\"><scheduledContentId"
		":\\\"CSDEV-1584\\\"><contentId:\\\"CSDEV-1578\\\"><contentModuleId:\\\"CSDEV-1587\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\">\",\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||E|content_view|<region:\\\"home_page_promonav\\\"><scheduledContentId:\\\"CSDEV-1584\\\"><contentId:\\\"CSDEV-1578\\\"><contentModuleId:\\\"CSDEV-1581\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\">\",\"Mozilla/5.0 (Windows "
		"NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||E|content_view|<region:\\\"home_page_promonav\\\"><scheduledContentId:\\\"CSDEV-1584\\\"><contentId:\\\"CSDEV-1578\\\"><contentModuleId:\\\"CSDEV-1579\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\">\",\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||E|content_view|<region:\\\"home_page_tiles\\\"><scheduledContentId:\\\""
		"CSDEV-5220\\\"><contentId:\\\"CSDEV-5219\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\">\",\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||E|content_view|<region:\\\"home_page_tiles\\\"><scheduledContentId:\\\"CSDEV-4108\\\"><contentId:\\\"CSDEV-4126\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\">\",\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 "
		"Safari/537.36||E|content_view|<region:\\\"home_page_promonav\\\"><scheduledContentId:\\\"CSDEV-1584\\\"><contentId:\\\"CSDEV-1578\\\"><contentModuleId:\\\"CSDEV-4365\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\">\"]}", 
		LAST);

	web_custom_request("cart_5", 
		"URL=https://stage.peapod.com/api/v3.0/user/cart?flags=true&image=true&sort=category+asc", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t93.inf", 
		LAST);

	web_custom_request("products_3", 
		"URL=https://stage.peapod.com/api/v3.0/auctioned/products?productIds=&type=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t94.inf", 
		LAST);

	web_custom_request("init_4", 
		"URL=https://stage.peapod.com/api/v2.0/user/init", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t95.inf", 
		LAST);

	web_custom_request("status_11", 
		"URL=https://stage.peapod.com/api/v3.0/user/order/status?routeService=false", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t96.inf", 
		LAST);

	web_custom_request("slots_7", 
		"URL=https://stage.peapod.com/api/v2.0/user/slots?delivAvail=true&headers=true&serviceType=D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t97.inf", 
		LAST);

	web_custom_request("status_12", 
		"URL=https://stage.peapod.com/api/v2.0/user/status", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t98.inf", 
		LAST);

	web_custom_request("status_13", 
		"URL=https://stage.peapod.com/api/v3.0/user/order/status?routeService=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t99.inf", 
		LAST);

	web_custom_request("init_5", 
		"URL=https://stage.peapod.com/api/v2.0/user/init", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t100.inf", 
		LAST);

	web_custom_request("slots_8", 
		"URL=https://stage.peapod.com/api/v2.0/user/slots?delivAvail=true&headers=true&serviceType=D&viewDate=2019-11-20", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t101.inf", 
		LAST);

	web_custom_request("status_14", 
		"URL=https://stage.peapod.com/api/v3.0/user/order/status?routeService=false", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t102.inf", 
		LAST);

	web_custom_request("status_15", 
		"URL=https://stage.peapod.com/api/v2.0/user/status", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t103.inf", 
		LAST);

	web_custom_request("status_16", 
		"URL=https://stage.peapod.com/api/v3.0/user/order/status?routeService=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t104.inf", 
		LAST);

	web_custom_request("status_17", 
		"URL=https://stage.peapod.com/api/v2.0/user/status", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t105.inf", 
		LAST);

	web_custom_request("init_6", 
		"URL=https://stage.peapod.com/api/v2.0/user/init", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t106.inf", 
		LAST);

	web_custom_request("slots_9", 
		"URL=https://stage.peapod.com/api/v2.0/user/slots?delivAvail=true&headers=true&serviceType=D&viewDate=2019-11-20", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t107.inf", 
		LAST);

	web_custom_request("search", 
		"URL=https://stage.peapod.com/api/v4.0/users/{C_userId}/coupons/search", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t108.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"query\":{\"start\":0,\"size\":5},\"filter\":{\"loadable\":true,\"loaded\":true,\"sourceSystems\":[\"QUO\",\"COP\"]},\"sorts\":[{\"targeted\":\"desc\"}]}", 
		LAST);

	web_custom_request("cms_15", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22notification_center_content%22:%7B%22limit%22:50%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t109.inf", 
		LAST);
	
	//i commented the test

//	web_custom_request("status_18", 
//		"URL=https://stage.peapod.com/api/v2.0/user/status", 
//		"Method=GET", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=https://stage.peapod.com/?gateway=1", 
//		"Snapshot=t110.inf", 
//		LAST);

	web_custom_request("init_7", 
		"URL=https://stage.peapod.com/api/v2.0/user/init", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t111.inf", 
		LAST);

	/*web_custom_request("search_2", 
		"URL=https://stage.peapod.com/api/v4.0/users/{C_userId}/coupons/search", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t112.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"query\":{\"start\":0,\"size\":5},\"filter\":{\"loadable\":true,\"loaded\":false,\"sourceSystems\":[\"QUO\",\"COP\"]},\"sorts\":[{\"targeted\":\"desc\"}]}", 
		LAST);*/

	web_custom_request("init_8", 
		"URL=https://stage.peapod.com/api/v2.0/user/init", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t113.inf", 
		LAST);

	web_custom_request("init_9", 
		"URL=https://stage.peapod.com/api/v2.0/user/init", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t114.inf", 
		LAST);

	web_custom_request("log_3", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t116.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||E|content_view|<region:\\\"home_page_hero\\\"><scheduledContentId:\\\"CSDEV-1382\\\"><contentId:\\\"CSDEV-1381\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\">\",\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||E|content_view|<region:\\\"home_page_hero\\\"><scheduledContentId:\\\""
		"CSDEV-4252\\\"><contentId:\\\"CSDEV-4253\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\">\"]}", 
		LAST);


	web_custom_request("118624,118616,118779,118617,118655", 
		"URL=https://stage.peapod.com/api/v3.0/user/products/118624,118616,118779,118617,118655?extendedInfo=true&flags=true&hkInclude=true&nutrition=true&substitute=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t118.inf", 
		LAST);

	web_custom_request("manifest-ppod.json_3", 
		"URL=https://stage.peapod.com/shop/images/favicon/manifest-ppod.json", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/?gateway=1", 
		"Snapshot=t123.inf", 
		LAST);

	lr_end_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T03_Login",LR_AUTO);

	lr_think_time(4);

	lr_start_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T04_Browse_Aisles_Seafood");
	
	web_custom_request("browse-sort-type", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/browse-sort-type", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633-seafood", 
		"Snapshot=t124.inf", 
		LAST);

	web_custom_request("shelf-view", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/shelf-view", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633-seafood", 
		"Snapshot=t125.inf", 
		LAST);

	web_custom_request("1633", 
		"URL=https://stage.peapod.com/api/v2.0/user/categories/1633?pc=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633-seafood", 
		"Snapshot=t126.inf", 
		LAST);

	web_custom_request("cms_16", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22browse_aisles_top_category_hero%22:%7B%22limit%22:100,%22ff%22:%7B%22Browse+Aisles+Shelf+Category+Id%22:%5B2541%5D%7D%7D,%22browse_aisles_top_category_content%22:%7B%22ff%22:%7B%22Browse+Aisles+Shelf+Category+Id%22:%5B2541%5D%7D%7D,%22browse_aisles_top_category_body%22:%7B%22ff%22:%7B%22Browse+Aisles+Shelf+Category+Id%22:%5B2541%5D%7D%7D,%22browse_aisles_shelf_header%22:%7B%22ff%22:%7B%22Browse+Aisles+Shelf+Category+Id%22:%5B2541%5D%7D%7D,"
		"%22browse_aisles_shelf_tile%22:%7B%22ff%22:%7B%22Browse+Aisles+Shelf+Category+Id%22:%5B2541%5D%7D%7D,%22browse_aisles_shelf_content%22:%7B%22ff%22:%7B%22Browse+Aisles+Shelf+Category+Id%22:%5B2541%5D%7D,%22limit%22:100,%22aux%22:%7B%22global_shelf_content%22:%7B%22limit%22:100%7D%7D%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633-seafood", 
		"Snapshot=t127.inf", 
		LAST);

	web_custom_request("cms_17", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22browse_aisles_top_category_hero%22:%7B%22limit%22:100,%22ff%22:%7B%22Browse+Aisles+Shelf+Category+Id%22:%5B2541%5D%7D%7D,%22browse_aisles_top_category_content%22:%7B%22ff%22:%7B%22Browse+Aisles+Shelf+Category+Id%22:%5B2541%5D%7D%7D,%22browse_aisles_top_category_body%22:%7B%22ff%22:%7B%22Browse+Aisles+Shelf+Category+Id%22:%5B2541%5D%7D%7D,%22browse_aisles_shelf_header%22:%7B%22ff%22:%7B%22Browse+Aisles+Shelf+Category+Id%22:%5B2541%5D%7D%7D,"
		"%22browse_aisles_shelf_tile%22:%7B%22ff%22:%7B%22Browse+Aisles+Shelf+Category+Id%22:%5B2541%5D%7D%7D,%22browse_aisles_shelf_content%22:%7B%22ff%22:%7B%22Browse+Aisles+Shelf+Category+Id%22:%5B2541%5D%7D,%22limit%22:100,%22aux%22:%7B%22global_shelf_content%22:%7B%22limit%22:100%7D%7D%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633-seafood", 
		"Snapshot=t128.inf", 
		LAST);

	web_custom_request("log_4", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633-seafood", 
		"Snapshot=t130.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||R|route_change|<path:\\\"/browse-aisles/categories/1/categories/1633-seafood\\\"><title:\\\"browse-aisles\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);

	web_custom_request("log_5", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633-seafood", 
		"Snapshot=t131.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||R|route_change|<path:\\\"/browse-aisles/categories/1/categories/1633-seafood\\\"><title:\\\"browse-aisles\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);

	lr_end_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T04_Browse_Aisles_Seafood",LR_AUTO);
	
	lr_think_time(4);

	lr_start_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T05_Seafood_Fish");

	web_custom_request("1634", 
		"URL=https://stage.peapod.com/api/v2.0/user/categories/1634?pc=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t133.inf", 
		LAST);

	web_custom_request("products_4", 
		"URL=https://stage.peapod.com/api/v3.0/user/products?catTreeId=1634&facet=categories,brands,nutrition,specials,newArrivals,privateLabel&facetExcludeFilter=true&filter=&flags=true&hkInclude=true&nutrition=true&rows=120&sort=itemsPurchased+desc,+name+asc&start=0&substitute=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t134.inf", 
		LAST);

	web_custom_request("cms_18", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22browse_aisles_top_category_hero%22:%7B%22limit%22:100,%22ff%22:%7B%22Browse+Aisles+Shelf+Category+Id%22:%5B2542%5D%7D%7D,%22browse_aisles_top_category_content%22:%7B%22ff%22:%7B%22Browse+Aisles+Shelf+Category+Id%22:%5B2542%5D%7D%7D,%22browse_aisles_top_category_body%22:%7B%22ff%22:%7B%22Browse+Aisles+Shelf+Category+Id%22:%5B2542%5D%7D%7D,%22browse_aisles_shelf_header%22:%7B%22ff%22:%7B%22Browse+Aisles+Shelf+Category+Id%22:%5B2542%5D%7D%7D,"
		"%22browse_aisles_shelf_tile%22:%7B%22ff%22:%7B%22Browse+Aisles+Shelf+Category+Id%22:%5B2542%5D%7D%7D,%22browse_aisles_shelf_content%22:%7B%22ff%22:%7B%22Browse+Aisles+Shelf+Category+Id%22:%5B2542%5D%7D,%22limit%22:100,%22aux%22:%7B%22global_shelf_content%22:%7B%22limit%22:100%7D%7D%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t135.inf", 
		LAST);


	lr_end_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T05_Seafood_Fish",LR_AUTO);
	
	lr_think_time(4);

	lr_start_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T06_Add_to_Cart");

	/*web_custom_request("log_6", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t138.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||R|route_change|<path:\\\"/browse-aisles/categories/1/categories/1633/categories/1634-fish\\\"><title:\\\"browse-aisles\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);

	web_custom_request("status_19", 
		"URL=https://stage.peapod.com/api/v2.0/user/status", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t141.inf", 
		LAST);

	web_custom_request("cart_6", 
		"URL=https://stage.peapod.com/api/v3.0/user/cart", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t146.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"type\":\"add\",\"prevQuantity\":0,\"productData\":{\"prodId\":212536,\"name\":\"Nature's Promise Salmon Portions Farm-Raised Fresh\",\"size\":\"5 OZ PKG\",\"unitPrice\":19.32,\"unitMeasure\":\"LB\",\"price\":5.99,\"regularPrice\":5.99,\"rootCatId\":2541,\"rootCatSeq\":4,\"rootCatName\":\"Seafood\",\"upc\":\"26151600000\",\"hasSubstitute\":false,\"rating\":0,\"ratingReviewsSuppressed\":false,\"marketSpecificReviews\":false,\"reviewId\":\"212536-PPDALL\",\"brandId\":128,\"brand\":\"Nature's "
		"Promise\",\"subcatId\":2547,\"subcatName\":\"Salmon\",\"flags\":{\"sample\":false,\"suppressed\":false,\"active\":true,\"outOfStock\":false,\"specialCode\":\" \",\"upromise\":false,\"newArrival\":false,\"privateLabel\":true,\"preferredItem\":false,\"bogo\":false,\"sale\":false,\"lowPriceEveryday\":false,\"organic\":false,\"dairy\":false,\"egg\":false,\"gluten\":false,\"kosher\":false,\"peanut\":false,\"nonGMO\":false,\"vegan\":false,\"vegeterian\":false,\"lactoseFree\":false,\"antibioticFree\""
		":false,\"wheatFree\":false,\"hormoneFree\":false,\"nitrateFree\":false,\"nitriteFree\":false,\"natural\":false},\"image\":{\"small\":\"https://i5.peapod.com/c/HJ/HJTAO.jpg\",\"medium\":\"https://i5.peapod.com/c/BA/BAXJE.jpg\",\"large\":\"https://i5.peapod.com/c/OZ/OZV3I.jpg\",\"xlarge\":\"https://i5.peapod.com/c/UG/UGE42.jpg\"},\"nutrition\":{\"nutritionShow\":true,\"servingSize\":\"3 OZ\",\"servingsPerContainer\":\"VARIES\",\"totalCalories\":176.8,\"totalCaloriesShow\":true,\"fatCalories\":102.66"
		",\"fatCaloriesShow\":true,\"totalFat\":11.4,\"totalFatShow\":true,\"totalFatPct\":17.54,\"totalFatPctShow\":true,\"totalFatUnit\":\"g\",\"saturatedFat\":2.59,\"saturatedFatShow\":true,\"saturatedFatPct\":12.96,\"saturatedFatPctShow\":true,\"saturatedFatUnit\":\"g\",\"transFat\":0,\"transFatUnit\":\"g\",\"transFatShow\":true,\"polyunsaturatedFat\":3.3,\"polyunsaturatedFatUnit\":\"g\",\"polyunsaturatedFatShow\":true,\"monounsaturatedFat\":3.2,\"monounsaturatedFatUnit\":\"g\",\""
		"monounsaturatedFatShow\":true,\"cholesterol\":46.75,\"cholesterolShow\":true,\"cholesterolPct\":15.58,\"cholesterolPctShow\":true,\"cholesterolUnit\":\"mg\",\"sodium\":50.15,\"sodiumShow\":true,\"sodiumPct\":2.08,\"sodiumPctShow\":true,\"sodiumUnit\":\"mg\",\"potassium\":308.55,\"potassiumShow\":true,\"potassiumPct\":6.56,\"potassiumPctShow\":true,\"potassiumUnit\":\"mg\",\"totalCarbs\":0,\"totalCarbsShow\":true,\"totalCarbsPct\":0,\"totalCarbsPctShow\":true,\"totalCarbsUnit\":\"g\",\""
		"dietaryFiber\":0,\"dietaryFiberShow\":true,\"dietaryFiberPct\":0,\"dietaryFiberPctShow\":true,\"dietaryFiberUnit\":\"g\",\"sugar\":0,\"sugarUnit\":\"g\",\"sugarShow\":true,\"sugarAlcoholUnit\":\"g\",\"sugarAlcoholShow\":false,\"otherCarbs\":0,\"otherCarbsUnit\":\"g\",\"otherCarbsShow\":true,\"protein\":17.35,\"proteinUnit\":\"g\",\"proteinShow\":true,\"vitaminAPct\":3.28,\"vitaminAShow\":true,\"vitaminCPct\":4.42,\"vitaminCShow\":true,\"ironPct\":1.6,\"ironShow\":true,\"calciumPct\":0.76,\""
		"calciumShow\":true,\"ww\":5,\"wwShow\":true},\"bmsm\":false,\"bmsmTiers\":[],\"guidingStars\":3,\"coupon\":{\"id\":\"ECI_318099\",\"description\":\"318099-CMDDEV-20 - buy 3 get $1 off - Mithun - No restriction.\",\"title\":\"buy 3 get $1 off \",\"startDate\":\"2018-08-21\",\"endDate\":\"2025-12-31\",\"maxDiscount\":1,\"displayPriority\":1,\"clippingRequired\":false,\"targeted\":false,\"sourceSystem\":\"ECI\",\"sourceSystemId\":\"318099\",\"loaded\":false,\"promotionType\":\"Item\"},\"options\":[],"
		"\"suppressSwapAndSave\":false,\"productCategoryId\":3734,\"hasPriceAdjustment\":false,\"hasPickStoreLocation\":false,\"hasCoupon\":true},\"logName\":\"cart_item_add\",\"items\":[{\"productId\":212536,\"quantity\":1,\"coupon\":null}]}", 
		LAST);

	web_custom_request("init_10", 
		"URL=https://stage.peapod.com/api/v2.0/user/init", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t148.inf", 
		LAST);

	web_custom_request("log_12", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t149.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||E|cart_item_add|<productId:\\\"212536\\\"><quantity:\\\"1\\\"><amount:\\\"5.99\\\"><location:\\\"BROWSE_AISLES\\\"><keywords:\\\"\\\"><region:\\\"browse_aisles_shelf_content\\\"><index:\\\"NaN\\\"><sale:\\\"false\\\"><newArrival:\\\"false\\\"><sponsored:\\\"false\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);*/
	
	
	web_custom_request("cart", 
		"URL=https://stage.peapod.com/api/v3.0/user/cart", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"type\":\"add\",\"prevQuantity\":0,\"productData\":{\"prodId\":140290,\"name\":\"Salmon Fillets Skin-On Farm-Raised Fresh\",\"size\":\"APX 1 LB\",\"unitPrice\":9.99,\"unitMeasure\":\"LB\",\"price\":9.99,\"regularPrice\":9.99,\"rootCatId\":2541,\"rootCatSeq\":4,\"rootCatName\":\"Seafood\",\"upc\":\"25442300000\",\"hasSubstitute\":true,\"substituteId\":219448,\"rating\":0,\"ratingReviewsSuppressed\":false,\"marketSpecificReviews\":false,\"reviewId\":\"140290-PPDALL\",\"brandId\":557,\"brand\""
		":\"Fresh Seafood\",\"subcatId\":2547,\"subcatName\":\"Salmon\",\"flags\":{\"sample\":false,\"suppressed\":false,\"active\":true,\"outOfStock\":false,\"specialCode\":\" \",\"upromise\":false,\"newArrival\":false,\"privateLabel\":false,\"preferredItem\":false,\"bogo\":false,\"sale\":false,\"lowPriceEveryday\":false,\"organic\":false,\"dairy\":false,\"egg\":false,\"gluten\":false,\"kosher\":false,\"peanut\":false,\"nonGMO\":false,\"vegan\":false,\"vegeterian\":false,\"lactoseFree\":false,\""
		"antibioticFree\":false,\"wheatFree\":false,\"hormoneFree\":false,\"nitrateFree\":false,\"nitriteFree\":false,\"natural\":false},\"image\":{\"small\":\"https://i5.peapod.com/c/2F/2FWXO.jpg\",\"medium\":\"https://i5.peapod.com/c/O6/O6JCB.jpg\",\"large\":\"https://i5.peapod.com/c/HH/HHI8O.jpg\",\"xlarge\":\"https://i5.peapod.com/c/45/457SP.jpg\"},\"nutrition\":{\"nutritionShow\":true,\"servingSize\":\"3 OZ\",\"servingsPerContainer\":\"VARIES\",\"totalCalories\":177,\"totalCaloriesShow\":true,\""
		"fatCalories\":102.66,\"fatCaloriesShow\":true,\"totalFat\":11.41,\"totalFatShow\":true,\"totalFatPct\":17.55,\"totalFatPctShow\":true,\"totalFatUnit\":\"g\",\"saturatedFat\":2.59,\"saturatedFatShow\":true,\"saturatedFatPct\":12.96,\"saturatedFatPctShow\":true,\"saturatedFatUnit\":\"g\",\"transFat\":0,\"transFatUnit\":\"g\",\"transFatShow\":true,\"polyunsaturatedFat\":3.3,\"polyunsaturatedFatUnit\":\"g\",\"polyunsaturatedFatShow\":true,\"monounsaturatedFat\":3.2,\"monounsaturatedFatUnit\":\"g\",\""
		"monounsaturatedFatShow\":true,\"cholesterol\":46.75,\"cholesterolShow\":true,\"cholesterolPct\":15.58,\"cholesterolPctShow\":true,\"cholesterolUnit\":\"mg\",\"sodium\":50.15,\"sodiumShow\":true,\"sodiumPct\":2.09,\"sodiumPctShow\":true,\"sodiumUnit\":\"mg\",\"potassium\":308.55,\"potassiumShow\":true,\"potassiumPct\":6.56,\"potassiumPctShow\":true,\"potassiumUnit\":\"mg\",\"totalCarbs\":0,\"totalCarbsShow\":true,\"totalCarbsPct\":0,\"totalCarbsPctShow\":true,\"totalCarbsUnit\":\"g\",\""
		"dietaryFiber\":0,\"dietaryFiberShow\":true,\"dietaryFiberPct\":0,\"dietaryFiberPctShow\":true,\"dietaryFiberUnit\":\"g\",\"sugar\":0,\"sugarUnit\":\"g\",\"sugarShow\":true,\"sugarAlcoholUnit\":\"g\",\"sugarAlcoholShow\":false,\"otherCarbs\":0,\"otherCarbsUnit\":\"g\",\"otherCarbsShow\":true,\"protein\":17.36,\"proteinUnit\":\"g\",\"proteinShow\":true,\"vitaminAPct\":0.85,\"vitaminAShow\":true,\"vitaminCPct\":4.42,\"vitaminCShow\":true,\"ironPct\":0.01,\"ironShow\":true,\"calciumPct\":0.77,\""
		"calciumShow\":true,\"ww\":5,\"wwShow\":true},\"bmsm\":false,\"bmsmTiers\":[],\"guidingStars\":3,\"options\":[],\"suppressSwapAndSave\":false,\"productCategoryId\":3733,\"hasPriceAdjustment\":false,\"hasPickStoreLocation\":false,\"hasCoupon\":false},\"logName\":\"cart_item_add\",\"items\":[{\"productId\":140290,\"quantity\":1,\"coupon\":null}]}", 
		EXTRARES, 
		"Url=https://www.google-analytics.com/plugins/ua/ec.js", "Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", ENDITEM, 
		"Url=https://www.res-x.com/ws/r2/Resonance.aspx?appid=peapod01&tk=124684865318955&ss=313104184838010&sg=1&pg=898974900150347&vr=5.3x&bx=false&ev=cart&ei=140290&ur=https%3A%2F%2Fstage.peapod.com%2Fbrowse-aisles%2Fcategories%2F1%2Fcategories%2F1633%2Fcategories%2F1634-fish&plk=&rf=https%3A%2F%2Fstage.peapod.com%2Fshop%2Fauth%2Flogin%3Fgateway%3D1%26redirectTo%3D%252F", "Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j79&a=137071323&t=event&ni=0&cu=USD&_s=1&dl=https%3A%2F%2Fstage.peapod.com%2Fbrowse-aisles%2Fcategories%2F1%2Fcategories%2F1633%2Fcategories%2F1634-fish&dr=https%3A%2F%2Fstage.peapod.com%2Fshop%2Fauth%2Flogin%3Fgateway%3D1%26redirectTo%3D%252F&dp=%2Fbrowse-aisles%2Fcategories%2F1%2Fcategories%2F1633%2Fcategories%2F1634-fish&ul=en-us&de=UTF-8&dt=Browse%20Aisles%20-%20Fish%20%7C%20Peapod&sd=24-bit&sr=1536x864&vp=1536x753&je=0&ec=ecommerce&ea="
		"add%20to%20cart&el=140290%3A%20Salmon%20Fillets%20Skin-On%20Farm-Raised%20Fresh&_u=SCCACUI7B~&jid=&gjid=&cid=1651878344.1574483642&uid=91116857&tid=UA-20096507-4&_gid=1955267022.1574483642&gtm=2wgav9MDB4F8D&cd39=GTM-MDB4F8D&cd40=1651878344.1574483642&cd41=91116857&cd42=1574483885730.l64qytw&cd43=Mozilla%2F5.0%20(Windows%20NT%206.3%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36&cd47="
		"https%3A%2F%2Fstage.peapod.com%2Fbrowse-aisles%2Fcategories%2F1%2Fcategories%2F1633%2Fcategories%2F1634-fish&cd48=02134&cd49=MA&cd50=Allston&cd51=0&cd52=0&cd61=web&cd74=C&cd75=WORKING&cd79=PPOD&cd44=GA%20-%20Event%20-%20EE%20-%20Add%20to%20Cart&cd46=ecommerce&cd60=browse_aisles&pa=add&pr1nm=Salmon%20Fillets%20Skin-On%20Farm-Raised%20Fresh&pr1id=140290&pr1pr=9.99&pr1br=Fresh%20Seafood&pr1ca=Seafood&pr1qt=1&pr1cd37=0&z=1240499240", "Referer=https://stage.peapod.com/browse-aisles/categories/1/"
		"categories/1633/categories/1634-fish", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j79&a=137071323&t=event&_s=4&dl=https%3A%2F%2Fstage.peapod.com%2F%3Fgateway%3D1&ul=en-us&de=UTF-8&dt=Browse%20Aisles%20-%20Fish%20%7C%20Peapod&sd=24-bit&sr=1536x864&vp=1536x753&je=0&ec=Global&ea=Click&el=Cart%20Int%3A%20Add%20Item&_u=SCCACUI7B~&jid=&gjid=&cid=1651878344.1574483642&uid=91116857&tid=UA-20096507-3&_gid=1955267022.1574483642&cd1=91116857&cd2=C&cd6=false&cd35=false&cd3=02134&cd4=STSH&cd5=2&cd8=WORKING&cd9=d136075544&cd10=D&cd11=true&"
		"cd12=new&cm1=0&cm3=9.99&cm4=1&z=520420394", "Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", ENDITEM, 
		"Url=https://www.google.com/ads/ga-audiences?v=1&aip=1&t=sr&_r=4&tid=UA-20096507-4&cid=1651878344.1574483642&jid=1024911060&_v=j79&z=652149312", "Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", ENDITEM, 
		"Url=https://sslwidget.criteo.com/event?a=49626&v=5.4.0&p0=e%3Dexd%26rvi%3Debbf5ad7-0edf-4e92-9173-1e97cef749a3%26ci%3Debbf5ad7-0edf-4e92-9173-1e97cef749a3&p1=e%3Dac%26p%3D%255Bi%25253D140290%252526pr%25253D9.99%252526q%25253D1%255D%26pi%3DaddToCart&p2=e%3Ddis&adce=1&lwid=b8c13416-11be-48d6-ab56-8020fcd85203&tld=peapod.com&dtycbr=28436&abe=0", "Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", ENDITEM, 
		"Url=https://b.hlserve.com/beacon?fid=101&hl_qs="
		"RXQhDA75swuc8p3%2BKyzJCoz3wNSBYDwUZcw5hkUdjsYyI1Len66FFwnl5hTPX5aTYF%2Fm6BtS9i%2BxMi5bl3KgTF0pTj%2BP449oaSxAhxbdi7g4GWxIMpYxbgb0sWmu8hqaOiQelJtDJm4tFOTaWXECMuoroIfo7QIZAkvu7rLuiOMwu2SG87FH9%2FqnrkQLUz%2Fh5duKmWTmksul3bPedQVRk4hA5R1u1ySw31Ujg8pjpuToeDLzZvvI5quj%2Ft2Jbdt40vtd8RpuLyb3shwTiQXyO4NrpsJSftjnlcdBC1xnUiD7kWQte9mZ0iqLtP4DS9nveHqB9%2BGdC1LOviOIF0Yxp8agdq8iqOwWeQzrYPAgAROSY07kMUklg76GMmvE1%2BkIW6qLiq%2FkKaj5lbffLhapGfIRXWpvuvS0H8BUOOuExT%2FYJKicwnfMUIKcXwBd3ppwNexxsmGw7cqqJ0%2BKvam7W62bfoks1e"
		"DJcb2bYVMjzbGWx%2FG4dG4mc6pLC9QxyWdpHaLtEFPl%2FqlBbnZeNsqVwN4u8sEScR7HSi%2F8UmYxA5eiRQKGrFGTe50WuUlZECKW6tat8dN2nO1I69wZmLSUqZPNqgTrFSx%2BImiVeUIrKBSNTu4zAcmfh79oe6XfPQxKeifKRva2mtrVmS4H%2Bd51ntUQoJn%2F63tI2gK4QbbEJaVWDKF8evjB5gPlM0f5pprFTWb1QIUhj3vn8JEA6Id7rIFMRVeJWnOqizqIwP9Ua7utgtOfwS5xTk84XpfKr%2Fzt9TVbzx5JWaNGR3cZvWby3hwP5YvzdeseNJUvKVBzCapzH69ZDiJsRq55Ke08nyhzjUVgXGm0zQr8GAGew8yLBFaeD8cvXYJ17Sfjmz%2FOte71Ns%2BOoSbyg1c8GsiOs8V2piNNGwE0mrE23WFnYES93A%3D%3D&ev=2&action=page&origc=O&pid="
		"4c70f719-19ca-49fc-abe5-ea3d92d280c7&rn=1088439659&abe=0&criteo-uid=43b52252-21cf-4092-8465-7da4820af070", "Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", ENDITEM, 
		LAST);

	web_custom_request("log_12", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.108 Safari/537.36||E|cart_item_add|<productId:\\\"140290\\\"><quantity:\\\"1\\\"><amount:\\\"9.99\\\"><location:\\\"BROWSE_AISLES\\\"><keywords:\\\"\\\"><region:\\\"browse_aisles_shelf_content\\\"><index:\\\"NaN\\\"><sale:\\\"false\\\"><newArrival:\\\"false\\\"><sponsored:\\\"false\\\"><resolution:\\\"1536x753\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);

	lr_end_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T06_Add_to_Cart",LR_AUTO);
	
	lr_think_time(4);

	lr_start_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T07_Increase_Prod_Qty");

	web_add_header("Content-Type","application/json;charset=UTF-8");

/*	web_custom_request("cart_7", 
		"URL=https://stage.peapod.com/api/v3.0/user/cart", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t150.inf", 
		"Mode=HTTP", 
		"Body={\"type\":\"update\",\"prevQuantity\":1,\"productData\":{\"prodId\":212536,\"name\":\"Nature's Promise Salmon Portions Farm-Raised Fresh\",\"size\":\"5 OZ PKG\",\"unitPrice\":19.32,\"unitMeasure\":\"LB\",\"price\":5.99,\"regularPrice\":5.99,\"rootCatId\":2541,\"rootCatSeq\":4,\"rootCatName\":\"Seafood\",\"upc\":\"26151600000\",\"hasSubstitute\":false,\"rating\":0,\"ratingReviewsSuppressed\":false,\"marketSpecificReviews\":false,\"reviewId\":\"212536-PPDALL\",\"brandId\":128,\"brand\":\""
		"Nature's Promise\",\"subcatId\":2547,\"subcatName\":\"Salmon\",\"flags\":{\"sample\":false,\"suppressed\":false,\"active\":true,\"outOfStock\":false,\"specialCode\":\" \",\"upromise\":false,\"newArrival\":false,\"privateLabel\":true,\"preferredItem\":false,\"bogo\":false,\"sale\":false,\"lowPriceEveryday\":false,\"organic\":false,\"dairy\":false,\"egg\":false,\"gluten\":false,\"kosher\":false,\"peanut\":false,\"nonGMO\":false,\"vegan\":false,\"vegeterian\":false,\"lactoseFree\":false,\""
		"antibioticFree\":false,\"wheatFree\":false,\"hormoneFree\":false,\"nitrateFree\":false,\"nitriteFree\":false,\"natural\":false},\"image\":{\"small\":\"https://i5.peapod.com/c/HJ/HJTAO.jpg\",\"medium\":\"https://i5.peapod.com/c/BA/BAXJE.jpg\",\"large\":\"https://i5.peapod.com/c/OZ/OZV3I.jpg\",\"xlarge\":\"https://i5.peapod.com/c/UG/UGE42.jpg\"},\"nutrition\":{\"nutritionShow\":true,\"servingSize\":\"3 OZ\",\"servingsPerContainer\":\"VARIES\",\"totalCalories\":176.8,\"totalCaloriesShow\":true,\""
		"fatCalories\":102.66,\"fatCaloriesShow\":true,\"totalFat\":11.4,\"totalFatShow\":true,\"totalFatPct\":17.54,\"totalFatPctShow\":true,\"totalFatUnit\":\"g\",\"saturatedFat\":2.59,\"saturatedFatShow\":true,\"saturatedFatPct\":12.96,\"saturatedFatPctShow\":true,\"saturatedFatUnit\":\"g\",\"transFat\":0,\"transFatUnit\":\"g\",\"transFatShow\":true,\"polyunsaturatedFat\":3.3,\"polyunsaturatedFatUnit\":\"g\",\"polyunsaturatedFatShow\":true,\"monounsaturatedFat\":3.2,\"monounsaturatedFatUnit\":\"g\",\""
		"monounsaturatedFatShow\":true,\"cholesterol\":46.75,\"cholesterolShow\":true,\"cholesterolPct\":15.58,\"cholesterolPctShow\":true,\"cholesterolUnit\":\"mg\",\"sodium\":50.15,\"sodiumShow\":true,\"sodiumPct\":2.08,\"sodiumPctShow\":true,\"sodiumUnit\":\"mg\",\"potassium\":308.55,\"potassiumShow\":true,\"potassiumPct\":6.56,\"potassiumPctShow\":true,\"potassiumUnit\":\"mg\",\"totalCarbs\":0,\"totalCarbsShow\":true,\"totalCarbsPct\":0,\"totalCarbsPctShow\":true,\"totalCarbsUnit\":\"g\",\""
		"dietaryFiber\":0,\"dietaryFiberShow\":true,\"dietaryFiberPct\":0,\"dietaryFiberPctShow\":true,\"dietaryFiberUnit\":\"g\",\"sugar\":0,\"sugarUnit\":\"g\",\"sugarShow\":true,\"sugarAlcoholUnit\":\"g\",\"sugarAlcoholShow\":false,\"otherCarbs\":0,\"otherCarbsUnit\":\"g\",\"otherCarbsShow\":true,\"protein\":17.35,\"proteinUnit\":\"g\",\"proteinShow\":true,\"vitaminAPct\":3.28,\"vitaminAShow\":true,\"vitaminCPct\":4.42,\"vitaminCShow\":true,\"ironPct\":1.6,\"ironShow\":true,\"calciumPct\":0.76,\""
		"calciumShow\":true,\"ww\":5,\"wwShow\":true},\"bmsm\":false,\"bmsmTiers\":[],\"guidingStars\":3,\"coupon\":{\"id\":\"ECI_318099\",\"description\":\"318099-CMDDEV-20 - buy 3 get $1 off - Mithun - No restriction.\",\"title\":\"buy 3 get $1 off \",\"startDate\":\"2018-08-21\",\"endDate\":\"2025-12-31\",\"maxDiscount\":1,\"displayPriority\":1,\"clippingRequired\":false,\"targeted\":false,\"sourceSystem\":\"ECI\",\"sourceSystemId\":\"318099\",\"loaded\":false,\"promotionType\":\"Item\"},\"options\":[],"
		"\"suppressSwapAndSave\":false,\"productCategoryId\":3734,\"hasPriceAdjustment\":false,\"hasPickStoreLocation\":false,\"hasCoupon\":true},\"logName\":\"cart_item_update\",\"items\":[{\"productId\":212536,\"quantity\":5,\"coupon\":null}]}", 
		LAST);

	web_custom_request("log_13", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t151.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||E|cart_item_update|<productId:\\\"212536\\\"><quantity:\\\"5\\\"><amount:\\\"23.96\\\"><location:\\\"BROWSE_AISLES\\\"><keywords:\\\"\\\"><region:\\\"browse_aisles_shelf_content\\\"><index:\\\"NaN\\\"><sale:\\\"false\\\"><newArrival:\\\"false\\\"><sponsored:\\\"false\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);*/
		
	web_custom_request("cart_2", 
		"URL=https://stage.peapod.com/api/v3.0/user/cart", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"Body={\"type\":\"update\",\"prevQuantity\":1,\"productData\":{\"prodId\":140290,\"name\":\"Salmon Fillets Skin-On Farm-Raised Fresh\",\"size\":\"APX 1 LB\",\"unitPrice\":9.99,\"unitMeasure\":\"LB\",\"price\":9.99,\"regularPrice\":9.99,\"rootCatId\":2541,\"rootCatSeq\":4,\"rootCatName\":\"Seafood\",\"upc\":\"25442300000\",\"hasSubstitute\":true,\"substituteId\":219448,\"rating\":0,\"ratingReviewsSuppressed\":false,\"marketSpecificReviews\":false,\"reviewId\":\"140290-PPDALL\",\"brandId\":557,\""
		"brand\":\"Fresh Seafood\",\"subcatId\":2547,\"subcatName\":\"Salmon\",\"flags\":{\"sample\":false,\"suppressed\":false,\"active\":true,\"outOfStock\":false,\"specialCode\":\" \",\"upromise\":false,\"newArrival\":false,\"privateLabel\":false,\"preferredItem\":false,\"bogo\":false,\"sale\":false,\"lowPriceEveryday\":false,\"organic\":false,\"dairy\":false,\"egg\":false,\"gluten\":false,\"kosher\":false,\"peanut\":false,\"nonGMO\":false,\"vegan\":false,\"vegeterian\":false,\"lactoseFree\":false,\""
		"antibioticFree\":false,\"wheatFree\":false,\"hormoneFree\":false,\"nitrateFree\":false,\"nitriteFree\":false,\"natural\":false},\"image\":{\"small\":\"https://i5.peapod.com/c/2F/2FWXO.jpg\",\"medium\":\"https://i5.peapod.com/c/O6/O6JCB.jpg\",\"large\":\"https://i5.peapod.com/c/HH/HHI8O.jpg\",\"xlarge\":\"https://i5.peapod.com/c/45/457SP.jpg\"},\"nutrition\":{\"nutritionShow\":true,\"servingSize\":\"3 OZ\",\"servingsPerContainer\":\"VARIES\",\"totalCalories\":177,\"totalCaloriesShow\":true,\""
		"fatCalories\":102.66,\"fatCaloriesShow\":true,\"totalFat\":11.41,\"totalFatShow\":true,\"totalFatPct\":17.55,\"totalFatPctShow\":true,\"totalFatUnit\":\"g\",\"saturatedFat\":2.59,\"saturatedFatShow\":true,\"saturatedFatPct\":12.96,\"saturatedFatPctShow\":true,\"saturatedFatUnit\":\"g\",\"transFat\":0,\"transFatUnit\":\"g\",\"transFatShow\":true,\"polyunsaturatedFat\":3.3,\"polyunsaturatedFatUnit\":\"g\",\"polyunsaturatedFatShow\":true,\"monounsaturatedFat\":3.2,\"monounsaturatedFatUnit\":\"g\",\""
		"monounsaturatedFatShow\":true,\"cholesterol\":46.75,\"cholesterolShow\":true,\"cholesterolPct\":15.58,\"cholesterolPctShow\":true,\"cholesterolUnit\":\"mg\",\"sodium\":50.15,\"sodiumShow\":true,\"sodiumPct\":2.09,\"sodiumPctShow\":true,\"sodiumUnit\":\"mg\",\"potassium\":308.55,\"potassiumShow\":true,\"potassiumPct\":6.56,\"potassiumPctShow\":true,\"potassiumUnit\":\"mg\",\"totalCarbs\":0,\"totalCarbsShow\":true,\"totalCarbsPct\":0,\"totalCarbsPctShow\":true,\"totalCarbsUnit\":\"g\",\""
		"dietaryFiber\":0,\"dietaryFiberShow\":true,\"dietaryFiberPct\":0,\"dietaryFiberPctShow\":true,\"dietaryFiberUnit\":\"g\",\"sugar\":0,\"sugarUnit\":\"g\",\"sugarShow\":true,\"sugarAlcoholUnit\":\"g\",\"sugarAlcoholShow\":false,\"otherCarbs\":0,\"otherCarbsUnit\":\"g\",\"otherCarbsShow\":true,\"protein\":17.36,\"proteinUnit\":\"g\",\"proteinShow\":true,\"vitaminAPct\":0.85,\"vitaminAShow\":true,\"vitaminCPct\":4.42,\"vitaminCShow\":true,\"ironPct\":0.01,\"ironShow\":true,\"calciumPct\":0.77,\""
		"calciumShow\":true,\"ww\":5,\"wwShow\":true},\"bmsm\":false,\"bmsmTiers\":[],\"guidingStars\":3,\"options\":[],\"suppressSwapAndSave\":false,\"productCategoryId\":3733,\"hasPriceAdjustment\":false,\"hasPickStoreLocation\":false,\"hasCoupon\":false},\"logName\":\"cart_item_update\",\"items\":[{\"productId\":140290,\"quantity\":2,\"coupon\":null}]}", 
		EXTRARES, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j79&a=137071323&t=event&ni=0&cu=USD&_s=1&dl=https%3A%2F%2Fstage.peapod.com%2Fbrowse-aisles%2Fcategories%2F1%2Fcategories%2F1633%2Fcategories%2F1634-fish&dr=https%3A%2F%2Fstage.peapod.com%2Fshop%2Fauth%2Flogin%3Fgateway%3D1%26redirectTo%3D%252F&dp=%2Fbrowse-aisles%2Fcategories%2F1%2Fcategories%2F1633%2Fcategories%2F1634-fish&ul=en-us&de=UTF-8&dt=Browse%20Aisles%20-%20Fish%20%7C%20Peapod&sd=24-bit&sr=1536x864&vp=1536x753&je=0&ec=ecommerce&ea="
		"add%20to%20cart&el=140290%3A%20Salmon%20Fillets%20Skin-On%20Farm-Raised%20Fresh&_u=SCCACUI7B~&jid=&gjid=&cid=1651878344.1574483642&uid=91116857&tid=UA-20096507-4&_gid=1955267022.1574483642&gtm=2wgav9PN7ML7L&cd2=ecommerce&cd6=GA%20-%20Event%20-%20EE%20-%20Add%20To%20Cart%20-%20Overview&cd39=GTM-PN7ML7L&cd40=1651878344.1574483642&cd41=91116857&cd42=1574483908468.v9zawpi2q&cd43=Mozilla%2F5.0%20(Windows%20NT%206.3%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F78.0.3904.108%20Safari%2F537.36&cd47=https%3A%2F%2Fstage.peapod.com%2Fbrowse-aisles%2Fcategories%2F1%2Fcategories%2F1633%2Fcategories%2F1634-fish&cd48=02134&cd49=MA&cd50=Allston&cd51=0&cd52=0&cd61=web&cd74=C&cd75=WORKING&cd79=PPOD&cd60=BROWSE_AISLES&cm77=1&pa=add&pr1nm=Salmon%20Fillets%20Skin-On%20Farm-Raised%20Fresh&pr1id=140290&pr1pr=9.99&pr1br=Fresh%20Seafood&pr1ca=Seafood&pr1qt=1&pr1cd37=0&z=1254366207", "Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/"
		"categories/1634-fish", ENDITEM, 
		LAST);

	web_custom_request("events_5", 
		"URL=https://logx.optimizely.com/v1/events", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"account_id\":\"8474790541\",\"anonymize_ip\":true,\"client_name\":\"js\",\"client_version\":\"0.134.0\",\"project_id\":\"8545500175\",\"revision\":\"3352\",\"visitors\":[{\"visitor_id\":\"oeu1574483647472r0.7125047403284472\",\"session_id\":\"AUTO\",\"attributes\":[{\"e\":null,\"k\":\"\",\"t\":\"first_session\",\"v\":true},{\"e\":null,\"k\":\"\",\"t\":\"browserId\",\"v\":\"gc\"},{\"e\":\"8572052329\",\"k\":\"8572052329\",\"t\":\"custom\",\"v\":\"true\"},{\"e\":\"8636313790\",\"k\":\""
		"8636313790\",\"t\":\"custom\",\"v\":\"C\"},{\"e\":\"8638262211\",\"k\":\"8638262211\",\"t\":\"custom\",\"v\":\"0\"},{\"e\":\"8636343366\",\"k\":\"8636343366\",\"t\":\"custom\",\"v\":2},{\"e\":\"8633642554\",\"k\":\"8633642554\",\"t\":\"custom\",\"v\":\"02134\"},{\"e\":\"8601681438\",\"k\":\"8601681438\",\"t\":\"custom\",\"v\":\"true\"},{\"e\":\"8640224308\",\"k\":\"8640224308\",\"t\":\"custom\",\"v\":\"STSH\"},{\"e\":\"8631343259\",\"k\":\"8631343259\",\"t\":\"custom\",\"v\":\"D\"},{\"e\":\""
		"8638204402\",\"k\":\"8638204402\",\"t\":\"custom\",\"v\":\"false\"},{\"e\":\"8627877189\",\"k\":\"8627877189\",\"t\":\"custom\",\"v\":\"WORKING\"},{\"e\":\"10679300201\",\"k\":\"10679300201\",\"t\":\"custom\",\"v\":\"false\"},{\"e\":null,\"k\":\"\",\"t\":\"device\",\"v\":\"desktop\"},{\"e\":null,\"k\":\"\",\"t\":\"device_type\",\"v\":\"desktop_laptop\"},{\"e\":null,\"k\":\"\",\"t\":\"source_type\",\"v\":\"direct\"},{\"e\":null,\"k\":\"\",\"t\":\"currentTimestamp\",\"v\":1574483741801},{\"e\":null,"
		"\"k\":\"\",\"t\":\"offset\",\"v\":300}],\"snapshots\":[{\"activationTimestamp\":1574483741738,\"decisions\":[{\"c\":\"16918282040\",\"x\":null,\"v\":null,\"h\":false},{\"c\":\"16929217109\",\"x\":null,\"v\":null,\"h\":false},{\"c\":\"16931377848\",\"x\":null,\"v\":null,\"h\":false},{\"c\":\"16943444778\",\"x\":null,\"v\":null,\"h\":false},{\"c\":\"16945430476\",\"x\":\"16927644445\",\"v\":\"16894855429\",\"h\":false}],\"events\":[{\"e\":\"10372134424\",\"k\":\"8545500175_increment\",\"t\""
		":1574483907931,\"u\":\"3b4b736e-7b6b-4b60-8a74-0e9eecb6202d\",\"y\":\"other\",\"a\":{}}]}]}]}", 
		EXTRARES, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j79&a=137071323&t=event&ni=0&cu=USD&_s=1&dl=https%3A%2F%2Fstage.peapod.com%2Fbrowse-aisles%2Fcategories%2F1%2Fcategories%2F1633%2Fcategories%2F1634-fish&dr=https%3A%2F%2Fstage.peapod.com%2Fshop%2Fauth%2Flogin%3Fgateway%3D1%26redirectTo%3D%252F&dp=%2Fbrowse-aisles%2Fcategories%2F1%2Fcategories%2F1633%2Fcategories%2F1634-fish&ul=en-us&de=UTF-8&dt=Browse%20Aisles%20-%20Fish%20%7C%20Peapod&sd=24-bit&sr=1536x864&vp=1536x753&je=0&ec=ecommerce&ea="
		"add%20to%20cart&el=140290%3A%20Salmon%20Fillets%20Skin-On%20Farm-Raised%20Fresh&_u=SCCACUI7B~&jid=&gjid=&cid=1651878344.1574483642&uid=91116857&tid=UA-20096507-4&_gid=1955267022.1574483642&gtm=2wgav9MDB4F8D&cd39=GTM-MDB4F8D&cd40=1651878344.1574483642&cd41=91116857&cd42=1574483908492.ox9sn7j6&cd43=Mozilla%2F5.0%20(Windows%20NT%206.3%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36&cd47="
		"https%3A%2F%2Fstage.peapod.com%2Fbrowse-aisles%2Fcategories%2F1%2Fcategories%2F1633%2Fcategories%2F1634-fish&cd48=02134&cd49=MA&cd50=Allston&cd51=0&cd52=0&cd61=web&cd74=C&cd75=WORKING&cd79=PPOD&cd44=GA%20-%20Event%20-%20EE%20-%20Add%20to%20Cart&cd46=ecommerce&cd60=browse_aisles&pa=add&pr1nm=Salmon%20Fillets%20Skin-On%20Farm-Raised%20Fresh&pr1id=140290&pr1pr=9.99&pr1br=Fresh%20Seafood&pr1ca=Seafood&pr1qt=1&pr1cd37=0&z=1122098965", "Referer=https://stage.peapod.com/browse-aisles/categories/1/"
		"categories/1633/categories/1634-fish", ENDITEM, 
		"Url=https://sslwidget.criteo.com/event?a=49626&v=5.4.0&p0=e%3Dexd%26rvi%3Debbf5ad7-0edf-4e92-9173-1e97cef749a3%26ci%3Debbf5ad7-0edf-4e92-9173-1e97cef749a3&p1=e%3Dac%26p%3D%255Bi%25253D140290%252526pr%25253D9.99%252526q%25253D1%255D%26pi%3DaddToCart&p2=e%3Ddis&adce=1&lwid=b8c13416-11be-48d6-ab56-8020fcd85203&tld=peapod.com&dtycbr=22680&abe=0", "Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", ENDITEM, 
		"Url=https://www.google.com/ads/ga-audiences?v=1&aip=1&t=sr&_r=4&tid=UA-20096507-3&cid=1651878344.1574483642&jid=1494646942&_v=j79&z=755422835", "Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", ENDITEM, 
		"Url=https://b.hlserve.com/beacon?fid=101&hl_qs="
		"v8446%2BO0X9UgkFF%2FizUcVyG3vFSD%2FFzffV5XLYkhF1ffDx1lEkO9FSSqWVast9biojan9Wr873iDzWeIerV66eW2B7h4DSgXVZOxCkTAYNohv71hs1p56wTL6%2BXFfI5%2BBgKcfQyT3xKLvYgAoZst%2B%2FsMqHBOYDdRuG9uN%2Fc%2BFO0hWUZ2cl3zzahm6b7jwtYsfBaIsNTjT2U4a2zddsOaNGGHrtVf1gI7jit7AB%2FH2kcfh%2BnlOWZ%2BrQTHAUCPfPjHrgIC8CS5%2By%2BoU95gNI8hjy2h52JYwPQIMnBMeQ1QwHiYxTojaesjHdth57saisaIKW4sOfMZg0mZG%2FC1Z%2FyMd4tRPuQS2iFUkP%2BvCkCJO1svPoEoNu2ROYtisemgpQ4QBS0945K2oO3LKq7ROx08U8JS7eU%2BbQ1iQbdYTi6gX1kYAvms%2B3CWMzaJFPYs%2BaYNuLlcaHJWZw2%2B"
		"FsoEt1fRt76173NamRKoxAvAkKD8pmRK%2Bj3LKtf5jvVo%2BT3vtl24GgkgI7YEGOyrfetrGlLGq0MAO4%2BNu%2FXzIk4DpXRQkIGTbomaXXi4acvJoTEB1Pz4ebEF44x%2FkPdKiC%2F2KTlZ9qif%2FJrh3Ov8FEa2G%2Bid4j1SvJ%2BgFK4DML2lz6you4VFoAOnfjHomv7DtsLm9fRJ4jr%2F9iMKySfghqYmVTXpAWgkUO72c5%2BWZtwgRdFazN0GUHkAeWia%2Bn8A1JP4ReBU8y0oPaepV8pim0lGGinf88zr2xUQJuWaJ69%2Br6L3sXTruxTUnd%2B5YxY8FWggZIQMqFQk84boih0hv9MblTtxzSQJeYDuj%2BJ40nEEUNpocUvXZXpIoQy51HfJ7%2BTWD9RpVBpjo2Pl1OATK%2FQOZgmNX5DNS9hY3xzA29gKduL9O4oD9iLPEReO6GcOi3YxGiAVpw%3D%3D&ev="
		"2&action=page&origc=O&pid=c71a0199-01ab-4dcf-af36-a697ddbc69b5&rn=1586847484&abe=0&criteo-uid=43b52252-21cf-4092-8465-7da4820af070", "Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", ENDITEM, 
		LAST);

	web_custom_request("log_13", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.108 Safari/537.36||E|cart_item_update|<productId:\\\"140290\\\"><quantity:\\\"2\\\"><amount:\\\"9.99\\\"><location:\\\"BROWSE_AISLES\\\"><keywords:\\\"\\\"><region:\\\"browse_aisles_shelf_content\\\"><index:\\\"NaN\\\"><sale:\\\"false\\\"><newArrival:\\\"false\\\"><sponsored:\\\"false\\\"><resolution:\\\"1536x753\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);

	lr_think_time(5);

	web_custom_request("events_6", 
		"URL=https://logx.optimizely.com/v1/events", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"account_id\":\"8474790541\",\"anonymize_ip\":true,\"client_name\":\"js\",\"client_version\":\"0.134.0\",\"project_id\":\"8545500175\",\"revision\":\"3352\",\"visitors\":[{\"visitor_id\":\"oeu1574483647472r0.7125047403284472\",\"session_id\":\"AUTO\",\"attributes\":[{\"e\":null,\"k\":\"\",\"t\":\"first_session\",\"v\":true},{\"e\":null,\"k\":\"\",\"t\":\"browserId\",\"v\":\"gc\"},{\"e\":\"8572052329\",\"k\":\"8572052329\",\"t\":\"custom\",\"v\":\"true\"},{\"e\":\"8636313790\",\"k\":\""
		"8636313790\",\"t\":\"custom\",\"v\":\"C\"},{\"e\":\"8638262211\",\"k\":\"8638262211\",\"t\":\"custom\",\"v\":\"0\"},{\"e\":\"8636343366\",\"k\":\"8636343366\",\"t\":\"custom\",\"v\":2},{\"e\":\"8633642554\",\"k\":\"8633642554\",\"t\":\"custom\",\"v\":\"02134\"},{\"e\":\"8601681438\",\"k\":\"8601681438\",\"t\":\"custom\",\"v\":\"true\"},{\"e\":\"8640224308\",\"k\":\"8640224308\",\"t\":\"custom\",\"v\":\"STSH\"},{\"e\":\"8631343259\",\"k\":\"8631343259\",\"t\":\"custom\",\"v\":\"D\"},{\"e\":\""
		"8638204402\",\"k\":\"8638204402\",\"t\":\"custom\",\"v\":\"false\"},{\"e\":\"8627877189\",\"k\":\"8627877189\",\"t\":\"custom\",\"v\":\"WORKING\"},{\"e\":\"10679300201\",\"k\":\"10679300201\",\"t\":\"custom\",\"v\":\"false\"},{\"e\":null,\"k\":\"\",\"t\":\"device\",\"v\":\"desktop\"},{\"e\":null,\"k\":\"\",\"t\":\"device_type\",\"v\":\"desktop_laptop\"},{\"e\":null,\"k\":\"\",\"t\":\"source_type\",\"v\":\"direct\"},{\"e\":null,\"k\":\"\",\"t\":\"currentTimestamp\",\"v\":1574483741801},{\"e\":null,"
		"\"k\":\"\",\"t\":\"offset\",\"v\":300}],\"snapshots\":[{\"activationTimestamp\":1574483741738,\"decisions\":[{\"c\":\"16918282040\",\"x\":null,\"v\":null,\"h\":false},{\"c\":\"16929217109\",\"x\":null,\"v\":null,\"h\":false},{\"c\":\"16931377848\",\"x\":null,\"v\":null,\"h\":false},{\"c\":\"16943444778\",\"x\":null,\"v\":null,\"h\":false},{\"c\":\"16945430476\",\"x\":\"16927644445\",\"v\":\"16894855429\",\"h\":false}],\"events\":[{\"e\":\"10372134424\",\"k\":\"8545500175_increment\",\"t\""
		":1574483915968,\"u\":\"cdacaf62-c2c7-4600-a980-edfb5cda5c69\",\"y\":\"other\",\"a\":{}}]}]}]}", 
		LAST);

	web_custom_request("cart_3", 
		"URL=https://stage.peapod.com/api/v3.0/user/cart", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"Body={\"type\":\"update\",\"prevQuantity\":2,\"productData\":{\"prodId\":140290,\"name\":\"Salmon Fillets Skin-On Farm-Raised Fresh\",\"size\":\"APX 1 LB\",\"unitPrice\":9.99,\"unitMeasure\":\"LB\",\"price\":9.99,\"regularPrice\":9.99,\"rootCatId\":2541,\"rootCatSeq\":4,\"rootCatName\":\"Seafood\",\"upc\":\"25442300000\",\"hasSubstitute\":true,\"substituteId\":219448,\"rating\":0,\"ratingReviewsSuppressed\":false,\"marketSpecificReviews\":false,\"reviewId\":\"140290-PPDALL\",\"brandId\":557,\""
		"brand\":\"Fresh Seafood\",\"subcatId\":2547,\"subcatName\":\"Salmon\",\"flags\":{\"sample\":false,\"suppressed\":false,\"active\":true,\"outOfStock\":false,\"specialCode\":\" \",\"upromise\":false,\"newArrival\":false,\"privateLabel\":false,\"preferredItem\":false,\"bogo\":false,\"sale\":false,\"lowPriceEveryday\":false,\"organic\":false,\"dairy\":false,\"egg\":false,\"gluten\":false,\"kosher\":false,\"peanut\":false,\"nonGMO\":false,\"vegan\":false,\"vegeterian\":false,\"lactoseFree\":false,\""
		"antibioticFree\":false,\"wheatFree\":false,\"hormoneFree\":false,\"nitrateFree\":false,\"nitriteFree\":false,\"natural\":false},\"image\":{\"small\":\"https://i5.peapod.com/c/2F/2FWXO.jpg\",\"medium\":\"https://i5.peapod.com/c/O6/O6JCB.jpg\",\"large\":\"https://i5.peapod.com/c/HH/HHI8O.jpg\",\"xlarge\":\"https://i5.peapod.com/c/45/457SP.jpg\"},\"nutrition\":{\"nutritionShow\":true,\"servingSize\":\"3 OZ\",\"servingsPerContainer\":\"VARIES\",\"totalCalories\":177,\"totalCaloriesShow\":true,\""
		"fatCalories\":102.66,\"fatCaloriesShow\":true,\"totalFat\":11.41,\"totalFatShow\":true,\"totalFatPct\":17.55,\"totalFatPctShow\":true,\"totalFatUnit\":\"g\",\"saturatedFat\":2.59,\"saturatedFatShow\":true,\"saturatedFatPct\":12.96,\"saturatedFatPctShow\":true,\"saturatedFatUnit\":\"g\",\"transFat\":0,\"transFatUnit\":\"g\",\"transFatShow\":true,\"polyunsaturatedFat\":3.3,\"polyunsaturatedFatUnit\":\"g\",\"polyunsaturatedFatShow\":true,\"monounsaturatedFat\":3.2,\"monounsaturatedFatUnit\":\"g\",\""
		"monounsaturatedFatShow\":true,\"cholesterol\":46.75,\"cholesterolShow\":true,\"cholesterolPct\":15.58,\"cholesterolPctShow\":true,\"cholesterolUnit\":\"mg\",\"sodium\":50.15,\"sodiumShow\":true,\"sodiumPct\":2.09,\"sodiumPctShow\":true,\"sodiumUnit\":\"mg\",\"potassium\":308.55,\"potassiumShow\":true,\"potassiumPct\":6.56,\"potassiumPctShow\":true,\"potassiumUnit\":\"mg\",\"totalCarbs\":0,\"totalCarbsShow\":true,\"totalCarbsPct\":0,\"totalCarbsPctShow\":true,\"totalCarbsUnit\":\"g\",\""
		"dietaryFiber\":0,\"dietaryFiberShow\":true,\"dietaryFiberPct\":0,\"dietaryFiberPctShow\":true,\"dietaryFiberUnit\":\"g\",\"sugar\":0,\"sugarUnit\":\"g\",\"sugarShow\":true,\"sugarAlcoholUnit\":\"g\",\"sugarAlcoholShow\":false,\"otherCarbs\":0,\"otherCarbsUnit\":\"g\",\"otherCarbsShow\":true,\"protein\":17.36,\"proteinUnit\":\"g\",\"proteinShow\":true,\"vitaminAPct\":0.85,\"vitaminAShow\":true,\"vitaminCPct\":4.42,\"vitaminCShow\":true,\"ironPct\":0.01,\"ironShow\":true,\"calciumPct\":0.77,\""
		"calciumShow\":true,\"ww\":5,\"wwShow\":true},\"bmsm\":false,\"bmsmTiers\":[],\"guidingStars\":3,\"options\":[],\"suppressSwapAndSave\":false,\"productCategoryId\":3733,\"hasPriceAdjustment\":false,\"hasPickStoreLocation\":false,\"hasCoupon\":false},\"logName\":\"cart_item_update\",\"items\":[{\"productId\":140290,\"quantity\":3,\"coupon\":null}]}", 
		EXTRARES, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j79&a=137071323&t=event&ni=0&cu=USD&_s=1&dl=https%3A%2F%2Fstage.peapod.com%2Fbrowse-aisles%2Fcategories%2F1%2Fcategories%2F1633%2Fcategories%2F1634-fish&dr=https%3A%2F%2Fstage.peapod.com%2Fshop%2Fauth%2Flogin%3Fgateway%3D1%26redirectTo%3D%252F&dp=%2Fbrowse-aisles%2Fcategories%2F1%2Fcategories%2F1633%2Fcategories%2F1634-fish&ul=en-us&de=UTF-8&dt=Browse%20Aisles%20-%20Fish%20%7C%20Peapod&sd=24-bit&sr=1536x864&vp=1536x753&je=0&ec=ecommerce&ea="
		"add%20to%20cart&el=140290%3A%20Salmon%20Fillets%20Skin-On%20Farm-Raised%20Fresh&_u=SCCACUI7B~&jid=&gjid=&cid=1651878344.1574483642&uid=91116857&tid=UA-20096507-4&_gid=1955267022.1574483642&gtm=2wgav9PN7ML7L&cd2=ecommerce&cd6=GA%20-%20Event%20-%20EE%20-%20Add%20To%20Cart%20-%20Overview&cd39=GTM-PN7ML7L&cd40=1651878344.1574483642&cd41=91116857&cd42=1574483916328.qa7t8024&cd43=Mozilla%2F5.0%20(Windows%20NT%206.3%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F78.0.3904.108%20Safari%2F537.36&cd47=https%3A%2F%2Fstage.peapod.com%2Fbrowse-aisles%2Fcategories%2F1%2Fcategories%2F1633%2Fcategories%2F1634-fish&cd48=02134&cd49=MA&cd50=Allston&cd51=0&cd52=0&cd61=web&cd74=C&cd75=WORKING&cd79=PPOD&cd60=BROWSE_AISLES&cm77=1&pa=add&pr1nm=Salmon%20Fillets%20Skin-On%20Farm-Raised%20Fresh&pr1id=140290&pr1pr=9.99&pr1br=Fresh%20Seafood&pr1ca=Seafood&pr1qt=1&pr1cd37=0&z=1859926531", "Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/"
		"categories/1634-fish", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j79&a=137071323&t=event&ni=0&cu=USD&_s=1&dl=https%3A%2F%2Fstage.peapod.com%2Fbrowse-aisles%2Fcategories%2F1%2Fcategories%2F1633%2Fcategories%2F1634-fish&dr=https%3A%2F%2Fstage.peapod.com%2Fshop%2Fauth%2Flogin%3Fgateway%3D1%26redirectTo%3D%252F&dp=%2Fbrowse-aisles%2Fcategories%2F1%2Fcategories%2F1633%2Fcategories%2F1634-fish&ul=en-us&de=UTF-8&dt=Browse%20Aisles%20-%20Fish%20%7C%20Peapod&sd=24-bit&sr=1536x864&vp=1536x753&je=0&ec=ecommerce&ea="
		"add%20to%20cart&el=140290%3A%20Salmon%20Fillets%20Skin-On%20Farm-Raised%20Fresh&_u=SCCACUI7B~&jid=&gjid=&cid=1651878344.1574483642&uid=91116857&tid=UA-20096507-4&_gid=1955267022.1574483642&gtm=2wgav9MDB4F8D&cd39=GTM-MDB4F8D&cd40=1651878344.1574483642&cd41=91116857&cd42=1574483916346.w8n2xgvn&cd43=Mozilla%2F5.0%20(Windows%20NT%206.3%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36&cd47="
		"https%3A%2F%2Fstage.peapod.com%2Fbrowse-aisles%2Fcategories%2F1%2Fcategories%2F1633%2Fcategories%2F1634-fish&cd48=02134&cd49=MA&cd50=Allston&cd51=0&cd52=0&cd61=web&cd74=C&cd75=WORKING&cd79=PPOD&cd44=GA%20-%20Event%20-%20EE%20-%20Add%20to%20Cart&cd46=ecommerce&cd60=browse_aisles&pa=add&pr1nm=Salmon%20Fillets%20Skin-On%20Farm-Raised%20Fresh&pr1id=140290&pr1pr=9.99&pr1br=Fresh%20Seafood&pr1ca=Seafood&pr1qt=1&pr1cd37=0&z=703586699", "Referer=https://stage.peapod.com/browse-aisles/categories/1/"
		"categories/1633/categories/1634-fish", ENDITEM, 
		"Url=https://sslwidget.criteo.com/event?a=49626&v=5.4.0&p0=e%3Dexd%26rvi%3Debbf5ad7-0edf-4e92-9173-1e97cef749a3%26ci%3Debbf5ad7-0edf-4e92-9173-1e97cef749a3&p1=e%3Dac%26p%3D%255Bi%25253D140290%252526pr%25253D9.99%252526q%25253D1%255D%26pi%3DaddToCart&p2=e%3Ddis&adce=1&lwid=b8c13416-11be-48d6-ab56-8020fcd85203&tld=peapod.com&dtycbr=47923&abe=0", "Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j79&a=137071323&t=event&_s=6&dl=https%3A%2F%2Fstage.peapod.com%2F%3Fgateway%3D1&ul=en-us&de=UTF-8&dt=Browse%20Aisles%20-%20Fish%20%7C%20Peapod&sd=24-bit&sr=1536x864&vp=1536x753&je=0&ec=Global&ea=Click&el=Cart%20Int%3A%20Change%20Quantity&_u=SCCACUI7B~&jid=&gjid=&cid=1651878344.1574483642&uid=91116857&tid=UA-20096507-3&_gid=1955267022.1574483642&cd1=91116857&cd2=C&cd6=false&cd35=false&cd3=02134&cd4=STSH&cd5=2&cd8=WORKING&cd9=d136075544&cd10=D&cd11"
		"=true&cd12=new&cm1=0&cm3=29.97&cm4=1&z=1339658902", "Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", ENDITEM, 
		"Url=https://b.hlserve.com/beacon?fid=101&hl_qs="
		"q66KDcfNUVHEoaMlRZeAeKgcegbXhhvgfxqDYwevgc%2F6vsPZDyoZMjBkV8noq1EQ1QcqqAkxnvxJ42Q1inlPRmRUMtdVytXz0pl%2FDl3cF05i7Yfo1uu%2FOVJb28fWTfCWceRbwKvDnG73hQrkAZhukfQOikzPZofi3a%2BHaKuvOsD3uVM6qyL6divxVfB3MZoaflvgcZk%2FyAXypPiBaV%2FfOgu7K2kV4%2BtOJiJs4VpAeKvyVC%2BQjSpnlmhaiSkgJjABmyuK1I%2F34TqByscFjB9z0Wy1RzebH2JK3ujoH%2FmHSbHERHgZs3xdTUSLFTpGQrEJKgjHgENQnpGFPXuf3EPwg6%2BkYyMUWjV7DOMUc6nzXRcIb4VKtmLSm7Z%2BtrkMyWbqEMLpdv7w78PeXpiH%2BCRCOYgsi%2BZXsXxtoJVu5OsvsADHp5vedPxChk80KNKoelpIU0BkWC49N8tWKTkSMBS5tDyw0Y"
		"LlvCNUJpXAQVIp7VAZSfV%2FOCAmY%2FeAT1VDzZ9rHkUHQNxemJgbMM1hgn102Gdz4UR%2FFXDE%2BUfanWYEzNANBbBr0HhjVisS1oVZvcK6YI3nMa5Bx3kRxNe6ZAqirj%2FqnX8rqFsVoY7IKwmDV8lebni6giOmlHpA8R%2FaKYSvJKKh%2BgLBlEKmCHh64WzkJHTDG6ZVgl91evW6mzvjwFu51aPgB0R8qIH1LbD1GELrM4p%2FV4MUivFH6iK3cd2%2B7wbx%2BDQpAyh6VYIM9iFJxnsEAb%2BkORlD4ELFrr%2BS1lo6jh2aYGrX6hMt5FQvtzfdn6uG%2BRh2G%2Fgwklalr4Dm26aadEaaeaumelldgzYNcRyqhbTSJZScV0dk7JBoO6Hd5wFAwXvWiHZIBbl9RsgCnQDVjMMTQCYneiz4NvBfeACjLwYmNwRJZikOo9JmU1xdFw%3D%3D&ev=2&action=page&origc="
		"O&pid=61e46bd6-dcb7-4950-bbfc-d31cb9cb2ec0&rn=1754267679&abe=0&criteo-uid=43b52252-21cf-4092-8465-7da4820af070", "Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", ENDITEM, 
		LAST);

	web_custom_request("log_14", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.108 Safari/537.36||E|cart_item_update|<productId:\\\"140290\\\"><quantity:\\\"3\\\"><amount:\\\"9.99\\\"><location:\\\"BROWSE_AISLES\\\"><keywords:\\\"\\\"><region:\\\"browse_aisles_shelf_content\\\"><index:\\\"NaN\\\"><sale:\\\"false\\\"><newArrival:\\\"false\\\"><sponsored:\\\"false\\\"><resolution:\\\"1536x753\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		EXTRARES, 
		"Url=https://www.facebook.com/tr/?id=817960774913222&ev=SubscribedButtonClick&dl=https%3A%2F%2Fstage.peapod.com%2Fbrowse-aisles%2Fcategories%2F1%2Fcategories%2F1633%2Fcategories%2F1634-fish&rl=https%3A%2F%2Fstage.peapod.com%2Fshop%2Fauth%2Flogin%3Fgateway%3D1%26redirectTo%3D%252F&if=false&ts=1574483939737&cd[buttonFeatures]="
		"%7B%22classList%22%3A%22button%20button--add-to-cart%22%2C%22destination%22%3A%22%22%2C%22id%22%3A%22%22%2C%22imageUrl%22%3A%22%22%2C%22innerText%22%3A%22Add%20to%20Cart%22%2C%22numChildButtons%22%3A0%2C%22tag%22%3A%22button%22%2C%22name%22%3A%22%22%2C%22value%22%3A%22%22%7D&cd[buttonText]=Add%20to%20Cart&cd[formFeatures]=%5B%5D&cd[pageFeatures]=%7B%22title%22%3A%22Browse%20Aisles%20-%20Fish%20%7C%20Peapod%22%7D&cd[parameters]=%5B%5D&sw=1536&sh=864&v=2.9.13&r=stable&ec=6&o=30&fbp="
		"fb.1.1574483656432.222125313&it=1574483740851&coo=false&es=automatic&tm=3&rqm=GET", "Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", ENDITEM, 
		LAST);

	lr_end_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T07_Increase_Prod_Qty",LR_AUTO);
	
	lr_think_time(4);

	lr_start_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T06_Add_to_Cart");

/*	web_custom_request("cart_8", 
		"URL=https://stage.peapod.com/api/v3.0/user/cart", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t152.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"type\":\"add\",\"prevQuantity\":0,\"productData\":{\"prodId\":90668,\"name\":\"Salmon Fillets Super-Trim Farm-Raised Previously Frozen\",\"size\":\"APX 3/4 LB\",\"unitPrice\":10.49,\"unitMeasure\":\"LB\",\"price\":7.87,\"regularPrice\":7.87,\"rootCatId\":2541,\"rootCatSeq\":4,\"rootCatName\":\"Seafood\",\"upc\":\"20866520000\",\"hasSubstitute\":false,\"rating\":0,\"ratingReviewsSuppressed\":false,\"marketSpecificReviews\":false,\"reviewId\":\"90668-PPDALL\",\"brandId\":557,\"brand\":\""
		"Fresh Seafood\",\"subcatId\":2547,\"subcatName\":\"Salmon\",\"flags\":{\"sample\":false,\"suppressed\":false,\"active\":true,\"outOfStock\":false,\"specialCode\":\" \",\"upromise\":false,\"newArrival\":false,\"privateLabel\":false,\"preferredItem\":false,\"bogo\":false,\"sale\":false,\"lowPriceEveryday\":false,\"organic\":false,\"dairy\":false,\"egg\":false,\"gluten\":false,\"kosher\":false,\"peanut\":false,\"nonGMO\":false,\"vegan\":false,\"vegeterian\":false,\"lactoseFree\":false,\""
		"antibioticFree\":false,\"wheatFree\":false,\"hormoneFree\":false,\"nitrateFree\":false,\"nitriteFree\":false,\"natural\":false},\"image\":{\"small\":\"https://i5.peapod.com/c/R4/R4INU.jpg\",\"medium\":\"https://i5.peapod.com/c/3L/3L841.jpg\",\"large\":\"https://i5.peapod.com/c/ET/ETC2J.jpg\",\"xlarge\":\"https://i5.peapod.com/c/RK/RKOIS.jpg\"},\"nutrition\":{\"nutritionShow\":true,\"servingSize\":\"3 OZ\",\"servingsPerContainer\":\"VARIES\",\"totalCalories\":107.95,\"totalCaloriesShow\":true,\""
		"fatCalories\":33.66,\"fatCaloriesShow\":true,\"totalFat\":3.74,\"totalFatShow\":true,\"totalFatPct\":5.75,\"totalFatPctShow\":true,\"totalFatUnit\":\"g\",\"saturatedFat\":0.68,\"saturatedFatShow\":true,\"saturatedFatPct\":3.44,\"saturatedFatPctShow\":true,\"saturatedFatUnit\":\"g\",\"transFat\":0.02,\"transFatUnit\":\"g\",\"transFatShow\":true,\"polyunsaturatedFat\":0.68,\"polyunsaturatedFatUnit\":\"g\",\"polyunsaturatedFatShow\":true,\"monounsaturatedFat\":1.14,\"monounsaturatedFatUnit\":\"g\",\""
		"monounsaturatedFatShow\":true,\"cholesterol\":39.1,\"cholesterolShow\":true,\"cholesterolPct\":13.03,\"cholesterolPctShow\":true,\"cholesterolUnit\":\"mg\",\"sodium\":63.75,\"sodiumShow\":true,\"sodiumPct\":2.65,\"sodiumPctShow\":true,\"sodiumUnit\":\"mg\",\"potassium\":311.1,\"potassiumShow\":true,\"potassiumPct\":6.61,\"potassiumPctShow\":true,\"potassiumUnit\":\"mg\",\"totalCarbs\":0,\"totalCarbsShow\":true,\"totalCarbsPct\":0,\"totalCarbsPctShow\":true,\"totalCarbsUnit\":\"g\",\"dietaryFiber\""
		":0,\"dietaryFiberShow\":true,\"dietaryFiberPct\":0,\"dietaryFiberPctShow\":true,\"dietaryFiberUnit\":\"g\",\"sugar\":0,\"sugarUnit\":\"g\",\"sugarShow\":true,\"sugarAlcoholUnit\":\"g\",\"sugarAlcoholShow\":false,\"otherCarbs\":0,\"otherCarbsUnit\":\"g\",\"otherCarbsShow\":true,\"protein\":17.42,\"proteinUnit\":\"g\",\"proteinShow\":true,\"vitaminAPct\":1.98,\"vitaminAShow\":true,\"vitaminCPct\":0,\"vitaminCShow\":true,\"ironPct\":8.02,\"ironShow\":true,\"calciumPct\":0.59,\"calciumShow\":true,\""
		"ww\":3,\"wwShow\":true},\"bmsm\":false,\"bmsmTiers\":[],\"guidingStars\":0,\"coupon\":{\"id\":\"ECI_318099\",\"description\":\"318099-CMDDEV-20 - buy 3 get $1 off - Mithun - No restriction.\",\"title\":\"buy 3 get $1 off \",\"startDate\":\"2018-08-21\",\"endDate\":\"2025-12-31\",\"maxDiscount\":1,\"displayPriority\":1,\"clippingRequired\":false,\"targeted\":false,\"sourceSystem\":\"ECI\",\"sourceSystemId\":\"318099\",\"loaded\":false,\"promotionType\":\"Item\"},\"options\":[],\""
		"suppressSwapAndSave\":false,\"productCategoryId\":3733,\"hasPriceAdjustment\":false,\"hasPickStoreLocation\":false,\"hasCoupon\":true},\"logName\":\"cart_item_add\",\"items\":[{\"productId\":90668,\"quantity\":1,\"coupon\":null}]}", 
		LAST);

	web_custom_request("log_14", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t153.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||E|cart_item_add|<productId:\\\"90668\\\"><quantity:\\\"1\\\"><amount:\\\"7.87\\\"><location:\\\"BROWSE_AISLES\\\"><keywords:\\\"\\\"><region:\\\"browse_aisles_shelf_content\\\"><index:\\\"NaN\\\"><sale:\\\"false\\\"><newArrival:\\\"false\\\"><sponsored:\\\"false\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);*/
		
	web_custom_request("cart", 
		"URL=https://stage.peapod.com/api/v3.0/user/cart", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"type\":\"add\",\"prevQuantity\":0,\"productData\":{\"prodId\":215832,\"name\":\"Nature's Promise Free from Alaskan Cod Fillets - 4 ct Frozen\",\"size\":\"12 OZ PKG\",\"unitPrice\":11.05,\"unitMeasure\":\"LB\",\"price\":8.29,\"regularPrice\":8.29,\"rootCatId\":2541,\"rootCatSeq\":4,\"rootCatName\":\"Seafood\",\"upc\":\"68826715461\",\"hasSubstitute\":false,\"rating\":0,\"ratingReviewsSuppressed\":false,\"marketSpecificReviews\":false,\"reviewId\":\"215832-PPDALL\",\"brandId\":128,\"brand\""
		":\"Nature's Promise\",\"subcatId\":2544,\"subcatName\":\"Cod\",\"flags\":{\"sample\":false,\"suppressed\":false,\"active\":true,\"outOfStock\":false,\"specialCode\":\" \",\"upromise\":false,\"newArrival\":false,\"privateLabel\":true,\"preferredItem\":false,\"bogo\":false,\"sale\":false,\"lowPriceEveryday\":false,\"organic\":false,\"dairy\":false,\"egg\":false,\"gluten\":false,\"kosher\":false,\"peanut\":false,\"nonGMO\":false,\"vegan\":false,\"vegeterian\":false,\"lactoseFree\":false,\""
		"antibioticFree\":false,\"wheatFree\":false,\"hormoneFree\":false,\"nitrateFree\":false,\"nitriteFree\":false,\"natural\":false},\"image\":{\"small\":\"https://i5.peapod.com/c/2I/2IXGC.jpg\",\"medium\":\"https://i5.peapod.com/c/GU/GUG7B.jpg\",\"large\":\"https://i5.peapod.com/c/EK/EK3FL.jpg\",\"xlarge\":\"https://i5.peapod.com/c/KP/KP5KW.jpg\"},\"nutrition\":{\"nutritionShow\":true,\"servingSize\":\"4.0 OZ\",\"servingsPerContainer\":\"3\",\"totalCalories\":80,\"totalCaloriesShow\":true,\""
		"fatCalories\":0,\"fatCaloriesShow\":true,\"totalFat\":0,\"totalFatShow\":true,\"totalFatPct\":0,\"totalFatPctShow\":true,\"totalFatUnit\":\"g\",\"saturatedFat\":0,\"saturatedFatShow\":true,\"saturatedFatPct\":0,\"saturatedFatPctShow\":true,\"saturatedFatUnit\":\"g\",\"transFat\":0,\"transFatUnit\":\"g\",\"transFatShow\":true,\"polyunsaturatedFat\":0,\"polyunsaturatedFatUnit\":\"g\",\"polyunsaturatedFatShow\":true,\"monounsaturatedFat\":0,\"monounsaturatedFatUnit\":\"g\",\"monounsaturatedFatShow\""
		":true,\"cholesterol\":55,\"cholesterolShow\":true,\"cholesterolPct\":18,\"cholesterolPctShow\":true,\"cholesterolUnit\":\"mg\",\"sodium\":65,\"sodiumShow\":true,\"sodiumPct\":3,\"sodiumPctShow\":true,\"sodiumUnit\":\"mg\",\"potassium\":260,\"potassiumShow\":true,\"potassiumPct\":6,\"potassiumPctShow\":true,\"potassiumUnit\":\"mg\",\"totalCarbs\":0,\"totalCarbsShow\":true,\"totalCarbsPct\":0,\"totalCarbsPctShow\":true,\"totalCarbsUnit\":\"g\",\"dietaryFiber\":0,\"dietaryFiberShow\":true,\""
		"dietaryFiberPct\":0,\"dietaryFiberPctShow\":true,\"dietaryFiberUnit\":\"g\",\"sugar\":0,\"sugarUnit\":\"g\",\"sugarShow\":true,\"sugarAlcoholUnit\":\"g\",\"sugarAlcoholShow\":false,\"otherCarbsUnit\":\"g\",\"otherCarbsShow\":false,\"protein\":17,\"proteinUnit\":\"g\",\"proteinShow\":true,\"vitaminAShow\":false,\"vitaminCShow\":false,\"ironPct\":0,\"ironShow\":true,\"calciumPct\":0,\"calciumShow\":true,\"ww\":2,\"wwShow\":true},\"bmsm\":false,\"bmsmTiers\":[],\"guidingStars\":3,\"options\":[],\""
		"suppressSwapAndSave\":false,\"productCategoryId\":3724,\"hasPriceAdjustment\":false,\"hasPickStoreLocation\":false,\"hasCoupon\":false},\"logName\":\"cart_item_add\",\"items\":[{\"productId\":215832,\"quantity\":1,\"coupon\":null}]}", 
		LAST);		
		

	lr_end_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T06_Add_to_Cart",LR_AUTO);
	
	lr_think_time(4);

	lr_start_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T07_Increase_Prod_Qty");

	web_add_header("Content-Type","application/json;charset=UTF-8");

/*	web_custom_request("cart_9", 
		"URL=https://stage.peapod.com/api/v3.0/user/cart", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t154.inf", 
		"Mode=HTTP", 
		"Body={\"type\":\"update\",\"prevQuantity\":1,\"productData\":{\"prodId\":90668,\"name\":\"Salmon Fillets Super-Trim Farm-Raised Previously Frozen\",\"size\":\"APX 3/4 LB\",\"unitPrice\":10.49,\"unitMeasure\":\"LB\",\"price\":7.87,\"regularPrice\":7.87,\"rootCatId\":2541,\"rootCatSeq\":4,\"rootCatName\":\"Seafood\",\"upc\":\"20866520000\",\"hasSubstitute\":false,\"rating\":0,\"ratingReviewsSuppressed\":false,\"marketSpecificReviews\":false,\"reviewId\":\"90668-PPDALL\",\"brandId\":557,\"brand\":\""
		"Fresh Seafood\",\"subcatId\":2547,\"subcatName\":\"Salmon\",\"flags\":{\"sample\":false,\"suppressed\":false,\"active\":true,\"outOfStock\":false,\"specialCode\":\" \",\"upromise\":false,\"newArrival\":false,\"privateLabel\":false,\"preferredItem\":false,\"bogo\":false,\"sale\":false,\"lowPriceEveryday\":false,\"organic\":false,\"dairy\":false,\"egg\":false,\"gluten\":false,\"kosher\":false,\"peanut\":false,\"nonGMO\":false,\"vegan\":false,\"vegeterian\":false,\"lactoseFree\":false,\""
		"antibioticFree\":false,\"wheatFree\":false,\"hormoneFree\":false,\"nitrateFree\":false,\"nitriteFree\":false,\"natural\":false},\"image\":{\"small\":\"https://i5.peapod.com/c/R4/R4INU.jpg\",\"medium\":\"https://i5.peapod.com/c/3L/3L841.jpg\",\"large\":\"https://i5.peapod.com/c/ET/ETC2J.jpg\",\"xlarge\":\"https://i5.peapod.com/c/RK/RKOIS.jpg\"},\"nutrition\":{\"nutritionShow\":true,\"servingSize\":\"3 OZ\",\"servingsPerContainer\":\"VARIES\",\"totalCalories\":107.95,\"totalCaloriesShow\":true,\""
		"fatCalories\":33.66,\"fatCaloriesShow\":true,\"totalFat\":3.74,\"totalFatShow\":true,\"totalFatPct\":5.75,\"totalFatPctShow\":true,\"totalFatUnit\":\"g\",\"saturatedFat\":0.68,\"saturatedFatShow\":true,\"saturatedFatPct\":3.44,\"saturatedFatPctShow\":true,\"saturatedFatUnit\":\"g\",\"transFat\":0.02,\"transFatUnit\":\"g\",\"transFatShow\":true,\"polyunsaturatedFat\":0.68,\"polyunsaturatedFatUnit\":\"g\",\"polyunsaturatedFatShow\":true,\"monounsaturatedFat\":1.14,\"monounsaturatedFatUnit\":\"g\",\""
		"monounsaturatedFatShow\":true,\"cholesterol\":39.1,\"cholesterolShow\":true,\"cholesterolPct\":13.03,\"cholesterolPctShow\":true,\"cholesterolUnit\":\"mg\",\"sodium\":63.75,\"sodiumShow\":true,\"sodiumPct\":2.65,\"sodiumPctShow\":true,\"sodiumUnit\":\"mg\",\"potassium\":311.1,\"potassiumShow\":true,\"potassiumPct\":6.61,\"potassiumPctShow\":true,\"potassiumUnit\":\"mg\",\"totalCarbs\":0,\"totalCarbsShow\":true,\"totalCarbsPct\":0,\"totalCarbsPctShow\":true,\"totalCarbsUnit\":\"g\",\"dietaryFiber\""
		":0,\"dietaryFiberShow\":true,\"dietaryFiberPct\":0,\"dietaryFiberPctShow\":true,\"dietaryFiberUnit\":\"g\",\"sugar\":0,\"sugarUnit\":\"g\",\"sugarShow\":true,\"sugarAlcoholUnit\":\"g\",\"sugarAlcoholShow\":false,\"otherCarbs\":0,\"otherCarbsUnit\":\"g\",\"otherCarbsShow\":true,\"protein\":17.42,\"proteinUnit\":\"g\",\"proteinShow\":true,\"vitaminAPct\":1.98,\"vitaminAShow\":true,\"vitaminCPct\":0,\"vitaminCShow\":true,\"ironPct\":8.02,\"ironShow\":true,\"calciumPct\":0.59,\"calciumShow\":true,\""
		"ww\":3,\"wwShow\":true},\"bmsm\":false,\"bmsmTiers\":[],\"guidingStars\":0,\"coupon\":{\"id\":\"ECI_318099\",\"description\":\"318099-CMDDEV-20 - buy 3 get $1 off - Mithun - No restriction.\",\"title\":\"buy 3 get $1 off \",\"startDate\":\"2018-08-21\",\"endDate\":\"2025-12-31\",\"maxDiscount\":1,\"displayPriority\":1,\"clippingRequired\":false,\"targeted\":false,\"sourceSystem\":\"ECI\",\"sourceSystemId\":\"318099\",\"loaded\":false,\"promotionType\":\"Item\"},\"options\":[],\""
		"suppressSwapAndSave\":false,\"productCategoryId\":3733,\"hasPriceAdjustment\":false,\"hasPickStoreLocation\":false,\"hasCoupon\":true},\"logName\":\"cart_item_update\",\"items\":[{\"productId\":90668,\"quantity\":5,\"coupon\":null}]}", 
		LAST);

	web_custom_request("log_15", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t155.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||E|cart_item_update|<productId:\\\"90668\\\"><quantity:\\\"5\\\"><amount:\\\"31.48\\\"><location:\\\"BROWSE_AISLES\\\"><keywords:\\\"\\\"><region:\\\"browse_aisles_shelf_content\\\"><index:\\\"NaN\\\"><sale:\\\"false\\\"><newArrival:\\\"false\\\"><sponsored:\\\"false\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);*/
		
		
	web_custom_request("cart", 
		"URL=https://stage.peapod.com/api/v3.0/user/cart", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"type\":\"update\",\"prevQuantity\":1,\"productData\":{\"prodId\":215832,\"name\":\"Nature's Promise Free from Alaskan Cod Fillets - 4 ct Frozen\",\"size\":\"12 OZ PKG\",\"unitPrice\":11.05,\"unitMeasure\":\"LB\",\"price\":8.29,\"regularPrice\":8.29,\"rootCatId\":2541,\"rootCatSeq\":4,\"rootCatName\":\"Seafood\",\"upc\":\"68826715461\",\"hasSubstitute\":false,\"rating\":0,\"ratingReviewsSuppressed\":false,\"marketSpecificReviews\":false,\"reviewId\":\"215832-PPDALL\",\"brandId\":128,\"brand\""
		":\"Nature's Promise\",\"subcatId\":2544,\"subcatName\":\"Cod\",\"flags\":{\"sample\":false,\"suppressed\":false,\"active\":true,\"outOfStock\":false,\"specialCode\":\" \",\"upromise\":false,\"newArrival\":false,\"privateLabel\":true,\"preferredItem\":false,\"bogo\":false,\"sale\":false,\"lowPriceEveryday\":false,\"organic\":false,\"dairy\":false,\"egg\":false,\"gluten\":false,\"kosher\":false,\"peanut\":false,\"nonGMO\":false,\"vegan\":false,\"vegeterian\":false,\"lactoseFree\":false,\""
		"antibioticFree\":false,\"wheatFree\":false,\"hormoneFree\":false,\"nitrateFree\":false,\"nitriteFree\":false,\"natural\":false},\"image\":{\"small\":\"https://i5.peapod.com/c/2I/2IXGC.jpg\",\"medium\":\"https://i5.peapod.com/c/GU/GUG7B.jpg\",\"large\":\"https://i5.peapod.com/c/EK/EK3FL.jpg\",\"xlarge\":\"https://i5.peapod.com/c/KP/KP5KW.jpg\"},\"nutrition\":{\"nutritionShow\":true,\"servingSize\":\"4.0 OZ\",\"servingsPerContainer\":\"3\",\"totalCalories\":80,\"totalCaloriesShow\":true,\""
		"fatCalories\":0,\"fatCaloriesShow\":true,\"totalFat\":0,\"totalFatShow\":true,\"totalFatPct\":0,\"totalFatPctShow\":true,\"totalFatUnit\":\"g\",\"saturatedFat\":0,\"saturatedFatShow\":true,\"saturatedFatPct\":0,\"saturatedFatPctShow\":true,\"saturatedFatUnit\":\"g\",\"transFat\":0,\"transFatUnit\":\"g\",\"transFatShow\":true,\"polyunsaturatedFat\":0,\"polyunsaturatedFatUnit\":\"g\",\"polyunsaturatedFatShow\":true,\"monounsaturatedFat\":0,\"monounsaturatedFatUnit\":\"g\",\"monounsaturatedFatShow\""
		":true,\"cholesterol\":55,\"cholesterolShow\":true,\"cholesterolPct\":18,\"cholesterolPctShow\":true,\"cholesterolUnit\":\"mg\",\"sodium\":65,\"sodiumShow\":true,\"sodiumPct\":3,\"sodiumPctShow\":true,\"sodiumUnit\":\"mg\",\"potassium\":260,\"potassiumShow\":true,\"potassiumPct\":6,\"potassiumPctShow\":true,\"potassiumUnit\":\"mg\",\"totalCarbs\":0,\"totalCarbsShow\":true,\"totalCarbsPct\":0,\"totalCarbsPctShow\":true,\"totalCarbsUnit\":\"g\",\"dietaryFiber\":0,\"dietaryFiberShow\":true,\""
		"dietaryFiberPct\":0,\"dietaryFiberPctShow\":true,\"dietaryFiberUnit\":\"g\",\"sugar\":0,\"sugarUnit\":\"g\",\"sugarShow\":true,\"sugarAlcoholUnit\":\"g\",\"sugarAlcoholShow\":false,\"otherCarbsUnit\":\"g\",\"otherCarbsShow\":false,\"protein\":17,\"proteinUnit\":\"g\",\"proteinShow\":true,\"vitaminAShow\":false,\"vitaminCShow\":false,\"ironPct\":0,\"ironShow\":true,\"calciumPct\":0,\"calciumShow\":true,\"ww\":2,\"wwShow\":true},\"bmsm\":false,\"bmsmTiers\":[],\"guidingStars\":3,\"options\":[],\""
		"suppressSwapAndSave\":false,\"productCategoryId\":3724,\"hasPriceAdjustment\":false,\"hasPickStoreLocation\":false,\"hasCoupon\":false},\"logName\":\"cart_item_update\",\"items\":[{\"productId\":215832,\"quantity\":2,\"coupon\":null}]}", 
		LAST);	

	lr_end_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T07_Increase_Prod_Qty",LR_AUTO);
	
	lr_think_time(4);

	lr_start_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T06_Add_to_Cart");

/*	web_custom_request("cart_10", 
		"URL=https://stage.peapod.com/api/v3.0/user/cart", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t156.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"type\":\"add\",\"prevQuantity\":0,\"productData\":{\"prodId\":140290,\"name\":\"Salmon Fillets Skin-On Farm-Raised Fresh\",\"size\":\"APX 1 LB\",\"unitPrice\":9.99,\"unitMeasure\":\"LB\",\"price\":9.99,\"regularPrice\":9.99,\"rootCatId\":2541,\"rootCatSeq\":4,\"rootCatName\":\"Seafood\",\"upc\":\"25442300000\",\"hasSubstitute\":false,\"rating\":0,\"ratingReviewsSuppressed\":false,\"marketSpecificReviews\":false,\"reviewId\":\"140290-PPDALL\",\"brandId\":557,\"brand\":\"Fresh Seafood\",\""
		"subcatId\":2547,\"subcatName\":\"Salmon\",\"flags\":{\"sample\":false,\"suppressed\":false,\"active\":true,\"outOfStock\":false,\"specialCode\":\" \",\"upromise\":false,\"newArrival\":false,\"privateLabel\":false,\"preferredItem\":false,\"bogo\":false,\"sale\":false,\"lowPriceEveryday\":false,\"organic\":false,\"dairy\":false,\"egg\":false,\"gluten\":false,\"kosher\":false,\"peanut\":false,\"nonGMO\":false,\"vegan\":false,\"vegeterian\":false,\"lactoseFree\":false,\"antibioticFree\":false,\""
		"wheatFree\":false,\"hormoneFree\":false,\"nitrateFree\":false,\"nitriteFree\":false,\"natural\":false},\"image\":{\"small\":\"https://i5.peapod.com/c/2F/2FWXO.jpg\",\"medium\":\"https://i5.peapod.com/c/O6/O6JCB.jpg\",\"large\":\"https://i5.peapod.com/c/HH/HHI8O.jpg\",\"xlarge\":\"https://i5.peapod.com/c/45/457SP.jpg\"},\"nutrition\":{\"nutritionShow\":true,\"servingSize\":\"3 OZ\",\"servingsPerContainer\":\"VARIES\",\"totalCalories\":177,\"totalCaloriesShow\":true,\"fatCalories\":102.66,\""
		"fatCaloriesShow\":true,\"totalFat\":11.41,\"totalFatShow\":true,\"totalFatPct\":17.55,\"totalFatPctShow\":true,\"totalFatUnit\":\"g\",\"saturatedFat\":2.59,\"saturatedFatShow\":true,\"saturatedFatPct\":12.96,\"saturatedFatPctShow\":true,\"saturatedFatUnit\":\"g\",\"transFat\":0,\"transFatUnit\":\"g\",\"transFatShow\":true,\"polyunsaturatedFat\":3.3,\"polyunsaturatedFatUnit\":\"g\",\"polyunsaturatedFatShow\":true,\"monounsaturatedFat\":3.2,\"monounsaturatedFatUnit\":\"g\",\"monounsaturatedFatShow\""
		":true,\"cholesterol\":46.75,\"cholesterolShow\":true,\"cholesterolPct\":15.58,\"cholesterolPctShow\":true,\"cholesterolUnit\":\"mg\",\"sodium\":50.15,\"sodiumShow\":true,\"sodiumPct\":2.09,\"sodiumPctShow\":true,\"sodiumUnit\":\"mg\",\"potassium\":308.55,\"potassiumShow\":true,\"potassiumPct\":6.56,\"potassiumPctShow\":true,\"potassiumUnit\":\"mg\",\"totalCarbs\":0,\"totalCarbsShow\":true,\"totalCarbsPct\":0,\"totalCarbsPctShow\":true,\"totalCarbsUnit\":\"g\",\"dietaryFiber\":0,\"dietaryFiberShow"
		"\":true,\"dietaryFiberPct\":0,\"dietaryFiberPctShow\":true,\"dietaryFiberUnit\":\"g\",\"sugar\":0,\"sugarUnit\":\"g\",\"sugarShow\":true,\"sugarAlcoholUnit\":\"g\",\"sugarAlcoholShow\":false,\"otherCarbs\":0,\"otherCarbsUnit\":\"g\",\"otherCarbsShow\":true,\"protein\":17.36,\"proteinUnit\":\"g\",\"proteinShow\":true,\"vitaminAPct\":0.85,\"vitaminAShow\":true,\"vitaminCPct\":4.42,\"vitaminCShow\":true,\"ironPct\":0.01,\"ironShow\":true,\"calciumPct\":0.77,\"calciumShow\":true,\"ww\":5,\"wwShow\""
		":true},\"bmsm\":false,\"bmsmTiers\":[],\"guidingStars\":3,\"coupon\":{\"id\":\"ECI_318099\",\"description\":\"318099-CMDDEV-20 - buy 3 get $1 off - Mithun - No restriction.\",\"title\":\"buy 3 get $1 off \",\"startDate\":\"2018-08-21\",\"endDate\":\"2025-12-31\",\"maxDiscount\":1,\"displayPriority\":1,\"clippingRequired\":false,\"targeted\":false,\"sourceSystem\":\"ECI\",\"sourceSystemId\":\"318099\",\"loaded\":false,\"promotionType\":\"Item\"},\"options\":[],\"suppressSwapAndSave\":false,\""
		"productCategoryId\":3733,\"hasPriceAdjustment\":false,\"hasPickStoreLocation\":false,\"hasCoupon\":true},\"logName\":\"cart_item_add\",\"items\":[{\"productId\":140290,\"quantity\":1,\"coupon\":null}]}", 
		LAST);
	
	web_custom_request("log_16", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t157.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||E|cart_item_add|<productId:\\\"140290\\\"><quantity:\\\"1\\\"><amount:\\\"9.99\\\"><location:\\\"BROWSE_AISLES\\\"><keywords:\\\"\\\"><region:\\\"browse_aisles_shelf_content\\\"><index:\\\"NaN\\\"><sale:\\\"false\\\"><newArrival:\\\"false\\\"><sponsored:\\\"false\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);*/
		
	web_custom_request("cart", 
		"URL=https://stage.peapod.com/api/v3.0/user/cart", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"type\":\"add\",\"prevQuantity\":0,\"productData\":{\"prodId\":124943,\"name\":\"Tuna Steaks Previously Frozen\",\"size\":\"APX 3/4 LB\",\"unitPrice\":9.99,\"unitMeasure\":\"LB\",\"price\":7.49,\"regularPrice\":7.49,\"rootCatId\":2541,\"rootCatSeq\":4,\"rootCatName\":\"Seafood\",\"upc\":\"20860970000\",\"hasSubstitute\":false,\"rating\":0,\"ratingReviewsSuppressed\":false,\"marketSpecificReviews\":false,\"reviewId\":\"124943-PPDALL\",\"brandId\":557,\"brand\":\"Fresh Seafood\",\"subcatId\""
		":2551,\"subcatName\":\"Tuna\",\"flags\":{\"sample\":false,\"suppressed\":false,\"active\":true,\"outOfStock\":false,\"specialCode\":\" \",\"upromise\":false,\"newArrival\":false,\"privateLabel\":false,\"preferredItem\":false,\"bogo\":false,\"sale\":false,\"lowPriceEveryday\":false,\"organic\":false,\"dairy\":false,\"egg\":false,\"gluten\":false,\"kosher\":false,\"peanut\":false,\"nonGMO\":false,\"vegan\":false,\"vegeterian\":false,\"lactoseFree\":false,\"antibioticFree\":false,\"wheatFree\":false,"
		"\"hormoneFree\":false,\"nitrateFree\":false,\"nitriteFree\":false,\"natural\":false},\"image\":{\"small\":\"https://i5.peapod.com/c/EO/EOENR.jpg\",\"medium\":\"https://i5.peapod.com/c/2O/2OR7F.jpg\",\"large\":\"https://i5.peapod.com/c/G7/G7NJS.jpg\",\"xlarge\":\"https://i5.peapod.com/c/BB/BBF47.jpg\"},\"nutrition\":{\"nutritionShow\":true,\"servingSize\":\"3 OZ\",\"servingsPerContainer\":\"VARIES\",\"totalCalories\":92.7,\"totalCaloriesShow\":true,\"fatCalories\":3.75,\"fatCaloriesShow\":true,\""
		"totalFat\":0.41,\"totalFatShow\":true,\"totalFatPct\":0.64,\"totalFatPctShow\":true,\"totalFatUnit\":\"g\",\"saturatedFat\":0.14,\"saturatedFatShow\":true,\"saturatedFatPct\":0.73,\"saturatedFatPctShow\":true,\"saturatedFatUnit\":\"g\",\"transFat\":0.01,\"transFatUnit\":\"g\",\"transFatShow\":true,\"polyunsaturatedFat\":0.12,\"polyunsaturatedFatUnit\":\"g\",\"polyunsaturatedFatShow\":true,\"monounsaturatedFat\":0.09,\"monounsaturatedFatUnit\":\"g\",\"monounsaturatedFatShow\":true,\"cholesterol\""
		":33.16,\"cholesterolShow\":true,\"cholesterolPct\":11.05,\"cholesterolPctShow\":true,\"cholesterolUnit\":\"mg\",\"sodium\":38.27,\"sodiumShow\":true,\"sodiumPct\":1.59,\"sodiumPctShow\":true,\"sodiumUnit\":\"mg\",\"potassium\":375.07,\"potassiumShow\":true,\"potassiumPct\":7.98,\"potassiumPctShow\":true,\"potassiumUnit\":\"mg\",\"totalCarbs\":0,\"totalCarbsShow\":true,\"totalCarbsPct\":0,\"totalCarbsPctShow\":true,\"totalCarbsUnit\":\"g\",\"dietaryFiber\":0,\"dietaryFiberShow\":true,\""
		"dietaryFiberPct\":0,\"dietaryFiberPctShow\":true,\"dietaryFiberUnit\":\"g\",\"sugar\":0,\"sugarUnit\":\"g\",\"sugarShow\":true,\"sugarAlcoholUnit\":\"g\",\"sugarAlcoholShow\":false,\"otherCarbs\":0,\"otherCarbsUnit\":\"g\",\"otherCarbsShow\":true,\"protein\":20.75,\"proteinUnit\":\"g\",\"proteinShow\":true,\"vitaminAPct\":1.02,\"vitaminAShow\":true,\"vitaminCPct\":0,\"vitaminCShow\":true,\"ironPct\":0.03,\"ironShow\":true,\"calciumPct\":0.34,\"calciumShow\":true,\"ww\":2,\"wwShow\":true},\"bmsm\""
		":false,\"bmsmTiers\":[],\"guidingStars\":3,\"options\":[],\"suppressSwapAndSave\":false,\"productCategoryId\":3742,\"hasPriceAdjustment\":false,\"hasPickStoreLocation\":false,\"hasCoupon\":false},\"logName\":\"cart_item_add\",\"items\":[{\"productId\":124943,\"quantity\":1,\"coupon\":null}]}", 
		EXTRARES, 
		"Url=https://sslwidget.criteo.com/event?a=49626&v=5.4.0&p0=e%3Dexd%26rvi%3Debbf5ad7-0edf-4e92-9173-1e97cef749a3%26ci%3Debbf5ad7-0edf-4e92-9173-1e97cef749a3&p1=e%3Dac%26p%3D%255Bi%25253D124943%252526pr%25253D7.49%252526q%25253D1%255D%26pi%3DaddToCart&p2=e%3Ddis&adce=1&lwid=297454f9-a6bf-41e8-98e0-d240687042eb&tld=peapod.com&dtycbr=13294&abe=0", "Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", ENDITEM, 
		"Url=https://www.res-x.com/ws/r2/Resonance.aspx?appid=peapod01&tk=488190517816316&ss=520833831096984&sg=1&pg=836961722418422&vr=5.3x&bx=false&ev=cart&ei=124943&ur=https%3A%2F%2Fstage.peapod.com%2Fbrowse-aisles%2Fcategories%2F1%2Fcategories%2F1633%2Fcategories%2F1634-fish&plk=&rf=https%3A%2F%2Fstage.peapod.com%2Fshop%2Fauth%2Flogin%3Fgateway%3D1%26redirectTo%3D%252F", "Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j79&a=1698292656&t=event&ni=0&cu=USD&_s=1&dl=https%3A%2F%2Fstage.peapod.com%2Fbrowse-aisles%2Fcategories%2F1%2Fcategories%2F1633%2Fcategories%2F1634-fish&dr=https%3A%2F%2Fstage.peapod.com%2Fshop%2Fauth%2Flogin%3Fgateway%3D1%26redirectTo%3D%252F&dp=%2Fbrowse-aisles%2Fcategories%2F1%2Fcategories%2F1633%2Fcategories%2F1634-fish&ul=en-us&de=UTF-8&dt=Browse%20Aisles%20-%20Fish%20%7C%20Peapod&sd=24-bit&sr=1536x864&vp=923x722&je=0&ec=ecommerce&ea="
		"add%20to%20cart&el=124943%3A%20Tuna%20Steaks%20Previously%20Frozen&_u=SCCACUI7B~&jid=&gjid=&cid=2106186513.1574487892&uid=91116857&tid=UA-20096507-4&_gid=1676876426.1574487892&gtm=2wgav9MDB4F8D&cd39=GTM-MDB4F8D&cd40=2106186513.1574487892&cd41=91116857&cd42=1574492427368.c9frznru&cd43=Mozilla%2F5.0%20(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36&cd47="
		"https%3A%2F%2Fstage.peapod.com%2Fbrowse-aisles%2Fcategories%2F1%2Fcategories%2F1633%2Fcategories%2F1634-fish&cd48=02134&cd49=MA&cd50=Allston&cd51=0&cd52=0&cd61=web&cd74=C&cd75=WORKING&cd79=PPOD&cd44=GA%20-%20Event%20-%20EE%20-%20Add%20to%20Cart&cd46=ecommerce&cd60=browse_aisles&pa=add&pr1nm=Tuna%20Steaks%20Previously%20Frozen&pr1id=124943&pr1pr=7.49&pr1br=Fresh%20Seafood&pr1ca=Seafood&pr1qt=1&pr1cd37=0&z=2047745410", "Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/"
		"categories/1634-fish", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j79&a=1698292656&t=event&_s=5&dl=https%3A%2F%2Fstage.peapod.com%2F%3Fgateway%3D1&ul=en-us&de=UTF-8&dt=Browse%20Aisles%20-%20Fish%20%7C%20Peapod&sd=24-bit&sr=1536x864&vp=1536x722&je=0&ec=Global&ea=Click&el=Cart%20Int%3A%20Add%20Item&_u=SCCACUI7B~&jid=&gjid=&cid=2106186513.1574487892&uid=91116857&tid=UA-20096507-3&_gid=1676876426.1574487892&cd1=91116857&cd2=C&cd6=false&cd35=false&cd3=02134&cd4=STSH&cd5=2&cd8=WORKING&cd9=d136075544&cd10=D&cd11=true&"
		"cd12=new&cm1=0&cm3=7.49&cm4=1&z=1580207335", "Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", ENDITEM, 
		"Url=https://b.hlserve.com/beacon?fid=101&hl_qs="
		"m7HLwShCksu5vXPklpQ9eLKfCUFlmDEkjVaZsyQcnEEj82pliF5LFPylCFALM5l3eVhfm3G2ahBj3zSkFCyZeQHQ8GH5TRazgaxIclFTm%2BwWR2P6XZSvw2xbvjl1jCO6uX9kP1VBmKyNSH4IG2KHwVqOMj2yi8H9JLcWFp1QqqLbYrzhr%2BjZLmMCJGM2Z%2BHJdrEzzv11q95GZyfTedOCPkr%2F3AVZyVFYvgsC35v5CpCtBdqs%2BcbcEdT92gnupZLZespeoKaAH%2Fg4QZTgIXX5qnJJL2x1zfVZQHrdhHU2%2BvZ%2BVQ2B%2Fy4ly7Mpbj%2BGEBDz12zV7vGnfpBHlnYpXmMbtacwGoCvhNafCoXHEhhQnFHcUl1qI30VCbJRNu62k8pnUEYrOhLEkOYTOgf9kZNb9nAry1aNf9mUFr1tM8UImaOB4oFCrWCJV6W%2Fjqevq2vIRS1EB85O6AiQrzPuYEmPvhO4JoVGQn%2"
		"BayECmXfOF9fMocTCzOW5Q3eRv8Vb7s%2FuM4hfuJQcCenCy5zXg7PMYcS%2FYNJgM4S17bSSi%2BK%2Fy9TTodBO%2F3Z6A%2F5mZQ6m7wHh65fvHP7SXWeQ8cueSbUppvMgGH02hyCV1BGPD650dLEem2sUxZDTEpo0062EyCVgyNAe0FWyLOxsmEX04%2B42TI%2FEp0CWCPWv7Mr0C58noC43XLjwhD9N56d7AKlmDvFFubp%2FwFFOenxGHV0uMnhXcs3KvkOuWHXIzfgJIT%2BWOvHKg3JV%2FKO3KQcrDTDKWnBQKjclYHyPyGOwP7EMQagNvx6tbeLvwRvM3oT945QIq31HteMQHVoSiA%2FkfIMBUsusbZt6ERZY%2FNzafcm%2FkW6GBwnQCaY7pxdTOrV0o9u04O2p7gRgRolbA6XR52gxk9dqVESPo2vVbSIBNp4pNA5O0%2Bg%3D%3D&ev=2&action=page&origc=O&"
		"pid=7f17928b-3602-4237-97a1-727c69302f6d&rn=329547477&abe=0&criteo-uid=8ca01eb7-362b-4197-8f9c-2d2005536896", "Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", ENDITEM, 
		LAST);

	lr_end_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T06_Add_to_Cart",LR_AUTO);

	lr_think_time(4);
	
		lr_start_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T07_Increase_Prod_Qty");

	web_add_header("Content-Type","application/json;charset=UTF-8");

/*	web_custom_request("cart_9", 
		"URL=https://stage.peapod.com/api/v3.0/user/cart", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t154.inf", 
		"Mode=HTTP", 
		"Body={\"type\":\"update\",\"prevQuantity\":1,\"productData\":{\"prodId\":90668,\"name\":\"Salmon Fillets Super-Trim Farm-Raised Previously Frozen\",\"size\":\"APX 3/4 LB\",\"unitPrice\":10.49,\"unitMeasure\":\"LB\",\"price\":7.87,\"regularPrice\":7.87,\"rootCatId\":2541,\"rootCatSeq\":4,\"rootCatName\":\"Seafood\",\"upc\":\"20866520000\",\"hasSubstitute\":false,\"rating\":0,\"ratingReviewsSuppressed\":false,\"marketSpecificReviews\":false,\"reviewId\":\"90668-PPDALL\",\"brandId\":557,\"brand\":\""
		"Fresh Seafood\",\"subcatId\":2547,\"subcatName\":\"Salmon\",\"flags\":{\"sample\":false,\"suppressed\":false,\"active\":true,\"outOfStock\":false,\"specialCode\":\" \",\"upromise\":false,\"newArrival\":false,\"privateLabel\":false,\"preferredItem\":false,\"bogo\":false,\"sale\":false,\"lowPriceEveryday\":false,\"organic\":false,\"dairy\":false,\"egg\":false,\"gluten\":false,\"kosher\":false,\"peanut\":false,\"nonGMO\":false,\"vegan\":false,\"vegeterian\":false,\"lactoseFree\":false,\""
		"antibioticFree\":false,\"wheatFree\":false,\"hormoneFree\":false,\"nitrateFree\":false,\"nitriteFree\":false,\"natural\":false},\"image\":{\"small\":\"https://i5.peapod.com/c/R4/R4INU.jpg\",\"medium\":\"https://i5.peapod.com/c/3L/3L841.jpg\",\"large\":\"https://i5.peapod.com/c/ET/ETC2J.jpg\",\"xlarge\":\"https://i5.peapod.com/c/RK/RKOIS.jpg\"},\"nutrition\":{\"nutritionShow\":true,\"servingSize\":\"3 OZ\",\"servingsPerContainer\":\"VARIES\",\"totalCalories\":107.95,\"totalCaloriesShow\":true,\""
		"fatCalories\":33.66,\"fatCaloriesShow\":true,\"totalFat\":3.74,\"totalFatShow\":true,\"totalFatPct\":5.75,\"totalFatPctShow\":true,\"totalFatUnit\":\"g\",\"saturatedFat\":0.68,\"saturatedFatShow\":true,\"saturatedFatPct\":3.44,\"saturatedFatPctShow\":true,\"saturatedFatUnit\":\"g\",\"transFat\":0.02,\"transFatUnit\":\"g\",\"transFatShow\":true,\"polyunsaturatedFat\":0.68,\"polyunsaturatedFatUnit\":\"g\",\"polyunsaturatedFatShow\":true,\"monounsaturatedFat\":1.14,\"monounsaturatedFatUnit\":\"g\",\""
		"monounsaturatedFatShow\":true,\"cholesterol\":39.1,\"cholesterolShow\":true,\"cholesterolPct\":13.03,\"cholesterolPctShow\":true,\"cholesterolUnit\":\"mg\",\"sodium\":63.75,\"sodiumShow\":true,\"sodiumPct\":2.65,\"sodiumPctShow\":true,\"sodiumUnit\":\"mg\",\"potassium\":311.1,\"potassiumShow\":true,\"potassiumPct\":6.61,\"potassiumPctShow\":true,\"potassiumUnit\":\"mg\",\"totalCarbs\":0,\"totalCarbsShow\":true,\"totalCarbsPct\":0,\"totalCarbsPctShow\":true,\"totalCarbsUnit\":\"g\",\"dietaryFiber\""
		":0,\"dietaryFiberShow\":true,\"dietaryFiberPct\":0,\"dietaryFiberPctShow\":true,\"dietaryFiberUnit\":\"g\",\"sugar\":0,\"sugarUnit\":\"g\",\"sugarShow\":true,\"sugarAlcoholUnit\":\"g\",\"sugarAlcoholShow\":false,\"otherCarbs\":0,\"otherCarbsUnit\":\"g\",\"otherCarbsShow\":true,\"protein\":17.42,\"proteinUnit\":\"g\",\"proteinShow\":true,\"vitaminAPct\":1.98,\"vitaminAShow\":true,\"vitaminCPct\":0,\"vitaminCShow\":true,\"ironPct\":8.02,\"ironShow\":true,\"calciumPct\":0.59,\"calciumShow\":true,\""
		"ww\":3,\"wwShow\":true},\"bmsm\":false,\"bmsmTiers\":[],\"guidingStars\":0,\"coupon\":{\"id\":\"ECI_318099\",\"description\":\"318099-CMDDEV-20 - buy 3 get $1 off - Mithun - No restriction.\",\"title\":\"buy 3 get $1 off \",\"startDate\":\"2018-08-21\",\"endDate\":\"2025-12-31\",\"maxDiscount\":1,\"displayPriority\":1,\"clippingRequired\":false,\"targeted\":false,\"sourceSystem\":\"ECI\",\"sourceSystemId\":\"318099\",\"loaded\":false,\"promotionType\":\"Item\"},\"options\":[],\""
		"suppressSwapAndSave\":false,\"productCategoryId\":3733,\"hasPriceAdjustment\":false,\"hasPickStoreLocation\":false,\"hasCoupon\":true},\"logName\":\"cart_item_update\",\"items\":[{\"productId\":90668,\"quantity\":5,\"coupon\":null}]}", 
		LAST);

	web_custom_request("log_15", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t155.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||E|cart_item_update|<productId:\\\"90668\\\"><quantity:\\\"5\\\"><amount:\\\"31.48\\\"><location:\\\"BROWSE_AISLES\\\"><keywords:\\\"\\\"><region:\\\"browse_aisles_shelf_content\\\"><index:\\\"NaN\\\"><sale:\\\"false\\\"><newArrival:\\\"false\\\"><sponsored:\\\"false\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);*/
		
		web_custom_request("cart", 
		"URL=https://stage.peapod.com/api/v3.0/user/cart", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"type\":\"update\",\"prevQuantity\":1,\"productData\":{\"prodId\":124943,\"name\":\"Tuna Steaks Previously Frozen\",\"size\":\"APX 3/4 LB\",\"unitPrice\":9.99,\"unitMeasure\":\"LB\",\"price\":7.49,\"regularPrice\":7.49,\"rootCatId\":2541,\"rootCatSeq\":4,\"rootCatName\":\"Seafood\",\"upc\":\"20860970000\",\"hasSubstitute\":false,\"rating\":0,\"ratingReviewsSuppressed\":false,\"marketSpecificReviews\":false,\"reviewId\":\"124943-PPDALL\",\"brandId\":557,\"brand\":\"Fresh Seafood\",\"subcatId\""
		":2551,\"subcatName\":\"Tuna\",\"flags\":{\"sample\":false,\"suppressed\":false,\"active\":true,\"outOfStock\":false,\"specialCode\":\" \",\"upromise\":false,\"newArrival\":false,\"privateLabel\":false,\"preferredItem\":false,\"bogo\":false,\"sale\":false,\"lowPriceEveryday\":false,\"organic\":false,\"dairy\":false,\"egg\":false,\"gluten\":false,\"kosher\":false,\"peanut\":false,\"nonGMO\":false,\"vegan\":false,\"vegeterian\":false,\"lactoseFree\":false,\"antibioticFree\":false,\"wheatFree\":false,"
		"\"hormoneFree\":false,\"nitrateFree\":false,\"nitriteFree\":false,\"natural\":false},\"image\":{\"small\":\"https://i5.peapod.com/c/EO/EOENR.jpg\",\"medium\":\"https://i5.peapod.com/c/2O/2OR7F.jpg\",\"large\":\"https://i5.peapod.com/c/G7/G7NJS.jpg\",\"xlarge\":\"https://i5.peapod.com/c/BB/BBF47.jpg\"},\"nutrition\":{\"nutritionShow\":true,\"servingSize\":\"3 OZ\",\"servingsPerContainer\":\"VARIES\",\"totalCalories\":92.7,\"totalCaloriesShow\":true,\"fatCalories\":3.75,\"fatCaloriesShow\":true,\""
		"totalFat\":0.41,\"totalFatShow\":true,\"totalFatPct\":0.64,\"totalFatPctShow\":true,\"totalFatUnit\":\"g\",\"saturatedFat\":0.14,\"saturatedFatShow\":true,\"saturatedFatPct\":0.73,\"saturatedFatPctShow\":true,\"saturatedFatUnit\":\"g\",\"transFat\":0.01,\"transFatUnit\":\"g\",\"transFatShow\":true,\"polyunsaturatedFat\":0.12,\"polyunsaturatedFatUnit\":\"g\",\"polyunsaturatedFatShow\":true,\"monounsaturatedFat\":0.09,\"monounsaturatedFatUnit\":\"g\",\"monounsaturatedFatShow\":true,\"cholesterol\""
		":33.16,\"cholesterolShow\":true,\"cholesterolPct\":11.05,\"cholesterolPctShow\":true,\"cholesterolUnit\":\"mg\",\"sodium\":38.27,\"sodiumShow\":true,\"sodiumPct\":1.59,\"sodiumPctShow\":true,\"sodiumUnit\":\"mg\",\"potassium\":375.07,\"potassiumShow\":true,\"potassiumPct\":7.98,\"potassiumPctShow\":true,\"potassiumUnit\":\"mg\",\"totalCarbs\":0,\"totalCarbsShow\":true,\"totalCarbsPct\":0,\"totalCarbsPctShow\":true,\"totalCarbsUnit\":\"g\",\"dietaryFiber\":0,\"dietaryFiberShow\":true,\""
		"dietaryFiberPct\":0,\"dietaryFiberPctShow\":true,\"dietaryFiberUnit\":\"g\",\"sugar\":0,\"sugarUnit\":\"g\",\"sugarShow\":true,\"sugarAlcoholUnit\":\"g\",\"sugarAlcoholShow\":false,\"otherCarbs\":0,\"otherCarbsUnit\":\"g\",\"otherCarbsShow\":true,\"protein\":20.75,\"proteinUnit\":\"g\",\"proteinShow\":true,\"vitaminAPct\":1.02,\"vitaminAShow\":true,\"vitaminCPct\":0,\"vitaminCShow\":true,\"ironPct\":0.03,\"ironShow\":true,\"calciumPct\":0.34,\"calciumShow\":true,\"ww\":2,\"wwShow\":true},\"bmsm\""
		":false,\"bmsmTiers\":[],\"guidingStars\":3,\"options\":[],\"suppressSwapAndSave\":false,\"productCategoryId\":3742,\"hasPriceAdjustment\":false,\"hasPickStoreLocation\":false,\"hasCoupon\":false},\"logName\":\"cart_item_update\",\"items\":[{\"productId\":124943,\"quantity\":2,\"coupon\":null}]}", 
		EXTRARES, 
		"Url=https://sslwidget.criteo.com/event?a=49626&v=5.4.0&p0=e%3Dexd%26rvi%3Debbf5ad7-0edf-4e92-9173-1e97cef749a3%26ci%3Debbf5ad7-0edf-4e92-9173-1e97cef749a3&p1=e%3Dac%26p%3D%255Bi%25253D124943%252526pr%25253D7.49%252526q%25253D1%255D%26pi%3DaddToCart&p2=e%3Ddis&adce=1&lwid=297454f9-a6bf-41e8-98e0-d240687042eb&tld=peapod.com&dtycbr=13294&abe=0", "Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", ENDITEM, 
		"Url=https://www.res-x.com/ws/r2/Resonance.aspx?appid=peapod01&tk=488190517816316&ss=520833831096984&sg=1&pg=836961722418422&vr=5.3x&bx=false&ev=cart&ei=124943&ur=https%3A%2F%2Fstage.peapod.com%2Fbrowse-aisles%2Fcategories%2F1%2Fcategories%2F1633%2Fcategories%2F1634-fish&plk=&rf=https%3A%2F%2Fstage.peapod.com%2Fshop%2Fauth%2Flogin%3Fgateway%3D1%26redirectTo%3D%252F", "Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j79&a=1698292656&t=event&ni=0&cu=USD&_s=1&dl=https%3A%2F%2Fstage.peapod.com%2Fbrowse-aisles%2Fcategories%2F1%2Fcategories%2F1633%2Fcategories%2F1634-fish&dr=https%3A%2F%2Fstage.peapod.com%2Fshop%2Fauth%2Flogin%3Fgateway%3D1%26redirectTo%3D%252F&dp=%2Fbrowse-aisles%2Fcategories%2F1%2Fcategories%2F1633%2Fcategories%2F1634-fish&ul=en-us&de=UTF-8&dt=Browse%20Aisles%20-%20Fish%20%7C%20Peapod&sd=24-bit&sr=1536x864&vp=923x722&je=0&ec=ecommerce&ea="
		"add%20to%20cart&el=124943%3A%20Tuna%20Steaks%20Previously%20Frozen&_u=SCCACUI7B~&jid=&gjid=&cid=2106186513.1574487892&uid=91116857&tid=UA-20096507-4&_gid=1676876426.1574487892&gtm=2wgav9MDB4F8D&cd39=GTM-MDB4F8D&cd40=2106186513.1574487892&cd41=91116857&cd42=1574492427368.c9frznru&cd43=Mozilla%2F5.0%20(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36&cd47="
		"https%3A%2F%2Fstage.peapod.com%2Fbrowse-aisles%2Fcategories%2F1%2Fcategories%2F1633%2Fcategories%2F1634-fish&cd48=02134&cd49=MA&cd50=Allston&cd51=0&cd52=0&cd61=web&cd74=C&cd75=WORKING&cd79=PPOD&cd44=GA%20-%20Event%20-%20EE%20-%20Add%20to%20Cart&cd46=ecommerce&cd60=browse_aisles&pa=add&pr1nm=Tuna%20Steaks%20Previously%20Frozen&pr1id=124943&pr1pr=7.49&pr1br=Fresh%20Seafood&pr1ca=Seafood&pr1qt=1&pr1cd37=0&z=2047745410", "Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/"
		"categories/1634-fish", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j79&a=1698292656&t=event&_s=5&dl=https%3A%2F%2Fstage.peapod.com%2F%3Fgateway%3D1&ul=en-us&de=UTF-8&dt=Browse%20Aisles%20-%20Fish%20%7C%20Peapod&sd=24-bit&sr=1536x864&vp=1536x722&je=0&ec=Global&ea=Click&el=Cart%20Int%3A%20Add%20Item&_u=SCCACUI7B~&jid=&gjid=&cid=2106186513.1574487892&uid=91116857&tid=UA-20096507-3&_gid=1676876426.1574487892&cd1=91116857&cd2=C&cd6=false&cd35=false&cd3=02134&cd4=STSH&cd5=2&cd8=WORKING&cd9=d136075544&cd10=D&cd11=true&"
		"cd12=new&cm1=0&cm3=7.49&cm4=1&z=1580207335", "Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", ENDITEM, 
		"Url=https://b.hlserve.com/beacon?fid=101&hl_qs="
		"m7HLwShCksu5vXPklpQ9eLKfCUFlmDEkjVaZsyQcnEEj82pliF5LFPylCFALM5l3eVhfm3G2ahBj3zSkFCyZeQHQ8GH5TRazgaxIclFTm%2BwWR2P6XZSvw2xbvjl1jCO6uX9kP1VBmKyNSH4IG2KHwVqOMj2yi8H9JLcWFp1QqqLbYrzhr%2BjZLmMCJGM2Z%2BHJdrEzzv11q95GZyfTedOCPkr%2F3AVZyVFYvgsC35v5CpCtBdqs%2BcbcEdT92gnupZLZespeoKaAH%2Fg4QZTgIXX5qnJJL2x1zfVZQHrdhHU2%2BvZ%2BVQ2B%2Fy4ly7Mpbj%2BGEBDz12zV7vGnfpBHlnYpXmMbtacwGoCvhNafCoXHEhhQnFHcUl1qI30VCbJRNu62k8pnUEYrOhLEkOYTOgf9kZNb9nAry1aNf9mUFr1tM8UImaOB4oFCrWCJV6W%2Fjqevq2vIRS1EB85O6AiQrzPuYEmPvhO4JoVGQn%2"
		"BayECmXfOF9fMocTCzOW5Q3eRv8Vb7s%2FuM4hfuJQcCenCy5zXg7PMYcS%2FYNJgM4S17bSSi%2BK%2Fy9TTodBO%2F3Z6A%2F5mZQ6m7wHh65fvHP7SXWeQ8cueSbUppvMgGH02hyCV1BGPD650dLEem2sUxZDTEpo0062EyCVgyNAe0FWyLOxsmEX04%2B42TI%2FEp0CWCPWv7Mr0C58noC43XLjwhD9N56d7AKlmDvFFubp%2FwFFOenxGHV0uMnhXcs3KvkOuWHXIzfgJIT%2BWOvHKg3JV%2FKO3KQcrDTDKWnBQKjclYHyPyGOwP7EMQagNvx6tbeLvwRvM3oT945QIq31HteMQHVoSiA%2FkfIMBUsusbZt6ERZY%2FNzafcm%2FkW6GBwnQCaY7pxdTOrV0o9u04O2p7gRgRolbA6XR52gxk9dqVESPo2vVbSIBNp4pNA5O0%2Bg%3D%3D&ev=2&action=page&origc=O&"
		"pid=7f17928b-3602-4237-97a1-727c69302f6d&rn=329547477&abe=0&criteo-uid=8ca01eb7-362b-4197-8f9c-2d2005536896", "Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", ENDITEM, 
		LAST);	

	lr_end_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T07_Increase_Prod_Qty",LR_AUTO);
	
	lr_start_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T08_Click_On_Cart");

	web_custom_request("savings", 
		"URL=https://stage.peapod.com/api/v2.0/order/adjustments/savings", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t159.inf", 
		LAST);


	web_custom_request("summary", 
		"URL=https://stage.peapod.com/api/v2.0/order/summary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t161.inf", 
		LAST);

	web_custom_request("cms_19", 
		"URL=https://stage.peapod.com/api/v2.0/cms?dt={P_Date}&regions=%7B%22cart_view%22:%7B%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t162.inf", 
		LAST);

	web_custom_request("log_18", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t163.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||M|modal_change|<viewName:\\\"cart-modal\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);

	web_custom_request("savings_2", 
		"URL=https://stage.peapod.com/api/v2.0/order/adjustments/savings", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t164.inf", 
		LAST);

	web_custom_request("summary_2", 
		"URL=https://stage.peapod.com/api/v2.0/order/summary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t165.inf", 
		LAST);

	web_custom_request("slots_10", 
		"URL=https://stage.peapod.com/api/v2.0/user/slots?headers=true&serviceType=D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t167.inf", 
		LAST);

	lr_end_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T08_Click_On_Cart",LR_AUTO);

	lr_think_time(4);

	lr_start_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T09_Click_On_Checkout");

	web_custom_request("delivery-subscriptions", 
		"URL=https://stage.peapod.com/api/v3.0/delivery-subscriptions", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t170.inf", 
		LAST);

	web_custom_request("cms_20", 
		"URL=https://stage.peapod.com/api/v2.0/cms?dt={P_Date}&regions=%7B%22service_selection%22:%7B%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t171.inf", 
		LAST);

	web_custom_request("browsing-service-location", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/browsing-service-location", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t172.inf", 
		LAST);

	web_custom_request("search-zip", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/search-zip", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t173.inf", 
		LAST);

	web_custom_request("delivery-service-location", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/delivery-service-location", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t174.inf", 
		LAST);

	web_custom_request("cms_21", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22resource_bundle%22:%7B%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t175.inf", 
		LAST);

	web_custom_request("log_19", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t178.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||M|modal_change|<viewName:\\\"slot-selection-modal\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\",\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||E|content_view|<scheduledContentId:\\\"CSDEV-2357\\\"><contentId:\\\"CSDEV-2358\\\"><region:\\\""
		"service_selection\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\",\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||E|content_view|<scheduledContentId:\\\"CSDEV-2382\\\"><contentId:\\\"CSDEV-2384\\\"><region:\\\"service_selection\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\",\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko)"
		" Chrome/78.0.3904.97 Safari/537.36||E|content_view|<scheduledContentId:\\\"CSDEV-2355\\\"><contentId:\\\"CSDEV-2356\\\"><region:\\\"service_selection\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);

	lr_end_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T09_Click_On_Checkout",LR_AUTO);
	
	lr_think_time(4);

	lr_start_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T10_Select_Delivery");

	web_custom_request("slots_11", 
		"URL=https://stage.peapod.com/api/v2.0/user/slots?delivAvail=true&headers=true&pupAvail=true&selected=true&serviceType=D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t179.inf", 
		LAST);

	web_custom_request("slots_12", 
		"URL=https://stage.peapod.com/api/v2.0/user/slots?delivAvail=true&headers=true&selected=true&serviceType=D&viewDate=2019-11-15", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t180.inf", 
		LAST);

	web_custom_request("log_20", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t181.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||E|slots_select_service_type|<serviceType:\\\"D\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\",\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||E|slot_availability|<service_date:\\\"2019-11-15\\\"><slot_type:\\\"D\\\"><available:\\\"14\\\"><sold_out:\\\"2\\"
		"\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);

	web_custom_request("has-pod-bag", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/has-pod-bag", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t182.inf", 
		LAST);
	
	lr_end_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T10_Select_Delivery",LR_AUTO);
	
	lr_think_time(4);
	
	lr_start_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T11_Select_Checkout_Date");

	
	//providerId":"PEAPOD","providerSlotId":"PEAPOD|56826299"
	web_reg_save_param("C_slotId","LB=providerId\":\"PEAPOD\",\"providerSlotId\":\"","RB=\"",LAST);

	web_custom_request("slots_13", 
		"URL=https://stage.peapod.com/api/v2.0/user/slots?delivAvail=true&headers=true&pupAvail=true&selected=true&serviceType=D&viewDate={P_CheckoutDate}", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t185.inf", 
		LAST);

	lr_end_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T11_Select_Checkout_Date", LR_AUTO);

	lr_think_time(4);

	lr_start_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T12_Reserve_Slot");

	web_custom_request("slot", 
		"URL=https://stage.peapod.com/api/v4.0/user/{C_userId}/orders/{C_orderId}/slot", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t189.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"slotId\":\"{C_slotId}\",\"userId\":{C_userId},\"orderId\":{C_orderId},\"serviceLocationId\":{C_serviceLocationId}}", 
		LAST);

	web_custom_request("slots_14", 
		"URL=https://stage.peapod.com/api/v2.0/user/slots?delivAvail=true&headers=false&pupAvail=true&selected=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t190.inf", 
		LAST);

	web_custom_request("preferred-pup_3", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/preferred-pup", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t191.inf", 
		LAST);

	web_custom_request("status_20", 
		"URL=https://stage.peapod.com/api/v3.0/user/order/status?routeService=false", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t192.inf", 
		LAST);

	web_custom_request("status_21", 
		"URL=https://stage.peapod.com/api/v3.0/user/order/status?routeService=false", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t193.inf", 
		LAST);

	web_custom_request("slots_15", 
		"URL=https://stage.peapod.com/api/v2.0/user/slots?delivAvail=true&headers=true&pupAvail=true&selected=true&serviceType=D&viewDate={P_CheckoutDate}", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t194.inf", 
		LAST);

	web_custom_request("status_22", 
		"URL=https://stage.peapod.com/api/v3.0/user/order/status?routeService=false", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t195.inf", 
		LAST);

	web_custom_request("status_23", 
		"URL=https://stage.peapod.com/api/v3.0/user/order/status?routeService=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t196.inf", 
		LAST);

	web_custom_request("log_23", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t197.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||E|slots_select_slot|<id:\\\"57045115\\\"><unattended:\\\"false\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);

	lr_end_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T12_Reserve_Slot",LR_AUTO);
	
	lr_think_time(4);

	lr_start_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T13_Checkout");

	web_custom_request("status_24", 
		"URL=https://stage.peapod.com/api/v3.0/user/order/status?routeService=false", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t198.inf", 
		LAST);

	web_custom_request("opcoloyalty", 
		"URL=https://stage.peapod.com/api/v2.0/user/attributes/opcoloyalty", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t200.inf", 
		LAST);

	web_custom_request("log_24", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t201.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||M|modal_change|<viewName:\\\"user-registration-modal\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);

	web_custom_request("init_11", 
		"URL=https://stage.peapod.com/api/v2.0/user/init", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t202.inf", 
		LAST);

	web_custom_request("billing", 
		"URL=https://stage.peapod.com/api/v2.0/user/contact/billing", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t204.inf", 
		LAST);

	web_custom_request("delivery", 
		"URL=https://stage.peapod.com/api/v2.0/user/contact/delivery", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t205.inf", 
		LAST);
	
	web_custom_request("log_25", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t207.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||M|registration_step|<action:\\\"init\\\"><step:\\\"creditCard\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);

	lr_end_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T13_Checkout",LR_AUTO);

	lr_think_time(4);

	lr_start_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T14_Create_Account_Continue");

	web_add_header("Content-Type","application/json;charset=UTF-8");

	web_custom_request("billing_2", 
		"URL=https://stage.peapod.com/api/v2.0/user/contact/billing?addressLine1={C_address_URL}&addressLine2=&alternate=%7B%7D&city=Allston&contact=%7B%22areaCode%22:%22408%22,%22prefix%22:%22716%22,%22suffix%22:%222501%22,%22ext%22:null%7D&firstName={C_firstName}&instructions=&intersection=&lastName={C_lastName}&middleInitial=&state=MA&title=&unattendedInstructions=&zip=02134", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t209.inf", 
		"Mode=HTTP", 
		"Body={\"contactType\":\"billing\",\"useDeliveryForBilling\":true,\"title\":\"\",\"firstName\":\"{C_firstName}\",\"lastName\":\"{C_lastName}\",\"middleInitial\":\"\",\"addressLine1\":\"{C_address}\",\"addressLine2\":\"\",\"city\":\"Allston\",\"state\":\"MA\",\"zip\":\"02134\",\"contact\":{\"areaCode\":\"408\",\"prefix\":\"716\",\"suffix\":\"2501\",\"ext\":null},\"alternate\":{},\"intersection\":\"\",\"instructions\":\"\",\"unattendedInstructions\":\"\",\"phoneEntry\":\"4087162501\"}", 
		LAST);

	web_custom_request("billing_3", 
		"URL=https://stage.peapod.com/api/v2.0/user/contact/billing", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t210.inf", 
		LAST);

	web_custom_request("profile_6", 
		"URL=https://stage.peapod.com/api/v3.0/user/profile", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t211.inf", 
		LAST);

	web_custom_request("paymentech_include.jhtml", 
		"URL=https://stage.peapod.com/scripts/payment/paymentech_include.jhtml", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t212.inf", 
		"Mode=HTTP", 
		LAST);
	
	web_custom_request("cms_22", 
		"URL=https://stage.peapod.com/api/v2.0/cms?dt={P_Date}&regions=%7B%22cart_view%22:%7B%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t213.inf", 
		LAST);

	web_custom_request("savings_3", 
		"URL=https://stage.peapod.com/api/v2.0/order/adjustments/savings", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t214.inf", 
		LAST);

	web_custom_request("summary_3", 
		"URL=https://stage.peapod.com/api/v2.0/order/summary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t215.inf", 
		LAST);

	web_custom_request("log_27", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t218.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||M|modal_change|<viewName:\\\"cart-modal\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);

	web_custom_request("log_28", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t219.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||M|modal_change|<viewName:\\\"cart-modal\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);

	web_custom_request("savings_4", 
		"URL=https://stage.peapod.com/api/v2.0/order/adjustments/savings", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t221.inf", 
		LAST);

	web_custom_request("summary_4", 
		"URL=https://stage.peapod.com/api/v2.0/order/summary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t222.inf", 
		LAST);

	web_custom_request("status_25", 
		"URL=https://stage.peapod.com/api/v3.0/user/order/status?routeService=false", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t224.inf", 
		LAST);

	web_custom_request("opcoloyalty_2", 
		"URL=https://stage.peapod.com/api/v2.0/user/attributes/opcoloyalty", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t227.inf", 
		LAST);

	web_custom_request("log_31", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t228.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||M|modal_change|<viewName:\\\"user-registration-modal\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);

	web_custom_request("init_12", 
		"URL=https://stage.peapod.com/api/v2.0/user/init", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t229.inf", 
		LAST);

	web_custom_request("billing_4", 
		"URL=https://stage.peapod.com/api/v2.0/user/contact/billing", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t230.inf", 
		LAST);

	web_custom_request("delivery_2", 
		"URL=https://stage.peapod.com/api/v2.0/user/contact/delivery", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t231.inf", 
		LAST);

	web_custom_request("log_32", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t233.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||M|registration_step|<action:\\\"init\\\"><step:\\\"creditCard\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);

	web_add_auto_header("Content-Type", 
		"application/json;charset=UTF-8");

	web_custom_request("billing_5", 
		"URL=https://stage.peapod.com/api/v2.0/user/contact/billing?addressLine1={C_address_URL}&addressLine2=&alternate=%7B%7D&city=Allston&contact=%7B%22areaCode%22:%22408%22,%22prefix%22:%22716%22,%22suffix%22:%222501%22,%22ext%22:null%7D&firstName={C_firstName}&lastName={C_lastName}&middleInitial=&state=MA&title=&zip=02134", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t234.inf", 
		"Mode=HTTP", 
		"Body={\"contactType\":\"billing\",\"useDeliveryForBilling\":true,\"title\":\"\",\"firstName\":\"{C_firstName}\",\"lastName\":\"{C_lastName}\",\"middleInitial\":\"\",\"addressLine1\":\"{C_address}\",\"addressLine2\":\"\",\"city\":\"Allston\",\"state\":\"MA\",\"zip\":\"02134\",\"contact\":{\"areaCode\":\"408\",\"prefix\":\"716\",\"suffix\":\"2501\",\"ext\":null},\"alternate\":{},\"phoneEntry\":\"4087162501\"}", 
		LAST);

	web_custom_request("billing_6", 
		"URL=https://stage.peapod.com/api/v2.0/user/contact/billing", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t235.inf", 
		LAST);

	web_custom_request("profile_7", 
		"URL=https://stage.peapod.com/api/v3.0/user/profile", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t236.inf", 
		LAST);

	web_custom_request("encryption.js", 
		"URL=https://safetechpageencryptionvar.chasepaymentech.com/pie/v1/encryption.js?1573716682281", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t237.inf", 
		LAST);

	web_custom_request("getkey.js", 
		"URL=https://safetechpageencryptionvar.chasepaymentech.com/pie/v1/64100000000007/getkey.js?", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t238.inf", 
		LAST);

	web_custom_request("card", 
		"URL=https://stage.peapod.com/api/v2.0/user/card", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t239.inf", 
		"Mode=HTTP", 
		"Body={\"cardNumber\":null,\"cardCVV\":null,\"ccNum\":\"482852erjXqek7t3014\",\"cvv\":\"t6T6\",\"key\":\"34e07006509bbc8e\",\"drCcNum\":\"482852hi2bzaO3T3014\",\"drCvv\":\"m324\",\"drKey\":\"1c2876e32663a3d1\",\"cardType\":\"VISA\",\"name\":\"{C_firstName}\",\"cvvLength\":3,\"expMonth\":\"04\",\"expYear\":\"24\"}", 
		LAST);

	web_custom_request("init_13", 
		"URL=https://stage.peapod.com/api/v2.0/user/init", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t240.inf", 
		LAST);

	web_custom_request("retailercard", 
		"URL=https://stage.peapod.com/api/v2.0/user/attributes/retailercard", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t241.inf", 
		LAST);

	web_custom_request("billing_7", 
		"URL=https://stage.peapod.com/api/v2.0/user/contact/billing", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t242.inf", 
		LAST);

	web_custom_request("delivery_3", 
		"URL=https://stage.peapod.com/api/v2.0/user/contact/delivery", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t243.inf", 
		LAST);

	web_custom_request("delivery_4", 
		"URL=https://stage.peapod.com/api/v2.0/user/contact/delivery", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t244.inf", 
		LAST);

	web_custom_request("card_2", 
		"URL=https://stage.peapod.com/api/v2.0/user/card", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t245.inf", 
		LAST);

	web_custom_request("alerts", 
		"URL=https://stage.peapod.com/api/v2.0/user/alerts", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t246.inf", 
		LAST);

	web_revert_auto_header("Content-Type");

	web_custom_request("log_33", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t248.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||M|registration_step|<action:\\\"next\\\"><step:\\\"confirmation\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);

	web_custom_request("log_34", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t249.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||M|registration_step|<action:\\\"next\\\"><step:\\\"confirmation\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);

	lr_end_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T14_Create_Account_Continue",LR_AUTO);
	
	lr_think_time(4);

	lr_start_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T15_Did_We_Get_It_Right_Continue");

	web_add_auto_header("Content-Type", 
		"application/json;charset=UTF-8");

	web_custom_request("alerts_2", 
		"URL=https://stage.peapod.com/api/v2.0/user/alerts", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t250.inf", 
		"Mode=HTTP", 
		"Body={\"orderChangeEmail\":true,\"mailSubIds\":[],\"availableSubscriptions\":[101,102,104],\"paperLessInvoice\":false,\"optInMessageSent\":false,\"alertMethod\":null,\"phone\":{}}", 
		LAST);

	web_custom_request("confirm", 
		"URL=https://stage.peapod.com/api/v2.0/user/attributes/confirm?value=true", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t251.inf", 
		"Mode=HTTP", 
		"Body={\"asset\":\"confirm\",\"alertsSettings\":{\"alerts\":{\"orderChangeEmail\":true,\"mailSubIds\":[],\"availableSubscriptions\":[101,102,104],\"paperLessInvoice\":false,\"optInMessageSent\":false,\"alertMethod\":null,\"phone\":{}},\"mailSubIds\":[101,102,104],\"smsAlert\":false,\"emailAlert\":false,\"secondaryEmailAlert\":false,\"mailSubs\":{\"101\":{\"selected\":false},\"102\":{\"selected\":false},\"104\":{\"selected\":false}}},\"value\":true}", 
		LAST);

	web_custom_request("status_26", 
		"URL=https://stage.peapod.com/api/v2.0/user/status", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t252.inf", 
		LAST);

	web_custom_request("status_27", 
		"URL=https://stage.peapod.com/api/v3.0/user/order/status?routeService=false", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t253.inf", 
		LAST);

	web_custom_request("token_3", 
		"URL=https://stage.peapod.com/api/v3.0/user/token", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t254.inf", 
		LAST);

	web_revert_auto_header("Content-Type");

	web_custom_request("log_35", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t256.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||M|registration_step|<action:\\\"next\\\"><step:\\\"submitted\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);

	web_custom_request("slots_16", 
		"URL=https://stage.peapod.com/api/v2.0/user/slots?delivAvail=true&headers=false&pupAvail=true&selected=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t257.inf", 
		LAST);

	web_custom_request("status_28", 
		"URL=https://stage.peapod.com/api/v2.0/user/status", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t258.inf", 
		LAST);

	web_custom_request("summary_5", 
		"URL=https://stage.peapod.com/api/v2.0/order/summary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t259.inf", 
		LAST);

	web_custom_request("log_36", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t261.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||M|modal_change|<viewName:\\\"checkout-modal\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);

	web_custom_request("checkout", 
		"URL=https://stage.peapod.com/api/v2.0/order/adjustments/checkout", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t263.inf", 
		LAST);

	web_custom_request("status_29", 
		"URL=https://stage.peapod.com/api/v3.0/user/order/status?routeService=false", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t265.inf", 
		LAST);

	web_custom_request("cms_23", 
		"URL=https://stage.peapod.com/api/v2.0/cms?dt={P_Date}&regions=%7B%22checkout_message%22:%7B%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t266.inf", 
		LAST);

	web_custom_request("log_38", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t267.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||E|content_view|<scheduledContentId:\\\"CSDEV-727\\\"><contentModuleId:\\\"CSDEV-729\\\"><contentId:\\\"CSDEV-728\\\"><region:\\\"checkout_message\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);

	lr_end_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T15_Did_We_Get_It_Right_Continue",LR_AUTO);
	
	lr_think_time(4);

	lr_start_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T16_Place_Order");

	web_add_header("Content-Type","application/json;charset=UTF-8");

	web_custom_request("checkout_2", 
		"URL=https://stage.peapod.com/api/v2.0/order/adjustments/checkout?alcoholCheck=false&unattendedAgreement=false&value=&vendorCheck=false", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t268.inf", 
		"Mode=HTTP", 
		"Body={\"alcoholCheck\":false,\"value\":\"\",\"unattendedAgreement\":false,\"vendorCheck\":false}", 
		LAST);

	web_custom_request("status_30", 
		"URL=https://stage.peapod.com/api/v3.0/user/order/status?routeService=false", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t269.inf", 
		LAST);

	web_custom_request("profile_8", 
		"URL=https://stage.peapod.com/api/v3.0/user/profile", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t270.inf", 
		LAST);

	web_custom_request("slots_17", 
		"URL=https://stage.peapod.com/api/v2.0/user/slots?delivAvail=true&headers=false&pupAvail=true&selected=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t273.inf", 
		LAST);

	web_custom_request("timetocutoff", 
		"URL=https://stage.peapod.com/api/v2.0/order/adjustments/timetocutoff", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t274.inf", 
		LAST);

	web_custom_request("cart_11", 
		"URL=https://stage.peapod.com/api/v3.0/user/cart?flags=true&image=true&sort=category+asc", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t275.inf", 
		LAST);

	web_custom_request("status_31", 
		"URL=https://stage.peapod.com/api/v2.0/user/status", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t276.inf", 
		LAST);

	web_custom_request("landing-page-id_2", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/landing-page-id", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t277.inf", 
		LAST);

	web_custom_request("browse-sort-type_2", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/browse-sort-type", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t278.inf", 
		LAST);

	web_custom_request("preferred-pup_4", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/preferred-pup", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t279.inf", 
		LAST);

	web_custom_request("browsing-service-location_2", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/browsing-service-location", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t280.inf", 
		LAST);

	web_custom_request("delivery-service-location_2", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/delivery-service-location", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t281.inf", 
		LAST);

	web_custom_request("cms_24", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22checkout_confirmation_tile%22:%7B%7D,%22checkout_confirmation_content%22:%7B%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t282.inf", 
		LAST);

	web_custom_request("status_32", 
		"URL=https://stage.peapod.com/api/v3.0/user/order/status?routeService=false", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t283.inf", 
		LAST);

	web_custom_request("search-zip_2", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/search-zip", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t284.inf", 
		LAST);

	web_custom_request("shelf-view_2", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/shelf-view", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t285.inf", 
		LAST);

	web_custom_request("token_4", 
		"URL=https://stage.peapod.com/api/v3.0/user/token", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t286.inf", 
		LAST);

	web_custom_request("has-pod-bag_2", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/has-pod-bag", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t287.inf", 
		LAST);

	web_custom_request("status_33", 
		"URL=https://stage.peapod.com/api/v3.0/user/order/status?routeService=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t288.inf", 
		LAST);

	web_custom_request("log_39", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t289.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||E|checkout_order_confirmation|<resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);

	web_custom_request("status_34", 
		"URL=https://stage.peapod.com/api/v2.0/user/status", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t290.inf", 
		LAST);

	web_custom_request("status_35", 
		"URL=https://stage.peapod.com/api/v2.0/user/status", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t291.inf", 
		LAST);

	web_custom_request("products_5", 
		"URL=https://stage.peapod.com/api/v3.0/auctioned/products?productIds=&type=seasonal", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t292.inf", 
		LAST);

	web_custom_request("366", 
		"URL=https://stage.peapod.com/api/v3.0/category/trace/366", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t293.inf", 
		LAST);

	web_custom_request("cms_25", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22notification_center_content%22:%7B%22limit%22:50%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t294.inf", 
		LAST);

	web_custom_request("promocode", 
		"URL=https://stage.peapod.com/api/v2.0/order/adjustments/promocode", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t296.inf", 
		LAST);

	web_custom_request("ga-cim", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/ga-cim", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t297.inf", 
		LAST);

	web_custom_request("log_40", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t298.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||E|content_view|<region:\\\"checkout_confirmation_content\\\"><scheduledContentId:\\\"CSDEV-4955\\\"><contentId:\\\"CSDEV-4956\\\"><contentModuleId:\\\"CSDEV-4957\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\">\"]}", 
		LAST);

	web_custom_request("products_6", 
		"URL=https://stage.peapod.com/api/v3.0/user/products?catTreeId=365&facet=nutrition&facetExcludeFilter=true&filter=&flags=true&hkInclude=true&hkOnly=false&nutrition=true&rows=15&sort=itemsPurchased+desc,+name+asc&start=0&substitute=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t299.inf", 
		LAST);

	lr_end_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T16_Place_Order",LR_AUTO);

	lr_think_time(4);

	lr_start_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T17_Back_To_Shopping");

	web_custom_request("ga-cim_2", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/ga-cim?value=1755839548.1573559453", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t301.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"preferenceName\":\"ga-cim\",\"value\":\"1755839548.1573559453\"}", 
		LAST);

	lr_end_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T17_Back_To_Shopping",LR_AUTO);
	
	lr_think_time(4);

	lr_start_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T18_Click_On_Cart");

	web_custom_request("162850,162849,157098,194773,163281", 
	//	"URL=https://stage.peapod.com/api/v3.0/user/products/162850,162849,157098,194773,163281?extendedInfo=true&flags=true&hkInclude=true&nutrition=true&substitute=true",
		"URL=https://stage.peapod.com/api/v3.0/user/products/162850,140290,215832,124943,163281?extendedInfo=true&flags=true&hkInclude=true&nutrition=true&substitute=true",	
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t308.inf", 
		LAST);

	
	web_custom_request("savings_5", 
		"URL=https://stage.peapod.com/api/v2.0/order/adjustments/savings", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t311.inf", 
		LAST);

	web_custom_request("savings_6", 
		"URL=https://stage.peapod.com/api/v2.0/order/adjustments/savings", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t312.inf", 
		LAST);

	web_custom_request("summary_6", 
		"URL=https://stage.peapod.com/api/v2.0/order/summary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t314.inf", 
		LAST);

	web_custom_request("cms_26", 
		"URL=https://stage.peapod.com/api/v2.0/cms?dt={P_Date}&regions=%7B%22cart_view%22:%7B%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t315.inf", 
		LAST);
	
	web_custom_request("log_41", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t316.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||M|modal_change|<viewName:\\\"cart-modal\\\"><resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);

	web_custom_request("slots_18", 
		"URL=https://stage.peapod.com/api/v2.0/user/slots?delivAvail=true&headers=false&pupAvail=true&selected=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t320.inf", 
		LAST);

	lr_end_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T18_Click_On_Cart",LR_AUTO);

	lr_think_time(4);

	lr_start_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T19_Cancel_Order");

	web_custom_request("order", 
		"URL=https://stage.peapod.com/api/v3.0/user/order", 
		"Method=DELETE", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t321.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("slots_19", 
		"URL=https://stage.peapod.com/api/v2.0/user/slots?delivAvail=true&headers=false&pupAvail=true&selected=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t322.inf", 
		LAST);

	web_custom_request("status_36", 
		"URL=https://stage.peapod.com/api/v2.0/user/status", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t323.inf", 
		LAST);

	web_custom_request("status_37", 
		"URL=https://stage.peapod.com/api/v3.0/user/order/status?routeService=false", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t324.inf", 
		LAST);

	web_custom_request("cart_12", 
		"URL=https://stage.peapod.com/api/v3.0/user/cart?flags=true&image=true&sort=category+asc", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t325.inf", 
		LAST);

	web_custom_request("profile_9", 
		"URL=https://stage.peapod.com/api/v3.0/user/profile", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t326.inf", 
		LAST);

	web_custom_request("preferred-pup_5", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/preferred-pup", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t327.inf", 
		LAST);

	web_custom_request("landing-page-id_3", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/landing-page-id", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t328.inf", 
		LAST);

	web_custom_request("delivery-service-location_3", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/delivery-service-location", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t329.inf", 
		LAST);

	web_custom_request("has-pod-bag_3", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/has-pod-bag", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t330.inf", 
		LAST);

	web_custom_request("browse-sort-type_3", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/browse-sort-type", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t331.inf", 
		LAST);

	web_custom_request("ga-cim_3", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/ga-cim", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t332.inf", 
		LAST);

	web_custom_request("token_5", 
		"URL=https://stage.peapod.com/api/v3.0/user/token", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t333.inf", 
		LAST);

	web_custom_request("shelf-view_3", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/shelf-view", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t334.inf", 
		LAST);

	web_custom_request("browsing-service-location_3", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/browsing-service-location", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t335.inf", 
		LAST);

	web_custom_request("search-zip_3", 
		"URL=https://stage.peapod.com/api/v2.0/user/preferences/search-zip", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t336.inf", 
		LAST);

	web_custom_request("status_38", 
		"URL=https://stage.peapod.com/api/v2.0/user/status", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t337.inf", 
		LAST);

	web_custom_request("status_39", 
		"URL=https://stage.peapod.com/api/v3.0/user/order/status?routeService=false", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t338.inf", 
		LAST);

	web_custom_request("cms_27", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22notification_center_content%22:%7B%22limit%22:50%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t340.inf", 
		LAST);

	web_custom_request("promocode_2", 
		"URL=https://stage.peapod.com/api/v2.0/order/adjustments/promocode", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t341.inf", 
		LAST);

	web_custom_request("status_40", 
		"URL=https://stage.peapod.com/api/v3.0/user/order/status?routeService=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t342.inf", 
		LAST);

	web_custom_request("status_41", 
		"URL=https://stage.peapod.com/api/v2.0/user/status", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t343.inf", 
		LAST);

	lr_end_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T19_Cancel_Order",LR_AUTO);

	lr_think_time(4);

	web_custom_request("log_43", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t344.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||E|order_cancel|<resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);

	lr_start_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T20_Empty_Cart");

	web_custom_request("cart_13", 
		//"URL=https://stage.peapod.com/api/v3.0/user/cart?clear=true&productId=140290,212536,90668,124477", 
		"URL=https://stage.peapod.com/api/v3.0/user/cart?clear=true&productId=140290,215832,124943", 	
		"Method=DELETE", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t347.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("log_45", 
		"URL=https://stage.peapod.com/api/v2.0/client/log", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t348.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"messages\":[\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.97 Safari/537.36||E|cart_empty|<resolution:\\\"1536x754\\\"><screenSize:\\\"desktop\\\"><mobileapp:\\\"0\\\">\"]}", 
		LAST);

	lr_end_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T20_Empty_Cart",LR_AUTO);
	
	lr_think_time(4);

	lr_start_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T21_Logout");

	web_custom_request("logout", 
		"URL=https://stage.peapod.com/api/v2.0/user/logout", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t349.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_custom_request("stage.peapod.com_3", 
		"URL=https://stage.peapod.com/", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://stage.peapod.com/browse-aisles/categories/1/categories/1633/categories/1634-fish", 
		"Snapshot=t350.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("PeapodIcons.json_4", 
		"URL=https://stage.peapod.com/shop/images/icons/PeapodIcons.json", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/", 
		"Snapshot=t352.inf", 
		LAST);

	web_custom_request("cms_28", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22gateway_promo_overlay%22:%7B%22limit%22:1,%22ff%22:%7B%22Landing+Page+Id%22:%5B%22default%22%5D%7D%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/", 
		"Snapshot=t354.inf", 
		LAST);

	web_custom_request("%7B%7B%20appLink.image.src%20%7D%7D_2", 
		"URL=https://stage.peapod.com/%7B%7B%20appLink.image.src%20%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://stage.peapod.com/", 
		"Snapshot=t355.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("cms_29", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22resource_bundle%22:%7B%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/", 
		"Snapshot=t356.inf", 
		LAST);

	web_custom_request("cms_30", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22gateway_page_content%22:%7B%22limit%22:1,%22ff%22:%7B%22Landing+Page+Id%22:%5B%22default%22%5D%7D%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/", 
		"Snapshot=t357.inf", 
		LAST);

	web_custom_request("cms_31", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22gateway_promo_content%22:%7B%22limit%22:1,%22ff%22:%7B%22Landing+Page+Id%22:%5B%22default%22%5D%7D%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/", 
		"Snapshot=t358.inf", 
		LAST);

	web_custom_request("cms_32", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22gateway_marketing_content%22:%7B%22limit%22:1,%22ff%22:%7B%22Landing+Page+Id%22:%5B%22default%22%5D%7D%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/", 
		"Snapshot=t359.inf", 
		LAST);

	web_custom_request("cms_33", 
		"URL=https://stage.peapod.com/api/v2.0/cms?regions=%7B%22resource_bundle%22:%7B%7D%7D", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/", 
		"Snapshot=t361.inf", 
		LAST);

	web_custom_request("manifest-ppod.json_4", 
		"URL=https://stage.peapod.com/shop/images/favicon/manifest-ppod.json", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stage.peapod.com/", 
		"Snapshot=t366.inf", 
		LAST);

	lr_end_transaction("S01_PRISM_Peapod_SIT_SignIn_Checkout_T21_Logout",LR_AUTO);

	return 0;
}