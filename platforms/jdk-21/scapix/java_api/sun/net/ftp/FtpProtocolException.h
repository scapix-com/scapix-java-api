// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_FTP_FTPPROTOCOLEXCEPTION_FWD
#define SCAPIX_JAVA_API_SUN_NET_FTP_FTPPROTOCOLEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::ftp { class FtpProtocolException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::ftp::FtpProtocolException>
{
	static constexpr fixed_string class_name = "sun/net/ftp/FtpProtocolException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_FTP_FTPPROTOCOLEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_FTP_FTPPROTOCOLEXCEPTION)
#define SCAPIX_JAVA_API_SUN_NET_FTP_FTPPROTOCOLEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/net/ftp/FtpReplyCode.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::ftp::FtpProtocolException : public jni::object_base<"sun/net/ftp/FtpProtocolException",
	java::lang::Exception>
{
public:

	static jni::ref<sun::net::ftp::FtpProtocolException> new_object(jni::ref<java::lang::String> detail) { return base_::new_object(detail); }
	static jni::ref<sun::net::ftp::FtpProtocolException> new_object(jni::ref<java::lang::String> detail, jni::ref<sun::net::ftp::FtpReplyCode> code) { return base_::new_object(detail, code); }
	jni::ref<sun::net::ftp::FtpReplyCode> getReplyCode() { return call_method<"getReplyCode", jni::ref<sun::net::ftp::FtpReplyCode>>(); }

protected:

	FtpProtocolException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_FTP_FTPPROTOCOLEXCEPTION