<?php
/**
* 函数：提供给客户端进行连接XML-RPC服务器端的函数
* 参数：
* $host  需要连接的主机
* $port  连接主机的端口
* $rpc_server XML-RPC服务器端文件
* $request  封装的XML请求信息
* 返回：连接成功成功返回由服务器端返回的XML信息，失败返回false
*/
error_reporting(E_ALL);
function rpc_client_call($host, $port, $rpc_server, $request) {

	//打开指定的服务器端
	$fp = fsockopen($host, $port);

	//构造需要进行通信的XML-RPC服务器端的查询POST请求信息
	$query = "POST $rpc_server HTTP/1.0\nUser_Agent: XML-RPC Client\nHost: ".$host."\nContent-Type: text/xml\nContent-Length: ".strlen($request)."\n\n".$request."\n";

	//把构造好的HTTP协议发送给服务器，失败返回false
	if (!fputs($fp, $query, strlen($query)))
	{
		$errstr = "Write error";
		return false;
	}

	//获取从服务器端返回的所有信息，包括HTTP头和XML信息
	$contents = '';
	while (!feof($fp))
	{
		$contents .= fgets($fp);
	}

	//关闭连接资源后返回获取的内容
	fclose($fp);
	return $contents;
}

//构造连接RPC服务器端的信息
$host  = 'www.oscan.org';
$port  = 80;
$rpc_server = '/xmlrpc.php';

$content ='<?xml version="1.0"?> <methodCall>  <methodName>blogger.getUsersBlogs</methodName>  <params>  <param><value><string>C6CE3FFB3174106584CBB250C0B0519BF4E294</string></value></param>  <param><value><string>ewilliams</string></value></param>  <param><value><string>secret</string></value></param>  </params> </methodCall>';

//把需要发送的XML请求进行编码成XML，需要调用的方法是rpc_server，参数是get
$request = xmlrpc_encode($content);
var_dump($request);
//调用rpc_client_call函数把所有请求发送给XML-RPC服务器端后获取信息
$response = rpc_client_call($host, $port, $rpc_server, $request);

//分析从服务器端返回的XML，去掉HTTP头信息，并且把XML转为PHP能识别的字符串
$split = '<?xml version="1.0" encoding="utf-8"?>';
$xml =  explode($split, $response);
$xml = $split . array_pop($xml);
//$response = xmlrpc_decode($xml);

//输出从RPC服务器端获取的信息
print_r($response);

?> 