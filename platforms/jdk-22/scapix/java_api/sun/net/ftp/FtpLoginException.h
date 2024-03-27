// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/IOException.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_FTP_FTPLOGINEXCEPTION_FWD
#define SCAPIX_JAVA_API_SUN_NET_FTP_FTPLOGINEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::ftp { class FtpLoginException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::ftp::FtpLoginException>
{
	static constexpr fixed_string class_name = "sun/net/ftp/FtpLoginException";
	using base_classes = std::tuple<scapix::java_api::java::io::IOException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_FTP_FTPLOGINEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_FTP_FTPLOGINEXCEPTION)
#define SCAPIX_JAVA_API_SUN_NET_FTP_FTPLOGINEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::ftp::FtpLoginException : public jni::object_base<"sun/net/ftp/FtpLoginException",
	java::io::IOException>
{
public:

	static jni::ref<sun::net::ftp::FtpLoginException> new_object(jni::ref<java::lang::String> s) { return base_::new_object(s); }

protected:

	FtpLoginException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_FTP_FTPLOGINEXCEPTION
