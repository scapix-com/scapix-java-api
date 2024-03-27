// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_FTP_FTPDIRPARSER_FWD
#define SCAPIX_JAVA_API_SUN_NET_FTP_FTPDIRPARSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::ftp { class FtpDirParser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::ftp::FtpDirParser>
{
	static constexpr fixed_string class_name = "sun/net/ftp/FtpDirParser";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_FTP_FTPDIRPARSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_FTP_FTPDIRPARSER)
#define SCAPIX_JAVA_API_SUN_NET_FTP_FTPDIRPARSER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/net/ftp/FtpDirEntry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::ftp::FtpDirParser : public jni::object_base<"sun/net/ftp/FtpDirParser",
	java::lang::Object>
{
public:

	jni::ref<sun::net::ftp::FtpDirEntry> parseLine(jni::ref<java::lang::String> p1) { return call_method<"parseLine", jni::ref<sun::net::ftp::FtpDirEntry>>(p1); }

protected:

	FtpDirParser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_FTP_FTPDIRPARSER
