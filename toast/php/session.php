<?php
$GLOBALS['facebook_config']['debug'] = 0;
include_once('facebook_init.php');
include_once('conn.php');

$result = mysql_query('SELECT fbml FROM profile_box WHERE id=1;');
$row = mysql_fetch_row($result);
$content = $row[0] . '<br />' . date('Y:m:d H:i:s', time());
$content = addslashes($content);
mysql_query("UPDATE profile_box SET fbml = '$content' WHERE id =1 LIMIT 1 ;");
$facebook->api_client->session_key = 'f9a156b515d1767e56ac66d3-524704611';
//$facebook->api_client->auth_getSession('386f68de69f4bdec0c1962fe796642bd');
//$facebook->api_client->feed_publishStoryToUser('posted from "infinite session" to news feed', $content);
//$facebook->api_client->feed_publishActionOfUser('posted from "infinite session" to mini-feed', $content);
$facebook->api_client->profile_setFBML( $content, '527144602' );
$facebook->api_client->profile_setFBML( $content, '524704611' );
$facebook->api_client->profile_setFBML( $content, '508269226' );
?>