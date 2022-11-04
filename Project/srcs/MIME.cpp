/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MIME.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 08:50:49 by kferterb          #+#    #+#             */
/*   Updated: 2022/11/04 08:50:50 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MIME.hpp"

const std::map<std::string, std::vector<std::string> >	MIME::createMap()
{
	std::map<std::string, std::vector<std::string> >	m;
	m["ai"].push_back("application/postscript");
	m["aif"].push_back("audio/aiff");
	m["aif"].push_back("audio/x-aiff");
	m["aiff"].push_back("audio/aiff");
	m["aiff"].push_back("audio/x-aiff");
	m["ani"].push_back("application/x-navi-animation");
	m["aos"].push_back("application/x-nokia-9000-communicator-add-on-software");
	m["aps"].push_back("application/mime");
	m["arc"].push_back("application/octet-stream");
	m["arj"].push_back("application/arj");
	m["arj"].push_back("application/octet-stream");
	m["art"].push_back("image/x-jg");
	m["asf"].push_back("video/x-ms-asf");
	m["asm"].push_back("text/x-asm");
	m["asp"].push_back("text/asp");
	m["asx"].push_back("application/x-mplayer2");
	m["asx"].push_back("video/x-ms-asf");
	m["asx"].push_back("video/x-ms-asf-plugin");
	m["au"].push_back("audio/basic");
	m["au"].push_back("audio/x-au");
	m["avi"].push_back("application/x-troff-msvideo");
	m["avi"].push_back("video/avi");
	m["avi"].push_back("video/msvideo");
	m["avi"].push_back("video/x-msvideo");
	m["bin"].push_back("application/mac-binary");
	m["bin"].push_back("application/macbinary");
	m["bin"].push_back("application/octet-stream");
	m["bin"].push_back("application/x-binary");
	m["bin"].push_back("application/x-macbinary");
	m["bm"].push_back("image/bmp");
	m["bmp"].push_back("image/bmp");
	m["bmp"].push_back("image/x-windows-bmp");
	m["boo"].push_back("application/book");
	m["book"].push_back("application/book");
	m["c"].push_back("text/x-c");
	m["c++"].push_back("text/plain");
	m["ccad"].push_back("application/clariscad");
	m["class"].push_back("application/java");
	m["class"].push_back("application/java-byte-code");
	m["class"].push_back("application/x-java-class");
	m["com"].push_back("application/octet-stream");
	m["com"].push_back("text/plain");
	m["conf"].push_back("text/plain");
	m["cpp"].push_back("text/x-c");
	m["cpt"].push_back("application/mac-compactpro");
	m["cpt"].push_back("application/x-compactpro");
	m["cpt"].push_back("application/x-cpt");
	m["css"].push_back("application/x-pointplus");
	m["css"].push_back("text/css");
	m["dcr"].push_back("application/x-director");
	m["def"].push_back("text/plain");
	m["dif"].push_back("video/x-dv");
	m["dir"].push_back("application/x-director");
	m["dl"].push_back("video/dl");
	m["dl"].push_back("video/x-dl");
	m["doc"].push_back("application/msword");
	m["dot"].push_back("application/msword");
	m["drw"].push_back("application/drafting");
	m["dvi"].push_back("application/x-dvi");
	m["dwg"].push_back("application/acad");
	m["dwg"].push_back("image/vnd.dwg");
	m["dwg"].push_back("image/x-dwg");
	m["dxf"].push_back("application/dxf");
	m["dxf"].push_back("image/vnd.dwg");
	m["dxf"].push_back("image/x-dwg");
	m["dxr"].push_back("application/x-director");
	m["exe"].push_back("application/octet-stream");
	m["gif"].push_back("image/gif");
	m["gz"].push_back("application/x-compressed");
	m["gz"].push_back("application/x-gzip");
	m["gzip"].push_back("application/x-gzip");
	m["gzip"].push_back("multipart/x-gzip");
	m["h"].push_back("text/plain");
	m["h"].push_back("text/x-h");
	m["hpp"].push_back("text/plain");
	m["hpp"].push_back("text/x-h");
	m["hlp"].push_back("application/hlp");
	m["hlp"].push_back("application/x-helpfile");
	m["hlp"].push_back("application/x-winhelp");
	m["htc"].push_back("text/x-component");
	m["htm"].push_back("text/html");
	m["html"].push_back("text/html");
	m["htmls"].push_back("text/html");
	m["htt"].push_back("text/webviewhtml");
	m["ice"].push_back("x-conference/x-cooltalk");
	m["ico"].push_back("image/x-icon");
	m["inf"].push_back("application/inf");
	m["jam"].push_back("audio/x-jam");
	m["jav"].push_back("text/plain");
	m["jav"].push_back("text/x-java-source");
	m["java"].push_back("text/plain");
	m["java"].push_back("text/x-java-source");
	m["jcm"].push_back("application/x-java-commerce");
	m["jfif"].push_back("image/jpeg");
	m["jfif"].push_back("image/pjpeg");
	m["jfif"].push_back("tbnl	image/jpeg");
	m["jpe"].push_back("image/jpeg");
	m["jpe"].push_back("image/pjpeg");
	m["jpeg"].push_back("image/jpeg");
	m["jpeg"].push_back("image/pjpeg");
	m["jpg"].push_back("image/jpeg");
	m["jpg"].push_back("image/pjpeg");
	m["jps"].push_back("image/x-jps");
	m["js"].push_back("application/x-javascript");
	m["js"].push_back("application/javascript");
	m["js"].push_back("application/ecmascript");
	m["js"].push_back("text/javascript");
	m["js"].push_back("text/ecmascript");
	m["latex"].push_back("application/x-latex");
	m["lha"].push_back("application/lha");
	m["lha"].push_back("application/octet-stream");
	m["lha"].push_back("application/x-lha");
	m["lhx"].push_back("application/octet-stream");
	m["list"].push_back("text/plain");
	m["lsp"].push_back("application/x-lisp");
	m["lsp"].push_back("text/x-script.lisp");
	m["lst"].push_back("text/plain");
	m["lzh"].push_back("application/octet-stream");
	m["lzh"].push_back("application/x-lzh");
	m["lzx"].push_back("application/lzx");
	m["lzx"].push_back("application/octet-stream");
	m["lzx"].push_back("application/x-lzx");
	m["m3u"].push_back("audio/x-mpequrl");
	m["man"].push_back("application/x-troff-man");
	m["mid"].push_back("application/x-midi");
	m["mid"].push_back("audio/midi");
	m["mid"].push_back("audio/x-mid");
	m["mid"].push_back("audio/x-midi");
	m["mid"].push_back("music/crescendo");
	m["mid"].push_back("x-music/x-midi");
	m["midi"].push_back("application/x-midi");
	m["midi"].push_back("audio/midi");
	m["midi"].push_back("audio/x-mid");
	m["midi"].push_back("audio/x-midi");
	m["midi"].push_back("music/crescendo");
	m["midi"].push_back("x-music/x-midi");
	m["mod"].push_back("audio/mod");
	m["mod"].push_back("audio/x-mod");
	m["mov"].push_back("video/quicktime");
	m["movie"].push_back("video/x-sgi-movie");
	m["mp2"].push_back("audio/mpeg");
	m["mp2"].push_back("audio/x-mpeg");
	m["mp2"].push_back("video/mpeg");
	m["mp2"].push_back("video/x-mpeg");
	m["mp2"].push_back("video/x-mpeq2a");
	m["mp3"].push_back("audio/mpeg3");
	m["mp3"].push_back("audio/x-mpeg-3");
	m["mp3"].push_back("video/mpeg");
	m["mp3"].push_back("video/x-mpeg");
	m["mp4"].push_back("video/mp4");
	m["mpa"].push_back("audio/mpeg");
	m["mpa"].push_back("video/mpeg");
	m["mpeg"].push_back("video/mpeg");
	m["mpg"].push_back("audio/mpeg");
	m["mpg"].push_back("video/mpeg");
	m["mpga"].push_back("audio/mpeg");
	m["pas"].push_back("text/pascal");
	m["pcl"].push_back("application/vnd.hp-pcl");
	m["pcl"].push_back("application/x-pcl");
	m["pct"].push_back("image/x-pict");
	m["pcx"].push_back("image/x-pcx");
	m["pdf"].push_back("application/pdf");
	m["pic"].push_back("image/pict");
	m["pict"].push_back("image/pict");
	m["pl"].push_back("text/plain");
	m["pl"].push_back("text/x-script.perl");
	m["pm"].push_back("image/x-xpixmap");
	m["pm"].push_back("text/x-script.perl-module");
	m["pm4"].push_back("application/x-pagemaker");
	m["pm5"].push_back("application/x-pagemaker");
	m["png"].push_back("image/png");
	m["pot"].push_back("application/mspowerpoint");
	m["pot"].push_back("application/vnd.ms-powerpoint");
	m["ppa"].push_back("application/vnd.ms-powerpoint");
	m["pps"].push_back("application/mspowerpoint");
	m["pps"].push_back("application/vnd.ms-powerpoint");
	m["ppt"].push_back("application/mspowerpoint");
	m["ppt"].push_back("application/powerpoint");
	m["ppt"].push_back("application/vnd.ms-powerpoint");
	m["ppt"].push_back("application/x-mspowerpoint");
	m["ppz"].push_back("application/mspowerpoint");
	m["ps"].push_back("application/postscript");
	m["psd"].push_back("application/octet-stream");
	m["pwz"].push_back("application/vnd.ms-powerpoint");
	m["py"].push_back("text/x-script.phyton");
	m["pyc"].push_back("applicaiton/x-bytecode.python");
	m["qt"].push_back("video/quicktime");
	m["qtif"].push_back("image/x-quicktime");
	m["ra"].push_back("audio/x-pn-realaudio");
	m["ra"].push_back("audio/x-pn-realaudio-plugin");
	m["ra"].push_back("audio/x-realaudio");
	m["ram"].push_back("audio/x-pn-realaudio");
	m["rm"].push_back("application/vnd.rn-realmedia");
	m["rm"].push_back("audio/x-pn-realaudio");
	m["rpm"].push_back("audio/x-pn-realaudio-plugin");
	m["rtf"].push_back("application/rtf");
	m["rtf"].push_back("application/x-rtf");
	m["rtf"].push_back("text/richtext");
	m["rtx"].push_back("application/rtf");
	m["rtx"].push_back("text/richtext");
	m["rv"].push_back("video/vnd.rn-realvideo");
	m["sgml"].push_back("text/sgml");
	m["sgml"].push_back("text/x-sgml");
	m["sh"].push_back("application/x-bsh");
	m["sh"].push_back("application/x-sh");
	m["sh"].push_back("application/x-shar");
	m["sh"].push_back("text/x-script.sh");
	m["shtml"].push_back("text/html");
	m["shtml"].push_back("text/x-server-parsed-html");
	m["ssi"].push_back("text/x-server-parsed-html");
	m["svg"].push_back("image/svg+xml");
	m["tar"].push_back("application/x-tar");
	m["tcl"].push_back("application/x-tcl");
	m["tcl"].push_back("text/x-script.tcl");
	m["text"].push_back("application/plain");
	m["text"].push_back("text/plain");
	m["tgz"].push_back("application/gnutar");
	m["tgz"].push_back("application/x-compressed");
	m["tif"].push_back("image/tiff");
	m["tif"].push_back("image/x-tiff");
	m["tiff"].push_back("image/tiff");
	m["tiff"].push_back("image/x-tiff");
	m["txt"].push_back("text/plain");
	m["uri"].push_back("text/uri-list");
	m["vcd"].push_back("application/x-cdlink");
	m["vmd"].push_back("application/vocaltec-media-desc");
	m["vrml"].push_back("application/x-vrml");
	m["vrml"].push_back("model/vrml");
	m["vrml"].push_back("x-world/x-vrml");
	m["vsd"].push_back("application/x-visio");
	m["vst"].push_back("application/x-visio");
	m["vsw"].push_back("application/x-visio");
	m["wav"].push_back("audio/wav");
	m["wav"].push_back("audio/x-wav");
	m["wmf"].push_back("windows/metafile");
	m["xla"].push_back("application/excel");
	m["xla"].push_back("application/x-excel");
	m["xla"].push_back("application/x-msexcel");
	m["xlb"].push_back("application/excel");
	m["xlb"].push_back("application/vnd.ms-excel");
	m["xlb"].push_back("application/x-excel");
	m["xlc"].push_back("application/excel");
	m["xlc"].push_back("application/vnd.ms-excel");
	m["xlc"].push_back("application/x-excel");
	m["xld"].push_back("application/excel");
	m["xld"].push_back("application/x-excel");
	m["xlk"].push_back("application/excel");
	m["xlk"].push_back("application/x-excel");
	m["xll"].push_back("application/excel");
	m["xll"].push_back("application/vnd.ms-excel");
	m["xll"].push_back("application/x-excel");
	m["xlm"].push_back("application/excel");
	m["xlm"].push_back("application/vnd.ms-excel");
	m["xlm"].push_back("application/x-excel");
	m["xls"].push_back("application/excel");
	m["xls"].push_back("application/vnd.ms-excel");
	m["xls"].push_back("application/x-excel");
	m["xls"].push_back("application/x-msexcel");
	m["xlt"].push_back("application/excel");
	m["xlt"].push_back("application/x-excel");
	m["xlv"].push_back("application/excel");
	m["xlv"].push_back("application/x-excel");
	m["xlw"].push_back("application/excel");
	m["xlw"].push_back("application/vnd.ms-excel");
	m["xlw"].push_back("application/x-excel");
	m["xlw"].push_back("application/x-msexcel");
	m["xm"].push_back("audio/xm");
	m["xml"].push_back("application/xml");
	m["xml"].push_back("text/xml");
	m["z"].push_back("application/x-compress");
	m["z"].push_back("application/x-compressed");
	m["zip"].push_back("application/x-compressed");
	m["zip"].push_back("application/x-zip-compressed");
	m["zip"].push_back("application/zip");
	m["zip"].push_back("multipart/x-zip");
	return m;
}

const std::string	&MIME::getType(const std::string &extension)
{
	try
	{
		return MIME::_types.at(extension)[0];
	}
	catch(const std::exception& e)
	{
		throw "406";
	}
}

const std::map<std::string, std::vector<std::string> >	MIME::_types = MIME::createMap();
